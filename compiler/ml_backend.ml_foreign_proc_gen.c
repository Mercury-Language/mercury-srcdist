/*
** Automatically generated from `ml_foreign_proc_gen.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 737 "ml_foreign_proc_gen.m"
struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s {
#line 737 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7;
#line 742 "ml_foreign_proc_gen.m"
  MR_bool ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded;
#line 742 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13;
#line 746 "ml_foreign_proc_gen.m"
  jmp_buf ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0;
#line 746 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14;
#line 746 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27;
#line 747 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14;
#line 737 "ml_foreign_proc_gen.m"
};


#line 171 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0;

#line 174 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 177 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 180 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_foreign_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0;

#line 183 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 186 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 189 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 192 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0;

#line 195 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1;

#line 198 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2];

#line 201 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2];

#line 204 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2];

#line 207 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0;

#line 210 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1;

#line 213 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2;

#line 216 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[3];

#line 219 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[3];

#line 222 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[3];

#line 225 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
#line 228 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 230 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 233 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
#line 236 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 238 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 240 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3);

#line 243 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
#line 246 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 248 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 251 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
#line 254 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 256 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 258 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3);

#line 592 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigArgs_17,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 592 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__C_Code_19,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);

#line 423 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_5(
#line 423 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 423 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 423 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 419 "ml_foreign_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_4(
#line 419 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 419 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1);

#line 415 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_3(
#line 415 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 415 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 415 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 410 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_2(
#line 410 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 410 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 410 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2);

#line 378 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_1(
#line 378 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg);

#line 370 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0(
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 370 "ml_foreign_proc_gen.m"
  MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_16,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 370 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_42,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_43);

#line 292 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0_1(
#line 292 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg);

#line 283 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0(
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 283 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42);

#line 204 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
#line 204 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg);

#line 180 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__TargetLang_14,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_15,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_16,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_17,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_19,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 180 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__JavaCode_21,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_22,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_23,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_24,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);

#line 378 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__378__1_2_p_0(
#line 378 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 378 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_48);

#line 292 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__292__1_2_p_0(
#line 292 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 292 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_48);

#line 204 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__204__1_2_p_0(
#line 204 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 204 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_53);

#line 274 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
#line 274 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 274 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 274 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3);

#line 274 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
#line 274 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 274 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 858 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
#line 858 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 858 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 858 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3);

#line 858 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
#line 858 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 858 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 1193 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
#line 1193 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38);

#line 1149 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_2,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);

#line 1078 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);

#line 1024 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
#line 1024 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
#line 1024 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
#line 1024 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
#line 1024 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
#line 1024 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
#line 1024 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12);

#line 963 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_9,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_10,
#line 963 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_11,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_12,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_13,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_14,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28);

#line 943 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
#line 943 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 943 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
#line 943 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
#line 943 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 943 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);

#line 936 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
#line 936 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 936 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 936 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 936 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3,
#line 936 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_4);

#line 931 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
#line 931 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 931 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgList_7,
#line 931 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInputs_8,
#line 931 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11,
#line 931 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12);

#line 865 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
#line 865 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 865 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_2,
#line 865 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 865 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4);

#line 816 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
#line 816 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 816 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_2,
#line 816 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 816 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4);

#line 784 "ml_foreign_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_f_0(
#line 784 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 784 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 768 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
#line 768 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_3,
#line 768 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_4);

#line 746 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
#line 746 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 747 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
#line 747 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 746 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
#line 746 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 746 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
#line 746 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg);

#line 737 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
#line 737 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__C_Codes_7,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_9,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashUndef_10,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);

#line 713 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
#line 713 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_6,
#line 713 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_7,
#line 713 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_8,
#line 713 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ObtainLock_9,
#line 713 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ReleaseLock_10);

#line 486 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_p_0(
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_10,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_11,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgMap_12,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__VarSet_13,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_14,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ByRefOutputVars_15,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__CopiedOutputVars_16,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_17,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Defn_18);

#line 450 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_p_0(
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_9,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_10,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgMap_11,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__VarSet_12,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_13,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__IsByRef_14,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_15,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statement_16);

#line 441 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__build_arg_map_3_p_0(
#line 441 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 441 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_0_2,
#line 441 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_3);

#line 334 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_p_0(
#line 334 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 334 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 334 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_3,
#line 334 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4);

#line 72 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
#line 72 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
#line 72 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
#line 72 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 72 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);


static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_1[39][2];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[3][1];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_3[1][8];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_4[2][5];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_5[1][11];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_6[1][3];

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_7[1][12];




static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_1[39][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) " = false;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) " = SUCCESS_INDICATOR;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "{\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "\t}\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "\n\t\t;}\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "}\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) " = MR_FALSE;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "\tMR_bool SUCCESS_INDICATOR;\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "\tif (SUCCESS_INDICATOR) {\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17])))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "#undef MR_ALLOC_ID\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) ");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[29]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(2), &ml_backend__ml_foreign_proc_gen_scalar_common_2[0])))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "\");\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "#define MR_ALLOC_ID ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) ((MR_String) "#define MR_PROC_LABEL ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 35 */
  {
    ((MR_Box) ((MR_String) "\t")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "SUCCESS_INDICATOR")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "\t\t{\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "#undef MR_PROC_LABEL\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
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

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_5[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_6[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_foreign_proc_gen_scalar_common_7[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__ml_foreign_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1116 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_target_code_component_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0
  }
};

#line 1124 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 1132 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1140 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_foreign_proc_gen__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__hlds_goal__type_ctor_info_foreign_arg_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_foreign_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0
  }
};

#line 1149 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1157 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1165 "ml_backend.ml_foreign_proc_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_foreign_proc_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_foreign_proc_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1173 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0 = {
  (MR_String) "mutable_special_case",
  (MR_Integer) 0
};

#line 1179 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1 = {
  (MR_String) "not_mutable_special_case",
  (MR_Integer) 1
};

#line 1185 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0[2] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

#line 1191 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0[2] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_mutable_special_case_0_1
};

#line 1197 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1203 "ml_backend.ml_foreign_proc_gen.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_mutable_special_case_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001)),
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001)),
  (MR_String) "ml_backend.ml_foreign_proc_gen",
  (MR_String) "mutable_special_case",
  {
    ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_mutable_special_case_0
  },
  {
    ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_mutable_special_case_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_mutable_special_case_0
};

#line 1224 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0 = {
  (MR_String) "kind_det",
  (MR_Integer) 0
};

#line 1230 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1 = {
  (MR_String) "kind_semi",
  (MR_Integer) 1
};

#line 1236 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2 = {
  (MR_String) "kind_failure",
  (MR_Integer) 2
};

#line 1242 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2
};

#line 1249 "ml_backend.ml_foreign_proc_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0[3] = {
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_0,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_2,
  &ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_functor_desc_ordinary_pragma_kind_0_1
};

#line 1256 "ml_backend.ml_foreign_proc_gen.c"
static const MR_Integer ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 1263 "ml_backend.ml_foreign_proc_gen.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__type_ctor_info_ordinary_pragma_kind_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001)),
  ((MR_Box) (ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001)),
  (MR_String) "ml_backend.ml_foreign_proc_gen",
  (MR_String) "ordinary_pragma_kind",
  {
    ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_name_ordered_ordinary_pragma_kind_0
  },
  {
    ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__enum_value_ordered_ordinary_pragma_kind_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  ml_backend__ml_foreign_proc_gen__ml_backend__ml_foreign_proc_gen__functor_number_map_ordinary_pragma_kind_0
};

#line 1284 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0_10001(
#line 1287 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 1289 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 1291 "ml_backend.ml_foreign_proc_gen.c"
{
#line 1293 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 1295 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 1298 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1300 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2));
    }
#line 1303 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 1305 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1307 "ml_backend.ml_foreign_proc_gen.c"
}

#line 1310 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0_10001(
#line 1313 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 1315 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 1317 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3)
#line 1319 "ml_backend.ml_foreign_proc_gen.c"
{
#line 1321 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 1323 "ml_backend.ml_foreign_proc_gen.c"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1;

#line 1326 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1328 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(&ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3));
    }
#line 1331 "ml_backend.ml_foreign_proc_gen.c"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1));
#line 1333 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1335 "ml_backend.ml_foreign_proc_gen.c"
}

#line 1338 "ml_backend.ml_foreign_proc_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0_10001(
#line 1341 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 1343 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 1345 "ml_backend.ml_foreign_proc_gen.c"
{
#line 1347 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 1349 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 1352 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1354 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2));
    }
#line 1357 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 1359 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1361 "ml_backend.ml_foreign_proc_gen.c"
}

#line 1364 "ml_backend.ml_foreign_proc_gen.c"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0_10001(
#line 1367 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 1369 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 1371 "ml_backend.ml_foreign_proc_gen.c"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3)
#line 1373 "ml_backend.ml_foreign_proc_gen.c"
{
#line 1375 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 1377 "ml_backend.ml_foreign_proc_gen.c"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1;

#line 1380 "ml_backend.ml_foreign_proc_gen.c"
    {
#line 1382 "ml_backend.ml_foreign_proc_gen.c"
      ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(&ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3));
    }
#line 1385 "ml_backend.ml_foreign_proc_gen.c"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_HeadVar__1_1));
#line 1387 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 1389 "ml_backend.ml_foreign_proc_gen.c"
}

#line 592 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigArgs_17,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 592 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__C_Code_19,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44,
#line 592 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45)
#line 592 "ml_foreign_proc_gen.m"
{
#line 599 "ml_foreign_proc_gen.m"
  {
#line 599 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Args_25;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_26;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_27;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_28;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements_30;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_31;
#line 599 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ObtainLock_32;
#line 599 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ReleaseLock_33;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_37;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_38;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_48_48;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_223_223;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_224_224;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_225_225;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_226_226;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_227_227;
#line 599 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_228_228;

#line 600 "ml_foreign_proc_gen.m"
    {
#line 600 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 603 "ml_foreign_proc_gen.m"
    {
#line 603 "ml_foreign_proc_gen.m"
      mercury__list__append_3_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ml_backend__ml_foreign_proc_gen__OrigArgs_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, &ml_backend__ml_foreign_proc_gen__Args_25);
    }
#line 604 "ml_foreign_proc_gen.m"
    {
#line 604 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44, ml_backend__ml_foreign_proc_gen__Lang_24, ml_backend__ml_foreign_proc_gen__Args_25, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_26);
    }
#line 607 "ml_foreign_proc_gen.m"
    {
#line 607 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_24, ml_backend__ml_foreign_proc_gen__Args_25, &ml_backend__ml_foreign_proc_gen__AssignInputsList_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_44, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46);
    }
#line 610 "ml_foreign_proc_gen.m"
    {
#line 610 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__Args_25, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_28, ml_backend__ml_foreign_proc_gen__Decls_21, &ml_backend__ml_foreign_proc_gen__ConvStatements_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_46_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47);
    }
#line 614 "ml_foreign_proc_gen.m"
    {
#line 614 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ThreadSafe_31 = parse_tree__prog_data__get_thread_safe_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 615 "ml_foreign_proc_gen.m"
    {
#line 615 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__ThreadSafe_31, ml_backend__ml_foreign_proc_gen__PredId_15, &ml_backend__ml_foreign_proc_gen__ObtainLock_32, &ml_backend__ml_foreign_proc_gen__ReleaseLock_33);
    }
#line 619 "ml_foreign_proc_gen.m"
    {
#line 619 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_48_48, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 619 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_48_48, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "ml_foreign_proc_gen.m"
    }
#line 619 "ml_foreign_proc_gen.m"
    {
#line 619 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(ml_backend__ml_foreign_proc_gen__V_48_48, ml_backend__ml_foreign_proc_gen__Context_20, &ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34, &ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47_47, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45);
    }
#line 623 "ml_foreign_proc_gen.m"
    {
#line 623 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36);
    }
#line 645 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__OrdinaryKind_13 == (MR_Integer) 0))
#line 627 "ml_foreign_proc_gen.m"
      {
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_172_172;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_178_178;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_179_179;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_180_180;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_181_181;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_187_187;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_188_188;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_189_189;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_190_190;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_192_192;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_196_196;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_197_197;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_198_198;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_205_205;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_206_206;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_207_207;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_211_211;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_212_212;
#line 627 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_215_215;

#line 635 "ml_foreign_proc_gen.m"
        {
#line 635 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_190_190 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_190_190, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 635 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_190_190, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 635 "ml_foreign_proc_gen.m"
        }
#line 637 "ml_foreign_proc_gen.m"
        {
#line 637 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 637 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_198_198, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 637 "ml_foreign_proc_gen.m"
        }
#line 637 "ml_foreign_proc_gen.m"
        {
#line 637 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 637 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_197_197, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 637 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_197_197, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_198_198));
#line 637 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_197_197, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 637 "ml_foreign_proc_gen.m"
        }
#line 637 "ml_foreign_proc_gen.m"
        {
#line 637 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 637 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_196_196, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_197_197));
#line 637 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_196_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15])));
#line 637 "ml_foreign_proc_gen.m"
        }
#line 636 "ml_foreign_proc_gen.m"
        {
#line 636 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_192_192, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[37])));
#line 636 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_192_192, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_196_196));
#line 636 "ml_foreign_proc_gen.m"
        }
#line 635 "ml_foreign_proc_gen.m"
        {
#line 635 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 635 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_189_189, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_190_190));
#line 635 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_189_189, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_192_192));
#line 635 "ml_foreign_proc_gen.m"
        }
#line 641 "ml_foreign_proc_gen.m"
        {
#line 641 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_212_212 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_212_212, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 641 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_212_212, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "ml_foreign_proc_gen.m"
        }
#line 641 "ml_foreign_proc_gen.m"
        {
#line 641 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_211_211 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_211_211, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_212_212));
#line 641 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_211_211, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 641 "ml_foreign_proc_gen.m"
        }
#line 640 "ml_foreign_proc_gen.m"
        {
#line 640 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_207_207 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 640 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_207_207, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[38])));
#line 640 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_207_207, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_211_211));
#line 640 "ml_foreign_proc_gen.m"
        }
#line 643 "ml_foreign_proc_gen.m"
        {
#line 643 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_215_215 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 643 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_215_215, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
#line 643 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_215_215, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "ml_foreign_proc_gen.m"
        }
#line 641 "ml_foreign_proc_gen.m"
        {
#line 641 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_206_206 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 641 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_206_206, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_207_207));
#line 641 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_206_206, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_215_215));
#line 641 "ml_foreign_proc_gen.m"
        }
#line 639 "ml_foreign_proc_gen.m"
        {
#line 639 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_205_205 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 639 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_205_205, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 639 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_205_205, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_206_206));
#line 639 "ml_foreign_proc_gen.m"
        }
#line 638 "ml_foreign_proc_gen.m"
        {
#line 638 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_188_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_188_188, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_189_189));
#line 638 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_188_188, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_205_205));
#line 638 "ml_foreign_proc_gen.m"
        }
#line 634 "ml_foreign_proc_gen.m"
        {
#line 634 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_187_187 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_187_187, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 634 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_187_187, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_188_188));
#line 634 "ml_foreign_proc_gen.m"
        }
#line 633 "ml_foreign_proc_gen.m"
        {
#line 633 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_181_181 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_181_181, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
#line 633 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_181_181, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_187_187));
#line 633 "ml_foreign_proc_gen.m"
        }
#line 632 "ml_foreign_proc_gen.m"
        {
#line 632 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 632 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_180_180, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 632 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_180_180, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_181_181));
#line 632 "ml_foreign_proc_gen.m"
        }
#line 631 "ml_foreign_proc_gen.m"
        {
#line 631 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_179_179, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 631 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_179_179, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_180_180));
#line 631 "ml_foreign_proc_gen.m"
        }
#line 630 "ml_foreign_proc_gen.m"
        {
#line 630 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_178_178 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_178_178, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 630 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_178_178, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_179_179));
#line 630 "ml_foreign_proc_gen.m"
        }
#line 629 "ml_foreign_proc_gen.m"
        {
#line 629 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 629 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_172_172, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
#line 629 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_172_172, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_178_178));
#line 629 "ml_foreign_proc_gen.m"
        }
#line 628 "ml_foreign_proc_gen.m"
        {
#line 628 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_172_172);
        }
#line 644 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[17]);
#line 627 "ml_foreign_proc_gen.m"
      }
#line 645 "ml_foreign_proc_gen.m"
    else
#line 645 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__OrdinaryKind_13 == (MR_Integer) 2))
#line 646 "ml_foreign_proc_gen.m"
        {
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_39;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_118_118;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_124_124;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_125_125;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_126_126;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_127_127;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_133_133;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_134_134;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_135_135;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_136_136;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_138_138;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_142_142;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_143_143;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_144_144;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_151_151;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_152_152;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_153_153;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_157_157;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_158_158;
#line 646 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_162_162;

#line 651 "ml_foreign_proc_gen.m"
          {
#line 651 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__SucceededLval_39);
          }
#line 659 "ml_foreign_proc_gen.m"
          {
#line 659 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_136_136, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 659 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_136_136, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "ml_foreign_proc_gen.m"
          }
#line 661 "ml_foreign_proc_gen.m"
          {
#line 661 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_144_144 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 661 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_144_144, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 661 "ml_foreign_proc_gen.m"
          }
#line 661 "ml_foreign_proc_gen.m"
          {
#line 661 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 661 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_143_143, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 661 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_143_143, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_144_144));
#line 661 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_143_143, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "ml_foreign_proc_gen.m"
          }
#line 661 "ml_foreign_proc_gen.m"
          {
#line 661 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_142_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_142_142, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_143_143));
#line 661 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_142_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15])));
#line 661 "ml_foreign_proc_gen.m"
          }
#line 660 "ml_foreign_proc_gen.m"
          {
#line 660 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_138_138, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[37])));
#line 660 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_138_138, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_142_142));
#line 660 "ml_foreign_proc_gen.m"
          }
#line 659 "ml_foreign_proc_gen.m"
          {
#line 659 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_135_135, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_136_136));
#line 659 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_135_135, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_138_138));
#line 659 "ml_foreign_proc_gen.m"
          }
#line 665 "ml_foreign_proc_gen.m"
          {
#line 665 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_158_158 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_158_158, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 665 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_158_158, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "ml_foreign_proc_gen.m"
          }
#line 665 "ml_foreign_proc_gen.m"
          {
#line 665 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_157_157 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_157_157, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_158_158));
#line 665 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_157_157, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "ml_foreign_proc_gen.m"
          }
#line 664 "ml_foreign_proc_gen.m"
          {
#line 664 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_153_153 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 664 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_153_153, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[38])));
#line 664 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_153_153, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_157_157));
#line 664 "ml_foreign_proc_gen.m"
          }
#line 666 "ml_foreign_proc_gen.m"
          {
#line 666 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_152_152 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_152_152, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_153_153));
#line 666 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_152_152, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "ml_foreign_proc_gen.m"
          }
#line 663 "ml_foreign_proc_gen.m"
          {
#line 663 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_151_151 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_151_151, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 663 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_151_151, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_152_152));
#line 663 "ml_foreign_proc_gen.m"
          }
#line 662 "ml_foreign_proc_gen.m"
          {
#line 662 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 662 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_134_134, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_135_135));
#line 662 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_134_134, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_151_151));
#line 662 "ml_foreign_proc_gen.m"
          }
#line 658 "ml_foreign_proc_gen.m"
          {
#line 658 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_133_133, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 658 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_133_133, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_134_134));
#line 658 "ml_foreign_proc_gen.m"
          }
#line 657 "ml_foreign_proc_gen.m"
          {
#line 657 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_127_127, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
#line 657 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_127_127, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_133_133));
#line 657 "ml_foreign_proc_gen.m"
          }
#line 656 "ml_foreign_proc_gen.m"
          {
#line 656 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_126_126, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 656 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_126_126, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_127_127));
#line 656 "ml_foreign_proc_gen.m"
          }
#line 655 "ml_foreign_proc_gen.m"
          {
#line 655 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_125_125, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 655 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_125_125, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_126_126));
#line 655 "ml_foreign_proc_gen.m"
          }
#line 654 "ml_foreign_proc_gen.m"
          {
#line 654 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_124_124, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 654 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_124_124, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_125_125));
#line 654 "ml_foreign_proc_gen.m"
          }
#line 653 "ml_foreign_proc_gen.m"
          {
#line 653 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_118_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 653 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_118_118, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
#line 653 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_118_118, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_124_124));
#line 653 "ml_foreign_proc_gen.m"
          }
#line 652 "ml_foreign_proc_gen.m"
          {
#line 652 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_118_118);
          }
#line 668 "ml_foreign_proc_gen.m"
          {
#line 668 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_162_162 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_162_162, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 668 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_162_162, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_39));
#line 668 "ml_foreign_proc_gen.m"
          }
#line 668 "ml_foreign_proc_gen.m"
          {
#line 668 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_162_162));
#line 668 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[19])));
#line 668 "ml_foreign_proc_gen.m"
          }
#line 646 "ml_foreign_proc_gen.m"
        }
#line 645 "ml_foreign_proc_gen.m"
      else
#line 673 "ml_foreign_proc_gen.m"
        {
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_57_57;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_60_60;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_70_70;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_71_71;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_75_75;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_79_79;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_80_80;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_81_81;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_88_88;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_89_89;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_90_90;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_94_94;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_95_95;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_102_102;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_107_107;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_108_108;
#line 673 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_230;

#line 674 "ml_foreign_proc_gen.m"
          {
#line 674 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_45, &ml_backend__ml_foreign_proc_gen__SucceededLval_230);
          }
#line 683 "ml_foreign_proc_gen.m"
          {
#line 683 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_73_73, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ObtainLock_32));
#line 683 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_73_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "ml_foreign_proc_gen.m"
          }
#line 685 "ml_foreign_proc_gen.m"
          {
#line 685 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 685 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_81_81, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 685 "ml_foreign_proc_gen.m"
          }
#line 685 "ml_foreign_proc_gen.m"
          {
#line 685 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 685 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_80_80, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__C_Code_19));
#line 685 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_80_80, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_81_81));
#line 685 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_80_80, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 685 "ml_foreign_proc_gen.m"
          }
#line 685 "ml_foreign_proc_gen.m"
          {
#line 685 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_79_79, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_80_80));
#line 685 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_79_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[15])));
#line 685 "ml_foreign_proc_gen.m"
          }
#line 684 "ml_foreign_proc_gen.m"
          {
#line 684 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_75_75, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[37])));
#line 684 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_75_75, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_79_79));
#line 684 "ml_foreign_proc_gen.m"
          }
#line 683 "ml_foreign_proc_gen.m"
          {
#line 683 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 683 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
#line 683 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_75_75));
#line 683 "ml_foreign_proc_gen.m"
          }
#line 689 "ml_foreign_proc_gen.m"
          {
#line 689 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_95_95, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ReleaseLock_33));
#line 689 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 689 "ml_foreign_proc_gen.m"
          }
#line 689 "ml_foreign_proc_gen.m"
          {
#line 689 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_94_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 689 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_94_94, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_95_95));
#line 689 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_94_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[23])));
#line 689 "ml_foreign_proc_gen.m"
          }
#line 688 "ml_foreign_proc_gen.m"
          {
#line 688 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 688 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_90_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[38])));
#line 688 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_90_90, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_94_94));
#line 688 "ml_foreign_proc_gen.m"
          }
#line 692 "ml_foreign_proc_gen.m"
          {
#line 692 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_102_102 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 692 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_102_102, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_28));
#line 692 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_102_102, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "ml_foreign_proc_gen.m"
          }
#line 690 "ml_foreign_proc_gen.m"
          {
#line 690 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 690 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_89_89, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_90_90));
#line 690 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_89_89, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_102_102));
#line 690 "ml_foreign_proc_gen.m"
          }
#line 687 "ml_foreign_proc_gen.m"
          {
#line 687 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 687 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_88_88, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashUndefAllocId_35));
#line 687 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_88_88, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_89_89));
#line 687 "ml_foreign_proc_gen.m"
          }
#line 686 "ml_foreign_proc_gen.m"
          {
#line 686 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
#line 686 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_88_88));
#line 686 "ml_foreign_proc_gen.m"
          }
#line 682 "ml_foreign_proc_gen.m"
          {
#line 682 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_70_70, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_27));
#line 682 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_70_70, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_71_71));
#line 682 "ml_foreign_proc_gen.m"
          }
#line 681 "ml_foreign_proc_gen.m"
          {
#line 681 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 681 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_60_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[21])));
#line 681 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_60_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_70_70));
#line 681 "ml_foreign_proc_gen.m"
          }
#line 679 "ml_foreign_proc_gen.m"
          {
#line 679 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 679 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_26));
#line 679 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_60_60));
#line 679 "ml_foreign_proc_gen.m"
          }
#line 678 "ml_foreign_proc_gen.m"
          {
#line 678 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 678 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineProcLabel_36));
#line 678 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_58_58, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 678 "ml_foreign_proc_gen.m"
          }
#line 677 "ml_foreign_proc_gen.m"
          {
#line 677 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__HashDefineAllocId_34));
#line 677 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
#line 677 "ml_foreign_proc_gen.m"
          }
#line 676 "ml_foreign_proc_gen.m"
          {
#line 676 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 676 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
#line 676 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_51_51, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_57_57));
#line 676 "ml_foreign_proc_gen.m"
          }
#line 675 "ml_foreign_proc_gen.m"
          {
#line 675 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Starting_C_Code_37 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__V_51_51);
          }
#line 695 "ml_foreign_proc_gen.m"
          {
#line 695 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 695 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_108_108, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_230));
#line 695 "ml_foreign_proc_gen.m"
          }
#line 695 "ml_foreign_proc_gen.m"
          {
#line 695 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 695 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_107_107, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_108_108));
#line 695 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[24])));
#line 695 "ml_foreign_proc_gen.m"
          }
#line 694 "ml_foreign_proc_gen.m"
          {
#line 694 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Ending_C_Code_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 694 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[9])));
#line 694 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Ending_C_Code_38, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_107_107));
#line 694 "ml_foreign_proc_gen.m"
          }
#line 673 "ml_foreign_proc_gen.m"
        }
#line 700 "ml_foreign_proc_gen.m"
    {
#line 700 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 700 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 700 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 1) = ((MR_Box) ((MR_Integer) 0));
#line 700 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_37));
#line 700 "ml_foreign_proc_gen.m"
    }
#line 701 "ml_foreign_proc_gen.m"
    {
#line 701 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 701 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 701 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 1) = ((MR_Box) ((MR_Integer) 0));
#line 701 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_38));
#line 701 "ml_foreign_proc_gen.m"
    }
#line 703 "ml_foreign_proc_gen.m"
    {
#line 703 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_223_223 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 703 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_223_223, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 703 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_223_223, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_Stmt_40));
#line 703 "ml_foreign_proc_gen.m"
    }
#line 703 "ml_foreign_proc_gen.m"
    {
#line 703 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_224_224 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 702 "ml_foreign_proc_gen.m"
    {
#line 702 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_223_223));
#line 702 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_224_224));
#line 702 "ml_foreign_proc_gen.m"
    }
#line 704 "ml_foreign_proc_gen.m"
    {
#line 704 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_225_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_225_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 704 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_225_225, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_Stmt_41));
#line 704 "ml_foreign_proc_gen.m"
    }
#line 705 "ml_foreign_proc_gen.m"
    {
#line 705 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_226_226 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 704 "ml_foreign_proc_gen.m"
    {
#line 704 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_225_225));
#line 704 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_226_226));
#line 704 "ml_foreign_proc_gen.m"
    }
#line 706 "ml_foreign_proc_gen.m"
    {
#line 706 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_227_227 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_227_227, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_C_Code_Statement_42));
#line 706 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_227_227, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStatements_30));
#line 706 "ml_foreign_proc_gen.m"
    }
#line 707 "ml_foreign_proc_gen.m"
    {
#line 707 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_228_228 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_228_228, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_C_Code_Statement_43));
#line 707 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_228_228, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "ml_foreign_proc_gen.m"
    }
#line 706 "ml_foreign_proc_gen.m"
    {
#line 706 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_22 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__V_227_227, ml_backend__ml_foreign_proc_gen__V_228_228);
    }
#line 599 "ml_foreign_proc_gen.m"
  }
#line 592 "ml_foreign_proc_gen.m"
}

#line 423 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_5(
#line 423 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 423 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 423 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 423 "ml_foreign_proc_gen.m"
{
#line 423 "ml_foreign_proc_gen.m"
  {
#line 423 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;
#line 423 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv3_Defn_18;

#line 423 "ml_foreign_proc_gen.m"
    {
#line 423 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 9))), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), &ml_backend__ml_foreign_proc_gen__conv3_Defn_18);
    }
#line 423 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv3_Defn_18));
#line 423 "ml_foreign_proc_gen.m"
  }
#line 423 "ml_foreign_proc_gen.m"
}

#line 419 "ml_foreign_proc_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_4(
#line 419 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 419 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1)
#line 419 "ml_foreign_proc_gen.m"
{
#line 419 "ml_foreign_proc_gen.m"
  {
#line 419 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_2;
#line 419 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;
#line 419 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv2_HeadVar__2_2;

#line 419 "ml_foreign_proc_gen.m"
    {
#line 419 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__conv2_HeadVar__2_2 = hlds__hlds_goal__foreign_arg_var_1_f_0(((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1));
    }
#line 419 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv2_HeadVar__2_2));
#line 419 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__wrapper_arg_2;
#line 419 "ml_foreign_proc_gen.m"
  }
#line 419 "ml_foreign_proc_gen.m"
}

#line 415 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_3(
#line 415 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 415 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 415 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 415 "ml_foreign_proc_gen.m"
{
#line 415 "ml_foreign_proc_gen.m"
  {
#line 415 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 415 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;
#line 415 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv1_Statement_16;

#line 415 "ml_foreign_proc_gen.m"
    {
#line 415 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 8))), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), &ml_backend__ml_foreign_proc_gen__conv1_Statement_16);
    }
#line 415 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 415 "ml_foreign_proc_gen.m"
      {
#line 415 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv1_Statement_16));
#line 415 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 415 "ml_foreign_proc_gen.m"
      }
#line 415 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 415 "ml_foreign_proc_gen.m"
  }
#line 415 "ml_foreign_proc_gen.m"
}

#line 410 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_2(
#line 410 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 410 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 410 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2)
#line 410 "ml_foreign_proc_gen.m"
{
#line 410 "ml_foreign_proc_gen.m"
  {
#line 410 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 410 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;
#line 410 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_Statement_16;

#line 410 "ml_foreign_proc_gen.m"
    {
#line 410 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 8))), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), &ml_backend__ml_foreign_proc_gen__conv0_Statement_16);
    }
#line 410 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 410 "ml_foreign_proc_gen.m"
      {
#line 410 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_Statement_16));
#line 410 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 410 "ml_foreign_proc_gen.m"
      }
#line 410 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 410 "ml_foreign_proc_gen.m"
  }
#line 410 "ml_foreign_proc_gen.m"
}

#line 378 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_1(
#line 378 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg)
#line 378 "ml_foreign_proc_gen.m"
{
#line 378 "ml_foreign_proc_gen.m"
  {
#line 378 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 378 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;

#line 378 "ml_foreign_proc_gen.m"
    {
#line 378 "ml_foreign_proc_gen.m"
      return ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__378__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))));
    }
#line 378 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 378 "ml_foreign_proc_gen.m"
  }
#line 378 "ml_foreign_proc_gen.m"
}

#line 370 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0(
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_15,
#line 370 "ml_foreign_proc_gen.m"
  MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_16,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 370 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_42,
#line 370 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_43)
#line 370 "ml_foreign_proc_gen.m"
{
#line 377 "ml_foreign_proc_gen.m"
  {
#line 377 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__TypeInfo_70_70;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_71_71;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_74_74;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_24;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_25;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ProcInfo_27;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarSet_28;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ByRefOutputVars_29;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__CopiedOutputVars_30;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleName_31;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_32;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgMap_33;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ByRefAssignStatements_34;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__CopiedOutputStatements_35;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgVars_36;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarLocals_37;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OutlineStmt_38;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ILCodeFragment_39;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__BlockStatements_40;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__BlockStatement_41;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_44_44;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_50_50;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_52_52;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_55_55;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_57_57;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_58_58;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_60_60;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_64_64;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_65_65;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_66_66;
#line 377 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_67_67;
#line 388 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen___PredInfo_26;

#line 378 "ml_foreign_proc_gen.m"
    {
#line 378 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 378 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
#line 378 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_1));
#line 378 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 378 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_18));
#line 378 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "ml_foreign_proc_gen.m"
    }
#line 378 "ml_foreign_proc_gen.m"
    {
#line 378 "ml_foreign_proc_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_foreign_proc_gen__V_44_44, (MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_il_proc\'/12", (MR_String) "extra args");
    }
#line 385 "ml_foreign_proc_gen.m"
    {
#line 385 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MLDSContext_24 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 387 "ml_foreign_proc_gen.m"
    {
#line 387 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_foreign_proc_gen__ModuleInfo_25);
    }
#line 388 "ml_foreign_proc_gen.m"
    {
#line 388 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_25, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__ProcId_16, &ml_backend__ml_foreign_proc_gen___PredInfo_26, &ml_backend__ml_foreign_proc_gen__ProcInfo_27);
    }
#line 390 "ml_foreign_proc_gen.m"
    {
#line 390 "ml_foreign_proc_gen.m"
      hlds__hlds_pred__proc_info_get_varset_2_p_0(ml_backend__ml_foreign_proc_gen__ProcInfo_27, &ml_backend__ml_foreign_proc_gen__VarSet_28);
    }
#line 394 "ml_foreign_proc_gen.m"
    {
#line 394 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_byref_output_vars_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_foreign_proc_gen__ByRefOutputVars_29);
    }
#line 395 "ml_foreign_proc_gen.m"
    {
#line 395 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_42, &ml_backend__ml_foreign_proc_gen__CopiedOutputVars_30);
    }
#line 396 "ml_foreign_proc_gen.m"
    {
#line 396 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_25, &ml_backend__ml_foreign_proc_gen__ModuleName_31);
    }
#line 397 "ml_foreign_proc_gen.m"
    {
#line 397 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MLDSModuleName_32 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_foreign_proc_gen__ModuleName_31);
    }
#line 2754 "ml_backend.ml_foreign_proc_gen.c"
    ml_backend__ml_foreign_proc_gen__TypeInfo_70_70 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1];
#line 2756 "ml_backend.ml_foreign_proc_gen.c"
    ml_backend__ml_foreign_proc_gen__TypeCtorInfo_71_71 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0;
#line 407 "ml_foreign_proc_gen.m"
    {
#line 407 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_49_49 = mercury__map__init_0_f_0(ml_backend__ml_foreign_proc_gen__TypeInfo_70_70, ml_backend__ml_foreign_proc_gen__TypeCtorInfo_71_71);
    }
#line 407 "ml_foreign_proc_gen.m"
    {
#line 407 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__build_arg_map_3_p_0(ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__V_49_49, &ml_backend__ml_foreign_proc_gen__ArgMap_33);
    }
#line 410 "ml_foreign_proc_gen.m"
    {
#line 410 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_5[0]));
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_2));
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ModuleInfo_25));
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 4) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_32));
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 5) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgMap_33));
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 6) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarSet_28));
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 7) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 410 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_50_50, 8) = ((MR_Box) ((MR_Integer) 1));
#line 410 "ml_foreign_proc_gen.m"
    }
#line 2792 "ml_backend.ml_foreign_proc_gen.c"
    ml_backend__ml_foreign_proc_gen__TypeCtorInfo_74_74 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 410 "ml_foreign_proc_gen.m"
    {
#line 410 "ml_foreign_proc_gen.m"
      mercury__list__filter_map_3_p_0(ml_backend__ml_foreign_proc_gen__TypeInfo_70_70, ml_backend__ml_foreign_proc_gen__TypeCtorInfo_74_74, ml_backend__ml_foreign_proc_gen__V_50_50, ml_backend__ml_foreign_proc_gen__ByRefOutputVars_29, &ml_backend__ml_foreign_proc_gen__ByRefAssignStatements_34);
    }
#line 415 "ml_foreign_proc_gen.m"
    {
#line 415 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_5[0]));
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_3));
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ModuleInfo_25));
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 4) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_32));
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 5) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgMap_33));
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 6) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarSet_28));
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 7) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 415 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_52_52, 8) = ((MR_Box) ((MR_Integer) 0));
#line 415 "ml_foreign_proc_gen.m"
    }
#line 415 "ml_foreign_proc_gen.m"
    {
#line 415 "ml_foreign_proc_gen.m"
      mercury__list__filter_map_3_p_0(ml_backend__ml_foreign_proc_gen__TypeInfo_70_70, ml_backend__ml_foreign_proc_gen__TypeCtorInfo_74_74, ml_backend__ml_foreign_proc_gen__V_52_52, ml_backend__ml_foreign_proc_gen__CopiedOutputVars_30, &ml_backend__ml_foreign_proc_gen__CopiedOutputStatements_35);
    }
#line 419 "ml_foreign_proc_gen.m"
    {
#line 419 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ArgVars_36 = mercury__list__map_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_71_71, ml_backend__ml_foreign_proc_gen__TypeInfo_70_70, (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_6[0], ml_backend__ml_foreign_proc_gen__Args_17);
    }
#line 423 "ml_foreign_proc_gen.m"
    {
#line 423 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_55_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_7[0]));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0_5));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ModuleInfo_25));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 4) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_32));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 5) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgMap_33));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 6) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarSet_28));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 7) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSContext_24));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 8) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ByRefOutputVars_29));
#line 423 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_55_55, 9) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__CopiedOutputVars_30));
#line 423 "ml_foreign_proc_gen.m"
    }
#line 422 "ml_foreign_proc_gen.m"
    {
#line 422 "ml_foreign_proc_gen.m"
      mercury__list__map_3_p_0(ml_backend__ml_foreign_proc_gen__TypeInfo_70_70, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__V_55_55, ml_backend__ml_foreign_proc_gen__ArgVars_36, &ml_backend__ml_foreign_proc_gen__VarLocals_37);
    }
#line 428 "ml_foreign_proc_gen.m"
    {
#line 428 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 428 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_20));
#line 428 "ml_foreign_proc_gen.m"
    }
#line 430 "ml_foreign_proc_gen.m"
    {
#line 430 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_62_62 = parse_tree__prog_data__get_extra_attributes_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 429 "ml_foreign_proc_gen.m"
    {
#line 429 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_60_60 = ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_f_0((MR_Integer) 3, ml_backend__ml_foreign_proc_gen__V_62_62);
    }
#line 428 "ml_foreign_proc_gen.m"
    {
#line 428 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 428 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ForeignCode_19));
#line 428 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_58_58, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 428 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_58_58, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_60_60));
#line 428 "ml_foreign_proc_gen.m"
    }
#line 431 "ml_foreign_proc_gen.m"
    {
#line 431 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_58_58));
#line 431 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 431 "ml_foreign_proc_gen.m"
    }
#line 427 "ml_foreign_proc_gen.m"
    {
#line 427 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__OutlineStmt_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 427 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 427 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_38, 1) = ((MR_Box) ((MR_Integer) 2));
#line 427 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_38, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_57_57));
#line 427 "ml_foreign_proc_gen.m"
    }
#line 433 "ml_foreign_proc_gen.m"
    {
#line 433 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 433 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_64_64, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineStmt_38));
#line 433 "ml_foreign_proc_gen.m"
    }
#line 433 "ml_foreign_proc_gen.m"
    {
#line 433 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ILCodeFragment_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 433 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ILCodeFragment_39, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_64_64));
#line 433 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ILCodeFragment_39, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSContext_24));
#line 433 "ml_foreign_proc_gen.m"
    }
#line 434 "ml_foreign_proc_gen.m"
    {
#line 434 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_65_65, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ILCodeFragment_39));
#line 434 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_65_65, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ByRefAssignStatements_34));
#line 434 "ml_foreign_proc_gen.m"
    }
#line 434 "ml_foreign_proc_gen.m"
    {
#line 434 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__BlockStatements_40 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_74_74, ml_backend__ml_foreign_proc_gen__V_65_65, ml_backend__ml_foreign_proc_gen__CopiedOutputStatements_35);
    }
#line 436 "ml_foreign_proc_gen.m"
    {
#line 436 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_66_66, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLocals_37));
#line 436 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_66_66, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__BlockStatements_40));
#line 436 "ml_foreign_proc_gen.m"
    }
#line 437 "ml_foreign_proc_gen.m"
    {
#line 437 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_67_67 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 436 "ml_foreign_proc_gen.m"
    {
#line 436 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__BlockStatement_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 436 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__BlockStatement_41, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_66_66));
#line 436 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__BlockStatement_41, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_67_67));
#line 436 "ml_foreign_proc_gen.m"
    }
#line 438 "ml_foreign_proc_gen.m"
    {
#line 438 "ml_foreign_proc_gen.m"
      MR_Word base;
#line 438 "ml_foreign_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_22 = base;
#line 438 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__BlockStatement_41));
#line 438 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 438 "ml_foreign_proc_gen.m"
    }
#line 439 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_43 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_42;
#line 377 "ml_foreign_proc_gen.m"
  }
#line 370 "ml_foreign_proc_gen.m"
}

#line 292 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0_1(
#line 292 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg)
#line 292 "ml_foreign_proc_gen.m"
{
#line 292 "ml_foreign_proc_gen.m"
  {
#line 292 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 292 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;

#line 292 "ml_foreign_proc_gen.m"
    {
#line 292 "ml_foreign_proc_gen.m"
      return ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__292__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))));
    }
#line 292 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 292 "ml_foreign_proc_gen.m"
  }
#line 292 "ml_foreign_proc_gen.m"
}

#line 283 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0(
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_13,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_14,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_17,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 283 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ForeignCode_19,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_20,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_21,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_22,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41,
#line 283 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42)
#line 283 "ml_foreign_proc_gen.m"
{
#line 290 "ml_foreign_proc_gen.m"
  {
#line 290 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OutlineArgs_24;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ForeignLang_25;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_26;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OutputVars_27;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OutputVarLvals_28;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OutlineStmt_29;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_30;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleName_31;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_32;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_33;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OutlineStatement_40;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_44_44;
#line 290 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_63_63;

#line 291 "ml_foreign_proc_gen.m"
    {
#line 291 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_p_0(ml_backend__ml_foreign_proc_gen__Args_17, &ml_backend__ml_foreign_proc_gen__OutlineArgs_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_41, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42);
    }
#line 292 "ml_foreign_proc_gen.m"
    {
#line 292 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 292 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
#line 292 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0_1));
#line 292 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 292 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_18));
#line 292 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_44_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "ml_foreign_proc_gen.m"
    }
#line 292 "ml_foreign_proc_gen.m"
    {
#line 292 "ml_foreign_proc_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_foreign_proc_gen__V_44_44, (MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_managed_proc\'/12", (MR_String) "extra args");
    }
#line 294 "ml_foreign_proc_gen.m"
    {
#line 294 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ForeignLang_25 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 295 "ml_foreign_proc_gen.m"
    {
#line 295 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MLDSContext_26 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_20);
    }
#line 296 "ml_foreign_proc_gen.m"
    {
#line 296 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_value_output_vars_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_foreign_proc_gen__OutputVars_27);
    }
#line 297 "ml_foreign_proc_gen.m"
    {
#line 297 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_var_list_3_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42, ml_backend__ml_foreign_proc_gen__OutputVars_27, &ml_backend__ml_foreign_proc_gen__OutputVarLvals_28);
    }
#line 298 "ml_foreign_proc_gen.m"
    {
#line 298 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__OutlineStmt_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 298 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 298 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ForeignLang_25));
#line 298 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineArgs_24));
#line 298 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutputVarLvals_28));
#line 298 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutlineStmt_29, 4) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ForeignCode_19));
#line 298 "ml_foreign_proc_gen.m"
    }
#line 301 "ml_foreign_proc_gen.m"
    {
#line 301 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_foreign_proc_gen__ModuleInfo_30);
    }
#line 302 "ml_foreign_proc_gen.m"
    {
#line 302 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_30, &ml_backend__ml_foreign_proc_gen__ModuleName_31);
    }
#line 303 "ml_foreign_proc_gen.m"
    {
#line 303 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MLDSModuleName_32 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_foreign_proc_gen__ModuleName_31);
    }
#line 305 "ml_foreign_proc_gen.m"
    {
#line 305 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_42, &ml_backend__ml_foreign_proc_gen__SucceededLval_33);
    }
#line 310 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__OrdinaryKind_13 == (MR_Integer) 0))
#line 307 "ml_foreign_proc_gen.m"
      {
#line 308 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__Decls_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 309 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 307 "ml_foreign_proc_gen.m"
      }
#line 310 "ml_foreign_proc_gen.m"
    else
#line 310 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__OrdinaryKind_13 == (MR_Integer) 2))
#line 326 "ml_foreign_proc_gen.m"
        {
#line 327 "ml_foreign_proc_gen.m"
          {
#line 327 "ml_foreign_proc_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_managed_proc\'/12", (MR_String) "kind_failure not yet implemented");
#line 327 "ml_foreign_proc_gen.m"
            return;
          }
#line 326 "ml_foreign_proc_gen.m"
        }
#line 310 "ml_foreign_proc_gen.m"
      else
#line 311 "ml_foreign_proc_gen.m"
        {
#line 311 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SuccessIndicatorDecl_37;
#line 311 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38;
#line 311 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatement_39;
#line 311 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_57_57;
#line 311 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_60_60;

#line 315 "ml_foreign_proc_gen.m"
          {
#line 315 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__SuccessIndicatorDecl_37 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_4_f_0((MR_Word) MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_1[36]))), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__MLDSContext_26);
          }
#line 319 "ml_foreign_proc_gen.m"
          {
#line 319 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 319 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_57_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_32));
#line 319 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_57_57, 1) = ((MR_Box) ((MR_Integer) 0));
#line 319 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_57_57, 2) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_1[36]));
#line 319 "ml_foreign_proc_gen.m"
          }
#line 319 "ml_foreign_proc_gen.m"
          {
#line 319 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_57_57));
#line 319 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 319 "ml_foreign_proc_gen.m"
          }
#line 322 "ml_foreign_proc_gen.m"
          {
#line 322 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 322 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_60_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessIndicatorLval_38));
#line 322 "ml_foreign_proc_gen.m"
          }
#line 321 "ml_foreign_proc_gen.m"
          {
#line 321 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatement_39 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_foreign_proc_gen__SucceededLval_33, ml_backend__ml_foreign_proc_gen__V_60_60, ml_backend__ml_foreign_proc_gen__Context_20);
          }
#line 323 "ml_foreign_proc_gen.m"
          {
#line 323 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 323 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__Decls_21 = base;
#line 323 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessIndicatorDecl_37));
#line 323 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 323 "ml_foreign_proc_gen.m"
          }
#line 324 "ml_foreign_proc_gen.m"
          {
#line 324 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatement_39));
#line 324 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "ml_foreign_proc_gen.m"
          }
#line 311 "ml_foreign_proc_gen.m"
        }
#line 330 "ml_foreign_proc_gen.m"
    {
#line 330 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 330 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineStmt_29));
#line 330 "ml_foreign_proc_gen.m"
    }
#line 330 "ml_foreign_proc_gen.m"
    {
#line 330 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__OutlineStatement_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 330 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OutlineStatement_40, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_63_63));
#line 330 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OutlineStatement_40, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSContext_26));
#line 330 "ml_foreign_proc_gen.m"
    }
#line 331 "ml_foreign_proc_gen.m"
    {
#line 331 "ml_foreign_proc_gen.m"
      MR_Word base;
#line 331 "ml_foreign_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_22 = base;
#line 331 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineStatement_40));
#line 331 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessIndicatorStatements_35));
#line 331 "ml_foreign_proc_gen.m"
    }
#line 290 "ml_foreign_proc_gen.m"
  }
#line 283 "ml_foreign_proc_gen.m"
}

#line 204 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1(
#line 204 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg)
#line 204 "ml_foreign_proc_gen.m"
{
#line 204 "ml_foreign_proc_gen.m"
  {
#line 204 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 204 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;

#line 204 "ml_foreign_proc_gen.m"
    {
#line 204 "ml_foreign_proc_gen.m"
      return ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__204__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 4))));
    }
#line 204 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 204 "ml_foreign_proc_gen.m"
  }
#line 204 "ml_foreign_proc_gen.m"
}

#line 180 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0(
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__TargetLang_14,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_15,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Attributes_16,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_17,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Args_19,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 180 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__JavaCode_21,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_22,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Decls_23,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statements_24,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46,
#line 180 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47)
#line 180 "ml_foreign_proc_gen.m"
{
#line 189 "ml_foreign_proc_gen.m"
  {
#line 189 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_122_122;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_26;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_27;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_28;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Markers_29;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_30;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgDeclsList_31;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_32;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignOutputsList_33;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements_35;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__SucceededDecl_36;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignSucceeded_37;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_40;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_43;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_83_83;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_89_89;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_90_90;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_91_91;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_92_92;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_93_93;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_94_94;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_95_95;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_99_99;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_100_100;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_101_101;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_109_109;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_110_110;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_111_111;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_112_112;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_114_114;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_115_115;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_116_116;
#line 189 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_117_117;

#line 190 "ml_foreign_proc_gen.m"
    {
#line 190 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_26 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_16);
    }
#line 192 "ml_foreign_proc_gen.m"
    {
#line 192 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__ModuleInfo_27);
    }
#line 193 "ml_foreign_proc_gen.m"
    {
#line 193 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_27, ml_backend__ml_foreign_proc_gen__PredId_17, &ml_backend__ml_foreign_proc_gen__PredInfo_28);
    }
#line 194 "ml_foreign_proc_gen.m"
    {
#line 194 "ml_foreign_proc_gen.m"
      hlds__hlds_pred__pred_info_get_markers_2_p_0(ml_backend__ml_foreign_proc_gen__PredInfo_28, &ml_backend__ml_foreign_proc_gen__Markers_29);
    }
#line 195 "ml_foreign_proc_gen.m"
    {
#line 195 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = hlds__hlds_pred__check_marker_2_p_0(ml_backend__ml_foreign_proc_gen__Markers_29, (MR_Integer) 22);
    }
#line 197 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 196 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 0;
#line 197 "ml_foreign_proc_gen.m"
    else
#line 198 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MutableSpecial_30 = (MR_Integer) 1;
#line 202 "ml_foreign_proc_gen.m"
    {
#line 202 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__ArgDeclsList_31);
    }
#line 204 "ml_foreign_proc_gen.m"
    {
#line 204 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 204 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_4[0]));
#line 204 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0_1));
#line 204 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 204 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20));
#line 204 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_49_49, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 204 "ml_foreign_proc_gen.m"
    }
#line 204 "ml_foreign_proc_gen.m"
    {
#line 204 "ml_foreign_proc_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_foreign_proc_gen__V_49_49, (MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_csharp_java_proc\'/13", (MR_String) "extra args");
    }
#line 207 "ml_foreign_proc_gen.m"
    {
#line 207 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(ml_backend__ml_foreign_proc_gen__Lang_26, ml_backend__ml_foreign_proc_gen__Args_19, &ml_backend__ml_foreign_proc_gen__AssignInputsList_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_46, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54);
    }
#line 210 "ml_foreign_proc_gen.m"
    {
#line 210 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_30, ml_backend__ml_foreign_proc_gen__Args_19, ml_backend__ml_foreign_proc_gen__Context_22, &ml_backend__ml_foreign_proc_gen__AssignOutputsList_33, ml_backend__ml_foreign_proc_gen__Decls_23, &ml_backend__ml_foreign_proc_gen__ConvStatements_35, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_54_54, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47);
    }
#line 219 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__OrdinaryKind_15 == (MR_Integer) 0))
#line 216 "ml_foreign_proc_gen.m"
      {
#line 217 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 218 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 216 "ml_foreign_proc_gen.m"
      }
#line 219 "ml_foreign_proc_gen.m"
    else
#line 219 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__OrdinaryKind_15 == (MR_Integer) 2))
#line 237 "ml_foreign_proc_gen.m"
        {
#line 237 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 237 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_60_60;
#line 237 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_120;

#line 238 "ml_foreign_proc_gen.m"
          {
#line 238 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47, &ml_backend__ml_foreign_proc_gen__SucceededLval_120);
          }
#line 239 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 242 "ml_foreign_proc_gen.m"
          {
#line 242 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 242 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_60_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_120));
#line 242 "ml_foreign_proc_gen.m"
          }
#line 242 "ml_foreign_proc_gen.m"
          {
#line 242 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_60_60));
#line 242 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[4])));
#line 242 "ml_foreign_proc_gen.m"
          }
#line 241 "ml_foreign_proc_gen.m"
          {
#line 241 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[35])));
#line 241 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 241 "ml_foreign_proc_gen.m"
          }
#line 237 "ml_foreign_proc_gen.m"
        }
#line 219 "ml_foreign_proc_gen.m"
      else
#line 220 "ml_foreign_proc_gen.m"
        {
#line 220 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__SucceededLval_38;
#line 220 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__BoolType_39;
#line 220 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_66_66;
#line 220 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_67_67;
#line 220 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_69_69;
#line 220 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;
#line 220 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_77_77;

#line 221 "ml_foreign_proc_gen.m"
          {
#line 221 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_success_lval_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_47, &ml_backend__ml_foreign_proc_gen__SucceededLval_38);
          }
#line 225 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__TargetLang_14 == (MR_Integer) 3))
#line 227 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "bool";
#line 225 "ml_foreign_proc_gen.m"
          else
#line 224 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__BoolType_39 = (MR_String) "boolean";
#line 230 "ml_foreign_proc_gen.m"
          {
#line 230 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_69_69 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__BoolType_39, (MR_String) " SUCCESS_INDICATOR;\n");
          }
#line 230 "ml_foreign_proc_gen.m"
          {
#line 230 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_67_67 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_69_69);
          }
#line 230 "ml_foreign_proc_gen.m"
          {
#line 230 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_66_66, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_67_67));
#line 230 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "ml_foreign_proc_gen.m"
          }
#line 230 "ml_foreign_proc_gen.m"
          {
#line 230 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__SucceededDecl_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_66_66));
#line 230 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__SucceededDecl_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 230 "ml_foreign_proc_gen.m"
          }
#line 233 "ml_foreign_proc_gen.m"
          {
#line 233 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 233 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededLval_38));
#line 233 "ml_foreign_proc_gen.m"
          }
#line 233 "ml_foreign_proc_gen.m"
          {
#line 233 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_76_76, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_77_77));
#line 233 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[6])));
#line 233 "ml_foreign_proc_gen.m"
          }
#line 232 "ml_foreign_proc_gen.m"
          {
#line 232 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__AssignSucceeded_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 232 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[35])));
#line 232 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__AssignSucceeded_37, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_76_76));
#line 232 "ml_foreign_proc_gen.m"
          }
#line 220 "ml_foreign_proc_gen.m"
        }
#line 3673 "ml_backend.ml_foreign_proc_gen.c"
    ml_backend__ml_foreign_proc_gen__TypeCtorInfo_122_122 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0;
#line 252 "ml_foreign_proc_gen.m"
    {
#line 252 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 252 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_95_95, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Context_22));
#line 252 "ml_foreign_proc_gen.m"
    }
#line 252 "ml_foreign_proc_gen.m"
    {
#line 252 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 252 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_94_94, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__JavaCode_21));
#line 252 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_94_94, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_95_95));
#line 252 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_94_94, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "ml_foreign_proc_gen.m"
    }
#line 252 "ml_foreign_proc_gen.m"
    {
#line 252 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_93_93, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_94_94));
#line 252 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "ml_foreign_proc_gen.m"
    }
#line 253 "ml_foreign_proc_gen.m"
    {
#line 253 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_92_92, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_93_93));
#line 253 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "ml_foreign_proc_gen.m"
    }
#line 251 "ml_foreign_proc_gen.m"
    {
#line 251 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_91_91, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignInputsList_32));
#line 251 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_91_91, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_92_92));
#line 251 "ml_foreign_proc_gen.m"
    }
#line 250 "ml_foreign_proc_gen.m"
    {
#line 250 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_90_90, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SucceededDecl_36));
#line 250 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_90_90, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_91_91));
#line 250 "ml_foreign_proc_gen.m"
    }
#line 249 "ml_foreign_proc_gen.m"
    {
#line 249 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_89_89, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgDeclsList_31));
#line 249 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_89_89, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_90_90));
#line 249 "ml_foreign_proc_gen.m"
    }
#line 248 "ml_foreign_proc_gen.m"
    {
#line 248 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[8])));
#line 248 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_83_83, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_89_89));
#line 248 "ml_foreign_proc_gen.m"
    }
#line 247 "ml_foreign_proc_gen.m"
    {
#line 247 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_40 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_122_122, ml_backend__ml_foreign_proc_gen__V_83_83);
    }
#line 254 "ml_foreign_proc_gen.m"
    {
#line 254 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 254 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 254 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
#line 254 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_40));
#line 254 "ml_foreign_proc_gen.m"
    }
#line 255 "ml_foreign_proc_gen.m"
    {
#line 255 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_99_99, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 255 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_99_99, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_Stmt_41));
#line 255 "ml_foreign_proc_gen.m"
    }
#line 256 "ml_foreign_proc_gen.m"
    {
#line 256 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_100_100 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_22);
    }
#line 255 "ml_foreign_proc_gen.m"
    {
#line 255 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_99_99));
#line 255 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_100_100));
#line 255 "ml_foreign_proc_gen.m"
    }
#line 259 "ml_foreign_proc_gen.m"
    {
#line 259 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 259 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_101_101, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignSucceeded_37));
#line 259 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[11])));
#line 259 "ml_foreign_proc_gen.m"
    }
#line 258 "ml_foreign_proc_gen.m"
    {
#line 258 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_43 = mercury__list__condense_1_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_122_122, ml_backend__ml_foreign_proc_gen__V_101_101);
    }
#line 262 "ml_foreign_proc_gen.m"
    {
#line 262 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 262 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 262 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetLang_14));
#line 262 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_43));
#line 262 "ml_foreign_proc_gen.m"
    }
#line 263 "ml_foreign_proc_gen.m"
    {
#line 263 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 263 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 263 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_109_109, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_Stmt_44));
#line 263 "ml_foreign_proc_gen.m"
    }
#line 264 "ml_foreign_proc_gen.m"
    {
#line 264 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_110_110 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_22);
    }
#line 263 "ml_foreign_proc_gen.m"
    {
#line 263 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 263 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_109_109));
#line 263 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_110_110));
#line 263 "ml_foreign_proc_gen.m"
    }
#line 267 "ml_foreign_proc_gen.m"
    {
#line 267 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_112_112 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_112_112, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Starting_Code_Statement_42));
#line 267 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_112_112, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "ml_foreign_proc_gen.m"
    }
#line 270 "ml_foreign_proc_gen.m"
    {
#line 270 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_117_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_117_117, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Ending_Code_Statement_45));
#line 270 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_117_117, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "ml_foreign_proc_gen.m"
    }
#line 271 "ml_foreign_proc_gen.m"
    {
#line 271 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 271 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_116_116, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_117_117));
#line 271 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_116_116, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 271 "ml_foreign_proc_gen.m"
    }
#line 269 "ml_foreign_proc_gen.m"
    {
#line 269 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_115_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_115_115, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ConvStatements_35));
#line 269 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_115_115, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_116_116));
#line 269 "ml_foreign_proc_gen.m"
    }
#line 268 "ml_foreign_proc_gen.m"
    {
#line 268 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_114_114, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignOutputsList_33));
#line 268 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_114_114, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_115_115));
#line 268 "ml_foreign_proc_gen.m"
    }
#line 267 "ml_foreign_proc_gen.m"
    {
#line 267 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_111_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_111_111, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_112_112));
#line 267 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_111_111, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_114_114));
#line 267 "ml_foreign_proc_gen.m"
    }
#line 266 "ml_foreign_proc_gen.m"
    {
#line 266 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_24 = mercury__list__condense_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__V_111_111);
    }
#line 189 "ml_foreign_proc_gen.m"
  }
#line 180 "ml_foreign_proc_gen.m"
}

#line 378 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_il_proc__378__1_2_p_0(
#line 378 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 378 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_48)
#line 378 "ml_foreign_proc_gen.m"
{
#line 378 "ml_foreign_proc_gen.m"
  {
#line 378 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 378 "ml_foreign_proc_gen.m"
    {
#line 378 "ml_foreign_proc_gen.m"
      return ml_backend__ml_foreign_proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_18)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__HeadVar__2_48)));
    }
#line 378 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 378 "ml_foreign_proc_gen.m"
  }
#line 378 "ml_foreign_proc_gen.m"
}

#line 292 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_managed_proc__292__1_2_p_0(
#line 292 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_18,
#line 292 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_48)
#line 292 "ml_foreign_proc_gen.m"
{
#line 292 "ml_foreign_proc_gen.m"
  {
#line 292 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 292 "ml_foreign_proc_gen.m"
    {
#line 292 "ml_foreign_proc_gen.m"
      return ml_backend__ml_foreign_proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_18)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__HeadVar__2_48)));
    }
#line 292 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 292 "ml_foreign_proc_gen.m"
  }
#line 292 "ml_foreign_proc_gen.m"
}

#line 204 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__IntroducedFrom__pred__ml_gen_ordinary_pragma_csharp_java_proc__204__1_2_p_0(
#line 204 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExtraArgs_20,
#line 204 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_53)
#line 204 "ml_foreign_proc_gen.m"
{
#line 204 "ml_foreign_proc_gen.m"
  {
#line 204 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 204 "ml_foreign_proc_gen.m"
    {
#line 204 "ml_foreign_proc_gen.m"
      return ml_backend__ml_foreign_proc_gen__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[0], ((MR_Box) (ml_backend__ml_foreign_proc_gen__ExtraArgs_20)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__HeadVar__2_53)));
    }
#line 204 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 204 "ml_foreign_proc_gen.m"
  }
#line 204 "ml_foreign_proc_gen.m"
}

#line 274 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____ordinary_pragma_kind_0_0(
#line 274 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 274 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 274 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3)
#line 274 "ml_foreign_proc_gen.m"
{
#line 274 "ml_foreign_proc_gen.m"
  {
#line 274 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 274 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__2_2;
#line 274 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

#line 274 "ml_foreign_proc_gen.m"
    {
#line 274 "ml_foreign_proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4, ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5);
#line 274 "ml_foreign_proc_gen.m"
      return;
    }
#line 274 "ml_foreign_proc_gen.m"
  }
#line 274 "ml_foreign_proc_gen.m"
}

#line 274 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____ordinary_pragma_kind_0_0(
#line 274 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 274 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
#line 274 "ml_foreign_proc_gen.m"
{
#line 4038 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 4040 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__HeadVar__2_1 == ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 4043 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 4045 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 274 "ml_foreign_proc_gen.m"
}

#line 858 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen____Compare____mutable_special_case_0_0(
#line 858 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 858 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 858 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3)
#line 858 "ml_foreign_proc_gen.m"
{
#line 858 "ml_foreign_proc_gen.m"
  {
#line 858 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 858 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__2_2;
#line 858 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

#line 858 "ml_foreign_proc_gen.m"
    {
#line 858 "ml_foreign_proc_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__Cast_HeadVar1_4, ml_backend__ml_foreign_proc_gen__Cast_HeadVar2_5);
#line 858 "ml_foreign_proc_gen.m"
      return;
    }
#line 858 "ml_foreign_proc_gen.m"
  }
#line 858 "ml_foreign_proc_gen.m"
}

#line 858 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen____Unify____mutable_special_case_0_0(
#line 858 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_1,
#line 858 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
#line 858 "ml_foreign_proc_gen.m"
{
#line 4091 "ml_backend.ml_foreign_proc_gen.c"
  {
#line 4093 "ml_backend.ml_foreign_proc_gen.c"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__HeadVar__2_1 == ml_backend__ml_foreign_proc_gen__HeadVar__2_2);

#line 4096 "ml_backend.ml_foreign_proc_gen.c"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 4098 "ml_backend.ml_foreign_proc_gen.c"
  }
#line 858 "ml_foreign_proc_gen.m"
}

#line 1193 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_11,
#line 1193 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_12,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_15,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignOutput_16,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvDecls_17,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37,
#line 1193 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38)
#line 1193 "ml_foreign_proc_gen.m"
{
#line 1200 "ml_foreign_proc_gen.m"
  {
#line 1200 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 1200 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarType_20;
#line 1200 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarLval_21;
#line 1200 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_22;
#line 1200 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_24;
#line 1200 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_25;
#line 1200 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__TypeString_26;
#line 1200 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_27;
#line 1200 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_39_39;
#line 1203 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStatements_23;
#line 1260 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Cast_28;

#line 1201 "ml_foreign_proc_gen.m"
    {
#line 1201 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarType_20);
    }
#line 1202 "ml_foreign_proc_gen.m"
    {
#line 1202 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__Var_11, &ml_backend__ml_foreign_proc_gen__VarLval_21);
    }
#line 1204 "ml_foreign_proc_gen.m"
    {
#line 1204 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1204 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_12));
#line 1204 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1204 "ml_foreign_proc_gen.m"
    }
#line 1203 "ml_foreign_proc_gen.m"
    {
#line 1203 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_20, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__VarLval_21, ml_backend__ml_foreign_proc_gen__V_39_39, ml_backend__ml_foreign_proc_gen__Context_15, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_22, ml_backend__ml_foreign_proc_gen__ConvDecls_17, &ml_backend__ml_foreign_proc_gen___ConvInputStatements_23, ml_backend__ml_foreign_proc_gen__ConvOutputStatements_18, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_37, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38);
    }
#line 1209 "ml_foreign_proc_gen.m"
    {
#line 1209 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38, &ml_backend__ml_foreign_proc_gen__ModuleInfo_24);
    }
#line 1210 "ml_foreign_proc_gen.m"
    {
#line 1210 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ExportedType_25 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_24, ml_backend__ml_foreign_proc_gen__OrigType_13);
    }
#line 1211 "ml_foreign_proc_gen.m"
    {
#line 1211 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__TypeString_26 = backend_libs__foreign__exported_type_to_string_2_f_0((MR_Integer) 0, ml_backend__ml_foreign_proc_gen__ExportedType_25);
    }
#line 1212 "ml_foreign_proc_gen.m"
    {
#line 1212 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__IsForeign_27 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_25);
    }
#line 1217 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__IsForeign_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1216 "ml_foreign_proc_gen.m"
      {
#line 1216 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__Cast_28 = (MR_Integer) 0;
#line 1216 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1216 "ml_foreign_proc_gen.m"
      }
#line 1217 "ml_foreign_proc_gen.m"
    else
#line 1218 "ml_foreign_proc_gen.m"
      {
#line 1218 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_27, (MR_Integer) 0)));

#line 1219 "ml_foreign_proc_gen.m"
        {
#line 1219 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__Assertions_29);
        }
#line 1218 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1218 "ml_foreign_proc_gen.m"
          {
#line 1220 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Cast_28 = (MR_Integer) 1;
#line 1220 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1218 "ml_foreign_proc_gen.m"
          }
#line 1218 "ml_foreign_proc_gen.m"
      }
#line 1260 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1225 "ml_foreign_proc_gen.m"
      {
#line 1225 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_30;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__LHS_Cast_31;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__RHS_Cast_32;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignFromArgName_35;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignTo_36;
#line 1225 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_59_59;
#line 1225 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
#line 1225 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
#line 1225 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_63_63;
#line 1225 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_64_64;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_85_85;
#line 1225 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_91_91;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_92_92;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_93_93;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_100_100;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_103_103;
#line 1225 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_110_110;

#line 1225 "ml_foreign_proc_gen.m"
        {
#line 1225 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_high_level_data_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_38, &ml_backend__ml_foreign_proc_gen__HighLevelData_30);
        }
#line 1236 "ml_foreign_proc_gen.m"
        if ((ml_backend__ml_foreign_proc_gen__HighLevelData_30 == (MR_Integer) 0))
#line 1237 "ml_foreign_proc_gen.m"
          {
#line 1242 "ml_foreign_proc_gen.m"
            {
#line 1242 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__V_33_33;
#line 1242 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;

#line 1242 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_13)) == (MR_mktag((MR_Integer) 0)));
#line 1242 "ml_foreign_proc_gen.m"
              if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1242 "ml_foreign_proc_gen.m"
                {
#line 1242 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 0)));
#line 1242 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_13, (MR_Integer) 1)));
#line 1242 "ml_foreign_proc_gen.m"
                }
#line 1242 "ml_foreign_proc_gen.m"
            }
#line 1243 "ml_foreign_proc_gen.m"
            if (!(ml_backend__ml_foreign_proc_gen__succeeded))
#line 1243 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Cast_28 == (MR_Integer) 1);
#line 1247 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1246 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "(MR_Box) ";
#line 1247 "ml_foreign_proc_gen.m"
            else
#line 1248 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "";
#line 1250 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__LHS_Cast_31 = (MR_String) "";
#line 1237 "ml_foreign_proc_gen.m"
          }
#line 1236 "ml_foreign_proc_gen.m"
        else
#line 1227 "ml_foreign_proc_gen.m"
          {
#line 1227 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_47_47;

#line 1234 "ml_foreign_proc_gen.m"
            {
#line 1234 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_47_47 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_26, (MR_String) " *) &");
            }
#line 1234 "ml_foreign_proc_gen.m"
            {
#line 1234 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__LHS_Cast_31 = mercury__string__f_43_43_2_f_0((MR_String) "* (", ml_backend__ml_foreign_proc_gen__V_47_47);
            }
#line 1235 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__RHS_Cast_32 = (MR_String) "";
#line 1227 "ml_foreign_proc_gen.m"
          }
#line 4338 "ml_backend.ml_foreign_proc_gen.c"
        ml_backend__ml_foreign_proc_gen__V_91_91 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[2];
#line 1252 "ml_foreign_proc_gen.m"
        {
#line 1252 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_91_91, ml_backend__ml_foreign_proc_gen__ArgName_12, &ml_backend__ml_foreign_proc_gen__V_85_85);
        }
#line 1252 "ml_foreign_proc_gen.m"
        {
#line 1252 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_92_92 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_85_85, (MR_String) ";\n");
        }
#line 1252 "ml_foreign_proc_gen.m"
        {
#line 1252 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_91_91, ml_backend__ml_foreign_proc_gen__RHS_Cast_32, &ml_backend__ml_foreign_proc_gen__V_93_93);
        }
#line 1252 "ml_foreign_proc_gen.m"
        {
#line 1252 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_100_100 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_93_93, ml_backend__ml_foreign_proc_gen__V_92_92);
        }
#line 1252 "ml_foreign_proc_gen.m"
        {
#line 1252 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignFromArgName_35 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__V_100_100);
        }
#line 1254 "ml_foreign_proc_gen.m"
        {
#line 1254 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_91_91, ml_backend__ml_foreign_proc_gen__LHS_Cast_31, &ml_backend__ml_foreign_proc_gen__V_103_103);
        }
#line 1254 "ml_foreign_proc_gen.m"
        {
#line 1254 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_110_110 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_103_103, (MR_String) " ");
        }
#line 1254 "ml_foreign_proc_gen.m"
        {
#line 1254 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignTo_36 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_110_110);
        }
#line 1256 "ml_foreign_proc_gen.m"
        {
#line 1256 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignTo_36));
#line 1256 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1256 "ml_foreign_proc_gen.m"
        }
#line 1257 "ml_foreign_proc_gen.m"
        {
#line 1257 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1257 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_62_62, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_22));
#line 1257 "ml_foreign_proc_gen.m"
        }
#line 1258 "ml_foreign_proc_gen.m"
        {
#line 1258 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1258 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_64_64, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignFromArgName_35));
#line 1258 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1258 "ml_foreign_proc_gen.m"
        }
#line 1259 "ml_foreign_proc_gen.m"
        {
#line 1259 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1259 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_64_64));
#line 1259 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1259 "ml_foreign_proc_gen.m"
        }
#line 1257 "ml_foreign_proc_gen.m"
        {
#line 1257 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1257 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_61_61, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_62_62));
#line 1257 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_63_63));
#line 1257 "ml_foreign_proc_gen.m"
        }
#line 1256 "ml_foreign_proc_gen.m"
        {
#line 1256 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 1256 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1256 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
#line 1256 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_59_59));
#line 1256 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_61_61));
#line 1256 "ml_foreign_proc_gen.m"
        }
#line 1225 "ml_foreign_proc_gen.m"
      }
#line 1260 "ml_foreign_proc_gen.m"
    else
#line 1262 "ml_foreign_proc_gen.m"
      {
#line 1262 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_67_67;
#line 1262 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_68_68;
#line 1262 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_70_70;
#line 1262 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_71_71;
#line 1262 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_73_73;
#line 1262 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;
#line 1262 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_77_77;

#line 1264 "ml_foreign_proc_gen.m"
        {
#line 1264 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_73_73 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_12, (MR_String) ", ");
        }
#line 1264 "ml_foreign_proc_gen.m"
        {
#line 1264 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__V_73_73);
        }
#line 1264 "ml_foreign_proc_gen.m"
        {
#line 1264 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_70_70 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_26, ml_backend__ml_foreign_proc_gen__V_71_71);
        }
#line 1264 "ml_foreign_proc_gen.m"
        {
#line 1264 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_BOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__V_70_70);
        }
#line 1263 "ml_foreign_proc_gen.m"
        {
#line 1263 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1263 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_67_67, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_68_68));
#line 1263 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_67_67, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1263 "ml_foreign_proc_gen.m"
        }
#line 1265 "ml_foreign_proc_gen.m"
        {
#line 1265 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_77_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1265 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgLval_22));
#line 1265 "ml_foreign_proc_gen.m"
        }
#line 1265 "ml_foreign_proc_gen.m"
        {
#line 1265 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_76_76, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_77_77));
#line 1265 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[30])));
#line 1265 "ml_foreign_proc_gen.m"
        }
#line 1264 "ml_foreign_proc_gen.m"
        {
#line 1264 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 1264 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignOutput_16 = base;
#line 1264 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_67_67));
#line 1264 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_76_76));
#line 1264 "ml_foreign_proc_gen.m"
        }
#line 1262 "ml_foreign_proc_gen.m"
      }
#line 1200 "ml_foreign_proc_gen.m"
  }
#line 1193 "ml_foreign_proc_gen.m"
}

#line 1149 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_2,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6,
#line 1149 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7)
#line 1149 "ml_foreign_proc_gen.m"
{
#line 1154 "ml_foreign_proc_gen.m"
  {
#line 1154 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 1154 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1154 "ml_foreign_proc_gen.m"
      {
#line 1154 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1154 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1154 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1154 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
#line 1154 "ml_foreign_proc_gen.m"
      }
#line 1154 "ml_foreign_proc_gen.m"
    else
#line 1156 "ml_foreign_proc_gen.m"
      {
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ForeignArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Components1_19;
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_20;
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements1_21;
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Components2_22;
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_23;
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements2_24;
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27;
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 0)));
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 1)));
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 2)));
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_12, (MR_Integer) 3)));
#line 1156 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_44;
#line 1185 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_45;
#line 1178 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_46;
#line 1178 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_47_47;
#line 1178 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_48_48;
#line 1178 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_49_49;
#line 1178 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_51_51;
#line 924 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_54_54;
#line 925 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_53_53;

#line 1176 "ml_foreign_proc_gen.m"
        {
#line 1176 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_44);
        }
#line 1178 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41)) == (MR_mktag((MR_Integer) 1)));
#line 1178 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1178 "ml_foreign_proc_gen.m"
          {
#line 1178 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_41, (MR_Integer) 0)));
#line 1178 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_45 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_47_47, (MR_Integer) 0)));
#line 1178 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Mode_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_47_47, (MR_Integer) 1)));
#line 925 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_54_54 = (MR_Char) 95;
#line 925 "ml_foreign_proc_gen.m"
            {
#line 925 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__V_54_54, &ml_backend__ml_foreign_proc_gen__V_53_53);
            }
#line 1179 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 1178 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1178 "ml_foreign_proc_gen.m"
              {
#line 1180 "ml_foreign_proc_gen.m"
                {
#line 1180 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_48_48 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__OrigType_42);
                }
#line 1180 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_48_48 == (MR_Integer) 1);
#line 1178 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1178 "ml_foreign_proc_gen.m"
                  {
#line 1181 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_49_49 = (MR_Integer) 1;
#line 1181 "ml_foreign_proc_gen.m"
                    {
#line 1181 "ml_foreign_proc_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_44, ml_backend__ml_foreign_proc_gen__Mode_46, ml_backend__ml_foreign_proc_gen__OrigType_42, &ml_backend__ml_foreign_proc_gen__V_51_51);
                    }
#line 1181 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_49_49 == ml_backend__ml_foreign_proc_gen__V_51_51);
#line 1178 "ml_foreign_proc_gen.m"
                  }
#line 1178 "ml_foreign_proc_gen.m"
              }
#line 1178 "ml_foreign_proc_gen.m"
          }
#line 1185 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1183 "ml_foreign_proc_gen.m"
          {
#line 1183 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_gen_output_arg_10_p_0(ml_backend__ml_foreign_proc_gen__Var_40, ml_backend__ml_foreign_proc_gen__ArgName_45, ml_backend__ml_foreign_proc_gen__OrigType_42, ml_backend__ml_foreign_proc_gen__BoxPolicy_43, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components1_19, &ml_backend__ml_foreign_proc_gen__ConvDecls1_20, &ml_backend__ml_foreign_proc_gen__ConvStatements1_21, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27);
          }
#line 1185 "ml_foreign_proc_gen.m"
        else
#line 1188 "ml_foreign_proc_gen.m"
          {
#line 1188 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Components1_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1189 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvDecls1_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1190 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvStatements1_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1188 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_6;
#line 1188 "ml_foreign_proc_gen.m"
          }
#line 1159 "ml_foreign_proc_gen.m"
        {
#line 1159 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_output_arg_list_7_p_0(ml_backend__ml_foreign_proc_gen__ForeignArgs_13, ml_backend__ml_foreign_proc_gen__Context_2, &ml_backend__ml_foreign_proc_gen__Components2_22, &ml_backend__ml_foreign_proc_gen__ConvDecls2_23, &ml_backend__ml_foreign_proc_gen__ConvStatements2_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_27_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_7);
        }
#line 1161 "ml_foreign_proc_gen.m"
        {
#line 1161 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Components1_19, ml_backend__ml_foreign_proc_gen__Components2_22);
        }
#line 1162 "ml_foreign_proc_gen.m"
        {
#line 1162 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_20, ml_backend__ml_foreign_proc_gen__ConvDecls2_23);
        }
#line 1163 "ml_foreign_proc_gen.m"
        {
#line 1163 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_foreign_proc_gen__ConvStatements1_21, ml_backend__ml_foreign_proc_gen__ConvStatements2_24);
        }
#line 1156 "ml_foreign_proc_gen.m"
      }
#line 1154 "ml_foreign_proc_gen.m"
  }
#line 1149 "ml_foreign_proc_gen.m"
}

#line 1078 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_1,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_3,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__5_5,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__6_6,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7,
#line 1078 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8)
#line 1078 "ml_foreign_proc_gen.m"
{
#line 1083 "ml_foreign_proc_gen.m"
  {
#line 1083 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 1083 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1083 "ml_foreign_proc_gen.m"
      {
#line 1083 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1083 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1083 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1083 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
#line 1083 "ml_foreign_proc_gen.m"
      }
#line 1083 "ml_foreign_proc_gen.m"
    else
#line 1085 "ml_foreign_proc_gen.m"
      {
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32;
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__JavaArg_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__JavaArgs_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Statements1_22;
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls1_23;
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements1_24;
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Statements2_25;
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvDecls2_26;
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ConvStatements2_27;
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30;
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 0)));
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 1)));
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 2)));
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__JavaArg_15, (MR_Integer) 3)));
#line 1085 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_47;
#line 1141 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_48;
#line 1108 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_49;
#line 1108 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_61_61;
#line 1108 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_62_62;
#line 1108 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_63_63;
#line 1108 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_75_75;
#line 924 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_80_80;
#line 925 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_79_79;

#line 1106 "ml_foreign_proc_gen.m"
        {
#line 1106 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__ModuleInfo_47);
        }
#line 1108 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44)) == (MR_mktag((MR_Integer) 1)));
#line 1108 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1108 "ml_foreign_proc_gen.m"
          {
#line 1108 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_44, (MR_Integer) 0)));
#line 1108 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_61_61, (MR_Integer) 0)));
#line 1108 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Mode_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_61_61, (MR_Integer) 1)));
#line 925 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_80_80 = (MR_Char) 95;
#line 925 "ml_foreign_proc_gen.m"
            {
#line 925 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_48, ml_backend__ml_foreign_proc_gen__V_80_80, &ml_backend__ml_foreign_proc_gen__V_79_79);
            }
#line 1109 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 1108 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1108 "ml_foreign_proc_gen.m"
              {
#line 1110 "ml_foreign_proc_gen.m"
                {
#line 1110 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_62_62 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
                }
#line 1110 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_62_62 == (MR_Integer) 1);
#line 1108 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1108 "ml_foreign_proc_gen.m"
                  {
#line 1111 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__V_63_63 = (MR_Integer) 1;
#line 1111 "ml_foreign_proc_gen.m"
                    {
#line 1111 "ml_foreign_proc_gen.m"
                      check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__Mode_49, ml_backend__ml_foreign_proc_gen__OrigType_45, &ml_backend__ml_foreign_proc_gen__V_75_75);
                    }
#line 1111 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_63_63 == ml_backend__ml_foreign_proc_gen__V_75_75);
#line 1108 "ml_foreign_proc_gen.m"
                  }
#line 1108 "ml_foreign_proc_gen.m"
              }
#line 1108 "ml_foreign_proc_gen.m"
          }
#line 1141 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1115 "ml_foreign_proc_gen.m"
          {
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarType_50;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarLval_51;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ArgLval_52;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDSType_54;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ModuleName_55;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_56;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__NonMangledVarName_57;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__QualLocalVarName_58;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__LocalVarLval_59;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__Rval_60;
#line 1115 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_73_73;
#line 1117 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen___ConvInputStatements_53;

#line 1115 "ml_foreign_proc_gen.m"
            {
#line 1115 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarType_50);
            }
#line 1116 "ml_foreign_proc_gen.m"
            {
#line 1116 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, ml_backend__ml_foreign_proc_gen__Var_43, &ml_backend__ml_foreign_proc_gen__VarLval_51);
            }
#line 1118 "ml_foreign_proc_gen.m"
            {
#line 1118 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__NonMangledVarName_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1118 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_48));
#line 1118 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1118 "ml_foreign_proc_gen.m"
            }
#line 1117 "ml_foreign_proc_gen.m"
            {
#line 1117 "ml_foreign_proc_gen.m"
              ml_backend__ml_code_util__ml_gen_box_or_unbox_lval_14_p_0(ml_backend__ml_foreign_proc_gen__VarType_50, ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__BoxPolicy_46, ml_backend__ml_foreign_proc_gen__VarLval_51, ml_backend__ml_foreign_proc_gen__NonMangledVarName_57, ml_backend__ml_foreign_proc_gen__Context_3, (MR_Integer) 0, (MR_Integer) 0, &ml_backend__ml_foreign_proc_gen__ArgLval_52, &ml_backend__ml_foreign_proc_gen__ConvDecls1_23, &ml_backend__ml_foreign_proc_gen___ConvInputStatements_53, &ml_backend__ml_foreign_proc_gen__ConvStatements1_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30);
            }
#line 1121 "ml_foreign_proc_gen.m"
            {
#line 1121 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__MLDSType_54 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, ml_backend__ml_foreign_proc_gen__OrigType_45);
            }
#line 1122 "ml_foreign_proc_gen.m"
            {
#line 1122 "ml_foreign_proc_gen.m"
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_47, &ml_backend__ml_foreign_proc_gen__ModuleName_55);
            }
#line 1123 "ml_foreign_proc_gen.m"
            {
#line 1123 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__MLDSModuleName_56 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_foreign_proc_gen__ModuleName_55);
            }
#line 1125 "ml_foreign_proc_gen.m"
            {
#line 1125 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__QualLocalVarName_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1125 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_56));
#line 1125 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1125 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_58, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__NonMangledVarName_57));
#line 1125 "ml_foreign_proc_gen.m"
            }
#line 1127 "ml_foreign_proc_gen.m"
            {
#line 1127 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__LocalVarLval_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1127 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualLocalVarName_58));
#line 1127 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_59, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_54));
#line 1127 "ml_foreign_proc_gen.m"
            }
#line 1131 "ml_foreign_proc_gen.m"
            if ((ml_backend__ml_foreign_proc_gen__MutableSpecial_1 == (MR_Integer) 0))
#line 1136 "ml_foreign_proc_gen.m"
              {
#line 1134 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_76_76;

#line 1134 "ml_foreign_proc_gen.m"
                {
#line 1134 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_76_76 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 1134 "ml_foreign_proc_gen.m"
                {
#line 1134 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__OrigType_45, ml_backend__ml_foreign_proc_gen__V_76_76);
                }
#line 1136 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1135 "ml_foreign_proc_gen.m"
                  {
#line 1135 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1135 "ml_foreign_proc_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 1135 "ml_foreign_proc_gen.m"
                  }
#line 1136 "ml_foreign_proc_gen.m"
                else
#line 1137 "ml_foreign_proc_gen.m"
                  {
#line 1137 "ml_foreign_proc_gen.m"
                    MR_Word ml_backend__ml_foreign_proc_gen__V_71_71;
#line 1137 "ml_foreign_proc_gen.m"
                    MR_Word ml_backend__ml_foreign_proc_gen__V_72_72;

#line 1137 "ml_foreign_proc_gen.m"
                    {
#line 1137 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "ml_foreign_proc_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_71_71, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_54));
#line 1137 "ml_foreign_proc_gen.m"
                    }
#line 1137 "ml_foreign_proc_gen.m"
                    {
#line 1137 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "ml_foreign_proc_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 1137 "ml_foreign_proc_gen.m"
                    }
#line 1137 "ml_foreign_proc_gen.m"
                    {
#line 1137 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1137 "ml_foreign_proc_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1137 "ml_foreign_proc_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_71_71));
#line 1137 "ml_foreign_proc_gen.m"
                      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__Rval_60, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_72_72));
#line 1137 "ml_foreign_proc_gen.m"
                    }
#line 1137 "ml_foreign_proc_gen.m"
                  }
#line 1136 "ml_foreign_proc_gen.m"
              }
#line 1131 "ml_foreign_proc_gen.m"
            else
#line 1130 "ml_foreign_proc_gen.m"
              {
#line 1130 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__Rval_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1130 "ml_foreign_proc_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Rval_60, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_59));
#line 1130 "ml_foreign_proc_gen.m"
              }
#line 1140 "ml_foreign_proc_gen.m"
            {
#line 1140 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_73_73 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_foreign_proc_gen__ArgLval_52, ml_backend__ml_foreign_proc_gen__Rval_60, ml_backend__ml_foreign_proc_gen__Context_3);
            }
#line 1140 "ml_foreign_proc_gen.m"
            {
#line 1140 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Statements1_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Statements1_22, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_73_73));
#line 1140 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Statements1_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1140 "ml_foreign_proc_gen.m"
            }
#line 1115 "ml_foreign_proc_gen.m"
          }
#line 1141 "ml_foreign_proc_gen.m"
        else
#line 1144 "ml_foreign_proc_gen.m"
          {
#line 1144 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Statements1_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1145 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvDecls1_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1146 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ConvStatements1_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1144 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_7;
#line 1144 "ml_foreign_proc_gen.m"
          }
#line 1088 "ml_foreign_proc_gen.m"
        {
#line 1088 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_output_arg_list_8_p_0(ml_backend__ml_foreign_proc_gen__MutableSpecial_1, ml_backend__ml_foreign_proc_gen__JavaArgs_16, ml_backend__ml_foreign_proc_gen__Context_3, &ml_backend__ml_foreign_proc_gen__Statements2_25, &ml_backend__ml_foreign_proc_gen__ConvDecls2_26, &ml_backend__ml_foreign_proc_gen__ConvStatements2_27, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_30_30, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_8);
        }
#line 5079 "ml_backend.ml_foreign_proc_gen.c"
        ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0;
#line 1090 "ml_foreign_proc_gen.m"
        {
#line 1090 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__Statements1_22, ml_backend__ml_foreign_proc_gen__Statements2_25);
        }
#line 1091 "ml_foreign_proc_gen.m"
        {
#line 1091 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__5_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__ml_foreign_proc_gen__ConvDecls1_23, ml_backend__ml_foreign_proc_gen__ConvDecls2_26);
        }
#line 1092 "ml_foreign_proc_gen.m"
        {
#line 1092 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__6_6 = mercury__list__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_32_32, ml_backend__ml_foreign_proc_gen__ConvStatements1_24, ml_backend__ml_foreign_proc_gen__ConvStatements2_27);
        }
#line 1085 "ml_foreign_proc_gen.m"
      }
#line 1083 "ml_foreign_proc_gen.m"
  }
#line 1078 "ml_foreign_proc_gen.m"
}

#line 1024 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(
#line 1024 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_7,
#line 1024 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_8,
#line 1024 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_9,
#line 1024 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_10,
#line 1024 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__TypeString_11,
#line 1024 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__Cast_12)
#line 1024 "ml_foreign_proc_gen.m"
{
#line 1030 "ml_foreign_proc_gen.m"
  {
#line 1030 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 1030 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__Lang_7 == (MR_Integer) 0))
#line 1030 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__HighLevelData_8 == (MR_Integer) 0))
#line 1052 "ml_foreign_proc_gen.m"
        {
#line 1047 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_15_15;
#line 1047 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_16_16;

#line 1047 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__OrigType_9)) == (MR_mktag((MR_Integer) 0)));
#line 1047 "ml_foreign_proc_gen.m"
          if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1047 "ml_foreign_proc_gen.m"
            {
#line 1047 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 0)));
#line 1047 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__OrigType_9, (MR_Integer) 1)));
#line 1051 "ml_foreign_proc_gen.m"
              *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "(MR_Word)";
#line 1051 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1047 "ml_foreign_proc_gen.m"
            }
#line 1047 "ml_foreign_proc_gen.m"
          else
#line 1053 "ml_foreign_proc_gen.m"
            {
#line 1053 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_30;

#line 1053 "ml_foreign_proc_gen.m"
              {
#line 1053 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__IsForeign_30 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
              }
#line 1058 "ml_foreign_proc_gen.m"
              if ((ml_backend__ml_foreign_proc_gen__IsForeign_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1060 "ml_foreign_proc_gen.m"
                {
#line 1060 "ml_foreign_proc_gen.m"
                  *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 1060 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1060 "ml_foreign_proc_gen.m"
                }
#line 1058 "ml_foreign_proc_gen.m"
              else
#line 1055 "ml_foreign_proc_gen.m"
                {
#line 1055 "ml_foreign_proc_gen.m"
                  MR_String ml_backend__ml_foreign_proc_gen__V_21_21;
#line 1055 "ml_foreign_proc_gen.m"
                  MR_String ml_backend__ml_foreign_proc_gen__V_22_22;
#line 1055 "ml_foreign_proc_gen.m"
                  MR_String ml_backend__ml_foreign_proc_gen__V_23_23;
#line 1055 "ml_foreign_proc_gen.m"
                  MR_Word ml_backend__ml_foreign_proc_gen__Assertions_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_30, (MR_Integer) 0)));

#line 1056 "ml_foreign_proc_gen.m"
                  {
#line 1056 "ml_foreign_proc_gen.m"
                    ml_backend__ml_foreign_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__Assertions_28);
                  }
#line 1055 "ml_foreign_proc_gen.m"
                  if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1055 "ml_foreign_proc_gen.m"
                    {
#line 1057 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__V_21_21 = (MR_String) "(";
#line 1057 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__V_23_23 = (MR_String) ")";
#line 1057 "ml_foreign_proc_gen.m"
                      {
#line 1057 "ml_foreign_proc_gen.m"
                        ml_backend__ml_foreign_proc_gen__V_22_22 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__V_23_23);
                      }
#line 1057 "ml_foreign_proc_gen.m"
                      {
#line 1057 "ml_foreign_proc_gen.m"
                        *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_21_21, ml_backend__ml_foreign_proc_gen__V_22_22);
                      }
#line 1057 "ml_foreign_proc_gen.m"
                      ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1055 "ml_foreign_proc_gen.m"
                    }
#line 1055 "ml_foreign_proc_gen.m"
                }
#line 1053 "ml_foreign_proc_gen.m"
            }
#line 1052 "ml_foreign_proc_gen.m"
        }
#line 1030 "ml_foreign_proc_gen.m"
      else
#line 1030 "ml_foreign_proc_gen.m"
        {
#line 1030 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__IsForeign_13;
#line 1030 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_25_25;
#line 1030 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_26_26;
#line 1030 "ml_foreign_proc_gen.m"
          MR_String ml_backend__ml_foreign_proc_gen__V_27_27;

#line 1032 "ml_foreign_proc_gen.m"
          {
#line 1032 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__IsForeign_13 = backend_libs__foreign__is_foreign_type_1_f_0(ml_backend__ml_foreign_proc_gen__ExportedType_10);
          }
#line 1036 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__IsForeign_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1037 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1036 "ml_foreign_proc_gen.m"
          else
#line 1034 "ml_foreign_proc_gen.m"
            {
#line 1034 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__Assertions_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__IsForeign_13, (MR_Integer) 0)));

#line 1035 "ml_foreign_proc_gen.m"
              {
#line 1035 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_foreign_type_assertion_0, ((MR_Box) ((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__Assertions_14);
              }
#line 1034 "ml_foreign_proc_gen.m"
            }
#line 1030 "ml_foreign_proc_gen.m"
          if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1030 "ml_foreign_proc_gen.m"
            {
#line 1043 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_25_25 = (MR_String) "(";
#line 1043 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_27_27 = (MR_String) ")";
#line 1043 "ml_foreign_proc_gen.m"
              {
#line 1043 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__V_26_26 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_11, ml_backend__ml_foreign_proc_gen__V_27_27);
              }
#line 1043 "ml_foreign_proc_gen.m"
              {
#line 1043 "ml_foreign_proc_gen.m"
                *ml_backend__ml_foreign_proc_gen__Cast_12 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_25_25, ml_backend__ml_foreign_proc_gen__V_26_26);
              }
#line 1043 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1030 "ml_foreign_proc_gen.m"
            }
#line 1030 "ml_foreign_proc_gen.m"
        }
#line 1030 "ml_foreign_proc_gen.m"
    else
#line 1030 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__Lang_7 == (MR_Integer) 1))
#line 1070 "ml_foreign_proc_gen.m"
        {
#line 1070 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 1070 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1070 "ml_foreign_proc_gen.m"
        }
#line 1030 "ml_foreign_proc_gen.m"
      else
#line 1030 "ml_foreign_proc_gen.m"
        if ((ml_backend__ml_foreign_proc_gen__Lang_7 == (MR_Integer) 2))
#line 1067 "ml_foreign_proc_gen.m"
          {
#line 1067 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__Cast_12 = (MR_String) "";
#line 1067 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1067 "ml_foreign_proc_gen.m"
          }
#line 1030 "ml_foreign_proc_gen.m"
        else
#line 1074 "ml_foreign_proc_gen.m"
          {
#line 1075 "ml_foreign_proc_gen.m"
            {
#line 1075 "ml_foreign_proc_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.input_arg_assignable_with_cast\'/6", (MR_String) "unexpected language");
            }
#line 1074 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 1074 "ml_foreign_proc_gen.m"
          }
#line 1030 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 1030 "ml_foreign_proc_gen.m"
  }
#line 1024 "ml_foreign_proc_gen.m"
}

#line 963 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_9,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_10,
#line 963 "ml_foreign_proc_gen.m"
  MR_String ml_backend__ml_foreign_proc_gen__ArgName_11,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__OrigType_12,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_13,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_14,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27,
#line 963 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28)
#line 963 "ml_foreign_proc_gen.m"
{
#line 968 "ml_foreign_proc_gen.m"
  {
#line 968 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 968 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarType_16;
#line 968 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarLval_17;
#line 968 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_18;
#line 968 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__IsDummy_19;
#line 968 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ArgRval_20;
#line 968 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ExportedType_21;
#line 968 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__TypeString_22;
#line 968 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Globals_23;
#line 968 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HighLevelData_24;
#line 1003 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__Cast_25;

#line 969 "ml_foreign_proc_gen.m"
    {
#line 969 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_variable_type_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, ml_backend__ml_foreign_proc_gen__Var_10, &ml_backend__ml_foreign_proc_gen__VarType_16);
    }
#line 970 "ml_foreign_proc_gen.m"
    {
#line 970 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_var_3_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, ml_backend__ml_foreign_proc_gen__Var_10, &ml_backend__ml_foreign_proc_gen__VarLval_17);
    }
#line 971 "ml_foreign_proc_gen.m"
    {
#line 971 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27, &ml_backend__ml_foreign_proc_gen__ModuleInfo_18);
    }
#line 972 "ml_foreign_proc_gen.m"
    {
#line 972 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__IsDummy_19 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16);
    }
#line 980 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__IsDummy_19 == (MR_Integer) 0))
#line 1016 "ml_foreign_proc_gen.m"
      {
#line 1016 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_86;

#line 1017 "ml_foreign_proc_gen.m"
        {
#line 1017 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__MLDS_Type_86 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16);
        }
#line 1018 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Lang_9 == (MR_Integer) 2);
#line 1020 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 1019 "ml_foreign_proc_gen.m"
          {
#line 1019 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_87_87;

#line 1019 "ml_foreign_proc_gen.m"
            {
#line 1019 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1019 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_87_87, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_86));
#line 1019 "ml_foreign_proc_gen.m"
            }
#line 1019 "ml_foreign_proc_gen.m"
            {
#line 1019 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__ArgRval_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1019 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__ArgRval_20, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_87_87));
#line 1019 "ml_foreign_proc_gen.m"
            }
#line 1019 "ml_foreign_proc_gen.m"
          }
#line 1020 "ml_foreign_proc_gen.m"
        else
#line 1021 "ml_foreign_proc_gen.m"
          {
#line 1021 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgRval_20 = (MR_Word) MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[31]);
#line 1021 "ml_foreign_proc_gen.m"
          }
#line 1016 "ml_foreign_proc_gen.m"
      }
#line 980 "ml_foreign_proc_gen.m"
    else
#line 981 "ml_foreign_proc_gen.m"
      {
#line 981 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_29_29;

#line 983 "ml_foreign_proc_gen.m"
        {
#line 983 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 983 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_29_29, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_17));
#line 983 "ml_foreign_proc_gen.m"
        }
#line 982 "ml_foreign_proc_gen.m"
        {
#line 982 "ml_foreign_proc_gen.m"
          ml_backend__ml_code_util__ml_gen_box_or_unbox_rval_6_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__VarType_16, ml_backend__ml_foreign_proc_gen__OrigType_12, ml_backend__ml_foreign_proc_gen__BoxPolicy_13, ml_backend__ml_foreign_proc_gen__V_29_29, &ml_backend__ml_foreign_proc_gen__ArgRval_20);
        }
#line 981 "ml_foreign_proc_gen.m"
      }
#line 988 "ml_foreign_proc_gen.m"
    {
#line 988 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ExportedType_21 = backend_libs__foreign__to_exported_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, ml_backend__ml_foreign_proc_gen__OrigType_12);
    }
#line 989 "ml_foreign_proc_gen.m"
    {
#line 989 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__TypeString_22 = backend_libs__foreign__exported_type_to_string_2_f_0(ml_backend__ml_foreign_proc_gen__Lang_9, ml_backend__ml_foreign_proc_gen__ExportedType_21);
    }
#line 990 "ml_foreign_proc_gen.m"
    {
#line 990 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_18, &ml_backend__ml_foreign_proc_gen__Globals_23);
    }
#line 991 "ml_foreign_proc_gen.m"
    {
#line 991 "ml_foreign_proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_23, (MR_Integer) 255, &ml_backend__ml_foreign_proc_gen__HighLevelData_24);
    }
#line 993 "ml_foreign_proc_gen.m"
    {
#line 993 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = ml_backend__ml_foreign_proc_gen__input_arg_assignable_with_cast_6_p_0(ml_backend__ml_foreign_proc_gen__Lang_9, ml_backend__ml_foreign_proc_gen__HighLevelData_24, ml_backend__ml_foreign_proc_gen__OrigType_12, ml_backend__ml_foreign_proc_gen__ExportedType_21, ml_backend__ml_foreign_proc_gen__TypeString_22, &ml_backend__ml_foreign_proc_gen__Cast_25);
    }
#line 1003 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 997 "ml_foreign_proc_gen.m"
      {
#line 997 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__AssignToArgName_26;
#line 997 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_37_37;
#line 997 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_39_39;
#line 997 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_40_40;
#line 997 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_63_63;
#line 997 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_69_69 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[2];
#line 997 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_70_70;
#line 997 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_72_72;
#line 997 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_73_73;
#line 997 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_80_80;

#line 997 "ml_foreign_proc_gen.m"
        {
#line 997 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_69_69, ml_backend__ml_foreign_proc_gen__Cast_25, &ml_backend__ml_foreign_proc_gen__V_63_63);
        }
#line 997 "ml_foreign_proc_gen.m"
        {
#line 997 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_70_70 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_63_63, (MR_String) " ");
        }
#line 997 "ml_foreign_proc_gen.m"
        {
#line 997 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) " = ", ml_backend__ml_foreign_proc_gen__V_70_70);
        }
#line 997 "ml_foreign_proc_gen.m"
        {
#line 997 "ml_foreign_proc_gen.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_69_69, ml_backend__ml_foreign_proc_gen__ArgName_11, &ml_backend__ml_foreign_proc_gen__V_73_73);
        }
#line 997 "ml_foreign_proc_gen.m"
        {
#line 997 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_80_80 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_73_73, ml_backend__ml_foreign_proc_gen__V_72_72);
        }
#line 997 "ml_foreign_proc_gen.m"
        {
#line 997 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__AssignToArgName_26 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_80_80);
        }
#line 999 "ml_foreign_proc_gen.m"
        {
#line 999 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_37_37, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AssignToArgName_26));
#line 999 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_37_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 999 "ml_foreign_proc_gen.m"
        }
#line 1000 "ml_foreign_proc_gen.m"
        {
#line 1000 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_40_40, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_20));
#line 1000 "ml_foreign_proc_gen.m"
        }
#line 1000 "ml_foreign_proc_gen.m"
        {
#line 1000 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_40_40));
#line 1000 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[28])));
#line 1000 "ml_foreign_proc_gen.m"
        }
#line 999 "ml_foreign_proc_gen.m"
        {
#line 999 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 999 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignInput_14 = base;
#line 999 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_37_37));
#line 999 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_39_39));
#line 999 "ml_foreign_proc_gen.m"
        }
#line 997 "ml_foreign_proc_gen.m"
      }
#line 1003 "ml_foreign_proc_gen.m"
    else
#line 1006 "ml_foreign_proc_gen.m"
      {
#line 1006 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_46_46;
#line 1006 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_47_47;
#line 1006 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_49_49;
#line 1006 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_52_52;
#line 1006 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_53_53;
#line 1006 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_54_54;
#line 1006 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_55_55;
#line 1006 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_56_56;
#line 1006 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_58_58;

#line 1008 "ml_foreign_proc_gen.m"
        {
#line 1008 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_49_49 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__TypeString_22, (MR_String) ", ");
        }
#line 1008 "ml_foreign_proc_gen.m"
        {
#line 1008 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) "\tMR_MAYBE_UNBOX_FOREIGN_TYPE(", ml_backend__ml_foreign_proc_gen__V_49_49);
        }
#line 1007 "ml_foreign_proc_gen.m"
        {
#line 1007 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_46_46, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_47_47));
#line 1007 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1007 "ml_foreign_proc_gen.m"
        }
#line 1009 "ml_foreign_proc_gen.m"
        {
#line 1009 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_53_53, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgRval_20));
#line 1009 "ml_foreign_proc_gen.m"
        }
#line 1010 "ml_foreign_proc_gen.m"
        {
#line 1010 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_58_58 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__ArgName_11, (MR_String) ");\n");
        }
#line 1010 "ml_foreign_proc_gen.m"
        {
#line 1010 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ml_backend__ml_foreign_proc_gen__V_58_58);
        }
#line 1010 "ml_foreign_proc_gen.m"
        {
#line 1010 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1010 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_55_55, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_56_56));
#line 1010 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1010 "ml_foreign_proc_gen.m"
        }
#line 1011 "ml_foreign_proc_gen.m"
        {
#line 1011 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1011 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_54_54, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_55_55));
#line 1011 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "ml_foreign_proc_gen.m"
        }
#line 1009 "ml_foreign_proc_gen.m"
        {
#line 1009 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1009 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_52_52, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_53_53));
#line 1009 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_52_52, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_54_54));
#line 1009 "ml_foreign_proc_gen.m"
        }
#line 1008 "ml_foreign_proc_gen.m"
        {
#line 1008 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 1008 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__AssignInput_14 = base;
#line 1008 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_46_46));
#line 1008 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_52_52));
#line 1008 "ml_foreign_proc_gen.m"
        }
#line 1006 "ml_foreign_proc_gen.m"
      }
#line 968 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_28 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_27;
#line 968 "ml_foreign_proc_gen.m"
  }
#line 963 "ml_foreign_proc_gen.m"
}

#line 943 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(
#line 943 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 943 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7,
#line 943 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInput_8,
#line 943 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 943 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18)
#line 943 "ml_foreign_proc_gen.m"
{
#line 947 "ml_foreign_proc_gen.m"
  {
#line 947 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 947 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_10;
#line 957 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Var_11;
#line 957 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OrigType_13;
#line 957 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_14;
#line 957 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__ArgName_15;
#line 950 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12;
#line 950 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Mode_16;
#line 950 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_19_19;
#line 950 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
#line 950 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_22_22;
#line 924 "ml_foreign_proc_gen.m"
    MR_Char ml_backend__ml_foreign_proc_gen__V_25_25;
#line 925 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__V_24_24;

#line 948 "ml_foreign_proc_gen.m"
    {
#line 948 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__ModuleInfo_10);
    }
#line 950 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 0)));
#line 950 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 1)));
#line 950 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 2)));
#line 950 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__BoxPolicy_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 3)));
#line 951 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12)) == (MR_mktag((MR_Integer) 1)));
#line 951 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 951 "ml_foreign_proc_gen.m"
      {
#line 951 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_12, (MR_Integer) 0)));
#line 951 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ArgName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_19_19, (MR_Integer) 0)));
#line 951 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__Mode_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_19_19, (MR_Integer) 1)));
#line 925 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_25_25 = (MR_Char) 95;
#line 925 "ml_foreign_proc_gen.m"
        {
#line 925 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__V_25_25, &ml_backend__ml_foreign_proc_gen__V_24_24);
        }
#line 952 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 950 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 950 "ml_foreign_proc_gen.m"
          {
#line 953 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Integer) 0;
#line 953 "ml_foreign_proc_gen.m"
            {
#line 953 "ml_foreign_proc_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_10, ml_backend__ml_foreign_proc_gen__Mode_16, ml_backend__ml_foreign_proc_gen__OrigType_13, &ml_backend__ml_foreign_proc_gen__V_22_22);
            }
#line 953 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_20_20 == ml_backend__ml_foreign_proc_gen__V_22_22);
#line 950 "ml_foreign_proc_gen.m"
          }
#line 951 "ml_foreign_proc_gen.m"
      }
#line 957 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 955 "ml_foreign_proc_gen.m"
      {
#line 955 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_gen_input_arg_8_p_0(ml_backend__ml_foreign_proc_gen__Lang_6, ml_backend__ml_foreign_proc_gen__Var_11, ml_backend__ml_foreign_proc_gen__ArgName_15, ml_backend__ml_foreign_proc_gen__OrigType_13, ml_backend__ml_foreign_proc_gen__BoxPolicy_14, ml_backend__ml_foreign_proc_gen__AssignInput_8, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
#line 955 "ml_foreign_proc_gen.m"
        return;
      }
#line 957 "ml_foreign_proc_gen.m"
    else
#line 960 "ml_foreign_proc_gen.m"
      {
#line 960 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__AssignInput_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 960 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17;
#line 960 "ml_foreign_proc_gen.m"
      }
#line 947 "ml_foreign_proc_gen.m"
  }
#line 943 "ml_foreign_proc_gen.m"
}

#line 936 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1(
#line 936 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__closure_arg,
#line 936 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_1,
#line 936 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_2,
#line 936 "ml_foreign_proc_gen.m"
  MR_Box ml_backend__ml_foreign_proc_gen__wrapper_arg_3,
#line 936 "ml_foreign_proc_gen.m"
  MR_Box * ml_backend__ml_foreign_proc_gen__wrapper_arg_4)
#line 936 "ml_foreign_proc_gen.m"
{
#line 936 "ml_foreign_proc_gen.m"
  {
#line 936 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__closure = ml_backend__ml_foreign_proc_gen__closure_arg;
#line 936 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8;
#line 936 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18;

#line 936 "ml_foreign_proc_gen.m"
    {
#line 936 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_1), &ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8, ((MR_Word) ml_backend__ml_foreign_proc_gen__wrapper_arg_3), &ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18);
    }
#line 936 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv1_AssignInput_8));
#line 936 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_foreign_proc_gen__conv0_STATE_VARIABLE_Info_18));
#line 936 "ml_foreign_proc_gen.m"
  }
#line 936 "ml_foreign_proc_gen.m"
}

#line 931 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0(
#line 931 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_6,
#line 931 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgList_7,
#line 931 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__AssignInputs_8,
#line 931 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11,
#line 931 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12)
#line 931 "ml_foreign_proc_gen.m"
{
#line 935 "ml_foreign_proc_gen.m"
  {
#line 935 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 935 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__AssignInputsList_10;
#line 935 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_13_13;
#line 936 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12;

#line 936 "ml_foreign_proc_gen.m"
    {
#line 936 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 936 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 0) = ((MR_Box) (&ml_backend__ml_foreign_proc_gen_scalar_common_3[0]));
#line 936 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ml_gen_pragma_ccsj_input_arg_list_5_p_0_1));
#line 936 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 936 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_13_13, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Lang_6));
#line 936 "ml_foreign_proc_gen.m"
    }
#line 936 "ml_foreign_proc_gen.m"
    {
#line 936 "ml_foreign_proc_gen.m"
      mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[2], (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_gen_info_0, ml_backend__ml_foreign_proc_gen__V_13_13, ml_backend__ml_foreign_proc_gen__ArgList_7, &ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ((MR_Box) (ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_11)), &ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
    }
#line 936 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_12 = ((MR_Word) ml_backend__ml_foreign_proc_gen__conv2_STATE_VARIABLE_Info_12);
#line 938 "ml_foreign_proc_gen.m"
    {
#line 938 "ml_foreign_proc_gen.m"
      mercury__list__condense_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__AssignInputsList_10, ml_backend__ml_foreign_proc_gen__AssignInputs_8);
#line 938 "ml_foreign_proc_gen.m"
      return;
    }
#line 935 "ml_foreign_proc_gen.m"
  }
#line 931 "ml_foreign_proc_gen.m"
}

#line 865 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(
#line 865 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 865 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MutableSpecial_2,
#line 865 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 865 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4)
#line 865 "ml_foreign_proc_gen.m"
{
#line 869 "ml_foreign_proc_gen.m"
  {
#line 869 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 869 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 869 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 869 "ml_foreign_proc_gen.m"
    else
#line 871 "ml_foreign_proc_gen.m"
      {
#line 871 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 871 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 871 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decl_11;
#line 871 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decls_12;
#line 871 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 1)));
#line 871 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 2)));
#line 871 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_22;
#line 883 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 0)));
#line 883 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___BoxPolicy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 3)));
#line 905 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_23;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_29_29;
#line 886 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Mode_24;
#line 924 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_51_51;
#line 925 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_50_50;

#line 884 "ml_foreign_proc_gen.m"
        {
#line 884 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_22);
        }
#line 886 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19)) == (MR_mktag((MR_Integer) 1)));
#line 886 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 886 "ml_foreign_proc_gen.m"
          {
#line 886 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_19, (MR_Integer) 0)));
#line 886 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_29_29, (MR_Integer) 0)));
#line 886 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen___Mode_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_29_29, (MR_Integer) 1)));
#line 925 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_51_51 = (MR_Char) 95;
#line 925 "ml_foreign_proc_gen.m"
            {
#line 925 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_23, ml_backend__ml_foreign_proc_gen__V_51_51, &ml_backend__ml_foreign_proc_gen__V_50_50);
            }
#line 887 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 886 "ml_foreign_proc_gen.m"
          }
#line 905 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 900 "ml_foreign_proc_gen.m"
          {
#line 900 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__MLDS_Type_25;
#line 900 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__TypeDecl_26;
#line 900 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__VarDeclString_27;
#line 900 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__VarDecl_28;
#line 900 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_35_35;
#line 900 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_39_39;
#line 900 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_46_46;

#line 892 "ml_foreign_proc_gen.m"
            if ((ml_backend__ml_foreign_proc_gen__MutableSpecial_2 == (MR_Integer) 0))
#line 897 "ml_foreign_proc_gen.m"
              {
#line 895 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_37_37;

#line 895 "ml_foreign_proc_gen.m"
                {
#line 895 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_37_37 = parse_tree__builtin_lib_types__int_type_0_f_0();
                }
#line 895 "ml_foreign_proc_gen.m"
                {
#line 895 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(ml_backend__ml_foreign_proc_gen__Type_20, ml_backend__ml_foreign_proc_gen__V_37_37);
                }
#line 897 "ml_foreign_proc_gen.m"
                if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 896 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 897 "ml_foreign_proc_gen.m"
                else
#line 898 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 897 "ml_foreign_proc_gen.m"
              }
#line 892 "ml_foreign_proc_gen.m"
            else
#line 891 "ml_foreign_proc_gen.m"
              {
#line 891 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__MLDS_Type_25 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_22, ml_backend__ml_foreign_proc_gen__Type_20);
              }
#line 901 "ml_foreign_proc_gen.m"
            {
#line 901 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__TypeDecl_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 901 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__TypeDecl_26, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDS_Type_25));
#line 901 "ml_foreign_proc_gen.m"
            }
#line 902 "ml_foreign_proc_gen.m"
            {
#line 902 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[2], ml_backend__ml_foreign_proc_gen__ArgName_23, &ml_backend__ml_foreign_proc_gen__V_39_39);
            }
#line 902 "ml_foreign_proc_gen.m"
            {
#line 902 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_46_46 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_39_39, (MR_String) ";\n");
            }
#line 902 "ml_foreign_proc_gen.m"
            {
#line 902 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__VarDeclString_27 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__V_46_46);
            }
#line 903 "ml_foreign_proc_gen.m"
            {
#line 903 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__VarDecl_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__VarDecl_28, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDeclString_27));
#line 903 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__VarDecl_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "ml_foreign_proc_gen.m"
            }
#line 904 "ml_foreign_proc_gen.m"
            {
#line 904 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_35_35, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarDecl_28));
#line 904 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "ml_foreign_proc_gen.m"
            }
#line 904 "ml_foreign_proc_gen.m"
            {
#line 904 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TypeDecl_26));
#line 904 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_35_35));
#line 904 "ml_foreign_proc_gen.m"
            }
#line 900 "ml_foreign_proc_gen.m"
          }
#line 905 "ml_foreign_proc_gen.m"
        else
#line 908 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "ml_foreign_proc_gen.m"
        {
#line 873 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_csharp_java_decls_4_p_0(ml_backend__ml_foreign_proc_gen__Info_1, ml_backend__ml_foreign_proc_gen__MutableSpecial_2, ml_backend__ml_foreign_proc_gen__Args_10, &ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 871 "ml_foreign_proc_gen.m"
        {
#line 871 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_target_code_component_0, ml_backend__ml_foreign_proc_gen__Decl_11, ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 871 "ml_foreign_proc_gen.m"
      }
#line 869 "ml_foreign_proc_gen.m"
  }
#line 865 "ml_foreign_proc_gen.m"
}

#line 816 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(
#line 816 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_1,
#line 816 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Lang_2,
#line 816 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3,
#line 816 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__4_4)
#line 816 "ml_foreign_proc_gen.m"
{
#line 819 "ml_foreign_proc_gen.m"
  {
#line 819 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 819 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 819 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 819 "ml_foreign_proc_gen.m"
    else
#line 820 "ml_foreign_proc_gen.m"
      {
#line 820 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Arg_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 0)));
#line 820 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, (MR_Integer) 1)));
#line 820 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decl_11;
#line 820 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Decls_12;
#line 820 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 1)));
#line 820 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Type_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 2)));
#line 820 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 3)));
#line 820 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_21;
#line 820 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__DeclString_25;
#line 831 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_9, (MR_Integer) 0)));
#line 846 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_22;
#line 834 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
#line 834 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen___Mode_23;
#line 924 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_56_56;
#line 925 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_55_55;

#line 832 "ml_foreign_proc_gen.m"
        {
#line 832 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_1, &ml_backend__ml_foreign_proc_gen__ModuleInfo_21);
        }
#line 834 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18)) == (MR_mktag((MR_Integer) 1)));
#line 834 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 834 "ml_foreign_proc_gen.m"
          {
#line 834 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameAndMode_18, (MR_Integer) 0)));
#line 834 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 0)));
#line 834 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen___Mode_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 1)));
#line 925 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_56_56 = (MR_Char) 95;
#line 925 "ml_foreign_proc_gen.m"
            {
#line 925 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_22, ml_backend__ml_foreign_proc_gen__V_56_56, &ml_backend__ml_foreign_proc_gen__V_55_55);
            }
#line 835 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 834 "ml_foreign_proc_gen.m"
          }
#line 846 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 844 "ml_foreign_proc_gen.m"
          {
#line 844 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__TypeString_24;
#line 844 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_35_35;
#line 844 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_41_41;
#line 844 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_42_42;
#line 844 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_44_44;
#line 844 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_45_45;
#line 844 "ml_foreign_proc_gen.m"
            MR_String ml_backend__ml_foreign_proc_gen__V_52_52;

#line 840 "ml_foreign_proc_gen.m"
            if ((ml_backend__ml_foreign_proc_gen__BoxPolicy_20 == (MR_Integer) 1))
#line 839 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__TypeString_24 = (MR_String) "MR_Word";
#line 840 "ml_foreign_proc_gen.m"
            else
#line 842 "ml_foreign_proc_gen.m"
              {
#line 842 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__TypeString_24 = backend_libs__foreign__mercury_exported_type_to_string_3_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_21, ml_backend__ml_foreign_proc_gen__Lang_2, ml_backend__ml_foreign_proc_gen__Type_19);
              }
#line 6248 "ml_backend.ml_foreign_proc_gen.c"
            ml_backend__ml_foreign_proc_gen__V_41_41 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_2[2];
#line 845 "ml_foreign_proc_gen.m"
            {
#line 845 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_41_41, ml_backend__ml_foreign_proc_gen__ArgName_22, &ml_backend__ml_foreign_proc_gen__V_35_35);
            }
#line 845 "ml_foreign_proc_gen.m"
            {
#line 845 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_42_42 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_35_35, (MR_String) ";\n");
            }
#line 845 "ml_foreign_proc_gen.m"
            {
#line 845 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) " ", ml_backend__ml_foreign_proc_gen__V_42_42);
            }
#line 845 "ml_foreign_proc_gen.m"
            {
#line 845 "ml_foreign_proc_gen.m"
              mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ml_backend__ml_foreign_proc_gen__V_41_41, ml_backend__ml_foreign_proc_gen__TypeString_24, &ml_backend__ml_foreign_proc_gen__V_45_45);
            }
#line 845 "ml_foreign_proc_gen.m"
            {
#line 845 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_52_52 = mercury__string__f_43_43_2_f_0(ml_backend__ml_foreign_proc_gen__V_45_45, ml_backend__ml_foreign_proc_gen__V_44_44);
            }
#line 845 "ml_foreign_proc_gen.m"
            {
#line 845 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__DeclString_25 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ml_backend__ml_foreign_proc_gen__V_52_52);
            }
#line 844 "ml_foreign_proc_gen.m"
          }
#line 846 "ml_foreign_proc_gen.m"
        else
#line 849 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__DeclString_25 = (MR_String) "";
#line 851 "ml_foreign_proc_gen.m"
        {
#line 851 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Decl_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__DeclString_25));
#line 851 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Decl_11, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 851 "ml_foreign_proc_gen.m"
        }
#line 822 "ml_foreign_proc_gen.m"
        {
#line 822 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_pragma_c_decls_4_p_0(ml_backend__ml_foreign_proc_gen__Info_1, ml_backend__ml_foreign_proc_gen__Lang_2, ml_backend__ml_foreign_proc_gen__Args_10, &ml_backend__ml_foreign_proc_gen__Decls_12);
        }
#line 820 "ml_foreign_proc_gen.m"
        {
#line 820 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 820 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 820 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__4_4 = base;
#line 820 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Decl_11));
#line 820 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Decls_12));
#line 820 "ml_foreign_proc_gen.m"
        }
#line 820 "ml_foreign_proc_gen.m"
      }
#line 819 "ml_foreign_proc_gen.m"
  }
#line 816 "ml_foreign_proc_gen.m"
}

#line 784 "ml_foreign_proc_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_f_0(
#line 784 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 784 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__2_2)
#line 784 "ml_foreign_proc_gen.m"
{
#line 787 "ml_foreign_proc_gen.m"
  {
#line 787 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 787 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__3_3;

#line 787 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 787 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 787 "ml_foreign_proc_gen.m"
    else
#line 788 "ml_foreign_proc_gen.m"
      {
#line 788 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ProcAttr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 788 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ProcAttrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 788 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__TargetAttrs1_9;

#line 789 "ml_foreign_proc_gen.m"
        {
#line 789 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__TargetAttrs1_9 = ml_backend__ml_foreign_proc_gen__get_target_code_attributes_2_f_0(ml_backend__ml_foreign_proc_gen__HeadVar__1_1, ml_backend__ml_foreign_proc_gen__ProcAttrs_7);
        }
#line 803 "ml_foreign_proc_gen.m"
        if (((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__ProcAttr_6)) == (MR_mktag((MR_Integer) 1))))
#line 791 "ml_foreign_proc_gen.m"
          {
#line 791 "ml_foreign_proc_gen.m"
            MR_Integer ml_backend__ml_foreign_proc_gen__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__ProcAttr_6, (MR_Integer) 0)));

#line 795 "ml_foreign_proc_gen.m"
            if ((ml_backend__ml_foreign_proc_gen__HeadVar__1_1 == (MR_Integer) 3))
#line 793 "ml_foreign_proc_gen.m"
              {
#line 793 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_12_12 = (MR_Word) ml_backend__ml_foreign_proc_gen__N_10;

#line 794 "ml_foreign_proc_gen.m"
                {
#line 794 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_12_12));
#line 794 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__3_3, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__TargetAttrs1_9));
#line 794 "ml_foreign_proc_gen.m"
                }
#line 793 "ml_foreign_proc_gen.m"
              }
#line 795 "ml_foreign_proc_gen.m"
            else
#line 801 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = ml_backend__ml_foreign_proc_gen__TargetAttrs1_9;
#line 791 "ml_foreign_proc_gen.m"
          }
#line 803 "ml_foreign_proc_gen.m"
        else
#line 808 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__HeadVar__3_3 = ml_backend__ml_foreign_proc_gen__TargetAttrs1_9;
#line 788 "ml_foreign_proc_gen.m"
      }
#line 787 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__HeadVar__3_3;
#line 787 "ml_foreign_proc_gen.m"
  }
#line 784 "ml_foreign_proc_gen.m"
}

#line 768 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_proc_label_2_p_0(
#line 768 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_3,
#line 768 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_4)
#line 768 "ml_foreign_proc_gen.m"
{
#line 771 "ml_foreign_proc_gen.m"
  {
#line 771 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_5;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__PredId_6;
#line 771 "ml_foreign_proc_gen.m"
    MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_7;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Name_8;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Module_9;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_13_13;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_14_14;
#line 771 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_15_15;

#line 772 "ml_foreign_proc_gen.m"
    {
#line 772 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__ModuleInfo_5);
    }
#line 777 "ml_foreign_proc_gen.m"
    {
#line 777 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__PredId_6);
    }
#line 778 "ml_foreign_proc_gen.m"
    {
#line 778 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_foreign_proc_gen__Info_3, &ml_backend__ml_foreign_proc_gen__ProcId_7);
    }
#line 779 "ml_foreign_proc_gen.m"
    {
#line 779 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_5, ml_backend__ml_foreign_proc_gen__PredId_6, ml_backend__ml_foreign_proc_gen__ProcId_7, &ml_backend__ml_foreign_proc_gen__Name_8, &ml_backend__ml_foreign_proc_gen__Module_9);
    }
#line 781 "ml_foreign_proc_gen.m"
    {
#line 781 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 781 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_15_15, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Module_9));
#line 781 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_15_15, 1) = ((MR_Box) ((MR_Integer) 0));
#line 781 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_15_15, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Name_8));
#line 781 "ml_foreign_proc_gen.m"
    }
#line 781 "ml_foreign_proc_gen.m"
    {
#line 781 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_14_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_14_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 781 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_14_14, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_15_15));
#line 781 "ml_foreign_proc_gen.m"
    }
#line 781 "ml_foreign_proc_gen.m"
    {
#line 781 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_13_13, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_14_14));
#line 781 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_13_13, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
#line 781 "ml_foreign_proc_gen.m"
    }
#line 780 "ml_foreign_proc_gen.m"
    {
#line 780 "ml_foreign_proc_gen.m"
      MR_Word base;
#line 780 "ml_foreign_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__HashDefine_4 = base;
#line 780 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[34])));
#line 780 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_13_13));
#line 780 "ml_foreign_proc_gen.m"
    }
#line 771 "ml_foreign_proc_gen.m"
  }
#line 768 "ml_foreign_proc_gen.m"
}

#line 746 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(
#line 746 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 746 "ml_foreign_proc_gen.m"
{
#line 746 "ml_foreign_proc_gen.m"
  {
#line 746 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 746 "ml_foreign_proc_gen.m"
    MR_builtin_longjmp((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0, 1);
#line 746 "ml_foreign_proc_gen.m"
  }
#line 746 "ml_foreign_proc_gen.m"
}

#line 747 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3(
#line 747 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 747 "ml_foreign_proc_gen.m"
{
#line 747 "ml_foreign_proc_gen.m"
  {
#line 747 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 747 "ml_foreign_proc_gen.m"
    (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14 = ((MR_String) (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14);
#line 747 "ml_foreign_proc_gen.m"
    {
#line 747 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(ml_backend__ml_foreign_proc_gen__env_ptr);
#line 747 "ml_foreign_proc_gen.m"
      return;
    }
#line 747 "ml_foreign_proc_gen.m"
  }
#line 747 "ml_foreign_proc_gen.m"
}

#line 746 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_2(
#line 746 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 746 "ml_foreign_proc_gen.m"
{
#line 746 "ml_foreign_proc_gen.m"
  {
#line 746 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 746 "ml_foreign_proc_gen.m"
    {
#line 748 "ml_foreign_proc_gen.m"
      MR_Integer ml_backend__ml_foreign_proc_gen__V_15_15;

#line 748 "ml_foreign_proc_gen.m"
      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27 = (MR_String) "MR_ALLOC_ID";
#line 748 "ml_foreign_proc_gen.m"
      {
#line 748 "ml_foreign_proc_gen.m"
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = mercury__string__sub_string_search_3_p_0((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__V_27_27, &ml_backend__ml_foreign_proc_gen__V_15_15);
      }
#line 748 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 748 "ml_foreign_proc_gen.m"
        {
#line 748 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_1(ml_backend__ml_foreign_proc_gen__env_ptr);
#line 748 "ml_foreign_proc_gen.m"
          return;
        }
#line 746 "ml_foreign_proc_gen.m"
    }
#line 746 "ml_foreign_proc_gen.m"
  }
#line 746 "ml_foreign_proc_gen.m"
}

#line 746 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(
#line 746 "ml_foreign_proc_gen.m"
  void * ml_backend__ml_foreign_proc_gen__env_ptr_arg)
#line 746 "ml_foreign_proc_gen.m"
{
#line 746 "ml_foreign_proc_gen.m"
  {
#line 746 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s * ml_backend__ml_foreign_proc_gen__env_ptr = (struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s *) ml_backend__ml_foreign_proc_gen__env_ptr_arg;

#line 746 "ml_foreign_proc_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__commit_0) == 0)
#line 746 "ml_foreign_proc_gen.m"
      {
#line 746 "ml_foreign_proc_gen.m"
        {
#line 746 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__TypeCtorInfo_45_45;

#line 746 "ml_foreign_proc_gen.m"
          (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13 == (MR_Integer) 1);
#line 746 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 746 "ml_foreign_proc_gen.m"
            {
#line 6616 "ml_backend.ml_foreign_proc_gen.c"
              ml_backend__ml_foreign_proc_gen__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 747 "ml_foreign_proc_gen.m"
              {
#line 747 "ml_foreign_proc_gen.m"
                mercury__list__member_2_p_1(ml_backend__ml_foreign_proc_gen__TypeCtorInfo_45_45, &(ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__conv0_C_Code_14, (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7, ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_3, ml_backend__ml_foreign_proc_gen__env_ptr);
              }
#line 746 "ml_foreign_proc_gen.m"
            }
#line 746 "ml_foreign_proc_gen.m"
        }
#line 746 "ml_foreign_proc_gen.m"
        (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_FALSE;
#line 746 "ml_foreign_proc_gen.m"
      }
#line 746 "ml_foreign_proc_gen.m"
    else
#line 746 "ml_foreign_proc_gen.m"
      (ml_backend__ml_foreign_proc_gen__env_ptr)->ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded = MR_TRUE;
#line 746 "ml_foreign_proc_gen.m"
  }
#line 746 "ml_foreign_proc_gen.m"
}

#line 737 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0(
#line 737 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__C_Codes_7,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_8,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashDefine_9,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HashUndef_10,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24,
#line 737 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25)
#line 737 "ml_foreign_proc_gen.m"
{
#line 737 "ml_foreign_proc_gen.m"
  {
#line 737 "ml_foreign_proc_gen.m"
    struct ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0_s ml_backend__ml_foreign_proc_gen__env;

#line 737 "ml_foreign_proc_gen.m"
    (ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__C_Codes_7 = ml_backend__ml_foreign_proc_gen__C_Codes_7;
#line 742 "ml_foreign_proc_gen.m"
    {
#line 742 "ml_foreign_proc_gen.m"
      MR_Word ml_backend__ml_foreign_proc_gen__Globals_12;

#line 743 "ml_foreign_proc_gen.m"
      {
#line 743 "ml_foreign_proc_gen.m"
        ml_backend__ml_gen_info__ml_gen_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__Globals_12);
      }
#line 744 "ml_foreign_proc_gen.m"
      {
#line 744 "ml_foreign_proc_gen.m"
        libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 194, &(ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__ProfileMemory_13);
      }
#line 746 "ml_foreign_proc_gen.m"
      {
#line 746 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_4(&ml_backend__ml_foreign_proc_gen__env);
      }
#line 763 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__env).ml_backend__ml_foreign_proc_gen__ml_gen_hash_define_mr_alloc_id_6_p_0_env_0__succeeded)
#line 750 "ml_foreign_proc_gen.m"
        {
#line 750 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_16;
#line 750 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__PredId_17;
#line 750 "ml_foreign_proc_gen.m"
          MR_Integer ml_backend__ml_foreign_proc_gen__ProcId_18;
#line 750 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__GlobalData0_19;
#line 750 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ProcLabel_20;
#line 750 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__AllocId_22;
#line 750 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__GlobalData_23;
#line 750 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;
#line 750 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_35_35;
#line 754 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen___Module_21;

#line 750 "ml_foreign_proc_gen.m"
          {
#line 750 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__ModuleInfo_16);
          }
#line 751 "ml_foreign_proc_gen.m"
          {
#line 751 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_pred_id_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__PredId_17);
          }
#line 752 "ml_foreign_proc_gen.m"
          {
#line 752 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_proc_id_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__ProcId_18);
          }
#line 753 "ml_foreign_proc_gen.m"
          {
#line 753 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, &ml_backend__ml_foreign_proc_gen__GlobalData0_19);
          }
#line 754 "ml_foreign_proc_gen.m"
          {
#line 754 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_gen_proc_label_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_16, ml_backend__ml_foreign_proc_gen__PredId_17, ml_backend__ml_foreign_proc_gen__ProcId_18, &ml_backend__ml_foreign_proc_gen__ProcLabel_20, &ml_backend__ml_foreign_proc_gen___Module_21);
          }
#line 755 "ml_foreign_proc_gen.m"
          {
#line 755 "ml_foreign_proc_gen.m"
            ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(ml_backend__ml_foreign_proc_gen__ProcLabel_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Integer) 0, ml_backend__ml_foreign_proc_gen__Context_8, &ml_backend__ml_foreign_proc_gen__AllocId_22, ml_backend__ml_foreign_proc_gen__GlobalData0_19, &ml_backend__ml_foreign_proc_gen__GlobalData_23);
          }
#line 757 "ml_foreign_proc_gen.m"
          {
#line 757 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_set_global_data_3_p_0(ml_backend__ml_foreign_proc_gen__GlobalData_23, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25);
          }
#line 760 "ml_foreign_proc_gen.m"
          {
#line 760 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 760 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_35_35, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__AllocId_22));
#line 760 "ml_foreign_proc_gen.m"
          }
#line 760 "ml_foreign_proc_gen.m"
          {
#line 760 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_35_35));
#line 760 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[13])));
#line 760 "ml_foreign_proc_gen.m"
          }
#line 759 "ml_foreign_proc_gen.m"
          {
#line 759 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 759 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 759 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__HashDefine_9 = base;
#line 759 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[33])));
#line 759 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_34_34));
#line 759 "ml_foreign_proc_gen.m"
          }
#line 762 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[26]);
#line 750 "ml_foreign_proc_gen.m"
        }
#line 763 "ml_foreign_proc_gen.m"
      else
#line 764 "ml_foreign_proc_gen.m"
        {
#line 764 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashDefine_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HashUndef_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 764 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_25 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_24;
#line 764 "ml_foreign_proc_gen.m"
        }
#line 742 "ml_foreign_proc_gen.m"
    }
#line 737 "ml_foreign_proc_gen.m"
  }
#line 737 "ml_foreign_proc_gen.m"
}

#line 713 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_obtain_release_global_lock_5_p_0(
#line 713 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Info_6,
#line 713 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ThreadSafe_7,
#line 713 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__PredId_8,
#line 713 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ObtainLock_9,
#line 713 "ml_foreign_proc_gen.m"
  MR_String * ml_backend__ml_foreign_proc_gen__ReleaseLock_10)
#line 713 "ml_foreign_proc_gen.m"
{
#line 717 "ml_foreign_proc_gen.m"
  {
#line 717 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 717 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_11;
#line 717 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Globals_12;
#line 717 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Parallel_13;

#line 718 "ml_foreign_proc_gen.m"
    {
#line 718 "ml_foreign_proc_gen.m"
      ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__Info_6, &ml_backend__ml_foreign_proc_gen__ModuleInfo_11);
    }
#line 719 "ml_foreign_proc_gen.m"
    {
#line 719 "ml_foreign_proc_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_11, &ml_backend__ml_foreign_proc_gen__Globals_12);
    }
#line 720 "ml_foreign_proc_gen.m"
    {
#line 720 "ml_foreign_proc_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_foreign_proc_gen__Globals_12, (MR_Integer) 216, &ml_backend__ml_foreign_proc_gen__Parallel_13);
    }
#line 722 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__Parallel_13 == (MR_Integer) 1);
#line 722 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 723 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__ThreadSafe_7 == (MR_Integer) 0);
#line 732 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 725 "ml_foreign_proc_gen.m"
      {
#line 725 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__PredInfo_14;
#line 725 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__Name_15;
#line 725 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__MangledName_16;
#line 725 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_18_18;
#line 725 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
#line 725 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_24_24;

#line 725 "ml_foreign_proc_gen.m"
        {
#line 725 "ml_foreign_proc_gen.m"
          hlds__hlds_module__module_info_pred_info_3_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_11, ml_backend__ml_foreign_proc_gen__PredId_8, &ml_backend__ml_foreign_proc_gen__PredInfo_14);
        }
#line 726 "ml_foreign_proc_gen.m"
        {
#line 726 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__Name_15 = hlds__hlds_pred__pred_info_name_1_f_0(ml_backend__ml_foreign_proc_gen__PredInfo_14);
        }
#line 727 "ml_foreign_proc_gen.m"
        {
#line 727 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__MangledName_16 = backend_libs__c_util__quote_string_1_f_0(ml_backend__ml_foreign_proc_gen__Name_15);
        }
#line 729 "ml_foreign_proc_gen.m"
        {
#line 729 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 729 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MangledName_16));
#line 729 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_foreign_proc_gen_scalar_common_1[32])));
#line 729 "ml_foreign_proc_gen.m"
        }
#line 728 "ml_foreign_proc_gen.m"
        {
#line 728 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_18_18, 0) = ((MR_Box) ((MR_String) "\tMR_OBTAIN_GLOBAL_LOCK(\""));
#line 728 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_18_18, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 728 "ml_foreign_proc_gen.m"
        }
#line 728 "ml_foreign_proc_gen.m"
        {
#line 728 "ml_foreign_proc_gen.m"
          mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__V_18_18, ml_backend__ml_foreign_proc_gen__ObtainLock_9);
        }
#line 730 "ml_foreign_proc_gen.m"
        {
#line 730 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_24_24, 0) = ((MR_Box) ((MR_String) "\tMR_RELEASE_GLOBAL_LOCK(\""));
#line 730 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_24_24, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 730 "ml_foreign_proc_gen.m"
        }
#line 730 "ml_foreign_proc_gen.m"
        {
#line 730 "ml_foreign_proc_gen.m"
          mercury__string__append_list_2_p_0(ml_backend__ml_foreign_proc_gen__V_24_24, ml_backend__ml_foreign_proc_gen__ReleaseLock_10);
#line 730 "ml_foreign_proc_gen.m"
          return;
        }
#line 725 "ml_foreign_proc_gen.m"
      }
#line 732 "ml_foreign_proc_gen.m"
    else
#line 733 "ml_foreign_proc_gen.m"
      {
#line 733 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__ObtainLock_9 = (MR_String) "";
#line 734 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__ReleaseLock_10 = (MR_String) "";
#line 733 "ml_foreign_proc_gen.m"
      }
#line 717 "ml_foreign_proc_gen.m"
  }
#line 713 "ml_foreign_proc_gen.m"
}

#line 486 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_var_decl_defn_9_p_0(
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_10,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_11,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgMap_12,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__VarSet_13,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_14,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ByRefOutputVars_15,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__CopiedOutputVars_16,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_17,
#line 486 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Defn_18)
#line 486 "ml_foreign_proc_gen.m"
{
#line 492 "ml_foreign_proc_gen.m"
  {
#line 492 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__TypeInfo_43_43 = (MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1];
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_19;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameMode_21;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Type_22;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_23;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarName_24;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__NonMangledVarName_27;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSType0_28;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Initializer_29;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSType_30;
#line 492 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_42_42;
#line 493 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__conv0_ForeignArg_19;
#line 494 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;
#line 513 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_38_38;

#line 493 "ml_foreign_proc_gen.m"
    {
#line 493 "ml_foreign_proc_gen.m"
      mercury__map__lookup_3_p_0(ml_backend__ml_foreign_proc_gen__TypeInfo_43_43, (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ml_backend__ml_foreign_proc_gen__ArgMap_12, ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_17)), &ml_backend__ml_foreign_proc_gen__conv0_ForeignArg_19);
    }
#line 493 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__ForeignArg_19 = ((MR_Word) ml_backend__ml_foreign_proc_gen__conv0_ForeignArg_19);
#line 494 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_19, (MR_Integer) 0)));
#line 494 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__MaybeNameMode_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_19, (MR_Integer) 1)));
#line 494 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__Type_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_19, (MR_Integer) 2)));
#line 494 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__BoxPolicy_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_19, (MR_Integer) 3)));
#line 495 "ml_foreign_proc_gen.m"
    {
#line 495 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__VarName_24 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_foreign_proc_gen__VarSet_13, ml_backend__ml_foreign_proc_gen__Var_17);
    }
#line 499 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__MaybeNameMode_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "ml_foreign_proc_gen.m"
      {
#line 501 "ml_foreign_proc_gen.m"
        {
#line 501 "ml_foreign_proc_gen.m"
          mercury__require__sorry_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_pragma_il_proc_var_decl_defn\'/9", (MR_String) "no variable name for var");
#line 501 "ml_foreign_proc_gen.m"
          return;
        }
#line 500 "ml_foreign_proc_gen.m"
      }
#line 499 "ml_foreign_proc_gen.m"
    else
#line 497 "ml_foreign_proc_gen.m"
      {
#line 497 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__UserVarNameString_25;
#line 497 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameMode_21, (MR_Integer) 0)));
#line 497 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;

#line 497 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__UserVarNameString_25 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_36_36, (MR_Integer) 0)));
#line 497 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_36_36, (MR_Integer) 1)));
#line 498 "ml_foreign_proc_gen.m"
        {
#line 498 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__NonMangledVarName_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 498 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_27, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__UserVarNameString_25));
#line 498 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 498 "ml_foreign_proc_gen.m"
        }
#line 497 "ml_foreign_proc_gen.m"
      }
#line 506 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__BoxPolicy_23 == (MR_Integer) 1))
#line 505 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MLDSType0_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 506 "ml_foreign_proc_gen.m"
    else
#line 508 "ml_foreign_proc_gen.m"
      {
#line 508 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__MLDSType0_28 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_10, ml_backend__ml_foreign_proc_gen__Type_22);
      }
#line 513 "ml_foreign_proc_gen.m"
    {
#line 513 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_38_38 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_10, ml_backend__ml_foreign_proc_gen__Type_22);
    }
#line 513 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_38_38 == (MR_Integer) 0);
#line 516 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 514 "ml_foreign_proc_gen.m"
      {
#line 514 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__Initializer_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 515 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__MLDSType_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 514 "ml_foreign_proc_gen.m"
      }
#line 516 "ml_foreign_proc_gen.m"
    else
#line 519 "ml_foreign_proc_gen.m"
      {
#line 516 "ml_foreign_proc_gen.m"
        {
#line 516 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__succeeded = mercury__list__member_2_p_0(ml_backend__ml_foreign_proc_gen__TypeInfo_43_43, ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_17)), ml_backend__ml_foreign_proc_gen__ByRefOutputVars_15);
        }
#line 519 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 517 "ml_foreign_proc_gen.m"
          {
#line 517 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Initializer_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 518 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__MLDSType_30 = ml_backend__ml_foreign_proc_gen__MLDSType0_28;
#line 517 "ml_foreign_proc_gen.m"
          }
#line 519 "ml_foreign_proc_gen.m"
        else
#line 522 "ml_foreign_proc_gen.m"
          {
#line 519 "ml_foreign_proc_gen.m"
            {
#line 519 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__succeeded = mercury__list__member_2_p_0(ml_backend__ml_foreign_proc_gen__TypeInfo_43_43, ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_17)), ml_backend__ml_foreign_proc_gen__CopiedOutputVars_16);
            }
#line 522 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 520 "ml_foreign_proc_gen.m"
              {
#line 520 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__Initializer_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 521 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__MLDSType_30 = ml_backend__ml_foreign_proc_gen__MLDSType0_28;
#line 520 "ml_foreign_proc_gen.m"
              }
#line 522 "ml_foreign_proc_gen.m"
            else
#line 523 "ml_foreign_proc_gen.m"
              {
#line 523 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__QualVarName_31;
#line 523 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_40_40;
#line 523 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_41_41;

#line 523 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__MLDSType_30 = ml_backend__ml_foreign_proc_gen__MLDSType0_28;
#line 524 "ml_foreign_proc_gen.m"
                {
#line 524 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__QualVarName_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 524 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualVarName_31, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_11));
#line 524 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualVarName_31, 1) = ((MR_Box) ((MR_Integer) 0));
#line 524 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualVarName_31, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarName_24));
#line 524 "ml_foreign_proc_gen.m"
                }
#line 525 "ml_foreign_proc_gen.m"
                {
#line 525 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_41_41, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualVarName_31));
#line 525 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_41_41, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_30));
#line 525 "ml_foreign_proc_gen.m"
                }
#line 525 "ml_foreign_proc_gen.m"
                {
#line 525 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_40_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_40_40, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_41_41));
#line 525 "ml_foreign_proc_gen.m"
                }
#line 525 "ml_foreign_proc_gen.m"
                {
#line 525 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__Initializer_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 525 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Initializer_29, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_40_40));
#line 525 "ml_foreign_proc_gen.m"
                }
#line 523 "ml_foreign_proc_gen.m"
              }
#line 522 "ml_foreign_proc_gen.m"
          }
#line 519 "ml_foreign_proc_gen.m"
      }
#line 531 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_foreign_proc_gen__NonMangledVarName_27);
#line 531 "ml_foreign_proc_gen.m"
    {
#line 531 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Defn_18 = ml_backend__ml_code_util__ml_gen_mlds_var_decl_init_5_f_0(ml_backend__ml_foreign_proc_gen__V_42_42, ml_backend__ml_foreign_proc_gen__MLDSType_30, ml_backend__ml_foreign_proc_gen__Initializer_29, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_foreign_proc_gen__MLDSContext_14);
    }
#line 492 "ml_foreign_proc_gen.m"
  }
#line 486 "ml_foreign_proc_gen.m"
}

#line 450 "ml_foreign_proc_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_pragma_il_proc_assign_output_8_p_0(
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_9,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__MLDSModuleName_10,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__ArgMap_11,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__VarSet_12,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Context_13,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__IsByRef_14,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Var_15,
#line 450 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__Statement_16)
#line 450 "ml_foreign_proc_gen.m"
{
#line 456 "ml_foreign_proc_gen.m"
  {
#line 456 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_17;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MaybeNameMode_19;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Type_20;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_21;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSType_22;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__VarName_23;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__QualVarName_24;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OutputVarLval_25;
#line 456 "ml_foreign_proc_gen.m"
    MR_String ml_backend__ml_foreign_proc_gen__UserVarNameString_26;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__NonMangledVarName_28;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__QualLocalVarName_29;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__LocalVarLval_30;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_31_31;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_32_32;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_35_35;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_36_36;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_37_37;
#line 456 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_38_38;
#line 457 "ml_foreign_proc_gen.m"
    MR_Box ml_backend__ml_foreign_proc_gen__conv0_ForeignArg_17;
#line 458 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_18_18;
#line 479 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_27_27;

#line 457 "ml_foreign_proc_gen.m"
    {
#line 457 "ml_foreign_proc_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1], (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ml_backend__ml_foreign_proc_gen__ArgMap_11, ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_15)), &ml_backend__ml_foreign_proc_gen__conv0_ForeignArg_17);
    }
#line 457 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__ForeignArg_17 = ((MR_Word) ml_backend__ml_foreign_proc_gen__conv0_ForeignArg_17);
#line 458 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_17, (MR_Integer) 0)));
#line 458 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__MaybeNameMode_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_17, (MR_Integer) 1)));
#line 458 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_17, (MR_Integer) 2)));
#line 458 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__BoxPolicy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_17, (MR_Integer) 3)));
#line 459 "ml_foreign_proc_gen.m"
    {
#line 459 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_31_31 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_9, ml_backend__ml_foreign_proc_gen__Type_20);
    }
#line 459 "ml_foreign_proc_gen.m"
    ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_31_31 == (MR_Integer) 1);
#line 456 "ml_foreign_proc_gen.m"
    if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 456 "ml_foreign_proc_gen.m"
      {
#line 463 "ml_foreign_proc_gen.m"
        if ((ml_backend__ml_foreign_proc_gen__BoxPolicy_21 == (MR_Integer) 1))
#line 462 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__MLDSType_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 463 "ml_foreign_proc_gen.m"
        else
#line 465 "ml_foreign_proc_gen.m"
          {
#line 465 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__MLDSType_22 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_9, ml_backend__ml_foreign_proc_gen__Type_20);
          }
#line 468 "ml_foreign_proc_gen.m"
        {
#line 468 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__VarName_23 = ml_backend__ml_code_util__ml_gen_var_name_2_f_0(ml_backend__ml_foreign_proc_gen__VarSet_12, ml_backend__ml_foreign_proc_gen__Var_15);
        }
#line 469 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_32_32 = (MR_Integer) 0;
#line 469 "ml_foreign_proc_gen.m"
        {
#line 469 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__QualVarName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 469 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualVarName_24, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_10));
#line 469 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualVarName_24, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_32_32));
#line 469 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualVarName_24, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarName_23));
#line 469 "ml_foreign_proc_gen.m"
        }
#line 474 "ml_foreign_proc_gen.m"
        if ((ml_backend__ml_foreign_proc_gen__IsByRef_14 == (MR_Integer) 0))
#line 476 "ml_foreign_proc_gen.m"
          {
#line 476 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__OutputVarLval_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 476 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutputVarLval_25, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualVarName_24));
#line 476 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__OutputVarLval_25, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_22));
#line 476 "ml_foreign_proc_gen.m"
          }
#line 474 "ml_foreign_proc_gen.m"
        else
#line 471 "ml_foreign_proc_gen.m"
          {
#line 471 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_33_33;
#line 471 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_34_34;

#line 472 "ml_foreign_proc_gen.m"
            {
#line 472 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_34_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_34_34, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualVarName_24));
#line 472 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_22));
#line 472 "ml_foreign_proc_gen.m"
            }
#line 472 "ml_foreign_proc_gen.m"
            {
#line 472 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_33_33, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_34_34));
#line 472 "ml_foreign_proc_gen.m"
            }
#line 472 "ml_foreign_proc_gen.m"
            {
#line 472 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__OutputVarLval_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__OutputVarLval_25, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_33_33));
#line 472 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__OutputVarLval_25, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_22));
#line 472 "ml_foreign_proc_gen.m"
            }
#line 471 "ml_foreign_proc_gen.m"
          }
#line 479 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeNameMode_19)) == (MR_mktag((MR_Integer) 1)));
#line 479 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 479 "ml_foreign_proc_gen.m"
          {
#line 479 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeNameMode_19, (MR_Integer) 0)));
#line 479 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__UserVarNameString_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_35_35, (MR_Integer) 0)));
#line 479 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_35_35, (MR_Integer) 1)));
#line 480 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_37_37 = (MR_Integer) 0;
#line 480 "ml_foreign_proc_gen.m"
            {
#line 480 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__NonMangledVarName_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_28, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__UserVarNameString_26));
#line 480 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__NonMangledVarName_28, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_36_36));
#line 480 "ml_foreign_proc_gen.m"
            }
#line 481 "ml_foreign_proc_gen.m"
            {
#line 481 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__QualLocalVarName_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 481 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_29, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSModuleName_10));
#line 481 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_29, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_37_37));
#line 481 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__QualLocalVarName_29, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__NonMangledVarName_28));
#line 481 "ml_foreign_proc_gen.m"
            }
#line 482 "ml_foreign_proc_gen.m"
            {
#line 482 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__LocalVarLval_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_30, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__QualLocalVarName_29));
#line 482 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__LocalVarLval_30, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSType_22));
#line 482 "ml_foreign_proc_gen.m"
            }
#line 484 "ml_foreign_proc_gen.m"
            {
#line 484 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "ml_foreign_proc_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_38_38, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__LocalVarLval_30));
#line 484 "ml_foreign_proc_gen.m"
            }
#line 484 "ml_foreign_proc_gen.m"
            {
#line 484 "ml_foreign_proc_gen.m"
              *ml_backend__ml_foreign_proc_gen__Statement_16 = ml_backend__ml_code_util__ml_gen_assign_3_f_0(ml_backend__ml_foreign_proc_gen__OutputVarLval_25, ml_backend__ml_foreign_proc_gen__V_38_38, ml_backend__ml_foreign_proc_gen__Context_13);
            }
#line 484 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = MR_TRUE;
#line 479 "ml_foreign_proc_gen.m"
          }
#line 456 "ml_foreign_proc_gen.m"
      }
#line 456 "ml_foreign_proc_gen.m"
    return ml_backend__ml_foreign_proc_gen__succeeded;
#line 456 "ml_foreign_proc_gen.m"
  }
#line 450 "ml_foreign_proc_gen.m"
}

#line 441 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__build_arg_map_3_p_0(
#line 441 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 441 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_0_2,
#line 441 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_3)
#line 441 "ml_foreign_proc_gen.m"
{
#line 444 "ml_foreign_proc_gen.m"
  while (MR_TRUE)
#line 444 "ml_foreign_proc_gen.m"
    {
#line 444 "ml_foreign_proc_gen.m"
      /* tailcall optimized into a loop */
#line 444 "ml_foreign_proc_gen.m"
      {
#line 444 "ml_foreign_proc_gen.m"
        MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 444 "ml_foreign_proc_gen.m"
        if ((ml_backend__ml_foreign_proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 444 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_3 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_0_2;
#line 444 "ml_foreign_proc_gen.m"
        else
#line 445 "ml_foreign_proc_gen.m"
          {
#line 445 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ForeignArg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 445 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ForeignArgs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 445 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 0)));
#line 445 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_16_16;
#line 446 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 1)));
#line 446 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 2)));
#line 446 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__ForeignArg_7, (MR_Integer) 3)));

#line 447 "ml_foreign_proc_gen.m"
            {
#line 447 "ml_foreign_proc_gen.m"
              mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_foreign_proc_gen_scalar_common_1[1], (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_foreign_arg_0, ((MR_Box) (ml_backend__ml_foreign_proc_gen__Var_10)), ((MR_Box) (ml_backend__ml_foreign_proc_gen__ForeignArg_7)), ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_0_2, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_16_16);
            }
#line 448 "ml_foreign_proc_gen.m"
            /* direct tailcall eliminated */
#line 448 "ml_foreign_proc_gen.m"
            {
#line 448 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1__tmp_copy_1 = ml_backend__ml_foreign_proc_gen__ForeignArgs_8;
#line 448 "ml_foreign_proc_gen.m"
              MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_0__tmp_copy_2 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_16_16;

#line 448 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_0_2 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_ArgMap_0__tmp_copy_2;
#line 448 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__HeadVar__1_1 = ml_backend__ml_foreign_proc_gen__HeadVar__1__tmp_copy_1;
#line 448 "ml_foreign_proc_gen.m"
            }
#line 448 "ml_foreign_proc_gen.m"
            continue;
#line 445 "ml_foreign_proc_gen.m"
          }
#line 444 "ml_foreign_proc_gen.m"
      }
#line 444 "ml_foreign_proc_gen.m"
      break;
#line 444 "ml_foreign_proc_gen.m"
    }
#line 441 "ml_foreign_proc_gen.m"
}

#line 334 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_p_0(
#line 334 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__HeadVar__1_1,
#line 334 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__HeadVar__2_2,
#line 334 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_3,
#line 334 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4)
#line 334 "ml_foreign_proc_gen.m"
{
#line 337 "ml_foreign_proc_gen.m"
  {
#line 337 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 337 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "ml_foreign_proc_gen.m"
      {
#line 337 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "ml_foreign_proc_gen.m"
        *ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4 = ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_3;
#line 337 "ml_foreign_proc_gen.m"
      }
#line 337 "ml_foreign_proc_gen.m"
    else
#line 338 "ml_foreign_proc_gen.m"
      {
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Arg_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OutlineArg_10;
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OutlineArgs_11;
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_8, (MR_Integer) 0)));
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MaybeVarMode_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_8, (MR_Integer) 1)));
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__OrigType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_8, (MR_Integer) 2)));
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Arg_8, (MR_Integer) 3)));
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_17;
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__VarLval_18;
#line 338 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__MldsType_19;
#line 366 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__ArgName_20;
#line 366 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__Mode_21;
#line 351 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
#line 351 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_27_27;
#line 924 "ml_foreign_proc_gen.m"
        MR_Char ml_backend__ml_foreign_proc_gen__V_31_31;
#line 925 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__V_30_30;

#line 340 "ml_foreign_proc_gen.m"
        {
#line 340 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__ml_gen_outline_args_4_p_0(ml_backend__ml_foreign_proc_gen__Args_9, &ml_backend__ml_foreign_proc_gen__OutlineArgs_11, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_3, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4);
        }
#line 341 "ml_foreign_proc_gen.m"
        {
#line 341 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4, &ml_backend__ml_foreign_proc_gen__ModuleInfo_17);
        }
#line 342 "ml_foreign_proc_gen.m"
        {
#line 342 "ml_foreign_proc_gen.m"
          ml_backend__ml_code_util__ml_gen_var_3_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4, ml_backend__ml_foreign_proc_gen__Var_13, &ml_backend__ml_foreign_proc_gen__VarLval_18);
        }
#line 346 "ml_foreign_proc_gen.m"
        if ((ml_backend__ml_foreign_proc_gen__BoxPolicy_16 == (MR_Integer) 1))
#line 348 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__MldsType_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 346 "ml_foreign_proc_gen.m"
        else
#line 345 "ml_foreign_proc_gen.m"
          {
#line 345 "ml_foreign_proc_gen.m"
            ml_backend__ml_code_util__ml_gen_type_3_p_0(*ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_4, ml_backend__ml_foreign_proc_gen__OrigType_15, &ml_backend__ml_foreign_proc_gen__MldsType_19);
          }
#line 351 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__MaybeVarMode_14)) == (MR_mktag((MR_Integer) 1)));
#line 351 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 351 "ml_foreign_proc_gen.m"
          {
#line 351 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__MaybeVarMode_14, (MR_Integer) 0)));
#line 351 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ArgName_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 0)));
#line 351 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Mode_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__V_26_26, (MR_Integer) 1)));
#line 352 "ml_foreign_proc_gen.m"
            {
#line 352 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__V_27_27 = check_hlds__type_util__check_dummy_type_2_f_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_17, ml_backend__ml_foreign_proc_gen__OrigType_15);
            }
#line 352 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__succeeded = (ml_backend__ml_foreign_proc_gen__V_27_27 == (MR_Integer) 1);
#line 351 "ml_foreign_proc_gen.m"
            if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 351 "ml_foreign_proc_gen.m"
              {
#line 925 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__V_31_31 = (MR_Char) 95;
#line 925 "ml_foreign_proc_gen.m"
                {
#line 925 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__succeeded = mercury__string__first_char_3_p_2(ml_backend__ml_foreign_proc_gen__ArgName_20, ml_backend__ml_foreign_proc_gen__V_31_31, &ml_backend__ml_foreign_proc_gen__V_30_30);
                }
#line 353 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__succeeded = !(ml_backend__ml_foreign_proc_gen__succeeded);
#line 351 "ml_foreign_proc_gen.m"
              }
#line 351 "ml_foreign_proc_gen.m"
          }
#line 366 "ml_foreign_proc_gen.m"
        if (ml_backend__ml_foreign_proc_gen__succeeded)
#line 355 "ml_foreign_proc_gen.m"
          {
#line 355 "ml_foreign_proc_gen.m"
            MR_Word ml_backend__ml_foreign_proc_gen__ArgMode_22;

#line 355 "ml_foreign_proc_gen.m"
            {
#line 355 "ml_foreign_proc_gen.m"
              check_hlds__mode_util__mode_to_arg_mode_4_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_17, ml_backend__ml_foreign_proc_gen__Mode_21, ml_backend__ml_foreign_proc_gen__OrigType_15, &ml_backend__ml_foreign_proc_gen__ArgMode_22);
            }
#line 359 "ml_foreign_proc_gen.m"
            if ((ml_backend__ml_foreign_proc_gen__ArgMode_22 == (MR_Integer) 0))
#line 357 "ml_foreign_proc_gen.m"
              {
#line 357 "ml_foreign_proc_gen.m"
                MR_Word ml_backend__ml_foreign_proc_gen__V_28_28;

#line 358 "ml_foreign_proc_gen.m"
                {
#line 358 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 358 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__V_28_28, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_18));
#line 358 "ml_foreign_proc_gen.m"
                }
#line 358 "ml_foreign_proc_gen.m"
                {
#line 358 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__OutlineArg_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 358 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MldsType_19));
#line 358 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_20));
#line 358 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_28_28));
#line 358 "ml_foreign_proc_gen.m"
                }
#line 357 "ml_foreign_proc_gen.m"
              }
#line 359 "ml_foreign_proc_gen.m"
            else
#line 359 "ml_foreign_proc_gen.m"
              if ((ml_backend__ml_foreign_proc_gen__ArgMode_22 == (MR_Integer) 1))
#line 361 "ml_foreign_proc_gen.m"
                {
#line 361 "ml_foreign_proc_gen.m"
                  ml_backend__ml_foreign_proc_gen__OutlineArg_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 361 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MldsType_19));
#line 361 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__ArgName_20));
#line 361 "ml_foreign_proc_gen.m"
                  MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__OutlineArg_10, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__VarLval_18));
#line 361 "ml_foreign_proc_gen.m"
                }
#line 359 "ml_foreign_proc_gen.m"
              else
#line 364 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__OutlineArg_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 355 "ml_foreign_proc_gen.m"
          }
#line 366 "ml_foreign_proc_gen.m"
        else
#line 367 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__OutlineArg_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "ml_foreign_proc_gen.m"
        {
#line 338 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 338 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__HeadVar__2_2 = base;
#line 338 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineArg_10));
#line 338 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__OutlineArgs_11));
#line 338 "ml_foreign_proc_gen.m"
        }
#line 338 "ml_foreign_proc_gen.m"
      }
#line 337 "ml_foreign_proc_gen.m"
  }
#line 334 "ml_foreign_proc_gen.m"
}

#line 72 "ml_foreign_proc_gen.m"
static void MR_CALL 
ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(
#line 72 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__Expr_5,
#line 72 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__CondRval_6,
#line 72 "ml_foreign_proc_gen.m"
  MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17,
#line 72 "ml_foreign_proc_gen.m"
  MR_Word * ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18)
#line 72 "ml_foreign_proc_gen.m"
{
#line 77 "ml_foreign_proc_gen.m"
  {
#line 77 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;

#line 77 "ml_foreign_proc_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__Expr_5)) == (MR_mktag((MR_Integer) 0))))
#line 77 "ml_foreign_proc_gen.m"
      {
#line 77 "ml_foreign_proc_gen.m"
        MR_String ml_backend__ml_foreign_proc_gen__EnvVar_8;
#line 77 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__EnvVarRval_9;
#line 77 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 77 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_26_26;
#line 77 "ml_foreign_proc_gen.m"
        MR_Word ml_backend__ml_foreign_proc_gen__V_27_27;

#line 77 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__EnvVar_8 = (MR_String) ml_backend__ml_foreign_proc_gen__V_24_24;
#line 78 "ml_foreign_proc_gen.m"
        {
#line 78 "ml_foreign_proc_gen.m"
          ml_backend__ml_gen_info__ml_gen_info_add_env_var_name_3_p_0(ml_backend__ml_foreign_proc_gen__EnvVar_8, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
        }
#line 79 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__V_27_27 = (MR_Word) ml_backend__ml_foreign_proc_gen__EnvVar_8;
#line 79 "ml_foreign_proc_gen.m"
        {
#line 79 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__V_26_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 79 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_26_26, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_27_27));
#line 79 "ml_foreign_proc_gen.m"
        }
#line 79 "ml_foreign_proc_gen.m"
        {
#line 79 "ml_foreign_proc_gen.m"
          ml_backend__ml_foreign_proc_gen__EnvVarRval_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 79 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__EnvVarRval_9, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_26_26));
#line 79 "ml_foreign_proc_gen.m"
        }
#line 81 "ml_foreign_proc_gen.m"
        {
#line 81 "ml_foreign_proc_gen.m"
          MR_Word base;
#line 81 "ml_foreign_proc_gen.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 81 "ml_foreign_proc_gen.m"
          *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 81 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 81 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 81 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__EnvVarRval_9));
#line 81 "ml_foreign_proc_gen.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_1[31])));
#line 81 "ml_foreign_proc_gen.m"
        }
#line 77 "ml_foreign_proc_gen.m"
      }
#line 77 "ml_foreign_proc_gen.m"
    else
#line 77 "ml_foreign_proc_gen.m"
      if (((MR_tag((MR_Word) ml_backend__ml_foreign_proc_gen__Expr_5)) == (MR_mktag((MR_Integer) 1))))
#line 83 "ml_foreign_proc_gen.m"
        {
#line 83 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprA_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 83 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalA_12;

#line 84 "ml_foreign_proc_gen.m"
          {
#line 84 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_11, &ml_backend__ml_foreign_proc_gen__RvalA_12, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
#line 85 "ml_foreign_proc_gen.m"
          {
#line 85 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 85 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 85 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 85 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 85 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_foreign_proc_gen_scalar_common_2[1])));
#line 85 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_12));
#line 85 "ml_foreign_proc_gen.m"
          }
#line 83 "ml_foreign_proc_gen.m"
        }
#line 77 "ml_foreign_proc_gen.m"
      else
#line 87 "ml_foreign_proc_gen.m"
        {
#line 87 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__TraceOp_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 0)));
#line 87 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprB_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 2)));
#line 87 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalB_15;
#line 87 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Op_16;
#line 87 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19;
#line 87 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ExprA_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__Expr_5, (MR_Integer) 1)));
#line 87 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__RvalA_32;

#line 88 "ml_foreign_proc_gen.m"
          {
#line 88 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprA_31, &ml_backend__ml_foreign_proc_gen__RvalA_32, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_17, &ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19);
          }
#line 89 "ml_foreign_proc_gen.m"
          {
#line 89 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__ExprB_14, &ml_backend__ml_foreign_proc_gen__RvalB_15, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_19_19, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_18);
          }
#line 93 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__TraceOp_13 == (MR_Integer) 1))
#line 95 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10));
#line 93 "ml_foreign_proc_gen.m"
          else
#line 92 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__Op_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
#line 97 "ml_foreign_proc_gen.m"
          {
#line 97 "ml_foreign_proc_gen.m"
            MR_Word base;
#line 97 "ml_foreign_proc_gen.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 97 "ml_foreign_proc_gen.m"
            *ml_backend__ml_foreign_proc_gen__CondRval_6 = base;
#line 97 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 97 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Op_16));
#line 97 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalA_32));
#line 97 "ml_foreign_proc_gen.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__RvalB_15));
#line 97 "ml_foreign_proc_gen.m"
          }
#line 87 "ml_foreign_proc_gen.m"
        }
#line 77 "ml_foreign_proc_gen.m"
  }
#line 72 "ml_foreign_proc_gen.m"
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
#line 101 "ml_foreign_proc_gen.m"
  {
#line 101 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 101 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Lang_24;
#line 101 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryKind_25;

#line 102 "ml_foreign_proc_gen.m"
    {
#line 102 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Lang_24 = parse_tree__prog_data__get_foreign_language_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
    }
#line 106 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__CodeModel_13 == (MR_Integer) 0))
#line 105 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 0;
#line 106 "ml_foreign_proc_gen.m"
    else
#line 106 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__CodeModel_13 == (MR_Integer) 2))
#line 124 "ml_foreign_proc_gen.m"
        {
#line 124 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32;

#line 125 "ml_foreign_proc_gen.m"
          {
#line 125 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32 = parse_tree__prog_data__get_ordinary_despite_detism_1_f_0(ml_backend__ml_foreign_proc_gen__Attributes_14);
          }
#line 129 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__OrdinaryDespiteDetism_32 == (MR_Integer) 0))
#line 127 "ml_foreign_proc_gen.m"
            {
#line 128 "ml_foreign_proc_gen.m"
              {
#line 128 "ml_foreign_proc_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected code model");
#line 128 "ml_foreign_proc_gen.m"
                return;
              }
#line 127 "ml_foreign_proc_gen.m"
            }
#line 129 "ml_foreign_proc_gen.m"
          else
#line 131 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 1;
#line 124 "ml_foreign_proc_gen.m"
        }
#line 106 "ml_foreign_proc_gen.m"
      else
#line 107 "ml_foreign_proc_gen.m"
        {
#line 107 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ModuleInfo_26;
#line 107 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__ProcInfo_28;
#line 107 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Detism_29;
#line 107 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__MaxSoln_31;
#line 109 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen___PredInfo_27;
#line 112 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__V_30_30;

#line 108 "ml_foreign_proc_gen.m"
          {
#line 108 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_module_info_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, &ml_backend__ml_foreign_proc_gen__ModuleInfo_26);
          }
#line 109 "ml_foreign_proc_gen.m"
          {
#line 109 "ml_foreign_proc_gen.m"
            hlds__hlds_module__module_info_pred_proc_info_5_p_0(ml_backend__ml_foreign_proc_gen__ModuleInfo_26, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__ProcId_16, &ml_backend__ml_foreign_proc_gen___PredInfo_27, &ml_backend__ml_foreign_proc_gen__ProcInfo_28);
          }
#line 111 "ml_foreign_proc_gen.m"
          {
#line 111 "ml_foreign_proc_gen.m"
            hlds__hlds_pred__proc_info_interface_determinism_2_p_0(ml_backend__ml_foreign_proc_gen__ProcInfo_28, &ml_backend__ml_foreign_proc_gen__Detism_29);
          }
#line 112 "ml_foreign_proc_gen.m"
          {
#line 112 "ml_foreign_proc_gen.m"
            parse_tree__prog_data__determinism_components_3_p_0(ml_backend__ml_foreign_proc_gen__Detism_29, &ml_backend__ml_foreign_proc_gen__V_30_30, &ml_backend__ml_foreign_proc_gen__MaxSoln_31);
          }
#line 116 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__MaxSoln_31 == (MR_Integer) 0))
#line 115 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 2;
#line 116 "ml_foreign_proc_gen.m"
          else
#line 121 "ml_foreign_proc_gen.m"
            ml_backend__ml_foreign_proc_gen__OrdinaryKind_25 = (MR_Integer) 1;
#line 107 "ml_foreign_proc_gen.m"
        }
#line 139 "ml_foreign_proc_gen.m"
    if ((ml_backend__ml_foreign_proc_gen__Lang_24 == (MR_Integer) 0))
#line 136 "ml_foreign_proc_gen.m"
      {
#line 136 "ml_foreign_proc_gen.m"
        ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_95_112_114_111_99_95_95_91_52_93_95_48_12_p_0(ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
#line 136 "ml_foreign_proc_gen.m"
        return;
      }
#line 139 "ml_foreign_proc_gen.m"
    else
#line 139 "ml_foreign_proc_gen.m"
      if ((ml_backend__ml_foreign_proc_gen__Lang_24 == (MR_Integer) 1))
#line 140 "ml_foreign_proc_gen.m"
        {
#line 140 "ml_foreign_proc_gen.m"
          MR_Word ml_backend__ml_foreign_proc_gen__Target_33;

#line 141 "ml_foreign_proc_gen.m"
          {
#line 141 "ml_foreign_proc_gen.m"
            ml_backend__ml_gen_info__ml_gen_info_get_target_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, &ml_backend__ml_foreign_proc_gen__Target_33);
          }
#line 147 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__Target_33 == (MR_Integer) 2))
#line 143 "ml_foreign_proc_gen.m"
            {
#line 144 "ml_foreign_proc_gen.m"
              {
#line 144 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 3, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
#line 144 "ml_foreign_proc_gen.m"
                return;
              }
#line 143 "ml_foreign_proc_gen.m"
            }
#line 147 "ml_foreign_proc_gen.m"
          else
#line 147 "ml_foreign_proc_gen.m"
            if ((ml_backend__ml_foreign_proc_gen__Target_33 == (MR_Integer) 1))
#line 149 "ml_foreign_proc_gen.m"
              {
#line 149 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_109_97_110_97_103_101_100_95_112_114_111_99_95_95_91_51_44_32_52_93_95_48_12_p_0(ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
#line 149 "ml_foreign_proc_gen.m"
                return;
              }
#line 147 "ml_foreign_proc_gen.m"
            else
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
#line 140 "ml_foreign_proc_gen.m"
        }
#line 139 "ml_foreign_proc_gen.m"
      else
#line 139 "ml_foreign_proc_gen.m"
        if ((ml_backend__ml_foreign_proc_gen__Lang_24 == (MR_Integer) 4))
#line 172 "ml_foreign_proc_gen.m"
          {
#line 173 "ml_foreign_proc_gen.m"
            {
#line 173 "ml_foreign_proc_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_foreign_proc_gen", (MR_String) "predicate \140ml_backend.ml_foreign_proc_gen.ml_gen_ordinary_pragma_foreign_proc\'/12", (MR_String) "unexpected language Erlang");
#line 173 "ml_foreign_proc_gen.m"
              return;
            }
#line 172 "ml_foreign_proc_gen.m"
          }
#line 139 "ml_foreign_proc_gen.m"
        else
#line 139 "ml_foreign_proc_gen.m"
          if ((ml_backend__ml_foreign_proc_gen__Lang_24 == (MR_Integer) 3))
#line 163 "ml_foreign_proc_gen.m"
            {
#line 163 "ml_foreign_proc_gen.m"
              ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_105_108_95_112_114_111_99_95_95_91_49_93_95_48_12_p_0(ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__ProcId_16, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
#line 163 "ml_foreign_proc_gen.m"
              return;
            }
#line 139 "ml_foreign_proc_gen.m"
          else
#line 167 "ml_foreign_proc_gen.m"
            {
#line 168 "ml_foreign_proc_gen.m"
              {
#line 168 "ml_foreign_proc_gen.m"
                ml_backend__ml_foreign_proc_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_111_114_100_105_110_97_114_121_95_112_114_97_103_109_97_95_99_115_104_97_114_112_95_106_97_118_97_95_112_114_111_99_95_95_91_53_93_95_48_13_p_0((MR_Integer) 4, ml_backend__ml_foreign_proc_gen__OrdinaryKind_25, ml_backend__ml_foreign_proc_gen__Attributes_14, ml_backend__ml_foreign_proc_gen__PredId_15, ml_backend__ml_foreign_proc_gen__Args_17, ml_backend__ml_foreign_proc_gen__ExtraArgs_18, ml_backend__ml_foreign_proc_gen__Foreign_Code_19, ml_backend__ml_foreign_proc_gen__Context_20, ml_backend__ml_foreign_proc_gen__Decls_21, ml_backend__ml_foreign_proc_gen__Statements_22, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_34, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_35);
#line 168 "ml_foreign_proc_gen.m"
                return;
              }
#line 167 "ml_foreign_proc_gen.m"
            }
#line 101 "ml_foreign_proc_gen.m"
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
#line 63 "ml_foreign_proc_gen.m"
  {
#line 63 "ml_foreign_proc_gen.m"
    MR_bool ml_backend__ml_foreign_proc_gen__succeeded;
#line 63 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__MLDSContext_12;
#line 63 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__SuccessLval_13;
#line 63 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__CondRval_14;
#line 63 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__Statement_15;
#line 63 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_19_19;
#line 63 "ml_foreign_proc_gen.m"
    MR_Word ml_backend__ml_foreign_proc_gen__V_20_20;

#line 64 "ml_foreign_proc_gen.m"
    *ml_backend__ml_foreign_proc_gen__Decls_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 65 "ml_foreign_proc_gen.m"
    {
#line 65 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__MLDSContext_12 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_foreign_proc_gen__Context_8);
    }
#line 66 "ml_foreign_proc_gen.m"
    {
#line 66 "ml_foreign_proc_gen.m"
      ml_backend__ml_code_util__ml_success_lval_2_p_0(ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16, &ml_backend__ml_foreign_proc_gen__SuccessLval_13);
    }
#line 67 "ml_foreign_proc_gen.m"
    {
#line 67 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__ml_generate_runtime_cond_code_4_p_0(ml_backend__ml_foreign_proc_gen__TraceRuntimeCond_7, &ml_backend__ml_foreign_proc_gen__CondRval_14, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_0_16, ml_backend__ml_foreign_proc_gen__STATE_VARIABLE_Info_17);
    }
#line 68 "ml_foreign_proc_gen.m"
    {
#line 68 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_20_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 68 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_20_20, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__SuccessLval_13));
#line 68 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_foreign_proc_gen__V_20_20, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__CondRval_14));
#line 68 "ml_foreign_proc_gen.m"
    }
#line 68 "ml_foreign_proc_gen.m"
    {
#line 68 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 68 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 68 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_foreign_proc_gen__V_19_19, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_20_20));
#line 68 "ml_foreign_proc_gen.m"
    }
#line 68 "ml_foreign_proc_gen.m"
    {
#line 68 "ml_foreign_proc_gen.m"
      ml_backend__ml_foreign_proc_gen__Statement_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 68 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Statement_15, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__V_19_19));
#line 68 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_foreign_proc_gen__Statement_15, 1) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__MLDSContext_12));
#line 68 "ml_foreign_proc_gen.m"
    }
#line 70 "ml_foreign_proc_gen.m"
    {
#line 70 "ml_foreign_proc_gen.m"
      MR_Word base;
#line 70 "ml_foreign_proc_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 70 "ml_foreign_proc_gen.m"
      *ml_backend__ml_foreign_proc_gen__Statements_10 = base;
#line 70 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_foreign_proc_gen__Statement_15));
#line 70 "ml_foreign_proc_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 70 "ml_foreign_proc_gen.m"
    }
#line 63 "ml_foreign_proc_gen.m"
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
