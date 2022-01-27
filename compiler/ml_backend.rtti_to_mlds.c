/*
** Automatically generated from `rtti_to_mlds.m'
** by the Mercury compiler,
** version rotd-2013-10-01, configured for x86_64-apple-darwin12.4.0.
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
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



#line 1002 "rtti_to_mlds.m"
struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s {
#line 1002 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11;
#line 1021 "rtti_to_mlds.m"
  MR_bool ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 1010 "rtti_to_mlds.m"
  jmp_buf ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 1010 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26;
#line 1010 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26;
#line 1002 "rtti_to_mlds.m"
};

#line 747 "rtti_to_mlds.m"
struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s {
#line 750 "rtti_to_mlds.m"
  MR_bool ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded;
#line 750 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100;
#line 750 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17;
#line 755 "rtti_to_mlds.m"
  jmp_buf ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0;
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104;
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42;
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103;
#line 755 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103;
#line 747 "rtti_to_mlds.m"
};


#line 182 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 185 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 188 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 191 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 194 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 197 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 200 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

#line 203 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

#line 206 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

#line 209 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

#line 212 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

#line 215 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

#line 218 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 221 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 224 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

#line 1495 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1495 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1495 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7);

#line 1425 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1425 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1425 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7);

#line 1017 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
#line 1017 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1017 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1017 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1017 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1017 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4);

#line 1010 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
#line 1010 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1010 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
#line 1010 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1010 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
#line 1010 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1010 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
#line 1010 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1002 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
#line 1002 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 1002 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_10,
#line 1002 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfos_11,
#line 1002 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HaveArgLocns_12,
#line 1002 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20,
#line 1002 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21);

#line 992 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
#line 992 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 992 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 993 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
#line 993 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 993 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 987 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
#line 987 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 987 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 987 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeNames_10,
#line 987 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 987 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 897 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1(
#line 897 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 897 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 891 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(
#line 891 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 891 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 891 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locns_10,
#line 891 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
#line 891 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);

#line 713 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 713 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 700 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 700 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1285 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1285__1_2_p_0(
#line 1285 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_23,
#line 1285 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_24);

#line 1208 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1208__1_2_p_0(
#line 1208 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_24,
#line 1208 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_25);

#line 1173 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1173__1_2_p_0(
#line 1173 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4,
#line 1173 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ptag_11);

#line 992 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__992__1_3_f_0(
#line 992 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_19,
#line 992 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_23,
#line 992 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_26);

#line 1752 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__2_3_p_0(
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_18,
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_36,
#line 1752 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_37);

#line 1752 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__1_3_p_0(
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameMap_6,
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_40,
#line 1752 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_41);

#line 1751 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1751__1_2_p_0(
#line 1751 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_32,
#line 1751 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_33);

#line 755 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeInfo_for_T_9,
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_1,
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2);

#line 1838 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(
#line 1838 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1838 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lval_6,
#line 1838 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17,
#line 1838 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);

#line 1806 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
#line 1806 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1806 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Rval_6,
#line 1806 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1806 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);

#line 1800 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1800 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1800 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1800 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1788 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
#line 1788 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1788 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 1788 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
#line 1788 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);

#line 1773 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
#line 1773 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_4,
#line 1773 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15,
#line 1773 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16);

#line 1754 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_6,
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1754 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20,
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21,
#line 1754 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22);

#line 1733 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
#line 1733 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorData_3);

#line 1728 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
#line 1728 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locn_3);

#line 1700 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
#line 1700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_2);

#line 1631 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(
#line 1631 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
#line 1631 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_9,
#line 1631 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcId_10,
#line 1631 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ClosureKind_11,
#line 1631 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_12,
#line 1631 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1631 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);

#line 1608 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(
#line 1608 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1608 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcIdUniv_7,
#line 1608 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1608 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1608 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1588 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_6_p_0(
#line 1588 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1588 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_8,
#line 1588 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcLabel_9,
#line 1588 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
#line 1588 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1588 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1352 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3(
#line 1352 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1352 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1568 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2(
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1568 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1567 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_1(
#line 1567 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1567 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1562 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(
#line 1562 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1562 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiDatas_7,
#line 1562 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1562 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1562 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1547 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(
#line 1547 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1547 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiData_7,
#line 1547 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1547 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 1547 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);

#line 1434 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
#line 1434 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1434 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1434 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7);

#line 1416 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
#line 1416 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1416 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1416 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiName_7);

#line 1406 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
#line 1406 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1406 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2);

#line 1358 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
#line 1358 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1358 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1358 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_7);

#line 1352 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
#line 1352 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1352 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1348 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
#line 1348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Type_5,
#line 1348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_7);

#line 1329 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
#line 1329 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1329 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1325 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
#line 1325 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5,
#line 1325 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_6,
#line 1325 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
#line 1325 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11);

#line 1295 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(
#line 1295 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1295 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1295 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_7);

#line 1288 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2(
#line 1288 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1288 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1285 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1(
#line 1285 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1285 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1285 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1278 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(
#line 1278 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1278 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1278 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1278 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16,
#line 1278 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17);

#line 1273 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1(
#line 1273 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1273 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1267 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(
#line 1267 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1267 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1267 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResAddrs_8,
#line 1267 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1267 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1260 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3(
#line 1260 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1260 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1225 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2(
#line 1225 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1225 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1224 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1(
#line 1224 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1224 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1218 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResFunctors_9,
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuByPtag_10,
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1218 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1211 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2(
#line 1211 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1211 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1208 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1(
#line 1208 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1208 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1208 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1201 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(
#line 1201 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1201 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1201 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1201 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
#line 1201 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1194 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
#line 1194 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1194 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1186 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
#line 1186 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1186 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1186 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1186 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 1186 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 1173 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1(
#line 1173 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg);

#line 1166 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(
#line 1166 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1166 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_2,
#line 1166 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1166 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4);

#line 1130 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
#line 1130 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1130 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1130 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1130 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1123 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
#line 1123 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1123 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1123 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PtagMap_8,
#line 1123 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21,
#line 1123 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22);

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1116 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
#line 1116 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1116 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1108 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
#line 1108 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1108 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1108 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_8,
#line 1108 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1108 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1101 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
#line 1101 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1101 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1093 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
#line 1093 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1093 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1093 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8,
#line 1093 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1093 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1086 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
#line 1086 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1086 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1078 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
#line 1078 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1078 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1078 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByName_8,
#line 1078 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1078 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1071 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1(
#line 1071 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1071 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1063 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(
#line 1063 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1063 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1063 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByValue_8,
#line 1063 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1063 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1025 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(
#line 1025 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 1025 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfo_7,
#line 1025 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__ArgLocnInitializer_8,
#line 1025 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__PrevOffset_9,
#line 1025 "rtti_to_mlds.m"
  MR_Integer * ml_backend__rtti_to_mlds__NextPrevOffset_10);

#line 979 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0_1(
#line 979 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 979 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 974 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0(
#line 974 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 974 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 974 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 974 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_10,
#line 974 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 974 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 957 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3(
#line 957 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 957 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 949 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2(
#line 949 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 949 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 949 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 949 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 949 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 949 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 949 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 950 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1(
#line 950 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 950 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 950 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 950 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 931 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(
#line 931 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 931 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 931 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 931 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistInfo_10,
#line 931 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30,
#line 931 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31);

#line 924 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
#line 924 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 924 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_7,
#line 924 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 924 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 924 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10);

#line 915 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0_1(
#line 915 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 915 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 902 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MakeRttiId_10,
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Constraint_11,
#line 902 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_12,
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24,
#line 902 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25,
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26,
#line 902 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27);

#line 875 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
#line 875 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_4,
#line 875 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5);

#line 858 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(
#line 858 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 858 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 858 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_8,
#line 858 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 858 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 754 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_2(
#line 754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 753 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_1(
#line 753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(
#line 755 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5(
#line 755 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(
#line 755 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(
#line 755 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 747 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(
#line 747 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 747 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 747 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuFunctor_8,
#line 747 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38,
#line 747 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39);

#line 743 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0_1(
#line 743 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 743 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 729 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(
#line 729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NotagFunctorDesc_8,
#line 729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 729 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 713 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_7,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 713 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 700 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_6,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 700 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 656 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4(
#line 656 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 656 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 656 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 656 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 622 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3(
#line 622 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 622 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 622 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 622 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 605 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2(
#line 605 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 605 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 605 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 605 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 640 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1(
#line 640 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 640 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 640 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 640 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 594 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(
#line 594 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 594 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
#line 594 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_11,
#line 594 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__FunctorInitializer_12,
#line 594 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__LayoutInitializer_13,
#line 594 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__NumberMapInitializer_14,
#line 594 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43,
#line 594 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);

#line 549 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6(
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 549 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 548 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_5(
#line 548 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 548 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 546 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_4(
#line 546 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 546 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 519 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3(
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 519 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 518 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_2(
#line 518 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 518 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 516 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_1(
#line 516 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 516 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 500 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8,
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34,
#line 500 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);

#line 454 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6(
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 454 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 453 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_5(
#line 453 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 453 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 452 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_4(
#line 452 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 452 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 425 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3(
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 425 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 424 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_2(
#line 424 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 424 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 423 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_1(
#line 423 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 423 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 408 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeInfo_8,
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33,
#line 408 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);

#line 399 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
#line 399 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 399 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_7,
#line 399 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 399 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 399 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10);

#line 385 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4(
#line 385 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 385 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 381 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3(
#line 381 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 381 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 381 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 381 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 381 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 381 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 381 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 382 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2(
#line 382 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 382 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 382 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 382 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 375 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_1(
#line 375 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 375 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 359 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Instance_8,
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31,
#line 359 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32);

#line 346 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
#line 346 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_4,
#line 346 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodId_5);

#line 343 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1(
#line 343 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 343 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 339 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(
#line 339 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 339 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_7,
#line 339 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodIds_8,
#line 339 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 339 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);

#line 336 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1(
#line 336 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 336 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 332 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(
#line 332 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 332 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Names_6,
#line 332 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 332 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);

#line 326 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
#line 326 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_5,
#line 326 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_6,
#line 326 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_7,
#line 326 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_8);

#line 309 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3(
#line 309 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 309 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 303 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2(
#line 303 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 303 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 303 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 303 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 303 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 303 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 303 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 304 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1(
#line 304 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 304 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 304 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 304 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 256 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCDecl_8,
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49,
#line 256 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);

#line 171 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1(
#line 171 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 171 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 171 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 171 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 171 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4);

#line 160 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(
#line 160 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_5,
#line 160 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_6,
#line 160 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47,
#line 160 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);

#line 109 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
#line 109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_6,
#line 109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7,
#line 109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_8,
#line 109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 109 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 102 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
#line 102 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 102 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 102 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 102 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);

#line 1752 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1752 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1752 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1752 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1751 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
#line 1751 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1751 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1751 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1747 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1747 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1746 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
#line 1746 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1746 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1746 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1746 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1746 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 1746 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_5);

#line 83 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1(
#line 83 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 83 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 83 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 83 "rtti_to_mlds.m"
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_ctor_0)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0)),
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



#line 2630 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2638 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2647 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2655 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2663 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2673 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2681 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

#line 2692 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
  }
};

#line 2700 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2708 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

#line 2717 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2726 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2734 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2743 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2751 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

#line 1495 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1495 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1495 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7)
#line 1495 "rtti_to_mlds.m"
{
#line 1497 "rtti_to_mlds.m"
  {
#line 1497 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1497 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Rval_8;
#line 1497 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_11;
#line 1497 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_17;
#line 1497 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_18;
#line 1497 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1497 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;

#line 1501 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1541 "rtti_to_mlds.m"
      {
#line 1541 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
        {
#line 1543 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_31);
        }
#line 1541 "rtti_to_mlds.m"
      }
#line 1501 "rtti_to_mlds.m"
    else
#line 1501 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1541 "rtti_to_mlds.m"
        {
#line 1541 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds___ClassName_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds___Arity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_41);
          }
#line 1541 "rtti_to_mlds.m"
        }
#line 1501 "rtti_to_mlds.m"
      else
#line 1501 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1541 "rtti_to_mlds.m"
          {
#line 1541 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
            {
#line 1543 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_46);
            }
#line 1541 "rtti_to_mlds.m"
          }
#line 1501 "rtti_to_mlds.m"
        else
#line 1501 "rtti_to_mlds.m"
          if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1541 "rtti_to_mlds.m"
            {
#line 1541 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
              {
#line 1543 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_51);
              }
#line 1541 "rtti_to_mlds.m"
            }
#line 1501 "rtti_to_mlds.m"
          else
#line 1501 "rtti_to_mlds.m"
            if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1541 "rtti_to_mlds.m"
              {
#line 1541 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__ModuleName_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                MR_String ml_backend__rtti_to_mlds___ClassName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                MR_Integer ml_backend__rtti_to_mlds___Arity_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                {
#line 1543 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_56);
                }
#line 1541 "rtti_to_mlds.m"
              }
#line 1501 "rtti_to_mlds.m"
            else
#line 1501 "rtti_to_mlds.m"
              if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 1))))
#line 1499 "rtti_to_mlds.m"
                {
#line 1499 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)));
#line 1499 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 1)));

#line 1500 "rtti_to_mlds.m"
                  {
#line 1500 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_9);
                  }
#line 1499 "rtti_to_mlds.m"
                }
#line 1501 "rtti_to_mlds.m"
              else
#line 1501 "rtti_to_mlds.m"
                if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 2))))
#line 1541 "rtti_to_mlds.m"
                  {
#line 1541 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__ModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                    MR_String ml_backend__rtti_to_mlds___ClassName_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                    MR_Integer ml_backend__rtti_to_mlds___Arity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                    {
#line 1543 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_36);
                    }
#line 1541 "rtti_to_mlds.m"
                  }
#line 1501 "rtti_to_mlds.m"
                else
#line 1501 "rtti_to_mlds.m"
                  if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1541 "rtti_to_mlds.m"
                    {
#line 1541 "rtti_to_mlds.m"
                      MR_Word ml_backend__rtti_to_mlds__ModuleName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                      MR_String ml_backend__rtti_to_mlds___ClassName_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                      MR_Integer ml_backend__rtti_to_mlds___Arity_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                      {
#line 1543 "rtti_to_mlds.m"
                        ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_61);
                      }
#line 1541 "rtti_to_mlds.m"
                    }
#line 1501 "rtti_to_mlds.m"
                  else
#line 1501 "rtti_to_mlds.m"
                    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1541 "rtti_to_mlds.m"
                      {
#line 1541 "rtti_to_mlds.m"
                        MR_Word ml_backend__rtti_to_mlds__ModuleName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                        MR_String ml_backend__rtti_to_mlds___ClassName_67 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                        MR_Integer ml_backend__rtti_to_mlds___Arity_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                        {
#line 1543 "rtti_to_mlds.m"
                          ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_66);
                        }
#line 1541 "rtti_to_mlds.m"
                      }
#line 1501 "rtti_to_mlds.m"
                    else
#line 1501 "rtti_to_mlds.m"
                      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1541 "rtti_to_mlds.m"
                        {
#line 1541 "rtti_to_mlds.m"
                          MR_Word ml_backend__rtti_to_mlds__ModuleName_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                          MR_String ml_backend__rtti_to_mlds___ClassName_72 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                          MR_Integer ml_backend__rtti_to_mlds___Arity_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                          {
#line 1543 "rtti_to_mlds.m"
                            ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_71);
                          }
#line 1541 "rtti_to_mlds.m"
                        }
#line 1501 "rtti_to_mlds.m"
                      else
#line 1501 "rtti_to_mlds.m"
                        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1541 "rtti_to_mlds.m"
                          {
#line 1541 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                            MR_String ml_backend__rtti_to_mlds___ClassName_77 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                            MR_Integer ml_backend__rtti_to_mlds___Arity_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                            {
#line 1543 "rtti_to_mlds.m"
                              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_76);
                            }
#line 1541 "rtti_to_mlds.m"
                          }
#line 1501 "rtti_to_mlds.m"
                        else
#line 1541 "rtti_to_mlds.m"
                          {
#line 1541 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                            MR_String ml_backend__rtti_to_mlds___ClassName_82 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                            MR_Integer ml_backend__rtti_to_mlds___Arity_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                            {
#line 1543 "rtti_to_mlds.m"
                              ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_81);
                            }
#line 1541 "rtti_to_mlds.m"
                          }
#line 1535 "rtti_to_mlds.m"
    {
#line 1535 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 1535 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_7));
#line 1535 "rtti_to_mlds.m"
    }
#line 1535 "rtti_to_mlds.m"
    {
#line 1535 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1535 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 1535 "rtti_to_mlds.m"
    }
#line 1536 "rtti_to_mlds.m"
    {
#line 1536 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_11));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_17));
#line 1536 "rtti_to_mlds.m"
    }
#line 1537 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_18);
#line 1537 "rtti_to_mlds.m"
    {
#line 1537 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 1537 "rtti_to_mlds.m"
    }
#line 1497 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Rval_8;
#line 1497 "rtti_to_mlds.m"
  }
#line 1495 "rtti_to_mlds.m"
}

#line 1425 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1425 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1425 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7)
#line 1425 "rtti_to_mlds.m"
{
#line 1428 "rtti_to_mlds.m"
  {
#line 1428 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1428 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1428 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;
#line 1428 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_15;
#line 1428 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_21;
#line 1428 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 1428 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1428 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 1501 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1541 "rtti_to_mlds.m"
      {
#line 1541 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds___ClassName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
        {
#line 1543 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_35);
        }
#line 1541 "rtti_to_mlds.m"
      }
#line 1501 "rtti_to_mlds.m"
    else
#line 1501 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1541 "rtti_to_mlds.m"
        {
#line 1541 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds___ClassName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds___Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
          {
#line 1543 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_45);
          }
#line 1541 "rtti_to_mlds.m"
        }
#line 1501 "rtti_to_mlds.m"
      else
#line 1501 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1541 "rtti_to_mlds.m"
          {
#line 1541 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
            {
#line 1543 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_50);
            }
#line 1541 "rtti_to_mlds.m"
          }
#line 1501 "rtti_to_mlds.m"
        else
#line 1501 "rtti_to_mlds.m"
          if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1541 "rtti_to_mlds.m"
            {
#line 1541 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
              {
#line 1543 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_55);
              }
#line 1541 "rtti_to_mlds.m"
            }
#line 1501 "rtti_to_mlds.m"
          else
#line 1501 "rtti_to_mlds.m"
            if ((ml_backend__rtti_to_mlds__TCRttiName_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1541 "rtti_to_mlds.m"
              {
#line 1541 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                MR_String ml_backend__rtti_to_mlds___ClassName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                MR_Integer ml_backend__rtti_to_mlds___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                {
#line 1543 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_60);
                }
#line 1541 "rtti_to_mlds.m"
              }
#line 1501 "rtti_to_mlds.m"
            else
#line 1501 "rtti_to_mlds.m"
              if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 1))))
#line 1499 "rtti_to_mlds.m"
                {
#line 1499 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)));
#line 1499 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 1)));

#line 1500 "rtti_to_mlds.m"
                  {
#line 1500 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_13);
                  }
#line 1499 "rtti_to_mlds.m"
                }
#line 1501 "rtti_to_mlds.m"
              else
#line 1501 "rtti_to_mlds.m"
                if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 2))))
#line 1541 "rtti_to_mlds.m"
                  {
#line 1541 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                    MR_String ml_backend__rtti_to_mlds___ClassName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                    MR_Integer ml_backend__rtti_to_mlds___Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                    {
#line 1543 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_40);
                    }
#line 1541 "rtti_to_mlds.m"
                  }
#line 1501 "rtti_to_mlds.m"
                else
#line 1501 "rtti_to_mlds.m"
                  if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1541 "rtti_to_mlds.m"
                    {
#line 1541 "rtti_to_mlds.m"
                      MR_Word ml_backend__rtti_to_mlds__ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                      MR_String ml_backend__rtti_to_mlds___ClassName_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                      MR_Integer ml_backend__rtti_to_mlds___Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                      {
#line 1543 "rtti_to_mlds.m"
                        ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_65);
                      }
#line 1541 "rtti_to_mlds.m"
                    }
#line 1501 "rtti_to_mlds.m"
                  else
#line 1501 "rtti_to_mlds.m"
                    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1541 "rtti_to_mlds.m"
                      {
#line 1541 "rtti_to_mlds.m"
                        MR_Word ml_backend__rtti_to_mlds__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                        MR_String ml_backend__rtti_to_mlds___ClassName_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                        MR_Integer ml_backend__rtti_to_mlds___Arity_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                        {
#line 1543 "rtti_to_mlds.m"
                          ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_70);
                        }
#line 1541 "rtti_to_mlds.m"
                      }
#line 1501 "rtti_to_mlds.m"
                    else
#line 1501 "rtti_to_mlds.m"
                      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1541 "rtti_to_mlds.m"
                        {
#line 1541 "rtti_to_mlds.m"
                          MR_Word ml_backend__rtti_to_mlds__ModuleName_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                          MR_String ml_backend__rtti_to_mlds___ClassName_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                          MR_Integer ml_backend__rtti_to_mlds___Arity_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                          {
#line 1543 "rtti_to_mlds.m"
                            ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_75);
                          }
#line 1541 "rtti_to_mlds.m"
                        }
#line 1501 "rtti_to_mlds.m"
                      else
#line 1501 "rtti_to_mlds.m"
                        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1541 "rtti_to_mlds.m"
                          {
#line 1541 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                            MR_String ml_backend__rtti_to_mlds___ClassName_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                            MR_Integer ml_backend__rtti_to_mlds___Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                            {
#line 1543 "rtti_to_mlds.m"
                              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_80);
                            }
#line 1541 "rtti_to_mlds.m"
                          }
#line 1501 "rtti_to_mlds.m"
                        else
#line 1541 "rtti_to_mlds.m"
                          {
#line 1541 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__ModuleName_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                            MR_String ml_backend__rtti_to_mlds___ClassName_86 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                            MR_Integer ml_backend__rtti_to_mlds___Arity_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                            {
#line 1543 "rtti_to_mlds.m"
                              ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_85);
                            }
#line 1541 "rtti_to_mlds.m"
                          }
#line 1535 "rtti_to_mlds.m"
    {
#line 1535 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 1535 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_7));
#line 1535 "rtti_to_mlds.m"
    }
#line 1535 "rtti_to_mlds.m"
    {
#line 1535 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1535 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 1535 "rtti_to_mlds.m"
    }
#line 1536 "rtti_to_mlds.m"
    {
#line 1536 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_15));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_21));
#line 1536 "rtti_to_mlds.m"
    }
#line 1537 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 1537 "rtti_to_mlds.m"
    {
#line 1537 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1537 "rtti_to_mlds.m"
    }
#line 1428 "rtti_to_mlds.m"
    {
#line 1428 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_8_8));
#line 1428 "rtti_to_mlds.m"
    }
#line 1428 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1428 "rtti_to_mlds.m"
  }
#line 1425 "rtti_to_mlds.m"
}

#line 1017 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
#line 1017 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1017 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1017 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1017 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1017 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4)
#line 1017 "rtti_to_mlds.m"
{
#line 1017 "rtti_to_mlds.m"
  {
#line 1017 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1017 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8;
#line 1017 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10;

#line 1017 "rtti_to_mlds.m"
    {
#line 1017 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8, ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10);
    }
#line 1017 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8));
#line 1017 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10));
#line 1017 "rtti_to_mlds.m"
  }
#line 1017 "rtti_to_mlds.m"
}

#line 1010 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
#line 1010 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1010 "rtti_to_mlds.m"
{
#line 1010 "rtti_to_mlds.m"
  {
#line 1010 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1010 "rtti_to_mlds.m"
    MR_builtin_longjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 1010 "rtti_to_mlds.m"
  }
#line 1010 "rtti_to_mlds.m"
}

#line 1010 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
#line 1010 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1010 "rtti_to_mlds.m"
{
#line 1010 "rtti_to_mlds.m"
  {
#line 1010 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1010 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26 = ((MR_Word) (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26);
#line 1010 "rtti_to_mlds.m"
    {
#line 1010 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(ml_backend__rtti_to_mlds__env_ptr);
#line 1010 "rtti_to_mlds.m"
      return;
    }
#line 1010 "rtti_to_mlds.m"
  }
#line 1010 "rtti_to_mlds.m"
}

#line 1010 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
#line 1010 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1010 "rtti_to_mlds.m"
{
#line 1010 "rtti_to_mlds.m"
  {
#line 1010 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1010 "rtti_to_mlds.m"
    {
#line 1011 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 2)));
#line 1011 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 0)));
#line 1011 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 1)));

#line 1011 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (ml_backend__rtti_to_mlds__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1011 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 1011 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1011 "rtti_to_mlds.m"
        {
#line 1011 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(ml_backend__rtti_to_mlds__env_ptr);
#line 1011 "rtti_to_mlds.m"
          return;
        }
#line 1010 "rtti_to_mlds.m"
    }
#line 1010 "rtti_to_mlds.m"
  }
#line 1010 "rtti_to_mlds.m"
}

#line 1010 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
#line 1010 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1010 "rtti_to_mlds.m"
{
#line 1010 "rtti_to_mlds.m"
  {
#line 1010 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1010 "rtti_to_mlds.m"
    if (MR_builtin_setjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 1010 "rtti_to_mlds.m"
      {
#line 1010 "rtti_to_mlds.m"
        {
#line 1010 "rtti_to_mlds.m"
          {
#line 1010 "rtti_to_mlds.m"
            mercury__list__member_2_p_1((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, &(ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3, ml_backend__rtti_to_mlds__env_ptr);
          }
#line 1010 "rtti_to_mlds.m"
        }
#line 1010 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 1010 "rtti_to_mlds.m"
      }
#line 1010 "rtti_to_mlds.m"
    else
#line 1010 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 1010 "rtti_to_mlds.m"
  }
#line 1010 "rtti_to_mlds.m"
}

#line 1002 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
#line 1002 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 1002 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_10,
#line 1002 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfos_11,
#line 1002 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HaveArgLocns_12,
#line 1002 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20,
#line 1002 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21)
#line 1002 "rtti_to_mlds.m"
{
#line 1002 "rtti_to_mlds.m"
  {
#line 1002 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s ml_backend__rtti_to_mlds__env;

#line 1002 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11 = ml_backend__rtti_to_mlds__ArgInfos_11;
#line 1010 "rtti_to_mlds.m"
    {
#line 1010 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(&ml_backend__rtti_to_mlds__env);
    }
#line 1021 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1014 "rtti_to_mlds.m"
      {
#line 1014 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_15;
#line 1014 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 1014 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ArgLocnInitializers_17;
#line 1014 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_19;
#line 1014 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1014 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_42;
#line 1014 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 1017 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Offset_18;
#line 1017 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv3__Offset_18;

#line 1014 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HaveArgLocns_12 = (MR_Integer) 1;
#line 1015 "rtti_to_mlds.m"
        {
#line 1015 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1015 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1015 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_10));
#line 1015 "rtti_to_mlds.m"
        }
#line 1016 "rtti_to_mlds.m"
        {
#line 1016 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1016 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
#line 1016 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_15));
#line 1016 "rtti_to_mlds.m"
        }
#line 1017 "rtti_to_mlds.m"
        {
#line 1017 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[7]));
#line 1017 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5));
#line 1017 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1017 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 1017 "rtti_to_mlds.m"
        }
#line 1017 "rtti_to_mlds.m"
        {
#line 1017 "rtti_to_mlds.m"
          mercury__list__map_foldl_5_p_1((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__V_23_23, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, &ml_backend__rtti_to_mlds__ArgLocnInitializers_17, ((MR_Box) ((MR_Integer) -1)), &ml_backend__rtti_to_mlds__conv3__Offset_18);
        }
#line 1017 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds___Offset_18 = ((MR_Integer) ml_backend__rtti_to_mlds__conv3__Offset_18);
#line 1019 "rtti_to_mlds.m"
        {
#line 1019 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgLocnInitializers_17));
#line 1019 "rtti_to_mlds.m"
        }
#line 106 "rtti_to_mlds.m"
        {
#line 106 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 106 "rtti_to_mlds.m"
        }
#line 106 "rtti_to_mlds.m"
        {
#line 106 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 106 "rtti_to_mlds.m"
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_42, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21);
#line 107 "rtti_to_mlds.m"
          return;
        }
#line 1014 "rtti_to_mlds.m"
      }
#line 1021 "rtti_to_mlds.m"
    else
#line 1022 "rtti_to_mlds.m"
      {
#line 1022 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HaveArgLocns_12 = (MR_Integer) 0;
#line 1022 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20;
#line 1022 "rtti_to_mlds.m"
      }
#line 1002 "rtti_to_mlds.m"
  }
#line 1002 "rtti_to_mlds.m"
}

#line 992 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
#line 992 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 992 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 992 "rtti_to_mlds.m"
{
#line 992 "rtti_to_mlds.m"
  {
#line 992 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 992 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_27;

#line 992 "rtti_to_mlds.m"
    {
#line 992 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_27 = ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__992__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 992 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_27));
#line 992 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 992 "rtti_to_mlds.m"
  }
#line 992 "rtti_to_mlds.m"
}

#line 993 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
#line 993 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 993 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 993 "rtti_to_mlds.m"
{
#line 993 "rtti_to_mlds.m"
  {
#line 993 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 993 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 993 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 993 "rtti_to_mlds.m"
    {
#line 993 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 993 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 993 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 993 "rtti_to_mlds.m"
  }
#line 993 "rtti_to_mlds.m"
}

#line 987 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
#line 987 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 987 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 987 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeNames_10,
#line 987 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 987 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 987 "rtti_to_mlds.m"
{
#line 990 "rtti_to_mlds.m"
  {
#line 990 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__StrType_12 = (MR_Word) MR_mkword(MR_mktag(2), &ml_backend__rtti_to_mlds_scalar_common_10[0]);
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_14;
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 990 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 994 "rtti_to_mlds.m"
    {
#line 994 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__rtti_to_mlds__StrType_12);
    }
#line 993 "rtti_to_mlds.m"
    {
#line 993 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 993 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__StrType_12));
#line 993 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__rtti_to_mlds_scalar_common_10[1])));
#line 993 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 993 "rtti_to_mlds.m"
    }
#line 992 "rtti_to_mlds.m"
    {
#line 992 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 992 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[7]));
#line 992 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2));
#line 992 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 992 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 992 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 4) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_2[35]));
#line 992 "rtti_to_mlds.m"
    }
#line 992 "rtti_to_mlds.m"
    {
#line 992 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[4], ml_backend__rtti_to_mlds__V_18_18, ml_backend__rtti_to_mlds__MaybeNames_10);
    }
#line 998 "rtti_to_mlds.m"
    {
#line 998 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 998 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 998 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 998 "rtti_to_mlds.m"
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_14));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 990 "rtti_to_mlds.m"
  }
#line 987 "rtti_to_mlds.m"
}

#line 897 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1(
#line 897 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 897 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 897 "rtti_to_mlds.m"
{
#line 897 "rtti_to_mlds.m"
  {
#line 897 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 897 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 897 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_6;

#line 897 "rtti_to_mlds.m"
    {
#line 897 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_6 = ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 897 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_6));
#line 897 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 897 "rtti_to_mlds.m"
  }
#line 897 "rtti_to_mlds.m"
}

#line 891 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(
#line 891 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 891 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 891 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locns_10,
#line 891 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
#line 891 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15)
#line 891 "rtti_to_mlds.m"
{
#line 896 "rtti_to_mlds.m"
  {
#line 896 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 896 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_12;
#line 896 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_13;
#line 896 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 896 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_27;
#line 896 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_34;
#line 896 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;

#line 897 "rtti_to_mlds.m"
    {
#line 897 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 897 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[5]));
#line 897 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1));
#line 897 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 897 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 897 "rtti_to_mlds.m"
    }
#line 897 "rtti_to_mlds.m"
    {
#line 897 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_12 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ml_backend__rtti_to_mlds__V_16_16, ml_backend__rtti_to_mlds__Locns_10);
    }
#line 898 "rtti_to_mlds.m"
    {
#line 898 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 898 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiName_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 898 "rtti_to_mlds.m"
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_13));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_27));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_34, ml_backend__rtti_to_mlds__RttiId_27, ml_backend__rtti_to_mlds__Initializer_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 896 "rtti_to_mlds.m"
  }
#line 891 "rtti_to_mlds.m"
}

#line 713 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 713 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 713 "rtti_to_mlds.m"
{
#line 718 "rtti_to_mlds.m"
  {
#line 718 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 718 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 0)));
#line 718 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 1)));
#line 718 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Value_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 2)));
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_15;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_17;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_35;
#line 718 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;

#line 720 "rtti_to_mlds.m"
    {
#line 720 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 720 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_13));
#line 720 "rtti_to_mlds.m"
    }
#line 721 "rtti_to_mlds.m"
    {
#line 721 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 721 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
#line 721 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_15));
#line 721 "rtti_to_mlds.m"
    }
#line 722 "rtti_to_mlds.m"
    {
#line 722 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 722 "rtti_to_mlds.m"
    }
#line 722 "rtti_to_mlds.m"
    {
#line 722 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 722 "rtti_to_mlds.m"
    }
#line 723 "rtti_to_mlds.m"
    {
#line 723 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_12);
    }
#line 724 "rtti_to_mlds.m"
    {
#line 724 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_13);
    }
#line 726 "rtti_to_mlds.m"
    {
#line 726 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_foreign_2_f_0(ml_backend__rtti_to_mlds__Lang_8, ml_backend__rtti_to_mlds__Value_14);
    }
#line 724 "rtti_to_mlds.m"
    {
#line 724 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 724 "rtti_to_mlds.m"
    }
#line 723 "rtti_to_mlds.m"
    {
#line 723 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 723 "rtti_to_mlds.m"
    }
#line 722 "rtti_to_mlds.m"
    {
#line 722 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_22_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 722 "rtti_to_mlds.m"
    }
#line 722 "rtti_to_mlds.m"
    {
#line 722 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 722 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_35, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 718 "rtti_to_mlds.m"
  }
#line 713 "rtti_to_mlds.m"
}

#line 700 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 700 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 700 "rtti_to_mlds.m"
{
#line 703 "rtti_to_mlds.m"
  {
#line 703 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 703 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__EnumFunctor_8, (MR_Integer) 0)));
#line 703 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__EnumFunctor_8, (MR_Integer) 1)));
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_12;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_13;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_14;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_30;
#line 703 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 705 "rtti_to_mlds.m"
    {
#line 705 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 705 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 705 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
#line 705 "rtti_to_mlds.m"
    }
#line 706 "rtti_to_mlds.m"
    {
#line 706 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 706 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 706 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_12));
#line 706 "rtti_to_mlds.m"
    }
#line 707 "rtti_to_mlds.m"
    {
#line 707 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_13));
#line 707 "rtti_to_mlds.m"
    }
#line 707 "rtti_to_mlds.m"
    {
#line 707 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_17_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 707 "rtti_to_mlds.m"
    }
#line 708 "rtti_to_mlds.m"
    {
#line 708 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
    }
#line 710 "rtti_to_mlds.m"
    {
#line 710 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_11);
    }
#line 708 "rtti_to_mlds.m"
    {
#line 708 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "rtti_to_mlds.m"
    }
#line 707 "rtti_to_mlds.m"
    {
#line 707 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 707 "rtti_to_mlds.m"
    }
#line 707 "rtti_to_mlds.m"
    {
#line 707 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_14, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 707 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_13));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_30, ml_backend__rtti_to_mlds__RttiId_13, ml_backend__rtti_to_mlds__Initializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 703 "rtti_to_mlds.m"
  }
#line 700 "rtti_to_mlds.m"
}

#line 1285 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1285__1_2_p_0(
#line 1285 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_23,
#line 1285 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_24)
#line 1285 "rtti_to_mlds.m"
{
#line 1285 "rtti_to_mlds.m"
  {
#line 1285 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1285 "rtti_to_mlds.m"
    {
#line 1285 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ml_backend__rtti_to_mlds__HeadVar__1_23, ml_backend__rtti_to_mlds__HeadVar__2_24);
#line 1285 "rtti_to_mlds.m"
      return;
    }
#line 1285 "rtti_to_mlds.m"
  }
#line 1285 "rtti_to_mlds.m"
}

#line 1208 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1208__1_2_p_0(
#line 1208 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_24,
#line 1208 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_25)
#line 1208 "rtti_to_mlds.m"
{
#line 1208 "rtti_to_mlds.m"
  {
#line 1208 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1208 "rtti_to_mlds.m"
    {
#line 1208 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ml_backend__rtti_to_mlds__HeadVar__1_24, ml_backend__rtti_to_mlds__HeadVar__2_25);
#line 1208 "rtti_to_mlds.m"
      return;
    }
#line 1208 "rtti_to_mlds.m"
  }
#line 1208 "rtti_to_mlds.m"
}

#line 1173 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1173__1_2_p_0(
#line 1173 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4,
#line 1173 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ptag_11)
#line 1173 "rtti_to_mlds.m"
{
#line 1173 "rtti_to_mlds.m"
  {
#line 1173 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__Ptag_11 == ml_backend__rtti_to_mlds__CurPtag_4);

#line 1173 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1173 "rtti_to_mlds.m"
  }
#line 1173 "rtti_to_mlds.m"
}

#line 992 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__992__1_3_f_0(
#line 992 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_19,
#line 992 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_23,
#line 992 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_26)
#line 992 "rtti_to_mlds.m"
{
#line 992 "rtti_to_mlds.m"
  {
#line 992 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 992 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_27;

#line 992 "rtti_to_mlds.m"
    {
#line 992 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__HeadVar__4_27 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__HeadVar__1_19, ml_backend__rtti_to_mlds__HeadVar__2_23, ml_backend__rtti_to_mlds__HeadVar__3_26);
    }
#line 992 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_27;
#line 992 "rtti_to_mlds.m"
  }
#line 992 "rtti_to_mlds.m"
}

#line 1752 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__2_3_p_0(
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_18,
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_36,
#line 1752 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_37)
#line 1752 "rtti_to_mlds.m"
{
#line 1752 "rtti_to_mlds.m"
  {
#line 1752 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      mercury__list__filter_map_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__rtti_to_mlds__HeadVar__1_18, ml_backend__rtti_to_mlds__HeadVar__2_36, ml_backend__rtti_to_mlds__HeadVar__3_37);
#line 1752 "rtti_to_mlds.m"
      return;
    }
#line 1752 "rtti_to_mlds.m"
  }
#line 1752 "rtti_to_mlds.m"
}

#line 1752 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__1_3_p_0(
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameMap_6,
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_40,
#line 1752 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_41)
#line 1752 "rtti_to_mlds.m"
{
#line 1752 "rtti_to_mlds.m"
  {
#line 1752 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1752 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv0_HeadVar__3_41;

#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__rtti_to_mlds__NameMap_6, ((MR_Box) (ml_backend__rtti_to_mlds__HeadVar__2_40)), &ml_backend__rtti_to_mlds__conv0_HeadVar__3_41);
    }
#line 1752 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1752 "rtti_to_mlds.m"
      {
#line 1752 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HeadVar__3_41 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_HeadVar__3_41);
#line 1752 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1752 "rtti_to_mlds.m"
      }
#line 1752 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1752 "rtti_to_mlds.m"
  }
#line 1752 "rtti_to_mlds.m"
}

#line 1751 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1751__1_2_p_0(
#line 1751 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_32,
#line 1751 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_33)
#line 1751 "rtti_to_mlds.m"
{
#line 1751 "rtti_to_mlds.m"
  {
#line 1751 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1751 "rtti_to_mlds.m"
    {
#line 1751 "rtti_to_mlds.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, ml_backend__rtti_to_mlds__HeadVar__1_32, ml_backend__rtti_to_mlds__HeadVar__2_33);
#line 1751 "rtti_to_mlds.m"
      return;
    }
#line 1751 "rtti_to_mlds.m"
  }
#line 1751 "rtti_to_mlds.m"
}

#line 755 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeInfo_for_T_9,
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_1,
#line 755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2)
#line 755 "rtti_to_mlds.m"
{
#line 755 "rtti_to_mlds.m"
  {
#line 755 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 755 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__V_6_6;

#line 755 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 755 "rtti_to_mlds.m"
      {
#line 755 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_6_6 = (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0));
#line 755 "rtti_to_mlds.m"
        (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__1_1, (MR_Integer) 0)) = ml_backend__rtti_to_mlds__V_6_6;
#line 755 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 755 "rtti_to_mlds.m"
      }
#line 755 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 755 "rtti_to_mlds.m"
  }
#line 755 "rtti_to_mlds.m"
}

#line 1838 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(
#line 1838 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1838 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lval_6,
#line 1838 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17,
#line 1838 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18)
#line 1838 "rtti_to_mlds.m"
{
#line 1843 "rtti_to_mlds.m"
  {
#line 1843 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1843 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_6)) == (MR_mktag((MR_Integer) 0))))
#line 1843 "rtti_to_mlds.m"
      {
#line 1843 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 1)));
#line 1843 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)));
#line 1843 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 2)));
#line 1843 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 3)));
#line 1843 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 4)));

#line 1844 "rtti_to_mlds.m"
        {
#line 1844 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);
#line 1844 "rtti_to_mlds.m"
          return;
        }
#line 1843 "rtti_to_mlds.m"
      }
#line 1843 "rtti_to_mlds.m"
    else
#line 1843 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_6)) == (MR_mktag((MR_Integer) 2))))
#line 1849 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17;
#line 1843 "rtti_to_mlds.m"
      else
#line 1843 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_6)) == (MR_mktag((MR_Integer) 1))))
#line 1846 "rtti_to_mlds.m"
          {
#line 1846 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)));
#line 1846 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 1)));

#line 1847 "rtti_to_mlds.m"
            {
#line 1847 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);
#line 1847 "rtti_to_mlds.m"
              return;
            }
#line 1846 "rtti_to_mlds.m"
          }
#line 1843 "rtti_to_mlds.m"
        else
#line 1851 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17;
#line 1843 "rtti_to_mlds.m"
  }
#line 1838 "rtti_to_mlds.m"
}

#line 1806 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
#line 1806 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1806 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Rval_6,
#line 1806 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1806 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20)
#line 1806 "rtti_to_mlds.m"
{
#line 1811 "rtti_to_mlds.m"
  while (MR_TRUE)
#line 1811 "rtti_to_mlds.m"
    {
#line 1811 "rtti_to_mlds.m"
      /* tailcall optimized into a loop */
#line 1811 "rtti_to_mlds.m"
      {
#line 1811 "rtti_to_mlds.m"
        MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1811 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 1))))
#line 1811 "rtti_to_mlds.m"
          {
#line 1811 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)));

#line 1812 "rtti_to_mlds.m"
            {
#line 1812 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Lval_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
#line 1812 "rtti_to_mlds.m"
              return;
            }
#line 1811 "rtti_to_mlds.m"
          }
#line 1811 "rtti_to_mlds.m"
        else
#line 1811 "rtti_to_mlds.m"
          if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 2))))
#line 1814 "rtti_to_mlds.m"
            {
#line 1814 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));
#line 1814 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Tag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)));

#line 1815 "rtti_to_mlds.m"
              /* direct tailcall eliminated */
#line 1815 "rtti_to_mlds.m"
              {
#line 1815 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalA_10;

#line 1815 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1815 "rtti_to_mlds.m"
              }
#line 1815 "rtti_to_mlds.m"
              continue;
#line 1814 "rtti_to_mlds.m"
            }
#line 1811 "rtti_to_mlds.m"
          else
#line 1811 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 0))))
#line 1830 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1811 "rtti_to_mlds.m"
            else
#line 1811 "rtti_to_mlds.m"
              if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1823 "rtti_to_mlds.m"
                {
#line 1823 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__RvalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 3)));
#line 1823 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23;
#line 1823 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__RvalA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1823 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1824 "rtti_to_mlds.m"
                  {
#line 1824 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__RvalA_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23);
                  }
#line 1825 "rtti_to_mlds.m"
                  /* direct tailcall eliminated */
#line 1825 "rtti_to_mlds.m"
                  {
#line 1825 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalB_14;
#line 1825 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0__tmp_copy_19 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23;

#line 1825 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0__tmp_copy_19;
#line 1825 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1825 "rtti_to_mlds.m"
                  }
#line 1825 "rtti_to_mlds.m"
                  continue;
#line 1823 "rtti_to_mlds.m"
                }
#line 1811 "rtti_to_mlds.m"
              else
#line 1811 "rtti_to_mlds.m"
                if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1817 "rtti_to_mlds.m"
                  {
#line 1817 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1859 "rtti_to_mlds.m"
                    if ((ml_backend__rtti_to_mlds__Const_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1874 "rtti_to_mlds.m"
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                    else
#line 1859 "rtti_to_mlds.m"
                      if ((ml_backend__rtti_to_mlds__Const_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1873 "rtti_to_mlds.m"
                        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                      else
#line 1859 "rtti_to_mlds.m"
                        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 1))))
#line 1859 "rtti_to_mlds.m"
                          {
#line 1859 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__DataName_38;
#line 1859 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__Const_11), (MR_Integer) 1);
#line 1859 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, (MR_Integer) 0)));

#line 1859 "rtti_to_mlds.m"
                            ml_backend__rtti_to_mlds__DataName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, (MR_Integer) 1)));
#line 1863 "rtti_to_mlds.m"
                            if ((ml_backend__rtti_to_mlds__DataName_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1866 "rtti_to_mlds.m"
                              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1863 "rtti_to_mlds.m"
                            else
#line 1863 "rtti_to_mlds.m"
                              if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 1))))
#line 1864 "rtti_to_mlds.m"
                                *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1863 "rtti_to_mlds.m"
                              else
#line 1863 "rtti_to_mlds.m"
                                if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 2))))
#line 1865 "rtti_to_mlds.m"
                                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1863 "rtti_to_mlds.m"
                                else
#line 1863 "rtti_to_mlds.m"
                                  if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__DataName_38, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1868 "rtti_to_mlds.m"
                                    *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1863 "rtti_to_mlds.m"
                                  else
#line 1863 "rtti_to_mlds.m"
                                    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__DataName_38, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1867 "rtti_to_mlds.m"
                                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1863 "rtti_to_mlds.m"
                                    else
#line 1863 "rtti_to_mlds.m"
                                      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__DataName_38, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1861 "rtti_to_mlds.m"
                                        {
#line 1862 "rtti_to_mlds.m"
                                          {
#line 1862 "rtti_to_mlds.m"
                                            mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5)), ((MR_Box) (ml_backend__rtti_to_mlds__DataName_38)), ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
#line 1862 "rtti_to_mlds.m"
                                            return;
                                          }
#line 1861 "rtti_to_mlds.m"
                                        }
#line 1863 "rtti_to_mlds.m"
                                      else
#line 1869 "rtti_to_mlds.m"
                                        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                          }
#line 1859 "rtti_to_mlds.m"
                        else
#line 1859 "rtti_to_mlds.m"
                          if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 2))))
#line 1875 "rtti_to_mlds.m"
                            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                          else
#line 1859 "rtti_to_mlds.m"
                            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1877 "rtti_to_mlds.m"
                              *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                            else
#line 1859 "rtti_to_mlds.m"
                              if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1883 "rtti_to_mlds.m"
                                *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                              else
#line 1859 "rtti_to_mlds.m"
                                if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1876 "rtti_to_mlds.m"
                                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                                else
#line 1859 "rtti_to_mlds.m"
                                  if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1879 "rtti_to_mlds.m"
                                    *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                                  else
#line 1859 "rtti_to_mlds.m"
                                    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1878 "rtti_to_mlds.m"
                                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                                    else
#line 1859 "rtti_to_mlds.m"
                                      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1881 "rtti_to_mlds.m"
                                        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                                      else
#line 1859 "rtti_to_mlds.m"
                                        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 1882 "rtti_to_mlds.m"
                                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                                        else
#line 1859 "rtti_to_mlds.m"
                                          if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1884 "rtti_to_mlds.m"
                                            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1859 "rtti_to_mlds.m"
                                          else
#line 1880 "rtti_to_mlds.m"
                                            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1817 "rtti_to_mlds.m"
                  }
#line 1811 "rtti_to_mlds.m"
                else
#line 1811 "rtti_to_mlds.m"
                  if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1827 "rtti_to_mlds.m"
                    {
#line 1827 "rtti_to_mlds.m"
                      MR_Word ml_backend__rtti_to_mlds__Lval_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1828 "rtti_to_mlds.m"
                      {
#line 1828 "rtti_to_mlds.m"
                        ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Lval_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
#line 1828 "rtti_to_mlds.m"
                        return;
                      }
#line 1827 "rtti_to_mlds.m"
                    }
#line 1811 "rtti_to_mlds.m"
                  else
#line 1811 "rtti_to_mlds.m"
                    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1835 "rtti_to_mlds.m"
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1811 "rtti_to_mlds.m"
                    else
#line 1811 "rtti_to_mlds.m"
                      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1820 "rtti_to_mlds.m"
                        {
#line 1820 "rtti_to_mlds.m"
                          MR_Word ml_backend__rtti_to_mlds__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1820 "rtti_to_mlds.m"
                          MR_Word ml_backend__rtti_to_mlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1821 "rtti_to_mlds.m"
                          /* direct tailcall eliminated */
#line 1821 "rtti_to_mlds.m"
                          {
#line 1821 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalA_29;

#line 1821 "rtti_to_mlds.m"
                            ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1821 "rtti_to_mlds.m"
                          }
#line 1821 "rtti_to_mlds.m"
                          continue;
#line 1820 "rtti_to_mlds.m"
                        }
#line 1811 "rtti_to_mlds.m"
                      else
#line 1832 "rtti_to_mlds.m"
                        {
#line 1832 "rtti_to_mlds.m"
                          MR_Word ml_backend__rtti_to_mlds__RowRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1832 "rtti_to_mlds.m"
                          MR_Word ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1833 "rtti_to_mlds.m"
                          /* direct tailcall eliminated */
#line 1833 "rtti_to_mlds.m"
                          {
#line 1833 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RowRval_17;

#line 1833 "rtti_to_mlds.m"
                            ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1833 "rtti_to_mlds.m"
                          }
#line 1833 "rtti_to_mlds.m"
                          continue;
#line 1832 "rtti_to_mlds.m"
                        }
#line 1811 "rtti_to_mlds.m"
      }
#line 1811 "rtti_to_mlds.m"
      break;
#line 1811 "rtti_to_mlds.m"
    }
#line 1806 "rtti_to_mlds.m"
}

#line 1800 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1800 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1800 "rtti_to_mlds.m"
{
#line 1800 "rtti_to_mlds.m"
  {
#line 1800 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1800 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12;

#line 1800 "rtti_to_mlds.m"
    {
#line 1800 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12);
    }
#line 1800 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12));
#line 1800 "rtti_to_mlds.m"
  }
#line 1800 "rtti_to_mlds.m"
}

#line 1800 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1800 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1800 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1800 "rtti_to_mlds.m"
{
#line 1800 "rtti_to_mlds.m"
  {
#line 1800 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1800 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12;

#line 1800 "rtti_to_mlds.m"
    {
#line 1800 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12);
    }
#line 1800 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12));
#line 1800 "rtti_to_mlds.m"
  }
#line 1800 "rtti_to_mlds.m"
}

#line 1788 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
#line 1788 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1788 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 1788 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
#line 1788 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12)
#line 1788 "rtti_to_mlds.m"
{
#line 1794 "rtti_to_mlds.m"
  {
#line 1794 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1794 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Initializer_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1803 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11;
#line 1794 "rtti_to_mlds.m"
    else
#line 1794 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Initializer_6)) == (MR_mktag((MR_Integer) 3))))
#line 1799 "rtti_to_mlds.m"
        {
#line 1799 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Initializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));
#line 1799 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1800 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12;

#line 1800 "rtti_to_mlds.m"
          {
#line 1800 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1800 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[6]));
#line 1800 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1));
#line 1800 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1800 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5));
#line 1800 "rtti_to_mlds.m"
          }
#line 1800 "rtti_to_mlds.m"
          {
#line 1800 "rtti_to_mlds.m"
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0], ml_backend__rtti_to_mlds__V_13_13, ml_backend__rtti_to_mlds__Initializers_10, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12);
          }
#line 1800 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12);
#line 1799 "rtti_to_mlds.m"
        }
#line 1794 "rtti_to_mlds.m"
      else
#line 1794 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Initializer_6)) == (MR_mktag((MR_Integer) 1))))
#line 1794 "rtti_to_mlds.m"
          {
#line 1794 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));

#line 1795 "rtti_to_mlds.m"
            {
#line 1795 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);
#line 1795 "rtti_to_mlds.m"
              return;
            }
#line 1794 "rtti_to_mlds.m"
          }
#line 1794 "rtti_to_mlds.m"
        else
#line 1799 "rtti_to_mlds.m"
          {
#line 1799 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Initializers_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 1)));
#line 1799 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1797 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));
#line 1800 "rtti_to_mlds.m"
            MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12;

#line 1800 "rtti_to_mlds.m"
            {
#line 1800 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1800 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[6]));
#line 1800 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2));
#line 1800 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1800 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5));
#line 1800 "rtti_to_mlds.m"
            }
#line 1800 "rtti_to_mlds.m"
            {
#line 1800 "rtti_to_mlds.m"
              mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0], ml_backend__rtti_to_mlds__V_25_25, ml_backend__rtti_to_mlds__Initializers_24, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12);
            }
#line 1800 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12);
#line 1799 "rtti_to_mlds.m"
          }
#line 1794 "rtti_to_mlds.m"
  }
#line 1788 "rtti_to_mlds.m"
}

#line 1773 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
#line 1773 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_4,
#line 1773 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15,
#line 1773 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16)
#line 1773 "rtti_to_mlds.m"
{
#line 1776 "rtti_to_mlds.m"
  {
#line 1776 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1776 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__EntityName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 0)));
#line 1776 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__EntityDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 3)));
#line 1777 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 1)));
#line 1777 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 2)));
#line 1784 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DefnDataName_10;
#line 1784 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_12;
#line 1779 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Type_11;
#line 1780 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___GCStatement_13;
#line 1781 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1779 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__EntityName_6)) == (MR_mktag((MR_Integer) 1)));
#line 1779 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1779 "rtti_to_mlds.m"
      {
#line 1779 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__DefnDataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityName_6, (MR_Integer) 0)));
#line 1780 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__EntityDefn_9)) == (MR_mktag((MR_Integer) 1)));
#line 1780 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1780 "rtti_to_mlds.m"
          {
#line 1780 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 0)));
#line 1780 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Initializer_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 1)));
#line 1780 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds___GCStatement_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 2)));
#line 1781 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Type_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1781 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1781 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, (MR_Integer) 1)));
#line 1780 "rtti_to_mlds.m"
          }
#line 1779 "rtti_to_mlds.m"
      }
#line 1784 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1783 "rtti_to_mlds.m"
      {
#line 1783 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_10, ml_backend__rtti_to_mlds__Initializer_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16);
#line 1783 "rtti_to_mlds.m"
        return;
      }
#line 1784 "rtti_to_mlds.m"
    else
#line 1785 "rtti_to_mlds.m"
      {
#line 1785 "rtti_to_mlds.m"
        {
#line 1785 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.add_rtti_defn_arcs\'/3", (MR_String) "expected rtti entity_data");
#line 1785 "rtti_to_mlds.m"
          return;
        }
#line 1785 "rtti_to_mlds.m"
      }
#line 1776 "rtti_to_mlds.m"
  }
#line 1773 "rtti_to_mlds.m"
}

#line 1754 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_6,
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1754 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20,
#line 1754 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21,
#line 1754 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22)
#line 1754 "rtti_to_mlds.m"
{
#line 1759 "rtti_to_mlds.m"
  {
#line 1759 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1759 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 0)));
#line 1760 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 1)));
#line 1760 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 2)));
#line 1760 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 3)));

#line 1765 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Name_9)) == (MR_mktag((MR_Integer) 1))))
#line 1762 "rtti_to_mlds.m"
      {
#line 1762 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_31_31 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0;
#line 1762 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_9, (MR_Integer) 0)));
#line 1763 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_11_11;

#line 1763 "rtti_to_mlds.m"
        {
#line 1763 "rtti_to_mlds.m"
          mercury__digraph__add_vertex_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_31_31, ((MR_Box) (ml_backend__rtti_to_mlds__DataName_10)), &ml_backend__rtti_to_mlds__V_11_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
        }
#line 1764 "rtti_to_mlds.m"
        {
#line 1764 "rtti_to_mlds.m"
          mercury__map__det_insert_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_31_31, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ((MR_Box) (ml_backend__rtti_to_mlds__DataName_10)), ((MR_Box) (ml_backend__rtti_to_mlds__Defn_6)), ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22);
#line 1764 "rtti_to_mlds.m"
          return;
        }
#line 1762 "rtti_to_mlds.m"
      }
#line 1765 "rtti_to_mlds.m"
    else
#line 1769 "rtti_to_mlds.m"
      {
#line 1770 "rtti_to_mlds.m"
        {
#line 1770 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.add_rtti_defn_nodes\'/5", (MR_String) "expected entity_data");
#line 1770 "rtti_to_mlds.m"
          return;
        }
#line 1769 "rtti_to_mlds.m"
      }
#line 1759 "rtti_to_mlds.m"
  }
#line 1754 "rtti_to_mlds.m"
}

#line 1733 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
#line 1733 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorData_3)
#line 1733 "rtti_to_mlds.m"
{
#line 1735 "rtti_to_mlds.m"
  {
#line 1735 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1735 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1735 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_4;

#line 1736 "rtti_to_mlds.m"
    {
#line 1736 "rtti_to_mlds.m"
      backend_libs__rtti__type_ctor_rep_to_string_2_p_0(ml_backend__rtti_to_mlds__TypeCtorData_3, &ml_backend__rtti_to_mlds__Name_4);
    }
#line 1735 "rtti_to_mlds.m"
    {
#line 1735 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__HeadVar__2_2 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_4);
    }
#line 1735 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1735 "rtti_to_mlds.m"
  }
#line 1733 "rtti_to_mlds.m"
}

#line 1728 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
#line 1728 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locn_3)
#line 1728 "rtti_to_mlds.m"
{
#line 1730 "rtti_to_mlds.m"
  {
#line 1730 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1730 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1730 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_4;

#line 1731 "rtti_to_mlds.m"
    {
#line 1731 "rtti_to_mlds.m"
      backend_libs__rtti__sectag_locn_to_string_2_p_0(ml_backend__rtti_to_mlds__Locn_3, &ml_backend__rtti_to_mlds__Name_4);
    }
#line 1730 "rtti_to_mlds.m"
    {
#line 1730 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__HeadVar__2_2 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_4);
    }
#line 1730 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1730 "rtti_to_mlds.m"
  }
#line 1728 "rtti_to_mlds.m"
}

#line 1700 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
#line 1700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_2)
#line 1700 "rtti_to_mlds.m"
{
#line 1703 "rtti_to_mlds.m"
  {
#line 1703 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1707 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1708 "rtti_to_mlds.m"
      {
#line 1708 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 1)));

#line 1710 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_5)) == (MR_mktag((MR_Integer) 0))))
#line 1709 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1710 "rtti_to_mlds.m"
        else
#line 1710 "rtti_to_mlds.m"
          if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_5)) == (MR_mktag((MR_Integer) 3))))
#line 1710 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1710 "rtti_to_mlds.m"
          else
#line 1710 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1708 "rtti_to_mlds.m"
      }
#line 1707 "rtti_to_mlds.m"
    else
#line 1707 "rtti_to_mlds.m"
      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1705 "rtti_to_mlds.m"
        {
#line 1705 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__TypeInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 1)));
#line 1706 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_4_4;

#line 1706 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_3)) == (MR_mktag((MR_Integer) 0)));
#line 1706 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 1706 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_4_4 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_3), (MR_Integer) 0);
#line 1705 "rtti_to_mlds.m"
        }
#line 1707 "rtti_to_mlds.m"
      else
#line 1707 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1703 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = !(ml_backend__rtti_to_mlds__succeeded);
#line 1703 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1703 "rtti_to_mlds.m"
  }
#line 1700 "rtti_to_mlds.m"
}

#line 1631 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(
#line 1631 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
#line 1631 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_9,
#line 1631 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcId_10,
#line 1631 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ClosureKind_11,
#line 1631 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_12,
#line 1631 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1631 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23)
#line 1631 "rtti_to_mlds.m"
{
#line 1649 "rtti_to_mlds.m"
  {
#line 1649 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1649 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ProcInfo_17;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_18;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncRval_19;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncType_20;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ExtraDefns_21;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1649 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1649 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1651 "rtti_to_mlds.m"
    {
#line 1651 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, &ml_backend__rtti_to_mlds__ProcInfo_17);
    }
#line 1652 "rtti_to_mlds.m"
    {
#line 1652 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    }
#line 1652 "rtti_to_mlds.m"
    {
#line 1652 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24 = ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__V_25_25, ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, ml_backend__rtti_to_mlds__ProcInfo_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22);
    }
#line 1654 "rtti_to_mlds.m"
    {
#line 1654 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26);
    }
#line 1657 "rtti_to_mlds.m"
    {
#line 1657 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_18);
    }
#line 1658 "rtti_to_mlds.m"
    {
#line 1658 "rtti_to_mlds.m"
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, ml_backend__rtti_to_mlds__ClosureKind_11, ml_backend__rtti_to_mlds__NumExtra_9, ml_backend__rtti_to_mlds__Context_18, &ml_backend__rtti_to_mlds__WrapperFuncRval_19, &ml_backend__rtti_to_mlds__WrapperFuncType_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27);
    }
#line 1660 "rtti_to_mlds.m"
    {
#line 1660 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27, &ml_backend__rtti_to_mlds__ExtraDefns_21);
    }
#line 1661 "rtti_to_mlds.m"
    {
#line 1661 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28);
    }
#line 1662 "rtti_to_mlds.m"
    {
#line 1662 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(ml_backend__rtti_to_mlds__ExtraDefns_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);
    }
#line 1666 "rtti_to_mlds.m"
    {
#line 1666 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncType_20));
#line 1666 "rtti_to_mlds.m"
    }
#line 1666 "rtti_to_mlds.m"
    {
#line 1666 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncRval_19));
#line 1666 "rtti_to_mlds.m"
    }
#line 1666 "rtti_to_mlds.m"
    {
#line 1666 "rtti_to_mlds.m"
      MR_Word base;
#line 1666 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1666 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_12 = base;
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1666 "rtti_to_mlds.m"
    }
#line 1649 "rtti_to_mlds.m"
  }
#line 1631 "rtti_to_mlds.m"
}

#line 1608 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(
#line 1608 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1608 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcIdUniv_7,
#line 1608 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1608 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1608 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1608 "rtti_to_mlds.m"
{
#line 1611 "rtti_to_mlds.m"
  {
#line 1611 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1611 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiProcId_10;
#line 1618 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv0_RttiProcId_10;
#line 1619 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_14_14;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1619 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_20_20;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1619 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_23_23;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1619 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 1618 "rtti_to_mlds.m"
    {
#line 1618 "rtti_to_mlds.m"
      mercury__univ__det_univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ml_backend__rtti_to_mlds__RttiProcIdUniv_7, &ml_backend__rtti_to_mlds__conv0_RttiProcId_10);
    }
#line 1618 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__RttiProcId_10 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_RttiProcId_10);
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__V_14_14 == (MR_Integer) 0);
#line 1625 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1624 "rtti_to_mlds.m"
      {
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PredLabel_36;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PredModule_37;
#line 1624 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__ProcId_38;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__QualifiedProcLabel_39;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Params_40;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Signature_41;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ProcAddrRval_42;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ProcAddrArg_43;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1624 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 1675 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_53_53;
#line 1675 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_54_54;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 1675 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_64_64;

#line 1674 "rtti_to_mlds.m"
        {
#line 1674 "rtti_to_mlds.m"
          ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiProcId_10, &ml_backend__rtti_to_mlds__PredLabel_36, &ml_backend__rtti_to_mlds__PredModule_37);
        }
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1675 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1676 "rtti_to_mlds.m"
        {
#line 1676 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1676 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredLabel_36));
#line 1676 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcId_38));
#line 1676 "rtti_to_mlds.m"
        }
#line 1676 "rtti_to_mlds.m"
        {
#line 1676 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__QualifiedProcLabel_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1676 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredModule_37));
#line 1676 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1676 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 1676 "rtti_to_mlds.m"
        }
#line 1678 "rtti_to_mlds.m"
        {
#line 1678 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Params_40 = ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiProcId_10);
        }
#line 1679 "rtti_to_mlds.m"
        {
#line 1679 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Signature_41 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__rtti_to_mlds__Params_40);
        }
#line 1680 "rtti_to_mlds.m"
        {
#line 1680 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1680 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__QualifiedProcLabel_39));
#line 1680 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Signature_41));
#line 1680 "rtti_to_mlds.m"
        }
#line 1680 "rtti_to_mlds.m"
        {
#line 1680 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1680 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 1680 "rtti_to_mlds.m"
        }
#line 1680 "rtti_to_mlds.m"
        {
#line 1680 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ProcAddrRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1680 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1680 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 1680 "rtti_to_mlds.m"
        }
#line 1687 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__Params_40);
#line 1687 "rtti_to_mlds.m"
        {
#line 1687 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1687 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 1687 "rtti_to_mlds.m"
        }
#line 1687 "rtti_to_mlds.m"
        {
#line 1687 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ProcAddrArg_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1687 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1687 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 1687 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrRval_42));
#line 1687 "rtti_to_mlds.m"
        }
#line 1688 "rtti_to_mlds.m"
        {
#line 1688 "rtti_to_mlds.m"
          MR_Word base;
#line 1688 "rtti_to_mlds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__Initializer_8 = base;
#line 1688 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrArg_43));
#line 1688 "rtti_to_mlds.m"
        }
#line 1624 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12;
#line 1624 "rtti_to_mlds.m"
      }
#line 1625 "rtti_to_mlds.m"
    else
#line 1626 "rtti_to_mlds.m"
      {
#line 1627 "rtti_to_mlds.m"
        {
#line 1627 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, (MR_Integer) 0, ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
#line 1627 "rtti_to_mlds.m"
          return;
        }
#line 1626 "rtti_to_mlds.m"
      }
#line 1611 "rtti_to_mlds.m"
  }
#line 1608 "rtti_to_mlds.m"
}

#line 1588 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_6_p_0(
#line 1588 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1588 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_8,
#line 1588 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcLabel_9,
#line 1588 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
#line 1588 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1588 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1588 "rtti_to_mlds.m"
{
#line 1592 "rtti_to_mlds.m"
  {
#line 1592 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 6)));
#line 1592 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 7)));
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ProcInfo_27;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_28;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncRval_29;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncType_30;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ExtraDefns_31;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1592 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 0)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 1)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 2)));
#line 1649 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 3)));
#line 1649 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 4)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 5)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 8)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 9)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 11)));
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1649 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1651 "rtti_to_mlds.m"
    {
#line 1651 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, &ml_backend__rtti_to_mlds__ProcInfo_27);
    }
#line 1652 "rtti_to_mlds.m"
    {
#line 1652 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    }
#line 1652 "rtti_to_mlds.m"
    {
#line 1652 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32 = ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__V_33_33, ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, ml_backend__rtti_to_mlds__ProcInfo_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12);
    }
#line 1654 "rtti_to_mlds.m"
    {
#line 1654 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34);
    }
#line 1657 "rtti_to_mlds.m"
    {
#line 1657 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_28);
    }
#line 1658 "rtti_to_mlds.m"
    {
#line 1658 "rtti_to_mlds.m"
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, (MR_Integer) 1, ml_backend__rtti_to_mlds__NumExtra_8, ml_backend__rtti_to_mlds__Context_28, &ml_backend__rtti_to_mlds__WrapperFuncRval_29, &ml_backend__rtti_to_mlds__WrapperFuncType_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35);
    }
#line 1660 "rtti_to_mlds.m"
    {
#line 1660 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35, &ml_backend__rtti_to_mlds__ExtraDefns_31);
    }
#line 1661 "rtti_to_mlds.m"
    {
#line 1661 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36);
    }
#line 1662 "rtti_to_mlds.m"
    {
#line 1662 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(ml_backend__rtti_to_mlds__ExtraDefns_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
    }
#line 1666 "rtti_to_mlds.m"
    {
#line 1666 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncType_30));
#line 1666 "rtti_to_mlds.m"
    }
#line 1666 "rtti_to_mlds.m"
    {
#line 1666 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncRval_29));
#line 1666 "rtti_to_mlds.m"
    }
#line 1666 "rtti_to_mlds.m"
    {
#line 1666 "rtti_to_mlds.m"
      MR_Word base;
#line 1666 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1666 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_10 = base;
#line 1666 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 1666 "rtti_to_mlds.m"
    }
#line 1592 "rtti_to_mlds.m"
  }
#line 1588 "rtti_to_mlds.m"
}

#line 1352 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3(
#line 1352 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1352 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1352 "rtti_to_mlds.m"
{
#line 1352 "rtti_to_mlds.m"
  {
#line 1352 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1352 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1352 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_Initializer_8;

#line 1352 "rtti_to_mlds.m"
    {
#line 1352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1352 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_Initializer_8));
#line 1352 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1352 "rtti_to_mlds.m"
  }
#line 1352 "rtti_to_mlds.m"
}

#line 1568 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2(
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1568 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1568 "rtti_to_mlds.m"
{
#line 1568 "rtti_to_mlds.m"
  {
#line 1568 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1568 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10;

#line 1568 "rtti_to_mlds.m"
    {
#line 1568 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10);
    }
#line 1568 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10));
#line 1568 "rtti_to_mlds.m"
  }
#line 1568 "rtti_to_mlds.m"
}

#line 1567 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_1(
#line 1567 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1567 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1567 "rtti_to_mlds.m"
{
#line 1567 "rtti_to_mlds.m"
  {
#line 1567 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1567 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1567 "rtti_to_mlds.m"
    {
#line 1567 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1567 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1567 "rtti_to_mlds.m"
  }
#line 1567 "rtti_to_mlds.m"
}

#line 1562 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(
#line 1562 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1562 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiDatas_7,
#line 1562 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1562 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1562 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1562 "rtti_to_mlds.m"
{
#line 1566 "rtti_to_mlds.m"
  {
#line 1566 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1566 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 1566 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_10;
#line 1566 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1566 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 1566 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1568 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13;

#line 1567 "rtti_to_mlds.m"
    {
#line 1567 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RealRttiDatas_10 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_18_18, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[34], ml_backend__rtti_to_mlds__PTIRttiDatas_7);
    }
#line 1568 "rtti_to_mlds.m"
    {
#line 1568 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1568 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 1568 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2));
#line 1568 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1568 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
#line 1568 "rtti_to_mlds.m"
    }
#line 1568 "rtti_to_mlds.m"
    {
#line 1568 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_15_15, ml_backend__rtti_to_mlds__RealRttiDatas_10, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13);
    }
#line 1568 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13);
#line 1569 "rtti_to_mlds.m"
    {
#line 1569 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1352 "rtti_to_mlds.m"
    {
#line 1352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[5]));
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3));
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1352 "rtti_to_mlds.m"
    }
#line 1351 "rtti_to_mlds.m"
    {
#line 1351 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__PTIRttiDatas_7);
    }
#line 1566 "rtti_to_mlds.m"
  }
#line 1562 "rtti_to_mlds.m"
}

#line 1547 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(
#line 1547 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1547 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiData_7,
#line 1547 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1547 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 1547 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12)
#line 1547 "rtti_to_mlds.m"
{
#line 1550 "rtti_to_mlds.m"
  {
#line 1550 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1550 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_10;

#line 1707 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1708 "rtti_to_mlds.m"
      {
#line 1708 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));

#line 1710 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 0))))
#line 1709 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1710 "rtti_to_mlds.m"
        else
#line 1710 "rtti_to_mlds.m"
          if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 3))))
#line 1710 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1710 "rtti_to_mlds.m"
          else
#line 1710 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1708 "rtti_to_mlds.m"
      }
#line 1707 "rtti_to_mlds.m"
    else
#line 1707 "rtti_to_mlds.m"
      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1705 "rtti_to_mlds.m"
        {
#line 1705 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__TypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));
#line 1706 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_17_17;

#line 1706 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_16)) == (MR_mktag((MR_Integer) 0)));
#line 1706 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 1706 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_16), (MR_Integer) 0);
#line 1705 "rtti_to_mlds.m"
        }
#line 1707 "rtti_to_mlds.m"
      else
#line 1707 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1703 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = !(ml_backend__rtti_to_mlds__succeeded);
#line 1553 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 91 "rtti_to_mlds.m"
      {
#line 86 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 86 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_26_26;

#line 86 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 86 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 86 "rtti_to_mlds.m"
          {
#line 86 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));
#line 86 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 86 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 86 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, (MR_Integer) 0)));
#line 86 "rtti_to_mlds.m"
          }
#line 91 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 86 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11;
#line 91 "rtti_to_mlds.m"
        else
#line 92 "rtti_to_mlds.m"
          {
#line 92 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__PTIRttiData_7, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);
          }
#line 91 "rtti_to_mlds.m"
      }
#line 1553 "rtti_to_mlds.m"
    else
#line 1552 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11;
#line 1558 "rtti_to_mlds.m"
    {
#line 1558 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_10);
    }
#line 1559 "rtti_to_mlds.m"
    {
#line 1559 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_10, ml_backend__rtti_to_mlds__PTIRttiData_7);
    }
#line 1550 "rtti_to_mlds.m"
  }
#line 1547 "rtti_to_mlds.m"
}

#line 1434 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
#line 1434 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1434 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1434 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7)
#line 1434 "rtti_to_mlds.m"
{
#line 1437 "rtti_to_mlds.m"
  {
#line 1437 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1437 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1437 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 1437 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 1437 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;

#line 1392 "rtti_to_mlds.m"
    {
#line 1392 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1392 "rtti_to_mlds.m"
    }
#line 1446 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiId_7)) == (MR_mktag((MR_Integer) 0))))
#line 1446 "rtti_to_mlds.m"
      {
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 0)));
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 1)));
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_36;
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_37;
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_41;
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_42;
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DataAddr_43;
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 1446 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46;

#line 1464 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1465 "rtti_to_mlds.m"
          {
#line 1465 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 1)));

#line 1467 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_31)) == (MR_mktag((MR_Integer) 1))))
#line 1466 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1467 "rtti_to_mlds.m"
            else
#line 1467 "rtti_to_mlds.m"
              if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_31)) == (MR_mktag((MR_Integer) 2))))
#line 1467 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1467 "rtti_to_mlds.m"
              else
#line 1467 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1465 "rtti_to_mlds.m"
          }
#line 1464 "rtti_to_mlds.m"
        else
#line 1464 "rtti_to_mlds.m"
          if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1460 "rtti_to_mlds.m"
            {
#line 1460 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 1)));

#line 1462 "rtti_to_mlds.m"
              if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_26)) == (MR_mktag((MR_Integer) 1))))
#line 1461 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1462 "rtti_to_mlds.m"
              else
#line 1462 "rtti_to_mlds.m"
                if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_26)) == (MR_mktag((MR_Integer) 2))))
#line 1462 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1462 "rtti_to_mlds.m"
                else
#line 1462 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1460 "rtti_to_mlds.m"
            }
#line 1464 "rtti_to_mlds.m"
          else
#line 1464 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1473 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1471 "rtti_to_mlds.m"
          {
#line 1471 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ModuleName_36 = ml_backend__rtti_to_mlds__ModuleName_6;
#line 1472 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1471 "rtti_to_mlds.m"
          }
#line 1473 "rtti_to_mlds.m"
        else
#line 1475 "rtti_to_mlds.m"
          {
#line 1475 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiModuleName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 0)));
#line 1474 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__RttiTypeName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 1)));
#line 1474 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__RttiTypeArity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 2)));
#line 1481 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__V_44_44;

#line 1481 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiModuleName_38)) == (MR_mktag((MR_Integer) 0)));
#line 1481 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1481 "rtti_to_mlds.m"
              {
#line 1481 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiModuleName_38, (MR_Integer) 0)));
#line 1481 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__succeeded = (strcmp(ml_backend__rtti_to_mlds__V_44_44, (MR_String) "") == 0);
#line 1481 "rtti_to_mlds.m"
              }
#line 1485 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1482 "rtti_to_mlds.m"
              {
#line 1482 "rtti_to_mlds.m"
                {
#line 1482 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__ModuleName_36 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
                }
#line 1483 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1482 "rtti_to_mlds.m"
              }
#line 1485 "rtti_to_mlds.m"
            else
#line 1486 "rtti_to_mlds.m"
              {
#line 1486 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ModuleName_36 = ml_backend__rtti_to_mlds__RttiModuleName_38;
#line 1487 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1486 "rtti_to_mlds.m"
              }
#line 1475 "rtti_to_mlds.m"
          }
#line 1490 "rtti_to_mlds.m"
        {
#line 1490 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_41 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_36);
        }
#line 1491 "rtti_to_mlds.m"
        {
#line 1491 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_37));
#line 1491 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_18));
#line 1491 "rtti_to_mlds.m"
        }
#line 1491 "rtti_to_mlds.m"
        {
#line 1491 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_DataName_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1491 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 1491 "rtti_to_mlds.m"
        }
#line 1492 "rtti_to_mlds.m"
        {
#line 1492 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__DataAddr_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_41));
#line 1492 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_42));
#line 1492 "rtti_to_mlds.m"
        }
#line 1493 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_43);
#line 1493 "rtti_to_mlds.m"
        {
#line 1493 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1493 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 1493 "rtti_to_mlds.m"
        }
#line 1446 "rtti_to_mlds.m"
      }
#line 1446 "rtti_to_mlds.m"
    else
#line 1448 "rtti_to_mlds.m"
      {
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 0)));
#line 1448 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCRttiName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 1)));

#line 1448 "rtti_to_mlds.m"
        {
#line 1448 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(ml_backend__rtti_to_mlds__TCName_20, ml_backend__rtti_to_mlds__TCRttiName_21);
        }
#line 1448 "rtti_to_mlds.m"
      }
#line 1439 "rtti_to_mlds.m"
    {
#line 1439 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1439 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 1439 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 1439 "rtti_to_mlds.m"
    }
#line 1439 "rtti_to_mlds.m"
    {
#line 1439 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1439 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 1439 "rtti_to_mlds.m"
    }
#line 1437 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1437 "rtti_to_mlds.m"
  }
#line 1434 "rtti_to_mlds.m"
}

#line 1416 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
#line 1416 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1416 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1416 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiName_7)
#line 1416 "rtti_to_mlds.m"
{
#line 1419 "rtti_to_mlds.m"
  {
#line 1419 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_23;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_24;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_28;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_29;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_30;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1419 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;

#line 1464 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1465 "rtti_to_mlds.m"
      {
#line 1465 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 1)));

#line 1467 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
#line 1466 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1467 "rtti_to_mlds.m"
        else
#line 1467 "rtti_to_mlds.m"
          if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 2))))
#line 1467 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1467 "rtti_to_mlds.m"
          else
#line 1467 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1465 "rtti_to_mlds.m"
      }
#line 1464 "rtti_to_mlds.m"
    else
#line 1464 "rtti_to_mlds.m"
      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1460 "rtti_to_mlds.m"
        {
#line 1460 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__TypeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 1)));

#line 1462 "rtti_to_mlds.m"
          if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_13)) == (MR_mktag((MR_Integer) 1))))
#line 1461 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1462 "rtti_to_mlds.m"
          else
#line 1462 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_13)) == (MR_mktag((MR_Integer) 2))))
#line 1462 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1462 "rtti_to_mlds.m"
            else
#line 1462 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1460 "rtti_to_mlds.m"
        }
#line 1464 "rtti_to_mlds.m"
      else
#line 1464 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1473 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1471 "rtti_to_mlds.m"
      {
#line 1471 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ModuleName_23 = ml_backend__rtti_to_mlds__ModuleName_5;
#line 1472 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1471 "rtti_to_mlds.m"
      }
#line 1473 "rtti_to_mlds.m"
    else
#line 1475 "rtti_to_mlds.m"
      {
#line 1475 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiModuleName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 0)));
#line 1474 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__RttiTypeName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 1)));
#line 1474 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__RttiTypeArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 2)));
#line 1481 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_31_31;

#line 1481 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiModuleName_25)) == (MR_mktag((MR_Integer) 0)));
#line 1481 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1481 "rtti_to_mlds.m"
          {
#line 1481 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiModuleName_25, (MR_Integer) 0)));
#line 1481 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = (strcmp(ml_backend__rtti_to_mlds__V_31_31, (MR_String) "") == 0);
#line 1481 "rtti_to_mlds.m"
          }
#line 1485 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1482 "rtti_to_mlds.m"
          {
#line 1482 "rtti_to_mlds.m"
            {
#line 1482 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ModuleName_23 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
            }
#line 1483 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1482 "rtti_to_mlds.m"
          }
#line 1485 "rtti_to_mlds.m"
        else
#line 1486 "rtti_to_mlds.m"
          {
#line 1486 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ModuleName_23 = ml_backend__rtti_to_mlds__RttiModuleName_25;
#line 1487 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1486 "rtti_to_mlds.m"
          }
#line 1475 "rtti_to_mlds.m"
      }
#line 1490 "rtti_to_mlds.m"
    {
#line 1490 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_23);
    }
#line 1491 "rtti_to_mlds.m"
    {
#line 1491 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1491 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_24));
#line 1491 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_7));
#line 1491 "rtti_to_mlds.m"
    }
#line 1491 "rtti_to_mlds.m"
    {
#line 1491 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1491 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1491 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1491 "rtti_to_mlds.m"
    }
#line 1492 "rtti_to_mlds.m"
    {
#line 1492 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_28));
#line 1492 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_29));
#line 1492 "rtti_to_mlds.m"
    }
#line 1493 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_30);
#line 1493 "rtti_to_mlds.m"
    {
#line 1493 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1493 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1493 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1493 "rtti_to_mlds.m"
    }
#line 1419 "rtti_to_mlds.m"
    {
#line 1419 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_8_8));
#line 1419 "rtti_to_mlds.m"
    }
#line 1419 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1419 "rtti_to_mlds.m"
  }
#line 1416 "rtti_to_mlds.m"
}

#line 1406 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
#line 1406 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1406 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2)
#line 1406 "rtti_to_mlds.m"
{
#line 1408 "rtti_to_mlds.m"
  {
#line 1408 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1408 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3;

#line 1408 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1408 "rtti_to_mlds.m"
      {
#line 1408 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1408 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 1)));

#line 1408 "rtti_to_mlds.m"
        {
#line 1408 "rtti_to_mlds.m"
          return ml_backend__rtti_to_mlds__HeadVar__3_3 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_5, ml_backend__rtti_to_mlds__RttiName_6);
        }
#line 1408 "rtti_to_mlds.m"
      }
#line 1408 "rtti_to_mlds.m"
    else
#line 1410 "rtti_to_mlds.m"
      {
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCRttiName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_20;
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_26;
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DataAddr_27;
#line 1410 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;

#line 1501 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1541 "rtti_to_mlds.m"
          {
#line 1541 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds___ClassName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds___Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
            {
#line 1543 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_40);
            }
#line 1541 "rtti_to_mlds.m"
          }
#line 1501 "rtti_to_mlds.m"
        else
#line 1501 "rtti_to_mlds.m"
          if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1541 "rtti_to_mlds.m"
            {
#line 1541 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
              {
#line 1543 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_50);
              }
#line 1541 "rtti_to_mlds.m"
            }
#line 1501 "rtti_to_mlds.m"
          else
#line 1501 "rtti_to_mlds.m"
            if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1541 "rtti_to_mlds.m"
              {
#line 1541 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__ModuleName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                MR_String ml_backend__rtti_to_mlds___ClassName_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                MR_Integer ml_backend__rtti_to_mlds___Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                {
#line 1543 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_55);
                }
#line 1541 "rtti_to_mlds.m"
              }
#line 1501 "rtti_to_mlds.m"
            else
#line 1501 "rtti_to_mlds.m"
              if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1541 "rtti_to_mlds.m"
                {
#line 1541 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                  {
#line 1543 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_60);
                  }
#line 1541 "rtti_to_mlds.m"
                }
#line 1501 "rtti_to_mlds.m"
              else
#line 1501 "rtti_to_mlds.m"
                if ((ml_backend__rtti_to_mlds__TCRttiName_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1541 "rtti_to_mlds.m"
                  {
#line 1541 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                    MR_String ml_backend__rtti_to_mlds___ClassName_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                    MR_Integer ml_backend__rtti_to_mlds___Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                    {
#line 1543 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_65);
                    }
#line 1541 "rtti_to_mlds.m"
                  }
#line 1501 "rtti_to_mlds.m"
                else
#line 1501 "rtti_to_mlds.m"
                  if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 1))))
#line 1499 "rtti_to_mlds.m"
                    {
#line 1499 "rtti_to_mlds.m"
                      MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)));
#line 1499 "rtti_to_mlds.m"
                      MR_String ml_backend__rtti_to_mlds__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 1)));

#line 1500 "rtti_to_mlds.m"
                      {
#line 1500 "rtti_to_mlds.m"
                        ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_18);
                      }
#line 1499 "rtti_to_mlds.m"
                    }
#line 1501 "rtti_to_mlds.m"
                  else
#line 1501 "rtti_to_mlds.m"
                    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 2))))
#line 1541 "rtti_to_mlds.m"
                      {
#line 1541 "rtti_to_mlds.m"
                        MR_Word ml_backend__rtti_to_mlds__ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                        MR_String ml_backend__rtti_to_mlds___ClassName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                        MR_Integer ml_backend__rtti_to_mlds___Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                        {
#line 1543 "rtti_to_mlds.m"
                          ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_45);
                        }
#line 1541 "rtti_to_mlds.m"
                      }
#line 1501 "rtti_to_mlds.m"
                    else
#line 1501 "rtti_to_mlds.m"
                      if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1541 "rtti_to_mlds.m"
                        {
#line 1541 "rtti_to_mlds.m"
                          MR_Word ml_backend__rtti_to_mlds__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                          MR_String ml_backend__rtti_to_mlds___ClassName_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                          MR_Integer ml_backend__rtti_to_mlds___Arity_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                          {
#line 1543 "rtti_to_mlds.m"
                            ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_70);
                          }
#line 1541 "rtti_to_mlds.m"
                        }
#line 1501 "rtti_to_mlds.m"
                      else
#line 1501 "rtti_to_mlds.m"
                        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1541 "rtti_to_mlds.m"
                          {
#line 1541 "rtti_to_mlds.m"
                            MR_Word ml_backend__rtti_to_mlds__ModuleName_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                            MR_String ml_backend__rtti_to_mlds___ClassName_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                            MR_Integer ml_backend__rtti_to_mlds___Arity_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                            {
#line 1543 "rtti_to_mlds.m"
                              ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_75);
                            }
#line 1541 "rtti_to_mlds.m"
                          }
#line 1501 "rtti_to_mlds.m"
                        else
#line 1501 "rtti_to_mlds.m"
                          if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1541 "rtti_to_mlds.m"
                            {
#line 1541 "rtti_to_mlds.m"
                              MR_Word ml_backend__rtti_to_mlds__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                              MR_String ml_backend__rtti_to_mlds___ClassName_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                              MR_Integer ml_backend__rtti_to_mlds___Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                              {
#line 1543 "rtti_to_mlds.m"
                                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_80);
                              }
#line 1541 "rtti_to_mlds.m"
                            }
#line 1501 "rtti_to_mlds.m"
                          else
#line 1501 "rtti_to_mlds.m"
                            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1541 "rtti_to_mlds.m"
                              {
#line 1541 "rtti_to_mlds.m"
                                MR_Word ml_backend__rtti_to_mlds__ModuleName_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                                MR_String ml_backend__rtti_to_mlds___ClassName_86 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                                MR_Integer ml_backend__rtti_to_mlds___Arity_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                                {
#line 1543 "rtti_to_mlds.m"
                                  ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_85);
                                }
#line 1541 "rtti_to_mlds.m"
                              }
#line 1501 "rtti_to_mlds.m"
                            else
#line 1541 "rtti_to_mlds.m"
                              {
#line 1541 "rtti_to_mlds.m"
                                MR_Word ml_backend__rtti_to_mlds__ModuleName_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1542 "rtti_to_mlds.m"
                                MR_String ml_backend__rtti_to_mlds___ClassName_91 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1542 "rtti_to_mlds.m"
                                MR_Integer ml_backend__rtti_to_mlds___Arity_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1543 "rtti_to_mlds.m"
                                {
#line 1543 "rtti_to_mlds.m"
                                  ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_90);
                                }
#line 1541 "rtti_to_mlds.m"
                              }
#line 1535 "rtti_to_mlds.m"
        {
#line 1535 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_DataName_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1535 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1535 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__HeadVar__2_2));
#line 1535 "rtti_to_mlds.m"
        }
#line 1536 "rtti_to_mlds.m"
        {
#line 1536 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__DataAddr_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1536 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_20));
#line 1536 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_26));
#line 1536 "rtti_to_mlds.m"
        }
#line 1537 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_27);
#line 1537 "rtti_to_mlds.m"
        {
#line 1537 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1537 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1537 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1537 "rtti_to_mlds.m"
        }
#line 1428 "rtti_to_mlds.m"
        {
#line 1428 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1428 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 1428 "rtti_to_mlds.m"
        }
#line 1410 "rtti_to_mlds.m"
      }
#line 1408 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__3_3;
#line 1408 "rtti_to_mlds.m"
  }
#line 1406 "rtti_to_mlds.m"
}

#line 1358 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
#line 1358 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1358 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1358 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_7)
#line 1358 "rtti_to_mlds.m"
{
#line 1369 "rtti_to_mlds.m"
  {
#line 1369 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1369 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1369 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__VarNum_9;
#line 1363 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;

#line 1363 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1363 "rtti_to_mlds.m"
      {
#line 1363 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 1)));
#line 1363 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_20_20)) == (MR_mktag((MR_Integer) 3)));
#line 1363 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1363 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__VarNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, (MR_Integer) 0)));
#line 1363 "rtti_to_mlds.m"
      }
#line 1369 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1366 "rtti_to_mlds.m"
      {
#line 1366 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1366 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1366 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1366 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 1392 "rtti_to_mlds.m"
        {
#line 1392 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1392 "rtti_to_mlds.m"
        }
#line 1368 "rtti_to_mlds.m"
        {
#line 1368 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__VarNum_9));
#line 1368 "rtti_to_mlds.m"
        }
#line 1367 "rtti_to_mlds.m"
        {
#line 1367 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1367 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1367 "rtti_to_mlds.m"
        }
#line 1367 "rtti_to_mlds.m"
        {
#line 1367 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1367 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 1367 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 1367 "rtti_to_mlds.m"
        }
#line 1367 "rtti_to_mlds.m"
        {
#line 1367 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 1367 "rtti_to_mlds.m"
        }
#line 1366 "rtti_to_mlds.m"
      }
#line 1369 "rtti_to_mlds.m"
    else
#line 1383 "rtti_to_mlds.m"
      {
#line 1383 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_11;
#line 1383 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_12;
#line 1383 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__InstanceString_13;
#line 1370 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1370 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1370 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1370 "rtti_to_mlds.m"
          {
#line 1370 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__TCName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 1)));
#line 1370 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__InstanceModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 2)));
#line 1370 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__InstanceString_13 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 3)));
#line 1370 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 4)));
#line 1375 "rtti_to_mlds.m"
            {
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_15;
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_16;
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_17;
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_18;
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1375 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_32_32;

#line 1373 "rtti_to_mlds.m"
              {
#line 1373 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceModuleName_12));
#line 1373 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceString_13));
#line 1373 "rtti_to_mlds.m"
              }
#line 1373 "rtti_to_mlds.m"
              {
#line 1373 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1373 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_11));
#line 1373 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1373 "rtti_to_mlds.m"
              }
#line 1376 "rtti_to_mlds.m"
              {
#line 1376 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_12);
              }
#line 1377 "rtti_to_mlds.m"
              {
#line 1377 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_DataName_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1377 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1377 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 1377 "rtti_to_mlds.m"
              }
#line 1380 "rtti_to_mlds.m"
              {
#line 1380 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_15));
#line 1380 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_16));
#line 1380 "rtti_to_mlds.m"
              }
#line 1381 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_17);
#line 1381 "rtti_to_mlds.m"
              {
#line 1381 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1381 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1381 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1381 "rtti_to_mlds.m"
              }
#line 1392 "rtti_to_mlds.m"
              {
#line 1392 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1392 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1392 "rtti_to_mlds.m"
              }
#line 1382 "rtti_to_mlds.m"
              {
#line 1382 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1382 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1382 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_18));
#line 1382 "rtti_to_mlds.m"
              }
#line 1382 "rtti_to_mlds.m"
              {
#line 1382 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1382 "rtti_to_mlds.m"
              }
#line 1375 "rtti_to_mlds.m"
            }
#line 1370 "rtti_to_mlds.m"
          }
#line 1370 "rtti_to_mlds.m"
        else
#line 1384 "rtti_to_mlds.m"
          {
#line 1384 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiId_19;

#line 1384 "rtti_to_mlds.m"
            {
#line 1384 "rtti_to_mlds.m"
              backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__rtti_to_mlds__RttiData_7, &ml_backend__rtti_to_mlds__RttiId_19);
            }
#line 1385 "rtti_to_mlds.m"
            {
#line 1385 "rtti_to_mlds.m"
              return ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(ml_backend__rtti_to_mlds__DestType_5, ml_backend__rtti_to_mlds__ModuleName_6, ml_backend__rtti_to_mlds__RttiId_19);
            }
#line 1384 "rtti_to_mlds.m"
          }
#line 1383 "rtti_to_mlds.m"
      }
#line 1369 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1369 "rtti_to_mlds.m"
  }
#line 1358 "rtti_to_mlds.m"
}

#line 1352 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
#line 1352 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1352 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1352 "rtti_to_mlds.m"
{
#line 1352 "rtti_to_mlds.m"
  {
#line 1352 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1352 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1352 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_8;

#line 1352 "rtti_to_mlds.m"
    {
#line 1352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1352 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_8));
#line 1352 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1352 "rtti_to_mlds.m"
  }
#line 1352 "rtti_to_mlds.m"
}

#line 1348 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
#line 1348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Type_5,
#line 1348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1348 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_7)
#line 1348 "rtti_to_mlds.m"
{
#line 1351 "rtti_to_mlds.m"
  {
#line 1351 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1351 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1351 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;

#line 1352 "rtti_to_mlds.m"
    {
#line 1352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[5]));
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1));
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_5));
#line 1352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_6));
#line 1352 "rtti_to_mlds.m"
    }
#line 1351 "rtti_to_mlds.m"
    {
#line 1351 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__HeadVar__4_4 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ml_backend__rtti_to_mlds__V_8_8, ml_backend__rtti_to_mlds__RttiDatas_7);
    }
#line 1351 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1351 "rtti_to_mlds.m"
  }
#line 1348 "rtti_to_mlds.m"
}

#line 1329 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
#line 1329 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1329 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1329 "rtti_to_mlds.m"
{
#line 1329 "rtti_to_mlds.m"
  {
#line 1329 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1329 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1329 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1329 "rtti_to_mlds.m"
    {
#line 1329 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_int_1_f_0(((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1329 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1329 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1329 "rtti_to_mlds.m"
  }
#line 1329 "rtti_to_mlds.m"
}

#line 1325 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
#line 1325 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5,
#line 1325 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_6,
#line 1325 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
#line 1325 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11)
#line 1325 "rtti_to_mlds.m"
{
#line 1328 "rtti_to_mlds.m"
  {
#line 1328 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1328 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1328 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_23;
#line 1328 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_30;
#line 1328 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 1329 "rtti_to_mlds.m"
    {
#line 1329 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[33], ml_backend__rtti_to_mlds__FunctorNumberMap_6);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_5));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_23));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_30, ml_backend__rtti_to_mlds__RttiId_23, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1328 "rtti_to_mlds.m"
  }
#line 1325 "rtti_to_mlds.m"
}

#line 1295 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(
#line 1295 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1295 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1295 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_7)
#line 1295 "rtti_to_mlds.m"
{
#line 1299 "rtti_to_mlds.m"
  {
#line 1299 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1299 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1299 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
#line 1299 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Type_11;
#line 1299 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;

#line 1301 "rtti_to_mlds.m"
    {
#line 1301 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1301 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_10, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_6));
#line 1301 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 1301 "rtti_to_mlds.m"
    }
#line 1302 "rtti_to_mlds.m"
    {
#line 1302 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 1302 "rtti_to_mlds.m"
    }
#line 1302 "rtti_to_mlds.m"
    {
#line 1302 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Type_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1302 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 1302 "rtti_to_mlds.m"
    }
#line 1313 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7)) == (MR_mktag((MR_Integer) 1))))
#line 1314 "rtti_to_mlds.m"
      {
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuFunctor_14 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7), (MR_Integer) 1);
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1314 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_20_20;
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1314 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1314 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 0)));
#line 1315 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 1)));
#line 1315 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 2)));
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 3)));
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 4)));
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 5)));
#line 1318 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_48_48;
#line 1318 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_49_49;
#line 1318 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 1318 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 1318 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_52_52;

#line 1317 "rtti_to_mlds.m"
        {
#line 1317 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_17_17 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__Name_40);
        }
#line 1318 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 0)));
#line 1318 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 1)));
#line 1318 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 2)));
#line 1318 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 3)));
#line 1318 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 4)));
#line 1318 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 5)));
#line 1318 "rtti_to_mlds.m"
        {
#line 1318 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_19_19 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_20_20);
        }
#line 1319 "rtti_to_mlds.m"
        {
#line 1319 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_22_22 = ml_backend__ml_util__gen_init_bool_1_f_0((MR_Integer) 0);
        }
#line 1320 "rtti_to_mlds.m"
        {
#line 1320 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_26_26 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ml_backend__rtti_to_mlds__MaybeResFunctor_7);
        }
#line 1322 "rtti_to_mlds.m"
        {
#line 1322 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_25_25 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_5, ml_backend__rtti_to_mlds__RttiTypeCtor_6, ml_backend__rtti_to_mlds__V_26_26);
        }
#line 1319 "rtti_to_mlds.m"
        {
#line 1319 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 1319 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1319 "rtti_to_mlds.m"
        }
#line 1318 "rtti_to_mlds.m"
        {
#line 1318 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 1318 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1318 "rtti_to_mlds.m"
        }
#line 1317 "rtti_to_mlds.m"
        {
#line 1317 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 1317 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 1317 "rtti_to_mlds.m"
        }
#line 1316 "rtti_to_mlds.m"
        {
#line 1316 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 1316 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 1316 "rtti_to_mlds.m"
        }
#line 1316 "rtti_to_mlds.m"
        {
#line 1316 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1316 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_11));
#line 1316 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 1316 "rtti_to_mlds.m"
        }
#line 1314 "rtti_to_mlds.m"
      }
#line 1313 "rtti_to_mlds.m"
    else
#line 1304 "rtti_to_mlds.m"
      {
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ResFunctor_12 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7), (MR_Integer) 0);
#line 1304 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 0)));
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1305 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 1)));
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 2)));

#line 1307 "rtti_to_mlds.m"
        {
#line 1307 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__Name_13);
        }
#line 1308 "rtti_to_mlds.m"
        {
#line 1308 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
        }
#line 1309 "rtti_to_mlds.m"
        {
#line 1309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_bool_1_f_0((MR_Integer) 1);
        }
#line 1310 "rtti_to_mlds.m"
        {
#line 1310 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_38_38 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ml_backend__rtti_to_mlds__MaybeResFunctor_7);
        }
#line 1312 "rtti_to_mlds.m"
        {
#line 1312 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_37_37 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_5, ml_backend__rtti_to_mlds__RttiTypeCtor_6, ml_backend__rtti_to_mlds__V_38_38);
        }
#line 1309 "rtti_to_mlds.m"
        {
#line 1309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1309 "rtti_to_mlds.m"
        }
#line 1308 "rtti_to_mlds.m"
        {
#line 1308 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1308 "rtti_to_mlds.m"
        }
#line 1307 "rtti_to_mlds.m"
        {
#line 1307 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1307 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1307 "rtti_to_mlds.m"
        }
#line 1306 "rtti_to_mlds.m"
        {
#line 1306 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1306 "rtti_to_mlds.m"
        }
#line 1306 "rtti_to_mlds.m"
        {
#line 1306 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_11));
#line 1306 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1306 "rtti_to_mlds.m"
        }
#line 1304 "rtti_to_mlds.m"
      }
#line 1299 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1299 "rtti_to_mlds.m"
  }
#line 1295 "rtti_to_mlds.m"
}

#line 1288 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2(
#line 1288 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1288 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1288 "rtti_to_mlds.m"
{
#line 1288 "rtti_to_mlds.m"
  {
#line 1288 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1288 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1288 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_Initializer_8;

#line 1288 "rtti_to_mlds.m"
    {
#line 1288 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_Initializer_8 = ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1288 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_Initializer_8));
#line 1288 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1288 "rtti_to_mlds.m"
  }
#line 1288 "rtti_to_mlds.m"
}

#line 1285 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1(
#line 1285 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1285 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1285 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1285 "rtti_to_mlds.m"
{
#line 1285 "rtti_to_mlds.m"
  {
#line 1285 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1285 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_24;

#line 1285 "rtti_to_mlds.m"
    {
#line 1285 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1285__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv0_HeadVar__2_24);
    }
#line 1285 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_24));
#line 1285 "rtti_to_mlds.m"
  }
#line 1285 "rtti_to_mlds.m"
}

#line 1278 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(
#line 1278 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1278 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1278 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1278 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16,
#line 1278 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17)
#line 1278 "rtti_to_mlds.m"
{
#line 1283 "rtti_to_mlds.m"
  {
#line 1283 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_22_22 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[3];
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_28_28;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArityMaps_10;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorLists_11;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_12;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_14;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1283 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1284 "rtti_to_mlds.m"
    {
#line 1284 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeInfo_22_22, ml_backend__rtti_to_mlds__NameArityMap_8, &ml_backend__rtti_to_mlds__ArityMaps_10);
    }
#line 1285 "rtti_to_mlds.m"
    {
#line 1285 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_22_22, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[6], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[32], ml_backend__rtti_to_mlds__ArityMaps_10, &ml_backend__rtti_to_mlds__FunctorLists_11);
    }
#line 8076 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_28_28 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
#line 1286 "rtti_to_mlds.m"
    {
#line 1286 "rtti_to_mlds.m"
      mercury__list__condense_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_28_28, ml_backend__rtti_to_mlds__FunctorLists_11, &ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1287 "rtti_to_mlds.m"
    {
#line 1287 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_13);
    }
#line 1288 "rtti_to_mlds.m"
    {
#line 1288 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1288 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[4]));
#line 1288 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2));
#line 1288 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1288 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
#line 1288 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1288 "rtti_to_mlds.m"
    }
#line 1288 "rtti_to_mlds.m"
    {
#line 1288 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_14 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_28_28, ml_backend__rtti_to_mlds__V_19_19, ml_backend__rtti_to_mlds__Functors_12);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1283 "rtti_to_mlds.m"
  }
#line 1278 "rtti_to_mlds.m"
}

#line 1273 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1(
#line 1273 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1273 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1273 "rtti_to_mlds.m"
{
#line 1273 "rtti_to_mlds.m"
  {
#line 1273 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1273 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1273 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__3_3;

#line 1273 "rtti_to_mlds.m"
    {
#line 1273 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__3_3 = ml_backend__ml_util__gen_init_reserved_address_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1273 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__3_3));
#line 1273 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1273 "rtti_to_mlds.m"
  }
#line 1273 "rtti_to_mlds.m"
}

#line 1267 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(
#line 1267 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1267 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1267 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResAddrs_8,
#line 1267 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1267 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1267 "rtti_to_mlds.m"
{
#line 1271 "rtti_to_mlds.m"
  {
#line 1271 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1271 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_10;
#line 1271 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 1271 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_25;
#line 1271 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_32;
#line 1271 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;

#line 1273 "rtti_to_mlds.m"
    {
#line 1273 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1273 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[4]));
#line 1273 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1));
#line 1273 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1273 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
#line 1273 "rtti_to_mlds.m"
    }
#line 1272 "rtti_to_mlds.m"
    {
#line 1272 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, ml_backend__rtti_to_mlds__V_14_14, ml_backend__rtti_to_mlds__ResAddrs_8);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_25));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_32, ml_backend__rtti_to_mlds__RttiId_25, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1271 "rtti_to_mlds.m"
  }
#line 1267 "rtti_to_mlds.m"
}

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1340 "rtti_to_mlds.m"
{
#line 1340 "rtti_to_mlds.m"
  {
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1340 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__4_4;

#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1340 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__4_4));
#line 1340 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
  }
#line 1340 "rtti_to_mlds.m"
}

#line 1260 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3(
#line 1260 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1260 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1260 "rtti_to_mlds.m"
{
#line 1260 "rtti_to_mlds.m"
  {
#line 1260 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1260 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 1260 "rtti_to_mlds.m"
    {
#line 1260 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__res_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1260 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 1260 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1260 "rtti_to_mlds.m"
  }
#line 1260 "rtti_to_mlds.m"
}

#line 1225 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2(
#line 1225 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1225 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1225 "rtti_to_mlds.m"
{
#line 1225 "rtti_to_mlds.m"
  {
#line 1225 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1225 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1225 "rtti_to_mlds.m"
    {
#line 1225 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = backend_libs__rtti__res_addr_is_numeric_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1225 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1225 "rtti_to_mlds.m"
  }
#line 1225 "rtti_to_mlds.m"
}

#line 1224 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1(
#line 1224 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1224 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1224 "rtti_to_mlds.m"
{
#line 1224 "rtti_to_mlds.m"
  {
#line 1224 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1224 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1224 "rtti_to_mlds.m"
    {
#line 1224 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__res_addr_rep_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1224 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1224 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1224 "rtti_to_mlds.m"
  }
#line 1224 "rtti_to_mlds.m"
}

#line 1218 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResFunctors_9,
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuByPtag_10,
#line 1218 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1218 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23)
#line 1218 "rtti_to_mlds.m"
{
#line 1223 "rtti_to_mlds.m"
  {
#line 1223 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ResFunctorReps_12;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__NumericResFunctorReps_13;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14;
#line 1223 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15;
#line 1223 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_17;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ResAddrInitializer_18;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_20;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_21;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_57;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_58;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_79;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_86;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_94;
#line 1223 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_95_95;

#line 1224 "rtti_to_mlds.m"
    {
#line 1224 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ResFunctorReps_12 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[29], ml_backend__rtti_to_mlds__ResFunctors_9);
    }
#line 1225 "rtti_to_mlds.m"
    {
#line 1225 "rtti_to_mlds.m"
      mercury__list__filter_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[30], ml_backend__rtti_to_mlds__ResFunctorReps_12, &ml_backend__rtti_to_mlds__NumericResFunctorReps_13, &ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14);
    }
#line 1227 "rtti_to_mlds.m"
    {
#line 1227 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, ml_backend__rtti_to_mlds__NumericResFunctorReps_13, &ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15);
    }
#line 1228 "rtti_to_mlds.m"
    {
#line 1228 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14, &ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16);
    }
#line 1229 "rtti_to_mlds.m"
    {
#line 1229 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_17);
    }
#line 1260 "rtti_to_mlds.m"
    {
#line 1260 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_57 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[31], ml_backend__rtti_to_mlds__ResFunctors_9);
    }
#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_17));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 1340 "rtti_to_mlds.m"
    }
#line 1339 "rtti_to_mlds.m"
    {
#line 1339 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_58 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_69_69, ml_backend__rtti_to_mlds__FunctorRttiNames_57);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_87_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_79));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_86, ml_backend__rtti_to_mlds__RttiId_79, ml_backend__rtti_to_mlds__Initializer_58, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26);
    }
#line 1232 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16 == (MR_Integer) 0);
#line 1234 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1233 "rtti_to_mlds.m"
      {
#line 1233 "rtti_to_mlds.m"
        {
#line 1233 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ResAddrInitializer_18 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 1233 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
#line 1233 "rtti_to_mlds.m"
      }
#line 1234 "rtti_to_mlds.m"
    else
#line 1236 "rtti_to_mlds.m"
      {
#line 1235 "rtti_to_mlds.m"
        {
#line 1235 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28);
        }
#line 1237 "rtti_to_mlds.m"
        {
#line 1237 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ResAddrInitializer_18 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        }
#line 1236 "rtti_to_mlds.m"
      }
#line 1240 "rtti_to_mlds.m"
    {
#line 1240 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__DuByPtag_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30);
    }
#line 1242 "rtti_to_mlds.m"
    {
#line 1242 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1242 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 1242 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 1242 "rtti_to_mlds.m"
    }
#line 1243 "rtti_to_mlds.m"
    {
#line 1243 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
#line 1243 "rtti_to_mlds.m"
    }
#line 1243 "rtti_to_mlds.m"
    {
#line 1243 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1243 "rtti_to_mlds.m"
    }
#line 1244 "rtti_to_mlds.m"
    {
#line 1244 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15);
    }
#line 1245 "rtti_to_mlds.m"
    {
#line 1245 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16);
    }
#line 1248 "rtti_to_mlds.m"
    {
#line 1248 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_39_39 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
    }
#line 1251 "rtti_to_mlds.m"
    {
#line 1251 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_42_42 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
    }
#line 1248 "rtti_to_mlds.m"
    {
#line 1248 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1248 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 1248 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1248 "rtti_to_mlds.m"
    }
#line 1246 "rtti_to_mlds.m"
    {
#line 1246 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1246 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 1246 "rtti_to_mlds.m"
    }
#line 1245 "rtti_to_mlds.m"
    {
#line 1245 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ResAddrInitializer_18));
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 1245 "rtti_to_mlds.m"
    }
#line 1244 "rtti_to_mlds.m"
    {
#line 1244 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1244 "rtti_to_mlds.m"
    }
#line 1243 "rtti_to_mlds.m"
    {
#line 1243 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 1243 "rtti_to_mlds.m"
    }
#line 1243 "rtti_to_mlds.m"
    {
#line 1243 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1243 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_95_95, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_94, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_95_95));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_94, ml_backend__rtti_to_mlds__RttiId_20, ml_backend__rtti_to_mlds__Initializer_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1223 "rtti_to_mlds.m"
  }
#line 1218 "rtti_to_mlds.m"
}

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1340 "rtti_to_mlds.m"
{
#line 1340 "rtti_to_mlds.m"
  {
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1340 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__4_4;

#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1340 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__4_4));
#line 1340 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
  }
#line 1340 "rtti_to_mlds.m"
}

#line 1211 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2(
#line 1211 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1211 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1211 "rtti_to_mlds.m"
{
#line 1211 "rtti_to_mlds.m"
  {
#line 1211 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1211 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1211 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 1211 "rtti_to_mlds.m"
    {
#line 1211 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1211 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 1211 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1211 "rtti_to_mlds.m"
  }
#line 1211 "rtti_to_mlds.m"
}

#line 1208 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1(
#line 1208 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1208 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1208 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1208 "rtti_to_mlds.m"
{
#line 1208 "rtti_to_mlds.m"
  {
#line 1208 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1208 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_25;

#line 1208 "rtti_to_mlds.m"
    {
#line 1208 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1208__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv0_HeadVar__2_25);
    }
#line 1208 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_25));
#line 1208 "rtti_to_mlds.m"
  }
#line 1208 "rtti_to_mlds.m"
}

#line 1201 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(
#line 1201 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1201 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1201 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1201 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
#line 1201 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18)
#line 1201 "rtti_to_mlds.m"
{
#line 1206 "rtti_to_mlds.m"
  {
#line 1206 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_23_23 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[2];
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_29_29;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArityMaps_10;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorLists_11;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_12;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_14;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_15;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_46;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_53;
#line 1206 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;

#line 1207 "rtti_to_mlds.m"
    {
#line 1207 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeInfo_23_23, ml_backend__rtti_to_mlds__NameArityMap_8, &ml_backend__rtti_to_mlds__ArityMaps_10);
    }
#line 1208 "rtti_to_mlds.m"
    {
#line 1208 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_23_23, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[5], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[27], ml_backend__rtti_to_mlds__ArityMaps_10, &ml_backend__rtti_to_mlds__FunctorLists_11);
    }
#line 8886 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 1209 "rtti_to_mlds.m"
    {
#line 1209 "rtti_to_mlds.m"
      mercury__list__condense_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_29_29, ml_backend__rtti_to_mlds__FunctorLists_11, &ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1210 "rtti_to_mlds.m"
    {
#line 1210 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_13);
    }
#line 1211 "rtti_to_mlds.m"
    {
#line 1211 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_14 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_29_29, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[28], ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1340 "rtti_to_mlds.m"
    }
#line 1339 "rtti_to_mlds.m"
    {
#line 1339 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_15 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_36_36, ml_backend__rtti_to_mlds__FunctorRttiNames_14);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_54_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_46));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_53, ml_backend__rtti_to_mlds__RttiId_46, ml_backend__rtti_to_mlds__Initializer_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1206 "rtti_to_mlds.m"
  }
#line 1201 "rtti_to_mlds.m"
}

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1340 "rtti_to_mlds.m"
{
#line 1340 "rtti_to_mlds.m"
  {
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1340 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1340 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1340 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
  }
#line 1340 "rtti_to_mlds.m"
}

#line 1194 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
#line 1194 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1194 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1194 "rtti_to_mlds.m"
{
#line 1194 "rtti_to_mlds.m"
  {
#line 1194 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1194 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1194 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1194 "rtti_to_mlds.m"
    {
#line 1194 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1194 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1194 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1194 "rtti_to_mlds.m"
  }
#line 1194 "rtti_to_mlds.m"
}

#line 1186 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
#line 1186 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1186 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1186 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1186 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 1186 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 1186 "rtti_to_mlds.m"
{
#line 1191 "rtti_to_mlds.m"
  {
#line 1191 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_23_23 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 1191 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 0)));
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 1)));
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 2)));
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagFunctors_14;
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_15;
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_16;
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_17;
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_40;
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_47;
#line 1191 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___SectagLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 0)));
#line 1192 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds___NumSharers_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 1)));

#line 1193 "rtti_to_mlds.m"
    {
#line 1193 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_23_23, ml_backend__rtti_to_mlds__SectagMap_13, &ml_backend__rtti_to_mlds__SectagFunctors_14);
    }
#line 1194 "rtti_to_mlds.m"
    {
#line 1194 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_15 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_23_23, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[26], ml_backend__rtti_to_mlds__SectagFunctors_14);
    }
#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_6));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1340 "rtti_to_mlds.m"
    }
#line 1339 "rtti_to_mlds.m"
    {
#line 1339 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_16 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_30_30, ml_backend__rtti_to_mlds__FunctorRttiNames_15);
    }
#line 1197 "rtti_to_mlds.m"
    {
#line 1197 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1197 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1197 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_8));
#line 1197 "rtti_to_mlds.m"
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_17));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_40));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_47, ml_backend__rtti_to_mlds__RttiId_40, ml_backend__rtti_to_mlds__Initializer_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1191 "rtti_to_mlds.m"
  }
#line 1186 "rtti_to_mlds.m"
}

#line 1173 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1(
#line 1173 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg)
#line 1173 "rtti_to_mlds.m"
{
#line 1173 "rtti_to_mlds.m"
  {
#line 1173 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1173 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1173 "rtti_to_mlds.m"
    {
#line 1173 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1173__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))));
    }
#line 1173 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1173 "rtti_to_mlds.m"
  }
#line 1173 "rtti_to_mlds.m"
}

#line 1166 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(
#line 1166 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1166 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_2,
#line 1166 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1166 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4)
#line 1166 "rtti_to_mlds.m"
{
#line 1169 "rtti_to_mlds.m"
  {
#line 1169 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1169 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__5_5;

#line 1169 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1169 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1169 "rtti_to_mlds.m"
    else
#line 1172 "rtti_to_mlds.m"
      {
#line 1172 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Ptag_11;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SectagTable_12;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PtagTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 1)));
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_15;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializers_16;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SectagLocn_17;
#line 1172 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__NumSharers_18;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_20;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_21;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 0)));
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1172 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 1172 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_37_37;
#line 1172 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_41;
#line 1174 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds___SectagMap_19;

#line 1171 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Ptag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, (MR_Integer) 0)));
#line 1171 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SectagTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, (MR_Integer) 1)));
#line 1173 "rtti_to_mlds.m"
        {
#line 1173 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[9]));
#line 1173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1));
#line 1173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__CurPtag_4));
#line 1173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1173 "rtti_to_mlds.m"
        }
#line 1173 "rtti_to_mlds.m"
        {
#line 1173 "rtti_to_mlds.m"
          mercury__require__expect_4_p_0(ml_backend__rtti_to_mlds__V_23_23, (MR_String) "ml_backend.rtti_to_mlds", (MR_String) "function \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table_body\'/4", (MR_String) "ptag mismatch");
        }
#line 1174 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SectagLocn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 0)));
#line 1174 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__NumSharers_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 1)));
#line 1174 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds___SectagMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 2)));
#line 1175 "rtti_to_mlds.m"
        {
#line 1175 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1175 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1175 "rtti_to_mlds.m"
        }
#line 1176 "rtti_to_mlds.m"
        {
#line 1176 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1176 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_2));
#line 1176 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_20));
#line 1176 "rtti_to_mlds.m"
        }
#line 1177 "rtti_to_mlds.m"
        {
#line 1177 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_21));
#line 1177 "rtti_to_mlds.m"
        }
#line 1177 "rtti_to_mlds.m"
        {
#line 1177 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1177 "rtti_to_mlds.m"
        }
#line 1178 "rtti_to_mlds.m"
        {
#line 1178 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSharers_18);
        }
#line 1731 "rtti_to_mlds.m"
        {
#line 1731 "rtti_to_mlds.m"
          backend_libs__rtti__sectag_locn_to_string_2_p_0(ml_backend__rtti_to_mlds__SectagLocn_17, &ml_backend__rtti_to_mlds__Name_41);
        }
#line 1730 "rtti_to_mlds.m"
        {
#line 1730 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_32_32 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_41);
        }
#line 1180 "rtti_to_mlds.m"
        {
#line 1180 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1180 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1180 "rtti_to_mlds.m"
        }
#line 1182 "rtti_to_mlds.m"
        {
#line 1182 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_2, ml_backend__rtti_to_mlds__V_35_35);
        }
#line 1179 "rtti_to_mlds.m"
        {
#line 1179 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1179 "rtti_to_mlds.m"
        }
#line 1178 "rtti_to_mlds.m"
        {
#line 1178 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1178 "rtti_to_mlds.m"
        }
#line 1177 "rtti_to_mlds.m"
        {
#line 1177 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_29_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1177 "rtti_to_mlds.m"
        }
#line 1177 "rtti_to_mlds.m"
        {
#line 1177 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1177 "rtti_to_mlds.m"
        }
#line 1183 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_37_37 = (ml_backend__rtti_to_mlds__CurPtag_4 + (MR_Integer) 1);
#line 1183 "rtti_to_mlds.m"
        {
#line 1183 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializers_16 = ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_2, ml_backend__rtti_to_mlds__PtagTail_13, ml_backend__rtti_to_mlds__V_37_37);
        }
#line 1172 "rtti_to_mlds.m"
        {
#line 1172 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__5_5, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializer_15));
#line 1172 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__5_5, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializers_16));
#line 1172 "rtti_to_mlds.m"
        }
#line 1172 "rtti_to_mlds.m"
      }
#line 1169 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__5_5;
#line 1169 "rtti_to_mlds.m"
  }
#line 1166 "rtti_to_mlds.m"
}

#line 1130 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
#line 1130 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1130 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1130 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1130 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1130 "rtti_to_mlds.m"
{
#line 1130 "rtti_to_mlds.m"
  {
#line 1130 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1130 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19;

#line 1130 "rtti_to_mlds.m"
    {
#line 1130 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19);
    }
#line 1130 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19));
#line 1130 "rtti_to_mlds.m"
  }
#line 1130 "rtti_to_mlds.m"
}

#line 1123 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
#line 1123 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1123 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1123 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PtagMap_8,
#line 1123 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21,
#line 1123 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22)
#line 1123 "rtti_to_mlds.m"
{
#line 1127 "rtti_to_mlds.m"
  {
#line 1127 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_10;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagList_11;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagInitPrefix_12;
#line 1127 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__FirstPtag_13;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagInitializers_18;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_64;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_71;
#line 1127 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_72_72;
#line 1130 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24;

#line 1128 "rtti_to_mlds.m"
    {
#line 1128 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_10);
    }
#line 1129 "rtti_to_mlds.m"
    {
#line 1129 "rtti_to_mlds.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, ml_backend__rtti_to_mlds__PtagMap_8, &ml_backend__rtti_to_mlds__PtagList_11);
    }
#line 1130 "rtti_to_mlds.m"
    {
#line 1130 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[6]));
#line 1130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1));
#line 1130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_10));
#line 1130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1130 "rtti_to_mlds.m"
    }
#line 1130 "rtti_to_mlds.m"
    {
#line 1130 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0((MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[1], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_23_23, ml_backend__rtti_to_mlds__PtagList_11, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24);
    }
#line 1130 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24);
#line 1136 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__PtagList_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1133 "rtti_to_mlds.m"
      {
#line 1134 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1135 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FirstPtag_13 = (MR_Integer) 0;
#line 1133 "rtti_to_mlds.m"
      }
#line 1136 "rtti_to_mlds.m"
    else
#line 1137 "rtti_to_mlds.m"
      {
#line 1137 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagList_11, (MR_Integer) 0)));
#line 1137 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagList_11, (MR_Integer) 1)));
#line 1137 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1137 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FirstPtag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, (MR_Integer) 0)));
#line 1137 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, (MR_Integer) 1)));
#line 1138 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__FirstPtag_13 == (MR_Integer) 0);
#line 1141 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1139 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1141 "rtti_to_mlds.m"
        else
#line 1155 "rtti_to_mlds.m"
          {
#line 1141 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__FirstPtag_13 == (MR_Integer) 1);
#line 1155 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1143 "rtti_to_mlds.m"
              {
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__RttiElemId_17;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1143 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_40_40;

#line 1144 "rtti_to_mlds.m"
                {
#line 1144 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__RttiElemId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1144 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiElemId_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1144 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiElemId_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[12])));
#line 1144 "rtti_to_mlds.m"
                }
#line 1146 "rtti_to_mlds.m"
                {
#line 1146 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1146 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiElemId_17));
#line 1146 "rtti_to_mlds.m"
                }
#line 1146 "rtti_to_mlds.m"
                {
#line 1146 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1146 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1146 "rtti_to_mlds.m"
                }
#line 1147 "rtti_to_mlds.m"
                {
#line 1147 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
                }
#line 1148 "rtti_to_mlds.m"
                {
#line 1148 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_builtin_const_1_f_0((MR_String) "MR_SECTAG_VARIABLE");
                }
#line 1150 "rtti_to_mlds.m"
                {
#line 1150 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1150 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[13])));
#line 1150 "rtti_to_mlds.m"
                }
#line 1150 "rtti_to_mlds.m"
                {
#line 1150 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1150 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_40_40));
#line 1150 "rtti_to_mlds.m"
                }
#line 1149 "rtti_to_mlds.m"
                {
#line 1149 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1149 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1149 "rtti_to_mlds.m"
                }
#line 1152 "rtti_to_mlds.m"
                {
#line 1152 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_37_37 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_38_38);
                }
#line 1148 "rtti_to_mlds.m"
                {
#line 1148 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1148 "rtti_to_mlds.m"
                }
#line 1147 "rtti_to_mlds.m"
                {
#line 1147 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1147 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1147 "rtti_to_mlds.m"
                }
#line 1146 "rtti_to_mlds.m"
                {
#line 1146 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1146 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1146 "rtti_to_mlds.m"
                }
#line 1153 "rtti_to_mlds.m"
                {
#line 1153 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1153 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1153 "rtti_to_mlds.m"
                }
#line 1145 "rtti_to_mlds.m"
                {
#line 1145 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagInitPrefix_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1145 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagInitPrefix_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1145 "rtti_to_mlds.m"
                }
#line 1143 "rtti_to_mlds.m"
              }
#line 1155 "rtti_to_mlds.m"
            else
#line 1156 "rtti_to_mlds.m"
              {
#line 1156 "rtti_to_mlds.m"
                {
#line 1156 "rtti_to_mlds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table\'/5", (MR_String) "bad ptag list");
#line 1156 "rtti_to_mlds.m"
                  return;
                }
#line 1156 "rtti_to_mlds.m"
              }
#line 1155 "rtti_to_mlds.m"
          }
#line 1137 "rtti_to_mlds.m"
      }
#line 1159 "rtti_to_mlds.m"
    {
#line 1159 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__PtagInitializers_18 = ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(ml_backend__rtti_to_mlds__ModuleName_10, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__PtagList_11, ml_backend__rtti_to_mlds__FirstPtag_13);
    }
#line 1162 "rtti_to_mlds.m"
    {
#line 1162 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__rtti_to_mlds__PtagInitPrefix_12, ml_backend__rtti_to_mlds__PtagInitializers_18);
    }
#line 1162 "rtti_to_mlds.m"
    {
#line 1162 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 1162 "rtti_to_mlds.m"
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_72_72, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_64));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_72_72));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_71, ml_backend__rtti_to_mlds__RttiId_64, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1127 "rtti_to_mlds.m"
  }
#line 1123 "rtti_to_mlds.m"
}

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1340 "rtti_to_mlds.m"
{
#line 1340 "rtti_to_mlds.m"
  {
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1340 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1340 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1340 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
  }
#line 1340 "rtti_to_mlds.m"
}

#line 1116 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
#line 1116 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1116 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1116 "rtti_to_mlds.m"
{
#line 1116 "rtti_to_mlds.m"
  {
#line 1116 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1116 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1116 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1116 "rtti_to_mlds.m"
    {
#line 1116 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1116 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1116 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1116 "rtti_to_mlds.m"
  }
#line 1116 "rtti_to_mlds.m"
}

#line 1108 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
#line 1108 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1108 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1108 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_8,
#line 1108 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1108 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1108 "rtti_to_mlds.m"
{
#line 1113 "rtti_to_mlds.m"
  {
#line 1113 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1114 "rtti_to_mlds.m"
    {
#line 1114 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__ForeignEnumByName_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1115 "rtti_to_mlds.m"
    {
#line 1115 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1116 "rtti_to_mlds.m"
    {
#line 1116 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[25], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1340 "rtti_to_mlds.m"
    }
#line 1339 "rtti_to_mlds.m"
    {
#line 1339 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1113 "rtti_to_mlds.m"
  }
#line 1108 "rtti_to_mlds.m"
}

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1340 "rtti_to_mlds.m"
{
#line 1340 "rtti_to_mlds.m"
  {
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1340 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1340 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1340 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
  }
#line 1340 "rtti_to_mlds.m"
}

#line 1101 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
#line 1101 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1101 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1101 "rtti_to_mlds.m"
{
#line 1101 "rtti_to_mlds.m"
  {
#line 1101 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1101 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1101 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1101 "rtti_to_mlds.m"
    {
#line 1101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1101 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1101 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1101 "rtti_to_mlds.m"
  }
#line 1101 "rtti_to_mlds.m"
}

#line 1093 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
#line 1093 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1093 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1093 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8,
#line 1093 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1093 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1093 "rtti_to_mlds.m"
{
#line 1098 "rtti_to_mlds.m"
  {
#line 1098 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1098 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1099 "rtti_to_mlds.m"
    {
#line 1099 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1100 "rtti_to_mlds.m"
    {
#line 1100 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1101 "rtti_to_mlds.m"
    {
#line 1101 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[24], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1340 "rtti_to_mlds.m"
    }
#line 1339 "rtti_to_mlds.m"
    {
#line 1339 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1098 "rtti_to_mlds.m"
  }
#line 1093 "rtti_to_mlds.m"
}

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1340 "rtti_to_mlds.m"
{
#line 1340 "rtti_to_mlds.m"
  {
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1340 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1340 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1340 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
  }
#line 1340 "rtti_to_mlds.m"
}

#line 1086 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
#line 1086 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1086 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1086 "rtti_to_mlds.m"
{
#line 1086 "rtti_to_mlds.m"
  {
#line 1086 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1086 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1086 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1086 "rtti_to_mlds.m"
    {
#line 1086 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1086 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1086 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1086 "rtti_to_mlds.m"
  }
#line 1086 "rtti_to_mlds.m"
}

#line 1078 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
#line 1078 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1078 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1078 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByName_8,
#line 1078 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1078 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1078 "rtti_to_mlds.m"
{
#line 1083 "rtti_to_mlds.m"
  {
#line 1083 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1083 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1084 "rtti_to_mlds.m"
    {
#line 1084 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__EnumByName_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1085 "rtti_to_mlds.m"
    {
#line 1085 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1086 "rtti_to_mlds.m"
    {
#line 1086 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[23], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1340 "rtti_to_mlds.m"
    }
#line 1339 "rtti_to_mlds.m"
    {
#line 1339 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1083 "rtti_to_mlds.m"
  }
#line 1078 "rtti_to_mlds.m"
}

#line 1340 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2(
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1340 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1340 "rtti_to_mlds.m"
{
#line 1340 "rtti_to_mlds.m"
  {
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1340 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1340 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1340 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1340 "rtti_to_mlds.m"
  }
#line 1340 "rtti_to_mlds.m"
}

#line 1071 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1(
#line 1071 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1071 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1071 "rtti_to_mlds.m"
{
#line 1071 "rtti_to_mlds.m"
  {
#line 1071 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1071 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1071 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1071 "rtti_to_mlds.m"
    {
#line 1071 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1071 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1071 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1071 "rtti_to_mlds.m"
  }
#line 1071 "rtti_to_mlds.m"
}

#line 1063 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(
#line 1063 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1063 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1063 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByValue_8,
#line 1063 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1063 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1063 "rtti_to_mlds.m"
{
#line 1068 "rtti_to_mlds.m"
  {
#line 1068 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1068 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1069 "rtti_to_mlds.m"
    {
#line 1069 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__EnumByValue_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1070 "rtti_to_mlds.m"
    {
#line 1070 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1071 "rtti_to_mlds.m"
    {
#line 1071 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[22], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1340 "rtti_to_mlds.m"
    {
#line 1340 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1340 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1340 "rtti_to_mlds.m"
    }
#line 1339 "rtti_to_mlds.m"
    {
#line 1339 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 1068 "rtti_to_mlds.m"
  }
#line 1063 "rtti_to_mlds.m"
}

#line 1025 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(
#line 1025 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 1025 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfo_7,
#line 1025 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__ArgLocnInitializer_8,
#line 1025 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__PrevOffset_9,
#line 1025 "rtti_to_mlds.m"
  MR_Integer * ml_backend__rtti_to_mlds__NextPrevOffset_10)
#line 1025 "rtti_to_mlds.m"
{
#line 1029 "rtti_to_mlds.m"
  {
#line 1029 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgWidth_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 2)));
#line 1029 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1029 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Shift_13;
#line 1029 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Bits_14;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1029 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 0)));
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 1)));

#line 1037 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__ArgWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1038 "rtti_to_mlds.m"
      {
#line 1039 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1040 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1041 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Bits_14 = (MR_Integer) -1;
#line 1042 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__NextPrevOffset_10 = (ml_backend__rtti_to_mlds__FieldOffset_12 + (MR_Integer) 1);
#line 1038 "rtti_to_mlds.m"
      }
#line 1037 "rtti_to_mlds.m"
    else
#line 1037 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__ArgWidth_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1032 "rtti_to_mlds.m"
        {
#line 1033 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1034 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1035 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Bits_14 = (MR_Integer) 0;
#line 1036 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1032 "rtti_to_mlds.m"
        }
#line 1037 "rtti_to_mlds.m"
      else
#line 1037 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__ArgWidth_11)) == (MR_mktag((MR_Integer) 1))))
#line 1044 "rtti_to_mlds.m"
          {
#line 1044 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__Mask_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 0)));
#line 1044 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__V_19_19;

#line 1045 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1046 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1047 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_19_19 = (ml_backend__rtti_to_mlds__Mask_15 + (MR_Integer) 1);
#line 1047 "rtti_to_mlds.m"
            {
#line 1047 "rtti_to_mlds.m"
              mercury__int__log2_2_p_0(ml_backend__rtti_to_mlds__V_19_19, &ml_backend__rtti_to_mlds__Bits_14);
            }
#line 1048 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1044 "rtti_to_mlds.m"
          }
#line 1037 "rtti_to_mlds.m"
        else
#line 1050 "rtti_to_mlds.m"
          {
#line 1050 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__V_16_16;
#line 1050 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__Mask_33;

#line 1050 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Shift_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 0)));
#line 1050 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Mask_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 1)));
#line 1051 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__FieldOffset_12 = ml_backend__rtti_to_mlds__PrevOffset_9;
#line 1052 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_16_16 = (ml_backend__rtti_to_mlds__Mask_33 + (MR_Integer) 1);
#line 1052 "rtti_to_mlds.m"
            {
#line 1052 "rtti_to_mlds.m"
              mercury__int__log2_2_p_0(ml_backend__rtti_to_mlds__V_16_16, &ml_backend__rtti_to_mlds__Bits_14);
            }
#line 1053 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1050 "rtti_to_mlds.m"
          }
#line 1055 "rtti_to_mlds.m"
    {
#line 1055 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1055 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_6));
#line 1055 "rtti_to_mlds.m"
    }
#line 1055 "rtti_to_mlds.m"
    {
#line 1055 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1055 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 1055 "rtti_to_mlds.m"
    }
#line 1056 "rtti_to_mlds.m"
    {
#line 1056 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__FieldOffset_12);
    }
#line 1057 "rtti_to_mlds.m"
    {
#line 1057 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_29_29 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Shift_13);
    }
#line 1059 "rtti_to_mlds.m"
    {
#line 1059 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Bits_14);
    }
#line 1057 "rtti_to_mlds.m"
    {
#line 1057 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1057 "rtti_to_mlds.m"
    }
#line 1056 "rtti_to_mlds.m"
    {
#line 1056 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1056 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1056 "rtti_to_mlds.m"
    }
#line 1055 "rtti_to_mlds.m"
    {
#line 1055 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1055 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1055 "rtti_to_mlds.m"
    }
#line 1055 "rtti_to_mlds.m"
    {
#line 1055 "rtti_to_mlds.m"
      MR_Word base;
#line 1055 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1055 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__ArgLocnInitializer_8 = base;
#line 1055 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1055 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 1055 "rtti_to_mlds.m"
    }
#line 1029 "rtti_to_mlds.m"
  }
#line 1025 "rtti_to_mlds.m"
}

#line 979 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0_1(
#line 979 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 979 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 979 "rtti_to_mlds.m"
{
#line 979 "rtti_to_mlds.m"
  {
#line 979 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 979 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 979 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 979 "rtti_to_mlds.m"
    {
#line 979 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 979 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 979 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 979 "rtti_to_mlds.m"
  }
#line 979 "rtti_to_mlds.m"
}

#line 974 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0(
#line 974 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 974 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 974 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 974 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_10,
#line 974 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 974 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 974 "rtti_to_mlds.m"
{
#line 978 "rtti_to_mlds.m"
  {
#line 978 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 978 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_12;
#line 978 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 978 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_14;
#line 978 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18;
#line 978 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_30;
#line 978 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_37;
#line 978 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;

#line 979 "rtti_to_mlds.m"
    {
#line 979 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_12 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[21], ml_backend__rtti_to_mlds__Types_10);
    }
#line 981 "rtti_to_mlds.m"
    {
#line 981 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__TypeRttiDatas_12, &ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18);
    }
#line 983 "rtti_to_mlds.m"
    {
#line 983 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 983 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 983 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 983 "rtti_to_mlds.m"
    }
#line 99 "rtti_to_mlds.m"
    {
#line 99 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 99 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_14));
#line 99 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_30));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_37, ml_backend__rtti_to_mlds__RttiId_30, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 978 "rtti_to_mlds.m"
  }
#line 974 "rtti_to_mlds.m"
}

#line 957 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3(
#line 957 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 957 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 957 "rtti_to_mlds.m"
{
#line 957 "rtti_to_mlds.m"
  {
#line 957 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 957 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 957 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_Initializer_8;

#line 957 "rtti_to_mlds.m"
    {
#line 957 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 957 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_Initializer_8));
#line 957 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 957 "rtti_to_mlds.m"
  }
#line 957 "rtti_to_mlds.m"
}

#line 949 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2(
#line 949 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 949 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 949 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 949 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 949 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 949 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 949 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 949 "rtti_to_mlds.m"
{
#line 949 "rtti_to_mlds.m"
  {
#line 949 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 949 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_RttiId_12;
#line 949 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25;
#line 949 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27;

#line 949 "rtti_to_mlds.m"
    {
#line 949 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv3_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27);
    }
#line 949 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_RttiId_12));
#line 949 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25));
#line 949 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27));
#line 949 "rtti_to_mlds.m"
  }
#line 949 "rtti_to_mlds.m"
}

#line 950 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1(
#line 950 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 950 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 950 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 950 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 950 "rtti_to_mlds.m"
{
#line 950 "rtti_to_mlds.m"
  {
#line 950 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 950 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_RttiId_10;

#line 950 "rtti_to_mlds.m"
    {
#line 950 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_RttiId_10);
    }
#line 950 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_RttiId_10));
#line 950 "rtti_to_mlds.m"
  }
#line 950 "rtti_to_mlds.m"
}

#line 931 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(
#line 931 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 931 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 931 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 931 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistInfo_10,
#line 931 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30,
#line 931 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31)
#line 931 "rtti_to_mlds.m"
{
#line 934 "rtti_to_mlds.m"
  {
#line 934 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_60_60;
#line 934 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Plain_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 0)));
#line 934 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__InTci_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 1)));
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 2)));
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Locns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 3)));
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_16;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_17;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_18;
#line 934 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Tci_19;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ConstrInitializer_20;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_29;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 934 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_57_57;

#line 936 "rtti_to_mlds.m"
    {
#line 936 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_16);
    }
#line 937 "rtti_to_mlds.m"
    {
#line 937 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 937 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 937 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 937 "rtti_to_mlds.m"
    }
#line 938 "rtti_to_mlds.m"
    {
#line 938 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 938 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_17));
#line 938 "rtti_to_mlds.m"
    }
#line 11059 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_60_60 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0;
#line 939 "rtti_to_mlds.m"
    {
#line 939 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_60_60, ml_backend__rtti_to_mlds__Constraints_14, &ml_backend__rtti_to_mlds__Tci_19);
    }
#line 945 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 941 "rtti_to_mlds.m"
      {
#line 941 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 941 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 941 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 941 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_44_44;

#line 943 "rtti_to_mlds.m"
        {
#line 943 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 943 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 943 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 943 "rtti_to_mlds.m"
        }
#line 943 "rtti_to_mlds.m"
        {
#line 943 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 943 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 943 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 943 "rtti_to_mlds.m"
        }
#line 943 "rtti_to_mlds.m"
        {
#line 943 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 943 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_42_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 943 "rtti_to_mlds.m"
        }
#line 942 "rtti_to_mlds.m"
        {
#line 942 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 942 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 942 "rtti_to_mlds.m"
        }
#line 942 "rtti_to_mlds.m"
        {
#line 942 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ConstrInitializer_20 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_41_41);
        }
#line 943 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30;
#line 941 "rtti_to_mlds.m"
      }
#line 945 "rtti_to_mlds.m"
    else
#line 946 "rtti_to_mlds.m"
      {
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_70_70;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrIds_23;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ElementType_27;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_81;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_88;
#line 946 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 949 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 949 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv5_V_24_24;
#line 949 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35;

#line 947 "rtti_to_mlds.m"
        {
#line 947 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 947 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 947 "rtti_to_mlds.m"
        }
#line 947 "rtti_to_mlds.m"
        {
#line 947 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ConstrInitializer_20 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25);
        }
#line 950 "rtti_to_mlds.m"
        {
#line 950 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 950 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[5]));
#line 950 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1));
#line 950 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 950 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 950 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 950 "rtti_to_mlds.m"
        }
#line 949 "rtti_to_mlds.m"
        {
#line 949 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 949 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 949 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2));
#line 949 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 949 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 949 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 949 "rtti_to_mlds.m"
        }
#line 949 "rtti_to_mlds.m"
        {
#line 949 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 11217 "ml_backend.rtti_to_mlds.c"
        ml_backend__rtti_to_mlds__TypeCtorInfo_70_70 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 949 "rtti_to_mlds.m"
        {
#line 949 "rtti_to_mlds.m"
          mercury__list__map_foldl2_7_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_60_60, ml_backend__rtti_to_mlds__TypeCtorInfo_70_70, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_33_33, ml_backend__rtti_to_mlds__Constraints_14, &ml_backend__rtti_to_mlds__TCConstrIds_23, ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34)), &ml_backend__rtti_to_mlds__conv5_V_24_24, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35);
        }
#line 949 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_V_24_24);
#line 949 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35);
#line 954 "rtti_to_mlds.m"
        {
#line 954 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 954 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 954 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_81, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25));
#line 954 "rtti_to_mlds.m"
        }
#line 956 "rtti_to_mlds.m"
        {
#line 956 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 956 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_81));
#line 956 "rtti_to_mlds.m"
        }
#line 956 "rtti_to_mlds.m"
        {
#line 956 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ElementType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 956 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 956 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 956 "rtti_to_mlds.m"
        }
#line 957 "rtti_to_mlds.m"
        {
#line 957 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 957 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 957 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3));
#line 957 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 957 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_27));
#line 957 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_16));
#line 957 "rtti_to_mlds.m"
        }
#line 957 "rtti_to_mlds.m"
        {
#line 957 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_70_70, ml_backend__rtti_to_mlds__V_39_39, ml_backend__rtti_to_mlds__TCConstrIds_23);
        }
#line 106 "rtti_to_mlds.m"
        {
#line 106 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_89_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_81));
#line 106 "rtti_to_mlds.m"
        }
#line 106 "rtti_to_mlds.m"
        {
#line 106 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 106 "rtti_to_mlds.m"
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_88, ml_backend__rtti_to_mlds__RttiId_81, ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40);
        }
#line 946 "rtti_to_mlds.m"
      }
#line 962 "rtti_to_mlds.m"
    {
#line 962 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__Ordinal_9, ml_backend__rtti_to_mlds__Locns_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45);
    }
#line 964 "rtti_to_mlds.m"
    {
#line 964 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 964 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_18));
#line 964 "rtti_to_mlds.m"
    }
#line 964 "rtti_to_mlds.m"
    {
#line 964 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 964 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 964 "rtti_to_mlds.m"
    }
#line 965 "rtti_to_mlds.m"
    {
#line 965 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Plain_12);
    }
#line 966 "rtti_to_mlds.m"
    {
#line 966 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_51_51 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__InTci_13);
    }
#line 967 "rtti_to_mlds.m"
    {
#line 967 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_53_53 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Tci_19);
    }
#line 968 "rtti_to_mlds.m"
    {
#line 968 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 968 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 968 "rtti_to_mlds.m"
    }
#line 969 "rtti_to_mlds.m"
    {
#line 969 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_55_55 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__V_56_56);
    }
#line 969 "rtti_to_mlds.m"
    {
#line 969 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 969 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ConstrInitializer_20));
#line 969 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 969 "rtti_to_mlds.m"
    }
#line 967 "rtti_to_mlds.m"
    {
#line 967 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_54_54, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 967 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_54_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_57_57));
#line 967 "rtti_to_mlds.m"
    }
#line 966 "rtti_to_mlds.m"
    {
#line 966 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_52_52, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_52_52, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 966 "rtti_to_mlds.m"
    }
#line 965 "rtti_to_mlds.m"
    {
#line 965 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 965 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 965 "rtti_to_mlds.m"
    }
#line 964 "rtti_to_mlds.m"
    {
#line 964 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 964 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 964 "rtti_to_mlds.m"
    }
#line 964 "rtti_to_mlds.m"
    {
#line 964 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 964 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 964 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 964 "rtti_to_mlds.m"
    }
#line 972 "rtti_to_mlds.m"
    {
#line 972 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__RttiId_18, ml_backend__rtti_to_mlds__Initializer_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31);
#line 972 "rtti_to_mlds.m"
      return;
    }
#line 934 "rtti_to_mlds.m"
  }
#line 931 "rtti_to_mlds.m"
}

#line 924 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
#line 924 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 924 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_7,
#line 924 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 924 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 924 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10)
#line 924 "rtti_to_mlds.m"
{
#line 927 "rtti_to_mlds.m"
  {
#line 927 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 927 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_11;

#line 928 "rtti_to_mlds.m"
    {
#line 928 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 928 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_7));
#line 928 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_8));
#line 928 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_9));
#line 928 "rtti_to_mlds.m"
    }
#line 929 "rtti_to_mlds.m"
    {
#line 929 "rtti_to_mlds.m"
      MR_Word base;
#line 929 "rtti_to_mlds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 929 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_10 = base;
#line 929 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_6));
#line 929 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_11));
#line 929 "rtti_to_mlds.m"
    }
#line 927 "rtti_to_mlds.m"
  }
#line 924 "rtti_to_mlds.m"
}

#line 915 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0_1(
#line 915 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 915 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 915 "rtti_to_mlds.m"
{
#line 915 "rtti_to_mlds.m"
  {
#line 915 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 915 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 915 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__2_2;

#line 915 "rtti_to_mlds.m"
    {
#line 915 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 915 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__2_2));
#line 915 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 915 "rtti_to_mlds.m"
  }
#line 915 "rtti_to_mlds.m"
}

#line 902 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MakeRttiId_10,
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Constraint_11,
#line 902 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_12,
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24,
#line 902 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25,
#line 902 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26,
#line 902 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27)
#line 902 "rtti_to_mlds.m"
{
#line 908 "rtti_to_mlds.m"
  {
#line 908 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_38_38 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Constraint_11, (MR_Integer) 0)));
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Constraint_11, (MR_Integer) 1)));
#line 908 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Arity_17;
#line 908 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__TCNum_18;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_21;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PTIInitializers_22;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_23;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_47;
#line 908 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 912 "rtti_to_mlds.m"
    void MR_CALL (* ml_backend__rtti_to_mlds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 912 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_RttiId_12;
#line 914 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_20;

#line 910 "rtti_to_mlds.m"
    {
#line 910 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_38_38, ml_backend__rtti_to_mlds__Types_16, &ml_backend__rtti_to_mlds__Arity_17);
    }
#line 911 "rtti_to_mlds.m"
    {
#line 911 "rtti_to_mlds.m"
      mercury__counter__allocate_3_p_0(&ml_backend__rtti_to_mlds__TCNum_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25);
    }
#line 912 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MakeRttiId_10, (MR_Integer) 1)));
#line 912 "rtti_to_mlds.m"
    {
#line 912 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__func_0(((MR_Box) ml_backend__rtti_to_mlds__MakeRttiId_10), ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_18)), ((MR_Box) (ml_backend__rtti_to_mlds__Arity_17)), &ml_backend__rtti_to_mlds__conv1_RttiId_12);
    }
#line 912 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__RttiId_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_RttiId_12);
#line 914 "rtti_to_mlds.m"
    {
#line 914 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, &ml_backend__rtti_to_mlds__ModuleName_20);
    }
#line 915 "rtti_to_mlds.m"
    {
#line 915 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_21 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_38_38, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[20], ml_backend__rtti_to_mlds__Types_16);
    }
#line 916 "rtti_to_mlds.m"
    {
#line 916 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__TypeRttiDatas_21, &ml_backend__rtti_to_mlds__PTIInitializers_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30);
    }
#line 918 "rtti_to_mlds.m"
    {
#line 918 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 918 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (*ml_backend__rtti_to_mlds__RttiId_12));
#line 918 "rtti_to_mlds.m"
    }
#line 918 "rtti_to_mlds.m"
    {
#line 918 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 918 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 918 "rtti_to_mlds.m"
    }
#line 919 "rtti_to_mlds.m"
    {
#line 919 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_34_34 = ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(ml_backend__rtti_to_mlds__TCName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 919 "rtti_to_mlds.m"
    {
#line 919 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PTIInitializers_22));
#line 919 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 919 "rtti_to_mlds.m"
    }
#line 918 "rtti_to_mlds.m"
    {
#line 918 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 918 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 918 "rtti_to_mlds.m"
    }
#line 918 "rtti_to_mlds.m"
    {
#line 918 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 918 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 918 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (*ml_backend__rtti_to_mlds__RttiId_12));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_47, *ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_23, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 908 "rtti_to_mlds.m"
  }
#line 902 "rtti_to_mlds.m"
}

#line 875 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
#line 875 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_4,
#line 875 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5)
#line 875 "rtti_to_mlds.m"
{
#line 878 "rtti_to_mlds.m"
  {
#line 878 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 878 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
#line 878 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__SlotInCell_7;
#line 878 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__SlotInTci_8;
#line 878 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_9;
#line 878 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 878 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 878 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 878 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 878 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 878 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;

#line 881 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5)) == (MR_mktag((MR_Integer) 0))))
#line 882 "rtti_to_mlds.m"
      {
#line 882 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInCell_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 0)));
#line 883 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInTci_8 = (MR_Integer) -1;
#line 882 "rtti_to_mlds.m"
      }
#line 881 "rtti_to_mlds.m"
    else
#line 880 "rtti_to_mlds.m"
      {
#line 880 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInCell_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 0)));
#line 880 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInTci_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 1)));
#line 880 "rtti_to_mlds.m"
      }
#line 885 "rtti_to_mlds.m"
    {
#line 885 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 885 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_4));
#line 885 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 885 "rtti_to_mlds.m"
    }
#line 886 "rtti_to_mlds.m"
    {
#line 886 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_9));
#line 886 "rtti_to_mlds.m"
    }
#line 886 "rtti_to_mlds.m"
    {
#line 886 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 886 "rtti_to_mlds.m"
    }
#line 887 "rtti_to_mlds.m"
    {
#line 887 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__SlotInCell_7);
    }
#line 889 "rtti_to_mlds.m"
    {
#line 889 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__SlotInTci_8);
    }
#line 887 "rtti_to_mlds.m"
    {
#line 887 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 887 "rtti_to_mlds.m"
    }
#line 886 "rtti_to_mlds.m"
    {
#line 886 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_14_14));
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 886 "rtti_to_mlds.m"
    }
#line 886 "rtti_to_mlds.m"
    {
#line 886 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 886 "rtti_to_mlds.m"
    }
#line 878 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_6;
#line 878 "rtti_to_mlds.m"
  }
#line 875 "rtti_to_mlds.m"
}

#line 858 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(
#line 858 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 858 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 858 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_8,
#line 858 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 858 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 858 "rtti_to_mlds.m"
{
#line 865 "rtti_to_mlds.m"
  {
#line 865 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 865 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8)) == (MR_mktag((MR_Integer) 1))))
#line 869 "rtti_to_mlds.m"
      {
#line 869 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuFunctor_11 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8), (MR_Integer) 1);

#line 870 "rtti_to_mlds.m"
        {
#line 870 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__DuFunctor_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
#line 870 "rtti_to_mlds.m"
          return;
        }
#line 869 "rtti_to_mlds.m"
      }
#line 865 "rtti_to_mlds.m"
    else
#line 865 "rtti_to_mlds.m"
      {
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ResFunctor_10 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8), (MR_Integer) 0);
#line 865 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__FunctorName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 0)));
#line 865 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Ordinal_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 1)));
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ReservedAddress_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 2)));
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_25;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_26;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_27;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_43;
#line 865 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_44_44;

#line 849 "rtti_to_mlds.m"
        {
#line 849 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 849 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_23));
#line 849 "rtti_to_mlds.m"
        }
#line 850 "rtti_to_mlds.m"
        {
#line 850 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 850 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 850 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_25));
#line 850 "rtti_to_mlds.m"
        }
#line 851 "rtti_to_mlds.m"
        {
#line 851 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_26));
#line 851 "rtti_to_mlds.m"
        }
#line 851 "rtti_to_mlds.m"
        {
#line 851 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 851 "rtti_to_mlds.m"
        }
#line 852 "rtti_to_mlds.m"
        {
#line 852 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_22);
        }
#line 853 "rtti_to_mlds.m"
        {
#line 853 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_23);
        }
#line 855 "rtti_to_mlds.m"
        {
#line 855 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_35_35 = ml_backend__ml_util__gen_init_reserved_address_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__ReservedAddress_24);
        }
#line 853 "rtti_to_mlds.m"
        {
#line 853 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_34_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "rtti_to_mlds.m"
        }
#line 852 "rtti_to_mlds.m"
        {
#line 852 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_32_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 852 "rtti_to_mlds.m"
        }
#line 851 "rtti_to_mlds.m"
        {
#line 851 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 851 "rtti_to_mlds.m"
        }
#line 851 "rtti_to_mlds.m"
        {
#line 851 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 851 "rtti_to_mlds.m"
        }
#line 106 "rtti_to_mlds.m"
        {
#line 106 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_26));
#line 106 "rtti_to_mlds.m"
        }
#line 106 "rtti_to_mlds.m"
        {
#line 106 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 106 "rtti_to_mlds.m"
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_43, ml_backend__rtti_to_mlds__RttiId_26, ml_backend__rtti_to_mlds__Initializer_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
#line 107 "rtti_to_mlds.m"
          return;
        }
#line 865 "rtti_to_mlds.m"
      }
#line 865 "rtti_to_mlds.m"
  }
#line 858 "rtti_to_mlds.m"
}

#line 754 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_2(
#line 754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 754 "rtti_to_mlds.m"
{
#line 754 "rtti_to_mlds.m"
  {
#line 754 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 754 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 754 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 754 "rtti_to_mlds.m"
    {
#line 754 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 754 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 754 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 754 "rtti_to_mlds.m"
  }
#line 754 "rtti_to_mlds.m"
}

#line 753 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_1(
#line 753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 753 "rtti_to_mlds.m"
{
#line 753 "rtti_to_mlds.m"
  {
#line 753 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 753 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 753 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 753 "rtti_to_mlds.m"
    {
#line 753 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 753 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 753 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 753 "rtti_to_mlds.m"
  }
#line 753 "rtti_to_mlds.m"
}

#line 755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(
#line 755 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 755 "rtti_to_mlds.m"
{
#line 755 "rtti_to_mlds.m"
  {
#line 755 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 755 "rtti_to_mlds.m"
    MR_builtin_longjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0, 1);
#line 755 "rtti_to_mlds.m"
  }
#line 755 "rtti_to_mlds.m"
}

#line 755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5(
#line 755 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 755 "rtti_to_mlds.m"
{
#line 755 "rtti_to_mlds.m"
  {
#line 755 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 755 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103 = ((MR_Word) (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103);
#line 755 "rtti_to_mlds.m"
    {
#line 755 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(ml_backend__rtti_to_mlds__env_ptr);
#line 755 "rtti_to_mlds.m"
      return;
    }
#line 755 "rtti_to_mlds.m"
  }
#line 755 "rtti_to_mlds.m"
}

#line 755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(
#line 755 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 755 "rtti_to_mlds.m"
{
#line 755 "rtti_to_mlds.m"
  {
#line 755 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 12141 "ml_backend.rtti_to_mlds.c"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 755 "rtti_to_mlds.m"
    {
#line 755 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103);
    }
#line 755 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded)
#line 755 "rtti_to_mlds.m"
      {
#line 755 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(ml_backend__rtti_to_mlds__env_ptr);
#line 755 "rtti_to_mlds.m"
        return;
      }
#line 755 "rtti_to_mlds.m"
  }
#line 755 "rtti_to_mlds.m"
}

#line 755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(
#line 755 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 755 "rtti_to_mlds.m"
{
#line 755 "rtti_to_mlds.m"
  {
#line 755 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 755 "rtti_to_mlds.m"
    if (MR_builtin_setjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0) == 0)
#line 755 "rtti_to_mlds.m"
      {
#line 755 "rtti_to_mlds.m"
        {
#line 755 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds__V_19_19;

#line 755 "rtti_to_mlds.m"
          {
#line 755 "rtti_to_mlds.m"
            MR_Word base;
#line 755 "rtti_to_mlds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 755 "rtti_to_mlds.m"
            (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42 = base;
#line 755 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 755 "rtti_to_mlds.m"
          }
#line 755 "rtti_to_mlds.m"
          {
#line 755 "rtti_to_mlds.m"
            mercury__list__member_2_p_1((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100, &(ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17, ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5, ml_backend__rtti_to_mlds__env_ptr);
          }
#line 755 "rtti_to_mlds.m"
        }
#line 755 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = MR_FALSE;
#line 755 "rtti_to_mlds.m"
      }
#line 755 "rtti_to_mlds.m"
    else
#line 755 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = MR_TRUE;
#line 755 "rtti_to_mlds.m"
  }
#line 755 "rtti_to_mlds.m"
}

#line 747 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(
#line 747 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 747 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 747 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuFunctor_8,
#line 747 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38,
#line 747 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39)
#line 747 "rtti_to_mlds.m"
{
#line 747 "rtti_to_mlds.m"
  {
#line 747 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s ml_backend__rtti_to_mlds__env;

#line 750 "rtti_to_mlds.m"
    {
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_96_96 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0;
#line 750 "rtti_to_mlds.m"
      MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 0)));
#line 750 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 1)));
#line 750 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Ordinal_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 2)));
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Rep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 3)));
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 4)));
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__MaybeExistInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 5)));
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgTypes_16;
#line 750 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__ContainsVarBitVector_20;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ModuleName_21;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgTypeInitializer_24;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgNameInitializer_25;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__HaveArgLocns_26;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgLocnsInitializer_27;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ExistInfoInitializer_29;
#line 750 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Ptag_30;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__SectagAndLocn_31;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Locn_33;
#line 750 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Stag_34;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__RttiName_35;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__RttiId_36;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Initializer_37;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_76_76;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_78_78;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_81_81;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_82_82;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_90_90;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_91_91;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_92_92;
#line 750 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_93_93;

#line 753 "rtti_to_mlds.m"
      {
#line 753 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ArgTypes_16 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_96_96, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[18], ml_backend__rtti_to_mlds__ArgInfos_14);
      }
#line 12335 "ml_backend.rtti_to_mlds.c"
      (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[4];
#line 754 "rtti_to_mlds.m"
      {
#line 754 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_96_96, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[19], ml_backend__rtti_to_mlds__ArgInfos_14);
      }
#line 756 "rtti_to_mlds.m"
      {
#line 756 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ContainsVarBitVector_20 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ml_backend__rtti_to_mlds__ArgTypes_16);
      }
#line 757 "rtti_to_mlds.m"
      {
#line 757 "rtti_to_mlds.m"
        hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_21);
      }
#line 764 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__ArgInfos_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "rtti_to_mlds.m"
        {
#line 765 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 765 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_44_44;
#line 765 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 767 "rtti_to_mlds.m"
          {
#line 767 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 767 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 767 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[8])));
#line 767 "rtti_to_mlds.m"
          }
#line 767 "rtti_to_mlds.m"
          {
#line 767 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 767 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 767 "rtti_to_mlds.m"
          }
#line 766 "rtti_to_mlds.m"
          {
#line 766 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 766 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 766 "rtti_to_mlds.m"
          }
#line 766 "rtti_to_mlds.m"
          {
#line 766 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgTypeInitializer_24 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_43_43);
          }
#line 768 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38;
#line 765 "rtti_to_mlds.m"
        }
#line 764 "rtti_to_mlds.m"
      else
#line 759 "rtti_to_mlds.m"
        {
#line 759 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_49_49;

#line 760 "rtti_to_mlds.m"
          {
#line 760 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_field_types_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ArgTypes_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48);
          }
#line 762 "rtti_to_mlds.m"
          {
#line 762 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 762 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 762 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 762 "rtti_to_mlds.m"
          }
#line 762 "rtti_to_mlds.m"
          {
#line 762 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgTypeInitializer_24 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_49_49);
          }
#line 759 "rtti_to_mlds.m"
        }
#line 755 "rtti_to_mlds.m"
      {
#line 755 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(&ml_backend__rtti_to_mlds__env);
      }
#line 12434 "ml_backend.rtti_to_mlds.c"
      if ((ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded)
#line 12436 "ml_backend.rtti_to_mlds.c"
        {
#line 12438 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_56_56;

#line 772 "rtti_to_mlds.m"
          {
#line 772 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55);
          }
#line 774 "rtti_to_mlds.m"
          {
#line 774 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 774 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_56_56, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 774 "rtti_to_mlds.m"
          }
#line 774 "rtti_to_mlds.m"
          {
#line 774 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgNameInitializer_25 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_56_56);
          }
#line 12461 "ml_backend.rtti_to_mlds.c"
        }
#line 12463 "ml_backend.rtti_to_mlds.c"
      else
#line 12465 "ml_backend.rtti_to_mlds.c"
        {
#line 12467 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 12469 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 12471 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_52_52;

#line 779 "rtti_to_mlds.m"
          {
#line 779 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 779 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_52_52, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 779 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[9])));
#line 779 "rtti_to_mlds.m"
          }
#line 779 "rtti_to_mlds.m"
          {
#line 779 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 779 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 779 "rtti_to_mlds.m"
          }
#line 778 "rtti_to_mlds.m"
          {
#line 778 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 778 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 778 "rtti_to_mlds.m"
          }
#line 778 "rtti_to_mlds.m"
          {
#line 778 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgNameInitializer_25 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_50_50);
          }
#line 780 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48;
#line 12509 "ml_backend.rtti_to_mlds.c"
        }
#line 782 "rtti_to_mlds.m"
      {
#line 782 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ArgInfos_14, &ml_backend__rtti_to_mlds__HaveArgLocns_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57);
      }
#line 788 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__HaveArgLocns_26 == (MR_Integer) 0))
#line 789 "rtti_to_mlds.m"
        {
#line 789 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 789 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 789 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_60_60;

#line 791 "rtti_to_mlds.m"
          {
#line 791 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 791 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 791 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[10])));
#line 791 "rtti_to_mlds.m"
          }
#line 791 "rtti_to_mlds.m"
          {
#line 791 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 791 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 791 "rtti_to_mlds.m"
          }
#line 790 "rtti_to_mlds.m"
          {
#line 790 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 790 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 790 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 790 "rtti_to_mlds.m"
          }
#line 790 "rtti_to_mlds.m"
          {
#line 790 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgLocnsInitializer_27 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_58_58);
          }
#line 789 "rtti_to_mlds.m"
        }
#line 788 "rtti_to_mlds.m"
      else
#line 785 "rtti_to_mlds.m"
        {
#line 785 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_63_63;

#line 786 "rtti_to_mlds.m"
          {
#line 786 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 786 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_63_63, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 786 "rtti_to_mlds.m"
          }
#line 786 "rtti_to_mlds.m"
          {
#line 786 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgLocnsInitializer_27 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_63_63);
          }
#line 785 "rtti_to_mlds.m"
        }
#line 800 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__MaybeExistInfo_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 801 "rtti_to_mlds.m"
        {
#line 801 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 801 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 801 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_66_66;

#line 803 "rtti_to_mlds.m"
          {
#line 803 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 803 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 803 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[11])));
#line 803 "rtti_to_mlds.m"
          }
#line 803 "rtti_to_mlds.m"
          {
#line 803 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 803 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 803 "rtti_to_mlds.m"
          }
#line 802 "rtti_to_mlds.m"
          {
#line 802 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 802 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 802 "rtti_to_mlds.m"
          }
#line 802 "rtti_to_mlds.m"
          {
#line 802 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ExistInfoInitializer_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_64_64);
          }
#line 804 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57;
#line 801 "rtti_to_mlds.m"
        }
#line 800 "rtti_to_mlds.m"
      else
#line 795 "rtti_to_mlds.m"
        {
#line 795 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ExistInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MaybeExistInfo_15, (MR_Integer) 0)));
#line 795 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_70_70;

#line 796 "rtti_to_mlds.m"
          {
#line 796 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ExistInfo_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69);
          }
#line 798 "rtti_to_mlds.m"
          {
#line 798 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 798 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_70_70, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 798 "rtti_to_mlds.m"
          }
#line 798 "rtti_to_mlds.m"
          {
#line 798 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ExistInfoInitializer_29 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_70_70);
          }
#line 795 "rtti_to_mlds.m"
        }
#line 808 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rep_13)) == (MR_mktag((MR_Integer) 1))))
#line 809 "rtti_to_mlds.m"
        {
#line 810 "rtti_to_mlds.m"
          {
#line 810 "rtti_to_mlds.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_functor_desc\'/5", (MR_String) "du_hl_rep");
#line 810 "rtti_to_mlds.m"
            return;
          }
#line 809 "rtti_to_mlds.m"
        }
#line 808 "rtti_to_mlds.m"
      else
#line 807 "rtti_to_mlds.m"
        {
#line 807 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Ptag_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Rep_13, (MR_Integer) 0)));
#line 807 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SectagAndLocn_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Rep_13, (MR_Integer) 1)));
#line 807 "rtti_to_mlds.m"
        }
#line 816 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__SectagAndLocn_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 813 "rtti_to_mlds.m"
        {
#line 814 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 0;
#line 815 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Stag_34 = (MR_Integer) -1;
#line 813 "rtti_to_mlds.m"
        }
#line 816 "rtti_to_mlds.m"
      else
#line 816 "rtti_to_mlds.m"
        if ((ml_backend__rtti_to_mlds__SectagAndLocn_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 817 "rtti_to_mlds.m"
          {
#line 818 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 1;
#line 819 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Stag_34 = (MR_Integer) -1;
#line 817 "rtti_to_mlds.m"
          }
#line 816 "rtti_to_mlds.m"
        else
#line 816 "rtti_to_mlds.m"
          if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__SectagAndLocn_31)) == (MR_mktag((MR_Integer) 1))))
#line 821 "rtti_to_mlds.m"
            {
#line 821 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SectagAndLocn_31, (MR_Integer) 0)));
#line 822 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 2;
#line 821 "rtti_to_mlds.m"
            }
#line 816 "rtti_to_mlds.m"
          else
#line 824 "rtti_to_mlds.m"
            {
#line 824 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__SectagAndLocn_31, (MR_Integer) 0)));
#line 825 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 3;
#line 824 "rtti_to_mlds.m"
            }
#line 827 "rtti_to_mlds.m"
      {
#line 827 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 827 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 827 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 827 "rtti_to_mlds.m"
      }
#line 828 "rtti_to_mlds.m"
      {
#line 828 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiId_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 828 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 828 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_35));
#line 828 "rtti_to_mlds.m"
      }
#line 829 "rtti_to_mlds.m"
      {
#line 829 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_36));
#line 829 "rtti_to_mlds.m"
      }
#line 829 "rtti_to_mlds.m"
      {
#line 829 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_74_74, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_75_75));
#line 829 "rtti_to_mlds.m"
      }
#line 830 "rtti_to_mlds.m"
      {
#line 830 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_77_77 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
      }
#line 831 "rtti_to_mlds.m"
      {
#line 831 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_79_79 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Arity_11);
      }
#line 832 "rtti_to_mlds.m"
      {
#line 832 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_81_81 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__ContainsVarBitVector_20);
      }
#line 833 "rtti_to_mlds.m"
      {
#line 833 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_83_83 = ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(ml_backend__rtti_to_mlds__Locn_33);
      }
#line 834 "rtti_to_mlds.m"
      {
#line 834 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_85_85 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ptag_30);
      }
#line 835 "rtti_to_mlds.m"
      {
#line 835 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_87_87 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Stag_34);
      }
#line 836 "rtti_to_mlds.m"
      {
#line 836 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_89_89 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_12);
      }
#line 839 "rtti_to_mlds.m"
      {
#line 839 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_93_93, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ExistInfoInitializer_29));
#line 839 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 839 "rtti_to_mlds.m"
      }
#line 838 "rtti_to_mlds.m"
      {
#line 838 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_92_92, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgLocnsInitializer_27));
#line 838 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_92_92, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_93_93));
#line 838 "rtti_to_mlds.m"
      }
#line 837 "rtti_to_mlds.m"
      {
#line 837 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgNameInitializer_25));
#line 837 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_92_92));
#line 837 "rtti_to_mlds.m"
      }
#line 836 "rtti_to_mlds.m"
      {
#line 836 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_90_90, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgTypeInitializer_24));
#line 836 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_90_90, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_91_91));
#line 836 "rtti_to_mlds.m"
      }
#line 835 "rtti_to_mlds.m"
      {
#line 835 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 835 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_90_90));
#line 835 "rtti_to_mlds.m"
      }
#line 834 "rtti_to_mlds.m"
      {
#line 834 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_86_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 834 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_86_86, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 834 "rtti_to_mlds.m"
      }
#line 833 "rtti_to_mlds.m"
      {
#line 833 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 833 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_84_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 833 "rtti_to_mlds.m"
      }
#line 832 "rtti_to_mlds.m"
      {
#line 832 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_82_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 832 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_82_82, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 832 "rtti_to_mlds.m"
      }
#line 831 "rtti_to_mlds.m"
      {
#line 831 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_81_81));
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_80_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_82_82));
#line 831 "rtti_to_mlds.m"
      }
#line 830 "rtti_to_mlds.m"
      {
#line 830 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_78_78, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_79_79));
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_78_78, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_80_80));
#line 830 "rtti_to_mlds.m"
      }
#line 829 "rtti_to_mlds.m"
      {
#line 829 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_76_76, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_76_76, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_78_78));
#line 829 "rtti_to_mlds.m"
      }
#line 829 "rtti_to_mlds.m"
      {
#line 829 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Initializer_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_76_76));
#line 829 "rtti_to_mlds.m"
      }
#line 842 "rtti_to_mlds.m"
      {
#line 842 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__RttiId_36, ml_backend__rtti_to_mlds__Initializer_37, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39);
#line 842 "rtti_to_mlds.m"
        return;
      }
#line 750 "rtti_to_mlds.m"
    }
#line 747 "rtti_to_mlds.m"
  }
#line 747 "rtti_to_mlds.m"
}

#line 743 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0_1(
#line 743 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 743 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 743 "rtti_to_mlds.m"
{
#line 743 "rtti_to_mlds.m"
  {
#line 743 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 743 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 743 "rtti_to_mlds.m"
    {
#line 743 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 743 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 743 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 743 "rtti_to_mlds.m"
  }
#line 743 "rtti_to_mlds.m"
}

#line 729 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(
#line 729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NotagFunctorDesc_8,
#line 729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 729 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 729 "rtti_to_mlds.m"
{
#line 733 "rtti_to_mlds.m"
  {
#line 733 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 733 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 0)));
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 1)));
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MaybeArgName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 2)));
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgTypeRttiData_13;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PTIInitializer_14;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_17;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_40;
#line 733 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41;

#line 735 "rtti_to_mlds.m"
    {
#line 735 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ArgTypeRttiData_13 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ml_backend__rtti_to_mlds__ArgType_11);
    }
#line 736 "rtti_to_mlds.m"
    {
#line 736 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__ArgTypeRttiData_13, &ml_backend__rtti_to_mlds__PTIInitializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20);
    }
#line 739 "rtti_to_mlds.m"
    {
#line 739 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 739 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 739 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 739 "rtti_to_mlds.m"
    }
#line 740 "rtti_to_mlds.m"
    {
#line 740 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 740 "rtti_to_mlds.m"
    }
#line 740 "rtti_to_mlds.m"
    {
#line 740 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 740 "rtti_to_mlds.m"
    }
#line 741 "rtti_to_mlds.m"
    {
#line 741 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
    }
#line 743 "rtti_to_mlds.m"
    {
#line 743 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_28_28 = ml_backend__ml_code_util__ml_string_type_0_f_0();
    }
#line 744 "rtti_to_mlds.m"
    {
#line 744 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__V_28_28, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[17], ml_backend__rtti_to_mlds__MaybeArgName_12);
    }
#line 742 "rtti_to_mlds.m"
    {
#line 742 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 742 "rtti_to_mlds.m"
    }
#line 741 "rtti_to_mlds.m"
    {
#line 741 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PTIInitializer_14));
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_25_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 741 "rtti_to_mlds.m"
    }
#line 740 "rtti_to_mlds.m"
    {
#line 740 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 740 "rtti_to_mlds.m"
    }
#line 740 "rtti_to_mlds.m"
    {
#line 740 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 740 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_40, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 733 "rtti_to_mlds.m"
  }
#line 729 "rtti_to_mlds.m"
}

#line 713 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_7,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 713 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 713 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 713 "rtti_to_mlds.m"
{
#line 718 "rtti_to_mlds.m"
  {
#line 718 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 718 "rtti_to_mlds.m"
    {
#line 718 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__Lang_8, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 718 "rtti_to_mlds.m"
      return;
    }
#line 718 "rtti_to_mlds.m"
  }
#line 713 "rtti_to_mlds.m"
}

#line 700 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_6,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 700 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 700 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 700 "rtti_to_mlds.m"
{
#line 703 "rtti_to_mlds.m"
  {
#line 703 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 703 "rtti_to_mlds.m"
    {
#line 703 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__EnumFunctor_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
#line 703 "rtti_to_mlds.m"
      return;
    }
#line 703 "rtti_to_mlds.m"
  }
#line 700 "rtti_to_mlds.m"
}

#line 656 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4(
#line 656 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 656 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 656 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 656 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 656 "rtti_to_mlds.m"
{
#line 656 "rtti_to_mlds.m"
  {
#line 656 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 656 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13;

#line 656 "rtti_to_mlds.m"
    {
#line 656 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13);
    }
#line 656 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13));
#line 656 "rtti_to_mlds.m"
  }
#line 656 "rtti_to_mlds.m"
}

#line 622 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3(
#line 622 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 622 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 622 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 622 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 622 "rtti_to_mlds.m"
{
#line 622 "rtti_to_mlds.m"
  {
#line 622 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 622 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19;

#line 622 "rtti_to_mlds.m"
    {
#line 622 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19);
    }
#line 622 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19));
#line 622 "rtti_to_mlds.m"
  }
#line 622 "rtti_to_mlds.m"
}

#line 605 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2(
#line 605 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 605 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 605 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 605 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 605 "rtti_to_mlds.m"
{
#line 605 "rtti_to_mlds.m"
  {
#line 605 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 605 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16;

#line 605 "rtti_to_mlds.m"
    {
#line 605 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16);
    }
#line 605 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16));
#line 605 "rtti_to_mlds.m"
  }
#line 605 "rtti_to_mlds.m"
}

#line 640 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1(
#line 640 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 640 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 640 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 640 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 640 "rtti_to_mlds.m"
{
#line 640 "rtti_to_mlds.m"
  {
#line 640 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 640 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39;

#line 640 "rtti_to_mlds.m"
    {
#line 640 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39);
    }
#line 640 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39));
#line 640 "rtti_to_mlds.m"
  }
#line 640 "rtti_to_mlds.m"
}

#line 594 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(
#line 594 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 594 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
#line 594 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_11,
#line 594 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__FunctorInitializer_12,
#line 594 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__LayoutInitializer_13,
#line 594 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__NumberMapInitializer_14,
#line 594 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43,
#line 594 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44)
#line 594 "rtti_to_mlds.m"
{
#line 600 "rtti_to_mlds.m"
  {
#line 600 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 600 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_16;

#line 601 "rtti_to_mlds.m"
    {
#line 601 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, &ml_backend__rtti_to_mlds__ModuleName_16);
    }
#line 618 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 2))))
#line 639 "rtti_to_mlds.m"
      {
#line 639 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuFunctors_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 639 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuByPtag_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 639 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuByName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 639 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 639 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68;
#line 639 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69;
#line 639 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70;
#line 639 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 638 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 640 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68;

#line 640 "rtti_to_mlds.m"
        {
#line 640 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 640 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[2]));
#line 640 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1));
#line 640 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 640 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 640 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 640 "rtti_to_mlds.m"
        }
#line 640 "rtti_to_mlds.m"
        {
#line 640 "rtti_to_mlds.m"
          mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_67_67, ml_backend__rtti_to_mlds__DuFunctors_29, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68);
        }
#line 640 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68);
#line 642 "rtti_to_mlds.m"
        {
#line 642 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__DuByPtag_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69);
        }
#line 644 "rtti_to_mlds.m"
        {
#line 644 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__DuByName_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70);
        }
#line 646 "rtti_to_mlds.m"
        {
#line 646 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_92, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
        }
#line 647 "rtti_to_mlds.m"
        {
#line 647 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
        }
#line 649 "rtti_to_mlds.m"
        {
#line 649 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)));
        }
#line 651 "rtti_to_mlds.m"
        {
#line 651 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
        }
#line 639 "rtti_to_mlds.m"
      }
#line 618 "rtti_to_mlds.m"
    else
#line 618 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 0))))
#line 604 "rtti_to_mlds.m"
        {
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__EnumFunctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__EnumByValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__EnumByName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84;
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85;
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86;
#line 603 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 603 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 605 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84;

#line 605 "rtti_to_mlds.m"
          {
#line 605 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 605 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[3]));
#line 605 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2));
#line 605 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 605 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 605 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 605 "rtti_to_mlds.m"
          }
#line 605 "rtti_to_mlds.m"
          {
#line 605 "rtti_to_mlds.m"
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_83_83, ml_backend__rtti_to_mlds__EnumFunctors_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84);
          }
#line 605 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84);
#line 607 "rtti_to_mlds.m"
          {
#line 607 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__EnumByValue_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85);
          }
#line 609 "rtti_to_mlds.m"
          {
#line 609 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__EnumByName_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86);
          }
#line 611 "rtti_to_mlds.m"
          {
#line 611 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
          }
#line 612 "rtti_to_mlds.m"
          {
#line 612 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
          }
#line 614 "rtti_to_mlds.m"
          {
#line 614 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
          }
#line 616 "rtti_to_mlds.m"
          {
#line 616 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
          }
#line 604 "rtti_to_mlds.m"
        }
#line 618 "rtti_to_mlds.m"
      else
#line 618 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 1))))
#line 621 "rtti_to_mlds.m"
          {
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ForeignEnumLang_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76;
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77;
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78;
#line 621 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 619 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 622 "rtti_to_mlds.m"
            MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76;

#line 622 "rtti_to_mlds.m"
            {
#line 622 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 622 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[1]));
#line 622 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3));
#line 622 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 622 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 622 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ForeignEnumLang_23));
#line 622 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 622 "rtti_to_mlds.m"
            }
#line 622 "rtti_to_mlds.m"
            {
#line 622 "rtti_to_mlds.m"
              mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_75_75, ml_backend__rtti_to_mlds__ForeignEnumFunctors_25, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76);
            }
#line 622 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76);
#line 626 "rtti_to_mlds.m"
            {
#line 626 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77);
            }
#line 628 "rtti_to_mlds.m"
            {
#line 628 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ForeignEnumByName_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78);
            }
#line 630 "rtti_to_mlds.m"
            {
#line 630 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_91, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
            }
#line 631 "rtti_to_mlds.m"
            {
#line 631 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
            }
#line 633 "rtti_to_mlds.m"
            {
#line 633 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
            }
#line 635 "rtti_to_mlds.m"
            {
#line 635 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
            }
#line 621 "rtti_to_mlds.m"
          }
#line 618 "rtti_to_mlds.m"
        else
#line 618 "rtti_to_mlds.m"
          if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 681 "rtti_to_mlds.m"
            {
#line 681 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__EqvType_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 681 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeRttiData_39;

#line 682 "rtti_to_mlds.m"
              {
#line 682 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__TypeRttiData_39 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ml_backend__rtti_to_mlds__EqvType_38);
              }
#line 683 "rtti_to_mlds.m"
              {
#line 683 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__TypeRttiData_39, ml_backend__rtti_to_mlds__LayoutInitializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
              }
#line 686 "rtti_to_mlds.m"
              {
#line 686 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
              }
#line 687 "rtti_to_mlds.m"
              {
#line 687 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
              }
#line 681 "rtti_to_mlds.m"
            }
#line 618 "rtti_to_mlds.m"
          else
#line 618 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 670 "rtti_to_mlds.m"
              {
#line 670 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__NotagFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 670 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 670 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));

#line 671 "rtti_to_mlds.m"
                {
#line 671 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__rtti_to_mlds_scalar_common_1[7]), ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
                }
#line 672 "rtti_to_mlds.m"
                {
#line 672 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
                }
#line 674 "rtti_to_mlds.m"
                {
#line 674 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
                }
#line 676 "rtti_to_mlds.m"
                {
#line 676 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
                }
#line 678 "rtti_to_mlds.m"
                {
#line 678 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__NotagFunctor_37, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
#line 678 "rtti_to_mlds.m"
                  return;
                }
#line 670 "rtti_to_mlds.m"
              }
#line 618 "rtti_to_mlds.m"
            else
#line 618 "rtti_to_mlds.m"
              if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 655 "rtti_to_mlds.m"
                {
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctors_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ResFunctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__MaybeResByName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60;
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61;
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62;
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 6)));
#line 655 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__DuByPtag_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 654 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 656 "rtti_to_mlds.m"
                  MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60;

#line 656 "rtti_to_mlds.m"
                  {
#line 656 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 656 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[4]));
#line 656 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4));
#line 656 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 656 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 656 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 656 "rtti_to_mlds.m"
                  }
#line 656 "rtti_to_mlds.m"
                  {
#line 656 "rtti_to_mlds.m"
                    mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_59_59, ml_backend__rtti_to_mlds__MaybeResFunctors_33, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60);
                  }
#line 656 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60);
#line 658 "rtti_to_mlds.m"
                  {
#line 658 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ResFunctors_34, ml_backend__rtti_to_mlds__DuByPtag_94, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61);
                  }
#line 660 "rtti_to_mlds.m"
                  {
#line 660 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__MaybeResByName_35, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62);
                  }
#line 662 "rtti_to_mlds.m"
                  {
#line 662 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_93, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
                  }
#line 663 "rtti_to_mlds.m"
                  {
#line 663 "rtti_to_mlds.m"
                    *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)));
                  }
#line 665 "rtti_to_mlds.m"
                  {
#line 665 "rtti_to_mlds.m"
                    *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)));
                  }
#line 667 "rtti_to_mlds.m"
                  {
#line 667 "rtti_to_mlds.m"
                    *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
                  }
#line 655 "rtti_to_mlds.m"
                }
#line 618 "rtti_to_mlds.m"
              else
#line 692 "rtti_to_mlds.m"
                {
#line 693 "rtti_to_mlds.m"
                  {
#line 693 "rtti_to_mlds.m"
                    *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
                  }
#line 694 "rtti_to_mlds.m"
                  {
#line 694 "rtti_to_mlds.m"
                    *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
                  }
#line 695 "rtti_to_mlds.m"
                  {
#line 695 "rtti_to_mlds.m"
                    *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
                  }
#line 695 "rtti_to_mlds.m"
                  *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43;
#line 692 "rtti_to_mlds.m"
                }
#line 600 "rtti_to_mlds.m"
  }
#line 594 "rtti_to_mlds.m"
}

#line 549 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6(
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 549 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 549 "rtti_to_mlds.m"
{
#line 549 "rtti_to_mlds.m"
  {
#line 549 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 549 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10;

#line 549 "rtti_to_mlds.m"
    {
#line 549 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10);
    }
#line 549 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10));
#line 549 "rtti_to_mlds.m"
  }
#line 549 "rtti_to_mlds.m"
}

#line 548 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_5(
#line 548 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 548 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 548 "rtti_to_mlds.m"
{
#line 548 "rtti_to_mlds.m"
  {
#line 548 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 548 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 548 "rtti_to_mlds.m"
    {
#line 548 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 548 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 548 "rtti_to_mlds.m"
  }
#line 548 "rtti_to_mlds.m"
}

#line 546 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_4(
#line 546 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 546 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 546 "rtti_to_mlds.m"
{
#line 546 "rtti_to_mlds.m"
  {
#line 546 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 546 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 546 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv5_HeadVar__2_2;

#line 546 "rtti_to_mlds.m"
    {
#line 546 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv5_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 546 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv5_HeadVar__2_2));
#line 546 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 546 "rtti_to_mlds.m"
  }
#line 546 "rtti_to_mlds.m"
}

#line 519 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3(
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 519 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 519 "rtti_to_mlds.m"
{
#line 519 "rtti_to_mlds.m"
  {
#line 519 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 519 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10;

#line 519 "rtti_to_mlds.m"
    {
#line 519 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10);
    }
#line 519 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10));
#line 519 "rtti_to_mlds.m"
  }
#line 519 "rtti_to_mlds.m"
}

#line 518 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_2(
#line 518 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 518 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 518 "rtti_to_mlds.m"
{
#line 518 "rtti_to_mlds.m"
  {
#line 518 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 518 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 518 "rtti_to_mlds.m"
    {
#line 518 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 518 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 518 "rtti_to_mlds.m"
  }
#line 518 "rtti_to_mlds.m"
}

#line 516 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_1(
#line 516 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 516 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 516 "rtti_to_mlds.m"
{
#line 516 "rtti_to_mlds.m"
  {
#line 516 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 516 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 516 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 516 "rtti_to_mlds.m"
    {
#line 516 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 516 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 516 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 516 "rtti_to_mlds.m"
  }
#line 516 "rtti_to_mlds.m"
}

#line 500 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8,
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 500 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34,
#line 500 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35)
#line 500 "rtti_to_mlds.m"
{
#line 507 "rtti_to_mlds.m"
  {
#line 507 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 507 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 0))))
#line 507 "rtti_to_mlds.m"
      {
#line 508 "rtti_to_mlds.m"
        {
#line 508 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/6", (MR_String) "plain_arity_zero_pseudo_type_info");
#line 508 "rtti_to_mlds.m"
          return;
        }
#line 507 "rtti_to_mlds.m"
      }
#line 507 "rtti_to_mlds.m"
    else
#line 507 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 510 "rtti_to_mlds.m"
        {
#line 510 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 0)));
#line 510 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 1)));
#line 510 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_15;
#line 512 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 512 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv0_V_16_16;

#line 511 "rtti_to_mlds.m"
          {
#line 511 "rtti_to_mlds.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_15);
          }
#line 512 "rtti_to_mlds.m"
          {
#line 512 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_15, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv0_V_16_16);
          }
#line 512 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 512 "rtti_to_mlds.m"
            {
#line 512 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_V_16_16);
#line 512 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 512 "rtti_to_mlds.m"
            }
#line 515 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 512 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34;
#line 515 "rtti_to_mlds.m"
          else
#line 517 "rtti_to_mlds.m"
            {
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_115_115 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_17;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_18;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_19;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_21;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_23;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Type_24;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalType_25;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_73_73;
#line 517 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 519 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62;

#line 516 "rtti_to_mlds.m"
              {
#line 516 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ArgRttiDatas_17 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[13], ml_backend__rtti_to_mlds__ArgTypes_14);
              }
#line 518 "rtti_to_mlds.m"
              {
#line 518 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RealRttiDatas_18 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[14], ml_backend__rtti_to_mlds__ArgRttiDatas_17);
              }
#line 519 "rtti_to_mlds.m"
              {
#line 519 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 519 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 519 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3));
#line 519 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 519 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 519 "rtti_to_mlds.m"
              }
#line 519 "rtti_to_mlds.m"
              {
#line 519 "rtti_to_mlds.m"
                mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_61_61, ml_backend__rtti_to_mlds__RealRttiDatas_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62);
              }
#line 519 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62);
#line 521 "rtti_to_mlds.m"
              {
#line 521 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_19);
              }
#line 522 "rtti_to_mlds.m"
              {
#line 522 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 522 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 522 "rtti_to_mlds.m"
              }
#line 522 "rtti_to_mlds.m"
              {
#line 522 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 522 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 522 "rtti_to_mlds.m"
              }
#line 524 "rtti_to_mlds.m"
              {
#line 524 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_66_66 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__RttiTypeCtor_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
              }
#line 527 "rtti_to_mlds.m"
              {
#line 527 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_69_69 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__ArgRttiDatas_17);
              }
#line 524 "rtti_to_mlds.m"
              {
#line 524 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 524 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "rtti_to_mlds.m"
              }
#line 522 "rtti_to_mlds.m"
              {
#line 522 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 522 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 522 "rtti_to_mlds.m"
              }
#line 522 "rtti_to_mlds.m"
              {
#line 522 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 522 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 522 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 522 "rtti_to_mlds.m"
              }
#line 528 "rtti_to_mlds.m"
              {
#line 528 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72);
              }
#line 531 "rtti_to_mlds.m"
              {
#line 531 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_19);
              }
#line 532 "rtti_to_mlds.m"
              {
#line 532 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 532 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 532 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 532 "rtti_to_mlds.m"
              }
#line 532 "rtti_to_mlds.m"
              {
#line 532 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 532 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_21));
#line 532 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_73_73));
#line 532 "rtti_to_mlds.m"
              }
#line 533 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 533 "rtti_to_mlds.m"
              {
#line 533 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 533 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 533 "rtti_to_mlds.m"
              }
#line 535 "rtti_to_mlds.m"
              {
#line 535 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RvalType_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 535 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_23));
#line 535 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 535 "rtti_to_mlds.m"
              }
#line 537 "rtti_to_mlds.m"
              {
#line 537 "rtti_to_mlds.m"
                ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);
#line 537 "rtti_to_mlds.m"
                return;
              }
#line 517 "rtti_to_mlds.m"
            }
#line 510 "rtti_to_mlds.m"
        }
#line 507 "rtti_to_mlds.m"
      else
#line 507 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8)) == (MR_mktag((MR_Integer) 3))))
#line 588 "rtti_to_mlds.m"
          {
#line 589 "rtti_to_mlds.m"
            {
#line 589 "rtti_to_mlds.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/6", (MR_String) "type_var");
#line 589 "rtti_to_mlds.m"
              return;
            }
#line 588 "rtti_to_mlds.m"
          }
#line 507 "rtti_to_mlds.m"
        else
#line 540 "rtti_to_mlds.m"
          {
#line 540 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__VarArityId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 0)));
#line 540 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__ArgTypes_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 1)));
#line 540 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_102;
#line 542 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 542 "rtti_to_mlds.m"
            MR_Box ml_backend__rtti_to_mlds__conv4_V_27_27;

#line 541 "rtti_to_mlds.m"
            {
#line 541 "rtti_to_mlds.m"
              ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_102);
            }
#line 542 "rtti_to_mlds.m"
            {
#line 542 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_102, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv4_V_27_27);
            }
#line 542 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 542 "rtti_to_mlds.m"
              {
#line 542 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_V_27_27);
#line 542 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 542 "rtti_to_mlds.m"
              }
#line 545 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 542 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34;
#line 545 "rtti_to_mlds.m"
            else
#line 547 "rtti_to_mlds.m"
              {
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_125_125 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_126_126 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__Globals_28;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__TargetLang_29;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__InitRttiName_30;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__InitializerArgs_32;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_80;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_81;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_82;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__ModuleName_83;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__Initializer_84;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_85;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__DataAddr_86;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__Rval_87;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__Type_88;
#line 547 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__RvalType_89;
#line 549 "rtti_to_mlds.m"
                MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42;

#line 546 "rtti_to_mlds.m"
                {
#line 546 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__ArgRttiDatas_81 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_125_125, ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[15], ml_backend__rtti_to_mlds__ArgTypes_101);
                }
#line 548 "rtti_to_mlds.m"
                {
#line 548 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__RealRttiDatas_82 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[16], ml_backend__rtti_to_mlds__ArgRttiDatas_81);
                }
#line 549 "rtti_to_mlds.m"
                {
#line 549 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 549 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 549 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6));
#line 549 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 549 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 549 "rtti_to_mlds.m"
                }
#line 549 "rtti_to_mlds.m"
                {
#line 549 "rtti_to_mlds.m"
                  mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_41_41, ml_backend__rtti_to_mlds__RealRttiDatas_82, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42);
                }
#line 549 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42);
#line 551 "rtti_to_mlds.m"
                {
#line 551 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__RttiTypeCtor_80 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ml_backend__rtti_to_mlds__VarArityId_26);
                }
#line 552 "rtti_to_mlds.m"
                {
#line 552 "rtti_to_mlds.m"
                  hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_83);
                }
#line 553 "rtti_to_mlds.m"
                {
#line 553 "rtti_to_mlds.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__Globals_28);
                }
#line 554 "rtti_to_mlds.m"
                {
#line 554 "rtti_to_mlds.m"
                  libs__globals__get_target_2_p_0(ml_backend__rtti_to_mlds__Globals_28, &ml_backend__rtti_to_mlds__TargetLang_29);
                }
#line 556 "rtti_to_mlds.m"
                {
#line 556 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__InitRttiName_30 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_83, ml_backend__rtti_to_mlds__RttiTypeCtor_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
                }
#line 558 "rtti_to_mlds.m"
                {
#line 558 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_83, ml_backend__rtti_to_mlds__ArgRttiDatas_81);
                }
#line 560 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__TargetLang_29 == (MR_Integer) 3);
#line 567 "rtti_to_mlds.m"
                if (ml_backend__rtti_to_mlds__succeeded)
#line 566 "rtti_to_mlds.m"
                  {
#line 566 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 566 "rtti_to_mlds.m"
                    {
#line 566 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 566 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 566 "rtti_to_mlds.m"
                    }
#line 566 "rtti_to_mlds.m"
                    {
#line 566 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 566 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 566 "rtti_to_mlds.m"
                    }
#line 566 "rtti_to_mlds.m"
                  }
#line 567 "rtti_to_mlds.m"
                else
#line 568 "rtti_to_mlds.m"
                  {
#line 568 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 568 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 568 "rtti_to_mlds.m"
                    MR_Integer ml_backend__rtti_to_mlds__V_49_49;
#line 568 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__V_50_50;

#line 570 "rtti_to_mlds.m"
                    {
#line 570 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__V_49_49 = mercury__list__length_1_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_125_125, ml_backend__rtti_to_mlds__ArgTypes_101);
                    }
#line 570 "rtti_to_mlds.m"
                    {
#line 570 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__V_48_48 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_49_49);
                    }
#line 570 "rtti_to_mlds.m"
                    {
#line 570 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 570 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "rtti_to_mlds.m"
                    }
#line 569 "rtti_to_mlds.m"
                    {
#line 569 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 569 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 569 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 569 "rtti_to_mlds.m"
                    }
#line 568 "rtti_to_mlds.m"
                    {
#line 568 "rtti_to_mlds.m"
                      ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 568 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 568 "rtti_to_mlds.m"
                      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 568 "rtti_to_mlds.m"
                    }
#line 568 "rtti_to_mlds.m"
                  }
#line 574 "rtti_to_mlds.m"
                {
#line 574 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 574 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 574 "rtti_to_mlds.m"
                }
#line 574 "rtti_to_mlds.m"
                {
#line 574 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__Type_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 574 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_88, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 574 "rtti_to_mlds.m"
                }
#line 574 "rtti_to_mlds.m"
                {
#line 574 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__Initializer_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_88));
#line 574 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InitializerArgs_32));
#line 574 "rtti_to_mlds.m"
                }
#line 576 "rtti_to_mlds.m"
                {
#line 576 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_84, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
                }
#line 579 "rtti_to_mlds.m"
                {
#line 579 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__MLDS_ModuleName_85 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_83);
                }
#line 580 "rtti_to_mlds.m"
                {
#line 580 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 580 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 580 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 580 "rtti_to_mlds.m"
                }
#line 580 "rtti_to_mlds.m"
                {
#line 580 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__DataAddr_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 580 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_85));
#line 580 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_86, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 580 "rtti_to_mlds.m"
                }
#line 581 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_86);
#line 581 "rtti_to_mlds.m"
                {
#line 581 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__Rval_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 581 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 581 "rtti_to_mlds.m"
                }
#line 583 "rtti_to_mlds.m"
                {
#line 583 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__RvalType_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 583 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_87));
#line 583 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_88));
#line 583 "rtti_to_mlds.m"
                }
#line 585 "rtti_to_mlds.m"
                {
#line 585 "rtti_to_mlds.m"
                  ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_89, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);
#line 585 "rtti_to_mlds.m"
                  return;
                }
#line 547 "rtti_to_mlds.m"
              }
#line 540 "rtti_to_mlds.m"
          }
#line 507 "rtti_to_mlds.m"
  }
#line 500 "rtti_to_mlds.m"
}

#line 454 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6(
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 454 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 454 "rtti_to_mlds.m"
{
#line 454 "rtti_to_mlds.m"
  {
#line 454 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 454 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10;

#line 454 "rtti_to_mlds.m"
    {
#line 454 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10);
    }
#line 454 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10));
#line 454 "rtti_to_mlds.m"
  }
#line 454 "rtti_to_mlds.m"
}

#line 453 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_5(
#line 453 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 453 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 453 "rtti_to_mlds.m"
{
#line 453 "rtti_to_mlds.m"
  {
#line 453 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 453 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 453 "rtti_to_mlds.m"
    {
#line 453 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 453 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 453 "rtti_to_mlds.m"
  }
#line 453 "rtti_to_mlds.m"
}

#line 452 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_4(
#line 452 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 452 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 452 "rtti_to_mlds.m"
{
#line 452 "rtti_to_mlds.m"
  {
#line 452 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 452 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 452 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv5_HeadVar__2_2;

#line 452 "rtti_to_mlds.m"
    {
#line 452 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv5_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 452 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv5_HeadVar__2_2));
#line 452 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 452 "rtti_to_mlds.m"
  }
#line 452 "rtti_to_mlds.m"
}

#line 425 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3(
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 425 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 425 "rtti_to_mlds.m"
{
#line 425 "rtti_to_mlds.m"
  {
#line 425 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 425 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10;

#line 425 "rtti_to_mlds.m"
    {
#line 425 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10);
    }
#line 425 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10));
#line 425 "rtti_to_mlds.m"
  }
#line 425 "rtti_to_mlds.m"
}

#line 424 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_2(
#line 424 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 424 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 424 "rtti_to_mlds.m"
{
#line 424 "rtti_to_mlds.m"
  {
#line 424 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 424 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 424 "rtti_to_mlds.m"
    {
#line 424 "rtti_to_mlds.m"
      return ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 424 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 424 "rtti_to_mlds.m"
  }
#line 424 "rtti_to_mlds.m"
}

#line 423 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_1(
#line 423 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 423 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 423 "rtti_to_mlds.m"
{
#line 423 "rtti_to_mlds.m"
  {
#line 423 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 423 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 423 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 423 "rtti_to_mlds.m"
    {
#line 423 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 423 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 423 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 423 "rtti_to_mlds.m"
  }
#line 423 "rtti_to_mlds.m"
}

#line 408 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeInfo_8,
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 408 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33,
#line 408 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34)
#line 408 "rtti_to_mlds.m"
{
#line 414 "rtti_to_mlds.m"
  {
#line 414 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 414 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiTypeInfo_8)) == (MR_mktag((MR_Integer) 0))))
#line 414 "rtti_to_mlds.m"
      {
#line 415 "rtti_to_mlds.m"
        {
#line 415 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_type_info_defn\'/6", (MR_String) "plain_arity_zero_type_info");
#line 415 "rtti_to_mlds.m"
          return;
        }
#line 414 "rtti_to_mlds.m"
      }
#line 414 "rtti_to_mlds.m"
    else
#line 414 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiTypeInfo_8)) == (MR_mktag((MR_Integer) 1))))
#line 417 "rtti_to_mlds.m"
        {
#line 417 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 0)));
#line 417 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 1)));
#line 417 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_15;
#line 419 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 419 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv0_V_16_16;

#line 418 "rtti_to_mlds.m"
          {
#line 418 "rtti_to_mlds.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_15);
          }
#line 419 "rtti_to_mlds.m"
          {
#line 419 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_15, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv0_V_16_16);
          }
#line 419 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 419 "rtti_to_mlds.m"
            {
#line 419 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_V_16_16);
#line 419 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 419 "rtti_to_mlds.m"
            }
#line 422 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 419 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33;
#line 422 "rtti_to_mlds.m"
          else
#line 423 "rtti_to_mlds.m"
            {
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_17;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_18;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_19;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_21;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_23;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Type_24;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalType_25;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 423 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 425 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58;

#line 423 "rtti_to_mlds.m"
              {
#line 423 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ArgRttiDatas_17 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[9], ml_backend__rtti_to_mlds__ArgTypes_14);
              }
#line 424 "rtti_to_mlds.m"
              {
#line 424 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RealRttiDatas_18 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[10], ml_backend__rtti_to_mlds__ArgRttiDatas_17);
              }
#line 425 "rtti_to_mlds.m"
              {
#line 425 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 425 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 425 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3));
#line 425 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 425 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 425 "rtti_to_mlds.m"
              }
#line 425 "rtti_to_mlds.m"
              {
#line 425 "rtti_to_mlds.m"
                mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_57_57, ml_backend__rtti_to_mlds__RealRttiDatas_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58);
              }
#line 425 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58);
#line 427 "rtti_to_mlds.m"
              {
#line 427 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_19);
              }
#line 428 "rtti_to_mlds.m"
              {
#line 428 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 428 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 428 "rtti_to_mlds.m"
              }
#line 428 "rtti_to_mlds.m"
              {
#line 428 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 428 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 428 "rtti_to_mlds.m"
              }
#line 430 "rtti_to_mlds.m"
              {
#line 430 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_62_62 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__RttiTypeCtor_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
              }
#line 433 "rtti_to_mlds.m"
              {
#line 433 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_65_65 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__ArgRttiDatas_17);
              }
#line 430 "rtti_to_mlds.m"
              {
#line 430 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 430 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 430 "rtti_to_mlds.m"
              }
#line 428 "rtti_to_mlds.m"
              {
#line 428 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 428 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 428 "rtti_to_mlds.m"
              }
#line 428 "rtti_to_mlds.m"
              {
#line 428 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 428 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 428 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 428 "rtti_to_mlds.m"
              }
#line 434 "rtti_to_mlds.m"
              {
#line 434 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68);
              }
#line 437 "rtti_to_mlds.m"
              {
#line 437 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_19);
              }
#line 438 "rtti_to_mlds.m"
              {
#line 438 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 438 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 438 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 438 "rtti_to_mlds.m"
              }
#line 438 "rtti_to_mlds.m"
              {
#line 438 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 438 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_21));
#line 438 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 438 "rtti_to_mlds.m"
              }
#line 439 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 439 "rtti_to_mlds.m"
              {
#line 439 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 439 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 439 "rtti_to_mlds.m"
              }
#line 441 "rtti_to_mlds.m"
              {
#line 441 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RvalType_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 441 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_23));
#line 441 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 441 "rtti_to_mlds.m"
              }
#line 443 "rtti_to_mlds.m"
              {
#line 443 "rtti_to_mlds.m"
                ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);
#line 443 "rtti_to_mlds.m"
                return;
              }
#line 423 "rtti_to_mlds.m"
            }
#line 417 "rtti_to_mlds.m"
        }
#line 414 "rtti_to_mlds.m"
      else
#line 446 "rtti_to_mlds.m"
        {
#line 446 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__VarArityId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 0)));
#line 446 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 1)));
#line 446 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_98;
#line 448 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 448 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv4_V_27_27;

#line 447 "rtti_to_mlds.m"
          {
#line 447 "rtti_to_mlds.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_98);
          }
#line 448 "rtti_to_mlds.m"
          {
#line 448 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_98, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv4_V_27_27);
          }
#line 448 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 448 "rtti_to_mlds.m"
            {
#line 448 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_V_27_27);
#line 448 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 448 "rtti_to_mlds.m"
            }
#line 451 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 448 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33;
#line 451 "rtti_to_mlds.m"
          else
#line 452 "rtti_to_mlds.m"
            {
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_121_121 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_122_122 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Globals_28;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TargetLang_29;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitRttiName_30;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitializerArgs_32;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_76;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_77;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_78;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_79;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_80;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_81;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_82;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_83;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Type_84;
#line 452 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalType_85;
#line 454 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38;

#line 452 "rtti_to_mlds.m"
              {
#line 452 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ArgRttiDatas_77 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_121_121, ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[11], ml_backend__rtti_to_mlds__ArgTypes_97);
              }
#line 453 "rtti_to_mlds.m"
              {
#line 453 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RealRttiDatas_78 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[12], ml_backend__rtti_to_mlds__ArgRttiDatas_77);
              }
#line 454 "rtti_to_mlds.m"
              {
#line 454 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 454 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 454 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6));
#line 454 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 454 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 454 "rtti_to_mlds.m"
              }
#line 454 "rtti_to_mlds.m"
              {
#line 454 "rtti_to_mlds.m"
                mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_37_37, ml_backend__rtti_to_mlds__RealRttiDatas_78, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38);
              }
#line 454 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38);
#line 456 "rtti_to_mlds.m"
              {
#line 456 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_76 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ml_backend__rtti_to_mlds__VarArityId_26);
              }
#line 457 "rtti_to_mlds.m"
              {
#line 457 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_79);
              }
#line 458 "rtti_to_mlds.m"
              {
#line 458 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__Globals_28);
              }
#line 459 "rtti_to_mlds.m"
              {
#line 459 "rtti_to_mlds.m"
                libs__globals__get_target_2_p_0(ml_backend__rtti_to_mlds__Globals_28, &ml_backend__rtti_to_mlds__TargetLang_29);
              }
#line 461 "rtti_to_mlds.m"
              {
#line 461 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__InitRttiName_30 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_79, ml_backend__rtti_to_mlds__RttiTypeCtor_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
              }
#line 463 "rtti_to_mlds.m"
              {
#line 463 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), ml_backend__rtti_to_mlds__ModuleName_79, ml_backend__rtti_to_mlds__ArgRttiDatas_77);
              }
#line 465 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__TargetLang_29 == (MR_Integer) 3);
#line 479 "rtti_to_mlds.m"
              if (ml_backend__rtti_to_mlds__succeeded)
#line 478 "rtti_to_mlds.m"
                {
#line 478 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_41_41;

#line 478 "rtti_to_mlds.m"
                  {
#line 478 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 478 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 478 "rtti_to_mlds.m"
                  }
#line 478 "rtti_to_mlds.m"
                  {
#line 478 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 478 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 478 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 478 "rtti_to_mlds.m"
                  }
#line 478 "rtti_to_mlds.m"
                }
#line 479 "rtti_to_mlds.m"
              else
#line 480 "rtti_to_mlds.m"
                {
#line 480 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 480 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_44_44;
#line 480 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds__V_45_45;
#line 480 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_46_46;

#line 482 "rtti_to_mlds.m"
                  {
#line 482 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_45_45 = mercury__list__length_1_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_121_121, ml_backend__rtti_to_mlds__ArgTypes_97);
                  }
#line 482 "rtti_to_mlds.m"
                  {
#line 482 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_44_44 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_45_45);
                  }
#line 482 "rtti_to_mlds.m"
                  {
#line 482 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 482 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 482 "rtti_to_mlds.m"
                  }
#line 481 "rtti_to_mlds.m"
                  {
#line 481 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 481 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 481 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 481 "rtti_to_mlds.m"
                  }
#line 480 "rtti_to_mlds.m"
                  {
#line 480 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 480 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 480 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 480 "rtti_to_mlds.m"
                  }
#line 480 "rtti_to_mlds.m"
                }
#line 485 "rtti_to_mlds.m"
              {
#line 485 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 485 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 485 "rtti_to_mlds.m"
              }
#line 485 "rtti_to_mlds.m"
              {
#line 485 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Type_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 485 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 485 "rtti_to_mlds.m"
              }
#line 485 "rtti_to_mlds.m"
              {
#line 485 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_84));
#line 485 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InitializerArgs_32));
#line 485 "rtti_to_mlds.m"
              }
#line 487 "rtti_to_mlds.m"
              {
#line 487 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_80, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50);
              }
#line 490 "rtti_to_mlds.m"
              {
#line 490 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_81 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_79);
              }
#line 491 "rtti_to_mlds.m"
              {
#line 491 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 491 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_51_51, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 491 "rtti_to_mlds.m"
              }
#line 491 "rtti_to_mlds.m"
              {
#line 491 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 491 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_81));
#line 491 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_82, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 491 "rtti_to_mlds.m"
              }
#line 492 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_82);
#line 492 "rtti_to_mlds.m"
              {
#line 492 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 492 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 492 "rtti_to_mlds.m"
              }
#line 494 "rtti_to_mlds.m"
              {
#line 494 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RvalType_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 494 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_83));
#line 494 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_84));
#line 494 "rtti_to_mlds.m"
              }
#line 496 "rtti_to_mlds.m"
              {
#line 496 "rtti_to_mlds.m"
                ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_85, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);
#line 496 "rtti_to_mlds.m"
                return;
              }
#line 452 "rtti_to_mlds.m"
            }
#line 446 "rtti_to_mlds.m"
        }
#line 414 "rtti_to_mlds.m"
  }
#line 408 "rtti_to_mlds.m"
}

#line 399 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
#line 399 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 399 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_7,
#line 399 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 399 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 399 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10)
#line 399 "rtti_to_mlds.m"
{
#line 402 "rtti_to_mlds.m"
  {
#line 402 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 402 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_11;

#line 403 "rtti_to_mlds.m"
    {
#line 403 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 403 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 403 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_7));
#line 403 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_8));
#line 403 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_9));
#line 403 "rtti_to_mlds.m"
    }
#line 404 "rtti_to_mlds.m"
    {
#line 404 "rtti_to_mlds.m"
      MR_Word base;
#line 404 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 404 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_10 = base;
#line 404 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 404 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_11));
#line 404 "rtti_to_mlds.m"
    }
#line 402 "rtti_to_mlds.m"
  }
#line 399 "rtti_to_mlds.m"
}

#line 385 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4(
#line 385 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 385 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 385 "rtti_to_mlds.m"
{
#line 385 "rtti_to_mlds.m"
  {
#line 385 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 385 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 385 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv7_Initializer_8;

#line 385 "rtti_to_mlds.m"
    {
#line 385 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv7_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 385 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv7_Initializer_8));
#line 385 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 385 "rtti_to_mlds.m"
  }
#line 385 "rtti_to_mlds.m"
}

#line 381 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3(
#line 381 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 381 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 381 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 381 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 381 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 381 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 381 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 381 "rtti_to_mlds.m"
{
#line 381 "rtti_to_mlds.m"
  {
#line 381 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 381 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_RttiId_12;
#line 381 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25;
#line 381 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27;

#line 381 "rtti_to_mlds.m"
    {
#line 381 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv4_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27);
    }
#line 381 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_RttiId_12));
#line 381 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25));
#line 381 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27));
#line 381 "rtti_to_mlds.m"
  }
#line 381 "rtti_to_mlds.m"
}

#line 382 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2(
#line 382 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 382 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 382 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 382 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 382 "rtti_to_mlds.m"
{
#line 382 "rtti_to_mlds.m"
  {
#line 382 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 382 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_RttiId_10;

#line 382 "rtti_to_mlds.m"
    {
#line 382 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_RttiId_10);
    }
#line 382 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_RttiId_10));
#line 382 "rtti_to_mlds.m"
  }
#line 382 "rtti_to_mlds.m"
}

#line 375 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_1(
#line 375 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 375 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 375 "rtti_to_mlds.m"
{
#line 375 "rtti_to_mlds.m"
  {
#line 375 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 375 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 375 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 375 "rtti_to_mlds.m"
    {
#line 375 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 375 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 375 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 375 "rtti_to_mlds.m"
  }
#line 375 "rtti_to_mlds.m"
}

#line 359 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Instance_8,
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31,
#line 359 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32)
#line 359 "rtti_to_mlds.m"
{
#line 364 "rtti_to_mlds.m"
  {
#line 364 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_59_59;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_73_73;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 0)));
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 1)));
#line 364 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumTypeVars_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 2)));
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 3)));
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCDeclRttiId_17;
#line 364 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumInstanceConstraints_18;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceTypesRttiId_20;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_23;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_24;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypesInitializer_25;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCConstrIds_26;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ElementType_28;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_30;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_83;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_91;
#line 364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_92_92;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 4)));
#line 381 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 381 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv6_V_27_27;
#line 381 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39;

#line 367 "rtti_to_mlds.m"
    {
#line 367 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCDeclRttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 367 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCDeclRttiId_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 367 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCDeclRttiId_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 367 "rtti_to_mlds.m"
    }
#line 15752 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_59_59 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0;
#line 368 "rtti_to_mlds.m"
    {
#line 368 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_59_59, ml_backend__rtti_to_mlds__InstanceConstraints_15, &ml_backend__rtti_to_mlds__NumInstanceConstraints_18);
    }
#line 369 "rtti_to_mlds.m"
    {
#line 369 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 369 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 369 "rtti_to_mlds.m"
    }
#line 370 "rtti_to_mlds.m"
    {
#line 370 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceTypesRttiId_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 370 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19));
#line 370 "rtti_to_mlds.m"
    }
#line 371 "rtti_to_mlds.m"
    {
#line 371 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 371 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 371 "rtti_to_mlds.m"
    }
#line 372 "rtti_to_mlds.m"
    {
#line 372 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 372 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21));
#line 372 "rtti_to_mlds.m"
    }
#line 373 "rtti_to_mlds.m"
    {
#line 373 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_23);
    }
#line 375 "rtti_to_mlds.m"
    {
#line 375 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_24 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[8], ml_backend__rtti_to_mlds__Types_13);
    }
#line 376 "rtti_to_mlds.m"
    {
#line 376 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__TypeRttiDatas_24, &ml_backend__rtti_to_mlds__TypesInitializer_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35);
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_84_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceTypesRttiId_20));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_83, ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, ml_backend__rtti_to_mlds__TypesInitializer_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36);
    }
#line 382 "rtti_to_mlds.m"
    {
#line 382 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 382 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1]));
#line 382 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2));
#line 382 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 382 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 382 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 382 "rtti_to_mlds.m"
    }
#line 381 "rtti_to_mlds.m"
    {
#line 381 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 381 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 381 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3));
#line 381 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 381 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 381 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_40_40));
#line 381 "rtti_to_mlds.m"
    }
#line 381 "rtti_to_mlds.m"
    {
#line 381 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 15874 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_73_73 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 381 "rtti_to_mlds.m"
    {
#line 381 "rtti_to_mlds.m"
      mercury__list__map_foldl2_7_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_59_59, ml_backend__rtti_to_mlds__TypeCtorInfo_73_73, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_37_37, ml_backend__rtti_to_mlds__InstanceConstraints_15, &ml_backend__rtti_to_mlds__TCConstrIds_26, ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38)), &ml_backend__rtti_to_mlds__conv6_V_27_27, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39);
    }
#line 381 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv6_V_27_27);
#line 381 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39);
#line 384 "rtti_to_mlds.m"
    {
#line 384 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_42_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22));
#line 384 "rtti_to_mlds.m"
    }
#line 384 "rtti_to_mlds.m"
    {
#line 384 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ElementType_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 384 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 384 "rtti_to_mlds.m"
    }
#line 385 "rtti_to_mlds.m"
    {
#line 385 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 385 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 385 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4));
#line 385 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 385 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_28));
#line 385 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_23));
#line 385 "rtti_to_mlds.m"
    }
#line 385 "rtti_to_mlds.m"
    {
#line 385 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_73_73, ml_backend__rtti_to_mlds__V_43_43, ml_backend__rtti_to_mlds__TCConstrIds_26);
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_92_92, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_92_92));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_91, ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44);
    }
#line 390 "rtti_to_mlds.m"
    {
#line 390 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 390 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 390 "rtti_to_mlds.m"
    }
#line 390 "rtti_to_mlds.m"
    {
#line 390 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 390 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 390 "rtti_to_mlds.m"
    }
#line 391 "rtti_to_mlds.m"
    {
#line 391 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__TCDeclRttiId_17);
    }
#line 392 "rtti_to_mlds.m"
    {
#line 392 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_50_50 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumTypeVars_14);
    }
#line 393 "rtti_to_mlds.m"
    {
#line 393 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_52_52 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumInstanceConstraints_18);
    }
#line 394 "rtti_to_mlds.m"
    {
#line 394 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__InstanceTypesRttiId_20);
    }
#line 396 "rtti_to_mlds.m"
    {
#line 396 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_56_56 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22);
    }
#line 394 "rtti_to_mlds.m"
    {
#line 394 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 394 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 394 "rtti_to_mlds.m"
    }
#line 393 "rtti_to_mlds.m"
    {
#line 393 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 393 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_53_53, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 393 "rtti_to_mlds.m"
    }
#line 392 "rtti_to_mlds.m"
    {
#line 392 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_51_51, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 392 "rtti_to_mlds.m"
    }
#line 391 "rtti_to_mlds.m"
    {
#line 391 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 391 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 391 "rtti_to_mlds.m"
    }
#line 390 "rtti_to_mlds.m"
    {
#line 390 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 390 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 390 "rtti_to_mlds.m"
    }
#line 390 "rtti_to_mlds.m"
    {
#line 390 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 390 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 390 "rtti_to_mlds.m"
    }
#line 397 "rtti_to_mlds.m"
    {
#line 397 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32);
#line 397 "rtti_to_mlds.m"
      return;
    }
#line 364 "rtti_to_mlds.m"
  }
#line 359 "rtti_to_mlds.m"
}

#line 346 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
#line 346 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_4,
#line 346 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodId_5)
#line 346 "rtti_to_mlds.m"
{
#line 348 "rtti_to_mlds.m"
  {
#line 348 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
#line 348 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__MethodName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 0)));
#line 348 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__MethodArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 1)));
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 2)));
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 348 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 348 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_22;

#line 350 "rtti_to_mlds.m"
    {
#line 350 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_10, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_4));
#line 350 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 350 "rtti_to_mlds.m"
    }
#line 351 "rtti_to_mlds.m"
    {
#line 351 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 351 "rtti_to_mlds.m"
    }
#line 351 "rtti_to_mlds.m"
    {
#line 351 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_12_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 351 "rtti_to_mlds.m"
    }
#line 352 "rtti_to_mlds.m"
    {
#line 352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__MethodName_7);
    }
#line 353 "rtti_to_mlds.m"
    {
#line 353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__MethodArity_8);
    }
#line 1726 "rtti_to_mlds.m"
    {
#line 1726 "rtti_to_mlds.m"
      backend_libs__rtti__pred_or_func_to_string_2_p_0(ml_backend__rtti_to_mlds__PredOrFunc_9, &ml_backend__rtti_to_mlds__Name_22);
    }
#line 1725 "rtti_to_mlds.m"
    {
#line 1725 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_22);
    }
#line 353 "rtti_to_mlds.m"
    {
#line 353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "rtti_to_mlds.m"
    }
#line 352 "rtti_to_mlds.m"
    {
#line 352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 352 "rtti_to_mlds.m"
    }
#line 351 "rtti_to_mlds.m"
    {
#line 351 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_14_14, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_14_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 351 "rtti_to_mlds.m"
    }
#line 351 "rtti_to_mlds.m"
    {
#line 351 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_14_14));
#line 351 "rtti_to_mlds.m"
    }
#line 348 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_6;
#line 348 "rtti_to_mlds.m"
  }
#line 346 "rtti_to_mlds.m"
}

#line 343 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1(
#line 343 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 343 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 343 "rtti_to_mlds.m"
{
#line 343 "rtti_to_mlds.m"
  {
#line 343 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 343 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 343 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_6;

#line 343 "rtti_to_mlds.m"
    {
#line 343 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_6 = ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 343 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_6));
#line 343 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 343 "rtti_to_mlds.m"
  }
#line 343 "rtti_to_mlds.m"
}

#line 339 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(
#line 339 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 339 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_7,
#line 339 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodIds_8,
#line 339 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 339 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12)
#line 339 "rtti_to_mlds.m"
{
#line 342 "rtti_to_mlds.m"
  {
#line 342 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_10;
#line 342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_23;
#line 342 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 343 "rtti_to_mlds.m"
    {
#line 343 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 343 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[3]));
#line 343 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1));
#line 343 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 343 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_7));
#line 343 "rtti_to_mlds.m"
    }
#line 343 "rtti_to_mlds.m"
    {
#line 343 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ml_backend__rtti_to_mlds__V_13_13, ml_backend__rtti_to_mlds__MethodIds_8);
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_6));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_23, ml_backend__rtti_to_mlds__RttiId_6, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 342 "rtti_to_mlds.m"
  }
#line 339 "rtti_to_mlds.m"
}

#line 336 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1(
#line 336 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 336 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 336 "rtti_to_mlds.m"
{
#line 336 "rtti_to_mlds.m"
  {
#line 336 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 336 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 336 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 336 "rtti_to_mlds.m"
    {
#line 336 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 336 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 336 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 336 "rtti_to_mlds.m"
  }
#line 336 "rtti_to_mlds.m"
}

#line 332 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(
#line 332 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 332 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Names_6,
#line 332 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 332 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
#line 332 "rtti_to_mlds.m"
{
#line 335 "rtti_to_mlds.m"
  {
#line 335 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 335 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 335 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_21;
#line 335 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;

#line 336 "rtti_to_mlds.m"
    {
#line 336 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[7], ml_backend__rtti_to_mlds__Names_6);
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_22_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_5));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_21, ml_backend__rtti_to_mlds__RttiId_5, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 335 "rtti_to_mlds.m"
  }
#line 332 "rtti_to_mlds.m"
}

#line 326 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
#line 326 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_5,
#line 326 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_6,
#line 326 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_7,
#line 326 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_8)
#line 326 "rtti_to_mlds.m"
{
#line 328 "rtti_to_mlds.m"
  {
#line 328 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 328 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCRttiName_9;

#line 329 "rtti_to_mlds.m"
    {
#line 329 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCRttiName_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCRttiName_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_6));
#line 329 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCRttiName_9, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_7));
#line 329 "rtti_to_mlds.m"
    }
#line 330 "rtti_to_mlds.m"
    {
#line 330 "rtti_to_mlds.m"
      MR_Word base;
#line 330 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_8 = base;
#line 330 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_5));
#line 330 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_9));
#line 330 "rtti_to_mlds.m"
    }
#line 328 "rtti_to_mlds.m"
  }
#line 326 "rtti_to_mlds.m"
}

#line 309 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3(
#line 309 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 309 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 309 "rtti_to_mlds.m"
{
#line 309 "rtti_to_mlds.m"
  {
#line 309 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 309 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 309 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_Initializer_8;

#line 309 "rtti_to_mlds.m"
    {
#line 309 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 309 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_Initializer_8));
#line 309 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 309 "rtti_to_mlds.m"
  }
#line 309 "rtti_to_mlds.m"
}

#line 303 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2(
#line 303 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 303 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 303 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 303 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 303 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 303 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 303 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 303 "rtti_to_mlds.m"
{
#line 303 "rtti_to_mlds.m"
  {
#line 303 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 303 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_RttiId_12;
#line 303 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25;
#line 303 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27;

#line 303 "rtti_to_mlds.m"
    {
#line 303 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv3_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27);
    }
#line 303 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_RttiId_12));
#line 303 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25));
#line 303 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27));
#line 303 "rtti_to_mlds.m"
  }
#line 303 "rtti_to_mlds.m"
}

#line 304 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1(
#line 304 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 304 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 304 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 304 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 304 "rtti_to_mlds.m"
{
#line 304 "rtti_to_mlds.m"
  {
#line 304 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 304 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_RttiId_8;

#line 304 "rtti_to_mlds.m"
    {
#line 304 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_RttiId_8);
    }
#line 304 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_RttiId_8));
#line 304 "rtti_to_mlds.m"
  }
#line 304 "rtti_to_mlds.m"
}

#line 256 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCDecl_8,
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 256 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49,
#line 256 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50)
#line 256 "rtti_to_mlds.m"
{
#line 260 "rtti_to_mlds.m"
  {
#line 260 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 0)));
#line 260 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Version_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 1)));
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Supers_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 2)));
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 0)));
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 1)));
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 2)));
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleSymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 0)));
#line 260 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__ClassName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 1)));
#line 260 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 2)));
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_21;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNamesRttiId_22;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNamesInitializer_24;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIdsRttiId_27;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIdsInitializer_29;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCIdRttiId_32;
#line 260 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__ModuleSymNameStr_33;
#line 260 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumTVars_34;
#line 260 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumMethods_35;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCIdInitializer_36;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SupersInitType_45;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SupersInitializer_46;
#line 260 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumSupers_47;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_48;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_71_71;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_82_82;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_90_90;
#line 260 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_91_91;

#line 264 "rtti_to_mlds.m"
    {
#line 264 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_21);
    }
#line 265 "rtti_to_mlds.m"
    {
#line 265 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TVarNamesRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TVarNamesRttiId_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 265 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TVarNamesRttiId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 265 "rtti_to_mlds.m"
    }
#line 270 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TVarNames_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "rtti_to_mlds.m"
      {
#line 267 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TVarNamesInitType_23;
#line 267 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_53_53;

#line 268 "rtti_to_mlds.m"
        {
#line 268 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 268 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TVarNamesRttiId_22));
#line 268 "rtti_to_mlds.m"
        }
#line 268 "rtti_to_mlds.m"
        {
#line 268 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TVarNamesInitType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 268 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TVarNamesInitType_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 268 "rtti_to_mlds.m"
        }
#line 269 "rtti_to_mlds.m"
        {
#line 269 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitializer_24 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__TVarNamesInitType_23);
        }
#line 269 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49;
#line 267 "rtti_to_mlds.m"
      }
#line 270 "rtti_to_mlds.m"
    else
#line 271 "rtti_to_mlds.m"
      {
#line 272 "rtti_to_mlds.m"
        {
#line 272 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(ml_backend__rtti_to_mlds__TVarNamesRttiId_22, ml_backend__rtti_to_mlds__TVarNames_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
        }
#line 273 "rtti_to_mlds.m"
        {
#line 273 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitializer_24 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__TVarNamesRttiId_22);
        }
#line 271 "rtti_to_mlds.m"
      }
#line 275 "rtti_to_mlds.m"
    {
#line 275 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MethodIdsRttiId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 275 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MethodIdsRttiId_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 275 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MethodIdsRttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 275 "rtti_to_mlds.m"
    }
#line 280 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__MethodIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 277 "rtti_to_mlds.m"
      {
#line 277 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MethodIdsInitType_28;
#line 277 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_56_56;

#line 278 "rtti_to_mlds.m"
        {
#line 278 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 278 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsRttiId_27));
#line 278 "rtti_to_mlds.m"
        }
#line 278 "rtti_to_mlds.m"
        {
#line 278 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitType_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MethodIdsInitType_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 278 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MethodIdsInitType_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 278 "rtti_to_mlds.m"
        }
#line 279 "rtti_to_mlds.m"
        {
#line 279 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitializer_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__MethodIdsInitType_28);
        }
#line 279 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 277 "rtti_to_mlds.m"
      }
#line 280 "rtti_to_mlds.m"
    else
#line 281 "rtti_to_mlds.m"
      {
#line 282 "rtti_to_mlds.m"
        {
#line 282 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(ml_backend__rtti_to_mlds__MethodIdsRttiId_27, ml_backend__rtti_to_mlds__TCName_15, ml_backend__rtti_to_mlds__MethodIds_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55);
        }
#line 283 "rtti_to_mlds.m"
        {
#line 283 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitializer_29 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__MethodIdsRttiId_27);
        }
#line 281 "rtti_to_mlds.m"
      }
#line 285 "rtti_to_mlds.m"
    {
#line 285 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCIdRttiId_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCIdRttiId_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 285 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCIdRttiId_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 285 "rtti_to_mlds.m"
    }
#line 286 "rtti_to_mlds.m"
    {
#line 286 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ModuleSymNameStr_33 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ml_backend__rtti_to_mlds__ModuleSymName_18);
    }
#line 287 "rtti_to_mlds.m"
    {
#line 287 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TVarNames_16, &ml_backend__rtti_to_mlds__NumTVars_34);
    }
#line 288 "rtti_to_mlds.m"
    {
#line 288 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ml_backend__rtti_to_mlds__MethodIds_17, &ml_backend__rtti_to_mlds__NumMethods_35);
    }
#line 289 "rtti_to_mlds.m"
    {
#line 289 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCIdRttiId_32));
#line 289 "rtti_to_mlds.m"
    }
#line 289 "rtti_to_mlds.m"
    {
#line 289 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 289 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 289 "rtti_to_mlds.m"
    }
#line 290 "rtti_to_mlds.m"
    {
#line 290 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_61_61 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__ModuleSymNameStr_33);
    }
#line 291 "rtti_to_mlds.m"
    {
#line 291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_63_63 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__ClassName_19);
    }
#line 292 "rtti_to_mlds.m"
    {
#line 292 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_65_65 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Arity_20);
    }
#line 293 "rtti_to_mlds.m"
    {
#line 293 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_67_67 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumTVars_34);
    }
#line 294 "rtti_to_mlds.m"
    {
#line 294 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_69_69 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumMethods_35);
    }
#line 295 "rtti_to_mlds.m"
    {
#line 295 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsInitializer_29));
#line 295 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "rtti_to_mlds.m"
    }
#line 294 "rtti_to_mlds.m"
    {
#line 294 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_70_70, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TVarNamesInitializer_24));
#line 294 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_70_70, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_71_71));
#line 294 "rtti_to_mlds.m"
    }
#line 293 "rtti_to_mlds.m"
    {
#line 293 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 293 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 293 "rtti_to_mlds.m"
    }
#line 292 "rtti_to_mlds.m"
    {
#line 292 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_67_67));
#line 292 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 292 "rtti_to_mlds.m"
    }
#line 291 "rtti_to_mlds.m"
    {
#line 291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 291 "rtti_to_mlds.m"
    }
#line 290 "rtti_to_mlds.m"
    {
#line 290 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_62_62, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_63_63));
#line 290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_62_62, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 290 "rtti_to_mlds.m"
    }
#line 289 "rtti_to_mlds.m"
    {
#line 289 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 289 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_60_60, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 289 "rtti_to_mlds.m"
    }
#line 289 "rtti_to_mlds.m"
    {
#line 289 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCIdInitializer_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCIdInitializer_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_58_58));
#line 289 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCIdInitializer_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 289 "rtti_to_mlds.m"
    }
#line 298 "rtti_to_mlds.m"
    {
#line 298 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__TCIdRttiId_32, ml_backend__rtti_to_mlds__TCIdInitializer_36, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73);
    }
#line 301 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Supers_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 300 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73;
#line 301 "rtti_to_mlds.m"
    else
#line 302 "rtti_to_mlds.m"
      {
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_106_106;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperRttiIds_39;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperArrayRttiId_42;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ElementType_43;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperArrayInitializer_44;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 302 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_40_40;
#line 303 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv5_V_40_40;
#line 303 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76;

#line 304 "rtti_to_mlds.m"
        {
#line 304 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 304 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[1]));
#line 304 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1));
#line 304 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 304 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 304 "rtti_to_mlds.m"
        }
#line 303 "rtti_to_mlds.m"
        {
#line 303 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 303 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 303 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2));
#line 303 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 303 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 303 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 303 "rtti_to_mlds.m"
        }
#line 303 "rtti_to_mlds.m"
        {
#line 303 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_75_75 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 17036 "ml_backend.rtti_to_mlds.c"
        ml_backend__rtti_to_mlds__TypeCtorInfo_106_106 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 303 "rtti_to_mlds.m"
        {
#line 303 "rtti_to_mlds.m"
          mercury__list__map_foldl2_7_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ml_backend__rtti_to_mlds__TypeCtorInfo_106_106, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_74_74, ml_backend__rtti_to_mlds__Supers_14, &ml_backend__rtti_to_mlds__SuperRttiIds_39, ((MR_Box) (ml_backend__rtti_to_mlds__V_75_75)), &ml_backend__rtti_to_mlds__conv5_V_40_40, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76);
        }
#line 303 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_V_40_40);
#line 303 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76);
#line 307 "rtti_to_mlds.m"
        {
#line 307 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SuperArrayRttiId_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 307 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SuperArrayRttiId_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 307 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SuperArrayRttiId_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 307 "rtti_to_mlds.m"
        }
#line 308 "rtti_to_mlds.m"
        {
#line 308 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_79_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__SuperArrayRttiId_42));
#line 308 "rtti_to_mlds.m"
        }
#line 308 "rtti_to_mlds.m"
        {
#line 308 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ElementType_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_79_79));
#line 308 "rtti_to_mlds.m"
        }
#line 309 "rtti_to_mlds.m"
        {
#line 309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_43));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_21));
#line 309 "rtti_to_mlds.m"
        }
#line 309 "rtti_to_mlds.m"
        {
#line 309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SuperArrayInitializer_44 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_106_106, ml_backend__rtti_to_mlds__V_80_80, ml_backend__rtti_to_mlds__SuperRttiIds_39);
        }
#line 311 "rtti_to_mlds.m"
        {
#line 311 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__SuperArrayRttiId_42, ml_backend__rtti_to_mlds__SuperArrayInitializer_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81);
        }
#line 302 "rtti_to_mlds.m"
      }
#line 315 "rtti_to_mlds.m"
    {
#line 315 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 315 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_82_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsRttiId_27));
#line 315 "rtti_to_mlds.m"
    }
#line 315 "rtti_to_mlds.m"
    {
#line 315 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__SupersInitType_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 315 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__SupersInitType_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 315 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__SupersInitType_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_82_82));
#line 315 "rtti_to_mlds.m"
    }
#line 316 "rtti_to_mlds.m"
    {
#line 316 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__SupersInitializer_46 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__SupersInitType_45);
    }
#line 317 "rtti_to_mlds.m"
    {
#line 317 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ml_backend__rtti_to_mlds__Supers_14, &ml_backend__rtti_to_mlds__NumSupers_47);
    }
#line 318 "rtti_to_mlds.m"
    {
#line 318 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 318 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 318 "rtti_to_mlds.m"
    }
#line 318 "rtti_to_mlds.m"
    {
#line 318 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 318 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 318 "rtti_to_mlds.m"
    }
#line 319 "rtti_to_mlds.m"
    {
#line 319 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_86_86 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__TCIdRttiId_32);
    }
#line 320 "rtti_to_mlds.m"
    {
#line 320 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_88_88 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Version_13);
    }
#line 321 "rtti_to_mlds.m"
    {
#line 321 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_90_90 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSupers_47);
    }
#line 321 "rtti_to_mlds.m"
    {
#line 321 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__SupersInitializer_46));
#line 321 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 321 "rtti_to_mlds.m"
    }
#line 320 "rtti_to_mlds.m"
    {
#line 320 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_89_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_90_90));
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_89_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_91_91));
#line 320 "rtti_to_mlds.m"
    }
#line 319 "rtti_to_mlds.m"
    {
#line 319 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_87_87, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 319 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_87_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 319 "rtti_to_mlds.m"
    }
#line 318 "rtti_to_mlds.m"
    {
#line 318 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 318 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 318 "rtti_to_mlds.m"
    }
#line 318 "rtti_to_mlds.m"
    {
#line 318 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 318 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 318 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 318 "rtti_to_mlds.m"
    }
#line 324 "rtti_to_mlds.m"
    {
#line 324 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_48, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
#line 324 "rtti_to_mlds.m"
      return;
    }
#line 260 "rtti_to_mlds.m"
  }
#line 256 "rtti_to_mlds.m"
}

#line 171 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1(
#line 171 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 171 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 171 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 171 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 171 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4)
#line 171 "rtti_to_mlds.m"
{
#line 171 "rtti_to_mlds.m"
  {
#line 171 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 171 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_Initializer_10;
#line 171 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13;

#line 171 "rtti_to_mlds.m"
    {
#line 171 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_init_method_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv1_Initializer_10, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13);
    }
#line 171 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_Initializer_10));
#line 171 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13));
#line 171 "rtti_to_mlds.m"
  }
#line 171 "rtti_to_mlds.m"
}

#line 160 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(
#line 160 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_5,
#line 160 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_6,
#line 160 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47,
#line 160 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48)
#line 160 "rtti_to_mlds.m"
{
#line 163 "rtti_to_mlds.m"
  {
#line 163 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 163 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_8;
#line 163 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_9;
#line 163 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;

#line 164 "rtti_to_mlds.m"
    {
#line 164 "rtti_to_mlds.m"
      backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__rtti_to_mlds__RttiData_6, &ml_backend__rtti_to_mlds__RttiId_8);
    }
#line 165 "rtti_to_mlds.m"
    {
#line 165 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 165 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 165 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_8));
#line 165 "rtti_to_mlds.m"
    }
#line 165 "rtti_to_mlds.m"
    {
#line 165 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 165 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 165 "rtti_to_mlds.m"
    }
#line 183 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 1))))
#line 191 "rtti_to_mlds.m"
      {
#line 191 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCDecl_25 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 1);

#line 192 "rtti_to_mlds.m"
        {
#line 192 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__TCDecl_25, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 192 "rtti_to_mlds.m"
          return;
        }
#line 191 "rtti_to_mlds.m"
      }
#line 183 "rtti_to_mlds.m"
    else
#line 183 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 2))))
#line 195 "rtti_to_mlds.m"
        {
#line 195 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Instance_26 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 2);

#line 196 "rtti_to_mlds.m"
          {
#line 196 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__Instance_26, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 196 "rtti_to_mlds.m"
            return;
          }
#line 195 "rtti_to_mlds.m"
        }
#line 183 "rtti_to_mlds.m"
      else
#line 183 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 0))))
#line 199 "rtti_to_mlds.m"
          {
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeCtorData_27 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 0);
#line 199 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__Version_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 0)));
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeModule_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 1)));
#line 199 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__TypeName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 2)));
#line 199 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__TypeArity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 3)));
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__UnifyUniv_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 4)));
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__CompareUniv_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 5)));
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Flags_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 6)));
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 7)));
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_36;
#line 199 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__TypeModuleName_37;
#line 199 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__NumPtags_38;
#line 199 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__NumFunctors_39;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__FunctorsRttiId_40;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__LayoutRttiId_41;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__FunctorsInfo_42;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__LayoutInfo_43;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__NumberMapInfo_44;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__UnifyInitializer_45;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__CompareInitializer_46;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_71_71;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_72_72;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_73_73;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_78_78;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_81_81;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 199 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__V_87_87;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 199 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__Initializer_108;

#line 202 "rtti_to_mlds.m"
            {
#line 202 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__RttiTypeCtor_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 202 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeModule_29));
#line 202 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeName_30));
#line 202 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeArity_31));
#line 202 "rtti_to_mlds.m"
            }
#line 203 "rtti_to_mlds.m"
            {
#line 203 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__TypeModuleName_37 = mdbcomp__prim_data__sym_name_to_string_1_f_0(ml_backend__rtti_to_mlds__TypeModule_29);
            }
#line 204 "rtti_to_mlds.m"
            {
#line 204 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__NumPtags_38 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(ml_backend__rtti_to_mlds__TypeCtorDetails_35);
            }
#line 205 "rtti_to_mlds.m"
            {
#line 205 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__NumFunctors_39 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(ml_backend__rtti_to_mlds__TypeCtorDetails_35);
            }
#line 206 "rtti_to_mlds.m"
            {
#line 206 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__FunctorsRttiId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 206 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FunctorsRttiId_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_36));
#line 206 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FunctorsRttiId_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 206 "rtti_to_mlds.m"
            }
#line 207 "rtti_to_mlds.m"
            {
#line 207 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__LayoutRttiId_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__LayoutRttiId_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_36));
#line 207 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__LayoutRttiId_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
#line 207 "rtti_to_mlds.m"
            }
#line 209 "rtti_to_mlds.m"
            {
#line 209 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__RttiTypeCtor_36, ml_backend__rtti_to_mlds__TypeCtorDetails_35, &ml_backend__rtti_to_mlds__FunctorsInfo_42, &ml_backend__rtti_to_mlds__LayoutInfo_43, &ml_backend__rtti_to_mlds__NumberMapInfo_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
            }
#line 216 "rtti_to_mlds.m"
            {
#line 216 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__UnifyUniv_32, &ml_backend__rtti_to_mlds__UnifyInitializer_45, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53);
            }
#line 218 "rtti_to_mlds.m"
            {
#line 218 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__CompareUniv_33, &ml_backend__rtti_to_mlds__CompareInitializer_46, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
            }
#line 221 "rtti_to_mlds.m"
            {
#line 221 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 221 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_8));
#line 221 "rtti_to_mlds.m"
            }
#line 221 "rtti_to_mlds.m"
            {
#line 221 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 221 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 221 "rtti_to_mlds.m"
            }
#line 222 "rtti_to_mlds.m"
            {
#line 222 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_58_58 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__TypeArity_31);
            }
#line 223 "rtti_to_mlds.m"
            {
#line 223 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_60_60 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Version_28);
            }
#line 224 "rtti_to_mlds.m"
            {
#line 224 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_62_62 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumPtags_38);
            }
#line 225 "rtti_to_mlds.m"
            {
#line 225 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_64_64 = ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(ml_backend__rtti_to_mlds__TypeCtorData_27);
            }
#line 228 "rtti_to_mlds.m"
            {
#line 228 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_68_68 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__TypeModuleName_37);
            }
#line 229 "rtti_to_mlds.m"
            {
#line 229 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_70_70 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__TypeName_30);
            }
#line 233 "rtti_to_mlds.m"
            {
#line 233 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 233 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__FunctorsRttiId_40));
#line 233 "rtti_to_mlds.m"
            }
#line 233 "rtti_to_mlds.m"
            {
#line 233 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 233 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 233 "rtti_to_mlds.m"
            }
#line 233 "rtti_to_mlds.m"
            {
#line 233 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 233 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__FunctorsInfo_42));
#line 233 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 233 "rtti_to_mlds.m"
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
#line 236 "rtti_to_mlds.m"
            {
#line 236 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 236 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__LayoutRttiId_41));
#line 236 "rtti_to_mlds.m"
            }
#line 236 "rtti_to_mlds.m"
            {
#line 236 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 236 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_79_79, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_80_80));
#line 236 "rtti_to_mlds.m"
            }
#line 236 "rtti_to_mlds.m"
            {
#line 236 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_81_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__LayoutInfo_43));
#line 236 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "rtti_to_mlds.m"
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
#line 239 "rtti_to_mlds.m"
            {
#line 239 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_84_84 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumFunctors_39);
            }
#line 240 "rtti_to_mlds.m"
            {
#line 240 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_87_87 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(ml_backend__rtti_to_mlds__Flags_34);
            }
#line 240 "rtti_to_mlds.m"
            {
#line 240 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_86_86 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_87_87);
            }
#line 240 "rtti_to_mlds.m"
            {
#line 240 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__NumberMapInfo_44));
#line 240 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 240 "rtti_to_mlds.m"
            }
#line 239 "rtti_to_mlds.m"
            {
#line 239 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 239 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 239 "rtti_to_mlds.m"
            }
#line 238 "rtti_to_mlds.m"
            {
#line 238 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 238 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 238 "rtti_to_mlds.m"
            }
#line 235 "rtti_to_mlds.m"
            {
#line 235 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 235 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_77_77, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_78_78));
#line 235 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_77_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 235 "rtti_to_mlds.m"
            }
#line 229 "rtti_to_mlds.m"
            {
#line 229 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_72_72));
#line 229 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 229 "rtti_to_mlds.m"
            }
#line 228 "rtti_to_mlds.m"
            {
#line 228 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 228 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_71_71));
#line 228 "rtti_to_mlds.m"
            }
#line 227 "rtti_to_mlds.m"
            {
#line 227 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_67_67, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 227 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_67_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 227 "rtti_to_mlds.m"
            }
#line 226 "rtti_to_mlds.m"
            {
#line 226 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__CompareInitializer_46));
#line 226 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_67_67));
#line 226 "rtti_to_mlds.m"
            }
#line 225 "rtti_to_mlds.m"
            {
#line 225 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__UnifyInitializer_45));
#line 225 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 225 "rtti_to_mlds.m"
            }
#line 224 "rtti_to_mlds.m"
            {
#line 224 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_63_63, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 224 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_63_63, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 224 "rtti_to_mlds.m"
            }
#line 223 "rtti_to_mlds.m"
            {
#line 223 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 223 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_63_63));
#line 223 "rtti_to_mlds.m"
            }
#line 222 "rtti_to_mlds.m"
            {
#line 222 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 222 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_59_59, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 222 "rtti_to_mlds.m"
            }
#line 221 "rtti_to_mlds.m"
            {
#line 221 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_58_58));
#line 221 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 221 "rtti_to_mlds.m"
            }
#line 221 "rtti_to_mlds.m"
            {
#line 221 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Initializer_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 221 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_108, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 221 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_108, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_57_57));
#line 221 "rtti_to_mlds.m"
            }
#line 250 "rtti_to_mlds.m"
            {
#line 250 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__Initializer_108, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 250 "rtti_to_mlds.m"
              return;
            }
#line 199 "rtti_to_mlds.m"
          }
#line 183 "rtti_to_mlds.m"
        else
#line 183 "rtti_to_mlds.m"
          if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 168 "rtti_to_mlds.m"
            {
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__BaseTypeClassInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 4)));
#line 168 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__N2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 1)));
#line 168 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__N3_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 2)));
#line 168 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__N4_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 3)));
#line 168 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__N5_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 4)));
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Methods_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 5)));
#line 168 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__NumExtra_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 0)));
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MethodInitializers_21;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_22;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_95_95;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_97_97;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_98_98;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_99_99;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_100_100;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_101_101;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_102_102;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_103_103;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_104_104;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_105_105;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_106_106;
#line 167 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds___InstanceModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));
#line 167 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds___ClassId_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 2)));
#line 167 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___InstanceStr_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 3)));
#line 171 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96;

#line 171 "rtti_to_mlds.m"
              {
#line 171 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 171 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
#line 171 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1));
#line 171 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 171 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_5));
#line 171 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__NumExtra_20));
#line 171 "rtti_to_mlds.m"
              }
#line 171 "rtti_to_mlds.m"
              {
#line 171 "rtti_to_mlds.m"
                mercury__list__map_foldl_5_p_1((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_95_95, ml_backend__rtti_to_mlds__Methods_19, &ml_backend__rtti_to_mlds__MethodInitializers_21, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47)), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96);
              }
#line 171 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96);
#line 174 "rtti_to_mlds.m"
              {
#line 174 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_98_98 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__NumExtra_20);
              }
#line 175 "rtti_to_mlds.m"
              {
#line 175 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_100_100 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N2_15);
              }
#line 176 "rtti_to_mlds.m"
              {
#line 176 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_102_102 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N3_16);
              }
#line 177 "rtti_to_mlds.m"
              {
#line 177 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_104_104 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N4_17);
              }
#line 179 "rtti_to_mlds.m"
              {
#line 179 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_106_106 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N5_18);
              }
#line 177 "rtti_to_mlds.m"
              {
#line 177 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_105_105, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_106_106));
#line 177 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_105_105, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodInitializers_21));
#line 177 "rtti_to_mlds.m"
              }
#line 176 "rtti_to_mlds.m"
              {
#line 176 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_103_103, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_104_104));
#line 176 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_103_103, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_105_105));
#line 176 "rtti_to_mlds.m"
              }
#line 175 "rtti_to_mlds.m"
              {
#line 175 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_101_101, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_102_102));
#line 175 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_101_101, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_103_103));
#line 175 "rtti_to_mlds.m"
              }
#line 174 "rtti_to_mlds.m"
              {
#line 174 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_99_99, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_100_100));
#line 174 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_99_99, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_101_101));
#line 174 "rtti_to_mlds.m"
              }
#line 173 "rtti_to_mlds.m"
              {
#line 173 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_97_97, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_98_98));
#line 173 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_97_97, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_99_99));
#line 173 "rtti_to_mlds.m"
              }
#line 173 "rtti_to_mlds.m"
              {
#line 173 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 173 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_97_97));
#line 173 "rtti_to_mlds.m"
              }
#line 181 "rtti_to_mlds.m"
              {
#line 181 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__Initializer_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 181 "rtti_to_mlds.m"
                return;
              }
#line 168 "rtti_to_mlds.m"
            }
#line 183 "rtti_to_mlds.m"
          else
#line 183 "rtti_to_mlds.m"
            if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 187 "rtti_to_mlds.m"
              {
#line 187 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));

#line 188 "rtti_to_mlds.m"
                {
#line 188 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__PseudoTypeInfo_24, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 188 "rtti_to_mlds.m"
                  return;
                }
#line 187 "rtti_to_mlds.m"
              }
#line 183 "rtti_to_mlds.m"
            else
#line 184 "rtti_to_mlds.m"
              {
#line 184 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__TypeInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));

#line 185 "rtti_to_mlds.m"
                {
#line 185 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__TypeInfo_23, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
#line 185 "rtti_to_mlds.m"
                  return;
                }
#line 184 "rtti_to_mlds.m"
              }
#line 163 "rtti_to_mlds.m"
  }
#line 160 "rtti_to_mlds.m"
}

#line 109 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
#line 109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_6,
#line 109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7,
#line 109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_8,
#line 109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 109 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 109 "rtti_to_mlds.m"
{
#line 112 "rtti_to_mlds.m"
  {
#line 112 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_10;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_Context_11;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Exported_12;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Flags_13;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_Type_15;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DefnBody_16;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Defn_17;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 112 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Access_24;

#line 117 "rtti_to_mlds.m"
    {
#line 117 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_10);
    }
#line 118 "rtti_to_mlds.m"
    {
#line 118 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_Context_11 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__rtti_to_mlds__Context_10);
    }
#line 121 "rtti_to_mlds.m"
    {
#line 121 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Exported_12 = backend_libs__rtti__rtti_id_is_exported_1_f_0(ml_backend__rtti_to_mlds__RttiId_7);
    }
#line 143 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Exported_12 == (MR_Integer) 0))
#line 145 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Access_24 = (MR_Integer) 2;
#line 143 "rtti_to_mlds.m"
    else
#line 142 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Access_24 = (MR_Integer) 0;
#line 152 "rtti_to_mlds.m"
    {
#line 152 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Flags_13 = ml_backend__mlds__init_decl_flags_6_f_0(ml_backend__rtti_to_mlds__Access_24, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 129 "rtti_to_mlds.m"
    {
#line 129 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 129 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_20_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_7));
#line 129 "rtti_to_mlds.m"
    }
#line 129 "rtti_to_mlds.m"
    {
#line 129 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_Type_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 129 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_Type_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 129 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_Type_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 129 "rtti_to_mlds.m"
    }
#line 130 "rtti_to_mlds.m"
    {
#line 130 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DefnBody_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_Type_15));
#line 130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializer_8));
#line 130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 130 "rtti_to_mlds.m"
    }
#line 131 "rtti_to_mlds.m"
    {
#line 131 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Defn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Name_6));
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_Context_11));
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Flags_13));
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnBody_16));
#line 131 "rtti_to_mlds.m"
    }
#line 133 "rtti_to_mlds.m"
    {
#line 133 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defn_3_p_0(ml_backend__rtti_to_mlds__Defn_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
#line 133 "rtti_to_mlds.m"
      return;
    }
#line 112 "rtti_to_mlds.m"
  }
#line 109 "rtti_to_mlds.m"
}

#line 102 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
#line 102 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 102 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 102 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 102 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
#line 102 "rtti_to_mlds.m"
{
#line 105 "rtti_to_mlds.m"
  {
#line 105 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 105 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_8;
#line 105 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;

#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_5));
#line 106 "rtti_to_mlds.m"
    }
#line 106 "rtti_to_mlds.m"
    {
#line 106 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 106 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 106 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_8, ml_backend__rtti_to_mlds__RttiId_5, ml_backend__rtti_to_mlds__Initializer_6, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
#line 107 "rtti_to_mlds.m"
      return;
    }
#line 105 "rtti_to_mlds.m"
  }
#line 102 "rtti_to_mlds.m"
}

#line 1752 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1752 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1752 "rtti_to_mlds.m"
{
#line 1752 "rtti_to_mlds.m"
  {
#line 1752 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1752 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv8_HeadVar__3_37;

#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv8_HeadVar__3_37);
    }
#line 1752 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv8_HeadVar__3_37));
#line 1752 "rtti_to_mlds.m"
  }
#line 1752 "rtti_to_mlds.m"
}

#line 1752 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1752 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1752 "rtti_to_mlds.m"
{
#line 1752 "rtti_to_mlds.m"
  {
#line 1752 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1752 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1752 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv7_HeadVar__3_41;

#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv7_HeadVar__3_41);
    }
#line 1752 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1752 "rtti_to_mlds.m"
      {
#line 1752 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv7_HeadVar__3_41));
#line 1752 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1752 "rtti_to_mlds.m"
      }
#line 1752 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1752 "rtti_to_mlds.m"
  }
#line 1752 "rtti_to_mlds.m"
}

#line 1751 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
#line 1751 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1751 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1751 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1751 "rtti_to_mlds.m"
{
#line 1751 "rtti_to_mlds.m"
  {
#line 1751 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1751 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_HeadVar__2_33;

#line 1751 "rtti_to_mlds.m"
    {
#line 1751 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1751__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv6_HeadVar__2_33);
    }
#line 1751 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_HeadVar__2_33));
#line 1751 "rtti_to_mlds.m"
  }
#line 1751 "rtti_to_mlds.m"
}

#line 1747 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1747 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1747 "rtti_to_mlds.m"
{
#line 1747 "rtti_to_mlds.m"
  {
#line 1747 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1747 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16;

#line 1747 "rtti_to_mlds.m"
    {
#line 1747 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16);
    }
#line 1747 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16));
#line 1747 "rtti_to_mlds.m"
  }
#line 1747 "rtti_to_mlds.m"
}

#line 1746 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
#line 1746 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1746 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1746 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1746 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1746 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 1746 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_5)
#line 1746 "rtti_to_mlds.m"
{
#line 1746 "rtti_to_mlds.m"
  {
#line 1746 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1746 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20;
#line 1746 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22;

#line 1746 "rtti_to_mlds.m"
    {
#line 1746 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_4), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22);
    }
#line 1746 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20));
#line 1746 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_5 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22));
#line 1746 "rtti_to_mlds.m"
  }
#line 1746 "rtti_to_mlds.m"
}

#line 46 "rtti_to_mlds.m"
MR_Word MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(
#line 46 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defns_3)
#line 46 "rtti_to_mlds.m"
{
#line 1743 "rtti_to_mlds.m"
  {
#line 1743 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdDefns_4;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_19_19 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_25_25;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_26_26;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_31_31;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_35_35;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__NameMap_6;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RevOrdSets_7;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdSets_8;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdLists_9;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1743 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1746 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12;
#line 1746 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv2_NameMap_6;
#line 1747 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15;

#line 1745 "rtti_to_mlds.m"
    {
#line 1745 "rtti_to_mlds.m"
      mercury__digraph__init_1_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10);
    }
#line 18428 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 1746 "rtti_to_mlds.m"
    {
#line 1746 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = mercury__map__init_0_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, ml_backend__rtti_to_mlds__TypeCtorInfo_25_25);
    }
#line 18435 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_26_26 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0];
#line 1746 "rtti_to_mlds.m"
    {
#line 1746 "rtti_to_mlds.m"
      mercury__list__foldl2_6_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_25_25, ml_backend__rtti_to_mlds__TypeInfo_26_26, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[0], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[4], ml_backend__rtti_to_mlds__Defns_3, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12, ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13)), &ml_backend__rtti_to_mlds__conv2_NameMap_6);
    }
#line 1746 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12);
#line 1746 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__NameMap_6 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_NameMap_6);
#line 1747 "rtti_to_mlds.m"
    {
#line 1747 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_25_25, ml_backend__rtti_to_mlds__TypeInfo_26_26, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[5], ml_backend__rtti_to_mlds__Defns_3, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15);
    }
#line 1747 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15);
#line 1748 "rtti_to_mlds.m"
    {
#line 1748 "rtti_to_mlds.m"
      mercury__digraph__atsort_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15, &ml_backend__rtti_to_mlds__RevOrdSets_7);
    }
#line 18458 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_31_31 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[1];
#line 1750 "rtti_to_mlds.m"
    {
#line 1750 "rtti_to_mlds.m"
      mercury__list__reverse_2_p_0(ml_backend__rtti_to_mlds__TypeInfo_31_31, ml_backend__rtti_to_mlds__RevOrdSets_7, &ml_backend__rtti_to_mlds__OrdSets_8);
    }
#line 18465 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_35_35 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[2];
#line 1751 "rtti_to_mlds.m"
    {
#line 1751 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_31_31, ml_backend__rtti_to_mlds__TypeInfo_35_35, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[6], ml_backend__rtti_to_mlds__OrdSets_8, &ml_backend__rtti_to_mlds__OrdLists_9);
    }
#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1752 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[1]));
#line 1752 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4));
#line 1752 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1752 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__NameMap_6));
#line 1752 "rtti_to_mlds.m"
    }
#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1752 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[2]));
#line 1752 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5));
#line 1752 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1752 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 1752 "rtti_to_mlds.m"
    }
#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_35_35, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[3], ml_backend__rtti_to_mlds__V_17_17, ml_backend__rtti_to_mlds__OrdLists_9, &ml_backend__rtti_to_mlds__OrdDefns_4);
    }
#line 1743 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__OrdDefns_4;
#line 1743 "rtti_to_mlds.m"
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
#line 91 "rtti_to_mlds.m"
  {
#line 91 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 86 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 86 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_8_8;

#line 86 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 86 "rtti_to_mlds.m"
      {
#line 86 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));
#line 86 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_11_11)) == (MR_mktag((MR_Integer) 3)));
#line 86 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 86 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, (MR_Integer) 0)));
#line 86 "rtti_to_mlds.m"
      }
#line 91 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 86 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9;
#line 91 "rtti_to_mlds.m"
    else
#line 92 "rtti_to_mlds.m"
      {
#line 92 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__RttiData_6, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
#line 92 "rtti_to_mlds.m"
        return;
      }
#line 91 "rtti_to_mlds.m"
  }
#line 36 "rtti_to_mlds.m"
}

#line 83 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1(
#line 83 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 83 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 83 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 83 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 83 "rtti_to_mlds.m"
{
#line 83 "rtti_to_mlds.m"
  {
#line 83 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 83 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10;

#line 83 "rtti_to_mlds.m"
    {
#line 83 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10);
    }
#line 83 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10));
#line 83 "rtti_to_mlds.m"
  }
#line 83 "rtti_to_mlds.m"
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
#line 82 "rtti_to_mlds.m"
  {
#line 82 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 82 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_10_10;
#line 83 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9;

#line 83 "rtti_to_mlds.m"
    {
#line 83 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 83 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 83 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1));
#line 83 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 83 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_5));
#line 83 "rtti_to_mlds.m"
    }
#line 83 "rtti_to_mlds.m"
    {
#line 83 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_10_10, ml_backend__rtti_to_mlds__RttiDatas_6, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_8)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9);
    }
#line 83 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_9 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9);
#line 82 "rtti_to_mlds.m"
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
