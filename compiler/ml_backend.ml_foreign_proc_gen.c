/*
** Automatically generated from `ml_foreign_proc_gen.m'
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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



#line 561 "ml_foreign_proc_gen.m"
struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s {
#line 561 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7;
#line 566 "ml_foreign_proc_gen.m"
  MR_bool ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded;
#line 566 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13;
#line 570 "ml_foreign_proc_gen.m"
  jmp_buf ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0;
#line 570 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14;
#line 570 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27;
#line 571 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14;
#line 561 "ml_foreign_proc_gen.m"
};


#line 174 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0;

#line 177 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 180 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0;

#line 183 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1;

#line 186 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2];

#line 189 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2];

#line 192 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2];

#line 195 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0;

#line 198 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1;

#line 201 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2;

#line 204 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[3];

#line 207 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[3];

#line 210 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[3];

#line 213 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
#line 216 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 218 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 221 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
#line 224 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 226 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 228 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3);

#line 231 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
#line 234 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 236 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 239 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
#line 242 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 244 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 246 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3);

#line 416 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigArgs_17,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 416 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__C_Code_19,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);

#line 192 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
#line 192 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg);

#line 168 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__TargetLang_14,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_15,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_16,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_17,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_19,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 168 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__JavaCode_21,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_22,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_23,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_24,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);

#line 192 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__192__1_2_p_0(
#line 192 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 192 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_53);

#line 262 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
#line 262 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 262 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 262 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3);

#line 262 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
#line 262 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 262 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 655 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
#line 655 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 655 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 655 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3);

#line 655 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
#line 655 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 655 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 988 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
#line 988 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38);

#line 944 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
#line 944 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_2,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);

#line 873 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
#line 873 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);

#line 821 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
#line 821 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
#line 821 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
#line 821 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
#line 821 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
#line 821 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
#line 821 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12);

#line 760 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_9,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_10,
#line 760 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_11,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_12,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_13,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_14,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28);

#line 740 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
#line 740 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 740 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
#line 740 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
#line 740 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 740 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);

#line 733 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
#line 733 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 733 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 733 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 733 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3,
#line 733 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_4);

#line 728 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
#line 728 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 728 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgList_7,
#line 728 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInputs_8,
#line 728 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11,
#line 728 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12);

#line 662 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
#line 662 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 662 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_2,
#line 662 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 662 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4);

#line 613 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
#line 613 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 613 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_2,
#line 613 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 613 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4);

#line 592 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_3,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_4);

#line 570 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
#line 570 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 571 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
#line 571 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 570 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
#line 570 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 570 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
#line 570 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 561 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
#line 561 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__C_Codes_7,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_9,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashUndef_10,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);

#line 537 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
#line 537 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_6,
#line 537 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_7,
#line 537 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_8,
#line 537 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ObtainLock_9,
#line 537 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ReleaseLock_10);

#line 71 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
#line 71 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
#line 71 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
#line 71 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 71 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);


static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_1[19][2];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[21][1];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_4[1][8];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_5[1][5];


#line 115 "ml_foreign_proc_gen.m"
/* sealed */ struct ml_backend__ml_foreign_proc_gen__vector_common_type_3_0_s {
#line 115 "ml_foreign_proc_gen.m"
  const MR_Word ml_backend__ml_foreign_proc_gen__vector_common_type_3_0__vct_3_f_0;
#line 115 "ml_foreign_proc_gen.m"
};

static /* final */ const struct ml_backend__ml_foreign_proc_gen__vector_common_type_3_0_s ml_backend__ml_foreign_proc_gen_vector_common_3[4];



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
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[21][1] = {
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
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) ";\n"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) ");\n"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\t"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) " = false;\n"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "{\n"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "\t\t{\n"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "\n\t\t;}\n"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "#undef MR_PROC_LABEL\n"))
  },
  /* row 20 */
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



#line 838 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0
  }
};

#line 846 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 854 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0 = {
  (MR_String) "mutable_special_case",
  (MR_Integer) 0
};

#line 860 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1 = {
  (MR_String) "not_mutable_special_case",
  (MR_Integer) 1
};

#line 866 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

#line 872 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

#line 878 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 884 "ml_backend.ml_foreign_proc_gen.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 901 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0 = {
  (MR_String) "kind_det",
  (MR_Integer) 0
};

#line 907 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1 = {
  (MR_String) "kind_semi",
  (MR_Integer) 1
};

#line 913 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2 = {
  (MR_String) "kind_failure",
  (MR_Integer) 2
};

#line 919 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2
};

#line 926 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1
};

#line 933 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 940 "ml_backend.ml_foreign_proc_gen.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_ordinary_pragma_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
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

#line 957 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
#line 960 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 962 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 964 "ml_backend.ml_foreign_proc_gen.c"
{
#line 966 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 968 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 971 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 973 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2));
    }
#line 976 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 978 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 980 "ml_backend.ml_foreign_proc_gen.c"
}

#line 983 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
#line 986 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 988 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 990 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3)
#line 992 "ml_backend.ml_foreign_proc_gen.c"
{
#line 994 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 996 "ml_backend.ml_foreign_proc_gen.c"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1;

#line 999 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1001 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(&ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3));
    }
#line 1004 "ml_backend.ml_foreign_proc_gen.c"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1));
#line 1006 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1008 "ml_backend.ml_foreign_proc_gen.c"
}

#line 1011 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
#line 1014 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 1016 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 1018 "ml_backend.ml_foreign_proc_gen.c"
{
#line 1020 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 1022 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 1025 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1027 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2));
    }
#line 1030 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 1032 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1034 "ml_backend.ml_foreign_proc_gen.c"
}

#line 1037 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
#line 1040 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 1042 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 1044 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3)
#line 1046 "ml_backend.ml_foreign_proc_gen.c"
{
#line 1048 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 1050 "ml_backend.ml_foreign_proc_gen.c"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1;

#line 1053 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1055 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(&ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3));
    }
#line 1058 "ml_backend.ml_foreign_proc_gen.c"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1));
#line 1060 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1062 "ml_backend.ml_foreign_proc_gen.c"
}

#line 416 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigArgs_17,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 416 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__C_Code_19,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
#line 416 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45)
#line 416 "ml_foreign_proc_gen.m"
{
#line 423 "ml_foreign_proc_gen.m"
  {
#line 423 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Args_25;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_26;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_27;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_28;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements_30;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_31;
#line 423 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ObtainLock_32;
#line 423 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ReleaseLock_33;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_37;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_38;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_48_48;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_191_191;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_192_192;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_193_193;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_194_194;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_195_195;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_196_196;

#line 424 "ml_foreign_proc_gen.m"
    {
#line 424 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 427 "ml_foreign_proc_gen.m"
    {
#line 427 "ml_foreign_proc_gen.m"
      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ml_backend__ml_foreign_proc_gen__OrigArgs_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, &ml_backend__ml_foreign_proc_gen__Args_25);
    }
#line 428 "ml_foreign_proc_gen.m"
    {
#line 428 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44, ml_backend__ml_foreign_proc_gen__Lang_24, ml_backend__ml_foreign_proc_gen__Args_25, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_26);
    }
#line 431 "ml_foreign_proc_gen.m"
    {
#line 431 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_24, ml_backend__ml_foreign_proc_gen__Args_25, &ml_backend__ml_foreign_proc_gen__AssignInputsList_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46);
    }
#line 434 "ml_foreign_proc_gen.m"
    {
#line 434 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__Args_25, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_28, ml_backend__ml_foreign_proc_gen__Decls_21, &ml_backend__ml_foreign_proc_gen__ConvStatements_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47);
    }
#line 438 "ml_foreign_proc_gen.m"
    {
#line 438 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ThreadSafe_31 = parse_tree__prog_data__get_thread_safe_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 439 "ml_foreign_proc_gen.m"
    {
#line 439 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__ThreadSafe_31, ml_backend__ml_foreign_proc_gen__PredId_15, &ml_backend__ml_foreign_proc_gen__ObtainLock_32, &ml_backend__ml_foreign_proc_gen__ReleaseLock_33);
    }
#line 443 "ml_foreign_proc_gen.m"
    {
#line 443 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 443 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_48_48, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 443 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 443 "ml_foreign_proc_gen.m"
    }
#line 443 "ml_foreign_proc_gen.m"
    {
#line 443 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(ml_backend__ml_foreign_proc_gen__V_48_48, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34, &ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);
    }
#line 447 "ml_foreign_proc_gen.m"
    {
#line 447 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36);
    }
#line 469 "ml_foreign_proc_gen.m"
#line 469 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_13) {
#line 469 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 469 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 451 "ml_foreign_proc_gen.m"
        {
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_149_149;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_154_154;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_155_155;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_156_156;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_157_157;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_162_162;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_163_163;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_164_164;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_165_165;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_166_166;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_169_169;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_170_170;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_171_171;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_176_176;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_177_177;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_178_178;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_181_181;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_182_182;
#line 451 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_184_184;

#line 459 "ml_foreign_proc_gen.m"
          {
#line 459 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 459 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_165_165, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 459 "ml_foreign_proc_gen.m"
          }
#line 461 "ml_foreign_proc_gen.m"
          {
#line 461 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 461 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_171_171, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 461 "ml_foreign_proc_gen.m"
          }
#line 461 "ml_foreign_proc_gen.m"
          {
#line 461 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 461 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_170_170, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 461 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_170_170, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_171_171));
#line 461 "ml_foreign_proc_gen.m"
          }
#line 461 "ml_foreign_proc_gen.m"
          {
#line 461 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_169_169, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_170_170));
#line 461 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
#line 461 "ml_foreign_proc_gen.m"
          }
#line 460 "ml_foreign_proc_gen.m"
          {
#line 460 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_166_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
#line 460 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_166_166, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_169_169));
#line 460 "ml_foreign_proc_gen.m"
          }
#line 459 "ml_foreign_proc_gen.m"
          {
#line 459 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_164_164, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_165_165));
#line 459 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_164_164, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_166_166));
#line 459 "ml_foreign_proc_gen.m"
          }
#line 465 "ml_foreign_proc_gen.m"
          {
#line 465 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_182_182, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 465 "ml_foreign_proc_gen.m"
          }
#line 465 "ml_foreign_proc_gen.m"
          {
#line 465 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_181_181, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_182_182));
#line 465 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 465 "ml_foreign_proc_gen.m"
          }
#line 464 "ml_foreign_proc_gen.m"
          {
#line 464 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19])));
#line 464 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_178_178, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_181_181));
#line 464 "ml_foreign_proc_gen.m"
          }
#line 467 "ml_foreign_proc_gen.m"
          {
#line 467 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_184_184, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
#line 467 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 467 "ml_foreign_proc_gen.m"
          }
#line 465 "ml_foreign_proc_gen.m"
          {
#line 465 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_177_177, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_178_178));
#line 465 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_177_177, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_184_184));
#line 465 "ml_foreign_proc_gen.m"
          }
#line 463 "ml_foreign_proc_gen.m"
          {
#line 463 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_176_176, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 463 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_176_176, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_177_177));
#line 463 "ml_foreign_proc_gen.m"
          }
#line 462 "ml_foreign_proc_gen.m"
          {
#line 462 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_163_163, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_164_164));
#line 462 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_163_163, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_176_176));
#line 462 "ml_foreign_proc_gen.m"
          }
#line 458 "ml_foreign_proc_gen.m"
          {
#line 458 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 458 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_162_162, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 458 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_162_162, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_163_163));
#line 458 "ml_foreign_proc_gen.m"
          }
#line 457 "ml_foreign_proc_gen.m"
          {
#line 457 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 457 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 457 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_157_157, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_162_162));
#line 457 "ml_foreign_proc_gen.m"
          }
#line 456 "ml_foreign_proc_gen.m"
          {
#line 456 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_156_156, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 456 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_156_156, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_157_157));
#line 456 "ml_foreign_proc_gen.m"
          }
#line 455 "ml_foreign_proc_gen.m"
          {
#line 455 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 455 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_155_155, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 455 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_155_155, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_156_156));
#line 455 "ml_foreign_proc_gen.m"
          }
#line 454 "ml_foreign_proc_gen.m"
          {
#line 454 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 454 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_154_154, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 454 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_154_154, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_155_155));
#line 454 "ml_foreign_proc_gen.m"
          }
#line 453 "ml_foreign_proc_gen.m"
          {
#line 453 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
#line 453 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_149_149, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_154_154));
#line 453 "ml_foreign_proc_gen.m"
          }
#line 452 "ml_foreign_proc_gen.m"
          {
#line 452 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_149_149);
          }
#line 468 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4]);
#line 451 "ml_foreign_proc_gen.m"
        }
#line 469 "ml_foreign_proc_gen.m"
        break;
#line 469 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 470 "ml_foreign_proc_gen.m"
        {
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_39;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_105_105;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_110_110;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_111_111;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_112_112;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_113_113;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_118_118;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_119_119;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_120_120;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_121_121;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_122_122;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_125_125;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_126_126;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_127_127;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_132_132;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_133_133;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_134_134;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_137_137;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_138_138;
#line 470 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_141_141;

#line 475 "ml_foreign_proc_gen.m"
          {
#line 475 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__SucceededLval_39);
          }
#line 483 "ml_foreign_proc_gen.m"
          {
#line 483 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_121_121, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 483 "ml_foreign_proc_gen.m"
          }
#line 485 "ml_foreign_proc_gen.m"
          {
#line 485 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_127_127, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 485 "ml_foreign_proc_gen.m"
          }
#line 485 "ml_foreign_proc_gen.m"
          {
#line 485 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_126_126, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 485 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_126_126, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_127_127));
#line 485 "ml_foreign_proc_gen.m"
          }
#line 485 "ml_foreign_proc_gen.m"
          {
#line 485 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_125_125, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_126_126));
#line 485 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
#line 485 "ml_foreign_proc_gen.m"
          }
#line 484 "ml_foreign_proc_gen.m"
          {
#line 484 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
#line 484 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_122_122, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_125_125));
#line 484 "ml_foreign_proc_gen.m"
          }
#line 483 "ml_foreign_proc_gen.m"
          {
#line 483 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_120_120, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_121_121));
#line 483 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_120_120, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_122_122));
#line 483 "ml_foreign_proc_gen.m"
          }
#line 489 "ml_foreign_proc_gen.m"
          {
#line 489 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 489 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_138_138, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 489 "ml_foreign_proc_gen.m"
          }
#line 489 "ml_foreign_proc_gen.m"
          {
#line 489 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_137_137, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_138_138));
#line 489 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "ml_foreign_proc_gen.m"
          }
#line 488 "ml_foreign_proc_gen.m"
          {
#line 488 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_134_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19])));
#line 488 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_134_134, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_137_137));
#line 488 "ml_foreign_proc_gen.m"
          }
#line 490 "ml_foreign_proc_gen.m"
          {
#line 490 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_133_133, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_134_134));
#line 490 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "ml_foreign_proc_gen.m"
          }
#line 487 "ml_foreign_proc_gen.m"
          {
#line 487 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_132_132, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 487 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_132_132, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_133_133));
#line 487 "ml_foreign_proc_gen.m"
          }
#line 486 "ml_foreign_proc_gen.m"
          {
#line 486 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_119_119, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_120_120));
#line 486 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_119_119, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_132_132));
#line 486 "ml_foreign_proc_gen.m"
          }
#line 482 "ml_foreign_proc_gen.m"
          {
#line 482 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_118_118, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 482 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_118_118, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_119_119));
#line 482 "ml_foreign_proc_gen.m"
          }
#line 481 "ml_foreign_proc_gen.m"
          {
#line 481 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 481 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_113_113, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_118_118));
#line 481 "ml_foreign_proc_gen.m"
          }
#line 480 "ml_foreign_proc_gen.m"
          {
#line 480 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_112_112, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 480 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_112_112, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_113_113));
#line 480 "ml_foreign_proc_gen.m"
          }
#line 479 "ml_foreign_proc_gen.m"
          {
#line 479 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_111_111, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 479 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_111_111, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_112_112));
#line 479 "ml_foreign_proc_gen.m"
          }
#line 478 "ml_foreign_proc_gen.m"
          {
#line 478 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_110_110, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 478 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_110_110, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_111_111));
#line 478 "ml_foreign_proc_gen.m"
          }
#line 477 "ml_foreign_proc_gen.m"
          {
#line 477 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 477 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
#line 477 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_105_105, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_110_110));
#line 477 "ml_foreign_proc_gen.m"
          }
#line 476 "ml_foreign_proc_gen.m"
          {
#line 476 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_105_105);
          }
#line 492 "ml_foreign_proc_gen.m"
          {
#line 492 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 492 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_141_141, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_39));
#line 492 "ml_foreign_proc_gen.m"
          }
#line 492 "ml_foreign_proc_gen.m"
          {
#line 492 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_141_141));
#line 492 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[5])));
#line 492 "ml_foreign_proc_gen.m"
          }
#line 470 "ml_foreign_proc_gen.m"
        }
#line 469 "ml_foreign_proc_gen.m"
        break;
#line 469 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 497 "ml_foreign_proc_gen.m"
        {
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_56_56;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_57_57;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_67_67;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_68_68;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_69_69;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_70_70;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_71_71;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_74_74;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_75_75;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_81_81;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_82_82;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_86_86;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_87_87;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_92_92;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_96_96;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_97_97;
#line 497 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_198;

#line 498 "ml_foreign_proc_gen.m"
          {
#line 498 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__SucceededLval_198);
          }
#line 507 "ml_foreign_proc_gen.m"
          {
#line 507 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_70_70, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 507 "ml_foreign_proc_gen.m"
          }
#line 509 "ml_foreign_proc_gen.m"
          {
#line 509 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 509 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_76_76, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 509 "ml_foreign_proc_gen.m"
          }
#line 509 "ml_foreign_proc_gen.m"
          {
#line 509 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 509 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_75_75, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 509 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_75_75, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_76_76));
#line 509 "ml_foreign_proc_gen.m"
          }
#line 509 "ml_foreign_proc_gen.m"
          {
#line 509 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_74_74, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_75_75));
#line 509 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
#line 509 "ml_foreign_proc_gen.m"
          }
#line 508 "ml_foreign_proc_gen.m"
          {
#line 508 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
#line 508 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_74_74));
#line 508 "ml_foreign_proc_gen.m"
          }
#line 507 "ml_foreign_proc_gen.m"
          {
#line 507 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_69_69, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_70_70));
#line 507 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_69_69, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_71_71));
#line 507 "ml_foreign_proc_gen.m"
          }
#line 513 "ml_foreign_proc_gen.m"
          {
#line 513 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 513 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 513 "ml_foreign_proc_gen.m"
          }
#line 513 "ml_foreign_proc_gen.m"
          {
#line 513 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_87_87));
#line 513 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18])));
#line 513 "ml_foreign_proc_gen.m"
          }
#line 512 "ml_foreign_proc_gen.m"
          {
#line 512 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19])));
#line 512 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_86_86));
#line 512 "ml_foreign_proc_gen.m"
          }
#line 516 "ml_foreign_proc_gen.m"
          {
#line 516 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_92_92, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
#line 516 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 516 "ml_foreign_proc_gen.m"
          }
#line 514 "ml_foreign_proc_gen.m"
          {
#line 514 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_82_82, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_83_83));
#line 514 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_82_82, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_92_92));
#line 514 "ml_foreign_proc_gen.m"
          }
#line 511 "ml_foreign_proc_gen.m"
          {
#line 511 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_81_81, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 511 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_81_81, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_82_82));
#line 511 "ml_foreign_proc_gen.m"
          }
#line 510 "ml_foreign_proc_gen.m"
          {
#line 510 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 510 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_68_68, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_69_69));
#line 510 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_68_68, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_81_81));
#line 510 "ml_foreign_proc_gen.m"
          }
#line 506 "ml_foreign_proc_gen.m"
          {
#line 506 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_67_67, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 506 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_67_67, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_68_68));
#line 506 "ml_foreign_proc_gen.m"
          }
#line 505 "ml_foreign_proc_gen.m"
          {
#line 505 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7])));
#line 505 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_67_67));
#line 505 "ml_foreign_proc_gen.m"
          }
#line 503 "ml_foreign_proc_gen.m"
          {
#line 503 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 503 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 503 "ml_foreign_proc_gen.m"
          }
#line 502 "ml_foreign_proc_gen.m"
          {
#line 502 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 502 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 502 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
#line 502 "ml_foreign_proc_gen.m"
          }
#line 501 "ml_foreign_proc_gen.m"
          {
#line 501 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 501 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_56_56, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 501 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_56_56, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_57_57));
#line 501 "ml_foreign_proc_gen.m"
          }
#line 500 "ml_foreign_proc_gen.m"
          {
#line 500 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 500 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
#line 500 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_56_56));
#line 500 "ml_foreign_proc_gen.m"
          }
#line 499 "ml_foreign_proc_gen.m"
          {
#line 499 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_51_51);
          }
#line 519 "ml_foreign_proc_gen.m"
          {
#line 519 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 519 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_97_97, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_198));
#line 519 "ml_foreign_proc_gen.m"
          }
#line 519 "ml_foreign_proc_gen.m"
          {
#line 519 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_96_96, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_97_97));
#line 519 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
#line 519 "ml_foreign_proc_gen.m"
          }
#line 518 "ml_foreign_proc_gen.m"
          {
#line 518 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[0])));
#line 518 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_96_96));
#line 518 "ml_foreign_proc_gen.m"
          }
#line 497 "ml_foreign_proc_gen.m"
        }
#line 469 "ml_foreign_proc_gen.m"
        break;
#line 469 "ml_foreign_proc_gen.m"
    }
#line 524 "ml_foreign_proc_gen.m"
    {
#line 524 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 524 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 524 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 1) = ((MR_Box) ((MR_Integer) 0));
#line 524 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_37));
#line 524 "ml_foreign_proc_gen.m"
    }
#line 525 "ml_foreign_proc_gen.m"
    {
#line 525 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 525 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 525 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_38));
#line 525 "ml_foreign_proc_gen.m"
    }
#line 527 "ml_foreign_proc_gen.m"
    {
#line 527 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 527 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 527 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_191_191, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40));
#line 527 "ml_foreign_proc_gen.m"
    }
#line 527 "ml_foreign_proc_gen.m"
    {
#line 527 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_192_192 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 526 "ml_foreign_proc_gen.m"
    {
#line 526 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 526 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_191_191));
#line 526 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_192_192));
#line 526 "ml_foreign_proc_gen.m"
    }
#line 528 "ml_foreign_proc_gen.m"
    {
#line 528 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 528 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_193_193, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41));
#line 528 "ml_foreign_proc_gen.m"
    }
#line 529 "ml_foreign_proc_gen.m"
    {
#line 529 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_194_194 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 528 "ml_foreign_proc_gen.m"
    {
#line 528 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_193_193));
#line 528 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_194_194));
#line 528 "ml_foreign_proc_gen.m"
    }
#line 530 "ml_foreign_proc_gen.m"
    {
#line 530 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 530 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_195_195, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42));
#line 530 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_195_195, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStatements_30));
#line 530 "ml_foreign_proc_gen.m"
    }
#line 531 "ml_foreign_proc_gen.m"
    {
#line 531 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 531 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_196_196, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43));
#line 531 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_196_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "ml_foreign_proc_gen.m"
    }
#line 530 "ml_foreign_proc_gen.m"
    {
#line 530 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_22 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__V_195_195, ml_backend__ml_foreign_proc_gen__V_196_196);
    }
#line 423 "ml_foreign_proc_gen.m"
  }
#line 416 "ml_foreign_proc_gen.m"
}

#line 192 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
#line 192 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg)
#line 192 "ml_foreign_proc_gen.m"
{
#line 192 "ml_foreign_proc_gen.m"
  {
#line 192 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 192 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;

#line 192 "ml_foreign_proc_gen.m"
    {
#line 192 "ml_foreign_proc_gen.m"
      return ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__192__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))));
    }
#line 192 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 192 "ml_foreign_proc_gen.m"
  }
#line 192 "ml_foreign_proc_gen.m"
}

#line 168 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__TargetLang_14,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_15,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_16,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_17,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_19,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 168 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__JavaCode_21,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_22,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_23,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_24,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
#line 168 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47)
#line 168 "ml_foreign_proc_gen.m"
{
#line 177 "ml_foreign_proc_gen.m"
  {
#line 177 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_26;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_27;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_28;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Markers_29;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_30;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_31;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_32;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_33;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements_35;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__SucceededDecl_36;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignSucceeded_37;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_40;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_43;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_78_78;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_84_84;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_85_85;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_86_86;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_87_87;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_88_88;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_89_89;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_92_92;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_93_93;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_94_94;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_101_101;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_102_102;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_103_103;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_104_104;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_106_106;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_107_107;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_108_108;
#line 177 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_109_109;

#line 178 "ml_foreign_proc_gen.m"
    {
#line 178 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_26 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_16);
    }
#line 180 "ml_foreign_proc_gen.m"
    {
#line 180 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__ModuleInfo_27);
    }
#line 181 "ml_foreign_proc_gen.m"
    {
#line 181 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_27, ml_backend__ml_foreign_proc_gen__PredId_17, &ml_backend__ml_foreign_proc_gen__PredInfo_28);
    }
#line 182 "ml_foreign_proc_gen.m"
    {
#line 182 "ml_foreign_proc_gen.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(ml_backend__ml_foreign_proc_gen__PredInfo_28, &ml_backend__ml_foreign_proc_gen__Markers_29);
    }
#line 183 "ml_foreign_proc_gen.m"
    {
#line 183 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_pred__check_marker_2_p_0(ml_backend__ml_foreign_proc_gen__Markers_29, (MR_Integer) 22);
    }
#line 185 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 184 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 0;
#line 185 "ml_foreign_proc_gen.m"
    else
#line 186 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 1;
#line 190 "ml_foreign_proc_gen.m"
    {
#line 190 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_31);
    }
#line 192 "ml_foreign_proc_gen.m"
    {
#line 192 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 192 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_5[0]));
#line 192 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1));
#line 192 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 192 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20));
#line 192 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "ml_foreign_proc_gen.m"
    }
#line 192 "ml_foreign_proc_gen.m"
    {
#line 192 "ml_foreign_proc_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_foreign_proc_gen__V_49_49, (MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_csharp_java_proc\'/13", (MR_String) "extra args");
    }
#line 195 "ml_foreign_proc_gen.m"
    {
#line 195 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_26, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__AssignInputsList_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54);
    }
#line 198 "ml_foreign_proc_gen.m"
    {
#line 198 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, ml_backend__ml_foreign_proc_gen__Context_22, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_33, ml_backend__ml_foreign_proc_gen__Decls_23, &ml_backend__ml_foreign_proc_gen__ConvStatements_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);
    }
#line 207 "ml_foreign_proc_gen.m"
#line 207 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_15) {
#line 207 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 207 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 204 "ml_foreign_proc_gen.m"
        {
#line 205 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 206 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 204 "ml_foreign_proc_gen.m"
        }
#line 207 "ml_foreign_proc_gen.m"
        break;
#line 207 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 225 "ml_foreign_proc_gen.m"
        {
#line 225 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
#line 225 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 225 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_112;

#line 226 "ml_foreign_proc_gen.m"
          {
#line 226 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47, &ml_backend__ml_foreign_proc_gen__SucceededLval_112);
          }
#line 227 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 230 "ml_foreign_proc_gen.m"
          {
#line 230 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 230 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_112));
#line 230 "ml_foreign_proc_gen.m"
          }
#line 230 "ml_foreign_proc_gen.m"
          {
#line 230 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 230 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[14])));
#line 230 "ml_foreign_proc_gen.m"
          }
#line 229 "ml_foreign_proc_gen.m"
          {
#line 229 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[14])));
#line 229 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
#line 229 "ml_foreign_proc_gen.m"
          }
#line 225 "ml_foreign_proc_gen.m"
        }
#line 207 "ml_foreign_proc_gen.m"
        break;
#line 207 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 208 "ml_foreign_proc_gen.m"
        {
#line 208 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_38;
#line 208 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__BoolType_39;
#line 208 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_64_64;
#line 208 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_65_65;
#line 208 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_67_67;
#line 208 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;
#line 208 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;

#line 209 "ml_foreign_proc_gen.m"
          {
#line 209 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47, &ml_backend__ml_foreign_proc_gen__SucceededLval_38);
          }
#line 213 "ml_foreign_proc_gen.m"
#line 213 "ml_foreign_proc_gen.m"
          switch (ml_backend__ml_foreign_proc_gen__TargetLang_14) {
#line 213 "ml_foreign_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 213 "ml_foreign_proc_gen.m"
            case (MR_Integer) 2:
#line 215 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "bool";
#line 213 "ml_foreign_proc_gen.m"
              break;
#line 213 "ml_foreign_proc_gen.m"
            case (MR_Integer) 3:
#line 212 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "boolean";
#line 213 "ml_foreign_proc_gen.m"
              break;
#line 213 "ml_foreign_proc_gen.m"
          }
#line 218 "ml_foreign_proc_gen.m"
          {
#line 218 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_67_67 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__BoolType_39, (MR_String) " SUCCESS_INDICATOR;\n");
          }
#line 218 "ml_foreign_proc_gen.m"
          {
#line 218 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_67_67);
          }
#line 218 "ml_foreign_proc_gen.m"
          {
#line 218 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 218 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_65_65));
#line 218 "ml_foreign_proc_gen.m"
          }
#line 218 "ml_foreign_proc_gen.m"
          {
#line 218 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 218 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_64_64));
#line 218 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 218 "ml_foreign_proc_gen.m"
          }
#line 221 "ml_foreign_proc_gen.m"
          {
#line 221 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 221 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_38));
#line 221 "ml_foreign_proc_gen.m"
          }
#line 221 "ml_foreign_proc_gen.m"
          {
#line 221 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
#line 221 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15])));
#line 221 "ml_foreign_proc_gen.m"
          }
#line 220 "ml_foreign_proc_gen.m"
          {
#line 220 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 220 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[14])));
#line 220 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
#line 220 "ml_foreign_proc_gen.m"
          }
#line 208 "ml_foreign_proc_gen.m"
        }
#line 207 "ml_foreign_proc_gen.m"
        break;
#line 207 "ml_foreign_proc_gen.m"
    }
#line 2468 "ml_backend.ml_foreign_proc_gen.c"
    ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
#line 240 "ml_foreign_proc_gen.m"
    {
#line 240 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_89_89, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_22));
#line 240 "ml_foreign_proc_gen.m"
    }
#line 240 "ml_foreign_proc_gen.m"
    {
#line 240 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_88_88, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__JavaCode_21));
#line 240 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_88_88, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_89_89));
#line 240 "ml_foreign_proc_gen.m"
    }
#line 240 "ml_foreign_proc_gen.m"
    {
#line 240 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_88_88));
#line 240 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "ml_foreign_proc_gen.m"
    }
#line 241 "ml_foreign_proc_gen.m"
    {
#line 241 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_87_87));
#line 241 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 241 "ml_foreign_proc_gen.m"
    }
#line 239 "ml_foreign_proc_gen.m"
    {
#line 239 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_85_85, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_32));
#line 239 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_86_86));
#line 239 "ml_foreign_proc_gen.m"
    }
#line 238 "ml_foreign_proc_gen.m"
    {
#line 238 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_84_84, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededDecl_36));
#line 238 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_84_84, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_85_85));
#line 238 "ml_foreign_proc_gen.m"
    }
#line 237 "ml_foreign_proc_gen.m"
    {
#line 237 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_31));
#line 237 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_84_84));
#line 237 "ml_foreign_proc_gen.m"
    }
#line 236 "ml_foreign_proc_gen.m"
    {
#line 236 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
#line 236 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_78_78, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_83_83));
#line 236 "ml_foreign_proc_gen.m"
    }
#line 235 "ml_foreign_proc_gen.m"
    {
#line 235 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_40 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114, ml_backend__ml_foreign_proc_gen__V_78_78);
    }
#line 242 "ml_foreign_proc_gen.m"
    {
#line 242 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 242 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
#line 242 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_40));
#line 242 "ml_foreign_proc_gen.m"
    }
#line 243 "ml_foreign_proc_gen.m"
    {
#line 243 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 243 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_92_92, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41));
#line 243 "ml_foreign_proc_gen.m"
    }
#line 244 "ml_foreign_proc_gen.m"
    {
#line 244 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_93_93 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_22);
    }
#line 243 "ml_foreign_proc_gen.m"
    {
#line 243 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 243 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_92_92));
#line 243 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_93_93));
#line 243 "ml_foreign_proc_gen.m"
    }
#line 247 "ml_foreign_proc_gen.m"
    {
#line 247 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_94_94, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignSucceeded_37));
#line 247 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[3])));
#line 247 "ml_foreign_proc_gen.m"
    }
#line 246 "ml_foreign_proc_gen.m"
    {
#line 246 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_43 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114, ml_backend__ml_foreign_proc_gen__V_94_94);
    }
#line 250 "ml_foreign_proc_gen.m"
    {
#line 250 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 250 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 250 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
#line 250 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_43));
#line 250 "ml_foreign_proc_gen.m"
    }
#line 251 "ml_foreign_proc_gen.m"
    {
#line 251 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 251 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_101_101, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44));
#line 251 "ml_foreign_proc_gen.m"
    }
#line 252 "ml_foreign_proc_gen.m"
    {
#line 252 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_102_102 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_22);
    }
#line 251 "ml_foreign_proc_gen.m"
    {
#line 251 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_101_101));
#line 251 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_102_102));
#line 251 "ml_foreign_proc_gen.m"
    }
#line 255 "ml_foreign_proc_gen.m"
    {
#line 255 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_104_104, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42));
#line 255 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "ml_foreign_proc_gen.m"
    }
#line 258 "ml_foreign_proc_gen.m"
    {
#line 258 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_109_109, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45));
#line 258 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 258 "ml_foreign_proc_gen.m"
    }
#line 259 "ml_foreign_proc_gen.m"
    {
#line 259 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_108_108, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_109_109));
#line 259 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "ml_foreign_proc_gen.m"
    }
#line 257 "ml_foreign_proc_gen.m"
    {
#line 257 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_107_107, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStatements_35));
#line 257 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_107_107, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_108_108));
#line 257 "ml_foreign_proc_gen.m"
    }
#line 256 "ml_foreign_proc_gen.m"
    {
#line 256 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_106_106, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_33));
#line 256 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_106_106, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_107_107));
#line 256 "ml_foreign_proc_gen.m"
    }
#line 255 "ml_foreign_proc_gen.m"
    {
#line 255 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_103_103, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_104_104));
#line 255 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_103_103, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_106_106));
#line 255 "ml_foreign_proc_gen.m"
    }
#line 254 "ml_foreign_proc_gen.m"
    {
#line 254 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_24 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__V_103_103);
    }
#line 177 "ml_foreign_proc_gen.m"
  }
#line 168 "ml_foreign_proc_gen.m"
}

#line 192 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__192__1_2_p_0(
#line 192 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 192 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_53)
#line 192 "ml_foreign_proc_gen.m"
{
#line 192 "ml_foreign_proc_gen.m"
  {
#line 192 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 192 "ml_foreign_proc_gen.m"
    {
#line 192 "ml_foreign_proc_gen.m"
      return ml_backend__ml_foreign_proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__HeadVar__2_53)));
    }
#line 192 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 192 "ml_foreign_proc_gen.m"
  }
#line 192 "ml_foreign_proc_gen.m"
}

#line 262 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
#line 262 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 262 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 262 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3)
#line 262 "ml_foreign_proc_gen.m"
{
#line 262 "ml_foreign_proc_gen.m"
  {
#line 262 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 262 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__2_2;
#line 262 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

#line 262 "ml_foreign_proc_gen.m"
    {
#line 262 "ml_foreign_proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4, ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5);
#line 262 "ml_foreign_proc_gen.m"
      return;
    }
#line 262 "ml_foreign_proc_gen.m"
  }
#line 262 "ml_foreign_proc_gen.m"
}

#line 262 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
#line 262 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 262 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
#line 262 "ml_foreign_proc_gen.m"
{
#line 2779 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 2781 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__HeadVar__2_1 == ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 2784 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 2786 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 262 "ml_foreign_proc_gen.m"
}

#line 655 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
#line 655 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 655 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 655 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3)
#line 655 "ml_foreign_proc_gen.m"
{
#line 655 "ml_foreign_proc_gen.m"
  {
#line 655 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 655 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__2_2;
#line 655 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

#line 655 "ml_foreign_proc_gen.m"
    {
#line 655 "ml_foreign_proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4, ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5);
#line 655 "ml_foreign_proc_gen.m"
      return;
    }
#line 655 "ml_foreign_proc_gen.m"
  }
#line 655 "ml_foreign_proc_gen.m"
}

#line 655 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
#line 655 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 655 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
#line 655 "ml_foreign_proc_gen.m"
{
#line 2832 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 2834 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__HeadVar__2_1 == ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 2837 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 2839 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 655 "ml_foreign_proc_gen.m"
}

#line 988 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
#line 988 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37,
#line 988 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38)
#line 988 "ml_foreign_proc_gen.m"
{
#line 995 "ml_foreign_proc_gen.m"
  {
#line 995 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 995 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarType_20;
#line 995 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarLval_21;
#line 995 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_22;
#line 995 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_24;
#line 995 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_25;
#line 995 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__TypeString_26;
#line 995 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_27;
#line 995 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_39_39;
#line 998 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStatements_23;
#line 1055 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Cast_28;

#line 996 "ml_foreign_proc_gen.m"
    {
#line 996 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarType_20);
    }
#line 997 "ml_foreign_proc_gen.m"
    {
#line 997 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarLval_21);
    }
#line 999 "ml_foreign_proc_gen.m"
    {
#line 999 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 999 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_12));
#line 999 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "ml_foreign_proc_gen.m"
    }
#line 998 "ml_foreign_proc_gen.m"
    {
#line 998 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_20, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__VarLval_21, ml_backend__ml_foreign_proc_gen__V_39_39, ml_backend__ml_foreign_proc_gen__Context_15, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_22, ml_backend__ml_foreign_proc_gen__ConvDecls_17, &ml_backend__ml_foreign_proc_gen___ConvInputStatements_23, ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38);
    }
#line 1004 "ml_foreign_proc_gen.m"
    {
#line 1004 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38, &ml_backend__ml_foreign_proc_gen__ModuleInfo_24);
    }
#line 1005 "ml_foreign_proc_gen.m"
    {
#line 1005 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ExportedType_25 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_24, ml_backend__ml_foreign_proc_gen__OrigType_13);
    }
#line 1006 "ml_foreign_proc_gen.m"
    {
#line 1006 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__TypeString_26 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ml_backend__ml_foreign_proc_gen__ExportedType_25);
    }
#line 1007 "ml_foreign_proc_gen.m"
    {
#line 1007 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__IsForeign_27 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_25);
    }
#line 1012 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__IsForeign_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1011 "ml_foreign_proc_gen.m"
      {
#line 1011 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__Cast_28 = (MR_Integer) 0;
#line 1011 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1011 "ml_foreign_proc_gen.m"
      }
#line 1012 "ml_foreign_proc_gen.m"
    else
#line 1013 "ml_foreign_proc_gen.m"
      {
#line 1013 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_27, (MR_Integer) 0)));

#line 1014 "ml_foreign_proc_gen.m"
        {
#line 1014 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__Assertions_29);
        }
#line 1013 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1013 "ml_foreign_proc_gen.m"
          {
#line 1015 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Cast_28 = (MR_Integer) 1;
#line 1015 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1013 "ml_foreign_proc_gen.m"
          }
#line 1013 "ml_foreign_proc_gen.m"
      }
#line 1055 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1020 "ml_foreign_proc_gen.m"
      {
#line 1020 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_30;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__LHS_Cast_31;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__RHS_Cast_32;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignFromArgName_35;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignTo_36;
#line 1020 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 1020 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_60_60;
#line 1020 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
#line 1020 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
#line 1020 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_63_63;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_81_81;
#line 1020 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_87_87;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_88_88;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_89_89;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_96_96;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_99_99;
#line 1020 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_106_106;

#line 1020 "ml_foreign_proc_gen.m"
        {
#line 1020 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38, &ml_backend__ml_foreign_proc_gen__HighLevelData_30);
        }
#line 1031 "ml_foreign_proc_gen.m"
#line 1031 "ml_foreign_proc_gen.m"
        switch (ml_backend__ml_foreign_proc_gen__HighLevelData_30) {
#line 1031 "ml_foreign_proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1031 "ml_foreign_proc_gen.m"
          case (MR_Integer) 0:
#line 1032 "ml_foreign_proc_gen.m"
            {
#line 1037 "ml_foreign_proc_gen.m"
              {
#line 1037 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_33_33;
#line 1037 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;

#line 1037 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_13)) == (MR_mktag((MR_Integer) 0)));
#line 1037 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1037 "ml_foreign_proc_gen.m"
                  {
#line 1037 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 0)));
#line 1037 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 1)));
#line 1037 "ml_foreign_proc_gen.m"
                  }
#line 1037 "ml_foreign_proc_gen.m"
              }
#line 1038 "ml_foreign_proc_gen.m"
              if (!(ml_backend__ml_foreign_proc_gen__succeeded))
#line 1038 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Cast_28 == (MR_Integer) 1);
#line 1042 "ml_foreign_proc_gen.m"
              if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1041 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "(MR_Box) ";
#line 1042 "ml_foreign_proc_gen.m"
              else
#line 1043 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "";
#line 1045 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__LHS_Cast_31 = (MR_String) "";
#line 1032 "ml_foreign_proc_gen.m"
            }
#line 1031 "ml_foreign_proc_gen.m"
            break;
#line 1031 "ml_foreign_proc_gen.m"
          case (MR_Integer) 1:
#line 1022 "ml_foreign_proc_gen.m"
            {
#line 1022 "ml_foreign_proc_gen.m"
              MR_String ml_backend__ml_foreign_proc_gen__V_47_47;

#line 1029 "ml_foreign_proc_gen.m"
              {
#line 1029 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__V_47_47 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_26, (MR_String) " *) &");
              }
#line 1029 "ml_foreign_proc_gen.m"
              {
#line 1029 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__LHS_Cast_31 = mercury__string__f_43_43_2_f_0((MR_String) "* (", ml_backend__ml_foreign_proc_gen__V_47_47);
              }
#line 1030 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "";
#line 1022 "ml_foreign_proc_gen.m"
            }
#line 1031 "ml_foreign_proc_gen.m"
            break;
#line 1031 "ml_foreign_proc_gen.m"
        }
#line 3090 "ml_backend.ml_foreign_proc_gen.c"
        ml_backend__ml_foreign_proc_gen__V_87_87 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[11];
#line 1047 "ml_foreign_proc_gen.m"
        {
#line 1047 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_87_87, ml_backend__ml_foreign_proc_gen__ArgName_12, &ml_backend__ml_foreign_proc_gen__V_81_81);
        }
#line 1047 "ml_foreign_proc_gen.m"
        {
#line 1047 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_88_88 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_81_81, (MR_String) ";\n");
        }
#line 1047 "ml_foreign_proc_gen.m"
        {
#line 1047 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_87_87, ml_backend__ml_foreign_proc_gen__RHS_Cast_32, &ml_backend__ml_foreign_proc_gen__V_89_89);
        }
#line 1047 "ml_foreign_proc_gen.m"
        {
#line 1047 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_96_96 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_89_89, ml_backend__ml_foreign_proc_gen__V_88_88);
        }
#line 1047 "ml_foreign_proc_gen.m"
        {
#line 1047 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignFromArgName_35 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__V_96_96);
        }
#line 1049 "ml_foreign_proc_gen.m"
        {
#line 1049 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_87_87, ml_backend__ml_foreign_proc_gen__LHS_Cast_31, &ml_backend__ml_foreign_proc_gen__V_99_99);
        }
#line 1049 "ml_foreign_proc_gen.m"
        {
#line 1049 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_106_106 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_99_99, (MR_String) " ");
        }
#line 1049 "ml_foreign_proc_gen.m"
        {
#line 1049 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignTo_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_106_106);
        }
#line 1051 "ml_foreign_proc_gen.m"
        {
#line 1051 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignTo_36));
#line 1051 "ml_foreign_proc_gen.m"
        }
#line 1052 "ml_foreign_proc_gen.m"
        {
#line 1052 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1052 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_22));
#line 1052 "ml_foreign_proc_gen.m"
        }
#line 1053 "ml_foreign_proc_gen.m"
        {
#line 1053 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignFromArgName_35));
#line 1053 "ml_foreign_proc_gen.m"
        }
#line 1054 "ml_foreign_proc_gen.m"
        {
#line 1054 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_62_62, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_63_63));
#line 1054 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1054 "ml_foreign_proc_gen.m"
        }
#line 1052 "ml_foreign_proc_gen.m"
        {
#line 1052 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1052 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_60_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_61_61));
#line 1052 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_60_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_62_62));
#line 1052 "ml_foreign_proc_gen.m"
        }
#line 1051 "ml_foreign_proc_gen.m"
        {
#line 1051 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 1051 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
#line 1051 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 1051 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_60_60));
#line 1051 "ml_foreign_proc_gen.m"
        }
#line 1020 "ml_foreign_proc_gen.m"
      }
#line 1055 "ml_foreign_proc_gen.m"
    else
#line 1057 "ml_foreign_proc_gen.m"
      {
#line 1057 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_65_65;
#line 1057 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_66_66;
#line 1057 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_68_68;
#line 1057 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_69_69;
#line 1057 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_71_71;
#line 1057 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;
#line 1057 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_74_74;

#line 1059 "ml_foreign_proc_gen.m"
        {
#line 1059 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_71_71 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_12, (MR_String) ", ");
        }
#line 1059 "ml_foreign_proc_gen.m"
        {
#line 1059 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_69_69 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__V_71_71);
        }
#line 1059 "ml_foreign_proc_gen.m"
        {
#line 1059 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_68_68 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_26, ml_backend__ml_foreign_proc_gen__V_69_69);
        }
#line 1059 "ml_foreign_proc_gen.m"
        {
#line 1059 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_66_66 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__V_68_68);
        }
#line 1058 "ml_foreign_proc_gen.m"
        {
#line 1058 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_65_65, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_66_66));
#line 1058 "ml_foreign_proc_gen.m"
        }
#line 1060 "ml_foreign_proc_gen.m"
        {
#line 1060 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1060 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_74_74, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_22));
#line 1060 "ml_foreign_proc_gen.m"
        }
#line 1060 "ml_foreign_proc_gen.m"
        {
#line 1060 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_73_73, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_74_74));
#line 1060 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
#line 1060 "ml_foreign_proc_gen.m"
        }
#line 1059 "ml_foreign_proc_gen.m"
        {
#line 1059 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 1059 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
#line 1059 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_65_65));
#line 1059 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
#line 1059 "ml_foreign_proc_gen.m"
        }
#line 1057 "ml_foreign_proc_gen.m"
      }
#line 995 "ml_foreign_proc_gen.m"
  }
#line 988 "ml_foreign_proc_gen.m"
}

#line 944 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
#line 944 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_2,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6,
#line 944 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7)
#line 944 "ml_foreign_proc_gen.m"
{
#line 949 "ml_foreign_proc_gen.m"
  {
#line 949 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 949 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "ml_foreign_proc_gen.m"
      {
#line 949 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 949 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 949 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 949 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
#line 949 "ml_foreign_proc_gen.m"
      }
#line 949 "ml_foreign_proc_gen.m"
    else
#line 951 "ml_foreign_proc_gen.m"
      {
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ForeignArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Components1_19;
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_20;
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements1_21;
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Components2_22;
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_23;
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements2_24;
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27;
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 0)));
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 1)));
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 2)));
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 3)));
#line 951 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_44;
#line 980 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_45;
#line 973 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_46;
#line 973 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_47_47;
#line 973 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_48_48;
#line 973 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 973 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
#line 721 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_54_54;
#line 722 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_53_53;

#line 971 "ml_foreign_proc_gen.m"
        {
#line 971 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_44);
        }
#line 973 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41)) == (MR_mktag((MR_Integer) 1)));
#line 973 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 973 "ml_foreign_proc_gen.m"
          {
#line 973 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41, (MR_Integer) 0)));
#line 973 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_47_47, (MR_Integer) 0)));
#line 973 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_47_47, (MR_Integer) 1)));
#line 722 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_54_54 = (MR_Char) 95;
#line 722 "ml_foreign_proc_gen.m"
            {
#line 722 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__V_54_54, &ml_backend__ml_foreign_proc_gen__V_53_53);
            }
#line 974 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 973 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 973 "ml_foreign_proc_gen.m"
              {
#line 975 "ml_foreign_proc_gen.m"
                {
#line 975 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_48_48 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__OrigType_42);
                }
#line 975 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_48_48 == (MR_Integer) 1);
#line 973 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 973 "ml_foreign_proc_gen.m"
                  {
#line 976 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Integer) 1;
#line 976 "ml_foreign_proc_gen.m"
                    {
#line 976 "ml_foreign_proc_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__Mode_46, ml_backend__ml_foreign_proc_gen__OrigType_42, &ml_backend__ml_foreign_proc_gen__V_51_51);
                    }
#line 976 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_49_49 == ml_backend__ml_foreign_proc_gen__V_51_51);
#line 973 "ml_foreign_proc_gen.m"
                  }
#line 973 "ml_foreign_proc_gen.m"
              }
#line 973 "ml_foreign_proc_gen.m"
          }
#line 980 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 978 "ml_foreign_proc_gen.m"
          {
#line 978 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(ml_backend__ml_foreign_proc_gen__Var_40, ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__OrigType_42, ml_backend__ml_foreign_proc_gen__BoxPolicy_43, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components1_19, &ml_backend__ml_foreign_proc_gen__ConvDecls1_20, &ml_backend__ml_foreign_proc_gen__ConvStatements1_21, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27);
          }
#line 980 "ml_foreign_proc_gen.m"
        else
#line 983 "ml_foreign_proc_gen.m"
          {
#line 983 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Components1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 984 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvDecls1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 985 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvStatements1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 983 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
#line 983 "ml_foreign_proc_gen.m"
          }
#line 954 "ml_foreign_proc_gen.m"
        {
#line 954 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__ForeignArgs_13, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components2_22, &ml_backend__ml_foreign_proc_gen__ConvDecls2_23, &ml_backend__ml_foreign_proc_gen__ConvStatements2_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);
        }
#line 956 "ml_foreign_proc_gen.m"
        {
#line 956 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Components1_19, ml_backend__ml_foreign_proc_gen__Components2_22);
        }
#line 957 "ml_foreign_proc_gen.m"
        {
#line 957 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_20, ml_backend__ml_foreign_proc_gen__ConvDecls2_23);
        }
#line 958 "ml_foreign_proc_gen.m"
        {
#line 958 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__ConvStatements1_21, ml_backend__ml_foreign_proc_gen__ConvStatements2_24);
        }
#line 951 "ml_foreign_proc_gen.m"
      }
#line 949 "ml_foreign_proc_gen.m"
  }
#line 944 "ml_foreign_proc_gen.m"
}

#line 873 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
#line 873 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
#line 873 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8)
#line 873 "ml_foreign_proc_gen.m"
{
#line 878 "ml_foreign_proc_gen.m"
  {
#line 878 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 878 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 878 "ml_foreign_proc_gen.m"
      {
#line 878 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 878 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
#line 878 "ml_foreign_proc_gen.m"
      }
#line 878 "ml_foreign_proc_gen.m"
    else
#line 880 "ml_foreign_proc_gen.m"
      {
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32;
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__JavaArg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__JavaArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Statements1_22;
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_23;
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements1_24;
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Statements2_25;
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_26;
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements2_27;
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30;
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 0)));
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 1)));
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 2)));
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 3)));
#line 880 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_47;
#line 936 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_48;
#line 903 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_49;
#line 903 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
#line 903 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
#line 903 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_63_63;
#line 903 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_75_75;
#line 721 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_80_80;
#line 722 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_79_79;

#line 901 "ml_foreign_proc_gen.m"
        {
#line 901 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__ModuleInfo_47);
        }
#line 903 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
#line 903 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 903 "ml_foreign_proc_gen.m"
          {
#line 903 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44, (MR_Integer) 0)));
#line 903 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_61_61, (MR_Integer) 0)));
#line 903 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Mode_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_61_61, (MR_Integer) 1)));
#line 722 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_80_80 = (MR_Char) 95;
#line 722 "ml_foreign_proc_gen.m"
            {
#line 722 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_48, ml_backend__ml_foreign_proc_gen__V_80_80, &ml_backend__ml_foreign_proc_gen__V_79_79);
            }
#line 904 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 903 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 903 "ml_foreign_proc_gen.m"
              {
#line 905 "ml_foreign_proc_gen.m"
                {
#line 905 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_62_62 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
                }
#line 905 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_62_62 == (MR_Integer) 1);
#line 903 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 903 "ml_foreign_proc_gen.m"
                  {
#line 906 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_63_63 = (MR_Integer) 1;
#line 906 "ml_foreign_proc_gen.m"
                    {
#line 906 "ml_foreign_proc_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__Mode_49, ml_backend__ml_foreign_proc_gen__OrigType_45, &ml_backend__ml_foreign_proc_gen__V_75_75);
                    }
#line 906 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_63_63 == ml_backend__ml_foreign_proc_gen__V_75_75);
#line 903 "ml_foreign_proc_gen.m"
                  }
#line 903 "ml_foreign_proc_gen.m"
              }
#line 903 "ml_foreign_proc_gen.m"
          }
#line 936 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 910 "ml_foreign_proc_gen.m"
          {
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarType_50;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarLval_51;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_52;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDSType_54;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ModuleName_55;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_56;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__NonMangledVarName_57;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__QualLocalVarName_58;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__LocalVarLval_59;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__Rval_60;
#line 910 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;
#line 912 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStatements_53;

#line 910 "ml_foreign_proc_gen.m"
            {
#line 910 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarType_50);
            }
#line 911 "ml_foreign_proc_gen.m"
            {
#line 911 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarLval_51);
            }
#line 913 "ml_foreign_proc_gen.m"
            {
#line 913 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__NonMangledVarName_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 913 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_48));
#line 913 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "ml_foreign_proc_gen.m"
            }
#line 912 "ml_foreign_proc_gen.m"
            {
#line 912 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_50, ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__BoxPolicy_46, ml_backend__ml_foreign_proc_gen__VarLval_51, ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, ml_backend__ml_foreign_proc_gen__Context_3, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_52, &ml_backend__ml_foreign_proc_gen__ConvDecls1_23, &ml_backend__ml_foreign_proc_gen___ConvInputStatements_53, &ml_backend__ml_foreign_proc_gen__ConvStatements1_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30);
            }
#line 916 "ml_foreign_proc_gen.m"
            {
#line 916 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__MLDSType_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
            }
#line 917 "ml_foreign_proc_gen.m"
            {
#line 917 "ml_foreign_proc_gen.m"
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, &ml_backend__ml_foreign_proc_gen__ModuleName_55);
            }
#line 918 "ml_foreign_proc_gen.m"
            {
#line 918 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__MLDSModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_foreign_proc_gen__ModuleName_55);
            }
#line 920 "ml_foreign_proc_gen.m"
            {
#line 920 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__QualLocalVarName_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 920 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_56));
#line 920 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 920 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__NonMangledVarName_57));
#line 920 "ml_foreign_proc_gen.m"
            }
#line 922 "ml_foreign_proc_gen.m"
            {
#line 922 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__LocalVarLval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualLocalVarName_58));
#line 922 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_54));
#line 922 "ml_foreign_proc_gen.m"
            }
#line 926 "ml_foreign_proc_gen.m"
#line 926 "ml_foreign_proc_gen.m"
            switch (ml_backend__ml_foreign_proc_gen__MutableSpecial_1) {
#line 926 "ml_foreign_proc_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 926 "ml_foreign_proc_gen.m"
              case (MR_Integer) 0:
#line 931 "ml_foreign_proc_gen.m"
                {
#line 929 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;

#line 929 "ml_foreign_proc_gen.m"
                  {
#line 929 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_76_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
#line 929 "ml_foreign_proc_gen.m"
                  {
#line 929 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__V_76_76);
                  }
#line 931 "ml_foreign_proc_gen.m"
                  if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 930 "ml_foreign_proc_gen.m"
                    {
#line 930 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 930 "ml_foreign_proc_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 930 "ml_foreign_proc_gen.m"
                    }
#line 931 "ml_foreign_proc_gen.m"
                  else
#line 932 "ml_foreign_proc_gen.m"
                    {
#line 932 "ml_foreign_proc_gen.m"
                      MR_Word ml_backend__ml_foreign_proc_gen__V_71_71;
#line 932 "ml_foreign_proc_gen.m"
                      MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;

#line 932 "ml_foreign_proc_gen.m"
                      {
#line 932 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 932 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_54));
#line 932 "ml_foreign_proc_gen.m"
                      }
#line 932 "ml_foreign_proc_gen.m"
                      {
#line 932 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 932 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 932 "ml_foreign_proc_gen.m"
                      }
#line 932 "ml_foreign_proc_gen.m"
                      {
#line 932 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 932 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 932 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_71_71));
#line 932 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
#line 932 "ml_foreign_proc_gen.m"
                      }
#line 932 "ml_foreign_proc_gen.m"
                    }
#line 931 "ml_foreign_proc_gen.m"
                }
#line 926 "ml_foreign_proc_gen.m"
                break;
#line 926 "ml_foreign_proc_gen.m"
              case (MR_Integer) 1:
#line 925 "ml_foreign_proc_gen.m"
                {
#line 925 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 925 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 925 "ml_foreign_proc_gen.m"
                }
#line 926 "ml_foreign_proc_gen.m"
                break;
#line 926 "ml_foreign_proc_gen.m"
            }
#line 935 "ml_foreign_proc_gen.m"
            {
#line 935 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_73_73 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_foreign_proc_gen__ArgLval_52, ml_backend__ml_foreign_proc_gen__Rval_60, ml_backend__ml_foreign_proc_gen__Context_3);
            }
#line 935 "ml_foreign_proc_gen.m"
            {
#line 935 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Statements1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 935 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Statements1_22, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
#line 935 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Statements1_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 935 "ml_foreign_proc_gen.m"
            }
#line 910 "ml_foreign_proc_gen.m"
          }
#line 936 "ml_foreign_proc_gen.m"
        else
#line 939 "ml_foreign_proc_gen.m"
          {
#line 939 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Statements1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 940 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvDecls1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 941 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvStatements1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 939 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
#line 939 "ml_foreign_proc_gen.m"
          }
#line 883 "ml_foreign_proc_gen.m"
        {
#line 883 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_1, ml_backend__ml_foreign_proc_gen__JavaArgs_16, ml_backend__ml_foreign_proc_gen__Context_3, &ml_backend__ml_foreign_proc_gen__Statements2_25, &ml_backend__ml_foreign_proc_gen__ConvDecls2_26, &ml_backend__ml_foreign_proc_gen__ConvStatements2_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);
        }
#line 3836 "ml_backend.ml_foreign_proc_gen.c"
        ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 885 "ml_foreign_proc_gen.m"
        {
#line 885 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__Statements1_22, ml_backend__ml_foreign_proc_gen__Statements2_25);
        }
#line 886 "ml_foreign_proc_gen.m"
        {
#line 886 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_23, ml_backend__ml_foreign_proc_gen__ConvDecls2_26);
        }
#line 887 "ml_foreign_proc_gen.m"
        {
#line 887 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__ConvStatements1_24, ml_backend__ml_foreign_proc_gen__ConvStatements2_27);
        }
#line 880 "ml_foreign_proc_gen.m"
      }
#line 878 "ml_foreign_proc_gen.m"
  }
#line 873 "ml_foreign_proc_gen.m"
}

#line 821 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
#line 821 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
#line 821 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
#line 821 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
#line 821 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
#line 821 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
#line 821 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12)
#line 821 "ml_foreign_proc_gen.m"
{
#line 827 "ml_foreign_proc_gen.m"
  {
#line 827 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 827 "ml_foreign_proc_gen.m"
#line 827 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__Lang_7) {
#line 827 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 827 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 827 "ml_foreign_proc_gen.m"
#line 827 "ml_foreign_proc_gen.m"
        switch (ml_backend__ml_foreign_proc_gen__HighLevelData_8) {
#line 827 "ml_foreign_proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 827 "ml_foreign_proc_gen.m"
          case (MR_Integer) 0:
#line 849 "ml_foreign_proc_gen.m"
            {
#line 844 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__V_15_15;
#line 844 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__V_16_16;

#line 844 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_9)) == (MR_mktag((MR_Integer) 0)));
#line 844 "ml_foreign_proc_gen.m"
              if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 844 "ml_foreign_proc_gen.m"
                {
#line 844 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 0)));
#line 844 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 1)));
#line 848 "ml_foreign_proc_gen.m"
                  *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "(MR_Word)";
#line 848 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 844 "ml_foreign_proc_gen.m"
                }
#line 844 "ml_foreign_proc_gen.m"
              else
#line 850 "ml_foreign_proc_gen.m"
                {
#line 850 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_30;

#line 850 "ml_foreign_proc_gen.m"
                  {
#line 850 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__IsForeign_30 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
                  }
#line 855 "ml_foreign_proc_gen.m"
                  if ((ml_backend__ml_foreign_proc_gen__IsForeign_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 857 "ml_foreign_proc_gen.m"
                    {
#line 857 "ml_foreign_proc_gen.m"
                      *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 857 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 857 "ml_foreign_proc_gen.m"
                    }
#line 855 "ml_foreign_proc_gen.m"
                  else
#line 852 "ml_foreign_proc_gen.m"
                    {
#line 852 "ml_foreign_proc_gen.m"
                      MR_String ml_backend__ml_foreign_proc_gen__V_21_21;
#line 852 "ml_foreign_proc_gen.m"
                      MR_String ml_backend__ml_foreign_proc_gen__V_22_22;
#line 852 "ml_foreign_proc_gen.m"
                      MR_String ml_backend__ml_foreign_proc_gen__V_23_23;
#line 852 "ml_foreign_proc_gen.m"
                      MR_Word ml_backend__ml_foreign_proc_gen__Assertions_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_30, (MR_Integer) 0)));

#line 853 "ml_foreign_proc_gen.m"
                      {
#line 853 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__Assertions_28);
                      }
#line 852 "ml_foreign_proc_gen.m"
                      if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 852 "ml_foreign_proc_gen.m"
                        {
#line 854 "ml_foreign_proc_gen.m"
                          ml_backend__ml_foreign_proc_gen__V_21_21 = (MR_String) "(";
#line 854 "ml_foreign_proc_gen.m"
                          ml_backend__ml_foreign_proc_gen__V_23_23 = (MR_String) ")";
#line 854 "ml_foreign_proc_gen.m"
                          {
#line 854 "ml_foreign_proc_gen.m"
                            ml_backend__ml_foreign_proc_gen__V_22_22 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__V_23_23);
                          }
#line 854 "ml_foreign_proc_gen.m"
                          {
#line 854 "ml_foreign_proc_gen.m"
                            *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_21_21, ml_backend__ml_foreign_proc_gen__V_22_22);
                          }
#line 854 "ml_foreign_proc_gen.m"
                          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 852 "ml_foreign_proc_gen.m"
                        }
#line 852 "ml_foreign_proc_gen.m"
                    }
#line 850 "ml_foreign_proc_gen.m"
                }
#line 849 "ml_foreign_proc_gen.m"
            }
#line 827 "ml_foreign_proc_gen.m"
            break;
#line 827 "ml_foreign_proc_gen.m"
          case (MR_Integer) 1:
#line 827 "ml_foreign_proc_gen.m"
            {
#line 827 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_13;
#line 827 "ml_foreign_proc_gen.m"
              MR_String ml_backend__ml_foreign_proc_gen__V_25_25;
#line 827 "ml_foreign_proc_gen.m"
              MR_String ml_backend__ml_foreign_proc_gen__V_26_26;
#line 827 "ml_foreign_proc_gen.m"
              MR_String ml_backend__ml_foreign_proc_gen__V_27_27;

#line 829 "ml_foreign_proc_gen.m"
              {
#line 829 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__IsForeign_13 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
              }
#line 833 "ml_foreign_proc_gen.m"
              if ((ml_backend__ml_foreign_proc_gen__IsForeign_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 834 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 833 "ml_foreign_proc_gen.m"
              else
#line 831 "ml_foreign_proc_gen.m"
                {
#line 831 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__Assertions_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_13, (MR_Integer) 0)));

#line 832 "ml_foreign_proc_gen.m"
                  {
#line 832 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__Assertions_14);
                  }
#line 831 "ml_foreign_proc_gen.m"
                }
#line 827 "ml_foreign_proc_gen.m"
              if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 827 "ml_foreign_proc_gen.m"
                {
#line 840 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_25_25 = (MR_String) "(";
#line 840 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_27_27 = (MR_String) ")";
#line 840 "ml_foreign_proc_gen.m"
                  {
#line 840 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_26_26 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__V_27_27);
                  }
#line 840 "ml_foreign_proc_gen.m"
                  {
#line 840 "ml_foreign_proc_gen.m"
                    *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_25_25, ml_backend__ml_foreign_proc_gen__V_26_26);
                  }
#line 840 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 827 "ml_foreign_proc_gen.m"
                }
#line 827 "ml_foreign_proc_gen.m"
            }
#line 827 "ml_foreign_proc_gen.m"
            break;
#line 827 "ml_foreign_proc_gen.m"
        }
#line 827 "ml_foreign_proc_gen.m"
        break;
#line 827 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 867 "ml_foreign_proc_gen.m"
        {
#line 867 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 867 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 867 "ml_foreign_proc_gen.m"
        }
#line 827 "ml_foreign_proc_gen.m"
        break;
#line 827 "ml_foreign_proc_gen.m"
      case (MR_Integer) 3:
#line 869 "ml_foreign_proc_gen.m"
        {
#line 870 "ml_foreign_proc_gen.m"
          {
#line 870 "ml_foreign_proc_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.input_arg_assignable_with_cast\'/6", (MR_String) "unexpected language");
          }
#line 869 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 869 "ml_foreign_proc_gen.m"
        }
#line 827 "ml_foreign_proc_gen.m"
        break;
#line 827 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 864 "ml_foreign_proc_gen.m"
        {
#line 864 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 864 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 864 "ml_foreign_proc_gen.m"
        }
#line 827 "ml_foreign_proc_gen.m"
        break;
#line 827 "ml_foreign_proc_gen.m"
    }
#line 827 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 827 "ml_foreign_proc_gen.m"
  }
#line 821 "ml_foreign_proc_gen.m"
}

#line 760 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_9,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_10,
#line 760 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_11,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_12,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_13,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_14,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27,
#line 760 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28)
#line 760 "ml_foreign_proc_gen.m"
{
#line 765 "ml_foreign_proc_gen.m"
  {
#line 765 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 765 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarType_16;
#line 765 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarLval_17;
#line 765 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_18;
#line 765 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__IsDummy_19;
#line 765 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgRval_20;
#line 765 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_21;
#line 765 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__TypeString_22;
#line 765 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Globals_23;
#line 765 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_24;
#line 800 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__Cast_25;

#line 766 "ml_foreign_proc_gen.m"
    {
#line 766 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, ml_backend__ml_foreign_proc_gen__Var_10, &ml_backend__ml_foreign_proc_gen__VarType_16);
    }
#line 767 "ml_foreign_proc_gen.m"
    {
#line 767 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, ml_backend__ml_foreign_proc_gen__Var_10, &ml_backend__ml_foreign_proc_gen__VarLval_17);
    }
#line 768 "ml_foreign_proc_gen.m"
    {
#line 768 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, &ml_backend__ml_foreign_proc_gen__ModuleInfo_18);
    }
#line 769 "ml_foreign_proc_gen.m"
    {
#line 769 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__IsDummy_19 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16);
    }
#line 777 "ml_foreign_proc_gen.m"
#line 777 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__IsDummy_19) {
#line 777 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 777 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 813 "ml_foreign_proc_gen.m"
        {
#line 813 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_82;

#line 814 "ml_foreign_proc_gen.m"
          {
#line 814 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__MLDS_Type_82 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16);
          }
#line 815 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Lang_9 == (MR_Integer) 2);
#line 817 "ml_foreign_proc_gen.m"
          if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 816 "ml_foreign_proc_gen.m"
            {
#line 816 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;

#line 816 "ml_foreign_proc_gen.m"
              {
#line 816 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 816 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_82));
#line 816 "ml_foreign_proc_gen.m"
              }
#line 816 "ml_foreign_proc_gen.m"
              {
#line 816 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__ArgRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 816 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 816 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_20, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_83_83));
#line 816 "ml_foreign_proc_gen.m"
              }
#line 816 "ml_foreign_proc_gen.m"
            }
#line 817 "ml_foreign_proc_gen.m"
          else
#line 818 "ml_foreign_proc_gen.m"
            {
#line 818 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__ArgRval_20 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9]);
#line 818 "ml_foreign_proc_gen.m"
            }
#line 813 "ml_foreign_proc_gen.m"
        }
#line 777 "ml_foreign_proc_gen.m"
        break;
#line 777 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 778 "ml_foreign_proc_gen.m"
        {
#line 778 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_29_29;

#line 780 "ml_foreign_proc_gen.m"
          {
#line 780 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 780 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_29_29, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_17));
#line 780 "ml_foreign_proc_gen.m"
          }
#line 779 "ml_foreign_proc_gen.m"
          {
#line 779 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16, ml_backend__ml_foreign_proc_gen__OrigType_12, ml_backend__ml_foreign_proc_gen__BoxPolicy_13, ml_backend__ml_foreign_proc_gen__V_29_29, &ml_backend__ml_foreign_proc_gen__ArgRval_20);
          }
#line 778 "ml_foreign_proc_gen.m"
        }
#line 777 "ml_foreign_proc_gen.m"
        break;
#line 777 "ml_foreign_proc_gen.m"
    }
#line 785 "ml_foreign_proc_gen.m"
    {
#line 785 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ExportedType_21 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__OrigType_12);
    }
#line 786 "ml_foreign_proc_gen.m"
    {
#line 786 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__TypeString_22 = backend_libs__foreign__exported_type_to_string_2_f_0(ml_backend__ml_foreign_proc_gen__Lang_9, ml_backend__ml_foreign_proc_gen__ExportedType_21);
    }
#line 787 "ml_foreign_proc_gen.m"
    {
#line 787 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, &ml_backend__ml_foreign_proc_gen__Globals_23);
    }
#line 788 "ml_foreign_proc_gen.m"
    {
#line 788 "ml_foreign_proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_23, (MR_Integer) 252, &ml_backend__ml_foreign_proc_gen__HighLevelData_24);
    }
#line 790 "ml_foreign_proc_gen.m"
    {
#line 790 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(ml_backend__ml_foreign_proc_gen__Lang_9, ml_backend__ml_foreign_proc_gen__HighLevelData_24, ml_backend__ml_foreign_proc_gen__OrigType_12, ml_backend__ml_foreign_proc_gen__ExportedType_21, ml_backend__ml_foreign_proc_gen__TypeString_22, &ml_backend__ml_foreign_proc_gen__Cast_25);
    }
#line 800 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 794 "ml_foreign_proc_gen.m"
      {
#line 794 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignToArgName_26;
#line 794 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_37_37;
#line 794 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_38_38;
#line 794 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_39_39;
#line 794 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_59_59;
#line 794 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_65_65 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[11];
#line 794 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_66_66;
#line 794 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_68_68;
#line 794 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_69_69;
#line 794 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_76_76;

#line 794 "ml_foreign_proc_gen.m"
        {
#line 794 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_65_65, ml_backend__ml_foreign_proc_gen__Cast_25, &ml_backend__ml_foreign_proc_gen__V_59_59);
        }
#line 794 "ml_foreign_proc_gen.m"
        {
#line 794 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_66_66 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_59_59, (MR_String) " ");
        }
#line 794 "ml_foreign_proc_gen.m"
        {
#line 794 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__V_66_66);
        }
#line 794 "ml_foreign_proc_gen.m"
        {
#line 794 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_65_65, ml_backend__ml_foreign_proc_gen__ArgName_11, &ml_backend__ml_foreign_proc_gen__V_69_69);
        }
#line 794 "ml_foreign_proc_gen.m"
        {
#line 794 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_76_76 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_69_69, ml_backend__ml_foreign_proc_gen__V_68_68);
        }
#line 794 "ml_foreign_proc_gen.m"
        {
#line 794 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignToArgName_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_76_76);
        }
#line 796 "ml_foreign_proc_gen.m"
        {
#line 796 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 796 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_37_37, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignToArgName_26));
#line 796 "ml_foreign_proc_gen.m"
        }
#line 797 "ml_foreign_proc_gen.m"
        {
#line 797 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_20));
#line 797 "ml_foreign_proc_gen.m"
        }
#line 797 "ml_foreign_proc_gen.m"
        {
#line 797 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 797 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_38_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_39_39));
#line 797 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12])));
#line 797 "ml_foreign_proc_gen.m"
        }
#line 796 "ml_foreign_proc_gen.m"
        {
#line 796 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 796 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignInput_14 = base;
#line 796 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_37_37));
#line 796 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_38_38));
#line 796 "ml_foreign_proc_gen.m"
        }
#line 794 "ml_foreign_proc_gen.m"
      }
#line 800 "ml_foreign_proc_gen.m"
    else
#line 803 "ml_foreign_proc_gen.m"
      {
#line 803 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_44_44;
#line 803 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_45_45;
#line 803 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_47_47;
#line 803 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 803 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_50_50;
#line 803 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
#line 803 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_52_52;
#line 803 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_53_53;
#line 803 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_55_55;

#line 805 "ml_foreign_proc_gen.m"
        {
#line 805 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_47_47 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_22, (MR_String) ", ");
        }
#line 805 "ml_foreign_proc_gen.m"
        {
#line 805 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__V_47_47);
        }
#line 804 "ml_foreign_proc_gen.m"
        {
#line 804 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 804 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_44_44, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_45_45));
#line 804 "ml_foreign_proc_gen.m"
        }
#line 806 "ml_foreign_proc_gen.m"
        {
#line 806 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 806 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_50_50, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_20));
#line 806 "ml_foreign_proc_gen.m"
        }
#line 807 "ml_foreign_proc_gen.m"
        {
#line 807 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_55_55 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_11, (MR_String) ");\n");
        }
#line 807 "ml_foreign_proc_gen.m"
        {
#line 807 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__V_55_55);
        }
#line 807 "ml_foreign_proc_gen.m"
        {
#line 807 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 807 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_52_52, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_53_53));
#line 807 "ml_foreign_proc_gen.m"
        }
#line 808 "ml_foreign_proc_gen.m"
        {
#line 808 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_52_52));
#line 808 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 808 "ml_foreign_proc_gen.m"
        }
#line 806 "ml_foreign_proc_gen.m"
        {
#line 806 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 806 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_49_49, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_50_50));
#line 806 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_51_51));
#line 806 "ml_foreign_proc_gen.m"
        }
#line 805 "ml_foreign_proc_gen.m"
        {
#line 805 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 805 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignInput_14 = base;
#line 805 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_44_44));
#line 805 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_49_49));
#line 805 "ml_foreign_proc_gen.m"
        }
#line 803 "ml_foreign_proc_gen.m"
      }
#line 765 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27;
#line 765 "ml_foreign_proc_gen.m"
  }
#line 760 "ml_foreign_proc_gen.m"
}

#line 740 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
#line 740 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 740 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
#line 740 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
#line 740 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 740 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18)
#line 740 "ml_foreign_proc_gen.m"
{
#line 744 "ml_foreign_proc_gen.m"
  {
#line 744 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 744 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_10;
#line 754 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Var_11;
#line 754 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13;
#line 754 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14;
#line 754 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ArgName_15;
#line 747 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12;
#line 747 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Mode_16;
#line 747 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_19_19;
#line 747 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
#line 747 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_22_22;
#line 721 "ml_foreign_proc_gen.m"
    MR_Char ml_backend__ml_foreign_proc_gen__V_25_25;
#line 722 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__V_24_24;

#line 745 "ml_foreign_proc_gen.m"
    {
#line 745 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__ModuleInfo_10);
    }
#line 747 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 0)));
#line 747 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 1)));
#line 747 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 2)));
#line 747 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__BoxPolicy_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 3)));
#line 748 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12)) == (MR_mktag((MR_Integer) 1)));
#line 748 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 748 "ml_foreign_proc_gen.m"
      {
#line 748 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12, (MR_Integer) 0)));
#line 748 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ArgName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_19_19, (MR_Integer) 0)));
#line 748 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_19_19, (MR_Integer) 1)));
#line 722 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_25_25 = (MR_Char) 95;
#line 722 "ml_foreign_proc_gen.m"
        {
#line 722 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__V_25_25, &ml_backend__ml_foreign_proc_gen__V_24_24);
        }
#line 749 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 747 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 747 "ml_foreign_proc_gen.m"
          {
#line 750 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Integer) 0;
#line 750 "ml_foreign_proc_gen.m"
            {
#line 750 "ml_foreign_proc_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_10, ml_backend__ml_foreign_proc_gen__Mode_16, ml_backend__ml_foreign_proc_gen__OrigType_13, &ml_backend__ml_foreign_proc_gen__V_22_22);
            }
#line 750 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_20_20 == ml_backend__ml_foreign_proc_gen__V_22_22);
#line 747 "ml_foreign_proc_gen.m"
          }
#line 748 "ml_foreign_proc_gen.m"
      }
#line 754 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 752 "ml_foreign_proc_gen.m"
      {
#line 752 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(ml_backend__ml_foreign_proc_gen__Lang_6, ml_backend__ml_foreign_proc_gen__Var_11, ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__AssignInput_8, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
#line 752 "ml_foreign_proc_gen.m"
        return;
      }
#line 754 "ml_foreign_proc_gen.m"
    else
#line 757 "ml_foreign_proc_gen.m"
      {
#line 757 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__AssignInput_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17;
#line 757 "ml_foreign_proc_gen.m"
      }
#line 744 "ml_foreign_proc_gen.m"
  }
#line 740 "ml_foreign_proc_gen.m"
}

#line 733 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
#line 733 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 733 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 733 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 733 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3,
#line 733 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_4)
#line 733 "ml_foreign_proc_gen.m"
{
#line 733 "ml_foreign_proc_gen.m"
  {
#line 733 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;
#line 733 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8;
#line 733 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18;

#line 733 "ml_foreign_proc_gen.m"
    {
#line 733 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), &ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3), &ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18);
    }
#line 733 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8));
#line 733 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18));
#line 733 "ml_foreign_proc_gen.m"
  }
#line 733 "ml_foreign_proc_gen.m"
}

#line 728 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
#line 728 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 728 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgList_7,
#line 728 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInputs_8,
#line 728 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11,
#line 728 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12)
#line 728 "ml_foreign_proc_gen.m"
{
#line 732 "ml_foreign_proc_gen.m"
  {
#line 732 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 732 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_10;
#line 732 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_13_13;
#line 733 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12;

#line 733 "ml_foreign_proc_gen.m"
    {
#line 733 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 733 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
#line 733 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1));
#line 733 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 733 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Lang_6));
#line 733 "ml_foreign_proc_gen.m"
    }
#line 733 "ml_foreign_proc_gen.m"
    {
#line 733 "ml_foreign_proc_gen.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_foreign_proc_gen__V_13_13, ml_backend__ml_foreign_proc_gen__ArgList_7, &ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ((MR_Box) (ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11)), &ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
    }
#line 733 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12 = ((MR_Word) ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
#line 735 "ml_foreign_proc_gen.m"
    {
#line 735 "ml_foreign_proc_gen.m"
      mercury__list__condense_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ml_backend__ml_foreign_proc_gen__AssignInputs_8);
#line 735 "ml_foreign_proc_gen.m"
      return;
    }
#line 732 "ml_foreign_proc_gen.m"
  }
#line 728 "ml_foreign_proc_gen.m"
}

#line 662 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
#line 662 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 662 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_2,
#line 662 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 662 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4)
#line 662 "ml_foreign_proc_gen.m"
{
#line 666 "ml_foreign_proc_gen.m"
  {
#line 666 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 666 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 666 "ml_foreign_proc_gen.m"
    else
#line 668 "ml_foreign_proc_gen.m"
      {
#line 668 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 668 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 668 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decl_11;
#line 668 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decls_12;
#line 668 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 1)));
#line 668 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 2)));
#line 668 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_22;
#line 680 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 0)));
#line 680 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___BoxPolicy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 3)));
#line 702 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_23;
#line 683 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_29_29;
#line 683 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Mode_24;
#line 721 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_50_50;
#line 722 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_49_49;

#line 681 "ml_foreign_proc_gen.m"
        {
#line 681 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_22);
        }
#line 683 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19)) == (MR_mktag((MR_Integer) 1)));
#line 683 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 683 "ml_foreign_proc_gen.m"
          {
#line 683 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19, (MR_Integer) 0)));
#line 683 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_29_29, (MR_Integer) 0)));
#line 683 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen___Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_29_29, (MR_Integer) 1)));
#line 722 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_50_50 = (MR_Char) 95;
#line 722 "ml_foreign_proc_gen.m"
            {
#line 722 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_23, ml_backend__ml_foreign_proc_gen__V_50_50, &ml_backend__ml_foreign_proc_gen__V_49_49);
            }
#line 684 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 683 "ml_foreign_proc_gen.m"
          }
#line 702 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 697 "ml_foreign_proc_gen.m"
          {
#line 697 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_25;
#line 697 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__TypeDecl_26;
#line 697 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__VarDeclString_27;
#line 697 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarDecl_28;
#line 697 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;
#line 697 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_38_38;
#line 697 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_45_45;

#line 689 "ml_foreign_proc_gen.m"
#line 689 "ml_foreign_proc_gen.m"
            switch (ml_backend__ml_foreign_proc_gen__MutableSpecial_2) {
#line 689 "ml_foreign_proc_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 689 "ml_foreign_proc_gen.m"
              case (MR_Integer) 0:
#line 694 "ml_foreign_proc_gen.m"
                {
#line 692 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__V_36_36;

#line 692 "ml_foreign_proc_gen.m"
                  {
#line 692 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_36_36 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
#line 692 "ml_foreign_proc_gen.m"
                  {
#line 692 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__Type_20, ml_backend__ml_foreign_proc_gen__V_36_36);
                  }
#line 694 "ml_foreign_proc_gen.m"
                  if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 693 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 694 "ml_foreign_proc_gen.m"
                  else
#line 695 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 694 "ml_foreign_proc_gen.m"
                }
#line 689 "ml_foreign_proc_gen.m"
                break;
#line 689 "ml_foreign_proc_gen.m"
              case (MR_Integer) 1:
#line 688 "ml_foreign_proc_gen.m"
                {
#line 688 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_22, ml_backend__ml_foreign_proc_gen__Type_20);
                }
#line 689 "ml_foreign_proc_gen.m"
                break;
#line 689 "ml_foreign_proc_gen.m"
            }
#line 698 "ml_foreign_proc_gen.m"
            {
#line 698 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__TypeDecl_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 698 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_25));
#line 698 "ml_foreign_proc_gen.m"
            }
#line 699 "ml_foreign_proc_gen.m"
            {
#line 699 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[11], ml_backend__ml_foreign_proc_gen__ArgName_23, &ml_backend__ml_foreign_proc_gen__V_38_38);
            }
#line 699 "ml_foreign_proc_gen.m"
            {
#line 699 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_45_45 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_38_38, (MR_String) ";\n");
            }
#line 699 "ml_foreign_proc_gen.m"
            {
#line 699 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__VarDeclString_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__V_45_45);
            }
#line 700 "ml_foreign_proc_gen.m"
            {
#line 700 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__VarDecl_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 700 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__VarDecl_28, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDeclString_27));
#line 700 "ml_foreign_proc_gen.m"
            }
#line 701 "ml_foreign_proc_gen.m"
            {
#line 701 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDecl_28));
#line 701 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "ml_foreign_proc_gen.m"
            }
#line 701 "ml_foreign_proc_gen.m"
            {
#line 701 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 701 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TypeDecl_26));
#line 701 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_34_34));
#line 701 "ml_foreign_proc_gen.m"
            }
#line 697 "ml_foreign_proc_gen.m"
          }
#line 702 "ml_foreign_proc_gen.m"
        else
#line 705 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 670 "ml_foreign_proc_gen.m"
        {
#line 670 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__Info_1, ml_backend__ml_foreign_proc_gen__MutableSpecial_2, ml_backend__ml_foreign_proc_gen__Args_10, &ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 668 "ml_foreign_proc_gen.m"
        {
#line 668 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Decl_11, ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 668 "ml_foreign_proc_gen.m"
      }
#line 666 "ml_foreign_proc_gen.m"
  }
#line 662 "ml_foreign_proc_gen.m"
}

#line 613 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
#line 613 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 613 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_2,
#line 613 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 613 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4)
#line 613 "ml_foreign_proc_gen.m"
{
#line 616 "ml_foreign_proc_gen.m"
  {
#line 616 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 616 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "ml_foreign_proc_gen.m"
    else
#line 617 "ml_foreign_proc_gen.m"
      {
#line 617 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 617 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 617 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decl_11;
#line 617 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decls_12;
#line 617 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 1)));
#line 617 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 2)));
#line 617 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 3)));
#line 617 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_21;
#line 617 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__DeclString_25;
#line 628 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 0)));
#line 643 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_22;
#line 631 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
#line 631 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Mode_23;
#line 721 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_55_55;
#line 722 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_54_54;

#line 629 "ml_foreign_proc_gen.m"
        {
#line 629 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_21);
        }
#line 631 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18)) == (MR_mktag((MR_Integer) 1)));
#line 631 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 631 "ml_foreign_proc_gen.m"
          {
#line 631 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18, (MR_Integer) 0)));
#line 631 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 0)));
#line 631 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen___Mode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 1)));
#line 722 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_55_55 = (MR_Char) 95;
#line 722 "ml_foreign_proc_gen.m"
            {
#line 722 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_22, ml_backend__ml_foreign_proc_gen__V_55_55, &ml_backend__ml_foreign_proc_gen__V_54_54);
            }
#line 632 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 631 "ml_foreign_proc_gen.m"
          }
#line 643 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 641 "ml_foreign_proc_gen.m"
          {
#line 641 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__TypeString_24;
#line 641 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_34_34;
#line 641 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_40_40;
#line 641 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_41_41;
#line 641 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_43_43;
#line 641 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_44_44;
#line 641 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_51_51;

#line 637 "ml_foreign_proc_gen.m"
#line 637 "ml_foreign_proc_gen.m"
            switch (ml_backend__ml_foreign_proc_gen__BoxPolicy_20) {
#line 637 "ml_foreign_proc_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 637 "ml_foreign_proc_gen.m"
              case (MR_Integer) 1:
#line 636 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__TypeString_24 = (MR_String) "MR_Word";
#line 637 "ml_foreign_proc_gen.m"
                break;
#line 637 "ml_foreign_proc_gen.m"
              case (MR_Integer) 0:
#line 639 "ml_foreign_proc_gen.m"
                {
#line 639 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__TypeString_24 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_21, ml_backend__ml_foreign_proc_gen__Lang_2, ml_backend__ml_foreign_proc_gen__Type_19);
                }
#line 637 "ml_foreign_proc_gen.m"
                break;
#line 637 "ml_foreign_proc_gen.m"
            }
#line 5052 "ml_backend.ml_foreign_proc_gen.c"
            ml_backend__ml_foreign_proc_gen__V_40_40 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[11];
#line 642 "ml_foreign_proc_gen.m"
            {
#line 642 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_40_40, ml_backend__ml_foreign_proc_gen__ArgName_22, &ml_backend__ml_foreign_proc_gen__V_34_34);
            }
#line 642 "ml_foreign_proc_gen.m"
            {
#line 642 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_41_41 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_34_34, (MR_String) ";\n");
            }
#line 642 "ml_foreign_proc_gen.m"
            {
#line 642 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__V_41_41);
            }
#line 642 "ml_foreign_proc_gen.m"
            {
#line 642 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_40_40, ml_backend__ml_foreign_proc_gen__TypeString_24, &ml_backend__ml_foreign_proc_gen__V_44_44);
            }
#line 642 "ml_foreign_proc_gen.m"
            {
#line 642 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_51_51 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_44_44, ml_backend__ml_foreign_proc_gen__V_43_43);
            }
#line 642 "ml_foreign_proc_gen.m"
            {
#line 642 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__DeclString_25 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_51_51);
            }
#line 641 "ml_foreign_proc_gen.m"
          }
#line 643 "ml_foreign_proc_gen.m"
        else
#line 646 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__DeclString_25 = (MR_String) "";
#line 648 "ml_foreign_proc_gen.m"
        {
#line 648 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 648 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__DeclString_25));
#line 648 "ml_foreign_proc_gen.m"
        }
#line 619 "ml_foreign_proc_gen.m"
        {
#line 619 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(ml_backend__ml_foreign_proc_gen__Info_1, ml_backend__ml_foreign_proc_gen__Lang_2, ml_backend__ml_foreign_proc_gen__Args_10, &ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 617 "ml_foreign_proc_gen.m"
        {
#line 617 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 617 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = base;
#line 617 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Decl_11));
#line 617 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Decls_12));
#line 617 "ml_foreign_proc_gen.m"
        }
#line 617 "ml_foreign_proc_gen.m"
      }
#line 616 "ml_foreign_proc_gen.m"
  }
#line 613 "ml_foreign_proc_gen.m"
}

#line 592 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_3,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_4)
#line 592 "ml_foreign_proc_gen.m"
{
#line 595 "ml_foreign_proc_gen.m"
  {
#line 595 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 595 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_5;
#line 595 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__PredId_6;
#line 595 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_7;
#line 595 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Name_8;
#line 595 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Module_9;
#line 595 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_12_12;
#line 595 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_13_13;
#line 595 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_14_14;

#line 596 "ml_foreign_proc_gen.m"
    {
#line 596 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__ModuleInfo_5);
    }
#line 601 "ml_foreign_proc_gen.m"
    {
#line 601 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__PredId_6);
    }
#line 602 "ml_foreign_proc_gen.m"
    {
#line 602 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__ProcId_7);
    }
#line 603 "ml_foreign_proc_gen.m"
    {
#line 603 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_5, ml_backend__ml_foreign_proc_gen__PredId_6, ml_backend__ml_foreign_proc_gen__ProcId_7, &ml_backend__ml_foreign_proc_gen__Name_8, &ml_backend__ml_foreign_proc_gen__Module_9);
    }
#line 605 "ml_foreign_proc_gen.m"
    {
#line 605 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 605 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Module_9));
#line 605 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 605 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Name_8));
#line 605 "ml_foreign_proc_gen.m"
    }
#line 605 "ml_foreign_proc_gen.m"
    {
#line 605 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 605 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_13_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_14_14));
#line 605 "ml_foreign_proc_gen.m"
    }
#line 605 "ml_foreign_proc_gen.m"
    {
#line 605 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 605 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_12_12, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_13_13));
#line 605 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 605 "ml_foreign_proc_gen.m"
    }
#line 604 "ml_foreign_proc_gen.m"
    {
#line 604 "ml_foreign_proc_gen.m"
      MR_Word base;
#line 604 "ml_foreign_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HashDefine_4 = base;
#line 604 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[10])));
#line 604 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_12_12));
#line 604 "ml_foreign_proc_gen.m"
    }
#line 595 "ml_foreign_proc_gen.m"
  }
#line 592 "ml_foreign_proc_gen.m"
}

#line 570 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
#line 570 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 570 "ml_foreign_proc_gen.m"
{
#line 570 "ml_foreign_proc_gen.m"
  {
#line 570 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 570 "ml_foreign_proc_gen.m"
    MR_builtin_longjmp((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0, 1);
#line 570 "ml_foreign_proc_gen.m"
  }
#line 570 "ml_foreign_proc_gen.m"
}

#line 571 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
#line 571 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 571 "ml_foreign_proc_gen.m"
{
#line 571 "ml_foreign_proc_gen.m"
  {
#line 571 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 571 "ml_foreign_proc_gen.m"
    (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14 = ((MR_String) (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14);
#line 571 "ml_foreign_proc_gen.m"
    {
#line 571 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(ml_backend__ml_foreign_proc_gen__env_ptr);
#line 571 "ml_foreign_proc_gen.m"
      return;
    }
#line 571 "ml_foreign_proc_gen.m"
  }
#line 571 "ml_foreign_proc_gen.m"
}

#line 570 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
#line 570 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 570 "ml_foreign_proc_gen.m"
{
#line 570 "ml_foreign_proc_gen.m"
  {
#line 570 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 570 "ml_foreign_proc_gen.m"
    {
#line 572 "ml_foreign_proc_gen.m"
      MR_Integer ml_backend__ml_foreign_proc_gen__V_15_15;

#line 572 "ml_foreign_proc_gen.m"
      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27 = (MR_String) "MR_ALLOC_ID";
#line 572 "ml_foreign_proc_gen.m"
      {
#line 572 "ml_foreign_proc_gen.m"
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27, &ml_backend__ml_foreign_proc_gen__V_15_15);
      }
#line 572 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 572 "ml_foreign_proc_gen.m"
        {
#line 572 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(ml_backend__ml_foreign_proc_gen__env_ptr);
#line 572 "ml_foreign_proc_gen.m"
          return;
        }
#line 570 "ml_foreign_proc_gen.m"
    }
#line 570 "ml_foreign_proc_gen.m"
  }
#line 570 "ml_foreign_proc_gen.m"
}

#line 570 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
#line 570 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 570 "ml_foreign_proc_gen.m"
{
#line 570 "ml_foreign_proc_gen.m"
  {
#line 570 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 570 "ml_foreign_proc_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0) == 0)
#line 570 "ml_foreign_proc_gen.m"
      {
#line 570 "ml_foreign_proc_gen.m"
        {
#line 570 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42;

#line 570 "ml_foreign_proc_gen.m"
          (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13 == (MR_Integer) 1);
#line 570 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 570 "ml_foreign_proc_gen.m"
            {
#line 5337 "ml_backend.ml_foreign_proc_gen.c"
              ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 571 "ml_foreign_proc_gen.m"
              {
#line 571 "ml_foreign_proc_gen.m"
                mercury__list__member_2_p_1(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42, &(ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7, ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3, ml_backend__ml_foreign_proc_gen__env_ptr);
              }
#line 570 "ml_foreign_proc_gen.m"
            }
#line 570 "ml_foreign_proc_gen.m"
        }
#line 570 "ml_foreign_proc_gen.m"
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_FALSE;
#line 570 "ml_foreign_proc_gen.m"
      }
#line 570 "ml_foreign_proc_gen.m"
    else
#line 570 "ml_foreign_proc_gen.m"
      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_TRUE;
#line 570 "ml_foreign_proc_gen.m"
  }
#line 570 "ml_foreign_proc_gen.m"
}

#line 561 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
#line 561 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__C_Codes_7,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_9,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashUndef_10,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24,
#line 561 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25)
#line 561 "ml_foreign_proc_gen.m"
{
#line 561 "ml_foreign_proc_gen.m"
  {
#line 561 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s ml_backend__ml_foreign_proc_gen__env;

#line 561 "ml_foreign_proc_gen.m"
    (ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7 = ml_backend__ml_foreign_proc_gen__C_Codes_7;
#line 566 "ml_foreign_proc_gen.m"
    {
#line 566 "ml_foreign_proc_gen.m"
      MR_Word ml_backend__ml_foreign_proc_gen__Globals_12;

#line 567 "ml_foreign_proc_gen.m"
      {
#line 567 "ml_foreign_proc_gen.m"
        ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__Globals_12);
      }
#line 568 "ml_foreign_proc_gen.m"
      {
#line 568 "ml_foreign_proc_gen.m"
        libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 191, &(ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13);
      }
#line 570 "ml_foreign_proc_gen.m"
      {
#line 570 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(&ml_backend__ml_foreign_proc_gen__env);
      }
#line 587 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 574 "ml_foreign_proc_gen.m"
        {
#line 574 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_16;
#line 574 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__PredId_17;
#line 574 "ml_foreign_proc_gen.m"
          MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_18;
#line 574 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__GlobalData0_19;
#line 574 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ProcLabel_20;
#line 574 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__AllocId_22;
#line 574 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__GlobalData_23;
#line 574 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_33_33;
#line 574 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;
#line 578 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen___Module_21;

#line 574 "ml_foreign_proc_gen.m"
          {
#line 574 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__ModuleInfo_16);
          }
#line 575 "ml_foreign_proc_gen.m"
          {
#line 575 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__PredId_17);
          }
#line 576 "ml_foreign_proc_gen.m"
          {
#line 576 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__ProcId_18);
          }
#line 577 "ml_foreign_proc_gen.m"
          {
#line 577 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__GlobalData0_19);
          }
#line 578 "ml_foreign_proc_gen.m"
          {
#line 578 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_16, ml_backend__ml_foreign_proc_gen__PredId_17, ml_backend__ml_foreign_proc_gen__ProcId_18, &ml_backend__ml_foreign_proc_gen__ProcLabel_20, &ml_backend__ml_foreign_proc_gen___Module_21);
          }
#line 579 "ml_foreign_proc_gen.m"
          {
#line 579 "ml_foreign_proc_gen.m"
            ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(ml_backend__ml_foreign_proc_gen__ProcLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ml_backend__ml_foreign_proc_gen__Context_8, &ml_backend__ml_foreign_proc_gen__AllocId_22, ml_backend__ml_foreign_proc_gen__GlobalData0_19, &ml_backend__ml_foreign_proc_gen__GlobalData_23);
          }
#line 581 "ml_foreign_proc_gen.m"
          {
#line 581 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_foreign_proc_gen__GlobalData_23, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);
          }
#line 584 "ml_foreign_proc_gen.m"
          {
#line 584 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 584 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AllocId_22));
#line 584 "ml_foreign_proc_gen.m"
          }
#line 584 "ml_foreign_proc_gen.m"
          {
#line 584 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 584 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_33_33, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_34_34));
#line 584 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 584 "ml_foreign_proc_gen.m"
          }
#line 583 "ml_foreign_proc_gen.m"
          {
#line 583 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 583 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__HashDefine_9 = base;
#line 583 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[8])));
#line 583 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_33_33));
#line 583 "ml_foreign_proc_gen.m"
          }
#line 586 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11]);
#line 574 "ml_foreign_proc_gen.m"
        }
#line 587 "ml_foreign_proc_gen.m"
      else
#line 588 "ml_foreign_proc_gen.m"
        {
#line 588 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 588 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24;
#line 588 "ml_foreign_proc_gen.m"
        }
#line 566 "ml_foreign_proc_gen.m"
    }
#line 561 "ml_foreign_proc_gen.m"
  }
#line 561 "ml_foreign_proc_gen.m"
}

#line 537 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
#line 537 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_6,
#line 537 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_7,
#line 537 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_8,
#line 537 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ObtainLock_9,
#line 537 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ReleaseLock_10)
#line 537 "ml_foreign_proc_gen.m"
{
#line 541 "ml_foreign_proc_gen.m"
  {
#line 541 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 541 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_11;
#line 541 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Globals_12;
#line 541 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Parallel_13;

#line 542 "ml_foreign_proc_gen.m"
    {
#line 542 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_11);
    }
#line 543 "ml_foreign_proc_gen.m"
    {
#line 543 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_11, &ml_backend__ml_foreign_proc_gen__Globals_12);
    }
#line 544 "ml_foreign_proc_gen.m"
    {
#line 544 "ml_foreign_proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 213, &ml_backend__ml_foreign_proc_gen__Parallel_13);
    }
#line 546 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Parallel_13 == (MR_Integer) 1);
#line 546 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 547 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__ThreadSafe_7 == (MR_Integer) 0);
#line 556 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 549 "ml_foreign_proc_gen.m"
      {
#line 549 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_14;
#line 549 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__Name_15;
#line 549 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__MangledName_16;
#line 549 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_18_18;
#line 549 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
#line 549 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_24_24;

#line 549 "ml_foreign_proc_gen.m"
        {
#line 549 "ml_foreign_proc_gen.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_11, ml_backend__ml_foreign_proc_gen__PredId_8, &ml_backend__ml_foreign_proc_gen__PredInfo_14);
        }
#line 550 "ml_foreign_proc_gen.m"
        {
#line 550 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(ml_backend__ml_foreign_proc_gen__PredInfo_14);
        }
#line 551 "ml_foreign_proc_gen.m"
        {
#line 551 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__MangledName_16 = backend_libs__c_util__quote_string_1_f_0(ml_backend__ml_foreign_proc_gen__Name_15);
        }
#line 553 "ml_foreign_proc_gen.m"
        {
#line 553 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 553 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MangledName_16));
#line 553 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[10])));
#line 553 "ml_foreign_proc_gen.m"
        }
#line 552 "ml_foreign_proc_gen.m"
        {
#line 552 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 552 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_18_18, 0) = ((MR_Box) ((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\""));
#line 552 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_18_18, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 552 "ml_foreign_proc_gen.m"
        }
#line 552 "ml_foreign_proc_gen.m"
        {
#line 552 "ml_foreign_proc_gen.m"
          mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__V_18_18, ml_backend__ml_foreign_proc_gen__ObtainLock_9);
        }
#line 554 "ml_foreign_proc_gen.m"
        {
#line 554 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 554 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_24_24, 0) = ((MR_Box) ((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\""));
#line 554 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_24_24, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 554 "ml_foreign_proc_gen.m"
        }
#line 554 "ml_foreign_proc_gen.m"
        {
#line 554 "ml_foreign_proc_gen.m"
          mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__V_24_24, ml_backend__ml_foreign_proc_gen__ReleaseLock_10);
#line 554 "ml_foreign_proc_gen.m"
          return;
        }
#line 549 "ml_foreign_proc_gen.m"
      }
#line 556 "ml_foreign_proc_gen.m"
    else
#line 557 "ml_foreign_proc_gen.m"
      {
#line 557 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__ObtainLock_9 = (MR_String) "";
#line 558 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__ReleaseLock_10 = (MR_String) "";
#line 557 "ml_foreign_proc_gen.m"
      }
#line 541 "ml_foreign_proc_gen.m"
  }
#line 537 "ml_foreign_proc_gen.m"
}

#line 71 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
#line 71 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
#line 71 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
#line 71 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 71 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18)
#line 71 "ml_foreign_proc_gen.m"
{
#line 76 "ml_foreign_proc_gen.m"
  {
#line 76 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 76 "ml_foreign_proc_gen.m"
#line 76 "ml_foreign_proc_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__Expr_5)) {
#line 76 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 76 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 76 "ml_foreign_proc_gen.m"
        {
#line 76 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__EnvVar_8;
#line 76 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__EnvVarRval_9;
#line 76 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 76 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
#line 76 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_27_27;

#line 76 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__EnvVar_8 = (MR_String) ml_backend__ml_foreign_proc_gen__V_24_24;
#line 77 "ml_foreign_proc_gen.m"
          {
#line 77 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(ml_backend__ml_foreign_proc_gen__EnvVar_8, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
#line 78 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_27_27 = (MR_Word) ml_backend__ml_foreign_proc_gen__EnvVar_8;
#line 78 "ml_foreign_proc_gen.m"
          {
#line 78 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 78 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_26_26, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_27_27));
#line 78 "ml_foreign_proc_gen.m"
          }
#line 78 "ml_foreign_proc_gen.m"
          {
#line 78 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__EnvVarRval_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 78 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__EnvVarRval_9, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_26_26));
#line 78 "ml_foreign_proc_gen.m"
          }
#line 80 "ml_foreign_proc_gen.m"
          {
#line 80 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 80 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 80 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 80 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 80 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 80 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EnvVarRval_9));
#line 80 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9])));
#line 80 "ml_foreign_proc_gen.m"
          }
#line 76 "ml_foreign_proc_gen.m"
        }
#line 76 "ml_foreign_proc_gen.m"
        break;
#line 76 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 82 "ml_foreign_proc_gen.m"
        {
#line 82 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 82 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalA_12;

#line 83 "ml_foreign_proc_gen.m"
          {
#line 83 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_11, &ml_backend__ml_foreign_proc_gen__RvalA_12, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
#line 84 "ml_foreign_proc_gen.m"
          {
#line 84 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 84 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 84 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 84 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 84 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
#line 84 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_12));
#line 84 "ml_foreign_proc_gen.m"
          }
#line 82 "ml_foreign_proc_gen.m"
        }
#line 76 "ml_foreign_proc_gen.m"
        break;
#line 76 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 86 "ml_foreign_proc_gen.m"
        {
#line 86 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__TraceOp_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 86 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 2)));
#line 86 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalB_15;
#line 86 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Op_16;
#line 86 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19;
#line 86 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprA_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 1)));
#line 86 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalA_32;

#line 87 "ml_foreign_proc_gen.m"
          {
#line 87 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_31, &ml_backend__ml_foreign_proc_gen__RvalA_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19);
          }
#line 88 "ml_foreign_proc_gen.m"
          {
#line 88 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprB_14, &ml_backend__ml_foreign_proc_gen__RvalB_15, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
#line 92 "ml_foreign_proc_gen.m"
#line 92 "ml_foreign_proc_gen.m"
          switch (ml_backend__ml_foreign_proc_gen__TraceOp_13) {
#line 92 "ml_foreign_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 92 "ml_foreign_proc_gen.m"
            case (MR_Integer) 1:
#line 94 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 92 "ml_foreign_proc_gen.m"
              break;
#line 92 "ml_foreign_proc_gen.m"
            case (MR_Integer) 0:
#line 91 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 92 "ml_foreign_proc_gen.m"
              break;
#line 92 "ml_foreign_proc_gen.m"
          }
#line 96 "ml_foreign_proc_gen.m"
          {
#line 96 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 96 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 96 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 96 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 96 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Op_16));
#line 96 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_32));
#line 96 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalB_15));
#line 96 "ml_foreign_proc_gen.m"
          }
#line 86 "ml_foreign_proc_gen.m"
        }
#line 76 "ml_foreign_proc_gen.m"
        break;
#line 76 "ml_foreign_proc_gen.m"
    }
#line 76 "ml_foreign_proc_gen.m"
  }
#line 71 "ml_foreign_proc_gen.m"
}

#line 29 "ml_foreign_proc_gen.m"
void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(
#line 29 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__CodeModel_13,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 29 "ml_foreign_proc_gen.m"
  MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_16,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 29 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__Foreign_Code_19,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34,
#line 29 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35)
#line 29 "ml_foreign_proc_gen.m"
{
#line 100 "ml_foreign_proc_gen.m"
  {
#line 100 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 100 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
#line 100 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_25;

#line 101 "ml_foreign_proc_gen.m"
    {
#line 101 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 105 "ml_foreign_proc_gen.m"
#line 105 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__CodeModel_13) {
#line 105 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 105 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 104 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 0;
#line 105 "ml_foreign_proc_gen.m"
        break;
#line 105 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 123 "ml_foreign_proc_gen.m"
        {
#line 123 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32;

#line 124 "ml_foreign_proc_gen.m"
          {
#line 124 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32 = parse_tree__prog_data__get_ordinary_despite_detism_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
          }
#line 128 "ml_foreign_proc_gen.m"
#line 128 "ml_foreign_proc_gen.m"
          switch (ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32) {
#line 128 "ml_foreign_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 128 "ml_foreign_proc_gen.m"
            case (MR_Integer) 0:
#line 126 "ml_foreign_proc_gen.m"
              {
#line 127 "ml_foreign_proc_gen.m"
                {
#line 127 "ml_foreign_proc_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected code model");
#line 127 "ml_foreign_proc_gen.m"
                  return;
                }
#line 126 "ml_foreign_proc_gen.m"
              }
#line 128 "ml_foreign_proc_gen.m"
              break;
#line 128 "ml_foreign_proc_gen.m"
            case (MR_Integer) 1:
#line 130 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 1;
#line 128 "ml_foreign_proc_gen.m"
              break;
#line 128 "ml_foreign_proc_gen.m"
          }
#line 123 "ml_foreign_proc_gen.m"
        }
#line 105 "ml_foreign_proc_gen.m"
        break;
#line 105 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 106 "ml_foreign_proc_gen.m"
        {
#line 106 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_26;
#line 106 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ProcInfo_28;
#line 106 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Detism_29;
#line 106 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__MaxSoln_31;
#line 108 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen___PredInfo_27;
#line 111 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_30_30;

#line 107 "ml_foreign_proc_gen.m"
          {
#line 107 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, &ml_backend__ml_foreign_proc_gen__ModuleInfo_26);
          }
#line 108 "ml_foreign_proc_gen.m"
          {
#line 108 "ml_foreign_proc_gen.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_26, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__ProcId_16, &ml_backend__ml_foreign_proc_gen___PredInfo_27, &ml_backend__ml_foreign_proc_gen__ProcInfo_28);
          }
#line 110 "ml_foreign_proc_gen.m"
          {
#line 110 "ml_foreign_proc_gen.m"
            hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ml_backend__ml_foreign_proc_gen__ProcInfo_28, &ml_backend__ml_foreign_proc_gen__Detism_29);
          }
#line 111 "ml_foreign_proc_gen.m"
          {
#line 111 "ml_foreign_proc_gen.m"
            parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_foreign_proc_gen__Detism_29, &ml_backend__ml_foreign_proc_gen__V_30_30, &ml_backend__ml_foreign_proc_gen__MaxSoln_31);
          }
#line 115 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = ((&ml_backend__ml_foreign_proc_gen_vector_common_3[0 + ml_backend__ml_foreign_proc_gen__MaxSoln_31]))->ml_backend__ml_foreign_proc_gen__vector_common_type_3_0__vct_3_f_0;
#line 106 "ml_foreign_proc_gen.m"
        }
#line 105 "ml_foreign_proc_gen.m"
        break;
#line 105 "ml_foreign_proc_gen.m"
    }
#line 138 "ml_foreign_proc_gen.m"
#line 138 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__Lang_24) {
#line 138 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 138 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 135 "ml_foreign_proc_gen.m"
        {
#line 135 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
#line 135 "ml_foreign_proc_gen.m"
          return;
        }
#line 138 "ml_foreign_proc_gen.m"
        break;
#line 138 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 139 "ml_foreign_proc_gen.m"
        {
#line 139 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Target_33;

#line 140 "ml_foreign_proc_gen.m"
          {
#line 140 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, &ml_backend__ml_foreign_proc_gen__Target_33);
          }
#line 146 "ml_foreign_proc_gen.m"
#line 146 "ml_foreign_proc_gen.m"
          switch (ml_backend__ml_foreign_proc_gen__Target_33) {
#line 146 "ml_foreign_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 146 "ml_foreign_proc_gen.m"
            case (MR_Integer) 0:
#line 146 "ml_foreign_proc_gen.m"
            case (MR_Integer) 3:
#line 146 "ml_foreign_proc_gen.m"
            case (MR_Integer) 2:
#line 150 "ml_foreign_proc_gen.m"
              {
#line 151 "ml_foreign_proc_gen.m"
                {
#line 151 "ml_foreign_proc_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "C# foreign code not supported for compilation target");
#line 151 "ml_foreign_proc_gen.m"
                  return;
                }
#line 150 "ml_foreign_proc_gen.m"
              }
#line 146 "ml_foreign_proc_gen.m"
              break;
#line 146 "ml_foreign_proc_gen.m"
            case (MR_Integer) 1:
#line 142 "ml_foreign_proc_gen.m"
              {
#line 143 "ml_foreign_proc_gen.m"
                {
#line 143 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 2, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
#line 143 "ml_foreign_proc_gen.m"
                  return;
                }
#line 142 "ml_foreign_proc_gen.m"
              }
#line 146 "ml_foreign_proc_gen.m"
              break;
#line 146 "ml_foreign_proc_gen.m"
          }
#line 139 "ml_foreign_proc_gen.m"
        }
#line 138 "ml_foreign_proc_gen.m"
        break;
#line 138 "ml_foreign_proc_gen.m"
      case (MR_Integer) 3:
#line 160 "ml_foreign_proc_gen.m"
        {
#line 161 "ml_foreign_proc_gen.m"
          {
#line 161 "ml_foreign_proc_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected language Erlang");
#line 161 "ml_foreign_proc_gen.m"
            return;
          }
#line 160 "ml_foreign_proc_gen.m"
        }
#line 138 "ml_foreign_proc_gen.m"
        break;
#line 138 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 155 "ml_foreign_proc_gen.m"
        {
#line 156 "ml_foreign_proc_gen.m"
          {
#line 156 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 3, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
#line 156 "ml_foreign_proc_gen.m"
            return;
          }
#line 155 "ml_foreign_proc_gen.m"
        }
#line 138 "ml_foreign_proc_gen.m"
        break;
#line 138 "ml_foreign_proc_gen.m"
    }
#line 100 "ml_foreign_proc_gen.m"
  }
#line 29 "ml_foreign_proc_gen.m"
}

#line 25 "ml_foreign_proc_gen.m"
void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_p_0(
#line 25 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_7,
#line 25 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
#line 25 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_9,
#line 25 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_10,
#line 25 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16,
#line 25 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_17)
#line 25 "ml_foreign_proc_gen.m"
{
#line 62 "ml_foreign_proc_gen.m"
  {
#line 62 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 62 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_12;
#line 62 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__SuccessLval_13;
#line 62 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__CondRval_14;
#line 62 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Statement_15;
#line 62 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_19_19;
#line 62 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;

#line 63 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__Decls_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 64 "ml_foreign_proc_gen.m"
    {
#line 64 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MLDSContext_12 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_8);
    }
#line 65 "ml_foreign_proc_gen.m"
    {
#line 65 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16, &ml_backend__ml_foreign_proc_gen__SuccessLval_13);
    }
#line 66 "ml_foreign_proc_gen.m"
    {
#line 66 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_7, &ml_backend__ml_foreign_proc_gen__CondRval_14, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_17);
    }
#line 67 "ml_foreign_proc_gen.m"
    {
#line 67 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 67 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessLval_13));
#line 67 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_20_20, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__CondRval_14));
#line 67 "ml_foreign_proc_gen.m"
    }
#line 67 "ml_foreign_proc_gen.m"
    {
#line 67 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 67 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 67 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_19_19, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 67 "ml_foreign_proc_gen.m"
    }
#line 67 "ml_foreign_proc_gen.m"
    {
#line 67 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Statement_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 67 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Statement_15, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_19_19));
#line 67 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Statement_15, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSContext_12));
#line 67 "ml_foreign_proc_gen.m"
    }
#line 69 "ml_foreign_proc_gen.m"
    {
#line 69 "ml_foreign_proc_gen.m"
      MR_Word base;
#line 69 "ml_foreign_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 69 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_10 = base;
#line 69 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Statement_15));
#line 69 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 69 "ml_foreign_proc_gen.m"
    }
#line 62 "ml_foreign_proc_gen.m"
  }
#line 25 "ml_foreign_proc_gen.m"
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
