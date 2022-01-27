/*
** Automatically generated from `rtti_to_mlds.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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


/* :- module ml_backend.rtti_to_mlds. */
/* :- implementation. */

/*
INIT mercury__ml_backend__rtti_to_mlds__init
ENDINIT
*/

#include "ml_backend.rtti_to_mlds.mih"


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
#include "int.mih"
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
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ml_closure_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 1004 "rtti_to_mlds.m"
struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s {
#line 1004 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11;
#line 1023 "rtti_to_mlds.m"
  MR_bool ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 1012 "rtti_to_mlds.m"
  jmp_buf ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 1012 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26;
#line 1012 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26;
#line 1004 "rtti_to_mlds.m"
};

#line 749 "rtti_to_mlds.m"
struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s {
#line 752 "rtti_to_mlds.m"
  MR_bool ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded;
#line 752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100;
#line 752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17;
#line 757 "rtti_to_mlds.m"
  jmp_buf ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0;
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104;
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42;
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103;
#line 757 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103;
#line 749 "rtti_to_mlds.m"
};


#line 186 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 189 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 192 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 195 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 198 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 201 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 204 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

#line 207 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

#line 210 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

#line 213 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

#line 216 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

#line 219 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

#line 222 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 225 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 228 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

#line 1497 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1497 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1497 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7);

#line 1427 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1427 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1427 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7);

#line 1019 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
#line 1019 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1019 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1019 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1019 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1019 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4);

#line 1012 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
#line 1012 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1012 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
#line 1012 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1012 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
#line 1012 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1012 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
#line 1012 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1004 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
#line 1004 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 1004 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_10,
#line 1004 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfos_11,
#line 1004 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HaveArgLocns_12,
#line 1004 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20,
#line 1004 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21);

#line 995 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
#line 995 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 995 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 998 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
#line 998 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 998 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 989 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
#line 989 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 989 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 989 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeNames_10,
#line 989 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 989 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 899 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1(
#line 899 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 899 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 893 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(
#line 893 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 893 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 893 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locns_10,
#line 893 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
#line 893 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);

#line 715 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 715 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 702 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 702 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1287 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1287__1_2_p_0(
#line 1287 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_23,
#line 1287 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_24);

#line 1210 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1210__1_2_p_0(
#line 1210 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_24,
#line 1210 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_25);

#line 1175 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1175__1_2_p_0(
#line 1175 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4,
#line 1175 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ptag_11);

#line 995 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__995__1_3_f_0(
#line 995 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_19,
#line 995 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_23,
#line 995 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_26);

#line 1754 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1754__2_3_p_0(
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_18,
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_36,
#line 1754 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_37);

#line 1754 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1754__1_3_p_0(
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameMap_6,
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_40,
#line 1754 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_41);

#line 1753 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__1_2_p_0(
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_32,
#line 1753 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_33);

#line 757 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeInfo_for_T_9,
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_1,
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2);

#line 1840 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(
#line 1840 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1840 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lval_6,
#line 1840 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17,
#line 1840 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);

#line 1808 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
#line 1808 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1808 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Rval_6,
#line 1808 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1808 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);

#line 1802 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1802 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1802 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1802 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1790 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
#line 1790 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1790 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 1790 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
#line 1790 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);

#line 1775 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
#line 1775 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_4,
#line 1775 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15,
#line 1775 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16);

#line 1756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
#line 1756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_6,
#line 1756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1756 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20,
#line 1756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21,
#line 1756 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22);

#line 1735 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
#line 1735 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorData_3);

#line 1730 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
#line 1730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locn_3);

#line 1702 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
#line 1702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_2);

#line 1633 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(
#line 1633 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
#line 1633 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_9,
#line 1633 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcId_10,
#line 1633 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ClosureKind_11,
#line 1633 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_12,
#line 1633 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1633 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);

#line 1610 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(
#line 1610 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1610 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcIdUniv_7,
#line 1610 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1610 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1610 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1590 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_6_p_0(
#line 1590 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1590 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_8,
#line 1590 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcLabel_9,
#line 1590 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
#line 1590 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1590 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1354 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3(
#line 1354 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1354 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1570 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2(
#line 1570 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1570 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1570 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1570 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1569 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_1(
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1564 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(
#line 1564 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1564 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiDatas_7,
#line 1564 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1564 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1564 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1549 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(
#line 1549 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1549 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiData_7,
#line 1549 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1549 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 1549 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);

#line 1436 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
#line 1436 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1436 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1436 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7);

#line 1418 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
#line 1418 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1418 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1418 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiName_7);

#line 1408 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
#line 1408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2);

#line 1360 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
#line 1360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_7);

#line 1354 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
#line 1354 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1354 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1350 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
#line 1350 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Type_5,
#line 1350 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1350 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_7);

#line 1331 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
#line 1331 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1331 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1327 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
#line 1327 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5,
#line 1327 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_6,
#line 1327 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
#line 1327 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11);

#line 1297 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(
#line 1297 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1297 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1297 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_7);

#line 1291 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2(
#line 1291 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1291 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1287 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1(
#line 1287 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1287 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1287 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1280 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(
#line 1280 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1280 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1280 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1280 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16,
#line 1280 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17);

#line 1275 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1(
#line 1275 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1275 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1269 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(
#line 1269 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1269 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1269 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResAddrs_8,
#line 1269 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1269 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1262 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3(
#line 1262 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1262 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1227 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2(
#line 1227 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1227 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1226 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1(
#line 1226 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1226 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1220 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResFunctors_9,
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuByPtag_10,
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1220 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1213 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2(
#line 1213 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1213 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1210 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1(
#line 1210 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1210 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1210 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1203 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(
#line 1203 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1203 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1203 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1203 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
#line 1203 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1196 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
#line 1196 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1196 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1188 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
#line 1188 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1188 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1188 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1188 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 1188 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 1175 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1(
#line 1175 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg);

#line 1168 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(
#line 1168 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1168 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_2,
#line 1168 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1168 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4);

#line 1132 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
#line 1132 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1132 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1132 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1132 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1125 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
#line 1125 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1125 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1125 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PtagMap_8,
#line 1125 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21,
#line 1125 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22);

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1118 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
#line 1118 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1118 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1110 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
#line 1110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_8,
#line 1110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1110 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1103 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
#line 1103 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1103 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1095 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
#line 1095 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1095 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1095 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8,
#line 1095 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1095 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1088 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
#line 1088 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1088 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1080 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
#line 1080 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1080 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1080 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByName_8,
#line 1080 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1080 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1073 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1(
#line 1073 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1073 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1065 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(
#line 1065 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1065 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1065 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByValue_8,
#line 1065 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1065 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1027 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(
#line 1027 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 1027 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfo_7,
#line 1027 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__ArgLocnInitializer_8,
#line 1027 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__PrevOffset_9,
#line 1027 "rtti_to_mlds.m"
  MR_Integer * ml_backend__rtti_to_mlds__NextPrevOffset_10);

#line 981 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0_1(
#line 981 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 981 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 976 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0(
#line 976 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 976 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 976 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 976 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_10,
#line 976 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 976 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 960 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3(
#line 960 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 960 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 952 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2(
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 952 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 952 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 952 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 953 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1(
#line 953 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 953 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 953 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 953 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 933 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(
#line 933 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 933 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 933 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 933 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistInfo_10,
#line 933 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30,
#line 933 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31);

#line 926 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
#line 926 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 926 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_7,
#line 926 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 926 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 926 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10);

#line 917 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0_1(
#line 917 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 917 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 904 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MakeRttiId_10,
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Constraint_11,
#line 904 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_12,
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24,
#line 904 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25,
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26,
#line 904 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27);

#line 877 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
#line 877 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_4,
#line 877 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5);

#line 860 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(
#line 860 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 860 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 860 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_8,
#line 860 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 860 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 756 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_2(
#line 756 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 756 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 755 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_1(
#line 755 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 755 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 757 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(
#line 757 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 757 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5(
#line 757 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 757 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(
#line 757 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 757 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(
#line 757 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 749 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(
#line 749 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 749 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 749 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuFunctor_8,
#line 749 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38,
#line 749 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39);

#line 745 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0_1(
#line 745 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 745 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 731 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(
#line 731 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 731 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 731 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NotagFunctorDesc_8,
#line 731 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 731 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 715 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_7,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 715 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 702 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_6,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 702 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 658 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4(
#line 658 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 658 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 658 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 658 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 625 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3(
#line 625 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 625 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 625 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 625 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 607 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2(
#line 607 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 607 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 607 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 607 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 642 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1(
#line 642 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 642 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 642 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 642 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 596 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(
#line 596 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 596 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
#line 596 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_11,
#line 596 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__FunctorInitializer_12,
#line 596 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__LayoutInitializer_13,
#line 596 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__NumberMapInitializer_14,
#line 596 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43,
#line 596 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);

#line 551 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6(
#line 551 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 551 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 551 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 551 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 550 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_5(
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 548 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_4(
#line 548 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 548 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 521 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3(
#line 521 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 521 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 521 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 521 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 520 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_2(
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 518 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_1(
#line 518 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 518 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 502 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8,
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34,
#line 502 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);

#line 456 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6(
#line 456 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 456 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 456 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 456 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 455 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_5(
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 454 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_4(
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 427 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3(
#line 427 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 427 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 427 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 427 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 426 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_2(
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 425 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_1(
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 410 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeInfo_8,
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33,
#line 410 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);

#line 401 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
#line 401 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 401 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_7,
#line 401 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 401 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 401 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10);

#line 388 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4(
#line 388 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 388 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 384 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3(
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 384 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 384 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 384 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 384 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2(
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 384 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 377 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_1(
#line 377 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 377 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 361 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Instance_8,
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31,
#line 361 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32);

#line 348 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
#line 348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_4,
#line 348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodId_5);

#line 345 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1(
#line 345 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 345 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 341 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(
#line 341 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 341 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_7,
#line 341 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodIds_8,
#line 341 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 341 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);

#line 338 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1(
#line 338 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 338 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 334 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(
#line 334 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 334 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Names_6,
#line 334 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 334 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);

#line 328 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
#line 328 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_5,
#line 328 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_6,
#line 328 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_7,
#line 328 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_8);

#line 312 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3(
#line 312 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 312 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 306 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2(
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 306 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 306 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 306 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 306 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1(
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 306 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 258 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCDecl_8,
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49,
#line 258 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);

#line 173 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1(
#line 173 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 173 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 173 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 173 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 173 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4);

#line 162 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(
#line 162 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_5,
#line 162 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_6,
#line 162 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47,
#line 162 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);

#line 111 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
#line 111 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_6,
#line 111 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7,
#line 111 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_8,
#line 111 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 111 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 104 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
#line 104 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 104 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 104 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 104 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);

#line 1754 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
#line 1754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1754 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1754 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
#line 1754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1754 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1753 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
#line 1753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1753 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1749 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
#line 1749 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1749 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1749 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1749 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1748 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1748 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 1748 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_5);

#line 85 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1(
#line 85 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 85 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 85 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 85 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_1[14][2];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_2[36][3];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_3[8][7];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_4[8][8];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_5[6][6];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_6[16][5];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_7[2][9];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_8[1][11];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_9[2][4];

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_10[2][1];




static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_1[14][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 10)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_2[36][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[3])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 13 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 14 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 15 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_4)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 16 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_5)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 17 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 18 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[4])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 19 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[5])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 20 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[2])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 21 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[6])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_field_types_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 22 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[7])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 23 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[7])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 24 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[8])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 25 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[8])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 26 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[10])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 27 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[11])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 28 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[10])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 29 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[12])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 30 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 31 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[13])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 32 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[14])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 33 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[15])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 34 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_9[0])),
    ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 35 */
  {
    ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[1])),
    ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_3[8][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_4[8][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_5[6][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_6[16][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0))
  },
  /* row 12 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
  /* row 13 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0))
  },
  /* row 14 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0))
  },
  /* row 15 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_7[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_foreign_language_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_8[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_9[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0))
  },
};

static /* final */ const MR_Box ml_backend__rtti_to_mlds_scalar_common_10[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 2634 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2642 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2651 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2659 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2667 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2677 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2685 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

#line 2696 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
  }
};

#line 2704 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2712 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

#line 2721 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2730 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2738 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2747 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2755 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

#line 1497 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1497 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1497 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7)
#line 1497 "rtti_to_mlds.m"
{
#line 1499 "rtti_to_mlds.m"
  {
#line 1499 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1499 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Rval_8;
#line 1499 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_11;
#line 1499 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_17;
#line 1499 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_18;
#line 1499 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1499 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;

#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_31);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_41);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_46);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_51);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_56);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 1))))
#line 1501 "rtti_to_mlds.m"
      {
#line 1501 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)));
#line 1501 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 1)));

#line 1502 "rtti_to_mlds.m"
        {
#line 1502 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_9);
        }
#line 1501 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 2))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_36);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_61);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_67 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_66);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_72 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_71);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_77 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_76);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_82 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_81);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1537 "rtti_to_mlds.m"
    {
#line 1537 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_7));
#line 1537 "rtti_to_mlds.m"
    }
#line 1537 "rtti_to_mlds.m"
    {
#line 1537 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 1537 "rtti_to_mlds.m"
    }
#line 1538 "rtti_to_mlds.m"
    {
#line 1538 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1538 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_11));
#line 1538 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_17));
#line 1538 "rtti_to_mlds.m"
    }
#line 1539 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_18);
#line 1539 "rtti_to_mlds.m"
    {
#line 1539 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1539 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 1539 "rtti_to_mlds.m"
    }
#line 1499 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Rval_8;
#line 1499 "rtti_to_mlds.m"
  }
#line 1497 "rtti_to_mlds.m"
}

#line 1427 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1427 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1427 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7)
#line 1427 "rtti_to_mlds.m"
{
#line 1430 "rtti_to_mlds.m"
  {
#line 1430 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1430 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1430 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;
#line 1430 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_15;
#line 1430 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_21;
#line 1430 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 1430 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1430 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_35);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_45);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_50);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_55);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_60);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 1))))
#line 1501 "rtti_to_mlds.m"
      {
#line 1501 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)));
#line 1501 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 1)));

#line 1502 "rtti_to_mlds.m"
        {
#line 1502 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_13);
        }
#line 1501 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 2))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_40);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_65);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_70);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_75);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1503 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_80);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1503 "rtti_to_mlds.m"
    else
#line 1543 "rtti_to_mlds.m"
      {
#line 1543 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_86 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
        {
#line 1545 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_85);
        }
#line 1543 "rtti_to_mlds.m"
      }
#line 1537 "rtti_to_mlds.m"
    {
#line 1537 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_7));
#line 1537 "rtti_to_mlds.m"
    }
#line 1537 "rtti_to_mlds.m"
    {
#line 1537 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 1537 "rtti_to_mlds.m"
    }
#line 1538 "rtti_to_mlds.m"
    {
#line 1538 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1538 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_15));
#line 1538 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_21));
#line 1538 "rtti_to_mlds.m"
    }
#line 1539 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 1539 "rtti_to_mlds.m"
    {
#line 1539 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1539 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1539 "rtti_to_mlds.m"
    }
#line 1431 "rtti_to_mlds.m"
    {
#line 1431 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_8_8));
#line 1431 "rtti_to_mlds.m"
    }
#line 1430 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1430 "rtti_to_mlds.m"
  }
#line 1427 "rtti_to_mlds.m"
}

#line 1019 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
#line 1019 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1019 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1019 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1019 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1019 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4)
#line 1019 "rtti_to_mlds.m"
{
#line 1019 "rtti_to_mlds.m"
  {
#line 1019 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1019 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8;
#line 1019 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10;

#line 1019 "rtti_to_mlds.m"
    {
#line 1019 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8, ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10);
    }
#line 1019 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8));
#line 1019 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10));
#line 1019 "rtti_to_mlds.m"
  }
#line 1019 "rtti_to_mlds.m"
}

#line 1012 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
#line 1012 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1012 "rtti_to_mlds.m"
{
#line 1012 "rtti_to_mlds.m"
  {
#line 1012 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1012 "rtti_to_mlds.m"
    MR_builtin_longjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 1012 "rtti_to_mlds.m"
  }
#line 1012 "rtti_to_mlds.m"
}

#line 1012 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
#line 1012 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1012 "rtti_to_mlds.m"
{
#line 1012 "rtti_to_mlds.m"
  {
#line 1012 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1012 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26 = ((MR_Word) (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26);
#line 1012 "rtti_to_mlds.m"
    {
#line 1012 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(ml_backend__rtti_to_mlds__env_ptr);
#line 1012 "rtti_to_mlds.m"
      return;
    }
#line 1012 "rtti_to_mlds.m"
  }
#line 1012 "rtti_to_mlds.m"
}

#line 1012 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
#line 1012 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1012 "rtti_to_mlds.m"
{
#line 1012 "rtti_to_mlds.m"
  {
#line 1012 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1012 "rtti_to_mlds.m"
    {
#line 1013 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 2)));
#line 1013 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 0)));
#line 1013 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 1)));

#line 1013 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (ml_backend__rtti_to_mlds__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1013 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 1013 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1013 "rtti_to_mlds.m"
        {
#line 1013 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(ml_backend__rtti_to_mlds__env_ptr);
#line 1013 "rtti_to_mlds.m"
          return;
        }
#line 1012 "rtti_to_mlds.m"
    }
#line 1012 "rtti_to_mlds.m"
  }
#line 1012 "rtti_to_mlds.m"
}

#line 1012 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
#line 1012 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1012 "rtti_to_mlds.m"
{
#line 1012 "rtti_to_mlds.m"
  {
#line 1012 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1012 "rtti_to_mlds.m"
    if (MR_builtin_setjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 1012 "rtti_to_mlds.m"
      {
#line 1012 "rtti_to_mlds.m"
        {
#line 1012 "rtti_to_mlds.m"
          {
#line 1012 "rtti_to_mlds.m"
            mercury__list__member_2_p_1((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, &(ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3, ml_backend__rtti_to_mlds__env_ptr);
          }
#line 1012 "rtti_to_mlds.m"
        }
#line 1012 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 1012 "rtti_to_mlds.m"
      }
#line 1012 "rtti_to_mlds.m"
    else
#line 1012 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 1012 "rtti_to_mlds.m"
  }
#line 1012 "rtti_to_mlds.m"
}

#line 1004 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
#line 1004 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 1004 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_10,
#line 1004 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfos_11,
#line 1004 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HaveArgLocns_12,
#line 1004 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20,
#line 1004 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21)
#line 1004 "rtti_to_mlds.m"
{
#line 1004 "rtti_to_mlds.m"
  {
#line 1004 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s ml_backend__rtti_to_mlds__env;

#line 1004 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11 = ml_backend__rtti_to_mlds__ArgInfos_11;
#line 1012 "rtti_to_mlds.m"
    {
#line 1012 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(&ml_backend__rtti_to_mlds__env);
    }
#line 1023 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1016 "rtti_to_mlds.m"
      {
#line 1016 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_15;
#line 1016 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 1016 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ArgLocnInitializers_17;
#line 1016 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_19;
#line 1016 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1016 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_42;
#line 1016 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 1019 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Offset_18;
#line 1019 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv3__Offset_18;

#line 1016 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HaveArgLocns_12 = (MR_Integer) 1;
#line 1017 "rtti_to_mlds.m"
        {
#line 1017 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1017 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1017 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_10));
#line 1017 "rtti_to_mlds.m"
        }
#line 1018 "rtti_to_mlds.m"
        {
#line 1018 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
#line 1018 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_15));
#line 1018 "rtti_to_mlds.m"
        }
#line 1019 "rtti_to_mlds.m"
        {
#line 1019 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[7]));
#line 1019 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5));
#line 1019 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1019 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 1019 "rtti_to_mlds.m"
        }
#line 1019 "rtti_to_mlds.m"
        {
#line 1019 "rtti_to_mlds.m"
          mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__V_23_23, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, &ml_backend__rtti_to_mlds__ArgLocnInitializers_17, ((MR_Box) ((MR_Integer) -1)), &ml_backend__rtti_to_mlds__conv3__Offset_18);
        }
#line 1019 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds___Offset_18 = ((MR_Integer) ml_backend__rtti_to_mlds__conv3__Offset_18);
#line 1021 "rtti_to_mlds.m"
        {
#line 1021 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgLocnInitializers_17));
#line 1021 "rtti_to_mlds.m"
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 108 "rtti_to_mlds.m"
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 108 "rtti_to_mlds.m"
        }
#line 109 "rtti_to_mlds.m"
        {
#line 109 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_42, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21);
#line 109 "rtti_to_mlds.m"
          return;
        }
#line 1016 "rtti_to_mlds.m"
      }
#line 1023 "rtti_to_mlds.m"
    else
#line 1024 "rtti_to_mlds.m"
      {
#line 1024 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HaveArgLocns_12 = (MR_Integer) 0;
#line 1024 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20;
#line 1024 "rtti_to_mlds.m"
      }
#line 1004 "rtti_to_mlds.m"
  }
#line 1004 "rtti_to_mlds.m"
}

#line 995 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
#line 995 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 995 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 995 "rtti_to_mlds.m"
{
#line 995 "rtti_to_mlds.m"
  {
#line 995 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 995 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 995 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_27;

#line 995 "rtti_to_mlds.m"
    {
#line 995 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_27 = ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__995__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 995 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_27));
#line 995 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 995 "rtti_to_mlds.m"
  }
#line 995 "rtti_to_mlds.m"
}

#line 998 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
#line 998 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 998 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 998 "rtti_to_mlds.m"
{
#line 998 "rtti_to_mlds.m"
  {
#line 998 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 998 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 998 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 998 "rtti_to_mlds.m"
    {
#line 998 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 998 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 998 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 998 "rtti_to_mlds.m"
  }
#line 998 "rtti_to_mlds.m"
}

#line 989 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
#line 989 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 989 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 989 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeNames_10,
#line 989 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 989 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 989 "rtti_to_mlds.m"
{
#line 992 "rtti_to_mlds.m"
  {
#line 992 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__StrType_12 = (MR_Word) MR_mkword(MR_mktag(2), &ml_backend__rtti_to_mlds_scalar_common_10[0]);
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_14;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 997 "rtti_to_mlds.m"
    {
#line 997 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__rtti_to_mlds__StrType_12);
    }
#line 996 "rtti_to_mlds.m"
    {
#line 996 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 996 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__StrType_12));
#line 996 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__rtti_to_mlds_scalar_common_10[1])));
#line 996 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 996 "rtti_to_mlds.m"
    }
#line 995 "rtti_to_mlds.m"
    {
#line 995 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 995 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[7]));
#line 995 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2));
#line 995 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 995 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 995 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 4) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_2[35]));
#line 995 "rtti_to_mlds.m"
    }
#line 994 "rtti_to_mlds.m"
    {
#line 994 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[4], ml_backend__rtti_to_mlds__V_18_18, ml_backend__rtti_to_mlds__MaybeNames_10);
    }
#line 1000 "rtti_to_mlds.m"
    {
#line 1000 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1000 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 1000 "rtti_to_mlds.m"
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_14));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 992 "rtti_to_mlds.m"
  }
#line 989 "rtti_to_mlds.m"
}

#line 899 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1(
#line 899 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 899 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 899 "rtti_to_mlds.m"
{
#line 899 "rtti_to_mlds.m"
  {
#line 899 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 899 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 899 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_6;

#line 899 "rtti_to_mlds.m"
    {
#line 899 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_6 = ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 899 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_6));
#line 899 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 899 "rtti_to_mlds.m"
  }
#line 899 "rtti_to_mlds.m"
}

#line 893 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(
#line 893 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 893 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 893 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locns_10,
#line 893 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
#line 893 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15)
#line 893 "rtti_to_mlds.m"
{
#line 898 "rtti_to_mlds.m"
  {
#line 898 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 898 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_12;
#line 898 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_13;
#line 898 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 898 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_27;
#line 898 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_34;
#line 898 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;

#line 899 "rtti_to_mlds.m"
    {
#line 899 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 899 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[5]));
#line 899 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1));
#line 899 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 899 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 899 "rtti_to_mlds.m"
    }
#line 899 "rtti_to_mlds.m"
    {
#line 899 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_12 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ml_backend__rtti_to_mlds__V_16_16, ml_backend__rtti_to_mlds__Locns_10);
    }
#line 900 "rtti_to_mlds.m"
    {
#line 900 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 900 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiName_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 900 "rtti_to_mlds.m"
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_13));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_27));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_34, ml_backend__rtti_to_mlds__RttiId_27, ml_backend__rtti_to_mlds__Initializer_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 898 "rtti_to_mlds.m"
  }
#line 893 "rtti_to_mlds.m"
}

#line 715 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 715 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 715 "rtti_to_mlds.m"
{
#line 720 "rtti_to_mlds.m"
  {
#line 720 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 720 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 0)));
#line 720 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 1)));
#line 720 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Value_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 2)));
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_15;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_17;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_35;
#line 720 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;

#line 722 "rtti_to_mlds.m"
    {
#line 722 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_13));
#line 722 "rtti_to_mlds.m"
    }
#line 723 "rtti_to_mlds.m"
    {
#line 723 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_15));
#line 723 "rtti_to_mlds.m"
    }
#line 724 "rtti_to_mlds.m"
    {
#line 724 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 724 "rtti_to_mlds.m"
    }
#line 724 "rtti_to_mlds.m"
    {
#line 724 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 724 "rtti_to_mlds.m"
    }
#line 725 "rtti_to_mlds.m"
    {
#line 725 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_12);
    }
#line 726 "rtti_to_mlds.m"
    {
#line 726 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_13);
    }
#line 727 "rtti_to_mlds.m"
    {
#line 727 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_foreign_2_f_0(ml_backend__rtti_to_mlds__Lang_8, ml_backend__rtti_to_mlds__Value_14);
    }
#line 728 "rtti_to_mlds.m"
    {
#line 728 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 728 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 728 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 728 "rtti_to_mlds.m"
    }
#line 726 "rtti_to_mlds.m"
    {
#line 726 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 726 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 726 "rtti_to_mlds.m"
    }
#line 725 "rtti_to_mlds.m"
    {
#line 725 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 725 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_22_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 725 "rtti_to_mlds.m"
    }
#line 724 "rtti_to_mlds.m"
    {
#line 724 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 724 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_35, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 720 "rtti_to_mlds.m"
  }
#line 715 "rtti_to_mlds.m"
}

#line 702 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 702 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 702 "rtti_to_mlds.m"
{
#line 705 "rtti_to_mlds.m"
  {
#line 705 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 705 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__EnumFunctor_8, (MR_Integer) 0)));
#line 705 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__EnumFunctor_8, (MR_Integer) 1)));
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_12;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_13;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_14;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_30;
#line 705 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 707 "rtti_to_mlds.m"
    {
#line 707 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
#line 707 "rtti_to_mlds.m"
    }
#line 708 "rtti_to_mlds.m"
    {
#line 708 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_12));
#line 708 "rtti_to_mlds.m"
    }
#line 709 "rtti_to_mlds.m"
    {
#line 709 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 709 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_13));
#line 709 "rtti_to_mlds.m"
    }
#line 709 "rtti_to_mlds.m"
    {
#line 709 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 709 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_17_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 709 "rtti_to_mlds.m"
    }
#line 710 "rtti_to_mlds.m"
    {
#line 710 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
    }
#line 711 "rtti_to_mlds.m"
    {
#line 711 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_11);
    }
#line 712 "rtti_to_mlds.m"
    {
#line 712 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 712 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "rtti_to_mlds.m"
    }
#line 710 "rtti_to_mlds.m"
    {
#line 710 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 710 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 710 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 710 "rtti_to_mlds.m"
    }
#line 709 "rtti_to_mlds.m"
    {
#line 709 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_14, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 709 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 709 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_13));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_30, ml_backend__rtti_to_mlds__RttiId_13, ml_backend__rtti_to_mlds__Initializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 705 "rtti_to_mlds.m"
  }
#line 702 "rtti_to_mlds.m"
}

#line 1287 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1287__1_2_p_0(
#line 1287 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_23,
#line 1287 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_24)
#line 1287 "rtti_to_mlds.m"
{
#line 1287 "rtti_to_mlds.m"
  {
#line 1287 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1287 "rtti_to_mlds.m"
    {
#line 1287 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ml_backend__rtti_to_mlds__HeadVar__1_23, ml_backend__rtti_to_mlds__HeadVar__2_24);
#line 1287 "rtti_to_mlds.m"
      return;
    }
#line 1287 "rtti_to_mlds.m"
  }
#line 1287 "rtti_to_mlds.m"
}

#line 1210 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1210__1_2_p_0(
#line 1210 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_24,
#line 1210 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_25)
#line 1210 "rtti_to_mlds.m"
{
#line 1210 "rtti_to_mlds.m"
  {
#line 1210 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1210 "rtti_to_mlds.m"
    {
#line 1210 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ml_backend__rtti_to_mlds__HeadVar__1_24, ml_backend__rtti_to_mlds__HeadVar__2_25);
#line 1210 "rtti_to_mlds.m"
      return;
    }
#line 1210 "rtti_to_mlds.m"
  }
#line 1210 "rtti_to_mlds.m"
}

#line 1175 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1175__1_2_p_0(
#line 1175 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4,
#line 1175 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ptag_11)
#line 1175 "rtti_to_mlds.m"
{
#line 1175 "rtti_to_mlds.m"
  {
#line 1175 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__Ptag_11 == ml_backend__rtti_to_mlds__CurPtag_4);

#line 1175 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1175 "rtti_to_mlds.m"
  }
#line 1175 "rtti_to_mlds.m"
}

#line 995 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__995__1_3_f_0(
#line 995 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_19,
#line 995 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_23,
#line 995 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_26)
#line 995 "rtti_to_mlds.m"
{
#line 995 "rtti_to_mlds.m"
  {
#line 995 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 995 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_27;

#line 995 "rtti_to_mlds.m"
    {
#line 995 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__HeadVar__4_27 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__HeadVar__1_19, ml_backend__rtti_to_mlds__HeadVar__2_23, ml_backend__rtti_to_mlds__HeadVar__3_26);
    }
#line 995 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_27;
#line 995 "rtti_to_mlds.m"
  }
#line 995 "rtti_to_mlds.m"
}

#line 1754 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1754__2_3_p_0(
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_18,
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_36,
#line 1754 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_37)
#line 1754 "rtti_to_mlds.m"
{
#line 1754 "rtti_to_mlds.m"
  {
#line 1754 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1754 "rtti_to_mlds.m"
    {
#line 1754 "rtti_to_mlds.m"
      mercury__list__filter_map_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__rtti_to_mlds__HeadVar__1_18, ml_backend__rtti_to_mlds__HeadVar__2_36, ml_backend__rtti_to_mlds__HeadVar__3_37);
#line 1754 "rtti_to_mlds.m"
      return;
    }
#line 1754 "rtti_to_mlds.m"
  }
#line 1754 "rtti_to_mlds.m"
}

#line 1754 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1754__1_3_p_0(
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameMap_6,
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_40,
#line 1754 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_41)
#line 1754 "rtti_to_mlds.m"
{
#line 1754 "rtti_to_mlds.m"
  {
#line 1754 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1754 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv0_HeadVar__3_41;

#line 1754 "rtti_to_mlds.m"
    {
#line 1754 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__rtti_to_mlds__NameMap_6, ((MR_Box) (ml_backend__rtti_to_mlds__HeadVar__2_40)), &ml_backend__rtti_to_mlds__conv0_HeadVar__3_41);
    }
#line 1754 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1754 "rtti_to_mlds.m"
      {
#line 1754 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HeadVar__3_41 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_HeadVar__3_41);
#line 1754 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1754 "rtti_to_mlds.m"
      }
#line 1754 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1754 "rtti_to_mlds.m"
  }
#line 1754 "rtti_to_mlds.m"
}

#line 1753 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__1_2_p_0(
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_32,
#line 1753 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_33)
#line 1753 "rtti_to_mlds.m"
{
#line 1753 "rtti_to_mlds.m"
  {
#line 1753 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, ml_backend__rtti_to_mlds__HeadVar__1_32, ml_backend__rtti_to_mlds__HeadVar__2_33);
#line 1753 "rtti_to_mlds.m"
      return;
    }
#line 1753 "rtti_to_mlds.m"
  }
#line 1753 "rtti_to_mlds.m"
}

#line 757 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeInfo_for_T_9,
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_1,
#line 757 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2)
#line 757 "rtti_to_mlds.m"
{
#line 757 "rtti_to_mlds.m"
  {
#line 757 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 757 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__V_6_6;

#line 757 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 757 "rtti_to_mlds.m"
      {
#line 757 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_6_6 = (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0));
#line 757 "rtti_to_mlds.m"
        (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__1_1, (MR_Integer) 0)) = ml_backend__rtti_to_mlds__V_6_6;
#line 757 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 757 "rtti_to_mlds.m"
      }
#line 757 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 757 "rtti_to_mlds.m"
  }
#line 757 "rtti_to_mlds.m"
}

#line 1840 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(
#line 1840 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1840 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lval_6,
#line 1840 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17,
#line 1840 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18)
#line 1840 "rtti_to_mlds.m"
{
#line 1845 "rtti_to_mlds.m"
  {
#line 1845 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1845 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_6)) == (MR_mktag((MR_Integer) 0))))
#line 1845 "rtti_to_mlds.m"
      {
#line 1845 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 1)));
#line 1845 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)));
#line 1845 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 2)));
#line 1845 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 3)));
#line 1845 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 4)));

#line 1846 "rtti_to_mlds.m"
        {
#line 1846 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);
#line 1846 "rtti_to_mlds.m"
          return;
        }
#line 1845 "rtti_to_mlds.m"
      }
#line 1845 "rtti_to_mlds.m"
    else
#line 1845 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_6)) == (MR_mktag((MR_Integer) 2))))
#line 1851 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17;
#line 1845 "rtti_to_mlds.m"
    else
#line 1845 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_6)) == (MR_mktag((MR_Integer) 1))))
#line 1848 "rtti_to_mlds.m"
      {
#line 1848 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)));
#line 1848 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 1)));

#line 1849 "rtti_to_mlds.m"
        {
#line 1849 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);
#line 1849 "rtti_to_mlds.m"
          return;
        }
#line 1848 "rtti_to_mlds.m"
      }
#line 1845 "rtti_to_mlds.m"
    else
#line 1853 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17;
#line 1845 "rtti_to_mlds.m"
  }
#line 1840 "rtti_to_mlds.m"
}

#line 1808 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
#line 1808 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1808 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Rval_6,
#line 1808 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1808 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20)
#line 1808 "rtti_to_mlds.m"
{
#line 1813 "rtti_to_mlds.m"
  while (MR_TRUE)
#line 1813 "rtti_to_mlds.m"
    {
#line 1813 "rtti_to_mlds.m"
      /* tailcall optimized into a loop */
#line 1813 "rtti_to_mlds.m"
      {
#line 1813 "rtti_to_mlds.m"
        MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1813 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 1))))
#line 1813 "rtti_to_mlds.m"
          {
#line 1813 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)));

#line 1814 "rtti_to_mlds.m"
            {
#line 1814 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Lval_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
#line 1814 "rtti_to_mlds.m"
              return;
            }
#line 1813 "rtti_to_mlds.m"
          }
#line 1813 "rtti_to_mlds.m"
        else
#line 1813 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 2))))
#line 1816 "rtti_to_mlds.m"
          {
#line 1816 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));
#line 1816 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Tag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)));

#line 1817 "rtti_to_mlds.m"
            /* direct tailcall eliminated */
#line 1817 "rtti_to_mlds.m"
            {
#line 1817 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalA_10;

#line 1817 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1817 "rtti_to_mlds.m"
            }
#line 1817 "rtti_to_mlds.m"
            continue;
#line 1816 "rtti_to_mlds.m"
          }
#line 1813 "rtti_to_mlds.m"
        else
#line 1813 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 0))))
#line 1832 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1813 "rtti_to_mlds.m"
        else
#line 1813 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1825 "rtti_to_mlds.m"
          {
#line 1825 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RvalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 3)));
#line 1825 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23;
#line 1825 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RvalA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1825 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1826 "rtti_to_mlds.m"
            {
#line 1826 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__RvalA_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23);
            }
#line 1827 "rtti_to_mlds.m"
            /* direct tailcall eliminated */
#line 1827 "rtti_to_mlds.m"
            {
#line 1827 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalB_14;
#line 1827 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0__tmp_copy_19 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23;

#line 1827 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0__tmp_copy_19;
#line 1827 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1827 "rtti_to_mlds.m"
            }
#line 1827 "rtti_to_mlds.m"
            continue;
#line 1825 "rtti_to_mlds.m"
          }
#line 1813 "rtti_to_mlds.m"
        else
#line 1813 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1819 "rtti_to_mlds.m"
          {
#line 1819 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1861 "rtti_to_mlds.m"
            if ((ml_backend__rtti_to_mlds__Const_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1876 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if ((ml_backend__rtti_to_mlds__Const_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1875 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 1))))
#line 1861 "rtti_to_mlds.m"
              {
#line 1861 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__DataName_38;
#line 1861 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__Const_11), (MR_Integer) 1);
#line 1861 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, (MR_Integer) 0)));

#line 1861 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, (MR_Integer) 1)));
#line 1865 "rtti_to_mlds.m"
                if ((ml_backend__rtti_to_mlds__DataName_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1868 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1865 "rtti_to_mlds.m"
                else
#line 1865 "rtti_to_mlds.m"
                if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 1))))
#line 1866 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1865 "rtti_to_mlds.m"
                else
#line 1865 "rtti_to_mlds.m"
                if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 2))))
#line 1867 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1865 "rtti_to_mlds.m"
                else
#line 1865 "rtti_to_mlds.m"
                if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__DataName_38, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1870 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1865 "rtti_to_mlds.m"
                else
#line 1865 "rtti_to_mlds.m"
                if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__DataName_38, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1869 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1865 "rtti_to_mlds.m"
                else
#line 1865 "rtti_to_mlds.m"
                if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__DataName_38, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1863 "rtti_to_mlds.m"
                  {
#line 1864 "rtti_to_mlds.m"
                    {
#line 1864 "rtti_to_mlds.m"
                      mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5)), ((MR_Box) (ml_backend__rtti_to_mlds__DataName_38)), ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
#line 1864 "rtti_to_mlds.m"
                      return;
                    }
#line 1863 "rtti_to_mlds.m"
                  }
#line 1865 "rtti_to_mlds.m"
                else
#line 1871 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
              }
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 2))))
#line 1877 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1879 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1885 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1878 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1881 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1880 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1883 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1884 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1861 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1886 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1861 "rtti_to_mlds.m"
            else
#line 1882 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1819 "rtti_to_mlds.m"
          }
#line 1813 "rtti_to_mlds.m"
        else
#line 1813 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1829 "rtti_to_mlds.m"
          {
#line 1829 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Lval_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1830 "rtti_to_mlds.m"
            {
#line 1830 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Lval_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
#line 1830 "rtti_to_mlds.m"
              return;
            }
#line 1829 "rtti_to_mlds.m"
          }
#line 1813 "rtti_to_mlds.m"
        else
#line 1813 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1837 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1813 "rtti_to_mlds.m"
        else
#line 1813 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1822 "rtti_to_mlds.m"
          {
#line 1822 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1822 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1823 "rtti_to_mlds.m"
            /* direct tailcall eliminated */
#line 1823 "rtti_to_mlds.m"
            {
#line 1823 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalA_29;

#line 1823 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1823 "rtti_to_mlds.m"
            }
#line 1823 "rtti_to_mlds.m"
            continue;
#line 1822 "rtti_to_mlds.m"
          }
#line 1813 "rtti_to_mlds.m"
        else
#line 1834 "rtti_to_mlds.m"
          {
#line 1834 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RowRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1834 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1835 "rtti_to_mlds.m"
            /* direct tailcall eliminated */
#line 1835 "rtti_to_mlds.m"
            {
#line 1835 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RowRval_17;

#line 1835 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1835 "rtti_to_mlds.m"
            }
#line 1835 "rtti_to_mlds.m"
            continue;
#line 1834 "rtti_to_mlds.m"
          }
#line 1813 "rtti_to_mlds.m"
      }
#line 1813 "rtti_to_mlds.m"
      break;
#line 1813 "rtti_to_mlds.m"
    }
#line 1808 "rtti_to_mlds.m"
}

#line 1802 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1802 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1802 "rtti_to_mlds.m"
{
#line 1802 "rtti_to_mlds.m"
  {
#line 1802 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1802 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12;

#line 1802 "rtti_to_mlds.m"
    {
#line 1802 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12);
    }
#line 1802 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12));
#line 1802 "rtti_to_mlds.m"
  }
#line 1802 "rtti_to_mlds.m"
}

#line 1802 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1802 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1802 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1802 "rtti_to_mlds.m"
{
#line 1802 "rtti_to_mlds.m"
  {
#line 1802 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1802 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12;

#line 1802 "rtti_to_mlds.m"
    {
#line 1802 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12);
    }
#line 1802 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12));
#line 1802 "rtti_to_mlds.m"
  }
#line 1802 "rtti_to_mlds.m"
}

#line 1790 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
#line 1790 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1790 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 1790 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
#line 1790 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12)
#line 1790 "rtti_to_mlds.m"
{
#line 1796 "rtti_to_mlds.m"
  {
#line 1796 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1796 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Initializer_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1805 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11;
#line 1796 "rtti_to_mlds.m"
    else
#line 1796 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Initializer_6)) == (MR_mktag((MR_Integer) 3))))
#line 1801 "rtti_to_mlds.m"
      {
#line 1801 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));
#line 1801 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1802 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12;

#line 1802 "rtti_to_mlds.m"
        {
#line 1802 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1802 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[6]));
#line 1802 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1));
#line 1802 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1802 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5));
#line 1802 "rtti_to_mlds.m"
        }
#line 1802 "rtti_to_mlds.m"
        {
#line 1802 "rtti_to_mlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0], ml_backend__rtti_to_mlds__V_13_13, ml_backend__rtti_to_mlds__Initializers_10, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12);
        }
#line 1802 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12);
#line 1801 "rtti_to_mlds.m"
      }
#line 1796 "rtti_to_mlds.m"
    else
#line 1796 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Initializer_6)) == (MR_mktag((MR_Integer) 1))))
#line 1796 "rtti_to_mlds.m"
      {
#line 1796 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));

#line 1797 "rtti_to_mlds.m"
        {
#line 1797 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);
#line 1797 "rtti_to_mlds.m"
          return;
        }
#line 1796 "rtti_to_mlds.m"
      }
#line 1796 "rtti_to_mlds.m"
    else
#line 1801 "rtti_to_mlds.m"
      {
#line 1801 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializers_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 1)));
#line 1801 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1799 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));
#line 1802 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12;

#line 1802 "rtti_to_mlds.m"
        {
#line 1802 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1802 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[6]));
#line 1802 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2));
#line 1802 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1802 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5));
#line 1802 "rtti_to_mlds.m"
        }
#line 1802 "rtti_to_mlds.m"
        {
#line 1802 "rtti_to_mlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0], ml_backend__rtti_to_mlds__V_25_25, ml_backend__rtti_to_mlds__Initializers_24, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12);
        }
#line 1802 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12);
#line 1801 "rtti_to_mlds.m"
      }
#line 1796 "rtti_to_mlds.m"
  }
#line 1790 "rtti_to_mlds.m"
}

#line 1775 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
#line 1775 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_4,
#line 1775 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15,
#line 1775 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16)
#line 1775 "rtti_to_mlds.m"
{
#line 1778 "rtti_to_mlds.m"
  {
#line 1778 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1778 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__EntityName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 0)));
#line 1778 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__EntityDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 3)));
#line 1779 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 1)));
#line 1779 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 2)));
#line 1786 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DefnDataName_10;
#line 1786 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_12;
#line 1781 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Type_11;
#line 1782 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___GCStatement_13;
#line 1783 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1781 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__EntityName_6)) == (MR_mktag((MR_Integer) 1)));
#line 1781 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1781 "rtti_to_mlds.m"
      {
#line 1781 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__DefnDataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityName_6, (MR_Integer) 0)));
#line 1782 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__EntityDefn_9)) == (MR_mktag((MR_Integer) 1)));
#line 1782 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1782 "rtti_to_mlds.m"
          {
#line 1782 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 0)));
#line 1782 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Initializer_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 1)));
#line 1782 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds___GCStatement_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 2)));
#line 1783 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Type_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1783 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1783 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, (MR_Integer) 1)));
#line 1782 "rtti_to_mlds.m"
          }
#line 1781 "rtti_to_mlds.m"
      }
#line 1786 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1785 "rtti_to_mlds.m"
      {
#line 1785 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_10, ml_backend__rtti_to_mlds__Initializer_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16);
#line 1785 "rtti_to_mlds.m"
        return;
      }
#line 1786 "rtti_to_mlds.m"
    else
#line 1787 "rtti_to_mlds.m"
      {
#line 1787 "rtti_to_mlds.m"
        {
#line 1787 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.add_rtti_defn_arcs\'/3", (MR_String) "expected rtti entity_data");
#line 1787 "rtti_to_mlds.m"
          return;
        }
#line 1787 "rtti_to_mlds.m"
      }
#line 1778 "rtti_to_mlds.m"
  }
#line 1775 "rtti_to_mlds.m"
}

#line 1756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
#line 1756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_6,
#line 1756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1756 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20,
#line 1756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21,
#line 1756 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22)
#line 1756 "rtti_to_mlds.m"
{
#line 1761 "rtti_to_mlds.m"
  {
#line 1761 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1761 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 0)));
#line 1762 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 1)));
#line 1762 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 2)));
#line 1762 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 3)));

#line 1767 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Name_9)) == (MR_mktag((MR_Integer) 1))))
#line 1764 "rtti_to_mlds.m"
      {
#line 1764 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_31_31 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0;
#line 1764 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_9, (MR_Integer) 0)));
#line 1765 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_11_11;

#line 1765 "rtti_to_mlds.m"
        {
#line 1765 "rtti_to_mlds.m"
          mercury__digraph__add_vertex_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_31_31, ((MR_Box) (ml_backend__rtti_to_mlds__DataName_10)), &ml_backend__rtti_to_mlds__V_11_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
        }
#line 1766 "rtti_to_mlds.m"
        {
#line 1766 "rtti_to_mlds.m"
          mercury__map__det_insert_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_31_31, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ((MR_Box) (ml_backend__rtti_to_mlds__DataName_10)), ((MR_Box) (ml_backend__rtti_to_mlds__Defn_6)), ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22);
#line 1766 "rtti_to_mlds.m"
          return;
        }
#line 1764 "rtti_to_mlds.m"
      }
#line 1767 "rtti_to_mlds.m"
    else
#line 1771 "rtti_to_mlds.m"
      {
#line 1772 "rtti_to_mlds.m"
        {
#line 1772 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.add_rtti_defn_nodes\'/5", (MR_String) "expected entity_data");
#line 1772 "rtti_to_mlds.m"
          return;
        }
#line 1771 "rtti_to_mlds.m"
      }
#line 1761 "rtti_to_mlds.m"
  }
#line 1756 "rtti_to_mlds.m"
}

#line 1735 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
#line 1735 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorData_3)
#line 1735 "rtti_to_mlds.m"
{
#line 1737 "rtti_to_mlds.m"
  {
#line 1737 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1737 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1737 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_4;

#line 1738 "rtti_to_mlds.m"
    {
#line 1738 "rtti_to_mlds.m"
      backend_libs__rtti__type_ctor_rep_to_string_2_p_0(ml_backend__rtti_to_mlds__TypeCtorData_3, &ml_backend__rtti_to_mlds__Name_4);
    }
#line 1737 "rtti_to_mlds.m"
    {
#line 1737 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__HeadVar__2_2 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_4);
    }
#line 1737 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1737 "rtti_to_mlds.m"
  }
#line 1735 "rtti_to_mlds.m"
}

#line 1730 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
#line 1730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locn_3)
#line 1730 "rtti_to_mlds.m"
{
#line 1732 "rtti_to_mlds.m"
  {
#line 1732 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1732 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1732 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_4;

#line 1733 "rtti_to_mlds.m"
    {
#line 1733 "rtti_to_mlds.m"
      backend_libs__rtti__sectag_locn_to_string_2_p_0(ml_backend__rtti_to_mlds__Locn_3, &ml_backend__rtti_to_mlds__Name_4);
    }
#line 1732 "rtti_to_mlds.m"
    {
#line 1732 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__HeadVar__2_2 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_4);
    }
#line 1732 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1732 "rtti_to_mlds.m"
  }
#line 1730 "rtti_to_mlds.m"
}

#line 1702 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
#line 1702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_2)
#line 1702 "rtti_to_mlds.m"
{
#line 1705 "rtti_to_mlds.m"
  {
#line 1705 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1709 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1710 "rtti_to_mlds.m"
      {
#line 1710 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 1)));

#line 1712 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_5)) == (MR_mktag((MR_Integer) 0))))
#line 1711 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1712 "rtti_to_mlds.m"
        else
#line 1712 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_5)) == (MR_mktag((MR_Integer) 3))))
#line 1712 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1712 "rtti_to_mlds.m"
        else
#line 1712 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1710 "rtti_to_mlds.m"
      }
#line 1709 "rtti_to_mlds.m"
    else
#line 1709 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1707 "rtti_to_mlds.m"
      {
#line 1707 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 1)));
#line 1708 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_4_4;

#line 1708 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_3)) == (MR_mktag((MR_Integer) 0)));
#line 1708 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1708 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_4_4 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_3), (MR_Integer) 0);
#line 1707 "rtti_to_mlds.m"
      }
#line 1709 "rtti_to_mlds.m"
    else
#line 1709 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1705 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = !(ml_backend__rtti_to_mlds__succeeded);
#line 1705 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1705 "rtti_to_mlds.m"
  }
#line 1702 "rtti_to_mlds.m"
}

#line 1633 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(
#line 1633 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
#line 1633 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_9,
#line 1633 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcId_10,
#line 1633 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ClosureKind_11,
#line 1633 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_12,
#line 1633 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1633 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23)
#line 1633 "rtti_to_mlds.m"
{
#line 1651 "rtti_to_mlds.m"
  {
#line 1651 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1651 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ProcInfo_17;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_18;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncRval_19;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncType_20;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ExtraDefns_21;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1651 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1651 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1653 "rtti_to_mlds.m"
    {
#line 1653 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, &ml_backend__rtti_to_mlds__ProcInfo_17);
    }
#line 1654 "rtti_to_mlds.m"
    {
#line 1654 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    }
#line 1654 "rtti_to_mlds.m"
    {
#line 1654 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24 = ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__V_25_25, ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, ml_backend__rtti_to_mlds__ProcInfo_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22);
    }
#line 1656 "rtti_to_mlds.m"
    {
#line 1656 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26);
    }
#line 1659 "rtti_to_mlds.m"
    {
#line 1659 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_18);
    }
#line 1660 "rtti_to_mlds.m"
    {
#line 1660 "rtti_to_mlds.m"
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, ml_backend__rtti_to_mlds__ClosureKind_11, ml_backend__rtti_to_mlds__NumExtra_9, ml_backend__rtti_to_mlds__Context_18, &ml_backend__rtti_to_mlds__WrapperFuncRval_19, &ml_backend__rtti_to_mlds__WrapperFuncType_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27);
    }
#line 1662 "rtti_to_mlds.m"
    {
#line 1662 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27, &ml_backend__rtti_to_mlds__ExtraDefns_21);
    }
#line 1663 "rtti_to_mlds.m"
    {
#line 1663 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28);
    }
#line 1664 "rtti_to_mlds.m"
    {
#line 1664 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(ml_backend__rtti_to_mlds__ExtraDefns_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);
    }
#line 1668 "rtti_to_mlds.m"
    {
#line 1668 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncType_20));
#line 1668 "rtti_to_mlds.m"
    }
#line 1668 "rtti_to_mlds.m"
    {
#line 1668 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncRval_19));
#line 1668 "rtti_to_mlds.m"
    }
#line 1668 "rtti_to_mlds.m"
    {
#line 1668 "rtti_to_mlds.m"
      MR_Word base;
#line 1668 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1668 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_12 = base;
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1668 "rtti_to_mlds.m"
    }
#line 1651 "rtti_to_mlds.m"
  }
#line 1633 "rtti_to_mlds.m"
}

#line 1610 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(
#line 1610 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1610 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcIdUniv_7,
#line 1610 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1610 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1610 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1610 "rtti_to_mlds.m"
{
#line 1613 "rtti_to_mlds.m"
  {
#line 1613 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1613 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiProcId_10;
#line 1620 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv0_RttiProcId_10;
#line 1621 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_14_14;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1621 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_20_20;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1621 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_23_23;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1621 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 1620 "rtti_to_mlds.m"
    {
#line 1620 "rtti_to_mlds.m"
      mercury__univ__det_univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ml_backend__rtti_to_mlds__RttiProcIdUniv_7, &ml_backend__rtti_to_mlds__conv0_RttiProcId_10);
    }
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__RttiProcId_10 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_RttiProcId_10);
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1621 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__V_14_14 == (MR_Integer) 0);
#line 1627 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1626 "rtti_to_mlds.m"
      {
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PredLabel_36;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PredModule_37;
#line 1626 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__ProcId_38;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__QualifiedProcLabel_39;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Params_40;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Signature_41;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ProcAddrRval_42;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ProcAddrArg_43;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1626 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 1677 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_53_53;
#line 1677 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_54_54;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 1677 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_64_64;

#line 1676 "rtti_to_mlds.m"
        {
#line 1676 "rtti_to_mlds.m"
          ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiProcId_10, &ml_backend__rtti_to_mlds__PredLabel_36, &ml_backend__rtti_to_mlds__PredModule_37);
        }
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1677 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1679 "rtti_to_mlds.m"
        {
#line 1679 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1679 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredLabel_36));
#line 1679 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcId_38));
#line 1679 "rtti_to_mlds.m"
        }
#line 1678 "rtti_to_mlds.m"
        {
#line 1678 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__QualifiedProcLabel_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1678 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredModule_37));
#line 1678 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1678 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 1678 "rtti_to_mlds.m"
        }
#line 1680 "rtti_to_mlds.m"
        {
#line 1680 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Params_40 = ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiProcId_10);
        }
#line 1681 "rtti_to_mlds.m"
        {
#line 1681 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Signature_41 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__rtti_to_mlds__Params_40);
        }
#line 1683 "rtti_to_mlds.m"
        {
#line 1683 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1683 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__QualifiedProcLabel_39));
#line 1683 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Signature_41));
#line 1683 "rtti_to_mlds.m"
        }
#line 1682 "rtti_to_mlds.m"
        {
#line 1682 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1682 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1682 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 1682 "rtti_to_mlds.m"
        }
#line 1682 "rtti_to_mlds.m"
        {
#line 1682 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ProcAddrRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1682 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1682 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 1682 "rtti_to_mlds.m"
        }
#line 1689 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__Params_40);
#line 1689 "rtti_to_mlds.m"
        {
#line 1689 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1689 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 1689 "rtti_to_mlds.m"
        }
#line 1689 "rtti_to_mlds.m"
        {
#line 1689 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ProcAddrArg_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1689 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 1689 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrRval_42));
#line 1689 "rtti_to_mlds.m"
        }
#line 1690 "rtti_to_mlds.m"
        {
#line 1690 "rtti_to_mlds.m"
          MR_Word base;
#line 1690 "rtti_to_mlds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1690 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__Initializer_8 = base;
#line 1690 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrArg_43));
#line 1690 "rtti_to_mlds.m"
        }
#line 1626 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12;
#line 1626 "rtti_to_mlds.m"
      }
#line 1627 "rtti_to_mlds.m"
    else
#line 1628 "rtti_to_mlds.m"
      {
#line 1629 "rtti_to_mlds.m"
        {
#line 1629 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, (MR_Integer) 0, ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
#line 1629 "rtti_to_mlds.m"
          return;
        }
#line 1628 "rtti_to_mlds.m"
      }
#line 1613 "rtti_to_mlds.m"
  }
#line 1610 "rtti_to_mlds.m"
}

#line 1590 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_6_p_0(
#line 1590 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1590 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_8,
#line 1590 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcLabel_9,
#line 1590 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
#line 1590 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1590 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1590 "rtti_to_mlds.m"
{
#line 1594 "rtti_to_mlds.m"
  {
#line 1594 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 6)));
#line 1594 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 7)));
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ProcInfo_27;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_28;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncRval_29;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncType_30;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ExtraDefns_31;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1594 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 0)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 1)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 2)));
#line 1651 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 3)));
#line 1651 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 4)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 5)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 8)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 9)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 11)));
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1651 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1653 "rtti_to_mlds.m"
    {
#line 1653 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, &ml_backend__rtti_to_mlds__ProcInfo_27);
    }
#line 1654 "rtti_to_mlds.m"
    {
#line 1654 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    }
#line 1654 "rtti_to_mlds.m"
    {
#line 1654 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32 = ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__V_33_33, ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, ml_backend__rtti_to_mlds__ProcInfo_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12);
    }
#line 1656 "rtti_to_mlds.m"
    {
#line 1656 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34);
    }
#line 1659 "rtti_to_mlds.m"
    {
#line 1659 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_28);
    }
#line 1660 "rtti_to_mlds.m"
    {
#line 1660 "rtti_to_mlds.m"
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, (MR_Integer) 1, ml_backend__rtti_to_mlds__NumExtra_8, ml_backend__rtti_to_mlds__Context_28, &ml_backend__rtti_to_mlds__WrapperFuncRval_29, &ml_backend__rtti_to_mlds__WrapperFuncType_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35);
    }
#line 1662 "rtti_to_mlds.m"
    {
#line 1662 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35, &ml_backend__rtti_to_mlds__ExtraDefns_31);
    }
#line 1663 "rtti_to_mlds.m"
    {
#line 1663 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36);
    }
#line 1664 "rtti_to_mlds.m"
    {
#line 1664 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(ml_backend__rtti_to_mlds__ExtraDefns_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
    }
#line 1668 "rtti_to_mlds.m"
    {
#line 1668 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncType_30));
#line 1668 "rtti_to_mlds.m"
    }
#line 1668 "rtti_to_mlds.m"
    {
#line 1668 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncRval_29));
#line 1668 "rtti_to_mlds.m"
    }
#line 1668 "rtti_to_mlds.m"
    {
#line 1668 "rtti_to_mlds.m"
      MR_Word base;
#line 1668 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1668 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_10 = base;
#line 1668 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 1668 "rtti_to_mlds.m"
    }
#line 1594 "rtti_to_mlds.m"
  }
#line 1590 "rtti_to_mlds.m"
}

#line 1354 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3(
#line 1354 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1354 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1354 "rtti_to_mlds.m"
{
#line 1354 "rtti_to_mlds.m"
  {
#line 1354 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1354 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1354 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_Initializer_8;

#line 1354 "rtti_to_mlds.m"
    {
#line 1354 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1354 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_Initializer_8));
#line 1354 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1354 "rtti_to_mlds.m"
  }
#line 1354 "rtti_to_mlds.m"
}

#line 1570 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2(
#line 1570 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1570 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1570 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1570 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1570 "rtti_to_mlds.m"
{
#line 1570 "rtti_to_mlds.m"
  {
#line 1570 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1570 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10;

#line 1570 "rtti_to_mlds.m"
    {
#line 1570 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10);
    }
#line 1570 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10));
#line 1570 "rtti_to_mlds.m"
  }
#line 1570 "rtti_to_mlds.m"
}

#line 1569 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_1(
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1569 "rtti_to_mlds.m"
{
#line 1569 "rtti_to_mlds.m"
  {
#line 1569 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1569 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1569 "rtti_to_mlds.m"
    {
#line 1569 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1569 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1569 "rtti_to_mlds.m"
  }
#line 1569 "rtti_to_mlds.m"
}

#line 1564 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(
#line 1564 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1564 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiDatas_7,
#line 1564 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1564 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1564 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1564 "rtti_to_mlds.m"
{
#line 1568 "rtti_to_mlds.m"
  {
#line 1568 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1568 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 1568 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_10;
#line 1568 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1568 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 1568 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1570 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13;

#line 1569 "rtti_to_mlds.m"
    {
#line 1569 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RealRttiDatas_10 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_18_18, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[34], ml_backend__rtti_to_mlds__PTIRttiDatas_7);
    }
#line 1570 "rtti_to_mlds.m"
    {
#line 1570 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1570 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 1570 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2));
#line 1570 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1570 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
#line 1570 "rtti_to_mlds.m"
    }
#line 1570 "rtti_to_mlds.m"
    {
#line 1570 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_15_15, ml_backend__rtti_to_mlds__RealRttiDatas_10, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13);
    }
#line 1570 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13);
#line 1571 "rtti_to_mlds.m"
    {
#line 1571 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1354 "rtti_to_mlds.m"
    {
#line 1354 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[5]));
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3));
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1354 "rtti_to_mlds.m"
    }
#line 1354 "rtti_to_mlds.m"
    {
#line 1354 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__PTIRttiDatas_7);
    }
#line 1568 "rtti_to_mlds.m"
  }
#line 1564 "rtti_to_mlds.m"
}

#line 1549 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(
#line 1549 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1549 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiData_7,
#line 1549 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1549 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 1549 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12)
#line 1549 "rtti_to_mlds.m"
{
#line 1552 "rtti_to_mlds.m"
  {
#line 1552 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1552 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_10;

#line 1709 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1710 "rtti_to_mlds.m"
      {
#line 1710 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));

#line 1712 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 0))))
#line 1711 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1712 "rtti_to_mlds.m"
        else
#line 1712 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 3))))
#line 1712 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1712 "rtti_to_mlds.m"
        else
#line 1712 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1710 "rtti_to_mlds.m"
      }
#line 1709 "rtti_to_mlds.m"
    else
#line 1709 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1707 "rtti_to_mlds.m"
      {
#line 1707 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));
#line 1708 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_17_17;

#line 1708 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_16)) == (MR_mktag((MR_Integer) 0)));
#line 1708 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1708 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_16), (MR_Integer) 0);
#line 1707 "rtti_to_mlds.m"
      }
#line 1709 "rtti_to_mlds.m"
    else
#line 1709 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1705 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = !(ml_backend__rtti_to_mlds__succeeded);
#line 1555 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 93 "rtti_to_mlds.m"
      {
#line 88 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 88 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_26_26;

#line 88 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 88 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 88 "rtti_to_mlds.m"
          {
#line 88 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));
#line 88 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 88 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 88 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, (MR_Integer) 0)));
#line 88 "rtti_to_mlds.m"
          }
#line 93 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 93 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11;
#line 93 "rtti_to_mlds.m"
        else
#line 94 "rtti_to_mlds.m"
          {
#line 94 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__PTIRttiData_7, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);
          }
#line 93 "rtti_to_mlds.m"
      }
#line 1555 "rtti_to_mlds.m"
    else
#line 1555 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11;
#line 1560 "rtti_to_mlds.m"
    {
#line 1560 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_10);
    }
#line 1561 "rtti_to_mlds.m"
    {
#line 1561 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_10, ml_backend__rtti_to_mlds__PTIRttiData_7);
    }
#line 1552 "rtti_to_mlds.m"
  }
#line 1549 "rtti_to_mlds.m"
}

#line 1436 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
#line 1436 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1436 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1436 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7)
#line 1436 "rtti_to_mlds.m"
{
#line 1439 "rtti_to_mlds.m"
  {
#line 1439 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1439 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1439 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 1439 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 1439 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;

#line 1394 "rtti_to_mlds.m"
    {
#line 1394 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1394 "rtti_to_mlds.m"
    }
#line 1448 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiId_7)) == (MR_mktag((MR_Integer) 0))))
#line 1448 "rtti_to_mlds.m"
      {
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 0)));
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 1)));
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_36;
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_37;
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_41;
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_42;
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DataAddr_43;
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46;

#line 1466 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1467 "rtti_to_mlds.m"
          {
#line 1467 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 1)));

#line 1469 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_31)) == (MR_mktag((MR_Integer) 1))))
#line 1468 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1469 "rtti_to_mlds.m"
            else
#line 1469 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_31)) == (MR_mktag((MR_Integer) 2))))
#line 1469 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1469 "rtti_to_mlds.m"
            else
#line 1469 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1467 "rtti_to_mlds.m"
          }
#line 1466 "rtti_to_mlds.m"
        else
#line 1466 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1462 "rtti_to_mlds.m"
          {
#line 1462 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 1)));

#line 1464 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_26)) == (MR_mktag((MR_Integer) 1))))
#line 1463 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1464 "rtti_to_mlds.m"
            else
#line 1464 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_26)) == (MR_mktag((MR_Integer) 2))))
#line 1464 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1464 "rtti_to_mlds.m"
            else
#line 1464 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1462 "rtti_to_mlds.m"
          }
#line 1466 "rtti_to_mlds.m"
        else
#line 1466 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1475 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1473 "rtti_to_mlds.m"
          {
#line 1473 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ModuleName_36 = ml_backend__rtti_to_mlds__ModuleName_6;
#line 1474 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1473 "rtti_to_mlds.m"
          }
#line 1475 "rtti_to_mlds.m"
        else
#line 1477 "rtti_to_mlds.m"
          {
#line 1477 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiModuleName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 0)));
#line 1476 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__RttiTypeName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 1)));
#line 1476 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__RttiTypeArity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 2)));
#line 1483 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__V_44_44;

#line 1483 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiModuleName_38)) == (MR_mktag((MR_Integer) 0)));
#line 1483 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1483 "rtti_to_mlds.m"
              {
#line 1483 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiModuleName_38, (MR_Integer) 0)));
#line 1483 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__succeeded = (strcmp(ml_backend__rtti_to_mlds__V_44_44, (MR_String) "") == 0);
#line 1483 "rtti_to_mlds.m"
              }
#line 1487 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1484 "rtti_to_mlds.m"
              {
#line 1484 "rtti_to_mlds.m"
                {
#line 1484 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__ModuleName_36 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                }
#line 1485 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1484 "rtti_to_mlds.m"
              }
#line 1487 "rtti_to_mlds.m"
            else
#line 1488 "rtti_to_mlds.m"
              {
#line 1488 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ModuleName_36 = ml_backend__rtti_to_mlds__RttiModuleName_38;
#line 1489 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1488 "rtti_to_mlds.m"
              }
#line 1477 "rtti_to_mlds.m"
          }
#line 1492 "rtti_to_mlds.m"
        {
#line 1492 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_41 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_36);
        }
#line 1493 "rtti_to_mlds.m"
        {
#line 1493 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_37));
#line 1493 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_18));
#line 1493 "rtti_to_mlds.m"
        }
#line 1493 "rtti_to_mlds.m"
        {
#line 1493 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_DataName_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1493 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 1493 "rtti_to_mlds.m"
        }
#line 1494 "rtti_to_mlds.m"
        {
#line 1494 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__DataAddr_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1494 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_41));
#line 1494 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_42));
#line 1494 "rtti_to_mlds.m"
        }
#line 1495 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_43);
#line 1495 "rtti_to_mlds.m"
        {
#line 1495 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1495 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 1495 "rtti_to_mlds.m"
        }
#line 1448 "rtti_to_mlds.m"
      }
#line 1448 "rtti_to_mlds.m"
    else
#line 1450 "rtti_to_mlds.m"
      {
#line 1450 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 0)));
#line 1450 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCRttiName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 1)));

#line 1451 "rtti_to_mlds.m"
        {
#line 1451 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(ml_backend__rtti_to_mlds__TCName_20, ml_backend__rtti_to_mlds__TCRttiName_21);
        }
#line 1450 "rtti_to_mlds.m"
      }
#line 1441 "rtti_to_mlds.m"
    {
#line 1441 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1441 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 1441 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 1441 "rtti_to_mlds.m"
    }
#line 1441 "rtti_to_mlds.m"
    {
#line 1441 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1441 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 1441 "rtti_to_mlds.m"
    }
#line 1439 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1439 "rtti_to_mlds.m"
  }
#line 1436 "rtti_to_mlds.m"
}

#line 1418 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
#line 1418 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1418 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1418 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiName_7)
#line 1418 "rtti_to_mlds.m"
{
#line 1421 "rtti_to_mlds.m"
  {
#line 1421 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_23;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_24;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_28;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_29;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_30;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1421 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;

#line 1466 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1467 "rtti_to_mlds.m"
      {
#line 1467 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 1)));

#line 1469 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
#line 1468 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1469 "rtti_to_mlds.m"
        else
#line 1469 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 2))))
#line 1469 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1469 "rtti_to_mlds.m"
        else
#line 1469 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1467 "rtti_to_mlds.m"
      }
#line 1466 "rtti_to_mlds.m"
    else
#line 1466 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1462 "rtti_to_mlds.m"
      {
#line 1462 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 1)));

#line 1464 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_13)) == (MR_mktag((MR_Integer) 1))))
#line 1463 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1464 "rtti_to_mlds.m"
        else
#line 1464 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_13)) == (MR_mktag((MR_Integer) 2))))
#line 1464 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1464 "rtti_to_mlds.m"
        else
#line 1464 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1462 "rtti_to_mlds.m"
      }
#line 1466 "rtti_to_mlds.m"
    else
#line 1466 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1475 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1473 "rtti_to_mlds.m"
      {
#line 1473 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ModuleName_23 = ml_backend__rtti_to_mlds__ModuleName_5;
#line 1474 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1473 "rtti_to_mlds.m"
      }
#line 1475 "rtti_to_mlds.m"
    else
#line 1477 "rtti_to_mlds.m"
      {
#line 1477 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiModuleName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 0)));
#line 1476 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__RttiTypeName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 1)));
#line 1476 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__RttiTypeArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 2)));
#line 1483 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_31_31;

#line 1483 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiModuleName_25)) == (MR_mktag((MR_Integer) 0)));
#line 1483 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1483 "rtti_to_mlds.m"
          {
#line 1483 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiModuleName_25, (MR_Integer) 0)));
#line 1483 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = (strcmp(ml_backend__rtti_to_mlds__V_31_31, (MR_String) "") == 0);
#line 1483 "rtti_to_mlds.m"
          }
#line 1487 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1484 "rtti_to_mlds.m"
          {
#line 1484 "rtti_to_mlds.m"
            {
#line 1484 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ModuleName_23 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 1485 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1484 "rtti_to_mlds.m"
          }
#line 1487 "rtti_to_mlds.m"
        else
#line 1488 "rtti_to_mlds.m"
          {
#line 1488 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ModuleName_23 = ml_backend__rtti_to_mlds__RttiModuleName_25;
#line 1489 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1488 "rtti_to_mlds.m"
          }
#line 1477 "rtti_to_mlds.m"
      }
#line 1492 "rtti_to_mlds.m"
    {
#line 1492 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_23);
    }
#line 1493 "rtti_to_mlds.m"
    {
#line 1493 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_24));
#line 1493 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_7));
#line 1493 "rtti_to_mlds.m"
    }
#line 1493 "rtti_to_mlds.m"
    {
#line 1493 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1493 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1493 "rtti_to_mlds.m"
    }
#line 1494 "rtti_to_mlds.m"
    {
#line 1494 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1494 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_28));
#line 1494 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_29));
#line 1494 "rtti_to_mlds.m"
    }
#line 1495 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_30);
#line 1495 "rtti_to_mlds.m"
    {
#line 1495 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1495 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1495 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1495 "rtti_to_mlds.m"
    }
#line 1422 "rtti_to_mlds.m"
    {
#line 1422 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1422 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_8_8));
#line 1422 "rtti_to_mlds.m"
    }
#line 1421 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1421 "rtti_to_mlds.m"
  }
#line 1418 "rtti_to_mlds.m"
}

#line 1408 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
#line 1408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2)
#line 1408 "rtti_to_mlds.m"
{
#line 1410 "rtti_to_mlds.m"
  {
#line 1410 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1410 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3;

#line 1410 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1410 "rtti_to_mlds.m"
      {
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 1)));

#line 1411 "rtti_to_mlds.m"
        {
#line 1411 "rtti_to_mlds.m"
          return ml_backend__rtti_to_mlds__HeadVar__3_3 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_5, ml_backend__rtti_to_mlds__RttiName_6);
        }
#line 1410 "rtti_to_mlds.m"
      }
#line 1410 "rtti_to_mlds.m"
    else
#line 1412 "rtti_to_mlds.m"
      {
#line 1412 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1412 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCRttiName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1412 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1412 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_20;
#line 1412 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_26;
#line 1412 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DataAddr_27;
#line 1412 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;

#line 1503 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_40);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_50);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_55);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_60);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_65);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 1))))
#line 1501 "rtti_to_mlds.m"
          {
#line 1501 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)));
#line 1501 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 1)));

#line 1502 "rtti_to_mlds.m"
            {
#line 1502 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_18);
            }
#line 1501 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 2))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_45);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_70);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_75);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_80);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1503 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_86 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_85);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1503 "rtti_to_mlds.m"
        else
#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1544 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_91 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1544 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1545 "rtti_to_mlds.m"
            {
#line 1545 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_90);
            }
#line 1543 "rtti_to_mlds.m"
          }
#line 1537 "rtti_to_mlds.m"
        {
#line 1537 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_DataName_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1537 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__HeadVar__2_2));
#line 1537 "rtti_to_mlds.m"
        }
#line 1538 "rtti_to_mlds.m"
        {
#line 1538 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__DataAddr_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1538 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_20));
#line 1538 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_26));
#line 1538 "rtti_to_mlds.m"
        }
#line 1539 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_27);
#line 1539 "rtti_to_mlds.m"
        {
#line 1539 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1539 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1539 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1539 "rtti_to_mlds.m"
        }
#line 1431 "rtti_to_mlds.m"
        {
#line 1431 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1431 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 1431 "rtti_to_mlds.m"
        }
#line 1412 "rtti_to_mlds.m"
      }
#line 1410 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__3_3;
#line 1410 "rtti_to_mlds.m"
  }
#line 1408 "rtti_to_mlds.m"
}

#line 1360 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
#line 1360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_7)
#line 1360 "rtti_to_mlds.m"
{
#line 1371 "rtti_to_mlds.m"
  {
#line 1371 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1371 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1371 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__VarNum_9;
#line 1365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;

#line 1365 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1365 "rtti_to_mlds.m"
      {
#line 1365 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 1)));
#line 1365 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_20_20)) == (MR_mktag((MR_Integer) 3)));
#line 1365 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1365 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__VarNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, (MR_Integer) 0)));
#line 1365 "rtti_to_mlds.m"
      }
#line 1371 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1368 "rtti_to_mlds.m"
      {
#line 1368 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1368 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1368 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1368 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 1394 "rtti_to_mlds.m"
        {
#line 1394 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1394 "rtti_to_mlds.m"
        }
#line 1370 "rtti_to_mlds.m"
        {
#line 1370 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__VarNum_9));
#line 1370 "rtti_to_mlds.m"
        }
#line 1370 "rtti_to_mlds.m"
        {
#line 1370 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1370 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1370 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1370 "rtti_to_mlds.m"
        }
#line 1369 "rtti_to_mlds.m"
        {
#line 1369 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1369 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 1369 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 1369 "rtti_to_mlds.m"
        }
#line 1369 "rtti_to_mlds.m"
        {
#line 1369 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 1369 "rtti_to_mlds.m"
        }
#line 1368 "rtti_to_mlds.m"
      }
#line 1371 "rtti_to_mlds.m"
    else
#line 1385 "rtti_to_mlds.m"
      {
#line 1385 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_11;
#line 1385 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_12;
#line 1385 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__InstanceString_13;
#line 1372 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1372 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1372 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1372 "rtti_to_mlds.m"
          {
#line 1372 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__TCName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 1)));
#line 1372 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__InstanceModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 2)));
#line 1372 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__InstanceString_13 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 3)));
#line 1372 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 4)));
#line 1377 "rtti_to_mlds.m"
            {
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_15;
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_16;
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_17;
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_18;
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1377 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_32_32;

#line 1376 "rtti_to_mlds.m"
              {
#line 1376 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1376 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceModuleName_12));
#line 1376 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceString_13));
#line 1376 "rtti_to_mlds.m"
              }
#line 1375 "rtti_to_mlds.m"
              {
#line 1375 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_11));
#line 1375 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1375 "rtti_to_mlds.m"
              }
#line 1378 "rtti_to_mlds.m"
              {
#line 1378 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_12);
              }
#line 1379 "rtti_to_mlds.m"
              {
#line 1379 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_DataName_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1379 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1379 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 1379 "rtti_to_mlds.m"
              }
#line 1382 "rtti_to_mlds.m"
              {
#line 1382 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1382 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_15));
#line 1382 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_16));
#line 1382 "rtti_to_mlds.m"
              }
#line 1383 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_17);
#line 1383 "rtti_to_mlds.m"
              {
#line 1383 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1383 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1383 "rtti_to_mlds.m"
              }
#line 1394 "rtti_to_mlds.m"
              {
#line 1394 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1394 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1394 "rtti_to_mlds.m"
              }
#line 1384 "rtti_to_mlds.m"
              {
#line 1384 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1384 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1384 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_18));
#line 1384 "rtti_to_mlds.m"
              }
#line 1384 "rtti_to_mlds.m"
              {
#line 1384 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1384 "rtti_to_mlds.m"
              }
#line 1377 "rtti_to_mlds.m"
            }
#line 1372 "rtti_to_mlds.m"
          }
#line 1372 "rtti_to_mlds.m"
        else
#line 1386 "rtti_to_mlds.m"
          {
#line 1386 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiId_19;

#line 1386 "rtti_to_mlds.m"
            {
#line 1386 "rtti_to_mlds.m"
              backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__rtti_to_mlds__RttiData_7, &ml_backend__rtti_to_mlds__RttiId_19);
            }
#line 1387 "rtti_to_mlds.m"
            {
#line 1387 "rtti_to_mlds.m"
              return ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(ml_backend__rtti_to_mlds__DestType_5, ml_backend__rtti_to_mlds__ModuleName_6, ml_backend__rtti_to_mlds__RttiId_19);
            }
#line 1386 "rtti_to_mlds.m"
          }
#line 1385 "rtti_to_mlds.m"
      }
#line 1371 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1371 "rtti_to_mlds.m"
  }
#line 1360 "rtti_to_mlds.m"
}

#line 1354 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
#line 1354 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1354 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1354 "rtti_to_mlds.m"
{
#line 1354 "rtti_to_mlds.m"
  {
#line 1354 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1354 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1354 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_8;

#line 1354 "rtti_to_mlds.m"
    {
#line 1354 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1354 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_8));
#line 1354 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1354 "rtti_to_mlds.m"
  }
#line 1354 "rtti_to_mlds.m"
}

#line 1350 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
#line 1350 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Type_5,
#line 1350 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1350 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_7)
#line 1350 "rtti_to_mlds.m"
{
#line 1353 "rtti_to_mlds.m"
  {
#line 1353 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1353 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1353 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;

#line 1354 "rtti_to_mlds.m"
    {
#line 1354 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[5]));
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1));
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_5));
#line 1354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_6));
#line 1354 "rtti_to_mlds.m"
    }
#line 1354 "rtti_to_mlds.m"
    {
#line 1354 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__HeadVar__4_4 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ml_backend__rtti_to_mlds__V_8_8, ml_backend__rtti_to_mlds__RttiDatas_7);
    }
#line 1353 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1353 "rtti_to_mlds.m"
  }
#line 1350 "rtti_to_mlds.m"
}

#line 1331 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
#line 1331 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1331 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1331 "rtti_to_mlds.m"
{
#line 1331 "rtti_to_mlds.m"
  {
#line 1331 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1331 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1331 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1331 "rtti_to_mlds.m"
    {
#line 1331 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_int_1_f_0(((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1331 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1331 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1331 "rtti_to_mlds.m"
  }
#line 1331 "rtti_to_mlds.m"
}

#line 1327 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
#line 1327 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5,
#line 1327 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_6,
#line 1327 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
#line 1327 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11)
#line 1327 "rtti_to_mlds.m"
{
#line 1330 "rtti_to_mlds.m"
  {
#line 1330 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1330 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1330 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_23;
#line 1330 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_30;
#line 1330 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 1331 "rtti_to_mlds.m"
    {
#line 1331 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[33], ml_backend__rtti_to_mlds__FunctorNumberMap_6);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_5));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_23));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_30, ml_backend__rtti_to_mlds__RttiId_23, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1330 "rtti_to_mlds.m"
  }
#line 1327 "rtti_to_mlds.m"
}

#line 1297 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(
#line 1297 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1297 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1297 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_7)
#line 1297 "rtti_to_mlds.m"
{
#line 1301 "rtti_to_mlds.m"
  {
#line 1301 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1301 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1301 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
#line 1301 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Type_11;
#line 1301 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;

#line 1303 "rtti_to_mlds.m"
    {
#line 1303 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_10, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_6));
#line 1303 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 1303 "rtti_to_mlds.m"
    }
#line 1304 "rtti_to_mlds.m"
    {
#line 1304 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 1304 "rtti_to_mlds.m"
    }
#line 1304 "rtti_to_mlds.m"
    {
#line 1304 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Type_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1304 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1304 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 1304 "rtti_to_mlds.m"
    }
#line 1315 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7)) == (MR_mktag((MR_Integer) 1))))
#line 1316 "rtti_to_mlds.m"
      {
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuFunctor_14 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7), (MR_Integer) 1);
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1316 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_20_20;
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1316 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 0)));
#line 1317 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 1)));
#line 1317 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 2)));
#line 1317 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 3)));
#line 1317 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 4)));
#line 1317 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 5)));
#line 1320 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_48_48;
#line 1320 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_49_49;
#line 1320 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 1320 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 1320 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_52_52;

#line 1319 "rtti_to_mlds.m"
        {
#line 1319 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_17_17 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__Name_40);
        }
#line 1320 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 0)));
#line 1320 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 1)));
#line 1320 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 2)));
#line 1320 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 3)));
#line 1320 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 4)));
#line 1320 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 5)));
#line 1320 "rtti_to_mlds.m"
        {
#line 1320 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_19_19 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_20_20);
        }
#line 1321 "rtti_to_mlds.m"
        {
#line 1321 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_22_22 = ml_backend__ml_util__gen_init_bool_1_f_0((MR_Integer) 0);
        }
#line 1323 "rtti_to_mlds.m"
        {
#line 1323 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_26_26 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ml_backend__rtti_to_mlds__MaybeResFunctor_7);
        }
#line 1322 "rtti_to_mlds.m"
        {
#line 1322 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_25_25 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_5, ml_backend__rtti_to_mlds__RttiTypeCtor_6, ml_backend__rtti_to_mlds__V_26_26);
        }
#line 1324 "rtti_to_mlds.m"
        {
#line 1324 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1324 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 1324 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1324 "rtti_to_mlds.m"
        }
#line 1321 "rtti_to_mlds.m"
        {
#line 1321 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1321 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 1321 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1321 "rtti_to_mlds.m"
        }
#line 1320 "rtti_to_mlds.m"
        {
#line 1320 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 1320 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 1320 "rtti_to_mlds.m"
        }
#line 1319 "rtti_to_mlds.m"
        {
#line 1319 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 1319 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 1319 "rtti_to_mlds.m"
        }
#line 1318 "rtti_to_mlds.m"
        {
#line 1318 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_11));
#line 1318 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 1318 "rtti_to_mlds.m"
        }
#line 1316 "rtti_to_mlds.m"
      }
#line 1315 "rtti_to_mlds.m"
    else
#line 1306 "rtti_to_mlds.m"
      {
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ResFunctor_12 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7), (MR_Integer) 0);
#line 1306 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 0)));
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1307 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 1)));
#line 1307 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 2)));

#line 1309 "rtti_to_mlds.m"
        {
#line 1309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__Name_13);
        }
#line 1310 "rtti_to_mlds.m"
        {
#line 1310 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
        }
#line 1311 "rtti_to_mlds.m"
        {
#line 1311 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_bool_1_f_0((MR_Integer) 1);
        }
#line 1313 "rtti_to_mlds.m"
        {
#line 1313 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_38_38 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ml_backend__rtti_to_mlds__MaybeResFunctor_7);
        }
#line 1312 "rtti_to_mlds.m"
        {
#line 1312 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_37_37 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_5, ml_backend__rtti_to_mlds__RttiTypeCtor_6, ml_backend__rtti_to_mlds__V_38_38);
        }
#line 1314 "rtti_to_mlds.m"
        {
#line 1314 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1314 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1314 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1314 "rtti_to_mlds.m"
        }
#line 1311 "rtti_to_mlds.m"
        {
#line 1311 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1311 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1311 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1311 "rtti_to_mlds.m"
        }
#line 1310 "rtti_to_mlds.m"
        {
#line 1310 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1310 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1310 "rtti_to_mlds.m"
        }
#line 1309 "rtti_to_mlds.m"
        {
#line 1309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1309 "rtti_to_mlds.m"
        }
#line 1308 "rtti_to_mlds.m"
        {
#line 1308 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_11));
#line 1308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1308 "rtti_to_mlds.m"
        }
#line 1306 "rtti_to_mlds.m"
      }
#line 1301 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1301 "rtti_to_mlds.m"
  }
#line 1297 "rtti_to_mlds.m"
}

#line 1291 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2(
#line 1291 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1291 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1291 "rtti_to_mlds.m"
{
#line 1291 "rtti_to_mlds.m"
  {
#line 1291 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1291 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1291 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_Initializer_8;

#line 1291 "rtti_to_mlds.m"
    {
#line 1291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_Initializer_8 = ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1291 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_Initializer_8));
#line 1291 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1291 "rtti_to_mlds.m"
  }
#line 1291 "rtti_to_mlds.m"
}

#line 1287 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1(
#line 1287 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1287 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1287 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1287 "rtti_to_mlds.m"
{
#line 1287 "rtti_to_mlds.m"
  {
#line 1287 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1287 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_24;

#line 1287 "rtti_to_mlds.m"
    {
#line 1287 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1287__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv0_HeadVar__2_24);
    }
#line 1287 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_24));
#line 1287 "rtti_to_mlds.m"
  }
#line 1287 "rtti_to_mlds.m"
}

#line 1280 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(
#line 1280 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1280 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1280 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1280 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16,
#line 1280 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17)
#line 1280 "rtti_to_mlds.m"
{
#line 1285 "rtti_to_mlds.m"
  {
#line 1285 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_22_22 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[3];
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_28_28;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArityMaps_10;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorLists_11;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_12;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_14;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1286 "rtti_to_mlds.m"
    {
#line 1286 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeInfo_22_22, ml_backend__rtti_to_mlds__NameArityMap_8, &ml_backend__rtti_to_mlds__ArityMaps_10);
    }
#line 1287 "rtti_to_mlds.m"
    {
#line 1287 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_22_22, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[6], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[32], ml_backend__rtti_to_mlds__ArityMaps_10, &ml_backend__rtti_to_mlds__FunctorLists_11);
    }
#line 8080 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_28_28 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
#line 1288 "rtti_to_mlds.m"
    {
#line 1288 "rtti_to_mlds.m"
      mercury__list__condense_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_28_28, ml_backend__rtti_to_mlds__FunctorLists_11, &ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1289 "rtti_to_mlds.m"
    {
#line 1289 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_13);
    }
#line 1291 "rtti_to_mlds.m"
    {
#line 1291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[4]));
#line 1291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2));
#line 1291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
#line 1291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1291 "rtti_to_mlds.m"
    }
#line 1290 "rtti_to_mlds.m"
    {
#line 1290 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_14 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_28_28, ml_backend__rtti_to_mlds__V_19_19, ml_backend__rtti_to_mlds__Functors_12);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1285 "rtti_to_mlds.m"
  }
#line 1280 "rtti_to_mlds.m"
}

#line 1275 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1(
#line 1275 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1275 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1275 "rtti_to_mlds.m"
{
#line 1275 "rtti_to_mlds.m"
  {
#line 1275 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1275 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1275 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__3_3;

#line 1275 "rtti_to_mlds.m"
    {
#line 1275 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__3_3 = ml_backend__ml_util__gen_init_reserved_address_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1275 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__3_3));
#line 1275 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1275 "rtti_to_mlds.m"
  }
#line 1275 "rtti_to_mlds.m"
}

#line 1269 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(
#line 1269 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1269 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1269 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResAddrs_8,
#line 1269 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1269 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1269 "rtti_to_mlds.m"
{
#line 1273 "rtti_to_mlds.m"
  {
#line 1273 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1273 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_10;
#line 1273 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 1273 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_25;
#line 1273 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_32;
#line 1273 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;

#line 1275 "rtti_to_mlds.m"
    {
#line 1275 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1275 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[4]));
#line 1275 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1));
#line 1275 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1275 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
#line 1275 "rtti_to_mlds.m"
    }
#line 1275 "rtti_to_mlds.m"
    {
#line 1275 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, ml_backend__rtti_to_mlds__V_14_14, ml_backend__rtti_to_mlds__ResAddrs_8);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_25));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_32, ml_backend__rtti_to_mlds__RttiId_25, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1273 "rtti_to_mlds.m"
  }
#line 1269 "rtti_to_mlds.m"
}

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1342 "rtti_to_mlds.m"
{
#line 1342 "rtti_to_mlds.m"
  {
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__4_4;

#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1342 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__4_4));
#line 1342 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
  }
#line 1342 "rtti_to_mlds.m"
}

#line 1262 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3(
#line 1262 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1262 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1262 "rtti_to_mlds.m"
{
#line 1262 "rtti_to_mlds.m"
  {
#line 1262 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1262 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 1262 "rtti_to_mlds.m"
    {
#line 1262 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__res_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1262 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 1262 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1262 "rtti_to_mlds.m"
  }
#line 1262 "rtti_to_mlds.m"
}

#line 1227 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2(
#line 1227 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1227 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1227 "rtti_to_mlds.m"
{
#line 1227 "rtti_to_mlds.m"
  {
#line 1227 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1227 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1227 "rtti_to_mlds.m"
    {
#line 1227 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = backend_libs__rtti__res_addr_is_numeric_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1227 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1227 "rtti_to_mlds.m"
  }
#line 1227 "rtti_to_mlds.m"
}

#line 1226 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1(
#line 1226 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1226 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1226 "rtti_to_mlds.m"
{
#line 1226 "rtti_to_mlds.m"
  {
#line 1226 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1226 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1226 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1226 "rtti_to_mlds.m"
    {
#line 1226 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__res_addr_rep_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1226 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1226 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1226 "rtti_to_mlds.m"
  }
#line 1226 "rtti_to_mlds.m"
}

#line 1220 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResFunctors_9,
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuByPtag_10,
#line 1220 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1220 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23)
#line 1220 "rtti_to_mlds.m"
{
#line 1225 "rtti_to_mlds.m"
  {
#line 1225 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ResFunctorReps_12;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__NumericResFunctorReps_13;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14;
#line 1225 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15;
#line 1225 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_17;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ResAddrInitializer_18;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_20;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_21;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_57;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_58;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_79;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_86;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_94;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_95_95;

#line 1226 "rtti_to_mlds.m"
    {
#line 1226 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ResFunctorReps_12 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[29], ml_backend__rtti_to_mlds__ResFunctors_9);
    }
#line 1227 "rtti_to_mlds.m"
    {
#line 1227 "rtti_to_mlds.m"
      mercury__list__filter_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[30], ml_backend__rtti_to_mlds__ResFunctorReps_12, &ml_backend__rtti_to_mlds__NumericResFunctorReps_13, &ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14);
    }
#line 1229 "rtti_to_mlds.m"
    {
#line 1229 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, ml_backend__rtti_to_mlds__NumericResFunctorReps_13, &ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15);
    }
#line 1230 "rtti_to_mlds.m"
    {
#line 1230 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14, &ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16);
    }
#line 1231 "rtti_to_mlds.m"
    {
#line 1231 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_17);
    }
#line 1262 "rtti_to_mlds.m"
    {
#line 1262 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_57 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[31], ml_backend__rtti_to_mlds__ResFunctors_9);
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_17));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 1342 "rtti_to_mlds.m"
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_58 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_69_69, ml_backend__rtti_to_mlds__FunctorRttiNames_57);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_87_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_79));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_86, ml_backend__rtti_to_mlds__RttiId_79, ml_backend__rtti_to_mlds__Initializer_58, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26);
    }
#line 1234 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16 == (MR_Integer) 0);
#line 1236 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1235 "rtti_to_mlds.m"
      {
#line 1235 "rtti_to_mlds.m"
        {
#line 1235 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ResAddrInitializer_18 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 1235 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
#line 1235 "rtti_to_mlds.m"
      }
#line 1236 "rtti_to_mlds.m"
    else
#line 1238 "rtti_to_mlds.m"
      {
#line 1237 "rtti_to_mlds.m"
        {
#line 1237 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28);
        }
#line 1239 "rtti_to_mlds.m"
        {
#line 1239 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ResAddrInitializer_18 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        }
#line 1238 "rtti_to_mlds.m"
      }
#line 1242 "rtti_to_mlds.m"
    {
#line 1242 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__DuByPtag_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30);
    }
#line 1244 "rtti_to_mlds.m"
    {
#line 1244 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 1244 "rtti_to_mlds.m"
    }
#line 1245 "rtti_to_mlds.m"
    {
#line 1245 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
#line 1245 "rtti_to_mlds.m"
    }
#line 1245 "rtti_to_mlds.m"
    {
#line 1245 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1245 "rtti_to_mlds.m"
    }
#line 1246 "rtti_to_mlds.m"
    {
#line 1246 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15);
    }
#line 1247 "rtti_to_mlds.m"
    {
#line 1247 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16);
    }
#line 1249 "rtti_to_mlds.m"
    {
#line 1249 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_39_39 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
    }
#line 1251 "rtti_to_mlds.m"
    {
#line 1251 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_42_42 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
    }
#line 1253 "rtti_to_mlds.m"
    {
#line 1253 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1253 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 1253 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1253 "rtti_to_mlds.m"
    }
#line 1250 "rtti_to_mlds.m"
    {
#line 1250 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1250 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 1250 "rtti_to_mlds.m"
    }
#line 1248 "rtti_to_mlds.m"
    {
#line 1248 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ResAddrInitializer_18));
#line 1248 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 1248 "rtti_to_mlds.m"
    }
#line 1247 "rtti_to_mlds.m"
    {
#line 1247 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1247 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1247 "rtti_to_mlds.m"
    }
#line 1246 "rtti_to_mlds.m"
    {
#line 1246 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1246 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 1246 "rtti_to_mlds.m"
    }
#line 1245 "rtti_to_mlds.m"
    {
#line 1245 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1245 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_95_95, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_94, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_95_95));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_94, ml_backend__rtti_to_mlds__RttiId_20, ml_backend__rtti_to_mlds__Initializer_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1225 "rtti_to_mlds.m"
  }
#line 1220 "rtti_to_mlds.m"
}

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1342 "rtti_to_mlds.m"
{
#line 1342 "rtti_to_mlds.m"
  {
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__4_4;

#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1342 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__4_4));
#line 1342 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
  }
#line 1342 "rtti_to_mlds.m"
}

#line 1213 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2(
#line 1213 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1213 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1213 "rtti_to_mlds.m"
{
#line 1213 "rtti_to_mlds.m"
  {
#line 1213 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1213 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1213 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 1213 "rtti_to_mlds.m"
    {
#line 1213 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1213 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 1213 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1213 "rtti_to_mlds.m"
  }
#line 1213 "rtti_to_mlds.m"
}

#line 1210 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1(
#line 1210 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1210 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1210 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1210 "rtti_to_mlds.m"
{
#line 1210 "rtti_to_mlds.m"
  {
#line 1210 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1210 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_25;

#line 1210 "rtti_to_mlds.m"
    {
#line 1210 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1210__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv0_HeadVar__2_25);
    }
#line 1210 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_25));
#line 1210 "rtti_to_mlds.m"
  }
#line 1210 "rtti_to_mlds.m"
}

#line 1203 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(
#line 1203 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1203 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1203 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1203 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
#line 1203 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18)
#line 1203 "rtti_to_mlds.m"
{
#line 1208 "rtti_to_mlds.m"
  {
#line 1208 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_23_23 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[2];
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_29_29;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArityMaps_10;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorLists_11;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_12;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_14;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_15;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_46;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_53;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;

#line 1209 "rtti_to_mlds.m"
    {
#line 1209 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeInfo_23_23, ml_backend__rtti_to_mlds__NameArityMap_8, &ml_backend__rtti_to_mlds__ArityMaps_10);
    }
#line 1210 "rtti_to_mlds.m"
    {
#line 1210 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_23_23, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[5], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[27], ml_backend__rtti_to_mlds__ArityMaps_10, &ml_backend__rtti_to_mlds__FunctorLists_11);
    }
#line 8890 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 1211 "rtti_to_mlds.m"
    {
#line 1211 "rtti_to_mlds.m"
      mercury__list__condense_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_29_29, ml_backend__rtti_to_mlds__FunctorLists_11, &ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1212 "rtti_to_mlds.m"
    {
#line 1212 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_13);
    }
#line 1213 "rtti_to_mlds.m"
    {
#line 1213 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_14 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_29_29, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[28], ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1342 "rtti_to_mlds.m"
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_15 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_36_36, ml_backend__rtti_to_mlds__FunctorRttiNames_14);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_54_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_46));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_53, ml_backend__rtti_to_mlds__RttiId_46, ml_backend__rtti_to_mlds__Initializer_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1208 "rtti_to_mlds.m"
  }
#line 1203 "rtti_to_mlds.m"
}

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1342 "rtti_to_mlds.m"
{
#line 1342 "rtti_to_mlds.m"
  {
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1342 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1342 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
  }
#line 1342 "rtti_to_mlds.m"
}

#line 1196 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
#line 1196 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1196 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1196 "rtti_to_mlds.m"
{
#line 1196 "rtti_to_mlds.m"
  {
#line 1196 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1196 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1196 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1196 "rtti_to_mlds.m"
    {
#line 1196 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1196 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1196 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1196 "rtti_to_mlds.m"
  }
#line 1196 "rtti_to_mlds.m"
}

#line 1188 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
#line 1188 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1188 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1188 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1188 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 1188 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 1188 "rtti_to_mlds.m"
{
#line 1193 "rtti_to_mlds.m"
  {
#line 1193 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_23_23 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 1193 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 0)));
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 1)));
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 2)));
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagFunctors_14;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_15;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_16;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_17;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_40;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_47;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1194 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___SectagLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 0)));
#line 1194 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds___NumSharers_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 1)));

#line 1195 "rtti_to_mlds.m"
    {
#line 1195 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_23_23, ml_backend__rtti_to_mlds__SectagMap_13, &ml_backend__rtti_to_mlds__SectagFunctors_14);
    }
#line 1196 "rtti_to_mlds.m"
    {
#line 1196 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_15 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_23_23, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[26], ml_backend__rtti_to_mlds__SectagFunctors_14);
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_6));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1342 "rtti_to_mlds.m"
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_16 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_30_30, ml_backend__rtti_to_mlds__FunctorRttiNames_15);
    }
#line 1199 "rtti_to_mlds.m"
    {
#line 1199 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1199 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1199 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_8));
#line 1199 "rtti_to_mlds.m"
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_17));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_40));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_47, ml_backend__rtti_to_mlds__RttiId_40, ml_backend__rtti_to_mlds__Initializer_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1193 "rtti_to_mlds.m"
  }
#line 1188 "rtti_to_mlds.m"
}

#line 1175 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1(
#line 1175 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg)
#line 1175 "rtti_to_mlds.m"
{
#line 1175 "rtti_to_mlds.m"
  {
#line 1175 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1175 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1175 "rtti_to_mlds.m"
    {
#line 1175 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1175__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))));
    }
#line 1175 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1175 "rtti_to_mlds.m"
  }
#line 1175 "rtti_to_mlds.m"
}

#line 1168 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(
#line 1168 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1168 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_2,
#line 1168 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1168 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4)
#line 1168 "rtti_to_mlds.m"
{
#line 1171 "rtti_to_mlds.m"
  {
#line 1171 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1171 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__5_5;

#line 1171 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1171 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1171 "rtti_to_mlds.m"
    else
#line 1174 "rtti_to_mlds.m"
      {
#line 1174 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Ptag_11;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SectagTable_12;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PtagTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 1)));
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_15;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializers_16;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SectagLocn_17;
#line 1174 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__NumSharers_18;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_20;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_21;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 0)));
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 1174 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_37_37;
#line 1174 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_41;
#line 1176 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds___SectagMap_19;

#line 1173 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Ptag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, (MR_Integer) 0)));
#line 1173 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SectagTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, (MR_Integer) 1)));
#line 1175 "rtti_to_mlds.m"
        {
#line 1175 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[9]));
#line 1175 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1));
#line 1175 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1175 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__CurPtag_4));
#line 1175 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1175 "rtti_to_mlds.m"
        }
#line 1175 "rtti_to_mlds.m"
        {
#line 1175 "rtti_to_mlds.m"
          mercury__require__expect_4_p_0(ml_backend__rtti_to_mlds__V_23_23, (MR_String) "ml_backend.rtti_to_mlds", (MR_String) "function \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table_body\'/4", (MR_String) "ptag mismatch");
        }
#line 1176 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SectagLocn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 0)));
#line 1176 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__NumSharers_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 1)));
#line 1176 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds___SectagMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 2)));
#line 1177 "rtti_to_mlds.m"
        {
#line 1177 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1177 "rtti_to_mlds.m"
        }
#line 1178 "rtti_to_mlds.m"
        {
#line 1178 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_2));
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_20));
#line 1178 "rtti_to_mlds.m"
        }
#line 1179 "rtti_to_mlds.m"
        {
#line 1179 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_21));
#line 1179 "rtti_to_mlds.m"
        }
#line 1179 "rtti_to_mlds.m"
        {
#line 1179 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1179 "rtti_to_mlds.m"
        }
#line 1180 "rtti_to_mlds.m"
        {
#line 1180 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSharers_18);
        }
#line 1733 "rtti_to_mlds.m"
        {
#line 1733 "rtti_to_mlds.m"
          backend_libs__rtti__sectag_locn_to_string_2_p_0(ml_backend__rtti_to_mlds__SectagLocn_17, &ml_backend__rtti_to_mlds__Name_41);
        }
#line 1732 "rtti_to_mlds.m"
        {
#line 1732 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_32_32 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_41);
        }
#line 1183 "rtti_to_mlds.m"
        {
#line 1183 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1183 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1183 "rtti_to_mlds.m"
        }
#line 1182 "rtti_to_mlds.m"
        {
#line 1182 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_2, ml_backend__rtti_to_mlds__V_35_35);
        }
#line 1184 "rtti_to_mlds.m"
        {
#line 1184 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1184 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1184 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1184 "rtti_to_mlds.m"
        }
#line 1181 "rtti_to_mlds.m"
        {
#line 1181 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1181 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1181 "rtti_to_mlds.m"
        }
#line 1180 "rtti_to_mlds.m"
        {
#line 1180 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1180 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_29_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1180 "rtti_to_mlds.m"
        }
#line 1179 "rtti_to_mlds.m"
        {
#line 1179 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1179 "rtti_to_mlds.m"
        }
#line 1186 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_37_37 = (ml_backend__rtti_to_mlds__CurPtag_4 + (MR_Integer) 1);
#line 1185 "rtti_to_mlds.m"
        {
#line 1185 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializers_16 = ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_2, ml_backend__rtti_to_mlds__PtagTail_13, ml_backend__rtti_to_mlds__V_37_37);
        }
#line 1174 "rtti_to_mlds.m"
        {
#line 1174 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__5_5, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializer_15));
#line 1174 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__5_5, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializers_16));
#line 1174 "rtti_to_mlds.m"
        }
#line 1174 "rtti_to_mlds.m"
      }
#line 1171 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__5_5;
#line 1171 "rtti_to_mlds.m"
  }
#line 1168 "rtti_to_mlds.m"
}

#line 1132 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
#line 1132 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1132 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1132 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1132 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1132 "rtti_to_mlds.m"
{
#line 1132 "rtti_to_mlds.m"
  {
#line 1132 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1132 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19;

#line 1132 "rtti_to_mlds.m"
    {
#line 1132 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19);
    }
#line 1132 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19));
#line 1132 "rtti_to_mlds.m"
  }
#line 1132 "rtti_to_mlds.m"
}

#line 1125 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
#line 1125 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1125 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1125 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PtagMap_8,
#line 1125 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21,
#line 1125 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22)
#line 1125 "rtti_to_mlds.m"
{
#line 1129 "rtti_to_mlds.m"
  {
#line 1129 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_10;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagList_11;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagInitPrefix_12;
#line 1129 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__FirstPtag_13;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagInitializers_18;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_64;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_71;
#line 1129 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_72_72;
#line 1132 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24;

#line 1130 "rtti_to_mlds.m"
    {
#line 1130 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_10);
    }
#line 1131 "rtti_to_mlds.m"
    {
#line 1131 "rtti_to_mlds.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, ml_backend__rtti_to_mlds__PtagMap_8, &ml_backend__rtti_to_mlds__PtagList_11);
    }
#line 1132 "rtti_to_mlds.m"
    {
#line 1132 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[6]));
#line 1132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1));
#line 1132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_10));
#line 1132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1132 "rtti_to_mlds.m"
    }
#line 1132 "rtti_to_mlds.m"
    {
#line 1132 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0((MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[1], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_23_23, ml_backend__rtti_to_mlds__PtagList_11, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24);
    }
#line 1132 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24);
#line 1138 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__PtagList_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1135 "rtti_to_mlds.m"
      {
#line 1136 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1137 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FirstPtag_13 = (MR_Integer) 0;
#line 1135 "rtti_to_mlds.m"
      }
#line 1138 "rtti_to_mlds.m"
    else
#line 1139 "rtti_to_mlds.m"
      {
#line 1139 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagList_11, (MR_Integer) 0)));
#line 1139 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagList_11, (MR_Integer) 1)));
#line 1139 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1139 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FirstPtag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, (MR_Integer) 0)));
#line 1139 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, (MR_Integer) 1)));
#line 1140 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__FirstPtag_13 == (MR_Integer) 0);
#line 1143 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1141 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1143 "rtti_to_mlds.m"
        else
#line 1157 "rtti_to_mlds.m"
          {
#line 1143 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__FirstPtag_13 == (MR_Integer) 1);
#line 1157 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1145 "rtti_to_mlds.m"
              {
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__RttiElemId_17;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1145 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_40_40;

#line 1146 "rtti_to_mlds.m"
                {
#line 1146 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__RttiElemId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiElemId_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1146 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiElemId_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[12])));
#line 1146 "rtti_to_mlds.m"
                }
#line 1148 "rtti_to_mlds.m"
                {
#line 1148 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiElemId_17));
#line 1148 "rtti_to_mlds.m"
                }
#line 1148 "rtti_to_mlds.m"
                {
#line 1148 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1148 "rtti_to_mlds.m"
                }
#line 1149 "rtti_to_mlds.m"
                {
#line 1149 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
                }
#line 1150 "rtti_to_mlds.m"
                {
#line 1150 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_builtin_const_1_f_0((MR_String) "MR_SECTAG_VARIABLE");
                }
#line 1153 "rtti_to_mlds.m"
                {
#line 1153 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1153 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1153 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[13])));
#line 1153 "rtti_to_mlds.m"
                }
#line 1152 "rtti_to_mlds.m"
                {
#line 1152 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1152 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_40_40));
#line 1152 "rtti_to_mlds.m"
                }
#line 1152 "rtti_to_mlds.m"
                {
#line 1152 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1152 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1152 "rtti_to_mlds.m"
                }
#line 1151 "rtti_to_mlds.m"
                {
#line 1151 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_37_37 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_38_38);
                }
#line 1154 "rtti_to_mlds.m"
                {
#line 1154 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1154 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1154 "rtti_to_mlds.m"
                }
#line 1150 "rtti_to_mlds.m"
                {
#line 1150 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1150 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1150 "rtti_to_mlds.m"
                }
#line 1149 "rtti_to_mlds.m"
                {
#line 1149 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1149 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1149 "rtti_to_mlds.m"
                }
#line 1148 "rtti_to_mlds.m"
                {
#line 1148 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1148 "rtti_to_mlds.m"
                }
#line 1155 "rtti_to_mlds.m"
                {
#line 1155 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1155 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagInitPrefix_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1155 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagInitPrefix_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1155 "rtti_to_mlds.m"
                }
#line 1145 "rtti_to_mlds.m"
              }
#line 1157 "rtti_to_mlds.m"
            else
#line 1158 "rtti_to_mlds.m"
              {
#line 1158 "rtti_to_mlds.m"
                {
#line 1158 "rtti_to_mlds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table\'/5", (MR_String) "bad ptag list");
#line 1158 "rtti_to_mlds.m"
                  return;
                }
#line 1158 "rtti_to_mlds.m"
              }
#line 1157 "rtti_to_mlds.m"
          }
#line 1139 "rtti_to_mlds.m"
      }
#line 1161 "rtti_to_mlds.m"
    {
#line 1161 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__PtagInitializers_18 = ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(ml_backend__rtti_to_mlds__ModuleName_10, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__PtagList_11, ml_backend__rtti_to_mlds__FirstPtag_13);
    }
#line 1164 "rtti_to_mlds.m"
    {
#line 1164 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__rtti_to_mlds__PtagInitPrefix_12, ml_backend__rtti_to_mlds__PtagInitializers_18);
    }
#line 1164 "rtti_to_mlds.m"
    {
#line 1164 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 1164 "rtti_to_mlds.m"
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_72_72, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_64));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_72_72));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_71, ml_backend__rtti_to_mlds__RttiId_64, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1129 "rtti_to_mlds.m"
  }
#line 1125 "rtti_to_mlds.m"
}

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1342 "rtti_to_mlds.m"
{
#line 1342 "rtti_to_mlds.m"
  {
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1342 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1342 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
  }
#line 1342 "rtti_to_mlds.m"
}

#line 1118 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
#line 1118 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1118 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1118 "rtti_to_mlds.m"
{
#line 1118 "rtti_to_mlds.m"
  {
#line 1118 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1118 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1118 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1118 "rtti_to_mlds.m"
    {
#line 1118 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1118 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1118 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1118 "rtti_to_mlds.m"
  }
#line 1118 "rtti_to_mlds.m"
}

#line 1110 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
#line 1110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_8,
#line 1110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1110 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1110 "rtti_to_mlds.m"
{
#line 1115 "rtti_to_mlds.m"
  {
#line 1115 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1115 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1116 "rtti_to_mlds.m"
    {
#line 1116 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__ForeignEnumByName_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1117 "rtti_to_mlds.m"
    {
#line 1117 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1118 "rtti_to_mlds.m"
    {
#line 1118 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[25], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1342 "rtti_to_mlds.m"
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1115 "rtti_to_mlds.m"
  }
#line 1110 "rtti_to_mlds.m"
}

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1342 "rtti_to_mlds.m"
{
#line 1342 "rtti_to_mlds.m"
  {
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1342 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1342 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
  }
#line 1342 "rtti_to_mlds.m"
}

#line 1103 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
#line 1103 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1103 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1103 "rtti_to_mlds.m"
{
#line 1103 "rtti_to_mlds.m"
  {
#line 1103 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1103 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1103 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1103 "rtti_to_mlds.m"
    {
#line 1103 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1103 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1103 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1103 "rtti_to_mlds.m"
  }
#line 1103 "rtti_to_mlds.m"
}

#line 1095 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
#line 1095 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1095 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1095 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8,
#line 1095 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1095 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1095 "rtti_to_mlds.m"
{
#line 1100 "rtti_to_mlds.m"
  {
#line 1100 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1100 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1101 "rtti_to_mlds.m"
    {
#line 1101 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1102 "rtti_to_mlds.m"
    {
#line 1102 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1103 "rtti_to_mlds.m"
    {
#line 1103 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[24], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1342 "rtti_to_mlds.m"
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1100 "rtti_to_mlds.m"
  }
#line 1095 "rtti_to_mlds.m"
}

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1342 "rtti_to_mlds.m"
{
#line 1342 "rtti_to_mlds.m"
  {
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1342 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1342 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
  }
#line 1342 "rtti_to_mlds.m"
}

#line 1088 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
#line 1088 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1088 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1088 "rtti_to_mlds.m"
{
#line 1088 "rtti_to_mlds.m"
  {
#line 1088 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1088 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1088 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1088 "rtti_to_mlds.m"
    {
#line 1088 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1088 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1088 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1088 "rtti_to_mlds.m"
  }
#line 1088 "rtti_to_mlds.m"
}

#line 1080 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
#line 1080 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1080 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1080 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByName_8,
#line 1080 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1080 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1080 "rtti_to_mlds.m"
{
#line 1085 "rtti_to_mlds.m"
  {
#line 1085 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1085 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1086 "rtti_to_mlds.m"
    {
#line 1086 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__EnumByName_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1087 "rtti_to_mlds.m"
    {
#line 1087 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1088 "rtti_to_mlds.m"
    {
#line 1088 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[23], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1342 "rtti_to_mlds.m"
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1085 "rtti_to_mlds.m"
  }
#line 1080 "rtti_to_mlds.m"
}

#line 1342 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2(
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1342 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1342 "rtti_to_mlds.m"
{
#line 1342 "rtti_to_mlds.m"
  {
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1342 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1342 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1342 "rtti_to_mlds.m"
  }
#line 1342 "rtti_to_mlds.m"
}

#line 1073 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1(
#line 1073 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1073 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1073 "rtti_to_mlds.m"
{
#line 1073 "rtti_to_mlds.m"
  {
#line 1073 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1073 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1073 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1073 "rtti_to_mlds.m"
    {
#line 1073 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1073 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1073 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1073 "rtti_to_mlds.m"
  }
#line 1073 "rtti_to_mlds.m"
}

#line 1065 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(
#line 1065 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1065 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1065 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByValue_8,
#line 1065 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1065 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1065 "rtti_to_mlds.m"
{
#line 1070 "rtti_to_mlds.m"
  {
#line 1070 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1070 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1071 "rtti_to_mlds.m"
    {
#line 1071 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__EnumByValue_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1072 "rtti_to_mlds.m"
    {
#line 1072 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1073 "rtti_to_mlds.m"
    {
#line 1073 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[22], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1342 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1342 "rtti_to_mlds.m"
    }
#line 1342 "rtti_to_mlds.m"
    {
#line 1342 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 1070 "rtti_to_mlds.m"
  }
#line 1065 "rtti_to_mlds.m"
}

#line 1027 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(
#line 1027 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 1027 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfo_7,
#line 1027 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__ArgLocnInitializer_8,
#line 1027 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__PrevOffset_9,
#line 1027 "rtti_to_mlds.m"
  MR_Integer * ml_backend__rtti_to_mlds__NextPrevOffset_10)
#line 1027 "rtti_to_mlds.m"
{
#line 1031 "rtti_to_mlds.m"
  {
#line 1031 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgWidth_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 2)));
#line 1031 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1031 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Shift_13;
#line 1031 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Bits_14;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1032 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 0)));
#line 1032 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 1)));

#line 1039 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__ArgWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1040 "rtti_to_mlds.m"
      {
#line 1041 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1042 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1043 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Bits_14 = (MR_Integer) -1;
#line 1044 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__NextPrevOffset_10 = (ml_backend__rtti_to_mlds__FieldOffset_12 + (MR_Integer) 1);
#line 1040 "rtti_to_mlds.m"
      }
#line 1039 "rtti_to_mlds.m"
    else
#line 1039 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__ArgWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "rtti_to_mlds.m"
      {
#line 1035 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1036 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1037 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Bits_14 = (MR_Integer) 0;
#line 1038 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1034 "rtti_to_mlds.m"
      }
#line 1039 "rtti_to_mlds.m"
    else
#line 1039 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__ArgWidth_11)) == (MR_mktag((MR_Integer) 1))))
#line 1046 "rtti_to_mlds.m"
      {
#line 1046 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Mask_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 0)));
#line 1046 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_19_19;

#line 1047 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1048 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1049 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_19_19 = (ml_backend__rtti_to_mlds__Mask_15 + (MR_Integer) 1);
#line 1049 "rtti_to_mlds.m"
        {
#line 1049 "rtti_to_mlds.m"
          mercury__int__log2_2_p_0(ml_backend__rtti_to_mlds__V_19_19, &ml_backend__rtti_to_mlds__Bits_14);
        }
#line 1050 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1046 "rtti_to_mlds.m"
      }
#line 1039 "rtti_to_mlds.m"
    else
#line 1052 "rtti_to_mlds.m"
      {
#line 1052 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_16_16;
#line 1052 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Mask_33;

#line 1052 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Shift_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 0)));
#line 1052 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Mask_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 1)));
#line 1053 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FieldOffset_12 = ml_backend__rtti_to_mlds__PrevOffset_9;
#line 1054 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_16_16 = (ml_backend__rtti_to_mlds__Mask_33 + (MR_Integer) 1);
#line 1054 "rtti_to_mlds.m"
        {
#line 1054 "rtti_to_mlds.m"
          mercury__int__log2_2_p_0(ml_backend__rtti_to_mlds__V_16_16, &ml_backend__rtti_to_mlds__Bits_14);
        }
#line 1055 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1052 "rtti_to_mlds.m"
      }
#line 1057 "rtti_to_mlds.m"
    {
#line 1057 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_6));
#line 1057 "rtti_to_mlds.m"
    }
#line 1057 "rtti_to_mlds.m"
    {
#line 1057 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 1057 "rtti_to_mlds.m"
    }
#line 1058 "rtti_to_mlds.m"
    {
#line 1058 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__FieldOffset_12);
    }
#line 1059 "rtti_to_mlds.m"
    {
#line 1059 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_29_29 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Shift_13);
    }
#line 1060 "rtti_to_mlds.m"
    {
#line 1060 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Bits_14);
    }
#line 1061 "rtti_to_mlds.m"
    {
#line 1061 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1061 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1061 "rtti_to_mlds.m"
    }
#line 1059 "rtti_to_mlds.m"
    {
#line 1059 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1059 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1059 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1059 "rtti_to_mlds.m"
    }
#line 1058 "rtti_to_mlds.m"
    {
#line 1058 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1058 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1058 "rtti_to_mlds.m"
    }
#line 1057 "rtti_to_mlds.m"
    {
#line 1057 "rtti_to_mlds.m"
      MR_Word base;
#line 1057 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__ArgLocnInitializer_8 = base;
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 1057 "rtti_to_mlds.m"
    }
#line 1031 "rtti_to_mlds.m"
  }
#line 1027 "rtti_to_mlds.m"
}

#line 981 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0_1(
#line 981 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 981 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 981 "rtti_to_mlds.m"
{
#line 981 "rtti_to_mlds.m"
  {
#line 981 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 981 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 981 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 981 "rtti_to_mlds.m"
    {
#line 981 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 981 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 981 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 981 "rtti_to_mlds.m"
  }
#line 981 "rtti_to_mlds.m"
}

#line 976 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0(
#line 976 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 976 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 976 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 976 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_10,
#line 976 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 976 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 976 "rtti_to_mlds.m"
{
#line 980 "rtti_to_mlds.m"
  {
#line 980 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 980 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_12;
#line 980 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 980 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_14;
#line 980 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18;
#line 980 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_30;
#line 980 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_37;
#line 980 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;

#line 981 "rtti_to_mlds.m"
    {
#line 981 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_12 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[21], ml_backend__rtti_to_mlds__Types_10);
    }
#line 983 "rtti_to_mlds.m"
    {
#line 983 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__TypeRttiDatas_12, &ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18);
    }
#line 985 "rtti_to_mlds.m"
    {
#line 985 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 985 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 985 "rtti_to_mlds.m"
    }
#line 101 "rtti_to_mlds.m"
    {
#line 101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 101 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_14));
#line 101 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_30));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_37, ml_backend__rtti_to_mlds__RttiId_30, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 980 "rtti_to_mlds.m"
  }
#line 976 "rtti_to_mlds.m"
}

#line 960 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3(
#line 960 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 960 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 960 "rtti_to_mlds.m"
{
#line 960 "rtti_to_mlds.m"
  {
#line 960 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 960 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 960 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_Initializer_8;

#line 960 "rtti_to_mlds.m"
    {
#line 960 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 960 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_Initializer_8));
#line 960 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 960 "rtti_to_mlds.m"
  }
#line 960 "rtti_to_mlds.m"
}

#line 952 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2(
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 952 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 952 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 952 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 952 "rtti_to_mlds.m"
{
#line 952 "rtti_to_mlds.m"
  {
#line 952 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 952 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_RttiId_12;
#line 952 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25;
#line 952 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27;

#line 952 "rtti_to_mlds.m"
    {
#line 952 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv3_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27);
    }
#line 952 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_RttiId_12));
#line 952 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25));
#line 952 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27));
#line 952 "rtti_to_mlds.m"
  }
#line 952 "rtti_to_mlds.m"
}

#line 953 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1(
#line 953 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 953 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 953 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 953 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 953 "rtti_to_mlds.m"
{
#line 953 "rtti_to_mlds.m"
  {
#line 953 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 953 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_RttiId_10;

#line 953 "rtti_to_mlds.m"
    {
#line 953 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_RttiId_10);
    }
#line 953 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_RttiId_10));
#line 953 "rtti_to_mlds.m"
  }
#line 953 "rtti_to_mlds.m"
}

#line 933 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(
#line 933 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 933 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 933 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 933 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistInfo_10,
#line 933 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30,
#line 933 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31)
#line 933 "rtti_to_mlds.m"
{
#line 936 "rtti_to_mlds.m"
  {
#line 936 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_60_60;
#line 936 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Plain_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 0)));
#line 936 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__InTci_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 1)));
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 2)));
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Locns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 3)));
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_16;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_17;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_18;
#line 936 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Tci_19;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ConstrInitializer_20;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_29;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 936 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_57_57;

#line 938 "rtti_to_mlds.m"
    {
#line 938 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_16);
    }
#line 939 "rtti_to_mlds.m"
    {
#line 939 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 939 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 939 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 939 "rtti_to_mlds.m"
    }
#line 940 "rtti_to_mlds.m"
    {
#line 940 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 940 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 940 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_17));
#line 940 "rtti_to_mlds.m"
    }
#line 11063 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_60_60 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0;
#line 941 "rtti_to_mlds.m"
    {
#line 941 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_60_60, ml_backend__rtti_to_mlds__Constraints_14, &ml_backend__rtti_to_mlds__Tci_19);
    }
#line 947 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 943 "rtti_to_mlds.m"
      {
#line 943 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 943 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 943 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 943 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_44_44;

#line 946 "rtti_to_mlds.m"
        {
#line 946 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 946 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 946 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 946 "rtti_to_mlds.m"
        }
#line 945 "rtti_to_mlds.m"
        {
#line 945 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 945 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 945 "rtti_to_mlds.m"
        }
#line 945 "rtti_to_mlds.m"
        {
#line 945 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 945 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_42_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 945 "rtti_to_mlds.m"
        }
#line 945 "rtti_to_mlds.m"
        {
#line 945 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 945 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 945 "rtti_to_mlds.m"
        }
#line 944 "rtti_to_mlds.m"
        {
#line 944 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ConstrInitializer_20 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_41_41);
        }
#line 943 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30;
#line 943 "rtti_to_mlds.m"
      }
#line 947 "rtti_to_mlds.m"
    else
#line 948 "rtti_to_mlds.m"
      {
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_70_70;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrIds_23;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ElementType_27;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_81;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_88;
#line 948 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 951 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 951 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv5_V_24_24;
#line 951 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35;

#line 950 "rtti_to_mlds.m"
        {
#line 950 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 950 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 950 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 950 "rtti_to_mlds.m"
        }
#line 949 "rtti_to_mlds.m"
        {
#line 949 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ConstrInitializer_20 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25);
        }
#line 953 "rtti_to_mlds.m"
        {
#line 953 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 953 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[5]));
#line 953 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1));
#line 953 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 953 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 953 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 953 "rtti_to_mlds.m"
        }
#line 952 "rtti_to_mlds.m"
        {
#line 952 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2));
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 952 "rtti_to_mlds.m"
        }
#line 954 "rtti_to_mlds.m"
        {
#line 954 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 11221 "ml_backend.rtti_to_mlds.c"
        ml_backend__rtti_to_mlds__TypeCtorInfo_70_70 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 951 "rtti_to_mlds.m"
        {
#line 951 "rtti_to_mlds.m"
          mercury__list__map_foldl2_7_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_60_60, ml_backend__rtti_to_mlds__TypeCtorInfo_70_70, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_33_33, ml_backend__rtti_to_mlds__Constraints_14, &ml_backend__rtti_to_mlds__TCConstrIds_23, ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34)), &ml_backend__rtti_to_mlds__conv5_V_24_24, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35);
        }
#line 951 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_V_24_24);
#line 951 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35);
#line 956 "rtti_to_mlds.m"
        {
#line 956 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 956 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 956 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_81, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25));
#line 956 "rtti_to_mlds.m"
        }
#line 958 "rtti_to_mlds.m"
        {
#line 958 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 958 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_81));
#line 958 "rtti_to_mlds.m"
        }
#line 958 "rtti_to_mlds.m"
        {
#line 958 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ElementType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 958 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 958 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 958 "rtti_to_mlds.m"
        }
#line 960 "rtti_to_mlds.m"
        {
#line 960 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 960 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 960 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3));
#line 960 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 960 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_27));
#line 960 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_16));
#line 960 "rtti_to_mlds.m"
        }
#line 959 "rtti_to_mlds.m"
        {
#line 959 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_70_70, ml_backend__rtti_to_mlds__V_39_39, ml_backend__rtti_to_mlds__TCConstrIds_23);
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_89_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_81));
#line 108 "rtti_to_mlds.m"
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 108 "rtti_to_mlds.m"
        }
#line 109 "rtti_to_mlds.m"
        {
#line 109 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_88, ml_backend__rtti_to_mlds__RttiId_81, ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40);
        }
#line 948 "rtti_to_mlds.m"
      }
#line 964 "rtti_to_mlds.m"
    {
#line 964 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__Ordinal_9, ml_backend__rtti_to_mlds__Locns_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45);
    }
#line 966 "rtti_to_mlds.m"
    {
#line 966 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_18));
#line 966 "rtti_to_mlds.m"
    }
#line 966 "rtti_to_mlds.m"
    {
#line 966 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 966 "rtti_to_mlds.m"
    }
#line 967 "rtti_to_mlds.m"
    {
#line 967 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Plain_12);
    }
#line 968 "rtti_to_mlds.m"
    {
#line 968 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_51_51 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__InTci_13);
    }
#line 969 "rtti_to_mlds.m"
    {
#line 969 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_53_53 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Tci_19);
    }
#line 971 "rtti_to_mlds.m"
    {
#line 971 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 971 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 971 "rtti_to_mlds.m"
    }
#line 970 "rtti_to_mlds.m"
    {
#line 970 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_55_55 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__V_56_56);
    }
#line 973 "rtti_to_mlds.m"
    {
#line 973 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 973 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ConstrInitializer_20));
#line 973 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "rtti_to_mlds.m"
    }
#line 971 "rtti_to_mlds.m"
    {
#line 971 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 971 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_54_54, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 971 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_54_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_57_57));
#line 971 "rtti_to_mlds.m"
    }
#line 969 "rtti_to_mlds.m"
    {
#line 969 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_52_52, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 969 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_52_52, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 969 "rtti_to_mlds.m"
    }
#line 968 "rtti_to_mlds.m"
    {
#line 968 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 968 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 968 "rtti_to_mlds.m"
    }
#line 967 "rtti_to_mlds.m"
    {
#line 967 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 967 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 967 "rtti_to_mlds.m"
    }
#line 966 "rtti_to_mlds.m"
    {
#line 966 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 966 "rtti_to_mlds.m"
    }
#line 974 "rtti_to_mlds.m"
    {
#line 974 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__RttiId_18, ml_backend__rtti_to_mlds__Initializer_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31);
#line 974 "rtti_to_mlds.m"
      return;
    }
#line 936 "rtti_to_mlds.m"
  }
#line 933 "rtti_to_mlds.m"
}

#line 926 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
#line 926 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 926 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_7,
#line 926 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 926 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 926 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10)
#line 926 "rtti_to_mlds.m"
{
#line 929 "rtti_to_mlds.m"
  {
#line 929 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 929 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_11;

#line 930 "rtti_to_mlds.m"
    {
#line 930 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 930 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_7));
#line 930 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_8));
#line 930 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_9));
#line 930 "rtti_to_mlds.m"
    }
#line 931 "rtti_to_mlds.m"
    {
#line 931 "rtti_to_mlds.m"
      MR_Word base;
#line 931 "rtti_to_mlds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 931 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_10 = base;
#line 931 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_6));
#line 931 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_11));
#line 931 "rtti_to_mlds.m"
    }
#line 929 "rtti_to_mlds.m"
  }
#line 926 "rtti_to_mlds.m"
}

#line 917 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0_1(
#line 917 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 917 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 917 "rtti_to_mlds.m"
{
#line 917 "rtti_to_mlds.m"
  {
#line 917 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 917 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 917 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__2_2;

#line 917 "rtti_to_mlds.m"
    {
#line 917 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 917 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__2_2));
#line 917 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 917 "rtti_to_mlds.m"
  }
#line 917 "rtti_to_mlds.m"
}

#line 904 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MakeRttiId_10,
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Constraint_11,
#line 904 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_12,
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24,
#line 904 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25,
#line 904 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26,
#line 904 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27)
#line 904 "rtti_to_mlds.m"
{
#line 910 "rtti_to_mlds.m"
  {
#line 910 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_38_38 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Constraint_11, (MR_Integer) 0)));
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Constraint_11, (MR_Integer) 1)));
#line 910 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Arity_17;
#line 910 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__TCNum_18;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_21;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PTIInitializers_22;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_23;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_47;
#line 910 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 914 "rtti_to_mlds.m"
    void MR_CALL (* ml_backend__rtti_to_mlds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 914 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_RttiId_12;
#line 916 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_20;

#line 912 "rtti_to_mlds.m"
    {
#line 912 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_38_38, ml_backend__rtti_to_mlds__Types_16, &ml_backend__rtti_to_mlds__Arity_17);
    }
#line 913 "rtti_to_mlds.m"
    {
#line 913 "rtti_to_mlds.m"
      mercury__counter__allocate_3_p_0(&ml_backend__rtti_to_mlds__TCNum_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25);
    }
#line 914 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MakeRttiId_10, (MR_Integer) 1)));
#line 914 "rtti_to_mlds.m"
    {
#line 914 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__func_0(((MR_Box) ml_backend__rtti_to_mlds__MakeRttiId_10), ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_18)), ((MR_Box) (ml_backend__rtti_to_mlds__Arity_17)), &ml_backend__rtti_to_mlds__conv1_RttiId_12);
    }
#line 914 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__RttiId_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_RttiId_12);
#line 916 "rtti_to_mlds.m"
    {
#line 916 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, &ml_backend__rtti_to_mlds__ModuleName_20);
    }
#line 917 "rtti_to_mlds.m"
    {
#line 917 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_21 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_38_38, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[20], ml_backend__rtti_to_mlds__Types_16);
    }
#line 918 "rtti_to_mlds.m"
    {
#line 918 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__TypeRttiDatas_21, &ml_backend__rtti_to_mlds__PTIInitializers_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30);
    }
#line 920 "rtti_to_mlds.m"
    {
#line 920 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 920 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (*ml_backend__rtti_to_mlds__RttiId_12));
#line 920 "rtti_to_mlds.m"
    }
#line 920 "rtti_to_mlds.m"
    {
#line 920 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 920 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 920 "rtti_to_mlds.m"
    }
#line 921 "rtti_to_mlds.m"
    {
#line 921 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_34_34 = ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(ml_backend__rtti_to_mlds__TCName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 923 "rtti_to_mlds.m"
    {
#line 923 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PTIInitializers_22));
#line 923 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "rtti_to_mlds.m"
    }
#line 921 "rtti_to_mlds.m"
    {
#line 921 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 921 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 921 "rtti_to_mlds.m"
    }
#line 920 "rtti_to_mlds.m"
    {
#line 920 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 920 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 920 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (*ml_backend__rtti_to_mlds__RttiId_12));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_47, *ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_23, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 910 "rtti_to_mlds.m"
  }
#line 904 "rtti_to_mlds.m"
}

#line 877 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
#line 877 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_4,
#line 877 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5)
#line 877 "rtti_to_mlds.m"
{
#line 880 "rtti_to_mlds.m"
  {
#line 880 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 880 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
#line 880 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__SlotInCell_7;
#line 880 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__SlotInTci_8;
#line 880 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_9;
#line 880 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 880 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 880 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 880 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 880 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 880 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;

#line 883 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5)) == (MR_mktag((MR_Integer) 0))))
#line 884 "rtti_to_mlds.m"
      {
#line 884 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInCell_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 0)));
#line 885 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInTci_8 = (MR_Integer) -1;
#line 884 "rtti_to_mlds.m"
      }
#line 883 "rtti_to_mlds.m"
    else
#line 882 "rtti_to_mlds.m"
      {
#line 882 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInCell_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 0)));
#line 882 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInTci_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 1)));
#line 882 "rtti_to_mlds.m"
      }
#line 887 "rtti_to_mlds.m"
    {
#line 887 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_4));
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "rtti_to_mlds.m"
    }
#line 888 "rtti_to_mlds.m"
    {
#line 888 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 888 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_9));
#line 888 "rtti_to_mlds.m"
    }
#line 888 "rtti_to_mlds.m"
    {
#line 888 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 888 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 888 "rtti_to_mlds.m"
    }
#line 889 "rtti_to_mlds.m"
    {
#line 889 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__SlotInCell_7);
    }
#line 890 "rtti_to_mlds.m"
    {
#line 890 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__SlotInTci_8);
    }
#line 891 "rtti_to_mlds.m"
    {
#line 891 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 891 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 891 "rtti_to_mlds.m"
    }
#line 889 "rtti_to_mlds.m"
    {
#line 889 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_14_14));
#line 889 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 889 "rtti_to_mlds.m"
    }
#line 888 "rtti_to_mlds.m"
    {
#line 888 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 888 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 888 "rtti_to_mlds.m"
    }
#line 880 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_6;
#line 880 "rtti_to_mlds.m"
  }
#line 877 "rtti_to_mlds.m"
}

#line 860 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(
#line 860 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 860 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 860 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_8,
#line 860 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 860 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 860 "rtti_to_mlds.m"
{
#line 867 "rtti_to_mlds.m"
  {
#line 867 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 867 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8)) == (MR_mktag((MR_Integer) 1))))
#line 871 "rtti_to_mlds.m"
      {
#line 871 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuFunctor_11 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8), (MR_Integer) 1);

#line 872 "rtti_to_mlds.m"
        {
#line 872 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__DuFunctor_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
#line 872 "rtti_to_mlds.m"
          return;
        }
#line 871 "rtti_to_mlds.m"
      }
#line 867 "rtti_to_mlds.m"
    else
#line 867 "rtti_to_mlds.m"
      {
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ResFunctor_10 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8), (MR_Integer) 0);
#line 867 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__FunctorName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 0)));
#line 867 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Ordinal_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 1)));
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ReservedAddress_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 2)));
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_25;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_26;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_27;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_43;
#line 867 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_44_44;

#line 851 "rtti_to_mlds.m"
        {
#line 851 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_23));
#line 851 "rtti_to_mlds.m"
        }
#line 852 "rtti_to_mlds.m"
        {
#line 852 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_25));
#line 852 "rtti_to_mlds.m"
        }
#line 853 "rtti_to_mlds.m"
        {
#line 853 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_26));
#line 853 "rtti_to_mlds.m"
        }
#line 853 "rtti_to_mlds.m"
        {
#line 853 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 853 "rtti_to_mlds.m"
        }
#line 854 "rtti_to_mlds.m"
        {
#line 854 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_22);
        }
#line 855 "rtti_to_mlds.m"
        {
#line 855 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_23);
        }
#line 856 "rtti_to_mlds.m"
        {
#line 856 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_35_35 = ml_backend__ml_util__gen_init_reserved_address_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__ReservedAddress_24);
        }
#line 857 "rtti_to_mlds.m"
        {
#line 857 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 857 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_34_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 857 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "rtti_to_mlds.m"
        }
#line 855 "rtti_to_mlds.m"
        {
#line 855 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 855 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_32_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 855 "rtti_to_mlds.m"
        }
#line 854 "rtti_to_mlds.m"
        {
#line 854 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 854 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 854 "rtti_to_mlds.m"
        }
#line 853 "rtti_to_mlds.m"
        {
#line 853 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 853 "rtti_to_mlds.m"
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_26));
#line 108 "rtti_to_mlds.m"
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 108 "rtti_to_mlds.m"
        }
#line 109 "rtti_to_mlds.m"
        {
#line 109 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_43, ml_backend__rtti_to_mlds__RttiId_26, ml_backend__rtti_to_mlds__Initializer_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
#line 109 "rtti_to_mlds.m"
          return;
        }
#line 867 "rtti_to_mlds.m"
      }
#line 867 "rtti_to_mlds.m"
  }
#line 860 "rtti_to_mlds.m"
}

#line 756 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_2(
#line 756 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 756 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 756 "rtti_to_mlds.m"
{
#line 756 "rtti_to_mlds.m"
  {
#line 756 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 756 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 756 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 756 "rtti_to_mlds.m"
    {
#line 756 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 756 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 756 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 756 "rtti_to_mlds.m"
  }
#line 756 "rtti_to_mlds.m"
}

#line 755 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_1(
#line 755 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 755 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 755 "rtti_to_mlds.m"
{
#line 755 "rtti_to_mlds.m"
  {
#line 755 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 755 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 755 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 755 "rtti_to_mlds.m"
    {
#line 755 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 755 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 755 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 755 "rtti_to_mlds.m"
  }
#line 755 "rtti_to_mlds.m"
}

#line 757 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(
#line 757 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 757 "rtti_to_mlds.m"
{
#line 757 "rtti_to_mlds.m"
  {
#line 757 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 757 "rtti_to_mlds.m"
    MR_builtin_longjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0, 1);
#line 757 "rtti_to_mlds.m"
  }
#line 757 "rtti_to_mlds.m"
}

#line 757 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5(
#line 757 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 757 "rtti_to_mlds.m"
{
#line 757 "rtti_to_mlds.m"
  {
#line 757 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 757 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103 = ((MR_Word) (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103);
#line 757 "rtti_to_mlds.m"
    {
#line 757 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(ml_backend__rtti_to_mlds__env_ptr);
#line 757 "rtti_to_mlds.m"
      return;
    }
#line 757 "rtti_to_mlds.m"
  }
#line 757 "rtti_to_mlds.m"
}

#line 757 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(
#line 757 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 757 "rtti_to_mlds.m"
{
#line 757 "rtti_to_mlds.m"
  {
#line 757 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 12145 "ml_backend.rtti_to_mlds.c"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 757 "rtti_to_mlds.m"
    {
#line 757 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103);
    }
#line 757 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded)
#line 757 "rtti_to_mlds.m"
      {
#line 757 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(ml_backend__rtti_to_mlds__env_ptr);
#line 757 "rtti_to_mlds.m"
        return;
      }
#line 757 "rtti_to_mlds.m"
  }
#line 757 "rtti_to_mlds.m"
}

#line 757 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(
#line 757 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 757 "rtti_to_mlds.m"
{
#line 757 "rtti_to_mlds.m"
  {
#line 757 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 757 "rtti_to_mlds.m"
    if (MR_builtin_setjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0) == 0)
#line 757 "rtti_to_mlds.m"
      {
#line 757 "rtti_to_mlds.m"
        {
#line 757 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds__V_19_19;

#line 757 "rtti_to_mlds.m"
          {
#line 757 "rtti_to_mlds.m"
            MR_Word base;
#line 757 "rtti_to_mlds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 757 "rtti_to_mlds.m"
            (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42 = base;
#line 757 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 757 "rtti_to_mlds.m"
          }
#line 757 "rtti_to_mlds.m"
          {
#line 757 "rtti_to_mlds.m"
            mercury__list__member_2_p_1((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100, &(ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17, ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5, ml_backend__rtti_to_mlds__env_ptr);
          }
#line 757 "rtti_to_mlds.m"
        }
#line 757 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = MR_FALSE;
#line 757 "rtti_to_mlds.m"
      }
#line 757 "rtti_to_mlds.m"
    else
#line 757 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = MR_TRUE;
#line 757 "rtti_to_mlds.m"
  }
#line 757 "rtti_to_mlds.m"
}

#line 749 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(
#line 749 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 749 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 749 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuFunctor_8,
#line 749 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38,
#line 749 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39)
#line 749 "rtti_to_mlds.m"
{
#line 749 "rtti_to_mlds.m"
  {
#line 749 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s ml_backend__rtti_to_mlds__env;

#line 752 "rtti_to_mlds.m"
    {
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_96_96 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0;
#line 752 "rtti_to_mlds.m"
      MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 0)));
#line 752 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 1)));
#line 752 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Ordinal_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 2)));
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Rep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 3)));
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 4)));
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__MaybeExistInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 5)));
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgTypes_16;
#line 752 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__ContainsVarBitVector_20;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ModuleName_21;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgTypeInitializer_24;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgNameInitializer_25;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__HaveArgLocns_26;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgLocnsInitializer_27;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ExistInfoInitializer_29;
#line 752 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Ptag_30;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__SectagAndLocn_31;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Locn_33;
#line 752 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Stag_34;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__RttiName_35;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__RttiId_36;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Initializer_37;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_76_76;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_78_78;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_81_81;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_82_82;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_90_90;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_91_91;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_92_92;
#line 752 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_93_93;

#line 755 "rtti_to_mlds.m"
      {
#line 755 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ArgTypes_16 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_96_96, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[18], ml_backend__rtti_to_mlds__ArgInfos_14);
      }
#line 12339 "ml_backend.rtti_to_mlds.c"
      (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[4];
#line 756 "rtti_to_mlds.m"
      {
#line 756 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_96_96, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[19], ml_backend__rtti_to_mlds__ArgInfos_14);
      }
#line 758 "rtti_to_mlds.m"
      {
#line 758 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ContainsVarBitVector_20 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ml_backend__rtti_to_mlds__ArgTypes_16);
      }
#line 759 "rtti_to_mlds.m"
      {
#line 759 "rtti_to_mlds.m"
        hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_21);
      }
#line 766 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__ArgInfos_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "rtti_to_mlds.m"
        {
#line 767 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 767 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_44_44;
#line 767 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 770 "rtti_to_mlds.m"
          {
#line 770 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 770 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 770 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[8])));
#line 770 "rtti_to_mlds.m"
          }
#line 769 "rtti_to_mlds.m"
          {
#line 769 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 769 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 769 "rtti_to_mlds.m"
          }
#line 769 "rtti_to_mlds.m"
          {
#line 769 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 769 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 769 "rtti_to_mlds.m"
          }
#line 768 "rtti_to_mlds.m"
          {
#line 768 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgTypeInitializer_24 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_43_43);
          }
#line 767 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38;
#line 767 "rtti_to_mlds.m"
        }
#line 766 "rtti_to_mlds.m"
      else
#line 761 "rtti_to_mlds.m"
        {
#line 761 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_49_49;

#line 762 "rtti_to_mlds.m"
          {
#line 762 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_field_types_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ArgTypes_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48);
          }
#line 765 "rtti_to_mlds.m"
          {
#line 765 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 765 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 765 "rtti_to_mlds.m"
          }
#line 764 "rtti_to_mlds.m"
          {
#line 764 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgTypeInitializer_24 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_49_49);
          }
#line 761 "rtti_to_mlds.m"
        }
#line 757 "rtti_to_mlds.m"
      {
#line 757 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(&ml_backend__rtti_to_mlds__env);
      }
#line 12438 "ml_backend.rtti_to_mlds.c"
      if ((ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded)
#line 12440 "ml_backend.rtti_to_mlds.c"
        {
#line 12442 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_56_56;

#line 774 "rtti_to_mlds.m"
          {
#line 774 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55);
          }
#line 777 "rtti_to_mlds.m"
          {
#line 777 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 777 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 777 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_56_56, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 777 "rtti_to_mlds.m"
          }
#line 776 "rtti_to_mlds.m"
          {
#line 776 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgNameInitializer_25 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_56_56);
          }
#line 12465 "ml_backend.rtti_to_mlds.c"
        }
#line 12467 "ml_backend.rtti_to_mlds.c"
      else
#line 12469 "ml_backend.rtti_to_mlds.c"
        {
#line 12471 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 12473 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 12475 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_52_52;

#line 782 "rtti_to_mlds.m"
          {
#line 782 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 782 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_52_52, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 782 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[9])));
#line 782 "rtti_to_mlds.m"
          }
#line 781 "rtti_to_mlds.m"
          {
#line 781 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 781 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 781 "rtti_to_mlds.m"
          }
#line 781 "rtti_to_mlds.m"
          {
#line 781 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 781 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 781 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 781 "rtti_to_mlds.m"
          }
#line 780 "rtti_to_mlds.m"
          {
#line 780 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgNameInitializer_25 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_50_50);
          }
#line 779 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48;
#line 12513 "ml_backend.rtti_to_mlds.c"
        }
#line 784 "rtti_to_mlds.m"
      {
#line 784 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ArgInfos_14, &ml_backend__rtti_to_mlds__HaveArgLocns_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57);
      }
#line 790 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__HaveArgLocns_26 == (MR_Integer) 0))
#line 791 "rtti_to_mlds.m"
        {
#line 791 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 791 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 791 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_60_60;

#line 794 "rtti_to_mlds.m"
          {
#line 794 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 794 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 794 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[10])));
#line 794 "rtti_to_mlds.m"
          }
#line 793 "rtti_to_mlds.m"
          {
#line 793 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 793 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 793 "rtti_to_mlds.m"
          }
#line 793 "rtti_to_mlds.m"
          {
#line 793 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 793 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 793 "rtti_to_mlds.m"
          }
#line 792 "rtti_to_mlds.m"
          {
#line 792 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgLocnsInitializer_27 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_58_58);
          }
#line 791 "rtti_to_mlds.m"
        }
#line 790 "rtti_to_mlds.m"
      else
#line 787 "rtti_to_mlds.m"
        {
#line 787 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_63_63;

#line 789 "rtti_to_mlds.m"
          {
#line 789 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 789 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 789 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_63_63, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 789 "rtti_to_mlds.m"
          }
#line 788 "rtti_to_mlds.m"
          {
#line 788 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgLocnsInitializer_27 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_63_63);
          }
#line 787 "rtti_to_mlds.m"
        }
#line 802 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__MaybeExistInfo_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 803 "rtti_to_mlds.m"
        {
#line 803 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 803 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 803 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_66_66;

#line 806 "rtti_to_mlds.m"
          {
#line 806 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 806 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 806 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[11])));
#line 806 "rtti_to_mlds.m"
          }
#line 805 "rtti_to_mlds.m"
          {
#line 805 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 805 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 805 "rtti_to_mlds.m"
          }
#line 805 "rtti_to_mlds.m"
          {
#line 805 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 805 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 805 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 805 "rtti_to_mlds.m"
          }
#line 804 "rtti_to_mlds.m"
          {
#line 804 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ExistInfoInitializer_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_64_64);
          }
#line 803 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57;
#line 803 "rtti_to_mlds.m"
        }
#line 802 "rtti_to_mlds.m"
      else
#line 797 "rtti_to_mlds.m"
        {
#line 797 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ExistInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MaybeExistInfo_15, (MR_Integer) 0)));
#line 797 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_70_70;

#line 798 "rtti_to_mlds.m"
          {
#line 798 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ExistInfo_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69);
          }
#line 801 "rtti_to_mlds.m"
          {
#line 801 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_70_70, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 801 "rtti_to_mlds.m"
          }
#line 800 "rtti_to_mlds.m"
          {
#line 800 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ExistInfoInitializer_29 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_70_70);
          }
#line 797 "rtti_to_mlds.m"
        }
#line 810 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rep_13)) == (MR_mktag((MR_Integer) 1))))
#line 811 "rtti_to_mlds.m"
        {
#line 812 "rtti_to_mlds.m"
          {
#line 812 "rtti_to_mlds.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_functor_desc\'/5", (MR_String) "du_hl_rep");
#line 812 "rtti_to_mlds.m"
            return;
          }
#line 811 "rtti_to_mlds.m"
        }
#line 810 "rtti_to_mlds.m"
      else
#line 809 "rtti_to_mlds.m"
        {
#line 809 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Ptag_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Rep_13, (MR_Integer) 0)));
#line 809 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SectagAndLocn_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Rep_13, (MR_Integer) 1)));
#line 809 "rtti_to_mlds.m"
        }
#line 818 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__SectagAndLocn_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "rtti_to_mlds.m"
        {
#line 816 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 0;
#line 817 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Stag_34 = (MR_Integer) -1;
#line 815 "rtti_to_mlds.m"
        }
#line 818 "rtti_to_mlds.m"
      else
#line 818 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__SectagAndLocn_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 819 "rtti_to_mlds.m"
        {
#line 820 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 1;
#line 821 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Stag_34 = (MR_Integer) -1;
#line 819 "rtti_to_mlds.m"
        }
#line 818 "rtti_to_mlds.m"
      else
#line 818 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__SectagAndLocn_31)) == (MR_mktag((MR_Integer) 1))))
#line 823 "rtti_to_mlds.m"
        {
#line 823 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SectagAndLocn_31, (MR_Integer) 0)));
#line 824 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 2;
#line 823 "rtti_to_mlds.m"
        }
#line 818 "rtti_to_mlds.m"
      else
#line 826 "rtti_to_mlds.m"
        {
#line 826 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__SectagAndLocn_31, (MR_Integer) 0)));
#line 827 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 3;
#line 826 "rtti_to_mlds.m"
        }
#line 829 "rtti_to_mlds.m"
      {
#line 829 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 829 "rtti_to_mlds.m"
      }
#line 830 "rtti_to_mlds.m"
      {
#line 830 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiId_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_35));
#line 830 "rtti_to_mlds.m"
      }
#line 831 "rtti_to_mlds.m"
      {
#line 831 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_36));
#line 831 "rtti_to_mlds.m"
      }
#line 831 "rtti_to_mlds.m"
      {
#line 831 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_74_74, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_75_75));
#line 831 "rtti_to_mlds.m"
      }
#line 832 "rtti_to_mlds.m"
      {
#line 832 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_77_77 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
      }
#line 833 "rtti_to_mlds.m"
      {
#line 833 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_79_79 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Arity_11);
      }
#line 834 "rtti_to_mlds.m"
      {
#line 834 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_81_81 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__ContainsVarBitVector_20);
      }
#line 835 "rtti_to_mlds.m"
      {
#line 835 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_83_83 = ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(ml_backend__rtti_to_mlds__Locn_33);
      }
#line 836 "rtti_to_mlds.m"
      {
#line 836 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_85_85 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ptag_30);
      }
#line 837 "rtti_to_mlds.m"
      {
#line 837 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_87_87 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Stag_34);
      }
#line 838 "rtti_to_mlds.m"
      {
#line 838 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_89_89 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_12);
      }
#line 843 "rtti_to_mlds.m"
      {
#line 843 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_93_93, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ExistInfoInitializer_29));
#line 843 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "rtti_to_mlds.m"
      }
#line 841 "rtti_to_mlds.m"
      {
#line 841 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 841 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_92_92, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgLocnsInitializer_27));
#line 841 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_92_92, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_93_93));
#line 841 "rtti_to_mlds.m"
      }
#line 840 "rtti_to_mlds.m"
      {
#line 840 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgNameInitializer_25));
#line 840 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_92_92));
#line 840 "rtti_to_mlds.m"
      }
#line 839 "rtti_to_mlds.m"
      {
#line 839 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_90_90, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgTypeInitializer_24));
#line 839 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_90_90, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_91_91));
#line 839 "rtti_to_mlds.m"
      }
#line 838 "rtti_to_mlds.m"
      {
#line 838 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 838 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_90_90));
#line 838 "rtti_to_mlds.m"
      }
#line 837 "rtti_to_mlds.m"
      {
#line 837 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_86_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 837 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_86_86, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 837 "rtti_to_mlds.m"
      }
#line 836 "rtti_to_mlds.m"
      {
#line 836 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 836 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_84_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 836 "rtti_to_mlds.m"
      }
#line 835 "rtti_to_mlds.m"
      {
#line 835 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_82_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 835 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_82_82, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 835 "rtti_to_mlds.m"
      }
#line 834 "rtti_to_mlds.m"
      {
#line 834 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_81_81));
#line 834 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_80_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_82_82));
#line 834 "rtti_to_mlds.m"
      }
#line 833 "rtti_to_mlds.m"
      {
#line 833 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_78_78, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_79_79));
#line 833 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_78_78, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_80_80));
#line 833 "rtti_to_mlds.m"
      }
#line 832 "rtti_to_mlds.m"
      {
#line 832 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_76_76, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 832 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_76_76, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_78_78));
#line 832 "rtti_to_mlds.m"
      }
#line 831 "rtti_to_mlds.m"
      {
#line 831 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Initializer_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_76_76));
#line 831 "rtti_to_mlds.m"
      }
#line 844 "rtti_to_mlds.m"
      {
#line 844 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__RttiId_36, ml_backend__rtti_to_mlds__Initializer_37, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39);
#line 844 "rtti_to_mlds.m"
        return;
      }
#line 752 "rtti_to_mlds.m"
    }
#line 749 "rtti_to_mlds.m"
  }
#line 749 "rtti_to_mlds.m"
}

#line 745 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0_1(
#line 745 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 745 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 745 "rtti_to_mlds.m"
{
#line 745 "rtti_to_mlds.m"
  {
#line 745 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 745 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 745 "rtti_to_mlds.m"
    {
#line 745 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 745 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 745 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 745 "rtti_to_mlds.m"
  }
#line 745 "rtti_to_mlds.m"
}

#line 731 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(
#line 731 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 731 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 731 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NotagFunctorDesc_8,
#line 731 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 731 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 731 "rtti_to_mlds.m"
{
#line 735 "rtti_to_mlds.m"
  {
#line 735 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 735 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 0)));
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 1)));
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MaybeArgName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 2)));
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgTypeRttiData_13;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PTIInitializer_14;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_17;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_40;
#line 735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41;

#line 737 "rtti_to_mlds.m"
    {
#line 737 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ArgTypeRttiData_13 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ml_backend__rtti_to_mlds__ArgType_11);
    }
#line 738 "rtti_to_mlds.m"
    {
#line 738 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__ArgTypeRttiData_13, &ml_backend__rtti_to_mlds__PTIInitializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20);
    }
#line 741 "rtti_to_mlds.m"
    {
#line 741 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 741 "rtti_to_mlds.m"
    }
#line 742 "rtti_to_mlds.m"
    {
#line 742 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 742 "rtti_to_mlds.m"
    }
#line 742 "rtti_to_mlds.m"
    {
#line 742 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 742 "rtti_to_mlds.m"
    }
#line 743 "rtti_to_mlds.m"
    {
#line 743 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
    }
#line 745 "rtti_to_mlds.m"
    {
#line 745 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_28_28 = ml_backend__ml_code_util__ml_string_type_0_f_0();
    }
#line 745 "rtti_to_mlds.m"
    {
#line 745 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__V_28_28, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[17], ml_backend__rtti_to_mlds__MaybeArgName_12);
    }
#line 746 "rtti_to_mlds.m"
    {
#line 746 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 746 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 746 "rtti_to_mlds.m"
    }
#line 744 "rtti_to_mlds.m"
    {
#line 744 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 744 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PTIInitializer_14));
#line 744 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_25_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 744 "rtti_to_mlds.m"
    }
#line 743 "rtti_to_mlds.m"
    {
#line 743 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 743 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 743 "rtti_to_mlds.m"
    }
#line 742 "rtti_to_mlds.m"
    {
#line 742 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 742 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_40, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 735 "rtti_to_mlds.m"
  }
#line 731 "rtti_to_mlds.m"
}

#line 715 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_7,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 715 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 715 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 715 "rtti_to_mlds.m"
{
#line 720 "rtti_to_mlds.m"
  {
#line 720 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 720 "rtti_to_mlds.m"
    {
#line 720 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__Lang_8, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 720 "rtti_to_mlds.m"
      return;
    }
#line 720 "rtti_to_mlds.m"
  }
#line 715 "rtti_to_mlds.m"
}

#line 702 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_6,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 702 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 702 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 702 "rtti_to_mlds.m"
{
#line 705 "rtti_to_mlds.m"
  {
#line 705 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 705 "rtti_to_mlds.m"
    {
#line 705 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__EnumFunctor_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 705 "rtti_to_mlds.m"
      return;
    }
#line 705 "rtti_to_mlds.m"
  }
#line 702 "rtti_to_mlds.m"
}

#line 658 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4(
#line 658 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 658 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 658 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 658 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 658 "rtti_to_mlds.m"
{
#line 658 "rtti_to_mlds.m"
  {
#line 658 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 658 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13;

#line 658 "rtti_to_mlds.m"
    {
#line 658 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13);
    }
#line 658 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13));
#line 658 "rtti_to_mlds.m"
  }
#line 658 "rtti_to_mlds.m"
}

#line 625 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3(
#line 625 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 625 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 625 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 625 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 625 "rtti_to_mlds.m"
{
#line 625 "rtti_to_mlds.m"
  {
#line 625 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 625 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19;

#line 625 "rtti_to_mlds.m"
    {
#line 625 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19);
    }
#line 625 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19));
#line 625 "rtti_to_mlds.m"
  }
#line 625 "rtti_to_mlds.m"
}

#line 607 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2(
#line 607 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 607 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 607 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 607 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 607 "rtti_to_mlds.m"
{
#line 607 "rtti_to_mlds.m"
  {
#line 607 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 607 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16;

#line 607 "rtti_to_mlds.m"
    {
#line 607 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16);
    }
#line 607 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16));
#line 607 "rtti_to_mlds.m"
  }
#line 607 "rtti_to_mlds.m"
}

#line 642 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1(
#line 642 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 642 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 642 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 642 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 642 "rtti_to_mlds.m"
{
#line 642 "rtti_to_mlds.m"
  {
#line 642 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 642 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39;

#line 642 "rtti_to_mlds.m"
    {
#line 642 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39);
    }
#line 642 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39));
#line 642 "rtti_to_mlds.m"
  }
#line 642 "rtti_to_mlds.m"
}

#line 596 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(
#line 596 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 596 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
#line 596 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_11,
#line 596 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__FunctorInitializer_12,
#line 596 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__LayoutInitializer_13,
#line 596 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__NumberMapInitializer_14,
#line 596 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43,
#line 596 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44)
#line 596 "rtti_to_mlds.m"
{
#line 602 "rtti_to_mlds.m"
  {
#line 602 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 602 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_16;

#line 603 "rtti_to_mlds.m"
    {
#line 603 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, &ml_backend__rtti_to_mlds__ModuleName_16);
    }
#line 620 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 2))))
#line 641 "rtti_to_mlds.m"
      {
#line 641 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuFunctors_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 641 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuByPtag_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 641 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuByName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 641 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 641 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68;
#line 641 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69;
#line 641 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70;
#line 641 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 640 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 642 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68;

#line 642 "rtti_to_mlds.m"
        {
#line 642 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 642 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[2]));
#line 642 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1));
#line 642 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 642 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 642 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 642 "rtti_to_mlds.m"
        }
#line 642 "rtti_to_mlds.m"
        {
#line 642 "rtti_to_mlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_67_67, ml_backend__rtti_to_mlds__DuFunctors_29, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68);
        }
#line 642 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68);
#line 644 "rtti_to_mlds.m"
        {
#line 644 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__DuByPtag_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69);
        }
#line 646 "rtti_to_mlds.m"
        {
#line 646 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__DuByName_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70);
        }
#line 648 "rtti_to_mlds.m"
        {
#line 648 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_92, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
        }
#line 649 "rtti_to_mlds.m"
        {
#line 649 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
        }
#line 651 "rtti_to_mlds.m"
        {
#line 651 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)));
        }
#line 653 "rtti_to_mlds.m"
        {
#line 653 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
#line 641 "rtti_to_mlds.m"
      }
#line 620 "rtti_to_mlds.m"
    else
#line 620 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 0))))
#line 606 "rtti_to_mlds.m"
      {
#line 606 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__EnumFunctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 606 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__EnumByValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 606 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__EnumByName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 606 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 606 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 606 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84;
#line 606 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85;
#line 606 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86;
#line 605 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 605 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 607 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84;

#line 607 "rtti_to_mlds.m"
        {
#line 607 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 607 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[3]));
#line 607 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2));
#line 607 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 607 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 607 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 607 "rtti_to_mlds.m"
        }
#line 607 "rtti_to_mlds.m"
        {
#line 607 "rtti_to_mlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_83_83, ml_backend__rtti_to_mlds__EnumFunctors_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84);
        }
#line 607 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84);
#line 609 "rtti_to_mlds.m"
        {
#line 609 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__EnumByValue_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85);
        }
#line 611 "rtti_to_mlds.m"
        {
#line 611 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__EnumByName_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86);
        }
#line 613 "rtti_to_mlds.m"
        {
#line 613 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
        }
#line 614 "rtti_to_mlds.m"
        {
#line 614 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 616 "rtti_to_mlds.m"
        {
#line 616 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
        }
#line 618 "rtti_to_mlds.m"
        {
#line 618 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
#line 606 "rtti_to_mlds.m"
      }
#line 620 "rtti_to_mlds.m"
    else
#line 620 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 1))))
#line 623 "rtti_to_mlds.m"
      {
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ForeignEnumLang_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76;
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77;
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78;
#line 623 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 621 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 624 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76;

#line 625 "rtti_to_mlds.m"
        {
#line 625 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 625 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[1]));
#line 625 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3));
#line 625 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 625 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 625 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ForeignEnumLang_23));
#line 625 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 625 "rtti_to_mlds.m"
        }
#line 624 "rtti_to_mlds.m"
        {
#line 624 "rtti_to_mlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_75_75, ml_backend__rtti_to_mlds__ForeignEnumFunctors_25, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76);
        }
#line 624 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76);
#line 628 "rtti_to_mlds.m"
        {
#line 628 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77);
        }
#line 630 "rtti_to_mlds.m"
        {
#line 630 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ForeignEnumByName_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78);
        }
#line 632 "rtti_to_mlds.m"
        {
#line 632 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_91, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
        }
#line 633 "rtti_to_mlds.m"
        {
#line 633 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
        }
#line 635 "rtti_to_mlds.m"
        {
#line 635 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
        }
#line 637 "rtti_to_mlds.m"
        {
#line 637 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
#line 623 "rtti_to_mlds.m"
      }
#line 620 "rtti_to_mlds.m"
    else
#line 620 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 683 "rtti_to_mlds.m"
      {
#line 683 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__EqvType_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 683 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeRttiData_39;

#line 684 "rtti_to_mlds.m"
        {
#line 684 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TypeRttiData_39 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ml_backend__rtti_to_mlds__EqvType_38);
        }
#line 685 "rtti_to_mlds.m"
        {
#line 685 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__TypeRttiData_39, ml_backend__rtti_to_mlds__LayoutInitializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
        }
#line 688 "rtti_to_mlds.m"
        {
#line 688 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 689 "rtti_to_mlds.m"
        {
#line 689 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 683 "rtti_to_mlds.m"
      }
#line 620 "rtti_to_mlds.m"
    else
#line 620 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 672 "rtti_to_mlds.m"
      {
#line 672 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__NotagFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 672 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 672 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));

#line 673 "rtti_to_mlds.m"
        {
#line 673 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__rtti_to_mlds_scalar_common_1[7]), ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
        }
#line 674 "rtti_to_mlds.m"
        {
#line 674 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
        }
#line 676 "rtti_to_mlds.m"
        {
#line 676 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
        }
#line 678 "rtti_to_mlds.m"
        {
#line 678 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
#line 680 "rtti_to_mlds.m"
        {
#line 680 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__NotagFunctor_37, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
#line 680 "rtti_to_mlds.m"
          return;
        }
#line 672 "rtti_to_mlds.m"
      }
#line 620 "rtti_to_mlds.m"
    else
#line 620 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 657 "rtti_to_mlds.m"
      {
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MaybeResFunctors_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ResFunctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MaybeResByName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60;
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61;
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62;
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 6)));
#line 657 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuByPtag_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 656 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 658 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60;

#line 658 "rtti_to_mlds.m"
        {
#line 658 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 658 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[4]));
#line 658 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4));
#line 658 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 658 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 658 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 658 "rtti_to_mlds.m"
        }
#line 658 "rtti_to_mlds.m"
        {
#line 658 "rtti_to_mlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_59_59, ml_backend__rtti_to_mlds__MaybeResFunctors_33, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60);
        }
#line 658 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60);
#line 660 "rtti_to_mlds.m"
        {
#line 660 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ResFunctors_34, ml_backend__rtti_to_mlds__DuByPtag_94, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61);
        }
#line 662 "rtti_to_mlds.m"
        {
#line 662 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__MaybeResByName_35, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62);
        }
#line 664 "rtti_to_mlds.m"
        {
#line 664 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_93, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
        }
#line 665 "rtti_to_mlds.m"
        {
#line 665 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)));
        }
#line 667 "rtti_to_mlds.m"
        {
#line 667 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)));
        }
#line 669 "rtti_to_mlds.m"
        {
#line 669 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
#line 657 "rtti_to_mlds.m"
      }
#line 620 "rtti_to_mlds.m"
    else
#line 694 "rtti_to_mlds.m"
      {
#line 695 "rtti_to_mlds.m"
        {
#line 695 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 696 "rtti_to_mlds.m"
        {
#line 696 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 697 "rtti_to_mlds.m"
        {
#line 697 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 694 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43;
#line 694 "rtti_to_mlds.m"
      }
#line 602 "rtti_to_mlds.m"
  }
#line 596 "rtti_to_mlds.m"
}

#line 551 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6(
#line 551 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 551 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 551 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 551 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 551 "rtti_to_mlds.m"
{
#line 551 "rtti_to_mlds.m"
  {
#line 551 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 551 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10;

#line 551 "rtti_to_mlds.m"
    {
#line 551 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10);
    }
#line 551 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10));
#line 551 "rtti_to_mlds.m"
  }
#line 551 "rtti_to_mlds.m"
}

#line 550 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_5(
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 550 "rtti_to_mlds.m"
{
#line 550 "rtti_to_mlds.m"
  {
#line 550 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 550 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 550 "rtti_to_mlds.m"
    {
#line 550 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 550 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 550 "rtti_to_mlds.m"
  }
#line 550 "rtti_to_mlds.m"
}

#line 548 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_4(
#line 548 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 548 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 548 "rtti_to_mlds.m"
{
#line 548 "rtti_to_mlds.m"
  {
#line 548 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 548 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 548 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv5_HeadVar__2_2;

#line 548 "rtti_to_mlds.m"
    {
#line 548 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv5_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 548 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv5_HeadVar__2_2));
#line 548 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 548 "rtti_to_mlds.m"
  }
#line 548 "rtti_to_mlds.m"
}

#line 521 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3(
#line 521 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 521 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 521 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 521 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 521 "rtti_to_mlds.m"
{
#line 521 "rtti_to_mlds.m"
  {
#line 521 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 521 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10;

#line 521 "rtti_to_mlds.m"
    {
#line 521 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10);
    }
#line 521 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10));
#line 521 "rtti_to_mlds.m"
  }
#line 521 "rtti_to_mlds.m"
}

#line 520 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_2(
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 520 "rtti_to_mlds.m"
{
#line 520 "rtti_to_mlds.m"
  {
#line 520 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 520 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 520 "rtti_to_mlds.m"
    {
#line 520 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 520 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 520 "rtti_to_mlds.m"
  }
#line 520 "rtti_to_mlds.m"
}

#line 518 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_1(
#line 518 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 518 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 518 "rtti_to_mlds.m"
{
#line 518 "rtti_to_mlds.m"
  {
#line 518 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 518 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 518 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 518 "rtti_to_mlds.m"
    {
#line 518 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 518 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 518 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 518 "rtti_to_mlds.m"
  }
#line 518 "rtti_to_mlds.m"
}

#line 502 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8,
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 502 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34,
#line 502 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35)
#line 502 "rtti_to_mlds.m"
{
#line 509 "rtti_to_mlds.m"
  {
#line 509 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 509 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 0))))
#line 509 "rtti_to_mlds.m"
      {
#line 510 "rtti_to_mlds.m"
        {
#line 510 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/6", (MR_String) "plain_arity_zero_pseudo_type_info");
#line 510 "rtti_to_mlds.m"
          return;
        }
#line 509 "rtti_to_mlds.m"
      }
#line 509 "rtti_to_mlds.m"
    else
#line 509 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 512 "rtti_to_mlds.m"
      {
#line 512 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 0)));
#line 512 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 1)));
#line 512 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_15;
#line 514 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 514 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv0_V_16_16;

#line 513 "rtti_to_mlds.m"
        {
#line 513 "rtti_to_mlds.m"
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_15);
        }
#line 514 "rtti_to_mlds.m"
        {
#line 514 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_15, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv0_V_16_16);
        }
#line 514 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 514 "rtti_to_mlds.m"
          {
#line 514 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_V_16_16);
#line 514 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 514 "rtti_to_mlds.m"
          }
#line 517 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 517 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34;
#line 517 "rtti_to_mlds.m"
        else
#line 519 "rtti_to_mlds.m"
          {
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_115_115 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_17;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_18;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_19;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_21;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Rval_23;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Type_24;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RvalType_25;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_73_73;
#line 519 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 521 "rtti_to_mlds.m"
            MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62;

#line 518 "rtti_to_mlds.m"
            {
#line 518 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ArgRttiDatas_17 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[13], ml_backend__rtti_to_mlds__ArgTypes_14);
            }
#line 520 "rtti_to_mlds.m"
            {
#line 520 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RealRttiDatas_18 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[14], ml_backend__rtti_to_mlds__ArgRttiDatas_17);
            }
#line 521 "rtti_to_mlds.m"
            {
#line 521 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 521 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 521 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3));
#line 521 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 521 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 521 "rtti_to_mlds.m"
            }
#line 521 "rtti_to_mlds.m"
            {
#line 521 "rtti_to_mlds.m"
              mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_61_61, ml_backend__rtti_to_mlds__RealRttiDatas_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62);
            }
#line 521 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62);
#line 523 "rtti_to_mlds.m"
            {
#line 523 "rtti_to_mlds.m"
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_19);
            }
#line 524 "rtti_to_mlds.m"
            {
#line 524 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 524 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 524 "rtti_to_mlds.m"
            }
#line 524 "rtti_to_mlds.m"
            {
#line 524 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 524 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 524 "rtti_to_mlds.m"
            }
#line 525 "rtti_to_mlds.m"
            {
#line 525 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_66_66 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__RttiTypeCtor_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
            }
#line 527 "rtti_to_mlds.m"
            {
#line 527 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_69_69 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__ArgRttiDatas_17);
            }
#line 529 "rtti_to_mlds.m"
            {
#line 529 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 529 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 529 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "rtti_to_mlds.m"
            }
#line 526 "rtti_to_mlds.m"
            {
#line 526 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 526 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 526 "rtti_to_mlds.m"
            }
#line 524 "rtti_to_mlds.m"
            {
#line 524 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 524 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 524 "rtti_to_mlds.m"
            }
#line 530 "rtti_to_mlds.m"
            {
#line 530 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72);
            }
#line 533 "rtti_to_mlds.m"
            {
#line 533 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_19);
            }
#line 534 "rtti_to_mlds.m"
            {
#line 534 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 534 "rtti_to_mlds.m"
            }
#line 534 "rtti_to_mlds.m"
            {
#line 534 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 534 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_21));
#line 534 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_73_73));
#line 534 "rtti_to_mlds.m"
            }
#line 535 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 535 "rtti_to_mlds.m"
            {
#line 535 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Rval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 535 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 535 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 535 "rtti_to_mlds.m"
            }
#line 537 "rtti_to_mlds.m"
            {
#line 537 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RvalType_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 537 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_23));
#line 537 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 537 "rtti_to_mlds.m"
            }
#line 539 "rtti_to_mlds.m"
            {
#line 539 "rtti_to_mlds.m"
              ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);
#line 539 "rtti_to_mlds.m"
              return;
            }
#line 519 "rtti_to_mlds.m"
          }
#line 512 "rtti_to_mlds.m"
      }
#line 509 "rtti_to_mlds.m"
    else
#line 509 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 3))))
#line 590 "rtti_to_mlds.m"
      {
#line 591 "rtti_to_mlds.m"
        {
#line 591 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/6", (MR_String) "type_var");
#line 591 "rtti_to_mlds.m"
          return;
        }
#line 590 "rtti_to_mlds.m"
      }
#line 509 "rtti_to_mlds.m"
    else
#line 542 "rtti_to_mlds.m"
      {
#line 542 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__VarArityId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 0)));
#line 542 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ArgTypes_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 1)));
#line 542 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_102;
#line 544 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 544 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv4_V_27_27;

#line 543 "rtti_to_mlds.m"
        {
#line 543 "rtti_to_mlds.m"
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_102);
        }
#line 544 "rtti_to_mlds.m"
        {
#line 544 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_102, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv4_V_27_27);
        }
#line 544 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 544 "rtti_to_mlds.m"
          {
#line 544 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_V_27_27);
#line 544 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 544 "rtti_to_mlds.m"
          }
#line 547 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 547 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34;
#line 547 "rtti_to_mlds.m"
        else
#line 549 "rtti_to_mlds.m"
          {
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_125_125 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_126_126 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Globals_28;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TargetLang_29;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__InitRttiName_30;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__InitializerArgs_32;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_80;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_81;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_82;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_83;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Initializer_84;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_85;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__DataAddr_86;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Rval_87;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Type_88;
#line 549 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RvalType_89;
#line 551 "rtti_to_mlds.m"
            MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42;

#line 548 "rtti_to_mlds.m"
            {
#line 548 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ArgRttiDatas_81 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_125_125, ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[15], ml_backend__rtti_to_mlds__ArgTypes_101);
            }
#line 550 "rtti_to_mlds.m"
            {
#line 550 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RealRttiDatas_82 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[16], ml_backend__rtti_to_mlds__ArgRttiDatas_81);
            }
#line 551 "rtti_to_mlds.m"
            {
#line 551 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 551 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 551 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6));
#line 551 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 551 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 551 "rtti_to_mlds.m"
            }
#line 551 "rtti_to_mlds.m"
            {
#line 551 "rtti_to_mlds.m"
              mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_41_41, ml_backend__rtti_to_mlds__RealRttiDatas_82, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42);
            }
#line 551 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42);
#line 553 "rtti_to_mlds.m"
            {
#line 553 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RttiTypeCtor_80 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ml_backend__rtti_to_mlds__VarArityId_26);
            }
#line 554 "rtti_to_mlds.m"
            {
#line 554 "rtti_to_mlds.m"
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_83);
            }
#line 555 "rtti_to_mlds.m"
            {
#line 555 "rtti_to_mlds.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__Globals_28);
            }
#line 556 "rtti_to_mlds.m"
            {
#line 556 "rtti_to_mlds.m"
              libs__globals__get_target_2_p_0(ml_backend__rtti_to_mlds__Globals_28, &ml_backend__rtti_to_mlds__TargetLang_29);
            }
#line 558 "rtti_to_mlds.m"
            {
#line 558 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__InitRttiName_30 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_83, ml_backend__rtti_to_mlds__RttiTypeCtor_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
            }
#line 560 "rtti_to_mlds.m"
            {
#line 560 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_83, ml_backend__rtti_to_mlds__ArgRttiDatas_81);
            }
#line 562 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__TargetLang_29 == (MR_Integer) 3);
#line 569 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 568 "rtti_to_mlds.m"
              {
#line 568 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 568 "rtti_to_mlds.m"
                {
#line 568 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 568 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 568 "rtti_to_mlds.m"
                }
#line 568 "rtti_to_mlds.m"
                {
#line 568 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 568 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 568 "rtti_to_mlds.m"
                }
#line 568 "rtti_to_mlds.m"
              }
#line 569 "rtti_to_mlds.m"
            else
#line 570 "rtti_to_mlds.m"
              {
#line 570 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 570 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 570 "rtti_to_mlds.m"
                MR_Integer ml_backend__rtti_to_mlds__V_49_49;
#line 570 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_50_50;

#line 572 "rtti_to_mlds.m"
                {
#line 572 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_49_49 = mercury__list__length_1_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_125_125, ml_backend__rtti_to_mlds__ArgTypes_101);
                }
#line 572 "rtti_to_mlds.m"
                {
#line 572 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_48_48 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_49_49);
                }
#line 574 "rtti_to_mlds.m"
                {
#line 574 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 574 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 574 "rtti_to_mlds.m"
                }
#line 572 "rtti_to_mlds.m"
                {
#line 572 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 572 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 572 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 572 "rtti_to_mlds.m"
                }
#line 571 "rtti_to_mlds.m"
                {
#line 571 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 571 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 571 "rtti_to_mlds.m"
                }
#line 570 "rtti_to_mlds.m"
              }
#line 576 "rtti_to_mlds.m"
            {
#line 576 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 576 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 576 "rtti_to_mlds.m"
            }
#line 576 "rtti_to_mlds.m"
            {
#line 576 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Type_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 576 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_88, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 576 "rtti_to_mlds.m"
            }
#line 576 "rtti_to_mlds.m"
            {
#line 576 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Initializer_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 576 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_88));
#line 576 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InitializerArgs_32));
#line 576 "rtti_to_mlds.m"
            }
#line 578 "rtti_to_mlds.m"
            {
#line 578 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_84, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
            }
#line 581 "rtti_to_mlds.m"
            {
#line 581 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_85 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_83);
            }
#line 582 "rtti_to_mlds.m"
            {
#line 582 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 582 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 582 "rtti_to_mlds.m"
            }
#line 582 "rtti_to_mlds.m"
            {
#line 582 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__DataAddr_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 582 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_85));
#line 582 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_86, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 582 "rtti_to_mlds.m"
            }
#line 583 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_86);
#line 583 "rtti_to_mlds.m"
            {
#line 583 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Rval_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 583 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 583 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 583 "rtti_to_mlds.m"
            }
#line 585 "rtti_to_mlds.m"
            {
#line 585 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RvalType_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_87));
#line 585 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_88));
#line 585 "rtti_to_mlds.m"
            }
#line 587 "rtti_to_mlds.m"
            {
#line 587 "rtti_to_mlds.m"
              ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_89, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);
#line 587 "rtti_to_mlds.m"
              return;
            }
#line 549 "rtti_to_mlds.m"
          }
#line 542 "rtti_to_mlds.m"
      }
#line 509 "rtti_to_mlds.m"
  }
#line 502 "rtti_to_mlds.m"
}

#line 456 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6(
#line 456 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 456 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 456 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 456 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 456 "rtti_to_mlds.m"
{
#line 456 "rtti_to_mlds.m"
  {
#line 456 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 456 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10;

#line 456 "rtti_to_mlds.m"
    {
#line 456 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10);
    }
#line 456 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10));
#line 456 "rtti_to_mlds.m"
  }
#line 456 "rtti_to_mlds.m"
}

#line 455 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_5(
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 455 "rtti_to_mlds.m"
{
#line 455 "rtti_to_mlds.m"
  {
#line 455 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 455 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 455 "rtti_to_mlds.m"
    {
#line 455 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 455 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 455 "rtti_to_mlds.m"
  }
#line 455 "rtti_to_mlds.m"
}

#line 454 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_4(
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 454 "rtti_to_mlds.m"
{
#line 454 "rtti_to_mlds.m"
  {
#line 454 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 454 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 454 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv5_HeadVar__2_2;

#line 454 "rtti_to_mlds.m"
    {
#line 454 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv5_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 454 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv5_HeadVar__2_2));
#line 454 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 454 "rtti_to_mlds.m"
  }
#line 454 "rtti_to_mlds.m"
}

#line 427 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3(
#line 427 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 427 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 427 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 427 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 427 "rtti_to_mlds.m"
{
#line 427 "rtti_to_mlds.m"
  {
#line 427 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 427 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10;

#line 427 "rtti_to_mlds.m"
    {
#line 427 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10);
    }
#line 427 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10));
#line 427 "rtti_to_mlds.m"
  }
#line 427 "rtti_to_mlds.m"
}

#line 426 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_2(
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 426 "rtti_to_mlds.m"
{
#line 426 "rtti_to_mlds.m"
  {
#line 426 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 426 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 426 "rtti_to_mlds.m"
    {
#line 426 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 426 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 426 "rtti_to_mlds.m"
  }
#line 426 "rtti_to_mlds.m"
}

#line 425 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_1(
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 425 "rtti_to_mlds.m"
{
#line 425 "rtti_to_mlds.m"
  {
#line 425 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 425 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 425 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 425 "rtti_to_mlds.m"
    {
#line 425 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 425 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 425 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 425 "rtti_to_mlds.m"
  }
#line 425 "rtti_to_mlds.m"
}

#line 410 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeInfo_8,
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 410 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33,
#line 410 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34)
#line 410 "rtti_to_mlds.m"
{
#line 416 "rtti_to_mlds.m"
  {
#line 416 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 416 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiTypeInfo_8)) == (MR_mktag((MR_Integer) 0))))
#line 416 "rtti_to_mlds.m"
      {
#line 417 "rtti_to_mlds.m"
        {
#line 417 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_type_info_defn\'/6", (MR_String) "plain_arity_zero_type_info");
#line 417 "rtti_to_mlds.m"
          return;
        }
#line 416 "rtti_to_mlds.m"
      }
#line 416 "rtti_to_mlds.m"
    else
#line 416 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 419 "rtti_to_mlds.m"
      {
#line 419 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 0)));
#line 419 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 1)));
#line 419 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_15;
#line 421 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 421 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv0_V_16_16;

#line 420 "rtti_to_mlds.m"
        {
#line 420 "rtti_to_mlds.m"
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_15);
        }
#line 421 "rtti_to_mlds.m"
        {
#line 421 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_15, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv0_V_16_16);
        }
#line 421 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 421 "rtti_to_mlds.m"
          {
#line 421 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_V_16_16);
#line 421 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 421 "rtti_to_mlds.m"
          }
#line 424 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 424 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33;
#line 424 "rtti_to_mlds.m"
        else
#line 425 "rtti_to_mlds.m"
          {
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_17;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_18;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_19;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_21;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Rval_23;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Type_24;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RvalType_25;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 425 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 427 "rtti_to_mlds.m"
            MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58;

#line 425 "rtti_to_mlds.m"
            {
#line 425 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ArgRttiDatas_17 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[9], ml_backend__rtti_to_mlds__ArgTypes_14);
            }
#line 426 "rtti_to_mlds.m"
            {
#line 426 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RealRttiDatas_18 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[10], ml_backend__rtti_to_mlds__ArgRttiDatas_17);
            }
#line 427 "rtti_to_mlds.m"
            {
#line 427 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 427 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 427 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3));
#line 427 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 427 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 427 "rtti_to_mlds.m"
            }
#line 427 "rtti_to_mlds.m"
            {
#line 427 "rtti_to_mlds.m"
              mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_57_57, ml_backend__rtti_to_mlds__RealRttiDatas_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58);
            }
#line 427 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58);
#line 429 "rtti_to_mlds.m"
            {
#line 429 "rtti_to_mlds.m"
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_19);
            }
#line 430 "rtti_to_mlds.m"
            {
#line 430 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 430 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 430 "rtti_to_mlds.m"
            }
#line 430 "rtti_to_mlds.m"
            {
#line 430 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 430 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 430 "rtti_to_mlds.m"
            }
#line 431 "rtti_to_mlds.m"
            {
#line 431 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_62_62 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__RttiTypeCtor_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
            }
#line 433 "rtti_to_mlds.m"
            {
#line 433 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_65_65 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__ArgRttiDatas_17);
            }
#line 435 "rtti_to_mlds.m"
            {
#line 435 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 435 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 435 "rtti_to_mlds.m"
            }
#line 432 "rtti_to_mlds.m"
            {
#line 432 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 432 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 432 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 432 "rtti_to_mlds.m"
            }
#line 430 "rtti_to_mlds.m"
            {
#line 430 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 430 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 430 "rtti_to_mlds.m"
            }
#line 436 "rtti_to_mlds.m"
            {
#line 436 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68);
            }
#line 439 "rtti_to_mlds.m"
            {
#line 439 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_19);
            }
#line 440 "rtti_to_mlds.m"
            {
#line 440 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 440 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 440 "rtti_to_mlds.m"
            }
#line 440 "rtti_to_mlds.m"
            {
#line 440 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 440 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_21));
#line 440 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 440 "rtti_to_mlds.m"
            }
#line 441 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 441 "rtti_to_mlds.m"
            {
#line 441 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Rval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 441 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 441 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 441 "rtti_to_mlds.m"
            }
#line 443 "rtti_to_mlds.m"
            {
#line 443 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RvalType_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 443 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_23));
#line 443 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 443 "rtti_to_mlds.m"
            }
#line 445 "rtti_to_mlds.m"
            {
#line 445 "rtti_to_mlds.m"
              ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);
#line 445 "rtti_to_mlds.m"
              return;
            }
#line 425 "rtti_to_mlds.m"
          }
#line 419 "rtti_to_mlds.m"
      }
#line 416 "rtti_to_mlds.m"
    else
#line 448 "rtti_to_mlds.m"
      {
#line 448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__VarArityId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 0)));
#line 448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ArgTypes_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 1)));
#line 448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_98;
#line 450 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 450 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv4_V_27_27;

#line 449 "rtti_to_mlds.m"
        {
#line 449 "rtti_to_mlds.m"
          ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_98);
        }
#line 450 "rtti_to_mlds.m"
        {
#line 450 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_98, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv4_V_27_27);
        }
#line 450 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 450 "rtti_to_mlds.m"
          {
#line 450 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_V_27_27);
#line 450 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 450 "rtti_to_mlds.m"
          }
#line 453 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 453 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33;
#line 453 "rtti_to_mlds.m"
        else
#line 454 "rtti_to_mlds.m"
          {
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_121_121 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_122_122 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Globals_28;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TargetLang_29;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__InitRttiName_30;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__InitializerArgs_32;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_76;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_77;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_78;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_79;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Initializer_80;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_81;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__DataAddr_82;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Rval_83;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Type_84;
#line 454 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RvalType_85;
#line 456 "rtti_to_mlds.m"
            MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38;

#line 454 "rtti_to_mlds.m"
            {
#line 454 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ArgRttiDatas_77 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_121_121, ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[11], ml_backend__rtti_to_mlds__ArgTypes_97);
            }
#line 455 "rtti_to_mlds.m"
            {
#line 455 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RealRttiDatas_78 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[12], ml_backend__rtti_to_mlds__ArgRttiDatas_77);
            }
#line 456 "rtti_to_mlds.m"
            {
#line 456 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 456 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 456 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6));
#line 456 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 456 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 456 "rtti_to_mlds.m"
            }
#line 456 "rtti_to_mlds.m"
            {
#line 456 "rtti_to_mlds.m"
              mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_37_37, ml_backend__rtti_to_mlds__RealRttiDatas_78, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38);
            }
#line 456 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38);
#line 458 "rtti_to_mlds.m"
            {
#line 458 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RttiTypeCtor_76 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ml_backend__rtti_to_mlds__VarArityId_26);
            }
#line 459 "rtti_to_mlds.m"
            {
#line 459 "rtti_to_mlds.m"
              hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_79);
            }
#line 460 "rtti_to_mlds.m"
            {
#line 460 "rtti_to_mlds.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__Globals_28);
            }
#line 461 "rtti_to_mlds.m"
            {
#line 461 "rtti_to_mlds.m"
              libs__globals__get_target_2_p_0(ml_backend__rtti_to_mlds__Globals_28, &ml_backend__rtti_to_mlds__TargetLang_29);
            }
#line 463 "rtti_to_mlds.m"
            {
#line 463 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__InitRttiName_30 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_79, ml_backend__rtti_to_mlds__RttiTypeCtor_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
            }
#line 465 "rtti_to_mlds.m"
            {
#line 465 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), ml_backend__rtti_to_mlds__ModuleName_79, ml_backend__rtti_to_mlds__ArgRttiDatas_77);
            }
#line 467 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__TargetLang_29 == (MR_Integer) 3);
#line 481 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 480 "rtti_to_mlds.m"
              {
#line 480 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_41_41;

#line 480 "rtti_to_mlds.m"
                {
#line 480 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 480 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 480 "rtti_to_mlds.m"
                }
#line 480 "rtti_to_mlds.m"
                {
#line 480 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 480 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 480 "rtti_to_mlds.m"
                }
#line 480 "rtti_to_mlds.m"
              }
#line 481 "rtti_to_mlds.m"
            else
#line 482 "rtti_to_mlds.m"
              {
#line 482 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 482 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_44_44;
#line 482 "rtti_to_mlds.m"
                MR_Integer ml_backend__rtti_to_mlds__V_45_45;
#line 482 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_46_46;

#line 484 "rtti_to_mlds.m"
                {
#line 484 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_45_45 = mercury__list__length_1_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_121_121, ml_backend__rtti_to_mlds__ArgTypes_97);
                }
#line 484 "rtti_to_mlds.m"
                {
#line 484 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_44_44 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_45_45);
                }
#line 485 "rtti_to_mlds.m"
                {
#line 485 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 485 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "rtti_to_mlds.m"
                }
#line 484 "rtti_to_mlds.m"
                {
#line 484 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 484 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 484 "rtti_to_mlds.m"
                }
#line 483 "rtti_to_mlds.m"
                {
#line 483 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 483 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 483 "rtti_to_mlds.m"
                }
#line 482 "rtti_to_mlds.m"
              }
#line 487 "rtti_to_mlds.m"
            {
#line 487 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 487 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 487 "rtti_to_mlds.m"
            }
#line 487 "rtti_to_mlds.m"
            {
#line 487 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Type_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 487 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 487 "rtti_to_mlds.m"
            }
#line 487 "rtti_to_mlds.m"
            {
#line 487 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Initializer_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 487 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_84));
#line 487 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InitializerArgs_32));
#line 487 "rtti_to_mlds.m"
            }
#line 489 "rtti_to_mlds.m"
            {
#line 489 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_80, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50);
            }
#line 492 "rtti_to_mlds.m"
            {
#line 492 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_81 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_79);
            }
#line 493 "rtti_to_mlds.m"
            {
#line 493 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 493 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_51_51, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 493 "rtti_to_mlds.m"
            }
#line 493 "rtti_to_mlds.m"
            {
#line 493 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__DataAddr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 493 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_81));
#line 493 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_82, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 493 "rtti_to_mlds.m"
            }
#line 494 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_82);
#line 494 "rtti_to_mlds.m"
            {
#line 494 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Rval_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 494 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 494 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 494 "rtti_to_mlds.m"
            }
#line 496 "rtti_to_mlds.m"
            {
#line 496 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RvalType_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 496 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_83));
#line 496 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_84));
#line 496 "rtti_to_mlds.m"
            }
#line 498 "rtti_to_mlds.m"
            {
#line 498 "rtti_to_mlds.m"
              ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_85, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);
#line 498 "rtti_to_mlds.m"
              return;
            }
#line 454 "rtti_to_mlds.m"
          }
#line 448 "rtti_to_mlds.m"
      }
#line 416 "rtti_to_mlds.m"
  }
#line 410 "rtti_to_mlds.m"
}

#line 401 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
#line 401 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 401 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_7,
#line 401 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 401 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 401 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10)
#line 401 "rtti_to_mlds.m"
{
#line 404 "rtti_to_mlds.m"
  {
#line 404 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 404 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_11;

#line 405 "rtti_to_mlds.m"
    {
#line 405 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 405 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_7));
#line 405 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_8));
#line 405 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_9));
#line 405 "rtti_to_mlds.m"
    }
#line 406 "rtti_to_mlds.m"
    {
#line 406 "rtti_to_mlds.m"
      MR_Word base;
#line 406 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_10 = base;
#line 406 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 406 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_11));
#line 406 "rtti_to_mlds.m"
    }
#line 404 "rtti_to_mlds.m"
  }
#line 401 "rtti_to_mlds.m"
}

#line 388 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4(
#line 388 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 388 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 388 "rtti_to_mlds.m"
{
#line 388 "rtti_to_mlds.m"
  {
#line 388 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 388 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 388 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv7_Initializer_8;

#line 388 "rtti_to_mlds.m"
    {
#line 388 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv7_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 388 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv7_Initializer_8));
#line 388 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 388 "rtti_to_mlds.m"
  }
#line 388 "rtti_to_mlds.m"
}

#line 384 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3(
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 384 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 384 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 384 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 384 "rtti_to_mlds.m"
{
#line 384 "rtti_to_mlds.m"
  {
#line 384 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 384 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_RttiId_12;
#line 384 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25;
#line 384 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27;

#line 384 "rtti_to_mlds.m"
    {
#line 384 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv4_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27);
    }
#line 384 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_RttiId_12));
#line 384 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25));
#line 384 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27));
#line 384 "rtti_to_mlds.m"
  }
#line 384 "rtti_to_mlds.m"
}

#line 384 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2(
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 384 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 384 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 384 "rtti_to_mlds.m"
{
#line 384 "rtti_to_mlds.m"
  {
#line 384 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 384 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_RttiId_10;

#line 384 "rtti_to_mlds.m"
    {
#line 384 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_RttiId_10);
    }
#line 384 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_RttiId_10));
#line 384 "rtti_to_mlds.m"
  }
#line 384 "rtti_to_mlds.m"
}

#line 377 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_1(
#line 377 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 377 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 377 "rtti_to_mlds.m"
{
#line 377 "rtti_to_mlds.m"
  {
#line 377 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 377 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 377 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 377 "rtti_to_mlds.m"
    {
#line 377 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 377 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 377 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 377 "rtti_to_mlds.m"
  }
#line 377 "rtti_to_mlds.m"
}

#line 361 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Instance_8,
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 361 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31,
#line 361 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32)
#line 361 "rtti_to_mlds.m"
{
#line 366 "rtti_to_mlds.m"
  {
#line 366 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_59_59;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_73_73;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 0)));
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 1)));
#line 366 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumTypeVars_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 2)));
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 3)));
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCDeclRttiId_17;
#line 366 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumInstanceConstraints_18;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceTypesRttiId_20;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_23;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_24;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypesInitializer_25;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCConstrIds_26;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ElementType_28;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_30;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_83;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_91;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_92_92;
#line 367 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 4)));
#line 383 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 383 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv6_V_27_27;
#line 383 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39;

#line 369 "rtti_to_mlds.m"
    {
#line 369 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCDeclRttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCDeclRttiId_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 369 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCDeclRttiId_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 369 "rtti_to_mlds.m"
    }
#line 15756 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_59_59 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0;
#line 370 "rtti_to_mlds.m"
    {
#line 370 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_59_59, ml_backend__rtti_to_mlds__InstanceConstraints_15, &ml_backend__rtti_to_mlds__NumInstanceConstraints_18);
    }
#line 371 "rtti_to_mlds.m"
    {
#line 371 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 371 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 371 "rtti_to_mlds.m"
    }
#line 372 "rtti_to_mlds.m"
    {
#line 372 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceTypesRttiId_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 372 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19));
#line 372 "rtti_to_mlds.m"
    }
#line 373 "rtti_to_mlds.m"
    {
#line 373 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 373 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 373 "rtti_to_mlds.m"
    }
#line 374 "rtti_to_mlds.m"
    {
#line 374 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 374 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 374 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21));
#line 374 "rtti_to_mlds.m"
    }
#line 375 "rtti_to_mlds.m"
    {
#line 375 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_23);
    }
#line 377 "rtti_to_mlds.m"
    {
#line 377 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_24 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[8], ml_backend__rtti_to_mlds__Types_13);
    }
#line 378 "rtti_to_mlds.m"
    {
#line 378 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__TypeRttiDatas_24, &ml_backend__rtti_to_mlds__TypesInitializer_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35);
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_84_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceTypesRttiId_20));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_83, ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, ml_backend__rtti_to_mlds__TypesInitializer_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36);
    }
#line 384 "rtti_to_mlds.m"
    {
#line 384 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1]));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 384 "rtti_to_mlds.m"
    }
#line 384 "rtti_to_mlds.m"
    {
#line 384 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_40_40));
#line 384 "rtti_to_mlds.m"
    }
#line 385 "rtti_to_mlds.m"
    {
#line 385 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 15878 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_73_73 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 383 "rtti_to_mlds.m"
    {
#line 383 "rtti_to_mlds.m"
      mercury__list__map_foldl2_7_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_59_59, ml_backend__rtti_to_mlds__TypeCtorInfo_73_73, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_37_37, ml_backend__rtti_to_mlds__InstanceConstraints_15, &ml_backend__rtti_to_mlds__TCConstrIds_26, ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38)), &ml_backend__rtti_to_mlds__conv6_V_27_27, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39);
    }
#line 383 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv6_V_27_27);
#line 383 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39);
#line 386 "rtti_to_mlds.m"
    {
#line 386 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_42_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22));
#line 386 "rtti_to_mlds.m"
    }
#line 386 "rtti_to_mlds.m"
    {
#line 386 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ElementType_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 386 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 386 "rtti_to_mlds.m"
    }
#line 388 "rtti_to_mlds.m"
    {
#line 388 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 388 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 388 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4));
#line 388 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 388 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_28));
#line 388 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_23));
#line 388 "rtti_to_mlds.m"
    }
#line 387 "rtti_to_mlds.m"
    {
#line 387 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_73_73, ml_backend__rtti_to_mlds__V_43_43, ml_backend__rtti_to_mlds__TCConstrIds_26);
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_92_92, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_92_92));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_91, ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44);
    }
#line 392 "rtti_to_mlds.m"
    {
#line 392 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 392 "rtti_to_mlds.m"
    }
#line 392 "rtti_to_mlds.m"
    {
#line 392 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 392 "rtti_to_mlds.m"
    }
#line 393 "rtti_to_mlds.m"
    {
#line 393 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__TCDeclRttiId_17);
    }
#line 394 "rtti_to_mlds.m"
    {
#line 394 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_50_50 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumTypeVars_14);
    }
#line 395 "rtti_to_mlds.m"
    {
#line 395 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_52_52 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumInstanceConstraints_18);
    }
#line 396 "rtti_to_mlds.m"
    {
#line 396 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__InstanceTypesRttiId_20);
    }
#line 397 "rtti_to_mlds.m"
    {
#line 397 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_56_56 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22);
    }
#line 398 "rtti_to_mlds.m"
    {
#line 398 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 398 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 398 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 398 "rtti_to_mlds.m"
    }
#line 396 "rtti_to_mlds.m"
    {
#line 396 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 396 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 396 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_53_53, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 396 "rtti_to_mlds.m"
    }
#line 395 "rtti_to_mlds.m"
    {
#line 395 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 395 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_51_51, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 395 "rtti_to_mlds.m"
    }
#line 394 "rtti_to_mlds.m"
    {
#line 394 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 394 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 394 "rtti_to_mlds.m"
    }
#line 393 "rtti_to_mlds.m"
    {
#line 393 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 393 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 393 "rtti_to_mlds.m"
    }
#line 392 "rtti_to_mlds.m"
    {
#line 392 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 392 "rtti_to_mlds.m"
    }
#line 399 "rtti_to_mlds.m"
    {
#line 399 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32);
#line 399 "rtti_to_mlds.m"
      return;
    }
#line 366 "rtti_to_mlds.m"
  }
#line 361 "rtti_to_mlds.m"
}

#line 348 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
#line 348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_4,
#line 348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodId_5)
#line 348 "rtti_to_mlds.m"
{
#line 350 "rtti_to_mlds.m"
  {
#line 350 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
#line 350 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__MethodName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 0)));
#line 350 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__MethodArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 1)));
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 2)));
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 350 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 350 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_22;

#line 352 "rtti_to_mlds.m"
    {
#line 352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_10, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_4));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 352 "rtti_to_mlds.m"
    }
#line 353 "rtti_to_mlds.m"
    {
#line 353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 353 "rtti_to_mlds.m"
    }
#line 353 "rtti_to_mlds.m"
    {
#line 353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_12_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 353 "rtti_to_mlds.m"
    }
#line 354 "rtti_to_mlds.m"
    {
#line 354 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__MethodName_7);
    }
#line 355 "rtti_to_mlds.m"
    {
#line 355 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__MethodArity_8);
    }
#line 1728 "rtti_to_mlds.m"
    {
#line 1728 "rtti_to_mlds.m"
      backend_libs__rtti__pred_or_func_to_string_2_p_0(ml_backend__rtti_to_mlds__PredOrFunc_9, &ml_backend__rtti_to_mlds__Name_22);
    }
#line 1727 "rtti_to_mlds.m"
    {
#line 1727 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_22);
    }
#line 357 "rtti_to_mlds.m"
    {
#line 357 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 357 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 357 "rtti_to_mlds.m"
    }
#line 355 "rtti_to_mlds.m"
    {
#line 355 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 355 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 355 "rtti_to_mlds.m"
    }
#line 354 "rtti_to_mlds.m"
    {
#line 354 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_14_14, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_14_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 354 "rtti_to_mlds.m"
    }
#line 353 "rtti_to_mlds.m"
    {
#line 353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_14_14));
#line 353 "rtti_to_mlds.m"
    }
#line 350 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_6;
#line 350 "rtti_to_mlds.m"
  }
#line 348 "rtti_to_mlds.m"
}

#line 345 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1(
#line 345 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 345 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 345 "rtti_to_mlds.m"
{
#line 345 "rtti_to_mlds.m"
  {
#line 345 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 345 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 345 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_6;

#line 345 "rtti_to_mlds.m"
    {
#line 345 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_6 = ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 345 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_6));
#line 345 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 345 "rtti_to_mlds.m"
  }
#line 345 "rtti_to_mlds.m"
}

#line 341 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(
#line 341 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 341 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_7,
#line 341 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodIds_8,
#line 341 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 341 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12)
#line 341 "rtti_to_mlds.m"
{
#line 344 "rtti_to_mlds.m"
  {
#line 344 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 344 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_10;
#line 344 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 344 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_23;
#line 344 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 345 "rtti_to_mlds.m"
    {
#line 345 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 345 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[3]));
#line 345 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1));
#line 345 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 345 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_7));
#line 345 "rtti_to_mlds.m"
    }
#line 345 "rtti_to_mlds.m"
    {
#line 345 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ml_backend__rtti_to_mlds__V_13_13, ml_backend__rtti_to_mlds__MethodIds_8);
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_6));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_23, ml_backend__rtti_to_mlds__RttiId_6, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 344 "rtti_to_mlds.m"
  }
#line 341 "rtti_to_mlds.m"
}

#line 338 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1(
#line 338 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 338 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 338 "rtti_to_mlds.m"
{
#line 338 "rtti_to_mlds.m"
  {
#line 338 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 338 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 338 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 338 "rtti_to_mlds.m"
    {
#line 338 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 338 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 338 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 338 "rtti_to_mlds.m"
  }
#line 338 "rtti_to_mlds.m"
}

#line 334 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(
#line 334 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 334 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Names_6,
#line 334 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 334 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
#line 334 "rtti_to_mlds.m"
{
#line 337 "rtti_to_mlds.m"
  {
#line 337 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 337 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 337 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_21;
#line 337 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;

#line 338 "rtti_to_mlds.m"
    {
#line 338 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[7], ml_backend__rtti_to_mlds__Names_6);
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_22_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_5));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_21, ml_backend__rtti_to_mlds__RttiId_5, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 337 "rtti_to_mlds.m"
  }
#line 334 "rtti_to_mlds.m"
}

#line 328 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
#line 328 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_5,
#line 328 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_6,
#line 328 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_7,
#line 328 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_8)
#line 328 "rtti_to_mlds.m"
{
#line 330 "rtti_to_mlds.m"
  {
#line 330 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 330 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCRttiName_9;

#line 331 "rtti_to_mlds.m"
    {
#line 331 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCRttiName_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCRttiName_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_6));
#line 331 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCRttiName_9, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_7));
#line 331 "rtti_to_mlds.m"
    }
#line 332 "rtti_to_mlds.m"
    {
#line 332 "rtti_to_mlds.m"
      MR_Word base;
#line 332 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 332 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_8 = base;
#line 332 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_5));
#line 332 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_9));
#line 332 "rtti_to_mlds.m"
    }
#line 330 "rtti_to_mlds.m"
  }
#line 328 "rtti_to_mlds.m"
}

#line 312 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3(
#line 312 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 312 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 312 "rtti_to_mlds.m"
{
#line 312 "rtti_to_mlds.m"
  {
#line 312 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 312 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 312 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_Initializer_8;

#line 312 "rtti_to_mlds.m"
    {
#line 312 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 312 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_Initializer_8));
#line 312 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 312 "rtti_to_mlds.m"
  }
#line 312 "rtti_to_mlds.m"
}

#line 306 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2(
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 306 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 306 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 306 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 306 "rtti_to_mlds.m"
{
#line 306 "rtti_to_mlds.m"
  {
#line 306 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 306 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_RttiId_12;
#line 306 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25;
#line 306 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27;

#line 306 "rtti_to_mlds.m"
    {
#line 306 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv3_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27);
    }
#line 306 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_RttiId_12));
#line 306 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25));
#line 306 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27));
#line 306 "rtti_to_mlds.m"
  }
#line 306 "rtti_to_mlds.m"
}

#line 306 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1(
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 306 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 306 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 306 "rtti_to_mlds.m"
{
#line 306 "rtti_to_mlds.m"
  {
#line 306 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 306 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_RttiId_8;

#line 306 "rtti_to_mlds.m"
    {
#line 306 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_RttiId_8);
    }
#line 306 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_RttiId_8));
#line 306 "rtti_to_mlds.m"
  }
#line 306 "rtti_to_mlds.m"
}

#line 258 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCDecl_8,
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 258 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49,
#line 258 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50)
#line 258 "rtti_to_mlds.m"
{
#line 262 "rtti_to_mlds.m"
  {
#line 262 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 0)));
#line 262 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Version_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 1)));
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Supers_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 2)));
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 0)));
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 1)));
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 2)));
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleSymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 0)));
#line 262 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__ClassName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 1)));
#line 262 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 2)));
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_21;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNamesRttiId_22;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNamesInitializer_24;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIdsRttiId_27;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIdsInitializer_29;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCIdRttiId_32;
#line 262 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__ModuleSymNameStr_33;
#line 262 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumTVars_34;
#line 262 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumMethods_35;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCIdInitializer_36;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SupersInitType_45;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SupersInitializer_46;
#line 262 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumSupers_47;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_48;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_71_71;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_82_82;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_90_90;
#line 262 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_91_91;

#line 266 "rtti_to_mlds.m"
    {
#line 266 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_21);
    }
#line 267 "rtti_to_mlds.m"
    {
#line 267 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TVarNamesRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TVarNamesRttiId_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 267 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TVarNamesRttiId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 267 "rtti_to_mlds.m"
    }
#line 272 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TVarNames_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 269 "rtti_to_mlds.m"
      {
#line 269 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TVarNamesInitType_23;
#line 269 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_53_53;

#line 270 "rtti_to_mlds.m"
        {
#line 270 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 270 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TVarNamesRttiId_22));
#line 270 "rtti_to_mlds.m"
        }
#line 270 "rtti_to_mlds.m"
        {
#line 270 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 270 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TVarNamesInitType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 270 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TVarNamesInitType_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 270 "rtti_to_mlds.m"
        }
#line 271 "rtti_to_mlds.m"
        {
#line 271 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitializer_24 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__TVarNamesInitType_23);
        }
#line 269 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49;
#line 269 "rtti_to_mlds.m"
      }
#line 272 "rtti_to_mlds.m"
    else
#line 273 "rtti_to_mlds.m"
      {
#line 274 "rtti_to_mlds.m"
        {
#line 274 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(ml_backend__rtti_to_mlds__TVarNamesRttiId_22, ml_backend__rtti_to_mlds__TVarNames_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
        }
#line 275 "rtti_to_mlds.m"
        {
#line 275 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitializer_24 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__TVarNamesRttiId_22);
        }
#line 273 "rtti_to_mlds.m"
      }
#line 277 "rtti_to_mlds.m"
    {
#line 277 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MethodIdsRttiId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 277 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MethodIdsRttiId_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 277 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MethodIdsRttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 277 "rtti_to_mlds.m"
    }
#line 282 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__MethodIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 279 "rtti_to_mlds.m"
      {
#line 279 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MethodIdsInitType_28;
#line 279 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_56_56;

#line 280 "rtti_to_mlds.m"
        {
#line 280 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 280 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsRttiId_27));
#line 280 "rtti_to_mlds.m"
        }
#line 280 "rtti_to_mlds.m"
        {
#line 280 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitType_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MethodIdsInitType_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 280 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MethodIdsInitType_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 280 "rtti_to_mlds.m"
        }
#line 281 "rtti_to_mlds.m"
        {
#line 281 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitializer_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__MethodIdsInitType_28);
        }
#line 279 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 279 "rtti_to_mlds.m"
      }
#line 282 "rtti_to_mlds.m"
    else
#line 283 "rtti_to_mlds.m"
      {
#line 284 "rtti_to_mlds.m"
        {
#line 284 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(ml_backend__rtti_to_mlds__MethodIdsRttiId_27, ml_backend__rtti_to_mlds__TCName_15, ml_backend__rtti_to_mlds__MethodIds_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55);
        }
#line 285 "rtti_to_mlds.m"
        {
#line 285 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitializer_29 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__MethodIdsRttiId_27);
        }
#line 283 "rtti_to_mlds.m"
      }
#line 287 "rtti_to_mlds.m"
    {
#line 287 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCIdRttiId_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 287 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCIdRttiId_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 287 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCIdRttiId_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 287 "rtti_to_mlds.m"
    }
#line 288 "rtti_to_mlds.m"
    {
#line 288 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ModuleSymNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ml_backend__rtti_to_mlds__ModuleSymName_18);
    }
#line 289 "rtti_to_mlds.m"
    {
#line 289 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TVarNames_16, &ml_backend__rtti_to_mlds__NumTVars_34);
    }
#line 290 "rtti_to_mlds.m"
    {
#line 290 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ml_backend__rtti_to_mlds__MethodIds_17, &ml_backend__rtti_to_mlds__NumMethods_35);
    }
#line 291 "rtti_to_mlds.m"
    {
#line 291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCIdRttiId_32));
#line 291 "rtti_to_mlds.m"
    }
#line 291 "rtti_to_mlds.m"
    {
#line 291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 291 "rtti_to_mlds.m"
    }
#line 292 "rtti_to_mlds.m"
    {
#line 292 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_61_61 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__ModuleSymNameStr_33);
    }
#line 293 "rtti_to_mlds.m"
    {
#line 293 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_63_63 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__ClassName_19);
    }
#line 294 "rtti_to_mlds.m"
    {
#line 294 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_65_65 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Arity_20);
    }
#line 295 "rtti_to_mlds.m"
    {
#line 295 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_67_67 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumTVars_34);
    }
#line 296 "rtti_to_mlds.m"
    {
#line 296 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_69_69 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumMethods_35);
    }
#line 299 "rtti_to_mlds.m"
    {
#line 299 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 299 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsInitializer_29));
#line 299 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 299 "rtti_to_mlds.m"
    }
#line 297 "rtti_to_mlds.m"
    {
#line 297 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_70_70, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TVarNamesInitializer_24));
#line 297 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_70_70, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_71_71));
#line 297 "rtti_to_mlds.m"
    }
#line 296 "rtti_to_mlds.m"
    {
#line 296 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 296 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 296 "rtti_to_mlds.m"
    }
#line 295 "rtti_to_mlds.m"
    {
#line 295 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_67_67));
#line 295 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 295 "rtti_to_mlds.m"
    }
#line 294 "rtti_to_mlds.m"
    {
#line 294 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 294 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 294 "rtti_to_mlds.m"
    }
#line 293 "rtti_to_mlds.m"
    {
#line 293 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_62_62, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_63_63));
#line 293 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_62_62, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 293 "rtti_to_mlds.m"
    }
#line 292 "rtti_to_mlds.m"
    {
#line 292 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 292 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_60_60, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 292 "rtti_to_mlds.m"
    }
#line 291 "rtti_to_mlds.m"
    {
#line 291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCIdInitializer_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCIdInitializer_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_58_58));
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCIdInitializer_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 291 "rtti_to_mlds.m"
    }
#line 300 "rtti_to_mlds.m"
    {
#line 300 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__TCIdRttiId_32, ml_backend__rtti_to_mlds__TCIdInitializer_36, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73);
    }
#line 303 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Supers_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73;
#line 303 "rtti_to_mlds.m"
    else
#line 304 "rtti_to_mlds.m"
      {
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_106_106;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperRttiIds_39;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperArrayRttiId_42;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ElementType_43;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperArrayInitializer_44;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_40_40;
#line 305 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv5_V_40_40;
#line 305 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76;

#line 306 "rtti_to_mlds.m"
        {
#line 306 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[1]));
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1));
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 306 "rtti_to_mlds.m"
        }
#line 306 "rtti_to_mlds.m"
        {
#line 306 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2));
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 306 "rtti_to_mlds.m"
        }
#line 307 "rtti_to_mlds.m"
        {
#line 307 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_75_75 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 17040 "ml_backend.rtti_to_mlds.c"
        ml_backend__rtti_to_mlds__TypeCtorInfo_106_106 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 305 "rtti_to_mlds.m"
        {
#line 305 "rtti_to_mlds.m"
          mercury__list__map_foldl2_7_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ml_backend__rtti_to_mlds__TypeCtorInfo_106_106, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_74_74, ml_backend__rtti_to_mlds__Supers_14, &ml_backend__rtti_to_mlds__SuperRttiIds_39, ((MR_Box) (ml_backend__rtti_to_mlds__V_75_75)), &ml_backend__rtti_to_mlds__conv5_V_40_40, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76);
        }
#line 305 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_V_40_40);
#line 305 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76);
#line 309 "rtti_to_mlds.m"
        {
#line 309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SuperArrayRttiId_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SuperArrayRttiId_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SuperArrayRttiId_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 309 "rtti_to_mlds.m"
        }
#line 310 "rtti_to_mlds.m"
        {
#line 310 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 310 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_79_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__SuperArrayRttiId_42));
#line 310 "rtti_to_mlds.m"
        }
#line 310 "rtti_to_mlds.m"
        {
#line 310 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ElementType_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 310 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_79_79));
#line 310 "rtti_to_mlds.m"
        }
#line 312 "rtti_to_mlds.m"
        {
#line 312 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 312 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 312 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3));
#line 312 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 312 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_43));
#line 312 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_21));
#line 312 "rtti_to_mlds.m"
        }
#line 311 "rtti_to_mlds.m"
        {
#line 311 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SuperArrayInitializer_44 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_106_106, ml_backend__rtti_to_mlds__V_80_80, ml_backend__rtti_to_mlds__SuperRttiIds_39);
        }
#line 313 "rtti_to_mlds.m"
        {
#line 313 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__SuperArrayRttiId_42, ml_backend__rtti_to_mlds__SuperArrayInitializer_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81);
        }
#line 304 "rtti_to_mlds.m"
      }
#line 317 "rtti_to_mlds.m"
    {
#line 317 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 317 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_82_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsRttiId_27));
#line 317 "rtti_to_mlds.m"
    }
#line 317 "rtti_to_mlds.m"
    {
#line 317 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__SupersInitType_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__SupersInitType_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 317 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__SupersInitType_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_82_82));
#line 317 "rtti_to_mlds.m"
    }
#line 318 "rtti_to_mlds.m"
    {
#line 318 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__SupersInitializer_46 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__SupersInitType_45);
    }
#line 319 "rtti_to_mlds.m"
    {
#line 319 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ml_backend__rtti_to_mlds__Supers_14, &ml_backend__rtti_to_mlds__NumSupers_47);
    }
#line 320 "rtti_to_mlds.m"
    {
#line 320 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 320 "rtti_to_mlds.m"
    }
#line 320 "rtti_to_mlds.m"
    {
#line 320 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 320 "rtti_to_mlds.m"
    }
#line 321 "rtti_to_mlds.m"
    {
#line 321 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_86_86 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__TCIdRttiId_32);
    }
#line 322 "rtti_to_mlds.m"
    {
#line 322 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_88_88 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Version_13);
    }
#line 323 "rtti_to_mlds.m"
    {
#line 323 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_90_90 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSupers_47);
    }
#line 325 "rtti_to_mlds.m"
    {
#line 325 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__SupersInitializer_46));
#line 325 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 325 "rtti_to_mlds.m"
    }
#line 323 "rtti_to_mlds.m"
    {
#line 323 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 323 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_89_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_90_90));
#line 323 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_89_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_91_91));
#line 323 "rtti_to_mlds.m"
    }
#line 322 "rtti_to_mlds.m"
    {
#line 322 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_87_87, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 322 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_87_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 322 "rtti_to_mlds.m"
    }
#line 321 "rtti_to_mlds.m"
    {
#line 321 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 321 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 321 "rtti_to_mlds.m"
    }
#line 320 "rtti_to_mlds.m"
    {
#line 320 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 320 "rtti_to_mlds.m"
    }
#line 326 "rtti_to_mlds.m"
    {
#line 326 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_48, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
#line 326 "rtti_to_mlds.m"
      return;
    }
#line 262 "rtti_to_mlds.m"
  }
#line 258 "rtti_to_mlds.m"
}

#line 173 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1(
#line 173 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 173 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 173 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 173 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 173 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4)
#line 173 "rtti_to_mlds.m"
{
#line 173 "rtti_to_mlds.m"
  {
#line 173 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 173 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_Initializer_10;
#line 173 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13;

#line 173 "rtti_to_mlds.m"
    {
#line 173 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_init_method_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv1_Initializer_10, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13);
    }
#line 173 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_Initializer_10));
#line 173 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13));
#line 173 "rtti_to_mlds.m"
  }
#line 173 "rtti_to_mlds.m"
}

#line 162 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(
#line 162 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_5,
#line 162 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_6,
#line 162 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47,
#line 162 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48)
#line 162 "rtti_to_mlds.m"
{
#line 165 "rtti_to_mlds.m"
  {
#line 165 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 165 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_8;
#line 165 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_9;
#line 165 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;

#line 166 "rtti_to_mlds.m"
    {
#line 166 "rtti_to_mlds.m"
      backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__rtti_to_mlds__RttiData_6, &ml_backend__rtti_to_mlds__RttiId_8);
    }
#line 167 "rtti_to_mlds.m"
    {
#line 167 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 167 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_8));
#line 167 "rtti_to_mlds.m"
    }
#line 167 "rtti_to_mlds.m"
    {
#line 167 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 167 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 167 "rtti_to_mlds.m"
    }
#line 185 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 1))))
#line 193 "rtti_to_mlds.m"
      {
#line 193 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCDecl_25 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 1);

#line 194 "rtti_to_mlds.m"
        {
#line 194 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__TCDecl_25, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 194 "rtti_to_mlds.m"
          return;
        }
#line 193 "rtti_to_mlds.m"
      }
#line 185 "rtti_to_mlds.m"
    else
#line 185 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 2))))
#line 197 "rtti_to_mlds.m"
      {
#line 197 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Instance_26 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 2);

#line 198 "rtti_to_mlds.m"
        {
#line 198 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__Instance_26, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 198 "rtti_to_mlds.m"
          return;
        }
#line 197 "rtti_to_mlds.m"
      }
#line 185 "rtti_to_mlds.m"
    else
#line 185 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 0))))
#line 201 "rtti_to_mlds.m"
      {
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorData_27 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 0);
#line 201 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Version_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 0)));
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeModule_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 1)));
#line 201 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__TypeName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 2)));
#line 201 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__TypeArity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 3)));
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__UnifyUniv_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 4)));
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__CompareUniv_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 5)));
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Flags_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 6)));
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 7)));
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_36;
#line 201 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__TypeModuleName_37;
#line 201 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__NumPtags_38;
#line 201 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__NumFunctors_39;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__FunctorsRttiId_40;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__LayoutRttiId_41;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__FunctorsInfo_42;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__LayoutInfo_43;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__NumberMapInfo_44;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__UnifyInitializer_45;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__CompareInitializer_46;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_71_71;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_72_72;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_73_73;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_78_78;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_81_81;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 201 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_87_87;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 201 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_108;

#line 204 "rtti_to_mlds.m"
        {
#line 204 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiTypeCtor_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 204 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeModule_29));
#line 204 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeName_30));
#line 204 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeArity_31));
#line 204 "rtti_to_mlds.m"
        }
#line 205 "rtti_to_mlds.m"
        {
#line 205 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TypeModuleName_37 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ml_backend__rtti_to_mlds__TypeModule_29);
        }
#line 206 "rtti_to_mlds.m"
        {
#line 206 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__NumPtags_38 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(ml_backend__rtti_to_mlds__TypeCtorDetails_35);
        }
#line 207 "rtti_to_mlds.m"
        {
#line 207 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__NumFunctors_39 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(ml_backend__rtti_to_mlds__TypeCtorDetails_35);
        }
#line 208 "rtti_to_mlds.m"
        {
#line 208 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__FunctorsRttiId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FunctorsRttiId_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_36));
#line 208 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FunctorsRttiId_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 208 "rtti_to_mlds.m"
        }
#line 209 "rtti_to_mlds.m"
        {
#line 209 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__LayoutRttiId_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 209 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__LayoutRttiId_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_36));
#line 209 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__LayoutRttiId_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
#line 209 "rtti_to_mlds.m"
        }
#line 211 "rtti_to_mlds.m"
        {
#line 211 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__RttiTypeCtor_36, ml_backend__rtti_to_mlds__TypeCtorDetails_35, &ml_backend__rtti_to_mlds__FunctorsInfo_42, &ml_backend__rtti_to_mlds__LayoutInfo_43, &ml_backend__rtti_to_mlds__NumberMapInfo_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
        }
#line 218 "rtti_to_mlds.m"
        {
#line 218 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__UnifyUniv_32, &ml_backend__rtti_to_mlds__UnifyInitializer_45, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53);
        }
#line 220 "rtti_to_mlds.m"
        {
#line 220 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__CompareUniv_33, &ml_backend__rtti_to_mlds__CompareInitializer_46, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
        }
#line 223 "rtti_to_mlds.m"
        {
#line 223 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 223 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_8));
#line 223 "rtti_to_mlds.m"
        }
#line 223 "rtti_to_mlds.m"
        {
#line 223 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 223 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 223 "rtti_to_mlds.m"
        }
#line 224 "rtti_to_mlds.m"
        {
#line 224 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_58_58 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__TypeArity_31);
        }
#line 225 "rtti_to_mlds.m"
        {
#line 225 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_60_60 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Version_28);
        }
#line 226 "rtti_to_mlds.m"
        {
#line 226 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_62_62 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumPtags_38);
        }
#line 227 "rtti_to_mlds.m"
        {
#line 227 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_64_64 = ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(ml_backend__rtti_to_mlds__TypeCtorData_27);
        }
#line 230 "rtti_to_mlds.m"
        {
#line 230 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_68_68 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__TypeModuleName_37);
        }
#line 231 "rtti_to_mlds.m"
        {
#line 231 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_70_70 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__TypeName_30);
        }
#line 235 "rtti_to_mlds.m"
        {
#line 235 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 235 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__FunctorsRttiId_40));
#line 235 "rtti_to_mlds.m"
        }
#line 235 "rtti_to_mlds.m"
        {
#line 235 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 235 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 235 "rtti_to_mlds.m"
        }
#line 237 "rtti_to_mlds.m"
        {
#line 237 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__FunctorsInfo_42));
#line 237 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 237 "rtti_to_mlds.m"
        }
#line 235 "rtti_to_mlds.m"
        {
#line 235 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_72_72, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_73_73));
#line 235 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_72_72, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_75_75));
#line 235 "rtti_to_mlds.m"
        }
#line 238 "rtti_to_mlds.m"
        {
#line 238 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 238 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__LayoutRttiId_41));
#line 238 "rtti_to_mlds.m"
        }
#line 238 "rtti_to_mlds.m"
        {
#line 238 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 238 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_79_79, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_80_80));
#line 238 "rtti_to_mlds.m"
        }
#line 240 "rtti_to_mlds.m"
        {
#line 240 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_81_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__LayoutInfo_43));
#line 240 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "rtti_to_mlds.m"
        }
#line 238 "rtti_to_mlds.m"
        {
#line 238 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_78_78, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_79_79));
#line 238 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_78_78, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_81_81));
#line 238 "rtti_to_mlds.m"
        }
#line 241 "rtti_to_mlds.m"
        {
#line 241 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_84_84 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumFunctors_39);
        }
#line 242 "rtti_to_mlds.m"
        {
#line 242 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_87_87 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(ml_backend__rtti_to_mlds__Flags_34);
        }
#line 242 "rtti_to_mlds.m"
        {
#line 242 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_86_86 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_87_87);
        }
#line 251 "rtti_to_mlds.m"
        {
#line 251 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__NumberMapInfo_44));
#line 251 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "rtti_to_mlds.m"
        }
#line 242 "rtti_to_mlds.m"
        {
#line 242 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 242 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 242 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 242 "rtti_to_mlds.m"
        }
#line 241 "rtti_to_mlds.m"
        {
#line 241 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 241 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 241 "rtti_to_mlds.m"
        }
#line 240 "rtti_to_mlds.m"
        {
#line 240 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_77_77, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_78_78));
#line 240 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_77_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 240 "rtti_to_mlds.m"
        }
#line 237 "rtti_to_mlds.m"
        {
#line 237 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_72_72));
#line 237 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 237 "rtti_to_mlds.m"
        }
#line 231 "rtti_to_mlds.m"
        {
#line 231 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 231 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 231 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_71_71));
#line 231 "rtti_to_mlds.m"
        }
#line 230 "rtti_to_mlds.m"
        {
#line 230 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_67_67, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 230 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_67_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 230 "rtti_to_mlds.m"
        }
#line 229 "rtti_to_mlds.m"
        {
#line 229 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__CompareInitializer_46));
#line 229 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_67_67));
#line 229 "rtti_to_mlds.m"
        }
#line 228 "rtti_to_mlds.m"
        {
#line 228 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__UnifyInitializer_45));
#line 228 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 228 "rtti_to_mlds.m"
        }
#line 227 "rtti_to_mlds.m"
        {
#line 227 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_63_63, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 227 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_63_63, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 227 "rtti_to_mlds.m"
        }
#line 226 "rtti_to_mlds.m"
        {
#line 226 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 226 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_63_63));
#line 226 "rtti_to_mlds.m"
        }
#line 225 "rtti_to_mlds.m"
        {
#line 225 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 225 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_59_59, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 225 "rtti_to_mlds.m"
        }
#line 224 "rtti_to_mlds.m"
        {
#line 224 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_58_58));
#line 224 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 224 "rtti_to_mlds.m"
        }
#line 223 "rtti_to_mlds.m"
        {
#line 223 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_108, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 223 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_108, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_57_57));
#line 223 "rtti_to_mlds.m"
        }
#line 252 "rtti_to_mlds.m"
        {
#line 252 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__Initializer_108, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 252 "rtti_to_mlds.m"
          return;
        }
#line 201 "rtti_to_mlds.m"
      }
#line 185 "rtti_to_mlds.m"
    else
#line 185 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 170 "rtti_to_mlds.m"
      {
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__BaseTypeClassInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 4)));
#line 170 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__N2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 1)));
#line 170 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__N3_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 2)));
#line 170 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__N4_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 3)));
#line 170 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__N5_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 4)));
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Methods_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 5)));
#line 170 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__NumExtra_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 0)));
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MethodInitializers_21;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_22;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_95_95;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_97_97;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_98_98;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_99_99;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_100_100;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_101_101;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_102_102;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_103_103;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_104_104;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_105_105;
#line 170 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_106_106;
#line 169 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds___InstanceModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));
#line 169 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds___ClassId_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 2)));
#line 169 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___InstanceStr_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 3)));
#line 173 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96;

#line 173 "rtti_to_mlds.m"
        {
#line 173 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
#line 173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1));
#line 173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_5));
#line 173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__NumExtra_20));
#line 173 "rtti_to_mlds.m"
        }
#line 173 "rtti_to_mlds.m"
        {
#line 173 "rtti_to_mlds.m"
          mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_95_95, ml_backend__rtti_to_mlds__Methods_19, &ml_backend__rtti_to_mlds__MethodInitializers_21, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47)), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96);
        }
#line 173 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96);
#line 176 "rtti_to_mlds.m"
        {
#line 176 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_98_98 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__NumExtra_20);
        }
#line 177 "rtti_to_mlds.m"
        {
#line 177 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_100_100 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N2_15);
        }
#line 178 "rtti_to_mlds.m"
        {
#line 178 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_102_102 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N3_16);
        }
#line 179 "rtti_to_mlds.m"
        {
#line 179 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_104_104 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N4_17);
        }
#line 180 "rtti_to_mlds.m"
        {
#line 180 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_106_106 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N5_18);
        }
#line 181 "rtti_to_mlds.m"
        {
#line 181 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 181 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_105_105, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_106_106));
#line 181 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_105_105, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodInitializers_21));
#line 181 "rtti_to_mlds.m"
        }
#line 179 "rtti_to_mlds.m"
        {
#line 179 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_103_103, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_104_104));
#line 179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_103_103, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_105_105));
#line 179 "rtti_to_mlds.m"
        }
#line 178 "rtti_to_mlds.m"
        {
#line 178 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_101_101, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_102_102));
#line 178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_101_101, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_103_103));
#line 178 "rtti_to_mlds.m"
        }
#line 177 "rtti_to_mlds.m"
        {
#line 177 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_99_99, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_100_100));
#line 177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_99_99, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_101_101));
#line 177 "rtti_to_mlds.m"
        }
#line 176 "rtti_to_mlds.m"
        {
#line 176 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_97_97, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_98_98));
#line 176 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_97_97, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_99_99));
#line 176 "rtti_to_mlds.m"
        }
#line 175 "rtti_to_mlds.m"
        {
#line 175 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 175 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_97_97));
#line 175 "rtti_to_mlds.m"
        }
#line 183 "rtti_to_mlds.m"
        {
#line 183 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__Initializer_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 183 "rtti_to_mlds.m"
          return;
        }
#line 170 "rtti_to_mlds.m"
      }
#line 185 "rtti_to_mlds.m"
    else
#line 185 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 189 "rtti_to_mlds.m"
      {
#line 189 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));

#line 190 "rtti_to_mlds.m"
        {
#line 190 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__PseudoTypeInfo_24, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 190 "rtti_to_mlds.m"
          return;
        }
#line 189 "rtti_to_mlds.m"
      }
#line 185 "rtti_to_mlds.m"
    else
#line 186 "rtti_to_mlds.m"
      {
#line 186 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));

#line 187 "rtti_to_mlds.m"
        {
#line 187 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__TypeInfo_23, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 187 "rtti_to_mlds.m"
          return;
        }
#line 186 "rtti_to_mlds.m"
      }
#line 165 "rtti_to_mlds.m"
  }
#line 162 "rtti_to_mlds.m"
}

#line 111 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
#line 111 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_6,
#line 111 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7,
#line 111 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_8,
#line 111 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 111 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 111 "rtti_to_mlds.m"
{
#line 114 "rtti_to_mlds.m"
  {
#line 114 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_10;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_Context_11;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Exported_12;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Flags_13;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_Type_15;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DefnBody_16;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Defn_17;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Access_24;

#line 119 "rtti_to_mlds.m"
    {
#line 119 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_10);
    }
#line 120 "rtti_to_mlds.m"
    {
#line 120 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_Context_11 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__rtti_to_mlds__Context_10);
    }
#line 123 "rtti_to_mlds.m"
    {
#line 123 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Exported_12 = backend_libs__rtti__rtti_id_is_exported_1_f_0(ml_backend__rtti_to_mlds__RttiId_7);
    }
#line 145 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Exported_12 == (MR_Integer) 0))
#line 147 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Access_24 = (MR_Integer) 2;
#line 145 "rtti_to_mlds.m"
    else
#line 144 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Access_24 = (MR_Integer) 0;
#line 154 "rtti_to_mlds.m"
    {
#line 154 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Flags_13 = ml_backend__mlds__init_decl_flags_6_f_0(ml_backend__rtti_to_mlds__Access_24, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 131 "rtti_to_mlds.m"
    {
#line 131 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_20_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_7));
#line 131 "rtti_to_mlds.m"
    }
#line 131 "rtti_to_mlds.m"
    {
#line 131 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_Type_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_Type_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_Type_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 131 "rtti_to_mlds.m"
    }
#line 132 "rtti_to_mlds.m"
    {
#line 132 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DefnBody_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_Type_15));
#line 132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializer_8));
#line 132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 132 "rtti_to_mlds.m"
    }
#line 133 "rtti_to_mlds.m"
    {
#line 133 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Defn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 133 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Name_6));
#line 133 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_Context_11));
#line 133 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Flags_13));
#line 133 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnBody_16));
#line 133 "rtti_to_mlds.m"
    }
#line 135 "rtti_to_mlds.m"
    {
#line 135 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defn_3_p_0(ml_backend__rtti_to_mlds__Defn_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 135 "rtti_to_mlds.m"
      return;
    }
#line 114 "rtti_to_mlds.m"
  }
#line 111 "rtti_to_mlds.m"
}

#line 104 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
#line 104 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 104 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 104 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 104 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
#line 104 "rtti_to_mlds.m"
{
#line 107 "rtti_to_mlds.m"
  {
#line 107 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 107 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_8;
#line 107 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;

#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_5));
#line 108 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 108 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 108 "rtti_to_mlds.m"
    }
#line 109 "rtti_to_mlds.m"
    {
#line 109 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_8, ml_backend__rtti_to_mlds__RttiId_5, ml_backend__rtti_to_mlds__Initializer_6, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
#line 109 "rtti_to_mlds.m"
      return;
    }
#line 107 "rtti_to_mlds.m"
  }
#line 104 "rtti_to_mlds.m"
}

#line 1754 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
#line 1754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1754 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1754 "rtti_to_mlds.m"
{
#line 1754 "rtti_to_mlds.m"
  {
#line 1754 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1754 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv8_HeadVar__3_37;

#line 1754 "rtti_to_mlds.m"
    {
#line 1754 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1754__2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv8_HeadVar__3_37);
    }
#line 1754 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv8_HeadVar__3_37));
#line 1754 "rtti_to_mlds.m"
  }
#line 1754 "rtti_to_mlds.m"
}

#line 1754 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
#line 1754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1754 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1754 "rtti_to_mlds.m"
{
#line 1754 "rtti_to_mlds.m"
  {
#line 1754 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1754 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1754 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv7_HeadVar__3_41;

#line 1754 "rtti_to_mlds.m"
    {
#line 1754 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1754__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv7_HeadVar__3_41);
    }
#line 1754 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1754 "rtti_to_mlds.m"
      {
#line 1754 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv7_HeadVar__3_41));
#line 1754 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1754 "rtti_to_mlds.m"
      }
#line 1754 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1754 "rtti_to_mlds.m"
  }
#line 1754 "rtti_to_mlds.m"
}

#line 1753 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
#line 1753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1753 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1753 "rtti_to_mlds.m"
{
#line 1753 "rtti_to_mlds.m"
  {
#line 1753 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1753 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_HeadVar__2_33;

#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv6_HeadVar__2_33);
    }
#line 1753 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_HeadVar__2_33));
#line 1753 "rtti_to_mlds.m"
  }
#line 1753 "rtti_to_mlds.m"
}

#line 1749 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
#line 1749 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1749 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1749 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1749 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1749 "rtti_to_mlds.m"
{
#line 1749 "rtti_to_mlds.m"
  {
#line 1749 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1749 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16;

#line 1749 "rtti_to_mlds.m"
    {
#line 1749 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16);
    }
#line 1749 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16));
#line 1749 "rtti_to_mlds.m"
  }
#line 1749 "rtti_to_mlds.m"
}

#line 1748 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1748 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 1748 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_5)
#line 1748 "rtti_to_mlds.m"
{
#line 1748 "rtti_to_mlds.m"
  {
#line 1748 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1748 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20;
#line 1748 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22;

#line 1748 "rtti_to_mlds.m"
    {
#line 1748 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_4), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22);
    }
#line 1748 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20));
#line 1748 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_5 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22));
#line 1748 "rtti_to_mlds.m"
  }
#line 1748 "rtti_to_mlds.m"
}

#line 46 "rtti_to_mlds.m"
MR_Word MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(
#line 46 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defns_3)
#line 46 "rtti_to_mlds.m"
{
#line 1745 "rtti_to_mlds.m"
  {
#line 1745 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdDefns_4;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_19_19 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_25_25;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_26_26;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_31_31;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_35_35;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__NameMap_6;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RevOrdSets_7;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdSets_8;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdLists_9;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1745 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1748 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12;
#line 1748 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv2_NameMap_6;
#line 1749 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15;

#line 1747 "rtti_to_mlds.m"
    {
#line 1747 "rtti_to_mlds.m"
      mercury__digraph__init_1_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10);
    }
#line 18432 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 1748 "rtti_to_mlds.m"
    {
#line 1748 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = mercury__map__init_0_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, ml_backend__rtti_to_mlds__TypeCtorInfo_25_25);
    }
#line 18439 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_26_26 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0];
#line 1748 "rtti_to_mlds.m"
    {
#line 1748 "rtti_to_mlds.m"
      mercury__list__foldl2_6_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_25_25, ml_backend__rtti_to_mlds__TypeInfo_26_26, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[0], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[4], ml_backend__rtti_to_mlds__Defns_3, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12, ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13)), &ml_backend__rtti_to_mlds__conv2_NameMap_6);
    }
#line 1748 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12);
#line 1748 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__NameMap_6 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_NameMap_6);
#line 1749 "rtti_to_mlds.m"
    {
#line 1749 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_25_25, ml_backend__rtti_to_mlds__TypeInfo_26_26, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[5], ml_backend__rtti_to_mlds__Defns_3, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15);
    }
#line 1749 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15);
#line 1750 "rtti_to_mlds.m"
    {
#line 1750 "rtti_to_mlds.m"
      mercury__digraph__atsort_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15, &ml_backend__rtti_to_mlds__RevOrdSets_7);
    }
#line 18462 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_31_31 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[1];
#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      mercury__list__reverse_2_p_0(ml_backend__rtti_to_mlds__TypeInfo_31_31, ml_backend__rtti_to_mlds__RevOrdSets_7, &ml_backend__rtti_to_mlds__OrdSets_8);
    }
#line 18469 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_35_35 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[2];
#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_31_31, ml_backend__rtti_to_mlds__TypeInfo_35_35, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[6], ml_backend__rtti_to_mlds__OrdSets_8, &ml_backend__rtti_to_mlds__OrdLists_9);
    }
#line 1754 "rtti_to_mlds.m"
    {
#line 1754 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1754 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[1]));
#line 1754 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4));
#line 1754 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1754 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__NameMap_6));
#line 1754 "rtti_to_mlds.m"
    }
#line 1754 "rtti_to_mlds.m"
    {
#line 1754 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1754 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[2]));
#line 1754 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5));
#line 1754 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1754 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 1754 "rtti_to_mlds.m"
    }
#line 1754 "rtti_to_mlds.m"
    {
#line 1754 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_35_35, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[3], ml_backend__rtti_to_mlds__V_17_17, ml_backend__rtti_to_mlds__OrdLists_9, &ml_backend__rtti_to_mlds__OrdDefns_4);
    }
#line 1745 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__OrdDefns_4;
#line 1745 "rtti_to_mlds.m"
  }
#line 46 "rtti_to_mlds.m"
}

#line 36 "rtti_to_mlds.m"
void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(
#line 36 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_5,
#line 36 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_6,
#line 36 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 36 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
#line 36 "rtti_to_mlds.m"
{
#line 93 "rtti_to_mlds.m"
  {
#line 93 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 88 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 88 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_8_8;

#line 88 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 88 "rtti_to_mlds.m"
      {
#line 88 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));
#line 88 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_11_11)) == (MR_mktag((MR_Integer) 3)));
#line 88 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 88 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, (MR_Integer) 0)));
#line 88 "rtti_to_mlds.m"
      }
#line 93 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 93 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9;
#line 93 "rtti_to_mlds.m"
    else
#line 94 "rtti_to_mlds.m"
      {
#line 94 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__RttiData_6, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
#line 94 "rtti_to_mlds.m"
        return;
      }
#line 93 "rtti_to_mlds.m"
  }
#line 36 "rtti_to_mlds.m"
}

#line 85 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1(
#line 85 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 85 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 85 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 85 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 85 "rtti_to_mlds.m"
{
#line 85 "rtti_to_mlds.m"
  {
#line 85 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 85 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10;

#line 85 "rtti_to_mlds.m"
    {
#line 85 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10);
    }
#line 85 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10));
#line 85 "rtti_to_mlds.m"
  }
#line 85 "rtti_to_mlds.m"
}

#line 34 "rtti_to_mlds.m"
void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0(
#line 34 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_5,
#line 34 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_6,
#line 34 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_8,
#line 34 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_9)
#line 34 "rtti_to_mlds.m"
{
#line 84 "rtti_to_mlds.m"
  {
#line 84 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 84 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_10_10;
#line 85 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9;

#line 85 "rtti_to_mlds.m"
    {
#line 85 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 85 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 85 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1));
#line 85 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 85 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_5));
#line 85 "rtti_to_mlds.m"
    }
#line 85 "rtti_to_mlds.m"
    {
#line 85 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_10_10, ml_backend__rtti_to_mlds__RttiDatas_6, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_8)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9);
    }
#line 85 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_9 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9);
#line 84 "rtti_to_mlds.m"
  }
#line 34 "rtti_to_mlds.m"
}

void mercury__ml_backend__rtti_to_mlds__init(void)
{
}

void mercury__ml_backend__rtti_to_mlds__init_type_tables(void)
{
}

void mercury__ml_backend__rtti_to_mlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.rtti_to_mlds. */
