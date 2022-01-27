/*
** Automatically generated from `ml_foreign_proc_gen.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 567 "ml_foreign_proc_gen.m"
struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s {
#line 567 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7;
#line 572 "ml_foreign_proc_gen.m"
  MR_bool ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded;
#line 572 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13;
#line 576 "ml_foreign_proc_gen.m"
  jmp_buf ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0;
#line 576 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14;
#line 576 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27;
#line 577 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14;
#line 567 "ml_foreign_proc_gen.m"
};


#line 177 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0;

#line 180 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 183 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0;

#line 186 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1;

#line 189 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2];

#line 192 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2];

#line 195 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2];

#line 198 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0;

#line 201 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1;

#line 204 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2;

#line 207 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[3];

#line 210 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[3];

#line 213 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[3];

#line 216 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
#line 219 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 221 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 224 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
#line 227 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 229 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 231 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3);

#line 234 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
#line 237 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 239 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 242 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
#line 245 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 247 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 249 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3);

#line 422 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigArgs_17,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 422 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__C_Code_19,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);

#line 198 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
#line 198 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg);

#line 174 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__TargetLang_14,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_15,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_16,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_17,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_19,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 174 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__JavaCode_21,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_22,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_23,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_24,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);

#line 198 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(
#line 198 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 198 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_53);

#line 268 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
#line 268 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 268 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 268 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3);

#line 268 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
#line 268 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 268 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 661 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
#line 661 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 661 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 661 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3);

#line 661 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
#line 661 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 661 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 994 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
#line 994 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38);

#line 950 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
#line 950 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_2,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);

#line 879 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
#line 879 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);

#line 827 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
#line 827 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
#line 827 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
#line 827 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
#line 827 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
#line 827 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
#line 827 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12);

#line 766 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_9,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_10,
#line 766 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_11,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_12,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_13,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_14,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28);

#line 746 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
#line 746 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 746 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
#line 746 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
#line 746 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 746 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);

#line 739 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
#line 739 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 739 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 739 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 739 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3,
#line 739 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_4);

#line 734 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
#line 734 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 734 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgList_7,
#line 734 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInputs_8,
#line 734 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11,
#line 734 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12);

#line 668 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
#line 668 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 668 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_2,
#line 668 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 668 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4);

#line 619 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
#line 619 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 619 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_2,
#line 619 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 619 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4);

#line 598 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
#line 598 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_3,
#line 598 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_4);

#line 576 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
#line 576 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 577 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
#line 577 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 576 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
#line 576 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 576 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
#line 576 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 567 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
#line 567 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__C_Codes_7,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_9,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashUndef_10,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);

#line 543 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
#line 543 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_6,
#line 543 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_7,
#line 543 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_8,
#line 543 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ObtainLock_9,
#line 543 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ReleaseLock_10);

#line 77 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
#line 77 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
#line 77 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
#line 77 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 77 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);


static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_1[19][2];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[21][1];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_4[1][8];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_5[1][5];


#line 121 "ml_foreign_proc_gen.m"
/* sealed */ struct ml_backend__ml_foreign_proc_gen__vector_common_type_3_0_s {
#line 121 "ml_foreign_proc_gen.m"
  const MR_Word ml_backend__ml_foreign_proc_gen__vector_common_type_3_0__vct_3_f_0;
#line 121 "ml_foreign_proc_gen.m"
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



#line 841 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0
  }
};

#line 849 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 857 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0 = {
  (MR_String) "mutable_special_case",
  (MR_Integer) 0
};

#line 863 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1 = {
  (MR_String) "not_mutable_special_case",
  (MR_Integer) 1
};

#line 869 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

#line 875 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

#line 881 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 887 "ml_backend.ml_foreign_proc_gen.c"
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

#line 904 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0 = {
  (MR_String) "kind_det",
  (MR_Integer) 0
};

#line 910 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1 = {
  (MR_String) "kind_semi",
  (MR_Integer) 1
};

#line 916 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2 = {
  (MR_String) "kind_failure",
  (MR_Integer) 2
};

#line 922 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2
};

#line 929 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1
};

#line 936 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 943 "ml_backend.ml_foreign_proc_gen.c"
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

#line 960 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
#line 963 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 965 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 967 "ml_backend.ml_foreign_proc_gen.c"
{
#line 969 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 971 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 974 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 976 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2));
    }
#line 979 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 981 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 983 "ml_backend.ml_foreign_proc_gen.c"
}

#line 986 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
#line 989 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 991 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 993 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3)
#line 995 "ml_backend.ml_foreign_proc_gen.c"
{
#line 997 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 999 "ml_backend.ml_foreign_proc_gen.c"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1;

#line 1002 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1004 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(&ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3));
    }
#line 1007 "ml_backend.ml_foreign_proc_gen.c"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1));
#line 1009 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1011 "ml_backend.ml_foreign_proc_gen.c"
}

#line 1014 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
#line 1017 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 1019 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 1021 "ml_backend.ml_foreign_proc_gen.c"
{
#line 1023 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 1025 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 1028 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1030 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2));
    }
#line 1033 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 1035 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1037 "ml_backend.ml_foreign_proc_gen.c"
}

#line 1040 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
#line 1043 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 1045 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 1047 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3)
#line 1049 "ml_backend.ml_foreign_proc_gen.c"
{
#line 1051 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 1053 "ml_backend.ml_foreign_proc_gen.c"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1;

#line 1056 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1058 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(&ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3));
    }
#line 1061 "ml_backend.ml_foreign_proc_gen.c"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1));
#line 1063 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1065 "ml_backend.ml_foreign_proc_gen.c"
}

#line 422 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigArgs_17,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 422 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__C_Code_19,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
#line 422 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45)
#line 422 "ml_foreign_proc_gen.m"
{
#line 429 "ml_foreign_proc_gen.m"
  {
#line 429 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Args_25;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_26;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_27;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_28;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements_30;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_31;
#line 429 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ObtainLock_32;
#line 429 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ReleaseLock_33;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_37;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_38;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_48_48;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_191_191;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_192_192;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_193_193;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_194_194;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_195_195;
#line 429 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_196_196;

#line 430 "ml_foreign_proc_gen.m"
    {
#line 430 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 433 "ml_foreign_proc_gen.m"
    {
#line 433 "ml_foreign_proc_gen.m"
      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ml_backend__ml_foreign_proc_gen__OrigArgs_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, &ml_backend__ml_foreign_proc_gen__Args_25);
    }
#line 434 "ml_foreign_proc_gen.m"
    {
#line 434 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44, ml_backend__ml_foreign_proc_gen__Lang_24, ml_backend__ml_foreign_proc_gen__Args_25, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_26);
    }
#line 437 "ml_foreign_proc_gen.m"
    {
#line 437 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_24, ml_backend__ml_foreign_proc_gen__Args_25, &ml_backend__ml_foreign_proc_gen__AssignInputsList_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46);
    }
#line 440 "ml_foreign_proc_gen.m"
    {
#line 440 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__Args_25, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_28, ml_backend__ml_foreign_proc_gen__Decls_21, &ml_backend__ml_foreign_proc_gen__ConvStatements_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47);
    }
#line 444 "ml_foreign_proc_gen.m"
    {
#line 444 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ThreadSafe_31 = parse_tree__prog_data__get_thread_safe_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 445 "ml_foreign_proc_gen.m"
    {
#line 445 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__ThreadSafe_31, ml_backend__ml_foreign_proc_gen__PredId_15, &ml_backend__ml_foreign_proc_gen__ObtainLock_32, &ml_backend__ml_foreign_proc_gen__ReleaseLock_33);
    }
#line 449 "ml_foreign_proc_gen.m"
    {
#line 449 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_48_48, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 449 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 449 "ml_foreign_proc_gen.m"
    }
#line 449 "ml_foreign_proc_gen.m"
    {
#line 449 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(ml_backend__ml_foreign_proc_gen__V_48_48, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34, &ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);
    }
#line 453 "ml_foreign_proc_gen.m"
    {
#line 453 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36);
    }
#line 475 "ml_foreign_proc_gen.m"
#line 475 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_13) {
#line 475 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 475 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 457 "ml_foreign_proc_gen.m"
        {
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_149_149;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_154_154;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_155_155;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_156_156;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_157_157;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_162_162;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_163_163;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_164_164;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_165_165;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_166_166;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_169_169;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_170_170;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_171_171;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_176_176;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_177_177;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_178_178;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_181_181;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_182_182;
#line 457 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_184_184;

#line 465 "ml_foreign_proc_gen.m"
          {
#line 465 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 465 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_165_165, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 465 "ml_foreign_proc_gen.m"
          }
#line 467 "ml_foreign_proc_gen.m"
          {
#line 467 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_171_171 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 467 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_171_171, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 467 "ml_foreign_proc_gen.m"
          }
#line 467 "ml_foreign_proc_gen.m"
          {
#line 467 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 467 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_170_170, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 467 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_170_170, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_171_171));
#line 467 "ml_foreign_proc_gen.m"
          }
#line 467 "ml_foreign_proc_gen.m"
          {
#line 467 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 467 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_169_169, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_170_170));
#line 467 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
#line 467 "ml_foreign_proc_gen.m"
          }
#line 466 "ml_foreign_proc_gen.m"
          {
#line 466 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_166_166, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
#line 466 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_166_166, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_169_169));
#line 466 "ml_foreign_proc_gen.m"
          }
#line 465 "ml_foreign_proc_gen.m"
          {
#line 465 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_164_164, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_165_165));
#line 465 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_164_164, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_166_166));
#line 465 "ml_foreign_proc_gen.m"
          }
#line 471 "ml_foreign_proc_gen.m"
          {
#line 471 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 471 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_182_182, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 471 "ml_foreign_proc_gen.m"
          }
#line 471 "ml_foreign_proc_gen.m"
          {
#line 471 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_181_181, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_182_182));
#line 471 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_181_181, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "ml_foreign_proc_gen.m"
          }
#line 470 "ml_foreign_proc_gen.m"
          {
#line 470 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_178_178, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19])));
#line 470 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_178_178, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_181_181));
#line 470 "ml_foreign_proc_gen.m"
          }
#line 473 "ml_foreign_proc_gen.m"
          {
#line 473 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_184_184, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
#line 473 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 473 "ml_foreign_proc_gen.m"
          }
#line 471 "ml_foreign_proc_gen.m"
          {
#line 471 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_177_177, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_178_178));
#line 471 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_177_177, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_184_184));
#line 471 "ml_foreign_proc_gen.m"
          }
#line 469 "ml_foreign_proc_gen.m"
          {
#line 469 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_176_176 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_176_176, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 469 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_176_176, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_177_177));
#line 469 "ml_foreign_proc_gen.m"
          }
#line 468 "ml_foreign_proc_gen.m"
          {
#line 468 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_163_163 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 468 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_163_163, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_164_164));
#line 468 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_163_163, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_176_176));
#line 468 "ml_foreign_proc_gen.m"
          }
#line 464 "ml_foreign_proc_gen.m"
          {
#line 464 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_162_162, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 464 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_162_162, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_163_163));
#line 464 "ml_foreign_proc_gen.m"
          }
#line 463 "ml_foreign_proc_gen.m"
          {
#line 463 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_157_157, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 463 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_157_157, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_162_162));
#line 463 "ml_foreign_proc_gen.m"
          }
#line 462 "ml_foreign_proc_gen.m"
          {
#line 462 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_156_156 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 462 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_156_156, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 462 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_156_156, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_157_157));
#line 462 "ml_foreign_proc_gen.m"
          }
#line 461 "ml_foreign_proc_gen.m"
          {
#line 461 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_155_155 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 461 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_155_155, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 461 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_155_155, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_156_156));
#line 461 "ml_foreign_proc_gen.m"
          }
#line 460 "ml_foreign_proc_gen.m"
          {
#line 460 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_154_154 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 460 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_154_154, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 460 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_154_154, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_155_155));
#line 460 "ml_foreign_proc_gen.m"
          }
#line 459 "ml_foreign_proc_gen.m"
          {
#line 459 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_149_149 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 459 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_149_149, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
#line 459 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_149_149, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_154_154));
#line 459 "ml_foreign_proc_gen.m"
          }
#line 458 "ml_foreign_proc_gen.m"
          {
#line 458 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_149_149);
          }
#line 474 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4]);
#line 457 "ml_foreign_proc_gen.m"
        }
#line 475 "ml_foreign_proc_gen.m"
        break;
#line 475 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 476 "ml_foreign_proc_gen.m"
        {
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_39;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_105_105;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_110_110;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_111_111;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_112_112;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_113_113;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_118_118;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_119_119;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_120_120;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_121_121;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_122_122;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_125_125;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_126_126;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_127_127;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_132_132;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_133_133;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_134_134;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_137_137;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_138_138;
#line 476 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_141_141;

#line 481 "ml_foreign_proc_gen.m"
          {
#line 481 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__SucceededLval_39);
          }
#line 489 "ml_foreign_proc_gen.m"
          {
#line 489 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_121_121 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 489 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_121_121, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 489 "ml_foreign_proc_gen.m"
          }
#line 491 "ml_foreign_proc_gen.m"
          {
#line 491 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 491 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_127_127, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 491 "ml_foreign_proc_gen.m"
          }
#line 491 "ml_foreign_proc_gen.m"
          {
#line 491 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 491 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_126_126, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 491 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_126_126, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_127_127));
#line 491 "ml_foreign_proc_gen.m"
          }
#line 491 "ml_foreign_proc_gen.m"
          {
#line 491 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_125_125, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_126_126));
#line 491 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
#line 491 "ml_foreign_proc_gen.m"
          }
#line 490 "ml_foreign_proc_gen.m"
          {
#line 490 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_122_122 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_122_122, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
#line 490 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_122_122, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_125_125));
#line 490 "ml_foreign_proc_gen.m"
          }
#line 489 "ml_foreign_proc_gen.m"
          {
#line 489 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_120_120, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_121_121));
#line 489 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_120_120, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_122_122));
#line 489 "ml_foreign_proc_gen.m"
          }
#line 495 "ml_foreign_proc_gen.m"
          {
#line 495 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_138_138, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 495 "ml_foreign_proc_gen.m"
          }
#line 495 "ml_foreign_proc_gen.m"
          {
#line 495 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_137_137, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_138_138));
#line 495 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "ml_foreign_proc_gen.m"
          }
#line 494 "ml_foreign_proc_gen.m"
          {
#line 494 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_134_134, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19])));
#line 494 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_134_134, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_137_137));
#line 494 "ml_foreign_proc_gen.m"
          }
#line 496 "ml_foreign_proc_gen.m"
          {
#line 496 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_133_133, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_134_134));
#line 496 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 496 "ml_foreign_proc_gen.m"
          }
#line 493 "ml_foreign_proc_gen.m"
          {
#line 493 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_132_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_132_132, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 493 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_132_132, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_133_133));
#line 493 "ml_foreign_proc_gen.m"
          }
#line 492 "ml_foreign_proc_gen.m"
          {
#line 492 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_119_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_119_119, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_120_120));
#line 492 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_119_119, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_132_132));
#line 492 "ml_foreign_proc_gen.m"
          }
#line 488 "ml_foreign_proc_gen.m"
          {
#line 488 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_118_118, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 488 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_118_118, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_119_119));
#line 488 "ml_foreign_proc_gen.m"
          }
#line 487 "ml_foreign_proc_gen.m"
          {
#line 487 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_113_113, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 487 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_113_113, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_118_118));
#line 487 "ml_foreign_proc_gen.m"
          }
#line 486 "ml_foreign_proc_gen.m"
          {
#line 486 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_112_112, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 486 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_112_112, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_113_113));
#line 486 "ml_foreign_proc_gen.m"
          }
#line 485 "ml_foreign_proc_gen.m"
          {
#line 485 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_111_111, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 485 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_111_111, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_112_112));
#line 485 "ml_foreign_proc_gen.m"
          }
#line 484 "ml_foreign_proc_gen.m"
          {
#line 484 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_110_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_110_110, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 484 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_110_110, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_111_111));
#line 484 "ml_foreign_proc_gen.m"
          }
#line 483 "ml_foreign_proc_gen.m"
          {
#line 483 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_105_105, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
#line 483 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_105_105, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_110_110));
#line 483 "ml_foreign_proc_gen.m"
          }
#line 482 "ml_foreign_proc_gen.m"
          {
#line 482 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_105_105);
          }
#line 498 "ml_foreign_proc_gen.m"
          {
#line 498 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 498 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_141_141, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_39));
#line 498 "ml_foreign_proc_gen.m"
          }
#line 498 "ml_foreign_proc_gen.m"
          {
#line 498 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_141_141));
#line 498 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[5])));
#line 498 "ml_foreign_proc_gen.m"
          }
#line 476 "ml_foreign_proc_gen.m"
        }
#line 475 "ml_foreign_proc_gen.m"
        break;
#line 475 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 503 "ml_foreign_proc_gen.m"
        {
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_56_56;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_57_57;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_67_67;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_68_68;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_69_69;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_70_70;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_71_71;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_74_74;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_75_75;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_81_81;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_82_82;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_86_86;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_87_87;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_92_92;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_96_96;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_97_97;
#line 503 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_198;

#line 504 "ml_foreign_proc_gen.m"
          {
#line 504 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__SucceededLval_198);
          }
#line 513 "ml_foreign_proc_gen.m"
          {
#line 513 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 513 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_70_70, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 513 "ml_foreign_proc_gen.m"
          }
#line 515 "ml_foreign_proc_gen.m"
          {
#line 515 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 515 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_76_76, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 515 "ml_foreign_proc_gen.m"
          }
#line 515 "ml_foreign_proc_gen.m"
          {
#line 515 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 515 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_75_75, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 515 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_75_75, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_76_76));
#line 515 "ml_foreign_proc_gen.m"
          }
#line 515 "ml_foreign_proc_gen.m"
          {
#line 515 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 515 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_74_74, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_75_75));
#line 515 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_74_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])));
#line 515 "ml_foreign_proc_gen.m"
          }
#line 514 "ml_foreign_proc_gen.m"
          {
#line 514 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 514 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[17])));
#line 514 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_74_74));
#line 514 "ml_foreign_proc_gen.m"
          }
#line 513 "ml_foreign_proc_gen.m"
          {
#line 513 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_69_69, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_70_70));
#line 513 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_69_69, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_71_71));
#line 513 "ml_foreign_proc_gen.m"
          }
#line 519 "ml_foreign_proc_gen.m"
          {
#line 519 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 519 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 519 "ml_foreign_proc_gen.m"
          }
#line 519 "ml_foreign_proc_gen.m"
          {
#line 519 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 519 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_87_87));
#line 519 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18])));
#line 519 "ml_foreign_proc_gen.m"
          }
#line 518 "ml_foreign_proc_gen.m"
          {
#line 518 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[19])));
#line 518 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_86_86));
#line 518 "ml_foreign_proc_gen.m"
          }
#line 522 "ml_foreign_proc_gen.m"
          {
#line 522 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_92_92, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
#line 522 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 522 "ml_foreign_proc_gen.m"
          }
#line 520 "ml_foreign_proc_gen.m"
          {
#line 520 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 520 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_82_82, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_83_83));
#line 520 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_82_82, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_92_92));
#line 520 "ml_foreign_proc_gen.m"
          }
#line 517 "ml_foreign_proc_gen.m"
          {
#line 517 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 517 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_81_81, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 517 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_81_81, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_82_82));
#line 517 "ml_foreign_proc_gen.m"
          }
#line 516 "ml_foreign_proc_gen.m"
          {
#line 516 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 516 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_68_68, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_69_69));
#line 516 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_68_68, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_81_81));
#line 516 "ml_foreign_proc_gen.m"
          }
#line 512 "ml_foreign_proc_gen.m"
          {
#line 512 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 512 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_67_67, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 512 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_67_67, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_68_68));
#line 512 "ml_foreign_proc_gen.m"
          }
#line 511 "ml_foreign_proc_gen.m"
          {
#line 511 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 511 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7])));
#line 511 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_67_67));
#line 511 "ml_foreign_proc_gen.m"
          }
#line 509 "ml_foreign_proc_gen.m"
          {
#line 509 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 509 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 509 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 509 "ml_foreign_proc_gen.m"
          }
#line 508 "ml_foreign_proc_gen.m"
          {
#line 508 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 508 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
#line 508 "ml_foreign_proc_gen.m"
          }
#line 507 "ml_foreign_proc_gen.m"
          {
#line 507 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_56_56, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 507 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_56_56, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_57_57));
#line 507 "ml_foreign_proc_gen.m"
          }
#line 506 "ml_foreign_proc_gen.m"
          {
#line 506 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
#line 506 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_56_56));
#line 506 "ml_foreign_proc_gen.m"
          }
#line 505 "ml_foreign_proc_gen.m"
          {
#line 505 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_51_51);
          }
#line 525 "ml_foreign_proc_gen.m"
          {
#line 525 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 525 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_97_97, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_198));
#line 525 "ml_foreign_proc_gen.m"
          }
#line 525 "ml_foreign_proc_gen.m"
          {
#line 525 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_96_96, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_97_97));
#line 525 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_96_96, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
#line 525 "ml_foreign_proc_gen.m"
          }
#line 524 "ml_foreign_proc_gen.m"
          {
#line 524 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[0])));
#line 524 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_96_96));
#line 524 "ml_foreign_proc_gen.m"
          }
#line 503 "ml_foreign_proc_gen.m"
        }
#line 475 "ml_foreign_proc_gen.m"
        break;
#line 475 "ml_foreign_proc_gen.m"
    }
#line 530 "ml_foreign_proc_gen.m"
    {
#line 530 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 530 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 530 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 1) = ((MR_Box) ((MR_Integer) 0));
#line 530 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_37));
#line 530 "ml_foreign_proc_gen.m"
    }
#line 531 "ml_foreign_proc_gen.m"
    {
#line 531 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 531 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 531 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 531 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_38));
#line 531 "ml_foreign_proc_gen.m"
    }
#line 533 "ml_foreign_proc_gen.m"
    {
#line 533 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_191_191 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_191_191, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 533 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_191_191, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40));
#line 533 "ml_foreign_proc_gen.m"
    }
#line 533 "ml_foreign_proc_gen.m"
    {
#line 533 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_192_192 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 532 "ml_foreign_proc_gen.m"
    {
#line 532 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_191_191));
#line 532 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_192_192));
#line 532 "ml_foreign_proc_gen.m"
    }
#line 534 "ml_foreign_proc_gen.m"
    {
#line 534 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 534 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_193_193, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41));
#line 534 "ml_foreign_proc_gen.m"
    }
#line 535 "ml_foreign_proc_gen.m"
    {
#line 535 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_194_194 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 534 "ml_foreign_proc_gen.m"
    {
#line 534 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_193_193));
#line 534 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_194_194));
#line 534 "ml_foreign_proc_gen.m"
    }
#line 536 "ml_foreign_proc_gen.m"
    {
#line 536 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_195_195 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 536 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_195_195, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42));
#line 536 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_195_195, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStatements_30));
#line 536 "ml_foreign_proc_gen.m"
    }
#line 537 "ml_foreign_proc_gen.m"
    {
#line 537 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_196_196, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43));
#line 537 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_196_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 537 "ml_foreign_proc_gen.m"
    }
#line 536 "ml_foreign_proc_gen.m"
    {
#line 536 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_22 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__V_195_195, ml_backend__ml_foreign_proc_gen__V_196_196);
    }
#line 429 "ml_foreign_proc_gen.m"
  }
#line 422 "ml_foreign_proc_gen.m"
}

#line 198 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
#line 198 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg)
#line 198 "ml_foreign_proc_gen.m"
{
#line 198 "ml_foreign_proc_gen.m"
  {
#line 198 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 198 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;

#line 198 "ml_foreign_proc_gen.m"
    {
#line 198 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))));
    }
#line 198 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 198 "ml_foreign_proc_gen.m"
  }
#line 198 "ml_foreign_proc_gen.m"
}

#line 174 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__TargetLang_14,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_15,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_16,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_17,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_19,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 174 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__JavaCode_21,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_22,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_23,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_24,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
#line 174 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47)
#line 174 "ml_foreign_proc_gen.m"
{
#line 183 "ml_foreign_proc_gen.m"
  {
#line 183 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_26;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_27;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_28;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Markers_29;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_30;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_31;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_32;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_33;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements_35;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__SucceededDecl_36;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignSucceeded_37;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_40;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_43;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_78_78;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_84_84;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_85_85;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_86_86;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_87_87;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_88_88;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_89_89;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_92_92;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_93_93;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_94_94;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_101_101;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_102_102;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_103_103;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_104_104;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_106_106;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_107_107;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_108_108;
#line 183 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_109_109;

#line 184 "ml_foreign_proc_gen.m"
    {
#line 184 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_26 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_16);
    }
#line 186 "ml_foreign_proc_gen.m"
    {
#line 186 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__ModuleInfo_27);
    }
#line 187 "ml_foreign_proc_gen.m"
    {
#line 187 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_27, ml_backend__ml_foreign_proc_gen__PredId_17, &ml_backend__ml_foreign_proc_gen__PredInfo_28);
    }
#line 188 "ml_foreign_proc_gen.m"
    {
#line 188 "ml_foreign_proc_gen.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(ml_backend__ml_foreign_proc_gen__PredInfo_28, &ml_backend__ml_foreign_proc_gen__Markers_29);
    }
#line 189 "ml_foreign_proc_gen.m"
    {
#line 189 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_pred__check_marker_2_p_0(ml_backend__ml_foreign_proc_gen__Markers_29, (MR_Integer) 22);
    }
#line 189 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 190 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 0;
#line 189 "ml_foreign_proc_gen.m"
    else
#line 192 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 1;
#line 196 "ml_foreign_proc_gen.m"
    {
#line 196 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_31);
    }
#line 198 "ml_foreign_proc_gen.m"
    {
#line 198 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 198 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_5[0]));
#line 198 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1));
#line 198 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 198 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20));
#line 198 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 198 "ml_foreign_proc_gen.m"
    }
#line 198 "ml_foreign_proc_gen.m"
    {
#line 198 "ml_foreign_proc_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_foreign_proc_gen__V_49_49, (MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_csharp_java_proc\'/13", (MR_String) "extra args");
    }
#line 201 "ml_foreign_proc_gen.m"
    {
#line 201 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_26, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__AssignInputsList_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54);
    }
#line 204 "ml_foreign_proc_gen.m"
    {
#line 204 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, ml_backend__ml_foreign_proc_gen__Context_22, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_33, ml_backend__ml_foreign_proc_gen__Decls_23, &ml_backend__ml_foreign_proc_gen__ConvStatements_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);
    }
#line 213 "ml_foreign_proc_gen.m"
#line 213 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__OrdinaryKind_15) {
#line 213 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 213 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 210 "ml_foreign_proc_gen.m"
        {
#line 211 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 212 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 210 "ml_foreign_proc_gen.m"
        }
#line 213 "ml_foreign_proc_gen.m"
        break;
#line 213 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 231 "ml_foreign_proc_gen.m"
        {
#line 231 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
#line 231 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 231 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_112;

#line 232 "ml_foreign_proc_gen.m"
          {
#line 232 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47, &ml_backend__ml_foreign_proc_gen__SucceededLval_112);
          }
#line 233 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 236 "ml_foreign_proc_gen.m"
          {
#line 236 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 236 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_112));
#line 236 "ml_foreign_proc_gen.m"
          }
#line 236 "ml_foreign_proc_gen.m"
          {
#line 236 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 236 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[14])));
#line 236 "ml_foreign_proc_gen.m"
          }
#line 235 "ml_foreign_proc_gen.m"
          {
#line 235 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[14])));
#line 235 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
#line 235 "ml_foreign_proc_gen.m"
          }
#line 231 "ml_foreign_proc_gen.m"
        }
#line 213 "ml_foreign_proc_gen.m"
        break;
#line 213 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 214 "ml_foreign_proc_gen.m"
        {
#line 214 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_38;
#line 214 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__BoolType_39;
#line 214 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_64_64;
#line 214 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_65_65;
#line 214 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_67_67;
#line 214 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;
#line 214 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;

#line 215 "ml_foreign_proc_gen.m"
          {
#line 215 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47, &ml_backend__ml_foreign_proc_gen__SucceededLval_38);
          }
#line 219 "ml_foreign_proc_gen.m"
#line 219 "ml_foreign_proc_gen.m"
          switch (ml_backend__ml_foreign_proc_gen__TargetLang_14) {
#line 219 "ml_foreign_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 219 "ml_foreign_proc_gen.m"
            case (MR_Integer) 2:
#line 221 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "bool";
#line 219 "ml_foreign_proc_gen.m"
              break;
#line 219 "ml_foreign_proc_gen.m"
            case (MR_Integer) 3:
#line 218 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "boolean";
#line 219 "ml_foreign_proc_gen.m"
              break;
#line 219 "ml_foreign_proc_gen.m"
          }
#line 224 "ml_foreign_proc_gen.m"
          {
#line 224 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_67_67 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__BoolType_39, (MR_String) " SUCCESS_INDICATOR;\n");
          }
#line 224 "ml_foreign_proc_gen.m"
          {
#line 224 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_67_67);
          }
#line 224 "ml_foreign_proc_gen.m"
          {
#line 224 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 224 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_65_65));
#line 224 "ml_foreign_proc_gen.m"
          }
#line 224 "ml_foreign_proc_gen.m"
          {
#line 224 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_64_64));
#line 224 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 224 "ml_foreign_proc_gen.m"
          }
#line 227 "ml_foreign_proc_gen.m"
          {
#line 227 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 227 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_38));
#line 227 "ml_foreign_proc_gen.m"
          }
#line 227 "ml_foreign_proc_gen.m"
          {
#line 227 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
#line 227 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15])));
#line 227 "ml_foreign_proc_gen.m"
          }
#line 226 "ml_foreign_proc_gen.m"
          {
#line 226 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[14])));
#line 226 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
#line 226 "ml_foreign_proc_gen.m"
          }
#line 214 "ml_foreign_proc_gen.m"
        }
#line 213 "ml_foreign_proc_gen.m"
        break;
#line 213 "ml_foreign_proc_gen.m"
    }
#line 2471 "ml_backend.ml_foreign_proc_gen.c"
    ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
#line 246 "ml_foreign_proc_gen.m"
    {
#line 246 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 246 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_89_89, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_22));
#line 246 "ml_foreign_proc_gen.m"
    }
#line 246 "ml_foreign_proc_gen.m"
    {
#line 246 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_88_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_88_88, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__JavaCode_21));
#line 246 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_88_88, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_89_89));
#line 246 "ml_foreign_proc_gen.m"
    }
#line 246 "ml_foreign_proc_gen.m"
    {
#line 246 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_88_88));
#line 246 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "ml_foreign_proc_gen.m"
    }
#line 247 "ml_foreign_proc_gen.m"
    {
#line 247 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_87_87));
#line 247 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 247 "ml_foreign_proc_gen.m"
    }
#line 245 "ml_foreign_proc_gen.m"
    {
#line 245 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_85_85, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_32));
#line 245 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_85_85, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_86_86));
#line 245 "ml_foreign_proc_gen.m"
    }
#line 244 "ml_foreign_proc_gen.m"
    {
#line 244 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_84_84, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededDecl_36));
#line 244 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_84_84, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_85_85));
#line 244 "ml_foreign_proc_gen.m"
    }
#line 243 "ml_foreign_proc_gen.m"
    {
#line 243 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 243 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_31));
#line 243 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_84_84));
#line 243 "ml_foreign_proc_gen.m"
    }
#line 242 "ml_foreign_proc_gen.m"
    {
#line 242 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_78_78, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16])));
#line 242 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_78_78, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_83_83));
#line 242 "ml_foreign_proc_gen.m"
    }
#line 241 "ml_foreign_proc_gen.m"
    {
#line 241 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_40 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114, ml_backend__ml_foreign_proc_gen__V_78_78);
    }
#line 248 "ml_foreign_proc_gen.m"
    {
#line 248 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 248 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 248 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
#line 248 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_40));
#line 248 "ml_foreign_proc_gen.m"
    }
#line 249 "ml_foreign_proc_gen.m"
    {
#line 249 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 249 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_92_92, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41));
#line 249 "ml_foreign_proc_gen.m"
    }
#line 250 "ml_foreign_proc_gen.m"
    {
#line 250 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_93_93 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_22);
    }
#line 249 "ml_foreign_proc_gen.m"
    {
#line 249 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_92_92));
#line 249 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_93_93));
#line 249 "ml_foreign_proc_gen.m"
    }
#line 253 "ml_foreign_proc_gen.m"
    {
#line 253 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_94_94, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignSucceeded_37));
#line 253 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[3])));
#line 253 "ml_foreign_proc_gen.m"
    }
#line 252 "ml_foreign_proc_gen.m"
    {
#line 252 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_43 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_114_114, ml_backend__ml_foreign_proc_gen__V_94_94);
    }
#line 256 "ml_foreign_proc_gen.m"
    {
#line 256 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 256 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 256 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
#line 256 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_43));
#line 256 "ml_foreign_proc_gen.m"
    }
#line 257 "ml_foreign_proc_gen.m"
    {
#line 257 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_101_101, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 257 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_101_101, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44));
#line 257 "ml_foreign_proc_gen.m"
    }
#line 258 "ml_foreign_proc_gen.m"
    {
#line 258 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_102_102 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_22);
    }
#line 257 "ml_foreign_proc_gen.m"
    {
#line 257 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 257 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_101_101));
#line 257 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_102_102));
#line 257 "ml_foreign_proc_gen.m"
    }
#line 261 "ml_foreign_proc_gen.m"
    {
#line 261 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_104_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_104_104, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42));
#line 261 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "ml_foreign_proc_gen.m"
    }
#line 264 "ml_foreign_proc_gen.m"
    {
#line 264 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_109_109, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45));
#line 264 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "ml_foreign_proc_gen.m"
    }
#line 265 "ml_foreign_proc_gen.m"
    {
#line 265 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_108_108, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_109_109));
#line 265 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "ml_foreign_proc_gen.m"
    }
#line 263 "ml_foreign_proc_gen.m"
    {
#line 263 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_107_107, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStatements_35));
#line 263 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_107_107, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_108_108));
#line 263 "ml_foreign_proc_gen.m"
    }
#line 262 "ml_foreign_proc_gen.m"
    {
#line 262 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 262 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_106_106, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_33));
#line 262 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_106_106, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_107_107));
#line 262 "ml_foreign_proc_gen.m"
    }
#line 261 "ml_foreign_proc_gen.m"
    {
#line 261 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 261 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_103_103, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_104_104));
#line 261 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_103_103, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_106_106));
#line 261 "ml_foreign_proc_gen.m"
    }
#line 260 "ml_foreign_proc_gen.m"
    {
#line 260 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_24 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__V_103_103);
    }
#line 183 "ml_foreign_proc_gen.m"
  }
#line 174 "ml_foreign_proc_gen.m"
}

#line 198 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__198__1_2_p_0(
#line 198 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 198 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_53)
#line 198 "ml_foreign_proc_gen.m"
{
#line 198 "ml_foreign_proc_gen.m"
  {
#line 198 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 198 "ml_foreign_proc_gen.m"
    {
#line 198 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__HeadVar__2_53)));
    }
#line 198 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 198 "ml_foreign_proc_gen.m"
  }
#line 198 "ml_foreign_proc_gen.m"
}

#line 268 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
#line 268 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 268 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 268 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3)
#line 268 "ml_foreign_proc_gen.m"
{
#line 268 "ml_foreign_proc_gen.m"
  {
#line 268 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 268 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__2_2;
#line 268 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

#line 268 "ml_foreign_proc_gen.m"
    {
#line 268 "ml_foreign_proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4, ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5);
    }
#line 268 "ml_foreign_proc_gen.m"
  }
#line 268 "ml_foreign_proc_gen.m"
}

#line 268 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
#line 268 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 268 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
#line 268 "ml_foreign_proc_gen.m"
{
#line 2780 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 2782 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__HeadVar__2_1 == ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 2785 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 2787 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 268 "ml_foreign_proc_gen.m"
}

#line 661 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
#line 661 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 661 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 661 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3)
#line 661 "ml_foreign_proc_gen.m"
{
#line 661 "ml_foreign_proc_gen.m"
  {
#line 661 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 661 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__2_2;
#line 661 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

#line 661 "ml_foreign_proc_gen.m"
    {
#line 661 "ml_foreign_proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4, ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5);
    }
#line 661 "ml_foreign_proc_gen.m"
  }
#line 661 "ml_foreign_proc_gen.m"
}

#line 661 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
#line 661 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 661 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
#line 661 "ml_foreign_proc_gen.m"
{
#line 2831 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 2833 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__HeadVar__2_1 == ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 2836 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 2838 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 661 "ml_foreign_proc_gen.m"
}

#line 994 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
#line 994 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37,
#line 994 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38)
#line 994 "ml_foreign_proc_gen.m"
{
#line 1001 "ml_foreign_proc_gen.m"
  {
#line 1001 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 1001 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarType_20;
#line 1001 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarLval_21;
#line 1001 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_22;
#line 1001 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_24;
#line 1001 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_25;
#line 1001 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__TypeString_26;
#line 1001 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_27;
#line 1001 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_39_39;
#line 1004 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStatements_23;
#line 1014 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Cast_28;

#line 1002 "ml_foreign_proc_gen.m"
    {
#line 1002 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarType_20);
    }
#line 1003 "ml_foreign_proc_gen.m"
    {
#line 1003 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarLval_21);
    }
#line 1005 "ml_foreign_proc_gen.m"
    {
#line 1005 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1005 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_12));
#line 1005 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1005 "ml_foreign_proc_gen.m"
    }
#line 1004 "ml_foreign_proc_gen.m"
    {
#line 1004 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_20, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__VarLval_21, ml_backend__ml_foreign_proc_gen__V_39_39, ml_backend__ml_foreign_proc_gen__Context_15, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_22, ml_backend__ml_foreign_proc_gen__ConvDecls_17, &ml_backend__ml_foreign_proc_gen___ConvInputStatements_23, ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38);
    }
#line 1010 "ml_foreign_proc_gen.m"
    {
#line 1010 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38, &ml_backend__ml_foreign_proc_gen__ModuleInfo_24);
    }
#line 1011 "ml_foreign_proc_gen.m"
    {
#line 1011 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ExportedType_25 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_24, ml_backend__ml_foreign_proc_gen__OrigType_13);
    }
#line 1012 "ml_foreign_proc_gen.m"
    {
#line 1012 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__TypeString_26 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ml_backend__ml_foreign_proc_gen__ExportedType_25);
    }
#line 1013 "ml_foreign_proc_gen.m"
    {
#line 1013 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__IsForeign_27 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_25);
    }
#line 1018 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__IsForeign_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1017 "ml_foreign_proc_gen.m"
      {
#line 1017 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__Cast_28 = (MR_Integer) 0;
#line 1017 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1017 "ml_foreign_proc_gen.m"
      }
#line 1018 "ml_foreign_proc_gen.m"
    else
#line 1019 "ml_foreign_proc_gen.m"
      {
#line 1019 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_27, (MR_Integer) 0)));

#line 1020 "ml_foreign_proc_gen.m"
        {
#line 1020 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ml_backend__ml_foreign_proc_gen__Assertions_29);
        }
#line 1019 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1019 "ml_foreign_proc_gen.m"
          {
#line 1021 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Cast_28 = (MR_Integer) 1;
#line 1021 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1019 "ml_foreign_proc_gen.m"
          }
#line 1019 "ml_foreign_proc_gen.m"
      }
#line 1014 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1026 "ml_foreign_proc_gen.m"
      {
#line 1026 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_30;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__LHS_Cast_31;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__RHS_Cast_32;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignFromArgName_35;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignTo_36;
#line 1026 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
#line 1026 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 1026 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_60_60;
#line 1026 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
#line 1026 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_79_79;
#line 1026 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_85_85;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_86_86;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_87_87;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_94_94;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_97_97;
#line 1026 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_104_104;

#line 1026 "ml_foreign_proc_gen.m"
        {
#line 1026 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38, &ml_backend__ml_foreign_proc_gen__HighLevelData_30);
        }
#line 1037 "ml_foreign_proc_gen.m"
#line 1037 "ml_foreign_proc_gen.m"
        switch (ml_backend__ml_foreign_proc_gen__HighLevelData_30) {
#line 1037 "ml_foreign_proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1037 "ml_foreign_proc_gen.m"
          case (MR_Integer) 0:
#line 1038 "ml_foreign_proc_gen.m"
            {
#line 1043 "ml_foreign_proc_gen.m"
              {
#line 1043 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_33_33;
#line 1043 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;

#line 1043 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_13)) == (MR_mktag((MR_Integer) 0)));
#line 1043 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1043 "ml_foreign_proc_gen.m"
                  {
#line 1043 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 0)));
#line 1043 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 1)));
#line 1043 "ml_foreign_proc_gen.m"
                  }
#line 1043 "ml_foreign_proc_gen.m"
              }
#line 1044 "ml_foreign_proc_gen.m"
              if (!(ml_backend__ml_foreign_proc_gen__succeeded))
#line 1044 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Cast_28 == (MR_Integer) 1);
#line 1042 "ml_foreign_proc_gen.m"
              if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1047 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "(MR_Box) ";
#line 1042 "ml_foreign_proc_gen.m"
              else
#line 1049 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "";
#line 1051 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__LHS_Cast_31 = (MR_String) "";
#line 1038 "ml_foreign_proc_gen.m"
            }
#line 1037 "ml_foreign_proc_gen.m"
            break;
#line 1037 "ml_foreign_proc_gen.m"
          case (MR_Integer) 1:
#line 1028 "ml_foreign_proc_gen.m"
            {
#line 1028 "ml_foreign_proc_gen.m"
              MR_String ml_backend__ml_foreign_proc_gen__V_46_46;

#line 1035 "ml_foreign_proc_gen.m"
              {
#line 1035 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__V_46_46 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_26, (MR_String) " *) &");
              }
#line 1035 "ml_foreign_proc_gen.m"
              {
#line 1035 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__LHS_Cast_31 = mercury__string__f_43_43_2_f_0((MR_String) "* (", ml_backend__ml_foreign_proc_gen__V_46_46);
              }
#line 1036 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "";
#line 1028 "ml_foreign_proc_gen.m"
            }
#line 1037 "ml_foreign_proc_gen.m"
            break;
#line 1037 "ml_foreign_proc_gen.m"
        }
#line 3089 "ml_backend.ml_foreign_proc_gen.c"
        ml_backend__ml_foreign_proc_gen__V_85_85 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[11];
#line 1053 "ml_foreign_proc_gen.m"
        {
#line 1053 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_85_85, ml_backend__ml_foreign_proc_gen__ArgName_12, &ml_backend__ml_foreign_proc_gen__V_79_79);
        }
#line 1053 "ml_foreign_proc_gen.m"
        {
#line 1053 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_86_86 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_79_79, (MR_String) ";\n");
        }
#line 1053 "ml_foreign_proc_gen.m"
        {
#line 1053 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_85_85, ml_backend__ml_foreign_proc_gen__RHS_Cast_32, &ml_backend__ml_foreign_proc_gen__V_87_87);
        }
#line 1053 "ml_foreign_proc_gen.m"
        {
#line 1053 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_94_94 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_87_87, ml_backend__ml_foreign_proc_gen__V_86_86);
        }
#line 1053 "ml_foreign_proc_gen.m"
        {
#line 1053 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignFromArgName_35 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__V_94_94);
        }
#line 1055 "ml_foreign_proc_gen.m"
        {
#line 1055 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_85_85, ml_backend__ml_foreign_proc_gen__LHS_Cast_31, &ml_backend__ml_foreign_proc_gen__V_97_97);
        }
#line 1055 "ml_foreign_proc_gen.m"
        {
#line 1055 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_104_104 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_97_97, (MR_String) " ");
        }
#line 1055 "ml_foreign_proc_gen.m"
        {
#line 1055 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignTo_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_104_104);
        }
#line 1057 "ml_foreign_proc_gen.m"
        {
#line 1057 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignTo_36));
#line 1057 "ml_foreign_proc_gen.m"
        }
#line 1058 "ml_foreign_proc_gen.m"
        {
#line 1058 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1058 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_60_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_22));
#line 1058 "ml_foreign_proc_gen.m"
        }
#line 1059 "ml_foreign_proc_gen.m"
        {
#line 1059 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_62_62, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignFromArgName_35));
#line 1059 "ml_foreign_proc_gen.m"
        }
#line 1060 "ml_foreign_proc_gen.m"
        {
#line 1060 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_61_61, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_62_62));
#line 1060 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "ml_foreign_proc_gen.m"
        }
#line 1058 "ml_foreign_proc_gen.m"
        {
#line 1058 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_60_60));
#line 1058 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_61_61));
#line 1058 "ml_foreign_proc_gen.m"
        }
#line 1057 "ml_foreign_proc_gen.m"
        {
#line 1057 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 1057 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
#line 1057 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
#line 1057 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 1057 "ml_foreign_proc_gen.m"
        }
#line 1026 "ml_foreign_proc_gen.m"
      }
#line 1014 "ml_foreign_proc_gen.m"
    else
#line 1063 "ml_foreign_proc_gen.m"
      {
#line 1063 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_64_64;
#line 1063 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_65_65;
#line 1063 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_67_67;
#line 1063 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_68_68;
#line 1063 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_70_70;
#line 1063 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;
#line 1063 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;

#line 1065 "ml_foreign_proc_gen.m"
        {
#line 1065 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_70_70 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_12, (MR_String) ", ");
        }
#line 1065 "ml_foreign_proc_gen.m"
        {
#line 1065 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__V_70_70);
        }
#line 1065 "ml_foreign_proc_gen.m"
        {
#line 1065 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_67_67 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_26, ml_backend__ml_foreign_proc_gen__V_68_68);
        }
#line 1065 "ml_foreign_proc_gen.m"
        {
#line 1065 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_65_65 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__V_67_67);
        }
#line 1064 "ml_foreign_proc_gen.m"
        {
#line 1064 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_65_65));
#line 1064 "ml_foreign_proc_gen.m"
        }
#line 1066 "ml_foreign_proc_gen.m"
        {
#line 1066 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1066 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_73_73, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_22));
#line 1066 "ml_foreign_proc_gen.m"
        }
#line 1066 "ml_foreign_proc_gen.m"
        {
#line 1066 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1066 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
#line 1066 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
#line 1066 "ml_foreign_proc_gen.m"
        }
#line 1065 "ml_foreign_proc_gen.m"
        {
#line 1065 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 1065 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
#line 1065 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_64_64));
#line 1065 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
#line 1065 "ml_foreign_proc_gen.m"
        }
#line 1063 "ml_foreign_proc_gen.m"
      }
#line 1001 "ml_foreign_proc_gen.m"
  }
#line 994 "ml_foreign_proc_gen.m"
}

#line 950 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
#line 950 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_2,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6,
#line 950 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7)
#line 950 "ml_foreign_proc_gen.m"
{
#line 955 "ml_foreign_proc_gen.m"
  {
#line 955 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 955 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 955 "ml_foreign_proc_gen.m"
      {
#line 955 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 955 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 955 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 955 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
#line 955 "ml_foreign_proc_gen.m"
      }
#line 955 "ml_foreign_proc_gen.m"
    else
#line 957 "ml_foreign_proc_gen.m"
      {
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ForeignArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Components1_19;
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_20;
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements1_21;
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Components2_22;
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_23;
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements2_24;
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27;
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 0)));
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 1)));
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 2)));
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 3)));
#line 957 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_44;
#line 978 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_45;
#line 979 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_46;
#line 979 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_47_47;
#line 979 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_48_48;
#line 979 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 979 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
#line 727 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_54_54;
#line 728 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_53_53;

#line 977 "ml_foreign_proc_gen.m"
        {
#line 977 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_44);
        }
#line 979 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41)) == (MR_mktag((MR_Integer) 1)));
#line 979 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 979 "ml_foreign_proc_gen.m"
          {
#line 979 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41, (MR_Integer) 0)));
#line 979 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_47_47, (MR_Integer) 0)));
#line 979 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_47_47, (MR_Integer) 1)));
#line 728 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_54_54 = (MR_Char) 95;
#line 728 "ml_foreign_proc_gen.m"
            {
#line 728 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__V_54_54, &ml_backend__ml_foreign_proc_gen__V_53_53);
            }
#line 980 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 979 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 979 "ml_foreign_proc_gen.m"
              {
#line 981 "ml_foreign_proc_gen.m"
                {
#line 981 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_48_48 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__OrigType_42);
                }
#line 981 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_48_48 == (MR_Integer) 1);
#line 979 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 979 "ml_foreign_proc_gen.m"
                  {
#line 982 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Integer) 1;
#line 982 "ml_foreign_proc_gen.m"
                    {
#line 982 "ml_foreign_proc_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__Mode_46, ml_backend__ml_foreign_proc_gen__OrigType_42, &ml_backend__ml_foreign_proc_gen__V_51_51);
                    }
#line 982 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_49_49 == ml_backend__ml_foreign_proc_gen__V_51_51);
#line 979 "ml_foreign_proc_gen.m"
                  }
#line 979 "ml_foreign_proc_gen.m"
              }
#line 979 "ml_foreign_proc_gen.m"
          }
#line 978 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 984 "ml_foreign_proc_gen.m"
          {
#line 984 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(ml_backend__ml_foreign_proc_gen__Var_40, ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__OrigType_42, ml_backend__ml_foreign_proc_gen__BoxPolicy_43, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components1_19, &ml_backend__ml_foreign_proc_gen__ConvDecls1_20, &ml_backend__ml_foreign_proc_gen__ConvStatements1_21, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27);
          }
#line 978 "ml_foreign_proc_gen.m"
        else
#line 989 "ml_foreign_proc_gen.m"
          {
#line 989 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Components1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 990 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvDecls1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 991 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvStatements1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 989 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
#line 989 "ml_foreign_proc_gen.m"
          }
#line 960 "ml_foreign_proc_gen.m"
        {
#line 960 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__ForeignArgs_13, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components2_22, &ml_backend__ml_foreign_proc_gen__ConvDecls2_23, &ml_backend__ml_foreign_proc_gen__ConvStatements2_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);
        }
#line 962 "ml_foreign_proc_gen.m"
        {
#line 962 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Components1_19, ml_backend__ml_foreign_proc_gen__Components2_22);
        }
#line 963 "ml_foreign_proc_gen.m"
        {
#line 963 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_20, ml_backend__ml_foreign_proc_gen__ConvDecls2_23);
        }
#line 964 "ml_foreign_proc_gen.m"
        {
#line 964 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__ConvStatements1_21, ml_backend__ml_foreign_proc_gen__ConvStatements2_24);
        }
#line 957 "ml_foreign_proc_gen.m"
      }
#line 955 "ml_foreign_proc_gen.m"
  }
#line 950 "ml_foreign_proc_gen.m"
}

#line 879 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
#line 879 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
#line 879 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8)
#line 879 "ml_foreign_proc_gen.m"
{
#line 884 "ml_foreign_proc_gen.m"
  {
#line 884 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 884 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 884 "ml_foreign_proc_gen.m"
      {
#line 884 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 884 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 884 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 884 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
#line 884 "ml_foreign_proc_gen.m"
      }
#line 884 "ml_foreign_proc_gen.m"
    else
#line 886 "ml_foreign_proc_gen.m"
      {
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__JavaArg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__JavaArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Statements1_22;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_23;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements1_24;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Statements2_25;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_26;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements2_27;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 0)));
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 1)));
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 2)));
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 3)));
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_47;
#line 908 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_48;
#line 909 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_49;
#line 909 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
#line 909 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
#line 909 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_63_63;
#line 909 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_75_75;
#line 727 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_80_80;
#line 728 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_79_79;

#line 907 "ml_foreign_proc_gen.m"
        {
#line 907 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__ModuleInfo_47);
        }
#line 909 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
#line 909 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 909 "ml_foreign_proc_gen.m"
          {
#line 909 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44, (MR_Integer) 0)));
#line 909 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_61_61, (MR_Integer) 0)));
#line 909 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Mode_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_61_61, (MR_Integer) 1)));
#line 728 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_80_80 = (MR_Char) 95;
#line 728 "ml_foreign_proc_gen.m"
            {
#line 728 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_48, ml_backend__ml_foreign_proc_gen__V_80_80, &ml_backend__ml_foreign_proc_gen__V_79_79);
            }
#line 910 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 909 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 909 "ml_foreign_proc_gen.m"
              {
#line 911 "ml_foreign_proc_gen.m"
                {
#line 911 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_62_62 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
                }
#line 911 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_62_62 == (MR_Integer) 1);
#line 909 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 909 "ml_foreign_proc_gen.m"
                  {
#line 912 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_63_63 = (MR_Integer) 1;
#line 912 "ml_foreign_proc_gen.m"
                    {
#line 912 "ml_foreign_proc_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__Mode_49, ml_backend__ml_foreign_proc_gen__OrigType_45, &ml_backend__ml_foreign_proc_gen__V_75_75);
                    }
#line 912 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_63_63 == ml_backend__ml_foreign_proc_gen__V_75_75);
#line 909 "ml_foreign_proc_gen.m"
                  }
#line 909 "ml_foreign_proc_gen.m"
              }
#line 909 "ml_foreign_proc_gen.m"
          }
#line 908 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 916 "ml_foreign_proc_gen.m"
          {
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarType_50;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarLval_51;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_52;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDSType_54;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ModuleName_55;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_56;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__NonMangledVarName_57;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__QualLocalVarName_58;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__LocalVarLval_59;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__Rval_60;
#line 916 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;
#line 918 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStatements_53;

#line 916 "ml_foreign_proc_gen.m"
            {
#line 916 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarType_50);
            }
#line 917 "ml_foreign_proc_gen.m"
            {
#line 917 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarLval_51);
            }
#line 919 "ml_foreign_proc_gen.m"
            {
#line 919 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__NonMangledVarName_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 919 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_48));
#line 919 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "ml_foreign_proc_gen.m"
            }
#line 918 "ml_foreign_proc_gen.m"
            {
#line 918 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_50, ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__BoxPolicy_46, ml_backend__ml_foreign_proc_gen__VarLval_51, ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, ml_backend__ml_foreign_proc_gen__Context_3, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_52, &ml_backend__ml_foreign_proc_gen__ConvDecls1_23, &ml_backend__ml_foreign_proc_gen___ConvInputStatements_53, &ml_backend__ml_foreign_proc_gen__ConvStatements1_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30);
            }
#line 922 "ml_foreign_proc_gen.m"
            {
#line 922 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__MLDSType_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
            }
#line 923 "ml_foreign_proc_gen.m"
            {
#line 923 "ml_foreign_proc_gen.m"
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, &ml_backend__ml_foreign_proc_gen__ModuleName_55);
            }
#line 924 "ml_foreign_proc_gen.m"
            {
#line 924 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__MLDSModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_foreign_proc_gen__ModuleName_55);
            }
#line 926 "ml_foreign_proc_gen.m"
            {
#line 926 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__QualLocalVarName_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 926 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_56));
#line 926 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 926 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__NonMangledVarName_57));
#line 926 "ml_foreign_proc_gen.m"
            }
#line 928 "ml_foreign_proc_gen.m"
            {
#line 928 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__LocalVarLval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 928 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualLocalVarName_58));
#line 928 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_54));
#line 928 "ml_foreign_proc_gen.m"
            }
#line 932 "ml_foreign_proc_gen.m"
#line 932 "ml_foreign_proc_gen.m"
            switch (ml_backend__ml_foreign_proc_gen__MutableSpecial_1) {
#line 932 "ml_foreign_proc_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 932 "ml_foreign_proc_gen.m"
              case (MR_Integer) 0:
#line 935 "ml_foreign_proc_gen.m"
                {
#line 935 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;

#line 935 "ml_foreign_proc_gen.m"
                  {
#line 935 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_76_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
#line 935 "ml_foreign_proc_gen.m"
                  {
#line 935 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__V_76_76);
                  }
#line 935 "ml_foreign_proc_gen.m"
                  if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 936 "ml_foreign_proc_gen.m"
                    {
#line 936 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 936 "ml_foreign_proc_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 936 "ml_foreign_proc_gen.m"
                    }
#line 935 "ml_foreign_proc_gen.m"
                  else
#line 938 "ml_foreign_proc_gen.m"
                    {
#line 938 "ml_foreign_proc_gen.m"
                      MR_Word ml_backend__ml_foreign_proc_gen__V_71_71;
#line 938 "ml_foreign_proc_gen.m"
                      MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;

#line 938 "ml_foreign_proc_gen.m"
                      {
#line 938 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 938 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_54));
#line 938 "ml_foreign_proc_gen.m"
                      }
#line 938 "ml_foreign_proc_gen.m"
                      {
#line 938 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 938 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 938 "ml_foreign_proc_gen.m"
                      }
#line 938 "ml_foreign_proc_gen.m"
                      {
#line 938 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 938 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 938 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_71_71));
#line 938 "ml_foreign_proc_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
#line 938 "ml_foreign_proc_gen.m"
                      }
#line 938 "ml_foreign_proc_gen.m"
                    }
#line 935 "ml_foreign_proc_gen.m"
                }
#line 932 "ml_foreign_proc_gen.m"
                break;
#line 932 "ml_foreign_proc_gen.m"
              case (MR_Integer) 1:
#line 931 "ml_foreign_proc_gen.m"
                {
#line 931 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 931 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 931 "ml_foreign_proc_gen.m"
                }
#line 932 "ml_foreign_proc_gen.m"
                break;
#line 932 "ml_foreign_proc_gen.m"
            }
#line 941 "ml_foreign_proc_gen.m"
            {
#line 941 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_73_73 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_foreign_proc_gen__ArgLval_52, ml_backend__ml_foreign_proc_gen__Rval_60, ml_backend__ml_foreign_proc_gen__Context_3);
            }
#line 941 "ml_foreign_proc_gen.m"
            {
#line 941 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Statements1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 941 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Statements1_22, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
#line 941 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Statements1_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 941 "ml_foreign_proc_gen.m"
            }
#line 916 "ml_foreign_proc_gen.m"
          }
#line 908 "ml_foreign_proc_gen.m"
        else
#line 945 "ml_foreign_proc_gen.m"
          {
#line 945 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Statements1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 946 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvDecls1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvStatements1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 945 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
#line 945 "ml_foreign_proc_gen.m"
          }
#line 889 "ml_foreign_proc_gen.m"
        {
#line 889 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_1, ml_backend__ml_foreign_proc_gen__JavaArgs_16, ml_backend__ml_foreign_proc_gen__Context_3, &ml_backend__ml_foreign_proc_gen__Statements2_25, &ml_backend__ml_foreign_proc_gen__ConvDecls2_26, &ml_backend__ml_foreign_proc_gen__ConvStatements2_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);
        }
#line 3835 "ml_backend.ml_foreign_proc_gen.c"
        ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 891 "ml_foreign_proc_gen.m"
        {
#line 891 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__Statements1_22, ml_backend__ml_foreign_proc_gen__Statements2_25);
        }
#line 892 "ml_foreign_proc_gen.m"
        {
#line 892 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_23, ml_backend__ml_foreign_proc_gen__ConvDecls2_26);
        }
#line 893 "ml_foreign_proc_gen.m"
        {
#line 893 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__ConvStatements1_24, ml_backend__ml_foreign_proc_gen__ConvStatements2_27);
        }
#line 886 "ml_foreign_proc_gen.m"
      }
#line 884 "ml_foreign_proc_gen.m"
  }
#line 879 "ml_foreign_proc_gen.m"
}

#line 827 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
#line 827 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
#line 827 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
#line 827 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
#line 827 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
#line 827 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
#line 827 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12)
#line 827 "ml_foreign_proc_gen.m"
{
#line 833 "ml_foreign_proc_gen.m"
  {
#line 833 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 833 "ml_foreign_proc_gen.m"
#line 833 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__Lang_7) {
#line 833 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 833 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 833 "ml_foreign_proc_gen.m"
#line 833 "ml_foreign_proc_gen.m"
        switch (ml_backend__ml_foreign_proc_gen__HighLevelData_8) {
#line 833 "ml_foreign_proc_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 833 "ml_foreign_proc_gen.m"
          case (MR_Integer) 0:
#line 850 "ml_foreign_proc_gen.m"
            {
#line 850 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__V_15_15;
#line 850 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__V_16_16;

#line 850 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_9)) == (MR_mktag((MR_Integer) 0)));
#line 850 "ml_foreign_proc_gen.m"
              if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 850 "ml_foreign_proc_gen.m"
                {
#line 850 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 0)));
#line 850 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 1)));
#line 854 "ml_foreign_proc_gen.m"
                  *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "(MR_Word)";
#line 854 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 850 "ml_foreign_proc_gen.m"
                }
#line 850 "ml_foreign_proc_gen.m"
              else
#line 856 "ml_foreign_proc_gen.m"
                {
#line 856 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_28;

#line 856 "ml_foreign_proc_gen.m"
                  {
#line 856 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__IsForeign_28 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
                  }
#line 861 "ml_foreign_proc_gen.m"
                  if ((ml_backend__ml_foreign_proc_gen__IsForeign_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 863 "ml_foreign_proc_gen.m"
                    {
#line 863 "ml_foreign_proc_gen.m"
                      *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 863 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 863 "ml_foreign_proc_gen.m"
                    }
#line 861 "ml_foreign_proc_gen.m"
                  else
#line 858 "ml_foreign_proc_gen.m"
                    {
#line 858 "ml_foreign_proc_gen.m"
                      MR_String ml_backend__ml_foreign_proc_gen__V_20_20;
#line 858 "ml_foreign_proc_gen.m"
                      MR_String ml_backend__ml_foreign_proc_gen__V_21_21;
#line 858 "ml_foreign_proc_gen.m"
                      MR_String ml_backend__ml_foreign_proc_gen__V_22_22;
#line 858 "ml_foreign_proc_gen.m"
                      MR_Word ml_backend__ml_foreign_proc_gen__Assertions_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_28, (MR_Integer) 0)));

#line 859 "ml_foreign_proc_gen.m"
                      {
#line 859 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ml_backend__ml_foreign_proc_gen__Assertions_26);
                      }
#line 858 "ml_foreign_proc_gen.m"
                      if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 858 "ml_foreign_proc_gen.m"
                        {
#line 860 "ml_foreign_proc_gen.m"
                          ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_String) "(";
#line 860 "ml_foreign_proc_gen.m"
                          ml_backend__ml_foreign_proc_gen__V_22_22 = (MR_String) ")";
#line 860 "ml_foreign_proc_gen.m"
                          {
#line 860 "ml_foreign_proc_gen.m"
                            ml_backend__ml_foreign_proc_gen__V_21_21 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__V_22_22);
                          }
#line 860 "ml_foreign_proc_gen.m"
                          {
#line 860 "ml_foreign_proc_gen.m"
                            *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_20_20, ml_backend__ml_foreign_proc_gen__V_21_21);
                          }
#line 860 "ml_foreign_proc_gen.m"
                          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 858 "ml_foreign_proc_gen.m"
                        }
#line 858 "ml_foreign_proc_gen.m"
                    }
#line 856 "ml_foreign_proc_gen.m"
                }
#line 850 "ml_foreign_proc_gen.m"
            }
#line 833 "ml_foreign_proc_gen.m"
            break;
#line 833 "ml_foreign_proc_gen.m"
          case (MR_Integer) 1:
#line 833 "ml_foreign_proc_gen.m"
            {
#line 833 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_13;
#line 833 "ml_foreign_proc_gen.m"
              MR_String ml_backend__ml_foreign_proc_gen__V_23_23;
#line 833 "ml_foreign_proc_gen.m"
              MR_String ml_backend__ml_foreign_proc_gen__V_24_24;
#line 833 "ml_foreign_proc_gen.m"
              MR_String ml_backend__ml_foreign_proc_gen__V_25_25;

#line 835 "ml_foreign_proc_gen.m"
              {
#line 835 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__IsForeign_13 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
              }
#line 839 "ml_foreign_proc_gen.m"
              if ((ml_backend__ml_foreign_proc_gen__IsForeign_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 839 "ml_foreign_proc_gen.m"
              else
#line 837 "ml_foreign_proc_gen.m"
                {
#line 837 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__Assertions_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_13, (MR_Integer) 0)));

#line 838 "ml_foreign_proc_gen.m"
                  {
#line 838 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_data__asserted_can_pass_as_mercury_type_1_p_0(ml_backend__ml_foreign_proc_gen__Assertions_14);
                  }
#line 837 "ml_foreign_proc_gen.m"
                }
#line 833 "ml_foreign_proc_gen.m"
              if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 833 "ml_foreign_proc_gen.m"
                {
#line 846 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_23_23 = (MR_String) "(";
#line 846 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_25_25 = (MR_String) ")";
#line 846 "ml_foreign_proc_gen.m"
                  {
#line 846 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_24_24 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__V_25_25);
                  }
#line 846 "ml_foreign_proc_gen.m"
                  {
#line 846 "ml_foreign_proc_gen.m"
                    *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_23_23, ml_backend__ml_foreign_proc_gen__V_24_24);
                  }
#line 846 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 833 "ml_foreign_proc_gen.m"
                }
#line 833 "ml_foreign_proc_gen.m"
            }
#line 833 "ml_foreign_proc_gen.m"
            break;
#line 833 "ml_foreign_proc_gen.m"
        }
#line 833 "ml_foreign_proc_gen.m"
        break;
#line 833 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 873 "ml_foreign_proc_gen.m"
        {
#line 873 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 873 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 873 "ml_foreign_proc_gen.m"
        }
#line 833 "ml_foreign_proc_gen.m"
        break;
#line 833 "ml_foreign_proc_gen.m"
      case (MR_Integer) 3:
#line 875 "ml_foreign_proc_gen.m"
        {
#line 876 "ml_foreign_proc_gen.m"
          {
#line 876 "ml_foreign_proc_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.input_arg_assignable_with_cast\'/6", (MR_String) "unexpected language");
          }
#line 875 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 875 "ml_foreign_proc_gen.m"
        }
#line 833 "ml_foreign_proc_gen.m"
        break;
#line 833 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 870 "ml_foreign_proc_gen.m"
        {
#line 870 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 870 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 870 "ml_foreign_proc_gen.m"
        }
#line 833 "ml_foreign_proc_gen.m"
        break;
#line 833 "ml_foreign_proc_gen.m"
    }
#line 833 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 833 "ml_foreign_proc_gen.m"
  }
#line 827 "ml_foreign_proc_gen.m"
}

#line 766 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_9,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_10,
#line 766 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_11,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_12,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_13,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_14,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27,
#line 766 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28)
#line 766 "ml_foreign_proc_gen.m"
{
#line 771 "ml_foreign_proc_gen.m"
  {
#line 771 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarType_16;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarLval_17;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_18;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__IsDummy_19;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgRval_20;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_21;
#line 771 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__TypeString_22;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Globals_23;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_24;
#line 795 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__Cast_25;

#line 772 "ml_foreign_proc_gen.m"
    {
#line 772 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, ml_backend__ml_foreign_proc_gen__Var_10, &ml_backend__ml_foreign_proc_gen__VarType_16);
    }
#line 773 "ml_foreign_proc_gen.m"
    {
#line 773 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, ml_backend__ml_foreign_proc_gen__Var_10, &ml_backend__ml_foreign_proc_gen__VarLval_17);
    }
#line 774 "ml_foreign_proc_gen.m"
    {
#line 774 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, &ml_backend__ml_foreign_proc_gen__ModuleInfo_18);
    }
#line 775 "ml_foreign_proc_gen.m"
    {
#line 775 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__IsDummy_19 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16);
    }
#line 783 "ml_foreign_proc_gen.m"
#line 783 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__IsDummy_19) {
#line 783 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 783 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 819 "ml_foreign_proc_gen.m"
        {
#line 819 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_82;

#line 820 "ml_foreign_proc_gen.m"
          {
#line 820 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__MLDS_Type_82 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16);
          }
#line 821 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Lang_9 == (MR_Integer) 2);
#line 821 "ml_foreign_proc_gen.m"
          if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 822 "ml_foreign_proc_gen.m"
            {
#line 822 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;

#line 822 "ml_foreign_proc_gen.m"
              {
#line 822 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 822 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_82));
#line 822 "ml_foreign_proc_gen.m"
              }
#line 822 "ml_foreign_proc_gen.m"
              {
#line 822 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__ArgRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 822 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_20, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_83_83));
#line 822 "ml_foreign_proc_gen.m"
              }
#line 822 "ml_foreign_proc_gen.m"
            }
#line 821 "ml_foreign_proc_gen.m"
          else
#line 824 "ml_foreign_proc_gen.m"
            {
#line 824 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__ArgRval_20 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9]);
#line 824 "ml_foreign_proc_gen.m"
            }
#line 819 "ml_foreign_proc_gen.m"
        }
#line 783 "ml_foreign_proc_gen.m"
        break;
#line 783 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 784 "ml_foreign_proc_gen.m"
        {
#line 784 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_29_29;

#line 786 "ml_foreign_proc_gen.m"
          {
#line 786 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 786 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_29_29, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_17));
#line 786 "ml_foreign_proc_gen.m"
          }
#line 785 "ml_foreign_proc_gen.m"
          {
#line 785 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16, ml_backend__ml_foreign_proc_gen__OrigType_12, ml_backend__ml_foreign_proc_gen__BoxPolicy_13, ml_backend__ml_foreign_proc_gen__V_29_29, &ml_backend__ml_foreign_proc_gen__ArgRval_20);
          }
#line 784 "ml_foreign_proc_gen.m"
        }
#line 783 "ml_foreign_proc_gen.m"
        break;
#line 783 "ml_foreign_proc_gen.m"
    }
#line 791 "ml_foreign_proc_gen.m"
    {
#line 791 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ExportedType_21 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__OrigType_12);
    }
#line 792 "ml_foreign_proc_gen.m"
    {
#line 792 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__TypeString_22 = backend_libs__foreign__exported_type_to_string_2_f_0(ml_backend__ml_foreign_proc_gen__Lang_9, ml_backend__ml_foreign_proc_gen__ExportedType_21);
    }
#line 793 "ml_foreign_proc_gen.m"
    {
#line 793 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, &ml_backend__ml_foreign_proc_gen__Globals_23);
    }
#line 794 "ml_foreign_proc_gen.m"
    {
#line 794 "ml_foreign_proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_23, (MR_Integer) 253, &ml_backend__ml_foreign_proc_gen__HighLevelData_24);
    }
#line 796 "ml_foreign_proc_gen.m"
    {
#line 796 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(ml_backend__ml_foreign_proc_gen__Lang_9, ml_backend__ml_foreign_proc_gen__HighLevelData_24, ml_backend__ml_foreign_proc_gen__OrigType_12, ml_backend__ml_foreign_proc_gen__ExportedType_21, ml_backend__ml_foreign_proc_gen__TypeString_22, &ml_backend__ml_foreign_proc_gen__Cast_25);
    }
#line 795 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 800 "ml_foreign_proc_gen.m"
      {
#line 800 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignToArgName_26;
#line 800 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_37_37;
#line 800 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_38_38;
#line 800 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_39_39;
#line 800 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_59_59;
#line 800 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_65_65 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[11];
#line 800 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_66_66;
#line 800 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_68_68;
#line 800 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_69_69;
#line 800 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_76_76;

#line 800 "ml_foreign_proc_gen.m"
        {
#line 800 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_65_65, ml_backend__ml_foreign_proc_gen__Cast_25, &ml_backend__ml_foreign_proc_gen__V_59_59);
        }
#line 800 "ml_foreign_proc_gen.m"
        {
#line 800 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_66_66 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_59_59, (MR_String) " ");
        }
#line 800 "ml_foreign_proc_gen.m"
        {
#line 800 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__V_66_66);
        }
#line 800 "ml_foreign_proc_gen.m"
        {
#line 800 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_65_65, ml_backend__ml_foreign_proc_gen__ArgName_11, &ml_backend__ml_foreign_proc_gen__V_69_69);
        }
#line 800 "ml_foreign_proc_gen.m"
        {
#line 800 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_76_76 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_69_69, ml_backend__ml_foreign_proc_gen__V_68_68);
        }
#line 800 "ml_foreign_proc_gen.m"
        {
#line 800 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignToArgName_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_76_76);
        }
#line 802 "ml_foreign_proc_gen.m"
        {
#line 802 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_37_37, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignToArgName_26));
#line 802 "ml_foreign_proc_gen.m"
        }
#line 803 "ml_foreign_proc_gen.m"
        {
#line 803 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 803 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_20));
#line 803 "ml_foreign_proc_gen.m"
        }
#line 803 "ml_foreign_proc_gen.m"
        {
#line 803 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 803 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_38_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_39_39));
#line 803 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12])));
#line 803 "ml_foreign_proc_gen.m"
        }
#line 802 "ml_foreign_proc_gen.m"
        {
#line 802 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 802 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignInput_14 = base;
#line 802 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_37_37));
#line 802 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_38_38));
#line 802 "ml_foreign_proc_gen.m"
        }
#line 800 "ml_foreign_proc_gen.m"
      }
#line 795 "ml_foreign_proc_gen.m"
    else
#line 809 "ml_foreign_proc_gen.m"
      {
#line 809 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_44_44;
#line 809 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_45_45;
#line 809 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_47_47;
#line 809 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 809 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_50_50;
#line 809 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
#line 809 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_52_52;
#line 809 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_53_53;
#line 809 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_55_55;

#line 811 "ml_foreign_proc_gen.m"
        {
#line 811 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_47_47 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_22, (MR_String) ", ");
        }
#line 811 "ml_foreign_proc_gen.m"
        {
#line 811 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__V_47_47);
        }
#line 810 "ml_foreign_proc_gen.m"
        {
#line 810 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 810 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_44_44, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_45_45));
#line 810 "ml_foreign_proc_gen.m"
        }
#line 812 "ml_foreign_proc_gen.m"
        {
#line 812 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_50_50 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 812 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_50_50, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_20));
#line 812 "ml_foreign_proc_gen.m"
        }
#line 813 "ml_foreign_proc_gen.m"
        {
#line 813 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_55_55 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_11, (MR_String) ");\n");
        }
#line 813 "ml_foreign_proc_gen.m"
        {
#line 813 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__V_55_55);
        }
#line 813 "ml_foreign_proc_gen.m"
        {
#line 813 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 813 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_52_52, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_53_53));
#line 813 "ml_foreign_proc_gen.m"
        }
#line 814 "ml_foreign_proc_gen.m"
        {
#line 814 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_52_52));
#line 814 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 814 "ml_foreign_proc_gen.m"
        }
#line 812 "ml_foreign_proc_gen.m"
        {
#line 812 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_49_49, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_50_50));
#line 812 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_51_51));
#line 812 "ml_foreign_proc_gen.m"
        }
#line 811 "ml_foreign_proc_gen.m"
        {
#line 811 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 811 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignInput_14 = base;
#line 811 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_44_44));
#line 811 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_49_49));
#line 811 "ml_foreign_proc_gen.m"
        }
#line 809 "ml_foreign_proc_gen.m"
      }
#line 771 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27;
#line 771 "ml_foreign_proc_gen.m"
  }
#line 766 "ml_foreign_proc_gen.m"
}

#line 746 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
#line 746 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 746 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
#line 746 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
#line 746 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 746 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18)
#line 746 "ml_foreign_proc_gen.m"
{
#line 750 "ml_foreign_proc_gen.m"
  {
#line 750 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 750 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_10;
#line 752 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Var_11;
#line 752 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13;
#line 752 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14;
#line 752 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ArgName_15;
#line 753 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12;
#line 753 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Mode_16;
#line 753 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_19_19;
#line 753 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
#line 753 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_22_22;
#line 727 "ml_foreign_proc_gen.m"
    MR_Char ml_backend__ml_foreign_proc_gen__V_25_25;
#line 728 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__V_24_24;

#line 751 "ml_foreign_proc_gen.m"
    {
#line 751 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__ModuleInfo_10);
    }
#line 753 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 0)));
#line 753 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 1)));
#line 753 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 2)));
#line 753 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__BoxPolicy_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 3)));
#line 754 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12)) == (MR_mktag((MR_Integer) 1)));
#line 754 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 754 "ml_foreign_proc_gen.m"
      {
#line 754 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12, (MR_Integer) 0)));
#line 754 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ArgName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_19_19, (MR_Integer) 0)));
#line 754 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_19_19, (MR_Integer) 1)));
#line 728 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_25_25 = (MR_Char) 95;
#line 728 "ml_foreign_proc_gen.m"
        {
#line 728 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__V_25_25, &ml_backend__ml_foreign_proc_gen__V_24_24);
        }
#line 755 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 753 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 753 "ml_foreign_proc_gen.m"
          {
#line 756 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Integer) 0;
#line 756 "ml_foreign_proc_gen.m"
            {
#line 756 "ml_foreign_proc_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_10, ml_backend__ml_foreign_proc_gen__Mode_16, ml_backend__ml_foreign_proc_gen__OrigType_13, &ml_backend__ml_foreign_proc_gen__V_22_22);
            }
#line 756 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_20_20 == ml_backend__ml_foreign_proc_gen__V_22_22);
#line 753 "ml_foreign_proc_gen.m"
          }
#line 754 "ml_foreign_proc_gen.m"
      }
#line 752 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 758 "ml_foreign_proc_gen.m"
      {
#line 758 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(ml_backend__ml_foreign_proc_gen__Lang_6, ml_backend__ml_foreign_proc_gen__Var_11, ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__AssignInput_8, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
      }
#line 752 "ml_foreign_proc_gen.m"
    else
#line 763 "ml_foreign_proc_gen.m"
      {
#line 763 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__AssignInput_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17;
#line 763 "ml_foreign_proc_gen.m"
      }
#line 750 "ml_foreign_proc_gen.m"
  }
#line 746 "ml_foreign_proc_gen.m"
}

#line 739 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
#line 739 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 739 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 739 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 739 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3,
#line 739 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_4)
#line 739 "ml_foreign_proc_gen.m"
{
#line 739 "ml_foreign_proc_gen.m"
  {
#line 739 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;
#line 739 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8;
#line 739 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18;

#line 739 "ml_foreign_proc_gen.m"
    {
#line 739 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), &ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3), &ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18);
    }
#line 739 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8));
#line 739 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18));
#line 739 "ml_foreign_proc_gen.m"
  }
#line 739 "ml_foreign_proc_gen.m"
}

#line 734 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
#line 734 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 734 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgList_7,
#line 734 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInputs_8,
#line 734 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11,
#line 734 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12)
#line 734 "ml_foreign_proc_gen.m"
{
#line 738 "ml_foreign_proc_gen.m"
  {
#line 738 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 738 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_10;
#line 738 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_13_13;
#line 739 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12;

#line 739 "ml_foreign_proc_gen.m"
    {
#line 739 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 739 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
#line 739 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1));
#line 739 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 739 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Lang_6));
#line 739 "ml_foreign_proc_gen.m"
    }
#line 739 "ml_foreign_proc_gen.m"
    {
#line 739 "ml_foreign_proc_gen.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_foreign_proc_gen__V_13_13, ml_backend__ml_foreign_proc_gen__ArgList_7, &ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ((MR_Box) (ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11)), &ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
    }
#line 739 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12 = ((MR_Word) ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
#line 741 "ml_foreign_proc_gen.m"
    {
#line 741 "ml_foreign_proc_gen.m"
      mercury__list__condense_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ml_backend__ml_foreign_proc_gen__AssignInputs_8);
    }
#line 738 "ml_foreign_proc_gen.m"
  }
#line 734 "ml_foreign_proc_gen.m"
}

#line 668 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
#line 668 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 668 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_2,
#line 668 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 668 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4)
#line 668 "ml_foreign_proc_gen.m"
{
#line 672 "ml_foreign_proc_gen.m"
  {
#line 672 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 672 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 672 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "ml_foreign_proc_gen.m"
    else
#line 674 "ml_foreign_proc_gen.m"
      {
#line 674 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 674 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 674 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decl_11;
#line 674 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decls_12;
#line 674 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 1)));
#line 674 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 2)));
#line 674 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_22;
#line 686 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 0)));
#line 686 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___BoxPolicy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 3)));
#line 688 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_23;
#line 689 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_29_29;
#line 689 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Mode_24;
#line 727 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_50_50;
#line 728 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_49_49;

#line 687 "ml_foreign_proc_gen.m"
        {
#line 687 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_22);
        }
#line 689 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19)) == (MR_mktag((MR_Integer) 1)));
#line 689 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 689 "ml_foreign_proc_gen.m"
          {
#line 689 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19, (MR_Integer) 0)));
#line 689 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_29_29, (MR_Integer) 0)));
#line 689 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen___Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_29_29, (MR_Integer) 1)));
#line 728 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_50_50 = (MR_Char) 95;
#line 728 "ml_foreign_proc_gen.m"
            {
#line 728 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_23, ml_backend__ml_foreign_proc_gen__V_50_50, &ml_backend__ml_foreign_proc_gen__V_49_49);
            }
#line 690 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 689 "ml_foreign_proc_gen.m"
          }
#line 688 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 703 "ml_foreign_proc_gen.m"
          {
#line 703 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_25;
#line 703 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__TypeDecl_26;
#line 703 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__VarDeclString_27;
#line 703 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarDecl_28;
#line 703 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;
#line 703 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_38_38;
#line 703 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_45_45;

#line 695 "ml_foreign_proc_gen.m"
#line 695 "ml_foreign_proc_gen.m"
            switch (ml_backend__ml_foreign_proc_gen__MutableSpecial_2) {
#line 695 "ml_foreign_proc_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 695 "ml_foreign_proc_gen.m"
              case (MR_Integer) 0:
#line 698 "ml_foreign_proc_gen.m"
                {
#line 698 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__V_36_36;

#line 698 "ml_foreign_proc_gen.m"
                  {
#line 698 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_36_36 = parse_tree__builtin_lib_types__int_type_0_f_0();
                  }
#line 698 "ml_foreign_proc_gen.m"
                  {
#line 698 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__Type_20, ml_backend__ml_foreign_proc_gen__V_36_36);
                  }
#line 698 "ml_foreign_proc_gen.m"
                  if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 699 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 698 "ml_foreign_proc_gen.m"
                  else
#line 701 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 698 "ml_foreign_proc_gen.m"
                }
#line 695 "ml_foreign_proc_gen.m"
                break;
#line 695 "ml_foreign_proc_gen.m"
              case (MR_Integer) 1:
#line 694 "ml_foreign_proc_gen.m"
                {
#line 694 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_22, ml_backend__ml_foreign_proc_gen__Type_20);
                }
#line 695 "ml_foreign_proc_gen.m"
                break;
#line 695 "ml_foreign_proc_gen.m"
            }
#line 704 "ml_foreign_proc_gen.m"
            {
#line 704 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__TypeDecl_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 704 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_25));
#line 704 "ml_foreign_proc_gen.m"
            }
#line 705 "ml_foreign_proc_gen.m"
            {
#line 705 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[11], ml_backend__ml_foreign_proc_gen__ArgName_23, &ml_backend__ml_foreign_proc_gen__V_38_38);
            }
#line 705 "ml_foreign_proc_gen.m"
            {
#line 705 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_45_45 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_38_38, (MR_String) ";\n");
            }
#line 705 "ml_foreign_proc_gen.m"
            {
#line 705 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__VarDeclString_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__V_45_45);
            }
#line 706 "ml_foreign_proc_gen.m"
            {
#line 706 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__VarDecl_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 706 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__VarDecl_28, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDeclString_27));
#line 706 "ml_foreign_proc_gen.m"
            }
#line 707 "ml_foreign_proc_gen.m"
            {
#line 707 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDecl_28));
#line 707 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "ml_foreign_proc_gen.m"
            }
#line 707 "ml_foreign_proc_gen.m"
            {
#line 707 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TypeDecl_26));
#line 707 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_34_34));
#line 707 "ml_foreign_proc_gen.m"
            }
#line 703 "ml_foreign_proc_gen.m"
          }
#line 688 "ml_foreign_proc_gen.m"
        else
#line 711 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 676 "ml_foreign_proc_gen.m"
        {
#line 676 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__Info_1, ml_backend__ml_foreign_proc_gen__MutableSpecial_2, ml_backend__ml_foreign_proc_gen__Args_10, &ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 674 "ml_foreign_proc_gen.m"
        {
#line 674 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Decl_11, ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 674 "ml_foreign_proc_gen.m"
      }
#line 672 "ml_foreign_proc_gen.m"
  }
#line 668 "ml_foreign_proc_gen.m"
}

#line 619 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
#line 619 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 619 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_2,
#line 619 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 619 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4)
#line 619 "ml_foreign_proc_gen.m"
{
#line 622 "ml_foreign_proc_gen.m"
  {
#line 622 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 622 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 622 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "ml_foreign_proc_gen.m"
    else
#line 623 "ml_foreign_proc_gen.m"
      {
#line 623 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 623 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 623 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decl_11;
#line 623 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decls_12;
#line 623 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 1)));
#line 623 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 2)));
#line 623 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 3)));
#line 623 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_21;
#line 623 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__DeclString_25;
#line 634 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 0)));
#line 636 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_22;
#line 637 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
#line 637 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Mode_23;
#line 727 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_55_55;
#line 728 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_54_54;

#line 635 "ml_foreign_proc_gen.m"
        {
#line 635 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_21);
        }
#line 637 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18)) == (MR_mktag((MR_Integer) 1)));
#line 637 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 637 "ml_foreign_proc_gen.m"
          {
#line 637 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18, (MR_Integer) 0)));
#line 637 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 0)));
#line 637 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen___Mode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 1)));
#line 728 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_55_55 = (MR_Char) 95;
#line 728 "ml_foreign_proc_gen.m"
            {
#line 728 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_22, ml_backend__ml_foreign_proc_gen__V_55_55, &ml_backend__ml_foreign_proc_gen__V_54_54);
            }
#line 638 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 637 "ml_foreign_proc_gen.m"
          }
#line 636 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 647 "ml_foreign_proc_gen.m"
          {
#line 647 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__TypeString_24;
#line 647 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_34_34;
#line 647 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_40_40;
#line 647 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_41_41;
#line 647 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_43_43;
#line 647 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_44_44;
#line 647 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_51_51;

#line 643 "ml_foreign_proc_gen.m"
#line 643 "ml_foreign_proc_gen.m"
            switch (ml_backend__ml_foreign_proc_gen__BoxPolicy_20) {
#line 643 "ml_foreign_proc_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 643 "ml_foreign_proc_gen.m"
              case (MR_Integer) 1:
#line 642 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__TypeString_24 = (MR_String) "MR_Word";
#line 643 "ml_foreign_proc_gen.m"
                break;
#line 643 "ml_foreign_proc_gen.m"
              case (MR_Integer) 0:
#line 645 "ml_foreign_proc_gen.m"
                {
#line 645 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__TypeString_24 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_21, ml_backend__ml_foreign_proc_gen__Lang_2, ml_backend__ml_foreign_proc_gen__Type_19);
                }
#line 643 "ml_foreign_proc_gen.m"
                break;
#line 643 "ml_foreign_proc_gen.m"
            }
#line 5047 "ml_backend.ml_foreign_proc_gen.c"
            ml_backend__ml_foreign_proc_gen__V_40_40 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[11];
#line 648 "ml_foreign_proc_gen.m"
            {
#line 648 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_40_40, ml_backend__ml_foreign_proc_gen__ArgName_22, &ml_backend__ml_foreign_proc_gen__V_34_34);
            }
#line 648 "ml_foreign_proc_gen.m"
            {
#line 648 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_41_41 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_34_34, (MR_String) ";\n");
            }
#line 648 "ml_foreign_proc_gen.m"
            {
#line 648 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__V_41_41);
            }
#line 648 "ml_foreign_proc_gen.m"
            {
#line 648 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_40_40, ml_backend__ml_foreign_proc_gen__TypeString_24, &ml_backend__ml_foreign_proc_gen__V_44_44);
            }
#line 648 "ml_foreign_proc_gen.m"
            {
#line 648 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_51_51 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_44_44, ml_backend__ml_foreign_proc_gen__V_43_43);
            }
#line 648 "ml_foreign_proc_gen.m"
            {
#line 648 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__DeclString_25 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_51_51);
            }
#line 647 "ml_foreign_proc_gen.m"
          }
#line 636 "ml_foreign_proc_gen.m"
        else
#line 652 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__DeclString_25 = (MR_String) "";
#line 654 "ml_foreign_proc_gen.m"
        {
#line 654 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__DeclString_25));
#line 654 "ml_foreign_proc_gen.m"
        }
#line 625 "ml_foreign_proc_gen.m"
        {
#line 625 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(ml_backend__ml_foreign_proc_gen__Info_1, ml_backend__ml_foreign_proc_gen__Lang_2, ml_backend__ml_foreign_proc_gen__Args_10, &ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 623 "ml_foreign_proc_gen.m"
        {
#line 623 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 623 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 623 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = base;
#line 623 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Decl_11));
#line 623 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Decls_12));
#line 623 "ml_foreign_proc_gen.m"
        }
#line 623 "ml_foreign_proc_gen.m"
      }
#line 622 "ml_foreign_proc_gen.m"
  }
#line 619 "ml_foreign_proc_gen.m"
}

#line 598 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
#line 598 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_3,
#line 598 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_4)
#line 598 "ml_foreign_proc_gen.m"
{
#line 601 "ml_foreign_proc_gen.m"
  {
#line 601 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 601 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_5;
#line 601 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__PredId_6;
#line 601 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_7;
#line 601 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Name_8;
#line 601 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Module_9;
#line 601 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_12_12;
#line 601 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_13_13;
#line 601 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_14_14;

#line 602 "ml_foreign_proc_gen.m"
    {
#line 602 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__ModuleInfo_5);
    }
#line 607 "ml_foreign_proc_gen.m"
    {
#line 607 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__PredId_6);
    }
#line 608 "ml_foreign_proc_gen.m"
    {
#line 608 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__ProcId_7);
    }
#line 609 "ml_foreign_proc_gen.m"
    {
#line 609 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_5, ml_backend__ml_foreign_proc_gen__PredId_6, ml_backend__ml_foreign_proc_gen__ProcId_7, &ml_backend__ml_foreign_proc_gen__Name_8, &ml_backend__ml_foreign_proc_gen__Module_9);
    }
#line 611 "ml_foreign_proc_gen.m"
    {
#line 611 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 611 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Module_9));
#line 611 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 1) = ((MR_Box) ((MR_Integer) 0));
#line 611 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_14_14, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Name_8));
#line 611 "ml_foreign_proc_gen.m"
    }
#line 611 "ml_foreign_proc_gen.m"
    {
#line 611 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 611 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_13_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_14_14));
#line 611 "ml_foreign_proc_gen.m"
    }
#line 611 "ml_foreign_proc_gen.m"
    {
#line 611 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_12_12, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_13_13));
#line 611 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_12_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 611 "ml_foreign_proc_gen.m"
    }
#line 610 "ml_foreign_proc_gen.m"
    {
#line 610 "ml_foreign_proc_gen.m"
      MR_Word base;
#line 610 "ml_foreign_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 610 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HashDefine_4 = base;
#line 610 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[10])));
#line 610 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_12_12));
#line 610 "ml_foreign_proc_gen.m"
    }
#line 601 "ml_foreign_proc_gen.m"
  }
#line 598 "ml_foreign_proc_gen.m"
}

#line 576 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
#line 576 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 576 "ml_foreign_proc_gen.m"
{
#line 576 "ml_foreign_proc_gen.m"
  {
#line 576 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 576 "ml_foreign_proc_gen.m"
    MR_builtin_longjmp((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0, 1);
#line 576 "ml_foreign_proc_gen.m"
  }
#line 576 "ml_foreign_proc_gen.m"
}

#line 577 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
#line 577 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 577 "ml_foreign_proc_gen.m"
{
#line 577 "ml_foreign_proc_gen.m"
  {
#line 577 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 577 "ml_foreign_proc_gen.m"
    (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14 = ((MR_String) (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14);
#line 577 "ml_foreign_proc_gen.m"
    {
#line 577 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(ml_backend__ml_foreign_proc_gen__env_ptr);
    }
#line 577 "ml_foreign_proc_gen.m"
  }
#line 577 "ml_foreign_proc_gen.m"
}

#line 576 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
#line 576 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 576 "ml_foreign_proc_gen.m"
{
#line 576 "ml_foreign_proc_gen.m"
  {
#line 576 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 576 "ml_foreign_proc_gen.m"
    {
#line 578 "ml_foreign_proc_gen.m"
      MR_Integer ml_backend__ml_foreign_proc_gen__V_15_15;

#line 578 "ml_foreign_proc_gen.m"
      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27 = (MR_String) "MR_ALLOC_ID";
#line 578 "ml_foreign_proc_gen.m"
      {
#line 578 "ml_foreign_proc_gen.m"
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27, &ml_backend__ml_foreign_proc_gen__V_15_15);
      }
#line 578 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 578 "ml_foreign_proc_gen.m"
        {
#line 578 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(ml_backend__ml_foreign_proc_gen__env_ptr);
        }
#line 576 "ml_foreign_proc_gen.m"
    }
#line 576 "ml_foreign_proc_gen.m"
  }
#line 576 "ml_foreign_proc_gen.m"
}

#line 576 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
#line 576 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 576 "ml_foreign_proc_gen.m"
{
#line 576 "ml_foreign_proc_gen.m"
  {
#line 576 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 576 "ml_foreign_proc_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0) == 0)
#line 576 "ml_foreign_proc_gen.m"
      {
#line 576 "ml_foreign_proc_gen.m"
        {
#line 576 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42;

#line 576 "ml_foreign_proc_gen.m"
          (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13 == (MR_Integer) 1);
#line 576 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 576 "ml_foreign_proc_gen.m"
            {
#line 5328 "ml_backend.ml_foreign_proc_gen.c"
              ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 577 "ml_foreign_proc_gen.m"
              {
#line 577 "ml_foreign_proc_gen.m"
                mercury__list__member_2_p_1(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_42_42, &(ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7, ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3, ml_backend__ml_foreign_proc_gen__env_ptr);
              }
#line 576 "ml_foreign_proc_gen.m"
            }
#line 576 "ml_foreign_proc_gen.m"
        }
#line 576 "ml_foreign_proc_gen.m"
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_FALSE;
#line 576 "ml_foreign_proc_gen.m"
      }
#line 576 "ml_foreign_proc_gen.m"
    else
#line 576 "ml_foreign_proc_gen.m"
      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_TRUE;
#line 576 "ml_foreign_proc_gen.m"
  }
#line 576 "ml_foreign_proc_gen.m"
}

#line 567 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
#line 567 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__C_Codes_7,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_9,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashUndef_10,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24,
#line 567 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25)
#line 567 "ml_foreign_proc_gen.m"
{
#line 567 "ml_foreign_proc_gen.m"
  {
#line 567 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s ml_backend__ml_foreign_proc_gen__env;

#line 567 "ml_foreign_proc_gen.m"
    (ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7 = ml_backend__ml_foreign_proc_gen__C_Codes_7;
#line 572 "ml_foreign_proc_gen.m"
    {
#line 572 "ml_foreign_proc_gen.m"
      MR_Word ml_backend__ml_foreign_proc_gen__Globals_12;

#line 573 "ml_foreign_proc_gen.m"
      {
#line 573 "ml_foreign_proc_gen.m"
        ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__Globals_12);
      }
#line 574 "ml_foreign_proc_gen.m"
      {
#line 574 "ml_foreign_proc_gen.m"
        libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 192, &(ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13);
      }
#line 576 "ml_foreign_proc_gen.m"
      {
#line 576 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(&ml_backend__ml_foreign_proc_gen__env);
      }
#line 575 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 580 "ml_foreign_proc_gen.m"
        {
#line 580 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_16;
#line 580 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__PredId_17;
#line 580 "ml_foreign_proc_gen.m"
          MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_18;
#line 580 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__GlobalData0_19;
#line 580 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ProcLabel_20;
#line 580 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__AllocId_22;
#line 580 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__GlobalData_23;
#line 580 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_33_33;
#line 580 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;
#line 584 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen___Module_21;

#line 580 "ml_foreign_proc_gen.m"
          {
#line 580 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__ModuleInfo_16);
          }
#line 581 "ml_foreign_proc_gen.m"
          {
#line 581 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__PredId_17);
          }
#line 582 "ml_foreign_proc_gen.m"
          {
#line 582 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__ProcId_18);
          }
#line 583 "ml_foreign_proc_gen.m"
          {
#line 583 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__GlobalData0_19);
          }
#line 584 "ml_foreign_proc_gen.m"
          {
#line 584 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_16, ml_backend__ml_foreign_proc_gen__PredId_17, ml_backend__ml_foreign_proc_gen__ProcId_18, &ml_backend__ml_foreign_proc_gen__ProcLabel_20, &ml_backend__ml_foreign_proc_gen___Module_21);
          }
#line 585 "ml_foreign_proc_gen.m"
          {
#line 585 "ml_foreign_proc_gen.m"
            ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(ml_backend__ml_foreign_proc_gen__ProcLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ml_backend__ml_foreign_proc_gen__Context_8, &ml_backend__ml_foreign_proc_gen__AllocId_22, ml_backend__ml_foreign_proc_gen__GlobalData0_19, &ml_backend__ml_foreign_proc_gen__GlobalData_23);
          }
#line 587 "ml_foreign_proc_gen.m"
          {
#line 587 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_foreign_proc_gen__GlobalData_23, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);
          }
#line 590 "ml_foreign_proc_gen.m"
          {
#line 590 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_34_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 590 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AllocId_22));
#line 590 "ml_foreign_proc_gen.m"
          }
#line 590 "ml_foreign_proc_gen.m"
          {
#line 590 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 590 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_33_33, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_34_34));
#line 590 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 590 "ml_foreign_proc_gen.m"
          }
#line 589 "ml_foreign_proc_gen.m"
          {
#line 589 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 589 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 589 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__HashDefine_9 = base;
#line 589 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_2[8])));
#line 589 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_33_33));
#line 589 "ml_foreign_proc_gen.m"
          }
#line 592 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11]);
#line 580 "ml_foreign_proc_gen.m"
        }
#line 575 "ml_foreign_proc_gen.m"
      else
#line 594 "ml_foreign_proc_gen.m"
        {
#line 594 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 594 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24;
#line 594 "ml_foreign_proc_gen.m"
        }
#line 572 "ml_foreign_proc_gen.m"
    }
#line 567 "ml_foreign_proc_gen.m"
  }
#line 567 "ml_foreign_proc_gen.m"
}

#line 543 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
#line 543 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_6,
#line 543 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_7,
#line 543 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_8,
#line 543 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ObtainLock_9,
#line 543 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ReleaseLock_10)
#line 543 "ml_foreign_proc_gen.m"
{
#line 547 "ml_foreign_proc_gen.m"
  {
#line 547 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 547 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_11;
#line 547 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Globals_12;
#line 547 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Parallel_13;

#line 548 "ml_foreign_proc_gen.m"
    {
#line 548 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_11);
    }
#line 549 "ml_foreign_proc_gen.m"
    {
#line 549 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_11, &ml_backend__ml_foreign_proc_gen__Globals_12);
    }
#line 550 "ml_foreign_proc_gen.m"
    {
#line 550 "ml_foreign_proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 214, &ml_backend__ml_foreign_proc_gen__Parallel_13);
    }
#line 552 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Parallel_13 == (MR_Integer) 1);
#line 552 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 553 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__ThreadSafe_7 == (MR_Integer) 0);
#line 551 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 555 "ml_foreign_proc_gen.m"
      {
#line 555 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_14;
#line 555 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__Name_15;
#line 555 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__MangledName_16;
#line 555 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_18_18;
#line 555 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
#line 555 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_24_24;

#line 555 "ml_foreign_proc_gen.m"
        {
#line 555 "ml_foreign_proc_gen.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_11, ml_backend__ml_foreign_proc_gen__PredId_8, &ml_backend__ml_foreign_proc_gen__PredInfo_14);
        }
#line 556 "ml_foreign_proc_gen.m"
        {
#line 556 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(ml_backend__ml_foreign_proc_gen__PredInfo_14);
        }
#line 557 "ml_foreign_proc_gen.m"
        {
#line 557 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__MangledName_16 = backend_libs__c_util__quote_string_1_f_0(ml_backend__ml_foreign_proc_gen__Name_15);
        }
#line 559 "ml_foreign_proc_gen.m"
        {
#line 559 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MangledName_16));
#line 559 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[10])));
#line 559 "ml_foreign_proc_gen.m"
        }
#line 558 "ml_foreign_proc_gen.m"
        {
#line 558 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_18_18, 0) = ((MR_Box) ((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\""));
#line 558 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_18_18, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 558 "ml_foreign_proc_gen.m"
        }
#line 558 "ml_foreign_proc_gen.m"
        {
#line 558 "ml_foreign_proc_gen.m"
          mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__V_18_18, ml_backend__ml_foreign_proc_gen__ObtainLock_9);
        }
#line 560 "ml_foreign_proc_gen.m"
        {
#line 560 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 560 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_24_24, 0) = ((MR_Box) ((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\""));
#line 560 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_24_24, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 560 "ml_foreign_proc_gen.m"
        }
#line 560 "ml_foreign_proc_gen.m"
        {
#line 560 "ml_foreign_proc_gen.m"
          mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__V_24_24, ml_backend__ml_foreign_proc_gen__ReleaseLock_10);
        }
#line 555 "ml_foreign_proc_gen.m"
      }
#line 551 "ml_foreign_proc_gen.m"
    else
#line 563 "ml_foreign_proc_gen.m"
      {
#line 563 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__ObtainLock_9 = (MR_String) "";
#line 564 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__ReleaseLock_10 = (MR_String) "";
#line 563 "ml_foreign_proc_gen.m"
      }
#line 547 "ml_foreign_proc_gen.m"
  }
#line 543 "ml_foreign_proc_gen.m"
}

#line 77 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
#line 77 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
#line 77 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
#line 77 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 77 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18)
#line 77 "ml_foreign_proc_gen.m"
{
#line 82 "ml_foreign_proc_gen.m"
  {
#line 82 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 82 "ml_foreign_proc_gen.m"
#line 82 "ml_foreign_proc_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__Expr_5)) {
#line 82 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 82 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 82 "ml_foreign_proc_gen.m"
        {
#line 82 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__EnvVar_8;
#line 82 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__EnvVarRval_9;
#line 82 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 82 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
#line 82 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_27_27;

#line 82 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__EnvVar_8 = (MR_String) ml_backend__ml_foreign_proc_gen__V_24_24;
#line 83 "ml_foreign_proc_gen.m"
          {
#line 83 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(ml_backend__ml_foreign_proc_gen__EnvVar_8, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
#line 84 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_27_27 = (MR_Word) ml_backend__ml_foreign_proc_gen__EnvVar_8;
#line 84 "ml_foreign_proc_gen.m"
          {
#line 84 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 84 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_26_26, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_27_27));
#line 84 "ml_foreign_proc_gen.m"
          }
#line 84 "ml_foreign_proc_gen.m"
          {
#line 84 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__EnvVarRval_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 84 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__EnvVarRval_9, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_26_26));
#line 84 "ml_foreign_proc_gen.m"
          }
#line 86 "ml_foreign_proc_gen.m"
          {
#line 86 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 86 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 86 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 86 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 86 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 86 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EnvVarRval_9));
#line 86 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9])));
#line 86 "ml_foreign_proc_gen.m"
          }
#line 82 "ml_foreign_proc_gen.m"
        }
#line 82 "ml_foreign_proc_gen.m"
        break;
#line 82 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 88 "ml_foreign_proc_gen.m"
        {
#line 88 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 88 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalA_12;

#line 89 "ml_foreign_proc_gen.m"
          {
#line 89 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_11, &ml_backend__ml_foreign_proc_gen__RvalA_12, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
#line 90 "ml_foreign_proc_gen.m"
          {
#line 90 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 90 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 90 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 90 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 90 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_2[7])));
#line 90 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_12));
#line 90 "ml_foreign_proc_gen.m"
          }
#line 88 "ml_foreign_proc_gen.m"
        }
#line 82 "ml_foreign_proc_gen.m"
        break;
#line 82 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 92 "ml_foreign_proc_gen.m"
        {
#line 92 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__TraceOp_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 92 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 2)));
#line 92 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalB_15;
#line 92 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Op_16;
#line 92 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19;
#line 92 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprA_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 1)));
#line 92 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalA_32;

#line 93 "ml_foreign_proc_gen.m"
          {
#line 93 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_31, &ml_backend__ml_foreign_proc_gen__RvalA_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19);
          }
#line 94 "ml_foreign_proc_gen.m"
          {
#line 94 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprB_14, &ml_backend__ml_foreign_proc_gen__RvalB_15, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
#line 98 "ml_foreign_proc_gen.m"
#line 98 "ml_foreign_proc_gen.m"
          switch (ml_backend__ml_foreign_proc_gen__TraceOp_13) {
#line 98 "ml_foreign_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 98 "ml_foreign_proc_gen.m"
            case (MR_Integer) 1:
#line 100 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 98 "ml_foreign_proc_gen.m"
              break;
#line 98 "ml_foreign_proc_gen.m"
            case (MR_Integer) 0:
#line 97 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 98 "ml_foreign_proc_gen.m"
              break;
#line 98 "ml_foreign_proc_gen.m"
          }
#line 102 "ml_foreign_proc_gen.m"
          {
#line 102 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 102 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 102 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 102 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 102 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Op_16));
#line 102 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_32));
#line 102 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalB_15));
#line 102 "ml_foreign_proc_gen.m"
          }
#line 92 "ml_foreign_proc_gen.m"
        }
#line 82 "ml_foreign_proc_gen.m"
        break;
#line 82 "ml_foreign_proc_gen.m"
    }
#line 82 "ml_foreign_proc_gen.m"
  }
#line 77 "ml_foreign_proc_gen.m"
}

#line 31 "ml_foreign_proc_gen.m"
void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_ordinary_pragma_foreign_proc_12_p_0(
#line 31 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__CodeModel_13,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 31 "ml_foreign_proc_gen.m"
  MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_16,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 31 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__Foreign_Code_19,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34,
#line 31 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35)
#line 31 "ml_foreign_proc_gen.m"
{
#line 106 "ml_foreign_proc_gen.m"
  {
#line 106 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 106 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
#line 106 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_25;

#line 107 "ml_foreign_proc_gen.m"
    {
#line 107 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 111 "ml_foreign_proc_gen.m"
#line 111 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__CodeModel_13) {
#line 111 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 111 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 110 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 0;
#line 111 "ml_foreign_proc_gen.m"
        break;
#line 111 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 129 "ml_foreign_proc_gen.m"
        {
#line 129 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32;

#line 130 "ml_foreign_proc_gen.m"
          {
#line 130 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32 = parse_tree__prog_data__get_ordinary_despite_detism_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
          }
#line 134 "ml_foreign_proc_gen.m"
#line 134 "ml_foreign_proc_gen.m"
          switch (ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32) {
#line 134 "ml_foreign_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 134 "ml_foreign_proc_gen.m"
            case (MR_Integer) 0:
#line 132 "ml_foreign_proc_gen.m"
              {
#line 133 "ml_foreign_proc_gen.m"
                {
#line 133 "ml_foreign_proc_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected code model");
#line 133 "ml_foreign_proc_gen.m"
                  return;
                }
#line 132 "ml_foreign_proc_gen.m"
              }
#line 134 "ml_foreign_proc_gen.m"
              break;
#line 134 "ml_foreign_proc_gen.m"
            case (MR_Integer) 1:
#line 136 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 1;
#line 134 "ml_foreign_proc_gen.m"
              break;
#line 134 "ml_foreign_proc_gen.m"
          }
#line 129 "ml_foreign_proc_gen.m"
        }
#line 111 "ml_foreign_proc_gen.m"
        break;
#line 111 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 112 "ml_foreign_proc_gen.m"
        {
#line 112 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_26;
#line 112 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ProcInfo_28;
#line 112 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Detism_29;
#line 112 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__MaxSoln_31;
#line 114 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen___PredInfo_27;
#line 117 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_30_30;

#line 113 "ml_foreign_proc_gen.m"
          {
#line 113 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, &ml_backend__ml_foreign_proc_gen__ModuleInfo_26);
          }
#line 114 "ml_foreign_proc_gen.m"
          {
#line 114 "ml_foreign_proc_gen.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_26, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__ProcId_16, &ml_backend__ml_foreign_proc_gen___PredInfo_27, &ml_backend__ml_foreign_proc_gen__ProcInfo_28);
          }
#line 116 "ml_foreign_proc_gen.m"
          {
#line 116 "ml_foreign_proc_gen.m"
            hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ml_backend__ml_foreign_proc_gen__ProcInfo_28, &ml_backend__ml_foreign_proc_gen__Detism_29);
          }
#line 117 "ml_foreign_proc_gen.m"
          {
#line 117 "ml_foreign_proc_gen.m"
            parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_foreign_proc_gen__Detism_29, &ml_backend__ml_foreign_proc_gen__V_30_30, &ml_backend__ml_foreign_proc_gen__MaxSoln_31);
          }
#line 121 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = ((&ml_backend__ml_foreign_proc_gen_vector_common_3[0 + ml_backend__ml_foreign_proc_gen__MaxSoln_31]))->ml_backend__ml_foreign_proc_gen__vector_common_type_3_0__vct_3_f_0;
#line 112 "ml_foreign_proc_gen.m"
        }
#line 111 "ml_foreign_proc_gen.m"
        break;
#line 111 "ml_foreign_proc_gen.m"
    }
#line 144 "ml_foreign_proc_gen.m"
#line 144 "ml_foreign_proc_gen.m"
    switch (ml_backend__ml_foreign_proc_gen__Lang_24) {
#line 144 "ml_foreign_proc_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 144 "ml_foreign_proc_gen.m"
      case (MR_Integer) 0:
#line 141 "ml_foreign_proc_gen.m"
        {
#line 141 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
        }
#line 144 "ml_foreign_proc_gen.m"
        break;
#line 144 "ml_foreign_proc_gen.m"
      case (MR_Integer) 1:
#line 145 "ml_foreign_proc_gen.m"
        {
#line 145 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Target_33;

#line 146 "ml_foreign_proc_gen.m"
          {
#line 146 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, &ml_backend__ml_foreign_proc_gen__Target_33);
          }
#line 152 "ml_foreign_proc_gen.m"
#line 152 "ml_foreign_proc_gen.m"
          switch (ml_backend__ml_foreign_proc_gen__Target_33) {
#line 152 "ml_foreign_proc_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 152 "ml_foreign_proc_gen.m"
            case (MR_Integer) 0:
#line 152 "ml_foreign_proc_gen.m"
            case (MR_Integer) 3:
#line 152 "ml_foreign_proc_gen.m"
            case (MR_Integer) 2:
#line 156 "ml_foreign_proc_gen.m"
              {
#line 157 "ml_foreign_proc_gen.m"
                {
#line 157 "ml_foreign_proc_gen.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "C# foreign code not supported for compilation target");
#line 157 "ml_foreign_proc_gen.m"
                  return;
                }
#line 156 "ml_foreign_proc_gen.m"
              }
#line 152 "ml_foreign_proc_gen.m"
              break;
#line 152 "ml_foreign_proc_gen.m"
            case (MR_Integer) 1:
#line 148 "ml_foreign_proc_gen.m"
              {
#line 149 "ml_foreign_proc_gen.m"
                {
#line 149 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 2, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
                }
#line 148 "ml_foreign_proc_gen.m"
              }
#line 152 "ml_foreign_proc_gen.m"
              break;
#line 152 "ml_foreign_proc_gen.m"
          }
#line 145 "ml_foreign_proc_gen.m"
        }
#line 144 "ml_foreign_proc_gen.m"
        break;
#line 144 "ml_foreign_proc_gen.m"
      case (MR_Integer) 3:
#line 166 "ml_foreign_proc_gen.m"
        {
#line 167 "ml_foreign_proc_gen.m"
          {
#line 167 "ml_foreign_proc_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected language Erlang");
#line 167 "ml_foreign_proc_gen.m"
            return;
          }
#line 166 "ml_foreign_proc_gen.m"
        }
#line 144 "ml_foreign_proc_gen.m"
        break;
#line 144 "ml_foreign_proc_gen.m"
      case (MR_Integer) 2:
#line 161 "ml_foreign_proc_gen.m"
        {
#line 162 "ml_foreign_proc_gen.m"
          {
#line 162 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 3, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
          }
#line 161 "ml_foreign_proc_gen.m"
        }
#line 144 "ml_foreign_proc_gen.m"
        break;
#line 144 "ml_foreign_proc_gen.m"
    }
#line 106 "ml_foreign_proc_gen.m"
  }
#line 31 "ml_foreign_proc_gen.m"
}

#line 27 "ml_foreign_proc_gen.m"
void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_trace_runtime_cond_6_p_0(
#line 27 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_7,
#line 27 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
#line 27 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_9,
#line 27 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_10,
#line 27 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16,
#line 27 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_17)
#line 27 "ml_foreign_proc_gen.m"
{
#line 68 "ml_foreign_proc_gen.m"
  {
#line 68 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 68 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_12;
#line 68 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__SuccessLval_13;
#line 68 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__CondRval_14;
#line 68 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Statement_15;
#line 68 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_19_19;
#line 68 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;

#line 69 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__Decls_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "ml_foreign_proc_gen.m"
    {
#line 70 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MLDSContext_12 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_8);
    }
#line 71 "ml_foreign_proc_gen.m"
    {
#line 71 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16, &ml_backend__ml_foreign_proc_gen__SuccessLval_13);
    }
#line 72 "ml_foreign_proc_gen.m"
    {
#line 72 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_7, &ml_backend__ml_foreign_proc_gen__CondRval_14, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_17);
    }
#line 73 "ml_foreign_proc_gen.m"
    {
#line 73 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 73 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessLval_13));
#line 73 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_20_20, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__CondRval_14));
#line 73 "ml_foreign_proc_gen.m"
    }
#line 73 "ml_foreign_proc_gen.m"
    {
#line 73 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 73 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 73 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_19_19, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 73 "ml_foreign_proc_gen.m"
    }
#line 73 "ml_foreign_proc_gen.m"
    {
#line 73 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Statement_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 73 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Statement_15, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_19_19));
#line 73 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Statement_15, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSContext_12));
#line 73 "ml_foreign_proc_gen.m"
    }
#line 75 "ml_foreign_proc_gen.m"
    {
#line 75 "ml_foreign_proc_gen.m"
      MR_Word base;
#line 75 "ml_foreign_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 75 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_10 = base;
#line 75 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Statement_15));
#line 75 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 75 "ml_foreign_proc_gen.m"
    }
#line 68 "ml_foreign_proc_gen.m"
  }
#line 27 "ml_foreign_proc_gen.m"
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
