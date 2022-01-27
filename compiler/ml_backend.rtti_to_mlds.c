/*
** Automatically generated from `rtti_to_mlds.m'
** by the Mercury compiler,
** version DEV
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
#include "mdbcomp.builtin_modules.mih"
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
#include "int.mih"
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
#include "ml_backend.ml_closure_gen.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
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



#line 1003 "rtti_to_mlds.m"
struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s {
#line 1003 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11;
#line 1022 "rtti_to_mlds.m"
  MR_bool ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded;
#line 1011 "rtti_to_mlds.m"
  jmp_buf ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0;
#line 1011 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26;
#line 1011 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26;
#line 1003 "rtti_to_mlds.m"
};

#line 748 "rtti_to_mlds.m"
struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s {
#line 751 "rtti_to_mlds.m"
  MR_bool ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded;
#line 751 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100;
#line 751 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17;
#line 756 "rtti_to_mlds.m"
  jmp_buf ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0;
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104;
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42;
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103;
#line 756 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103;
#line 748 "rtti_to_mlds.m"
};


#line 191 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 194 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 197 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 200 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0;

#line 203 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 206 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 209 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0;

#line 212 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;

#line 215 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0;

#line 218 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0;

#line 221 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

#line 224 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0;

#line 227 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 230 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;

#line 233 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

#line 1496 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1496 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1496 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7);

#line 1426 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1426 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1426 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7);

#line 1018 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
#line 1018 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1018 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1018 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1018 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1018 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4);

#line 1011 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
#line 1011 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1011 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
#line 1011 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1011 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
#line 1011 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1011 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
#line 1011 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 1003 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
#line 1003 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 1003 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_10,
#line 1003 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfos_11,
#line 1003 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HaveArgLocns_12,
#line 1003 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20,
#line 1003 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21);

#line 994 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
#line 994 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 994 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 997 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
#line 997 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 997 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 988 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
#line 988 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 988 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 988 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeNames_10,
#line 988 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 988 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 898 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1(
#line 898 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 898 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 892 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(
#line 892 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 892 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 892 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locns_10,
#line 892 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
#line 892 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);

#line 714 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 714 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 701 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 701 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1286 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1286__1_2_p_0(
#line 1286 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_23,
#line 1286 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_24);

#line 1209 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1209__1_2_p_0(
#line 1209 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_24,
#line 1209 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_25);

#line 1174 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1174__1_2_p_0(
#line 1174 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4,
#line 1174 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ptag_11);

#line 994 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__994__1_3_f_0(
#line 994 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_19,
#line 994 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_23,
#line 994 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_26);

#line 1753 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__2_3_p_0(
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_18,
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_36,
#line 1753 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_37);

#line 1753 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__1_3_p_0(
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameMap_6,
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_40,
#line 1753 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_41);

#line 1752 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__1_2_p_0(
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_32,
#line 1752 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_33);

#line 756 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeInfo_for_T_9,
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_1,
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2);

#line 1839 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(
#line 1839 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1839 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lval_6,
#line 1839 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17,
#line 1839 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);

#line 1807 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
#line 1807 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1807 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Rval_6,
#line 1807 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1807 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);

#line 1801 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1801 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1801 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1801 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1789 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
#line 1789 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1789 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 1789 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
#line 1789 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);

#line 1774 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
#line 1774 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_4,
#line 1774 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15,
#line 1774 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16);

#line 1755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
#line 1755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_6,
#line 1755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1755 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20,
#line 1755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21,
#line 1755 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22);

#line 1734 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
#line 1734 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorData_3);

#line 1729 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
#line 1729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locn_3);

#line 1701 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
#line 1701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_2);

#line 1632 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(
#line 1632 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
#line 1632 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_9,
#line 1632 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcId_10,
#line 1632 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ClosureKind_11,
#line 1632 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_12,
#line 1632 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1632 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);

#line 1609 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(
#line 1609 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1609 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcIdUniv_7,
#line 1609 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1609 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1609 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1589 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_6_p_0(
#line 1589 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1589 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_8,
#line 1589 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcLabel_9,
#line 1589 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
#line 1589 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1589 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1353 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3(
#line 1353 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1353 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1569 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2(
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1569 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1568 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_1(
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1563 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(
#line 1563 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1563 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiDatas_7,
#line 1563 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1563 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1563 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1548 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(
#line 1548 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1548 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiData_7,
#line 1548 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1548 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 1548 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);

#line 1435 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
#line 1435 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1435 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1435 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7);

#line 1417 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
#line 1417 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1417 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1417 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiName_7);

#line 1407 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
#line 1407 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1407 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2);

#line 1359 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
#line 1359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_7);

#line 1353 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
#line 1353 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1353 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1349 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
#line 1349 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Type_5,
#line 1349 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1349 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_7);

#line 1330 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
#line 1330 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1330 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1326 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
#line 1326 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5,
#line 1326 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_6,
#line 1326 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
#line 1326 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11);

#line 1296 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(
#line 1296 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1296 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1296 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_7);

#line 1290 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2(
#line 1290 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1290 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1286 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1(
#line 1286 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1286 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1286 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1279 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(
#line 1279 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1279 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1279 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1279 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16,
#line 1279 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17);

#line 1274 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1(
#line 1274 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1274 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1268 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(
#line 1268 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1268 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1268 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResAddrs_8,
#line 1268 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1268 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1261 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3(
#line 1261 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1261 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1226 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2(
#line 1226 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1226 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1225 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1(
#line 1225 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1225 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1219 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResFunctors_9,
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuByPtag_10,
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1219 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1212 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2(
#line 1212 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1212 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1209 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1(
#line 1209 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1209 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1209 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1202 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(
#line 1202 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1202 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1202 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1202 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
#line 1202 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1195 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
#line 1195 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1195 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1187 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
#line 1187 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1187 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1187 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1187 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 1187 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 1174 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1(
#line 1174 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg);

#line 1167 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(
#line 1167 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1167 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_2,
#line 1167 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1167 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4);

#line 1131 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
#line 1131 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1131 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1131 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1131 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1124 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
#line 1124 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1124 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1124 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PtagMap_8,
#line 1124 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21,
#line 1124 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22);

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1117 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
#line 1117 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1117 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1109 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
#line 1109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_8,
#line 1109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1109 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1102 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
#line 1102 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1102 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1094 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
#line 1094 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1094 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1094 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8,
#line 1094 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1094 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1087 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
#line 1087 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1087 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1079 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
#line 1079 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1079 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1079 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByName_8,
#line 1079 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1079 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1072 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1(
#line 1072 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1072 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 1064 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(
#line 1064 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1064 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1064 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByValue_8,
#line 1064 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1064 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 1026 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(
#line 1026 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 1026 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfo_7,
#line 1026 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__ArgLocnInitializer_8,
#line 1026 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__PrevOffset_9,
#line 1026 "rtti_to_mlds.m"
  MR_Integer * ml_backend__rtti_to_mlds__NextPrevOffset_10);

#line 980 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0_1(
#line 980 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 980 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 975 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0(
#line 975 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 975 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 975 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 975 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_10,
#line 975 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 975 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 959 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3(
#line 959 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 959 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 951 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2(
#line 951 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 951 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 951 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 951 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 951 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 951 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 951 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 952 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1(
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 952 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 932 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(
#line 932 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 932 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 932 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 932 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistInfo_10,
#line 932 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30,
#line 932 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31);

#line 925 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
#line 925 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 925 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_7,
#line 925 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 925 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 925 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10);

#line 916 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0_1(
#line 916 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 916 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 903 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MakeRttiId_10,
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Constraint_11,
#line 903 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_12,
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24,
#line 903 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25,
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26,
#line 903 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27);

#line 876 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
#line 876 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_4,
#line 876 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5);

#line 859 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(
#line 859 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 859 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 859 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_8,
#line 859 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 859 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);

#line 755 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_2(
#line 755 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 755 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 754 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_1(
#line 754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 754 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(
#line 756 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5(
#line 756 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(
#line 756 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(
#line 756 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg);

#line 748 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(
#line 748 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 748 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 748 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuFunctor_8,
#line 748 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38,
#line 748 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39);

#line 744 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0_1(
#line 744 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 744 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 730 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(
#line 730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NotagFunctorDesc_8,
#line 730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 730 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 714 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_7,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 714 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 701 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_6,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 701 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);

#line 657 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4(
#line 657 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 657 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 657 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 657 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 624 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3(
#line 624 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 624 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 624 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 624 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 606 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2(
#line 606 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 606 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 606 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 606 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 641 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1(
#line 641 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 641 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 641 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 641 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 595 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(
#line 595 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 595 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
#line 595 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_11,
#line 595 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__FunctorInitializer_12,
#line 595 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__LayoutInitializer_13,
#line 595 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__NumberMapInitializer_14,
#line 595 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43,
#line 595 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);

#line 550 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6(
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 550 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 549 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_5(
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 547 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_4(
#line 547 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 547 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 520 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3(
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 520 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 519 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_2(
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 517 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_1(
#line 517 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 517 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 501 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8,
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34,
#line 501 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);

#line 455 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6(
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 455 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 454 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_5(
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 453 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_4(
#line 453 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 453 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 426 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3(
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 426 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 425 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_2(
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 424 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_1(
#line 424 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 424 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 409 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeInfo_8,
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33,
#line 409 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);

#line 400 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
#line 400 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 400 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_7,
#line 400 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 400 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 400 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10);

#line 387 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4(
#line 387 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 387 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 383 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3(
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 383 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 383 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 383 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 383 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2(
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 383 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 376 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_1(
#line 376 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 376 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 360 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Instance_8,
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31,
#line 360 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32);

#line 347 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
#line 347 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_4,
#line 347 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodId_5);

#line 344 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1(
#line 344 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 344 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 340 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(
#line 340 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 340 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_7,
#line 340 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodIds_8,
#line 340 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 340 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);

#line 337 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1(
#line 337 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 337 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 333 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(
#line 333 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 333 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Names_6,
#line 333 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 333 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);

#line 327 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
#line 327 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_5,
#line 327 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_6,
#line 327 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_7,
#line 327 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_8);

#line 311 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3(
#line 311 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 311 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1);

#line 305 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2(
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 305 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 305 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 305 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6);

#line 305 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1(
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 305 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 257 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCDecl_8,
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49,
#line 257 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);

#line 172 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1(
#line 172 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 172 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 172 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 172 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 172 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4);

#line 161 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(
#line 161 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_5,
#line 161 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_6,
#line 161 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47,
#line 161 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);

#line 110 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
#line 110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_6,
#line 110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7,
#line 110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_8,
#line 110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 110 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);

#line 103 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
#line 103 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 103 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 103 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 103 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);

#line 1753 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
#line 1753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1753 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1753 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
#line 1753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1753 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1753 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1752 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1752 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1752 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2);

#line 1748 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1748 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3);

#line 1747 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1747 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 1747 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_5);

#line 84 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1(
#line 84 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 84 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 84 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 84 "rtti_to_mlds.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 2631 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2639 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2648 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__set_ordlist__pti_set_ordlist_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2656 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0
  }
};

#line 2664 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_pred_2__plain_ml_backend__mlds__type_ctor_info_mlds_data_name_0__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2674 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 2682 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct3 ml_backend__rtti_to_mlds____vpti_pred_3__plain_builtin__type_ctor_info_int_0__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_rtti_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0
  }
};

#line 2693 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
  }
};

#line 2701 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__maybe__pti_maybe_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2709 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_sectag_table_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0
  }
};

#line 2718 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2727 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0
  }
};

#line 2735 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2744 "ml_backend.rtti_to_mlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__rtti_to_mlds__list__pti_list_1__plain_backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0
  }
};

#line 2752 "ml_backend.rtti_to_mlds.c"
static const MR_VA_PseudoTypeInfo_Struct2 ml_backend__rtti_to_mlds____vpti_func_2__plain_builtin__type_ctor_info_string_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__builtin__builtin__type_ctor_info_func_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

#line 1496 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1496 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1496 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7)
#line 1496 "rtti_to_mlds.m"
{
#line 1498 "rtti_to_mlds.m"
  {
#line 1498 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1498 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Rval_8;
#line 1498 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_11;
#line 1498 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_17;
#line 1498 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_18;
#line 1498 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1498 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;

#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) {
#line 1502 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
        switch (MR_unmkbody(ml_backend__rtti_to_mlds__TCRttiName_7)) {
#line 1502 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_47 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_46);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_57 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_56);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_51);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 3:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_32 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_31);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 4:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_41);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
        }
#line 1502 "rtti_to_mlds.m"
        break;
#line 1502 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 1500 "rtti_to_mlds.m"
        {
#line 1500 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)));
#line 1500 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 1)));

#line 1501 "rtti_to_mlds.m"
          {
#line 1501 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_9);
          }
#line 1500 "rtti_to_mlds.m"
        }
#line 1502 "rtti_to_mlds.m"
        break;
#line 1502 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
        {
#line 1542 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ModuleName_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds___ClassName_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds___Arity_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
          {
#line 1544 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_36);
          }
#line 1542 "rtti_to_mlds.m"
        }
#line 1502 "rtti_to_mlds.m"
        break;
#line 1502 "rtti_to_mlds.m"
      case (MR_Integer) 3:
#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) {
#line 1502 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_62 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_61);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_82 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_83 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_81);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_67 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_66);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 3:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_72 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_71);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 4:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_77 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_11 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_76);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
        }
#line 1502 "rtti_to_mlds.m"
        break;
#line 1502 "rtti_to_mlds.m"
    }
#line 1536 "rtti_to_mlds.m"
    {
#line 1536 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_7));
#line 1536 "rtti_to_mlds.m"
    }
#line 1536 "rtti_to_mlds.m"
    {
#line 1536 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 1536 "rtti_to_mlds.m"
    }
#line 1537 "rtti_to_mlds.m"
    {
#line 1537 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_11));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_17));
#line 1537 "rtti_to_mlds.m"
    }
#line 1538 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_18);
#line 1538 "rtti_to_mlds.m"
    {
#line 1538 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Rval_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1538 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 1538 "rtti_to_mlds.m"
    }
#line 1498 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Rval_8;
#line 1498 "rtti_to_mlds.m"
  }
#line 1496 "rtti_to_mlds.m"
}

#line 1426 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(
#line 1426 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 1426 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCRttiName_7)
#line 1426 "rtti_to_mlds.m"
{
#line 1429 "rtti_to_mlds.m"
  {
#line 1429 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1429 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1429 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;
#line 1429 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_15;
#line 1429 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_21;
#line 1429 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 1429 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1429 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_7)) {
#line 1502 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
        switch (MR_unmkbody(ml_backend__rtti_to_mlds__TCRttiName_7)) {
#line 1502 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_50);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_60);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_55);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 3:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_36 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_35);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 4:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_45);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
        }
#line 1502 "rtti_to_mlds.m"
        break;
#line 1502 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 1500 "rtti_to_mlds.m"
        {
#line 1500 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)));
#line 1500 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 1)));

#line 1501 "rtti_to_mlds.m"
          {
#line 1501 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_13);
          }
#line 1500 "rtti_to_mlds.m"
        }
#line 1502 "rtti_to_mlds.m"
        break;
#line 1502 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
        {
#line 1542 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds___ClassName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds___Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
          {
#line 1544 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_40);
          }
#line 1542 "rtti_to_mlds.m"
        }
#line 1502 "rtti_to_mlds.m"
        break;
#line 1502 "rtti_to_mlds.m"
      case (MR_Integer) 3:
#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_7, (MR_Integer) 0)))) {
#line 1502 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_65);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_86 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_85);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_70);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 3:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_75);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 4:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_6, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_80);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
        }
#line 1502 "rtti_to_mlds.m"
        break;
#line 1502 "rtti_to_mlds.m"
    }
#line 1536 "rtti_to_mlds.m"
    {
#line 1536 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_7));
#line 1536 "rtti_to_mlds.m"
    }
#line 1536 "rtti_to_mlds.m"
    {
#line 1536 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1536 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 1536 "rtti_to_mlds.m"
    }
#line 1537 "rtti_to_mlds.m"
    {
#line 1537 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_15));
#line 1537 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_21));
#line 1537 "rtti_to_mlds.m"
    }
#line 1538 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 1538 "rtti_to_mlds.m"
    {
#line 1538 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1538 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1538 "rtti_to_mlds.m"
    }
#line 1430 "rtti_to_mlds.m"
    {
#line 1430 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_8_8));
#line 1430 "rtti_to_mlds.m"
    }
#line 1429 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1429 "rtti_to_mlds.m"
  }
#line 1426 "rtti_to_mlds.m"
}

#line 1018 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5(
#line 1018 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1018 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1018 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1018 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1018 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4)
#line 1018 "rtti_to_mlds.m"
{
#line 1018 "rtti_to_mlds.m"
  {
#line 1018 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1018 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8;
#line 1018 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10;

#line 1018 "rtti_to_mlds.m"
    {
#line 1018 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8, ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10);
    }
#line 1018 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_ArgLocnInitializer_8));
#line 1018 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_NextPrevOffset_10));
#line 1018 "rtti_to_mlds.m"
  }
#line 1018 "rtti_to_mlds.m"
}

#line 1011 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(
#line 1011 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1011 "rtti_to_mlds.m"
{
#line 1011 "rtti_to_mlds.m"
  {
#line 1011 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1011 "rtti_to_mlds.m"
    MR_builtin_longjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0, 1);
#line 1011 "rtti_to_mlds.m"
  }
#line 1011 "rtti_to_mlds.m"
}

#line 1011 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3(
#line 1011 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1011 "rtti_to_mlds.m"
{
#line 1011 "rtti_to_mlds.m"
  {
#line 1011 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1011 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26 = ((MR_Word) (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26);
#line 1011 "rtti_to_mlds.m"
    {
#line 1011 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(ml_backend__rtti_to_mlds__env_ptr);
    }
#line 1011 "rtti_to_mlds.m"
  }
#line 1011 "rtti_to_mlds.m"
}

#line 1011 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_2(
#line 1011 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1011 "rtti_to_mlds.m"
{
#line 1011 "rtti_to_mlds.m"
  {
#line 1011 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1011 "rtti_to_mlds.m"
    {
#line 1012 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 2)));
#line 1012 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 0)));
#line 1012 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfo_26, (MR_Integer) 1)));

#line 1012 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = (ml_backend__rtti_to_mlds__V_22_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1012 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = !((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded);
#line 1012 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1012 "rtti_to_mlds.m"
        {
#line 1012 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_1(ml_backend__rtti_to_mlds__env_ptr);
        }
#line 1011 "rtti_to_mlds.m"
    }
#line 1011 "rtti_to_mlds.m"
  }
#line 1011 "rtti_to_mlds.m"
}

#line 1011 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(
#line 1011 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 1011 "rtti_to_mlds.m"
{
#line 1011 "rtti_to_mlds.m"
  {
#line 1011 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 1011 "rtti_to_mlds.m"
    if (MR_builtin_setjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__commit_0) == 0)
#line 1011 "rtti_to_mlds.m"
      {
#line 1011 "rtti_to_mlds.m"
        {
#line 1011 "rtti_to_mlds.m"
          {
#line 1011 "rtti_to_mlds.m"
            mercury__list__member_2_p_1((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, &(ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__conv0_ArgInfo_26, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_3, ml_backend__rtti_to_mlds__env_ptr);
          }
#line 1011 "rtti_to_mlds.m"
        }
#line 1011 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
#line 1011 "rtti_to_mlds.m"
      }
#line 1011 "rtti_to_mlds.m"
    else
#line 1011 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
#line 1011 "rtti_to_mlds.m"
  }
#line 1011 "rtti_to_mlds.m"
}

#line 1003 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(
#line 1003 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 1003 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_10,
#line 1003 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfos_11,
#line 1003 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HaveArgLocns_12,
#line 1003 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20,
#line 1003 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21)
#line 1003 "rtti_to_mlds.m"
{
#line 1003 "rtti_to_mlds.m"
  {
#line 1003 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_0_s ml_backend__rtti_to_mlds__env;

#line 1003 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11 = ml_backend__rtti_to_mlds__ArgInfos_11;
#line 1011 "rtti_to_mlds.m"
    {
#line 1011 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_4(&ml_backend__rtti_to_mlds__env);
    }
#line 1022 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__succeeded)
#line 1015 "rtti_to_mlds.m"
      {
#line 1015 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_15;
#line 1015 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 1015 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ArgLocnInitializers_17;
#line 1015 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_19;
#line 1015 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1015 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_42;
#line 1015 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 1018 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds___Offset_18;
#line 1018 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv3__Offset_18;

#line 1015 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HaveArgLocns_12 = (MR_Integer) 1;
#line 1016 "rtti_to_mlds.m"
        {
#line 1016 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1016 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1016 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_10));
#line 1016 "rtti_to_mlds.m"
        }
#line 1017 "rtti_to_mlds.m"
        {
#line 1017 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1017 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
#line 1017 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_15));
#line 1017 "rtti_to_mlds.m"
        }
#line 1018 "rtti_to_mlds.m"
        {
#line 1018 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1018 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[7]));
#line 1018 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0_5));
#line 1018 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1018 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 1018 "rtti_to_mlds.m"
        }
#line 1018 "rtti_to_mlds.m"
        {
#line 1018 "rtti_to_mlds.m"
          mercury__list__map_foldl_5_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__V_23_23, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_95_55_95_112_95_48_95_101_110_118_95_48__ArgInfos_11, &ml_backend__rtti_to_mlds__ArgLocnInitializers_17, ((MR_Box) ((MR_Integer) -1)), &ml_backend__rtti_to_mlds__conv3__Offset_18);
        }
#line 1018 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds___Offset_18 = ((MR_Integer) ml_backend__rtti_to_mlds__conv3__Offset_18);
#line 1020 "rtti_to_mlds.m"
        {
#line 1020 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgLocnInitializers_17));
#line 1020 "rtti_to_mlds.m"
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 107 "rtti_to_mlds.m"
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 107 "rtti_to_mlds.m"
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_42, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21);
        }
#line 1015 "rtti_to_mlds.m"
      }
#line 1022 "rtti_to_mlds.m"
    else
#line 1023 "rtti_to_mlds.m"
      {
#line 1023 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HaveArgLocns_12 = (MR_Integer) 0;
#line 1023 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_21 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_20;
#line 1023 "rtti_to_mlds.m"
      }
#line 1003 "rtti_to_mlds.m"
  }
#line 1003 "rtti_to_mlds.m"
}

#line 994 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2(
#line 994 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 994 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 994 "rtti_to_mlds.m"
{
#line 994 "rtti_to_mlds.m"
  {
#line 994 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 994 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 994 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_27;

#line 994 "rtti_to_mlds.m"
    {
#line 994 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_27 = ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__994__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 994 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_27));
#line 994 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 994 "rtti_to_mlds.m"
  }
#line 994 "rtti_to_mlds.m"
}

#line 997 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_1(
#line 997 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 997 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 997 "rtti_to_mlds.m"
{
#line 997 "rtti_to_mlds.m"
  {
#line 997 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 997 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 997 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 997 "rtti_to_mlds.m"
    {
#line 997 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 997 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 997 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 997 "rtti_to_mlds.m"
  }
#line 997 "rtti_to_mlds.m"
}

#line 988 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(
#line 988 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 988 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 988 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeNames_10,
#line 988 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 988 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 988 "rtti_to_mlds.m"
{
#line 991 "rtti_to_mlds.m"
  {
#line 991 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__StrType_12 = (MR_Word) MR_mkword(MR_mktag(2), &ml_backend__rtti_to_mlds_scalar_common_10[0]);
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_14;
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 991 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 996 "rtti_to_mlds.m"
    {
#line 996 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = backend_libs__foreign__non_foreign_type_1_f_0(ml_backend__rtti_to_mlds__StrType_12);
    }
#line 995 "rtti_to_mlds.m"
    {
#line 995 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 995 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__StrType_12));
#line 995 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__rtti_to_mlds_scalar_common_10[1])));
#line 995 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_19_19, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 995 "rtti_to_mlds.m"
    }
#line 994 "rtti_to_mlds.m"
    {
#line 994 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 994 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[7]));
#line 994 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0_2));
#line 994 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 994 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 994 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 4) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_2[35]));
#line 994 "rtti_to_mlds.m"
    }
#line 993 "rtti_to_mlds.m"
    {
#line 993 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[4], ml_backend__rtti_to_mlds__V_18_18, ml_backend__rtti_to_mlds__MaybeNames_10);
    }
#line 999 "rtti_to_mlds.m"
    {
#line 999 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 999 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 999 "rtti_to_mlds.m"
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_14));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
    }
#line 991 "rtti_to_mlds.m"
  }
#line 988 "rtti_to_mlds.m"
}

#line 898 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1(
#line 898 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 898 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 898 "rtti_to_mlds.m"
{
#line 898 "rtti_to_mlds.m"
  {
#line 898 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 898 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 898 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_6;

#line 898 "rtti_to_mlds.m"
    {
#line 898 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_6 = ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 898 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_6));
#line 898 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 898 "rtti_to_mlds.m"
  }
#line 898 "rtti_to_mlds.m"
}

#line 892 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(
#line 892 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 892 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 892 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locns_10,
#line 892 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14,
#line 892 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15)
#line 892 "rtti_to_mlds.m"
{
#line 897 "rtti_to_mlds.m"
  {
#line 897 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 897 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_12;
#line 897 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_13;
#line 897 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 897 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_27;
#line 897 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_34;
#line 897 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;

#line 898 "rtti_to_mlds.m"
    {
#line 898 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 898 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[5]));
#line 898 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0_1));
#line 898 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 898 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_16_16, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 898 "rtti_to_mlds.m"
    }
#line 898 "rtti_to_mlds.m"
    {
#line 898 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_12 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_typeinfo_locn_0, ml_backend__rtti_to_mlds__V_16_16, ml_backend__rtti_to_mlds__Locns_10);
    }
#line 899 "rtti_to_mlds.m"
    {
#line 899 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 899 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiName_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 899 "rtti_to_mlds.m"
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_13));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_27));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_34, ml_backend__rtti_to_mlds__RttiId_27, ml_backend__rtti_to_mlds__Initializer_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_15);
    }
#line 897 "rtti_to_mlds.m"
  }
#line 892 "rtti_to_mlds.m"
}

#line 714 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 714 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 714 "rtti_to_mlds.m"
{
#line 719 "rtti_to_mlds.m"
  {
#line 719 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 719 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 0)));
#line 719 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 1)));
#line 719 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Value_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, (MR_Integer) 2)));
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_15;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_17;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_35;
#line 719 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;

#line 721 "rtti_to_mlds.m"
    {
#line 721 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 721 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 721 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_13));
#line 721 "rtti_to_mlds.m"
    }
#line 722 "rtti_to_mlds.m"
    {
#line 722 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_9));
#line 722 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_15));
#line 722 "rtti_to_mlds.m"
    }
#line 723 "rtti_to_mlds.m"
    {
#line 723 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 723 "rtti_to_mlds.m"
    }
#line 723 "rtti_to_mlds.m"
    {
#line 723 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 723 "rtti_to_mlds.m"
    }
#line 724 "rtti_to_mlds.m"
    {
#line 724 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_12);
    }
#line 725 "rtti_to_mlds.m"
    {
#line 725 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_13);
    }
#line 726 "rtti_to_mlds.m"
    {
#line 726 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_foreign_2_f_0(ml_backend__rtti_to_mlds__Lang_8, ml_backend__rtti_to_mlds__Value_14);
    }
#line 727 "rtti_to_mlds.m"
    {
#line 727 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 727 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 727 "rtti_to_mlds.m"
    }
#line 725 "rtti_to_mlds.m"
    {
#line 725 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 725 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 725 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 725 "rtti_to_mlds.m"
    }
#line 724 "rtti_to_mlds.m"
    {
#line 724 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 724 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_22_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 724 "rtti_to_mlds.m"
    }
#line 723 "rtti_to_mlds.m"
    {
#line 723 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 723 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 723 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_35, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
    }
#line 719 "rtti_to_mlds.m"
  }
#line 714 "rtti_to_mlds.m"
}

#line 701 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 701 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 701 "rtti_to_mlds.m"
{
#line 704 "rtti_to_mlds.m"
  {
#line 704 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 704 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__EnumFunctor_8, (MR_Integer) 0)));
#line 704 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ordinal_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__EnumFunctor_8, (MR_Integer) 1)));
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_12;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_13;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_14;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_30;
#line 704 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 706 "rtti_to_mlds.m"
    {
#line 706 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 706 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 706 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_11));
#line 706 "rtti_to_mlds.m"
    }
#line 707 "rtti_to_mlds.m"
    {
#line 707 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 707 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_12));
#line 707 "rtti_to_mlds.m"
    }
#line 708 "rtti_to_mlds.m"
    {
#line 708 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_13));
#line 708 "rtti_to_mlds.m"
    }
#line 708 "rtti_to_mlds.m"
    {
#line 708 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_17_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 708 "rtti_to_mlds.m"
    }
#line 709 "rtti_to_mlds.m"
    {
#line 709 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
    }
#line 710 "rtti_to_mlds.m"
    {
#line 710 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_11);
    }
#line 711 "rtti_to_mlds.m"
    {
#line 711 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 711 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "rtti_to_mlds.m"
    }
#line 709 "rtti_to_mlds.m"
    {
#line 709 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 709 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 709 "rtti_to_mlds.m"
    }
#line 708 "rtti_to_mlds.m"
    {
#line 708 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_14, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 708 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 708 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_13));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_30, ml_backend__rtti_to_mlds__RttiId_13, ml_backend__rtti_to_mlds__Initializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
    }
#line 704 "rtti_to_mlds.m"
  }
#line 701 "rtti_to_mlds.m"
}

#line 1286 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1286__1_2_p_0(
#line 1286 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_23,
#line 1286 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_24)
#line 1286 "rtti_to_mlds.m"
{
#line 1286 "rtti_to_mlds.m"
  {
#line 1286 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1286 "rtti_to_mlds.m"
    {
#line 1286 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, ml_backend__rtti_to_mlds__HeadVar__1_23, ml_backend__rtti_to_mlds__HeadVar__2_24);
    }
#line 1286 "rtti_to_mlds.m"
  }
#line 1286 "rtti_to_mlds.m"
}

#line 1209 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1209__1_2_p_0(
#line 1209 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_24,
#line 1209 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_25)
#line 1209 "rtti_to_mlds.m"
{
#line 1209 "rtti_to_mlds.m"
  {
#line 1209 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1209 "rtti_to_mlds.m"
    {
#line 1209 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, ml_backend__rtti_to_mlds__HeadVar__1_24, ml_backend__rtti_to_mlds__HeadVar__2_25);
    }
#line 1209 "rtti_to_mlds.m"
  }
#line 1209 "rtti_to_mlds.m"
}

#line 1174 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1174__1_2_p_0(
#line 1174 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4,
#line 1174 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ptag_11)
#line 1174 "rtti_to_mlds.m"
{
#line 1174 "rtti_to_mlds.m"
  {
#line 1174 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__Ptag_11 == ml_backend__rtti_to_mlds__CurPtag_4);

#line 1174 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1174 "rtti_to_mlds.m"
  }
#line 1174 "rtti_to_mlds.m"
}

#line 994 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__func__gen_field_names__994__1_3_f_0(
#line 994 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_19,
#line 994 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_23,
#line 994 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_26)
#line 994 "rtti_to_mlds.m"
{
#line 994 "rtti_to_mlds.m"
  {
#line 994 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 994 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_27;

#line 994 "rtti_to_mlds.m"
    {
#line 994 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__4_27 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__HeadVar__1_19, ml_backend__rtti_to_mlds__HeadVar__2_23, ml_backend__rtti_to_mlds__HeadVar__3_26);
    }
#line 994 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_27;
#line 994 "rtti_to_mlds.m"
  }
#line 994 "rtti_to_mlds.m"
}

#line 1753 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__2_3_p_0(
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_18,
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_36,
#line 1753 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_37)
#line 1753 "rtti_to_mlds.m"
{
#line 1753 "rtti_to_mlds.m"
  {
#line 1753 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      mercury__list__filter_map_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__rtti_to_mlds__HeadVar__1_18, ml_backend__rtti_to_mlds__HeadVar__2_36, ml_backend__rtti_to_mlds__HeadVar__3_37);
    }
#line 1753 "rtti_to_mlds.m"
  }
#line 1753 "rtti_to_mlds.m"
}

#line 1753 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__1_3_p_0(
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameMap_6,
#line 1753 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_40,
#line 1753 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__3_41)
#line 1753 "rtti_to_mlds.m"
{
#line 1753 "rtti_to_mlds.m"
  {
#line 1753 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1753 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv0_HeadVar__3_41;

#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ml_backend__rtti_to_mlds__NameMap_6, ((MR_Box) (ml_backend__rtti_to_mlds__HeadVar__2_40)), &ml_backend__rtti_to_mlds__conv0_HeadVar__3_41);
    }
#line 1753 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1753 "rtti_to_mlds.m"
      {
#line 1753 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__HeadVar__3_41 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_HeadVar__3_41);
#line 1753 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1753 "rtti_to_mlds.m"
      }
#line 1753 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1753 "rtti_to_mlds.m"
  }
#line 1753 "rtti_to_mlds.m"
}

#line 1752 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__1_2_p_0(
#line 1752 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_32,
#line 1752 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__HeadVar__2_33)
#line 1752 "rtti_to_mlds.m"
{
#line 1752 "rtti_to_mlds.m"
  {
#line 1752 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      mercury__set__to_sorted_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, ml_backend__rtti_to_mlds__HeadVar__1_32, ml_backend__rtti_to_mlds__HeadVar__2_33);
    }
#line 1752 "rtti_to_mlds.m"
  }
#line 1752 "rtti_to_mlds.m"
}

#line 756 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2(
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeInfo_for_T_9,
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__1_1,
#line 756 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2)
#line 756 "rtti_to_mlds.m"
{
#line 756 "rtti_to_mlds.m"
  {
#line 756 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 756 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__V_6_6;

#line 756 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 756 "rtti_to_mlds.m"
      {
#line 756 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_6_6 = (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0));
#line 756 "rtti_to_mlds.m"
        (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__1_1, (MR_Integer) 0)) = ml_backend__rtti_to_mlds__V_6_6;
#line 756 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 756 "rtti_to_mlds.m"
      }
#line 756 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 756 "rtti_to_mlds.m"
  }
#line 756 "rtti_to_mlds.m"
}

#line 1839 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(
#line 1839 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1839 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lval_6,
#line 1839 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17,
#line 1839 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18)
#line 1839 "rtti_to_mlds.m"
{
#line 1844 "rtti_to_mlds.m"
  {
#line 1844 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1844 "rtti_to_mlds.m"
#line 1844 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Lval_6)) {
#line 1844 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1844 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 1844 "rtti_to_mlds.m"
        {
#line 1844 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 1)));
#line 1844 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)));
#line 1844 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 2)));
#line 1844 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 3)));
#line 1844 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 4)));

#line 1845 "rtti_to_mlds.m"
          {
#line 1845 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);
          }
#line 1844 "rtti_to_mlds.m"
        }
#line 1844 "rtti_to_mlds.m"
        break;
#line 1844 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 1847 "rtti_to_mlds.m"
        {
#line 1847 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 0)));
#line 1847 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds___Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Lval_6, (MR_Integer) 1)));

#line 1848 "rtti_to_mlds.m"
          {
#line 1848 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18);
          }
#line 1847 "rtti_to_mlds.m"
        }
#line 1844 "rtti_to_mlds.m"
        break;
#line 1844 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 1850 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17;
#line 1844 "rtti_to_mlds.m"
        break;
#line 1844 "rtti_to_mlds.m"
      case (MR_Integer) 3:
#line 1852 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_18 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_17;
#line 1844 "rtti_to_mlds.m"
        break;
#line 1844 "rtti_to_mlds.m"
    }
#line 1844 "rtti_to_mlds.m"
  }
#line 1839 "rtti_to_mlds.m"
}

#line 1807 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(
#line 1807 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1807 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Rval_6,
#line 1807 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1807 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20)
#line 1807 "rtti_to_mlds.m"
{
#line 1812 "rtti_to_mlds.m"
  while (MR_TRUE)
#line 1812 "rtti_to_mlds.m"
    {
#line 1812 "rtti_to_mlds.m"
      /* tailcall optimized into a loop */
#line 1812 "rtti_to_mlds.m"
      {
#line 1812 "rtti_to_mlds.m"
        MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1812 "rtti_to_mlds.m"
#line 1812 "rtti_to_mlds.m"
        switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rval_6)) {
#line 1812 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1812 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 1831 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1812 "rtti_to_mlds.m"
            break;
#line 1812 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 1812 "rtti_to_mlds.m"
            {
#line 1812 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)));

#line 1813 "rtti_to_mlds.m"
              {
#line 1813 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Lval_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
              }
#line 1812 "rtti_to_mlds.m"
            }
#line 1812 "rtti_to_mlds.m"
            break;
#line 1812 "rtti_to_mlds.m"
          case (MR_Integer) 2:
#line 1815 "rtti_to_mlds.m"
            {
#line 1815 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));
#line 1815 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Tag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)));

#line 1816 "rtti_to_mlds.m"
              /* direct tailcall eliminated */
#line 1816 "rtti_to_mlds.m"
              {
#line 1816 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalA_10;

#line 1816 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1816 "rtti_to_mlds.m"
              }
#line 1816 "rtti_to_mlds.m"
              continue;
#line 1815 "rtti_to_mlds.m"
            }
#line 1812 "rtti_to_mlds.m"
            break;
#line 1812 "rtti_to_mlds.m"
          case (MR_Integer) 3:
#line 1812 "rtti_to_mlds.m"
#line 1812 "rtti_to_mlds.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 0)))) {
#line 1812 "rtti_to_mlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1812 "rtti_to_mlds.m"
              case (MR_Integer) 0:
#line 1818 "rtti_to_mlds.m"
                {
#line 1818 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1860 "rtti_to_mlds.m"
#line 1860 "rtti_to_mlds.m"
                  switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Const_11)) {
#line 1860 "rtti_to_mlds.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1860 "rtti_to_mlds.m"
                    case (MR_Integer) 0:
#line 1860 "rtti_to_mlds.m"
#line 1860 "rtti_to_mlds.m"
                      switch (MR_unmkbody(ml_backend__rtti_to_mlds__Const_11)) {
#line 1860 "rtti_to_mlds.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 0:
#line 1874 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 1:
#line 1875 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                      }
#line 1860 "rtti_to_mlds.m"
                      break;
#line 1860 "rtti_to_mlds.m"
                    case (MR_Integer) 1:
#line 1860 "rtti_to_mlds.m"
                      {
#line 1860 "rtti_to_mlds.m"
                        MR_Word ml_backend__rtti_to_mlds__DataName_38;
#line 1860 "rtti_to_mlds.m"
                        MR_Word ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__Const_11), (MR_Integer) 1);
#line 1860 "rtti_to_mlds.m"
                        MR_Word ml_backend__rtti_to_mlds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, (MR_Integer) 0)));

#line 1860 "rtti_to_mlds.m"
                        ml_backend__rtti_to_mlds__DataName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, (MR_Integer) 1)));
#line 1864 "rtti_to_mlds.m"
#line 1864 "rtti_to_mlds.m"
                        switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__DataName_38)) {
#line 1864 "rtti_to_mlds.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1864 "rtti_to_mlds.m"
                          case (MR_Integer) 0:
#line 1867 "rtti_to_mlds.m"
                            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1864 "rtti_to_mlds.m"
                            break;
#line 1864 "rtti_to_mlds.m"
                          case (MR_Integer) 1:
#line 1865 "rtti_to_mlds.m"
                            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1864 "rtti_to_mlds.m"
                            break;
#line 1864 "rtti_to_mlds.m"
                          case (MR_Integer) 2:
#line 1866 "rtti_to_mlds.m"
                            *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1864 "rtti_to_mlds.m"
                            break;
#line 1864 "rtti_to_mlds.m"
                          case (MR_Integer) 3:
#line 1864 "rtti_to_mlds.m"
#line 1864 "rtti_to_mlds.m"
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__DataName_38, (MR_Integer) 0)))) {
#line 1864 "rtti_to_mlds.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1864 "rtti_to_mlds.m"
                              case (MR_Integer) 0:
#line 1868 "rtti_to_mlds.m"
                                *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1864 "rtti_to_mlds.m"
                                break;
#line 1864 "rtti_to_mlds.m"
                              case (MR_Integer) 1:
#line 1862 "rtti_to_mlds.m"
                                {
#line 1863 "rtti_to_mlds.m"
                                  {
#line 1863 "rtti_to_mlds.m"
                                    mercury__digraph__add_vertices_and_edge_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0, ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5)), ((MR_Box) (ml_backend__rtti_to_mlds__DataName_38)), ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
                                  }
#line 1862 "rtti_to_mlds.m"
                                }
#line 1864 "rtti_to_mlds.m"
                                break;
#line 1864 "rtti_to_mlds.m"
                              case (MR_Integer) 2:
#line 1869 "rtti_to_mlds.m"
                                *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1864 "rtti_to_mlds.m"
                                break;
#line 1864 "rtti_to_mlds.m"
                              case (MR_Integer) 3:
#line 1870 "rtti_to_mlds.m"
                                *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1864 "rtti_to_mlds.m"
                                break;
#line 1864 "rtti_to_mlds.m"
                            }
#line 1864 "rtti_to_mlds.m"
                            break;
#line 1864 "rtti_to_mlds.m"
                        }
#line 1860 "rtti_to_mlds.m"
                      }
#line 1860 "rtti_to_mlds.m"
                      break;
#line 1860 "rtti_to_mlds.m"
                    case (MR_Integer) 2:
#line 1876 "rtti_to_mlds.m"
                      *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                      break;
#line 1860 "rtti_to_mlds.m"
                    case (MR_Integer) 3:
#line 1860 "rtti_to_mlds.m"
#line 1860 "rtti_to_mlds.m"
                      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Const_11, (MR_Integer) 0)))) {
#line 1860 "rtti_to_mlds.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 0:
#line 1877 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 1:
#line 1878 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 2:
#line 1880 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 3:
#line 1881 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 4:
#line 1882 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 5:
#line 1879 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 6:
#line 1883 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 7:
#line 1884 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                        case (MR_Integer) 8:
#line 1885 "rtti_to_mlds.m"
                          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1860 "rtti_to_mlds.m"
                          break;
#line 1860 "rtti_to_mlds.m"
                      }
#line 1860 "rtti_to_mlds.m"
                      break;
#line 1860 "rtti_to_mlds.m"
                  }
#line 1818 "rtti_to_mlds.m"
                }
#line 1812 "rtti_to_mlds.m"
                break;
#line 1812 "rtti_to_mlds.m"
              case (MR_Integer) 1:
#line 1821 "rtti_to_mlds.m"
                {
#line 1821 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__RvalA_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1821 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1822 "rtti_to_mlds.m"
                  /* direct tailcall eliminated */
#line 1822 "rtti_to_mlds.m"
                  {
#line 1822 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalA_29;

#line 1822 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1822 "rtti_to_mlds.m"
                  }
#line 1822 "rtti_to_mlds.m"
                  continue;
#line 1821 "rtti_to_mlds.m"
                }
#line 1812 "rtti_to_mlds.m"
                break;
#line 1812 "rtti_to_mlds.m"
              case (MR_Integer) 2:
#line 1824 "rtti_to_mlds.m"
                {
#line 1824 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__RvalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 3)));
#line 1824 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23;
#line 1824 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__RvalA_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1824 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1825 "rtti_to_mlds.m"
                  {
#line 1825 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__RvalA_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23);
                  }
#line 1826 "rtti_to_mlds.m"
                  /* direct tailcall eliminated */
#line 1826 "rtti_to_mlds.m"
                  {
#line 1826 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RvalB_14;
#line 1826 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0__tmp_copy_19 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_23_23;

#line 1826 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0__tmp_copy_19;
#line 1826 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1826 "rtti_to_mlds.m"
                  }
#line 1826 "rtti_to_mlds.m"
                  continue;
#line 1824 "rtti_to_mlds.m"
                }
#line 1812 "rtti_to_mlds.m"
                break;
#line 1812 "rtti_to_mlds.m"
              case (MR_Integer) 3:
#line 1828 "rtti_to_mlds.m"
                {
#line 1828 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__Lval_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1829 "rtti_to_mlds.m"
                  {
#line 1829 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__add_rtti_defn_arcs_lval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Lval_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
                  }
#line 1828 "rtti_to_mlds.m"
                }
#line 1812 "rtti_to_mlds.m"
                break;
#line 1812 "rtti_to_mlds.m"
              case (MR_Integer) 4:
#line 1833 "rtti_to_mlds.m"
                {
#line 1833 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__RowRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 2)));
#line 1833 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_6, (MR_Integer) 1)));

#line 1834 "rtti_to_mlds.m"
                  /* direct tailcall eliminated */
#line 1834 "rtti_to_mlds.m"
                  {
#line 1834 "rtti_to_mlds.m"
                    MR_Word ml_backend__rtti_to_mlds__Rval__tmp_copy_6 = ml_backend__rtti_to_mlds__RowRval_17;

#line 1834 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__Rval_6 = ml_backend__rtti_to_mlds__Rval__tmp_copy_6;
#line 1834 "rtti_to_mlds.m"
                  }
#line 1834 "rtti_to_mlds.m"
                  continue;
#line 1833 "rtti_to_mlds.m"
                }
#line 1812 "rtti_to_mlds.m"
                break;
#line 1812 "rtti_to_mlds.m"
              case (MR_Integer) 5:
#line 1836 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19;
#line 1812 "rtti_to_mlds.m"
                break;
#line 1812 "rtti_to_mlds.m"
            }
#line 1812 "rtti_to_mlds.m"
            break;
#line 1812 "rtti_to_mlds.m"
        }
#line 1812 "rtti_to_mlds.m"
      }
#line 1812 "rtti_to_mlds.m"
      break;
#line 1812 "rtti_to_mlds.m"
    }
#line 1807 "rtti_to_mlds.m"
}

#line 1801 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2(
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1801 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1801 "rtti_to_mlds.m"
{
#line 1801 "rtti_to_mlds.m"
  {
#line 1801 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1801 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12;

#line 1801 "rtti_to_mlds.m"
    {
#line 1801 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12);
    }
#line 1801 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Graph_12));
#line 1801 "rtti_to_mlds.m"
  }
#line 1801 "rtti_to_mlds.m"
}

#line 1801 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1(
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1801 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1801 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1801 "rtti_to_mlds.m"
{
#line 1801 "rtti_to_mlds.m"
  {
#line 1801 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1801 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12;

#line 1801 "rtti_to_mlds.m"
    {
#line 1801 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12);
    }
#line 1801 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_Graph_12));
#line 1801 "rtti_to_mlds.m"
  }
#line 1801 "rtti_to_mlds.m"
}

#line 1789 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(
#line 1789 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DefnDataName_5,
#line 1789 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 1789 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11,
#line 1789 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12)
#line 1789 "rtti_to_mlds.m"
{
#line 1795 "rtti_to_mlds.m"
  {
#line 1795 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1795 "rtti_to_mlds.m"
#line 1795 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Initializer_6)) {
#line 1795 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1795 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 1804 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11;
#line 1795 "rtti_to_mlds.m"
        break;
#line 1795 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 1795 "rtti_to_mlds.m"
        {
#line 1795 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));

#line 1796 "rtti_to_mlds.m"
          {
#line 1796 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__add_rtti_defn_arcs_rval_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_5, ml_backend__rtti_to_mlds__Rval_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12);
          }
#line 1795 "rtti_to_mlds.m"
        }
#line 1795 "rtti_to_mlds.m"
        break;
#line 1795 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 1800 "rtti_to_mlds.m"
        {
#line 1800 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Initializers_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 1)));
#line 1800 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1798 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));
#line 1801 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12;

#line 1801 "rtti_to_mlds.m"
          {
#line 1801 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[6]));
#line 1801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_2));
#line 1801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5));
#line 1801 "rtti_to_mlds.m"
          }
#line 1801 "rtti_to_mlds.m"
          {
#line 1801 "rtti_to_mlds.m"
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0], ml_backend__rtti_to_mlds__V_25_25, ml_backend__rtti_to_mlds__Initializers_24, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12);
          }
#line 1801 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12);
#line 1800 "rtti_to_mlds.m"
        }
#line 1795 "rtti_to_mlds.m"
        break;
#line 1795 "rtti_to_mlds.m"
      case (MR_Integer) 3:
#line 1800 "rtti_to_mlds.m"
        {
#line 1800 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Initializers_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_6, (MR_Integer) 0)));
#line 1800 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1801 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12;

#line 1801 "rtti_to_mlds.m"
          {
#line 1801 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[6]));
#line 1801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0_1));
#line 1801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1801 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnDataName_5));
#line 1801 "rtti_to_mlds.m"
          }
#line 1801 "rtti_to_mlds.m"
          {
#line 1801 "rtti_to_mlds.m"
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0], ml_backend__rtti_to_mlds__V_13_13, ml_backend__rtti_to_mlds__Initializers_10, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_11)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12);
          }
#line 1801 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_12);
#line 1800 "rtti_to_mlds.m"
        }
#line 1795 "rtti_to_mlds.m"
        break;
#line 1795 "rtti_to_mlds.m"
    }
#line 1795 "rtti_to_mlds.m"
  }
#line 1789 "rtti_to_mlds.m"
}

#line 1774 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(
#line 1774 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_4,
#line 1774 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15,
#line 1774 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16)
#line 1774 "rtti_to_mlds.m"
{
#line 1777 "rtti_to_mlds.m"
  {
#line 1777 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1777 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__EntityName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 0)));
#line 1777 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__EntityDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 3)));
#line 1778 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 1)));
#line 1778 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_4, (MR_Integer) 2)));
#line 1785 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DefnDataName_10;
#line 1785 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_12;
#line 1780 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Type_11;
#line 1781 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___GCStatement_13;
#line 1782 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1780 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__EntityName_6)) == (MR_mktag((MR_Integer) 1)));
#line 1780 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1780 "rtti_to_mlds.m"
      {
#line 1780 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__DefnDataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityName_6, (MR_Integer) 0)));
#line 1781 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__EntityDefn_9)) == (MR_mktag((MR_Integer) 1)));
#line 1781 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1781 "rtti_to_mlds.m"
          {
#line 1781 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Type_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 0)));
#line 1781 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Initializer_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 1)));
#line 1781 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds___GCStatement_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__EntityDefn_9, (MR_Integer) 2)));
#line 1782 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Type_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 1782 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1782 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, (MR_Integer) 1)));
#line 1781 "rtti_to_mlds.m"
          }
#line 1780 "rtti_to_mlds.m"
      }
#line 1785 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1784 "rtti_to_mlds.m"
      {
#line 1784 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__add_rtti_defn_arcs_initializer_4_p_0(ml_backend__rtti_to_mlds__DefnDataName_10, ml_backend__rtti_to_mlds__Initializer_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_16);
      }
#line 1785 "rtti_to_mlds.m"
    else
#line 1786 "rtti_to_mlds.m"
      {
#line 1786 "rtti_to_mlds.m"
        {
#line 1786 "rtti_to_mlds.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.add_rtti_defn_arcs\'/3", (MR_String) "expected rtti entity_data");
#line 1786 "rtti_to_mlds.m"
          return;
        }
#line 1786 "rtti_to_mlds.m"
      }
#line 1777 "rtti_to_mlds.m"
  }
#line 1774 "rtti_to_mlds.m"
}

#line 1755 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(
#line 1755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defn_6,
#line 1755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19,
#line 1755 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20,
#line 1755 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21,
#line 1755 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22)
#line 1755 "rtti_to_mlds.m"
{
#line 1760 "rtti_to_mlds.m"
  {
#line 1760 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1760 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 0)));
#line 1761 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 1)));
#line 1761 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 2)));
#line 1761 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_6, (MR_Integer) 3)));

#line 1766 "rtti_to_mlds.m"
#line 1766 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__Name_9)) {
#line 1766 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1766 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 1766 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 1766 "rtti_to_mlds.m"
      case (MR_Integer) 3:
#line 1770 "rtti_to_mlds.m"
        {
#line 1771 "rtti_to_mlds.m"
          {
#line 1771 "rtti_to_mlds.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.add_rtti_defn_nodes\'/5", (MR_String) "expected entity_data");
#line 1771 "rtti_to_mlds.m"
            return;
          }
#line 1770 "rtti_to_mlds.m"
        }
#line 1766 "rtti_to_mlds.m"
        break;
#line 1766 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 1763 "rtti_to_mlds.m"
        {
#line 1763 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_31_31 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0;
#line 1763 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__DataName_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_9, (MR_Integer) 0)));
#line 1764 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_11_11;

#line 1764 "rtti_to_mlds.m"
          {
#line 1764 "rtti_to_mlds.m"
            mercury__digraph__add_vertex_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_31_31, ((MR_Box) (ml_backend__rtti_to_mlds__DataName_10)), &ml_backend__rtti_to_mlds__V_11_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_0_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_20);
          }
#line 1765 "rtti_to_mlds.m"
          {
#line 1765 "rtti_to_mlds.m"
            mercury__map__det_insert_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_31_31, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0, ((MR_Box) (ml_backend__rtti_to_mlds__DataName_10)), ((MR_Box) (ml_backend__rtti_to_mlds__Defn_6)), ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_0_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_NameMap_22);
          }
#line 1763 "rtti_to_mlds.m"
        }
#line 1766 "rtti_to_mlds.m"
        break;
#line 1766 "rtti_to_mlds.m"
    }
#line 1760 "rtti_to_mlds.m"
  }
#line 1755 "rtti_to_mlds.m"
}

#line 1734 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(
#line 1734 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorData_3)
#line 1734 "rtti_to_mlds.m"
{
#line 1736 "rtti_to_mlds.m"
  {
#line 1736 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1736 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1736 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_4;

#line 1737 "rtti_to_mlds.m"
    {
#line 1737 "rtti_to_mlds.m"
      backend_libs__rtti__type_ctor_rep_to_string_2_p_0(ml_backend__rtti_to_mlds__TypeCtorData_3, &ml_backend__rtti_to_mlds__Name_4);
    }
#line 1736 "rtti_to_mlds.m"
    {
#line 1736 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__2_2 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_4);
    }
#line 1736 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1736 "rtti_to_mlds.m"
  }
#line 1734 "rtti_to_mlds.m"
}

#line 1729 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(
#line 1729 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Locn_3)
#line 1729 "rtti_to_mlds.m"
{
#line 1731 "rtti_to_mlds.m"
  {
#line 1731 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1731 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1731 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_4;

#line 1732 "rtti_to_mlds.m"
    {
#line 1732 "rtti_to_mlds.m"
      backend_libs__rtti__sectag_locn_to_string_2_p_0(ml_backend__rtti_to_mlds__Locn_3, &ml_backend__rtti_to_mlds__Name_4);
    }
#line 1731 "rtti_to_mlds.m"
    {
#line 1731 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__2_2 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_4);
    }
#line 1731 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__2_2;
#line 1731 "rtti_to_mlds.m"
  }
#line 1729 "rtti_to_mlds.m"
}

#line 1701 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(
#line 1701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_2)
#line 1701 "rtti_to_mlds.m"
{
#line 1704 "rtti_to_mlds.m"
  {
#line 1704 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 1708 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1709 "rtti_to_mlds.m"
      {
#line 1709 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 1)));

#line 1711 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_5)) == (MR_mktag((MR_Integer) 0))))
#line 1710 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1711 "rtti_to_mlds.m"
        else
#line 1711 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_5)) == (MR_mktag((MR_Integer) 3))))
#line 1711 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1711 "rtti_to_mlds.m"
        else
#line 1711 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1709 "rtti_to_mlds.m"
      }
#line 1708 "rtti_to_mlds.m"
    else
#line 1708 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1706 "rtti_to_mlds.m"
      {
#line 1706 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeInfo_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_2, (MR_Integer) 1)));
#line 1707 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_4_4;

#line 1707 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_3)) == (MR_mktag((MR_Integer) 0)));
#line 1707 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1707 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_4_4 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_3), (MR_Integer) 0);
#line 1706 "rtti_to_mlds.m"
      }
#line 1708 "rtti_to_mlds.m"
    else
#line 1708 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1704 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = !(ml_backend__rtti_to_mlds__succeeded);
#line 1704 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1704 "rtti_to_mlds.m"
  }
#line 1701 "rtti_to_mlds.m"
}

#line 1632 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(
#line 1632 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_8,
#line 1632 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_9,
#line 1632 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcId_10,
#line 1632 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ClosureKind_11,
#line 1632 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_12,
#line 1632 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1632 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23)
#line 1632 "rtti_to_mlds.m"
{
#line 1650 "rtti_to_mlds.m"
  {
#line 1650 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredId_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1650 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__ProcId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ProcInfo_17;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_18;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncRval_19;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncType_20;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ExtraDefns_21;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1650 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1650 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1652 "rtti_to_mlds.m"
    {
#line 1652 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, &ml_backend__rtti_to_mlds__ProcInfo_17);
    }
#line 1653 "rtti_to_mlds.m"
    {
#line 1653 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    }
#line 1653 "rtti_to_mlds.m"
    {
#line 1653 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24 = ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(ml_backend__rtti_to_mlds__ModuleInfo_8, ml_backend__rtti_to_mlds__V_25_25, ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, ml_backend__rtti_to_mlds__ProcInfo_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22);
    }
#line 1655 "rtti_to_mlds.m"
    {
#line 1655 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_24, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26);
    }
#line 1658 "rtti_to_mlds.m"
    {
#line 1658 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_18);
    }
#line 1659 "rtti_to_mlds.m"
    {
#line 1659 "rtti_to_mlds.m"
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__rtti_to_mlds__PredId_15, ml_backend__rtti_to_mlds__ProcId_16, ml_backend__rtti_to_mlds__ClosureKind_11, ml_backend__rtti_to_mlds__NumExtra_9, ml_backend__rtti_to_mlds__Context_18, &ml_backend__rtti_to_mlds__WrapperFuncRval_19, &ml_backend__rtti_to_mlds__WrapperFuncType_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27);
    }
#line 1661 "rtti_to_mlds.m"
    {
#line 1661 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27, &ml_backend__rtti_to_mlds__ExtraDefns_21);
    }
#line 1662 "rtti_to_mlds.m"
    {
#line 1662 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_27, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28);
    }
#line 1663 "rtti_to_mlds.m"
    {
#line 1663 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(ml_backend__rtti_to_mlds__ExtraDefns_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);
    }
#line 1667 "rtti_to_mlds.m"
    {
#line 1667 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncType_20));
#line 1667 "rtti_to_mlds.m"
    }
#line 1667 "rtti_to_mlds.m"
    {
#line 1667 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_30_30, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncRval_19));
#line 1667 "rtti_to_mlds.m"
    }
#line 1667 "rtti_to_mlds.m"
    {
#line 1667 "rtti_to_mlds.m"
      MR_Word base;
#line 1667 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_12 = base;
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1667 "rtti_to_mlds.m"
    }
#line 1650 "rtti_to_mlds.m"
  }
#line 1632 "rtti_to_mlds.m"
}

#line 1609 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(
#line 1609 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1609 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcIdUniv_7,
#line 1609 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1609 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1609 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1609 "rtti_to_mlds.m"
{
#line 1612 "rtti_to_mlds.m"
  {
#line 1612 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1612 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiProcId_10;
#line 1619 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv0_RttiProcId_10;
#line 1620 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_14_14;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1620 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_20_20;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1620 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_23_23;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1620 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 1619 "rtti_to_mlds.m"
    {
#line 1619 "rtti_to_mlds.m"
      mercury__univ__det_univ_to_type_2_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, ml_backend__rtti_to_mlds__RttiProcIdUniv_7, &ml_backend__rtti_to_mlds__conv0_RttiProcId_10);
    }
#line 1619 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__RttiProcId_10 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_RttiProcId_10);
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_30_30 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_31_31 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1620 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__V_14_14 == (MR_Integer) 0);
#line 1626 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1625 "rtti_to_mlds.m"
      {
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PredLabel_36;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PredModule_37;
#line 1625 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__ProcId_38;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__QualifiedProcLabel_39;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Params_40;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Signature_41;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ProcAddrRval_42;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ProcAddrArg_43;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1625 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 1676 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_53_53;
#line 1676 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_54_54;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 1676 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_64_64;

#line 1675 "rtti_to_mlds.m"
        {
#line 1675 "rtti_to_mlds.m"
          ml_backend__ml_code_util__ml_gen_pred_label_from_rtti_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiProcId_10, &ml_backend__rtti_to_mlds__PredLabel_36, &ml_backend__rtti_to_mlds__PredModule_37);
        }
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 0)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 1)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 3)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 4)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 5)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 6)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ProcId_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 7)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 8)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 9)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_59_59 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_60_60 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_61_61 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 11)));
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1676 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1678 "rtti_to_mlds.m"
        {
#line 1678 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1678 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredLabel_36));
#line 1678 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcId_38));
#line 1678 "rtti_to_mlds.m"
        }
#line 1677 "rtti_to_mlds.m"
        {
#line 1677 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__QualifiedProcLabel_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1677 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PredModule_37));
#line 1677 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1677 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__QualifiedProcLabel_39, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 1677 "rtti_to_mlds.m"
        }
#line 1679 "rtti_to_mlds.m"
        {
#line 1679 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Params_40 = ml_backend__ml_code_util__ml_gen_proc_params_from_rtti_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiProcId_10);
        }
#line 1680 "rtti_to_mlds.m"
        {
#line 1680 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Signature_41 = ml_backend__mlds__mlds_get_func_signature_1_f_0(ml_backend__rtti_to_mlds__Params_40);
        }
#line 1682 "rtti_to_mlds.m"
        {
#line 1682 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1682 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__QualifiedProcLabel_39));
#line 1682 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Signature_41));
#line 1682 "rtti_to_mlds.m"
        }
#line 1681 "rtti_to_mlds.m"
        {
#line 1681 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1681 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 1681 "rtti_to_mlds.m"
        }
#line 1681 "rtti_to_mlds.m"
        {
#line 1681 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ProcAddrRval_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1681 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1681 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrRval_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 1681 "rtti_to_mlds.m"
        }
#line 1688 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__Params_40);
#line 1688 "rtti_to_mlds.m"
        {
#line 1688 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1688 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 1688 "rtti_to_mlds.m"
        }
#line 1688 "rtti_to_mlds.m"
        {
#line 1688 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ProcAddrArg_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1688 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1688 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 1688 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ProcAddrArg_43, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrRval_42));
#line 1688 "rtti_to_mlds.m"
        }
#line 1689 "rtti_to_mlds.m"
        {
#line 1689 "rtti_to_mlds.m"
          MR_Word base;
#line 1689 "rtti_to_mlds.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1689 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__Initializer_8 = base;
#line 1689 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ProcAddrArg_43));
#line 1689 "rtti_to_mlds.m"
        }
#line 1625 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12;
#line 1625 "rtti_to_mlds.m"
      }
#line 1626 "rtti_to_mlds.m"
    else
#line 1627 "rtti_to_mlds.m"
      {
#line 1628 "rtti_to_mlds.m"
        {
#line 1628 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_wrapper_func_and_initializer_7_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, (MR_Integer) 0, ml_backend__rtti_to_mlds__RttiProcId_10, (MR_Integer) 2, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
        }
#line 1627 "rtti_to_mlds.m"
      }
#line 1612 "rtti_to_mlds.m"
  }
#line 1609 "rtti_to_mlds.m"
}

#line 1589 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_method_6_p_0(
#line 1589 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1589 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__NumExtra_8,
#line 1589 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiProcLabel_9,
#line 1589 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_10,
#line 1589 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1589 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1589 "rtti_to_mlds.m"
{
#line 1593 "rtti_to_mlds.m"
  {
#line 1593 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredId_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 6)));
#line 1593 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__ProcId_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 7)));
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ProcInfo_27;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_28;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncRval_29;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__WrapperFuncType_30;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ExtraDefns_31;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1593 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 0)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 1)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 2)));
#line 1650 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 3)));
#line 1650 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 4)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 5)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 8)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 9)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 11)));
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 1650 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiProcLabel_9, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 1652 "rtti_to_mlds.m"
    {
#line 1652 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_proc_info_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, &ml_backend__rtti_to_mlds__ProcInfo_27);
    }
#line 1653 "rtti_to_mlds.m"
    {
#line 1653 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__ml_gen_info__ml_backend__ml_gen_info__type_ctor_info_ml_ground_term_0);
    }
#line 1653 "rtti_to_mlds.m"
    {
#line 1653 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32 = ml_backend__ml_gen_info__ml_gen_info_init_6_f_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__V_33_33, ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, ml_backend__rtti_to_mlds__ProcInfo_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12);
    }
#line 1655 "rtti_to_mlds.m"
    {
#line 1655 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_bump_counters_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_24_32, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34);
    }
#line 1658 "rtti_to_mlds.m"
    {
#line 1658 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_28);
    }
#line 1659 "rtti_to_mlds.m"
    {
#line 1659 "rtti_to_mlds.m"
      ml_backend__ml_closure_gen__ml_gen_closure_wrapper_9_p_0(ml_backend__rtti_to_mlds__PredId_25, ml_backend__rtti_to_mlds__ProcId_26, (MR_Integer) 1, ml_backend__rtti_to_mlds__NumExtra_8, ml_backend__rtti_to_mlds__Context_28, &ml_backend__rtti_to_mlds__WrapperFuncRval_29, &ml_backend__rtti_to_mlds__WrapperFuncType_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_26_34, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35);
    }
#line 1661 "rtti_to_mlds.m"
    {
#line 1661 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_closure_wrapper_defns_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35, &ml_backend__rtti_to_mlds__ExtraDefns_31);
    }
#line 1662 "rtti_to_mlds.m"
    {
#line 1662 "rtti_to_mlds.m"
      ml_backend__ml_gen_info__ml_gen_info_get_global_data_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_Info_27_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36);
    }
#line 1663 "rtti_to_mlds.m"
    {
#line 1663 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(ml_backend__rtti_to_mlds__ExtraDefns_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_36, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
    }
#line 1667 "rtti_to_mlds.m"
    {
#line 1667 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncType_30));
#line 1667 "rtti_to_mlds.m"
    }
#line 1667 "rtti_to_mlds.m"
    {
#line 1667 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__WrapperFuncRval_29));
#line 1667 "rtti_to_mlds.m"
    }
#line 1667 "rtti_to_mlds.m"
    {
#line 1667 "rtti_to_mlds.m"
      MR_Word base;
#line 1667 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1667 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_10 = base;
#line 1667 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 1667 "rtti_to_mlds.m"
    }
#line 1593 "rtti_to_mlds.m"
  }
#line 1589 "rtti_to_mlds.m"
}

#line 1353 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3(
#line 1353 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1353 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1353 "rtti_to_mlds.m"
{
#line 1353 "rtti_to_mlds.m"
  {
#line 1353 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1353 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1353 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_Initializer_8;

#line 1353 "rtti_to_mlds.m"
    {
#line 1353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1353 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_Initializer_8));
#line 1353 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1353 "rtti_to_mlds.m"
  }
#line 1353 "rtti_to_mlds.m"
}

#line 1569 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2(
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1569 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1569 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1569 "rtti_to_mlds.m"
{
#line 1569 "rtti_to_mlds.m"
  {
#line 1569 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1569 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10;

#line 1569 "rtti_to_mlds.m"
    {
#line 1569 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10);
    }
#line 1569 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10));
#line 1569 "rtti_to_mlds.m"
  }
#line 1569 "rtti_to_mlds.m"
}

#line 1568 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_1(
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1568 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1568 "rtti_to_mlds.m"
{
#line 1568 "rtti_to_mlds.m"
  {
#line 1568 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1568 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1568 "rtti_to_mlds.m"
    {
#line 1568 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1568 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1568 "rtti_to_mlds.m"
  }
#line 1568 "rtti_to_mlds.m"
}

#line 1563 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(
#line 1563 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1563 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiDatas_7,
#line 1563 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1563 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1563 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1563 "rtti_to_mlds.m"
{
#line 1567 "rtti_to_mlds.m"
  {
#line 1567 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1567 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_18_18 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 1567 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_10;
#line 1567 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1567 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 1567 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1569 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13;

#line 1568 "rtti_to_mlds.m"
    {
#line 1568 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RealRttiDatas_10 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_18_18, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[34], ml_backend__rtti_to_mlds__PTIRttiDatas_7);
    }
#line 1569 "rtti_to_mlds.m"
    {
#line 1569 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1569 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 1569 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_2));
#line 1569 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1569 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
#line 1569 "rtti_to_mlds.m"
    }
#line 1569 "rtti_to_mlds.m"
    {
#line 1569 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_18_18, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_15_15, ml_backend__rtti_to_mlds__RealRttiDatas_10, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13);
    }
#line 1569 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_13);
#line 1570 "rtti_to_mlds.m"
    {
#line 1570 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1353 "rtti_to_mlds.m"
    {
#line 1353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[5]));
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0_3));
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1353 "rtti_to_mlds.m"
    }
#line 1353 "rtti_to_mlds.m"
    {
#line 1353 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__PTIRttiDatas_7);
    }
#line 1567 "rtti_to_mlds.m"
  }
#line 1563 "rtti_to_mlds.m"
}

#line 1548 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(
#line 1548 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1548 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PTIRttiData_7,
#line 1548 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__Initializer_8,
#line 1548 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 1548 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12)
#line 1548 "rtti_to_mlds.m"
{
#line 1551 "rtti_to_mlds.m"
  {
#line 1551 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1551 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_10;

#line 1708 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1709 "rtti_to_mlds.m"
      {
#line 1709 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));

#line 1711 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 0))))
#line 1710 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1711 "rtti_to_mlds.m"
        else
#line 1711 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 3))))
#line 1711 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1711 "rtti_to_mlds.m"
        else
#line 1711 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1709 "rtti_to_mlds.m"
      }
#line 1708 "rtti_to_mlds.m"
    else
#line 1708 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1706 "rtti_to_mlds.m"
      {
#line 1706 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeInfo_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));
#line 1707 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_17_17;

#line 1707 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_16)) == (MR_mktag((MR_Integer) 0)));
#line 1707 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1707 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_16), (MR_Integer) 0);
#line 1706 "rtti_to_mlds.m"
      }
#line 1708 "rtti_to_mlds.m"
    else
#line 1708 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1704 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = !(ml_backend__rtti_to_mlds__succeeded);
#line 1554 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 92 "rtti_to_mlds.m"
      {
#line 87 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 87 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_26_26;

#line 87 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PTIRttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 87 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 87 "rtti_to_mlds.m"
          {
#line 87 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__PTIRttiData_7, (MR_Integer) 1)));
#line 87 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_27_27)) == (MR_mktag((MR_Integer) 3)));
#line 87 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 87 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, (MR_Integer) 0)));
#line 87 "rtti_to_mlds.m"
          }
#line 92 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 92 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11;
#line 92 "rtti_to_mlds.m"
        else
#line 93 "rtti_to_mlds.m"
          {
#line 93 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__PTIRttiData_7, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);
          }
#line 92 "rtti_to_mlds.m"
      }
#line 1554 "rtti_to_mlds.m"
    else
#line 1554 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11;
#line 1559 "rtti_to_mlds.m"
    {
#line 1559 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_10);
    }
#line 1560 "rtti_to_mlds.m"
    {
#line 1560 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_10, ml_backend__rtti_to_mlds__PTIRttiData_7);
    }
#line 1551 "rtti_to_mlds.m"
  }
#line 1548 "rtti_to_mlds.m"
}

#line 1435 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(
#line 1435 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1435 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1435 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7)
#line 1435 "rtti_to_mlds.m"
{
#line 1438 "rtti_to_mlds.m"
  {
#line 1438 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1438 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1438 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 1438 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 1438 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;

#line 1393 "rtti_to_mlds.m"
    {
#line 1393 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1393 "rtti_to_mlds.m"
    }
#line 1447 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiId_7)) == (MR_mktag((MR_Integer) 0))))
#line 1447 "rtti_to_mlds.m"
      {
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 0)));
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 1)));
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ModuleName_36;
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_37;
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_41;
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_42;
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DataAddr_43;
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 1447 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46;

#line 1465 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1466 "rtti_to_mlds.m"
          {
#line 1466 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 1)));

#line 1468 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_31)) == (MR_mktag((MR_Integer) 1))))
#line 1467 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1468 "rtti_to_mlds.m"
            else
#line 1468 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_31)) == (MR_mktag((MR_Integer) 2))))
#line 1468 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1468 "rtti_to_mlds.m"
            else
#line 1468 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1466 "rtti_to_mlds.m"
          }
#line 1465 "rtti_to_mlds.m"
        else
#line 1465 "rtti_to_mlds.m"
        if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1461 "rtti_to_mlds.m"
          {
#line 1461 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__TypeInfo_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_18, (MR_Integer) 1)));

#line 1463 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_26)) == (MR_mktag((MR_Integer) 1))))
#line 1462 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1463 "rtti_to_mlds.m"
            else
#line 1463 "rtti_to_mlds.m"
            if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_26)) == (MR_mktag((MR_Integer) 2))))
#line 1463 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1463 "rtti_to_mlds.m"
            else
#line 1463 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1461 "rtti_to_mlds.m"
          }
#line 1465 "rtti_to_mlds.m"
        else
#line 1465 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1474 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1472 "rtti_to_mlds.m"
          {
#line 1472 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ModuleName_36 = ml_backend__rtti_to_mlds__ModuleName_6;
#line 1473 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1472 "rtti_to_mlds.m"
          }
#line 1474 "rtti_to_mlds.m"
        else
#line 1476 "rtti_to_mlds.m"
          {
#line 1476 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiModuleName_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 0)));
#line 1475 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__RttiTypeName_39 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 1)));
#line 1475 "rtti_to_mlds.m"
            MR_Integer ml_backend__rtti_to_mlds__RttiTypeArity_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_17, (MR_Integer) 2)));
#line 1482 "rtti_to_mlds.m"
            MR_String ml_backend__rtti_to_mlds__V_44_44;

#line 1482 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiModuleName_38)) == (MR_mktag((MR_Integer) 0)));
#line 1482 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1482 "rtti_to_mlds.m"
              {
#line 1482 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiModuleName_38, (MR_Integer) 0)));
#line 1482 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__succeeded = (strcmp(ml_backend__rtti_to_mlds__V_44_44, (MR_String) "") == 0);
#line 1482 "rtti_to_mlds.m"
              }
#line 1486 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1483 "rtti_to_mlds.m"
              {
#line 1483 "rtti_to_mlds.m"
                {
#line 1483 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__ModuleName_36 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
                }
#line 1484 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1483 "rtti_to_mlds.m"
              }
#line 1486 "rtti_to_mlds.m"
            else
#line 1487 "rtti_to_mlds.m"
              {
#line 1487 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ModuleName_36 = ml_backend__rtti_to_mlds__RttiModuleName_38;
#line 1488 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_37 = ml_backend__rtti_to_mlds__RttiTypeCtor_17;
#line 1487 "rtti_to_mlds.m"
              }
#line 1476 "rtti_to_mlds.m"
          }
#line 1491 "rtti_to_mlds.m"
        {
#line 1491 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_ModuleName_41 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_36);
        }
#line 1492 "rtti_to_mlds.m"
        {
#line 1492 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_37));
#line 1492 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_18));
#line 1492 "rtti_to_mlds.m"
        }
#line 1492 "rtti_to_mlds.m"
        {
#line 1492 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_DataName_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1492 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_42, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 1492 "rtti_to_mlds.m"
        }
#line 1493 "rtti_to_mlds.m"
        {
#line 1493 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__DataAddr_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_41));
#line 1493 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_42));
#line 1493 "rtti_to_mlds.m"
        }
#line 1494 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_43);
#line 1494 "rtti_to_mlds.m"
        {
#line 1494 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1494 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 1494 "rtti_to_mlds.m"
        }
#line 1447 "rtti_to_mlds.m"
      }
#line 1447 "rtti_to_mlds.m"
    else
#line 1449 "rtti_to_mlds.m"
      {
#line 1449 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 0)));
#line 1449 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCRttiName_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_7, (MR_Integer) 1)));

#line 1450 "rtti_to_mlds.m"
        {
#line 1450 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(ml_backend__rtti_to_mlds__TCName_20, ml_backend__rtti_to_mlds__TCRttiName_21);
        }
#line 1449 "rtti_to_mlds.m"
      }
#line 1440 "rtti_to_mlds.m"
    {
#line 1440 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1440 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 1440 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 1440 "rtti_to_mlds.m"
    }
#line 1440 "rtti_to_mlds.m"
    {
#line 1440 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1440 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 1440 "rtti_to_mlds.m"
    }
#line 1438 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1438 "rtti_to_mlds.m"
  }
#line 1435 "rtti_to_mlds.m"
}

#line 1417 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(
#line 1417 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1417 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1417 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiName_7)
#line 1417 "rtti_to_mlds.m"
{
#line 1420 "rtti_to_mlds.m"
  {
#line 1420 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_23;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_24;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_28;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_29;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DataAddr_30;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1420 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;

#line 1465 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1466 "rtti_to_mlds.m"
      {
#line 1466 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 1)));

#line 1468 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 1))))
#line 1467 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1468 "rtti_to_mlds.m"
        else
#line 1468 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__PseudoTypeInfo_18)) == (MR_mktag((MR_Integer) 2))))
#line 1468 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1468 "rtti_to_mlds.m"
        else
#line 1468 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1466 "rtti_to_mlds.m"
      }
#line 1465 "rtti_to_mlds.m"
    else
#line 1465 "rtti_to_mlds.m"
    if (((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiName_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1461 "rtti_to_mlds.m"
      {
#line 1461 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_7, (MR_Integer) 1)));

#line 1463 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_13)) == (MR_mktag((MR_Integer) 1))))
#line 1462 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1463 "rtti_to_mlds.m"
        else
#line 1463 "rtti_to_mlds.m"
        if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeInfo_13)) == (MR_mktag((MR_Integer) 2))))
#line 1463 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1463 "rtti_to_mlds.m"
        else
#line 1463 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1461 "rtti_to_mlds.m"
      }
#line 1465 "rtti_to_mlds.m"
    else
#line 1465 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = MR_FALSE;
#line 1474 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1472 "rtti_to_mlds.m"
      {
#line 1472 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ModuleName_23 = ml_backend__rtti_to_mlds__ModuleName_5;
#line 1473 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1472 "rtti_to_mlds.m"
      }
#line 1474 "rtti_to_mlds.m"
    else
#line 1476 "rtti_to_mlds.m"
      {
#line 1476 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiModuleName_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 0)));
#line 1475 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__RttiTypeName_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 1)));
#line 1475 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__RttiTypeArity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_6, (MR_Integer) 2)));
#line 1482 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_31_31;

#line 1482 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiModuleName_25)) == (MR_mktag((MR_Integer) 0)));
#line 1482 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1482 "rtti_to_mlds.m"
          {
#line 1482 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiModuleName_25, (MR_Integer) 0)));
#line 1482 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = (strcmp(ml_backend__rtti_to_mlds__V_31_31, (MR_String) "") == 0);
#line 1482 "rtti_to_mlds.m"
          }
#line 1486 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1483 "rtti_to_mlds.m"
          {
#line 1483 "rtti_to_mlds.m"
            {
#line 1483 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ModuleName_23 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 1484 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1483 "rtti_to_mlds.m"
          }
#line 1486 "rtti_to_mlds.m"
        else
#line 1487 "rtti_to_mlds.m"
          {
#line 1487 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ModuleName_23 = ml_backend__rtti_to_mlds__RttiModuleName_25;
#line 1488 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_24 = ml_backend__rtti_to_mlds__RttiTypeCtor_6;
#line 1487 "rtti_to_mlds.m"
          }
#line 1476 "rtti_to_mlds.m"
      }
#line 1491 "rtti_to_mlds.m"
    {
#line 1491 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_ModuleName_28 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_23);
    }
#line 1492 "rtti_to_mlds.m"
    {
#line 1492 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1492 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_24));
#line 1492 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_7));
#line 1492 "rtti_to_mlds.m"
    }
#line 1492 "rtti_to_mlds.m"
    {
#line 1492 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_DataName_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1492 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1492 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1492 "rtti_to_mlds.m"
    }
#line 1493 "rtti_to_mlds.m"
    {
#line 1493 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DataAddr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1493 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_28));
#line 1493 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_29));
#line 1493 "rtti_to_mlds.m"
    }
#line 1494 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_30);
#line 1494 "rtti_to_mlds.m"
    {
#line 1494 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1494 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1494 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1494 "rtti_to_mlds.m"
    }
#line 1421 "rtti_to_mlds.m"
    {
#line 1421 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1421 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__4_4, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_8_8));
#line 1421 "rtti_to_mlds.m"
    }
#line 1420 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1420 "rtti_to_mlds.m"
  }
#line 1417 "rtti_to_mlds.m"
}

#line 1407 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(
#line 1407 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1407 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__2_2)
#line 1407 "rtti_to_mlds.m"
{
#line 1409 "rtti_to_mlds.m"
  {
#line 1409 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1409 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3;

#line 1409 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1409 "rtti_to_mlds.m"
      {
#line 1409 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1409 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 1)));

#line 1410 "rtti_to_mlds.m"
        {
#line 1410 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__HeadVar__3_3 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_5, ml_backend__rtti_to_mlds__RttiName_6);
        }
#line 1409 "rtti_to_mlds.m"
      }
#line 1409 "rtti_to_mlds.m"
    else
#line 1411 "rtti_to_mlds.m"
      {
#line 1411 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 0)));
#line 1411 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCRttiName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__2_2, (MR_Integer) 1)));
#line 1411 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1411 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_20;
#line 1411 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_26;
#line 1411 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DataAddr_27;
#line 1411 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;

#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
        switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__TCRttiName_9)) {
#line 1502 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
            switch (MR_unmkbody(ml_backend__rtti_to_mlds__TCRttiName_9)) {
#line 1502 "rtti_to_mlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 0:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_56 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_55);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 1:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_66 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_67 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_65);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_61 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_60);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 3:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_41 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_40);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 4:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_51 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_50);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 1500 "rtti_to_mlds.m"
            {
#line 1500 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)));
#line 1500 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 1)));

#line 1501 "rtti_to_mlds.m"
              {
#line 1501 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_18);
              }
#line 1500 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
            {
#line 1542 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___ClassName_46 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds___Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
              {
#line 1544 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_45);
              }
#line 1542 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
          case (MR_Integer) 3:
#line 1502 "rtti_to_mlds.m"
#line 1502 "rtti_to_mlds.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCRttiName_9, (MR_Integer) 0)))) {
#line 1502 "rtti_to_mlds.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 0:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_71 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_70);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 1:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_91 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_90);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 2:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_75);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 3:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_81 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_80);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
              case (MR_Integer) 4:
#line 1542 "rtti_to_mlds.m"
                {
#line 1542 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__ModuleName_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 0)));
#line 1543 "rtti_to_mlds.m"
                  MR_String ml_backend__rtti_to_mlds___ClassName_86 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 1)));
#line 1543 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds___Arity_87 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_8, (MR_Integer) 2)));

#line 1544 "rtti_to_mlds.m"
                  {
#line 1544 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__MLDS_ModuleName_20 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_85);
                  }
#line 1542 "rtti_to_mlds.m"
                }
#line 1502 "rtti_to_mlds.m"
                break;
#line 1502 "rtti_to_mlds.m"
            }
#line 1502 "rtti_to_mlds.m"
            break;
#line 1502 "rtti_to_mlds.m"
        }
#line 1536 "rtti_to_mlds.m"
        {
#line 1536 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MLDS_DataName_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1536 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1536 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__HeadVar__2_2));
#line 1536 "rtti_to_mlds.m"
        }
#line 1537 "rtti_to_mlds.m"
        {
#line 1537 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__DataAddr_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1537 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_20));
#line 1537 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_26));
#line 1537 "rtti_to_mlds.m"
        }
#line 1538 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_27);
#line 1538 "rtti_to_mlds.m"
        {
#line 1538 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1538 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1538 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1538 "rtti_to_mlds.m"
        }
#line 1430 "rtti_to_mlds.m"
        {
#line 1430 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1430 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 1430 "rtti_to_mlds.m"
        }
#line 1411 "rtti_to_mlds.m"
      }
#line 1409 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__3_3;
#line 1409 "rtti_to_mlds.m"
  }
#line 1407 "rtti_to_mlds.m"
}

#line 1359 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(
#line 1359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DestType_5,
#line 1359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1359 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_7)
#line 1359 "rtti_to_mlds.m"
{
#line 1370 "rtti_to_mlds.m"
  {
#line 1370 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 1370 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1370 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__VarNum_9;
#line 1364 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;

#line 1364 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1364 "rtti_to_mlds.m"
      {
#line 1364 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 1)));
#line 1364 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_20_20)) == (MR_mktag((MR_Integer) 3)));
#line 1364 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1364 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__VarNum_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_20_20, (MR_Integer) 0)));
#line 1364 "rtti_to_mlds.m"
      }
#line 1370 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1367 "rtti_to_mlds.m"
      {
#line 1367 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1367 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1367 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1367 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 1393 "rtti_to_mlds.m"
        {
#line 1393 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1393 "rtti_to_mlds.m"
        }
#line 1369 "rtti_to_mlds.m"
        {
#line 1369 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__VarNum_9));
#line 1369 "rtti_to_mlds.m"
        }
#line 1369 "rtti_to_mlds.m"
        {
#line 1369 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1369 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1369 "rtti_to_mlds.m"
        }
#line 1368 "rtti_to_mlds.m"
        {
#line 1368 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1368 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 1368 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 1368 "rtti_to_mlds.m"
        }
#line 1368 "rtti_to_mlds.m"
        {
#line 1368 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1368 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 1368 "rtti_to_mlds.m"
        }
#line 1367 "rtti_to_mlds.m"
      }
#line 1370 "rtti_to_mlds.m"
    else
#line 1384 "rtti_to_mlds.m"
      {
#line 1384 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCName_11;
#line 1384 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__InstanceModuleName_12;
#line 1384 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__InstanceString_13;
#line 1371 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1371 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 1371 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1371 "rtti_to_mlds.m"
          {
#line 1371 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__TCName_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 1)));
#line 1371 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__InstanceModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 2)));
#line 1371 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__InstanceString_13 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 3)));
#line 1371 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_7, (MR_Integer) 4)));
#line 1376 "rtti_to_mlds.m"
            {
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_15;
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_DataName_16;
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_17;
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_18;
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1376 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_32_32;

#line 1375 "rtti_to_mlds.m"
              {
#line 1375 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1375 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceModuleName_12));
#line 1375 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceString_13));
#line 1375 "rtti_to_mlds.m"
              }
#line 1374 "rtti_to_mlds.m"
              {
#line 1374 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1374 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_11));
#line 1374 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1374 "rtti_to_mlds.m"
              }
#line 1377 "rtti_to_mlds.m"
              {
#line 1377 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_15 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__InstanceModuleName_12);
              }
#line 1378 "rtti_to_mlds.m"
              {
#line 1378 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_DataName_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1378 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1378 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_DataName_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 1378 "rtti_to_mlds.m"
              }
#line 1381 "rtti_to_mlds.m"
              {
#line 1381 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1381 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_15));
#line 1381 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_DataName_16));
#line 1381 "rtti_to_mlds.m"
              }
#line 1382 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_17);
#line 1382 "rtti_to_mlds.m"
              {
#line 1382 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1382 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1382 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1382 "rtti_to_mlds.m"
              }
#line 1393 "rtti_to_mlds.m"
              {
#line 1393 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1393 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__DestType_5));
#line 1393 "rtti_to_mlds.m"
              }
#line 1383 "rtti_to_mlds.m"
              {
#line 1383 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1383 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1383 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_18));
#line 1383 "rtti_to_mlds.m"
              }
#line 1383 "rtti_to_mlds.m"
              {
#line 1383 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1383 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1383 "rtti_to_mlds.m"
              }
#line 1376 "rtti_to_mlds.m"
            }
#line 1371 "rtti_to_mlds.m"
          }
#line 1371 "rtti_to_mlds.m"
        else
#line 1385 "rtti_to_mlds.m"
          {
#line 1385 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__RttiId_19;

#line 1385 "rtti_to_mlds.m"
            {
#line 1385 "rtti_to_mlds.m"
              backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__rtti_to_mlds__RttiData_7, &ml_backend__rtti_to_mlds__RttiId_19);
            }
#line 1386 "rtti_to_mlds.m"
            {
#line 1386 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(ml_backend__rtti_to_mlds__DestType_5, ml_backend__rtti_to_mlds__ModuleName_6, ml_backend__rtti_to_mlds__RttiId_19);
            }
#line 1385 "rtti_to_mlds.m"
          }
#line 1384 "rtti_to_mlds.m"
      }
#line 1370 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1370 "rtti_to_mlds.m"
  }
#line 1359 "rtti_to_mlds.m"
}

#line 1353 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1(
#line 1353 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1353 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1353 "rtti_to_mlds.m"
{
#line 1353 "rtti_to_mlds.m"
  {
#line 1353 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1353 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1353 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_8;

#line 1353 "rtti_to_mlds.m"
    {
#line 1353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_data_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1353 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_8));
#line 1353 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1353 "rtti_to_mlds.m"
  }
#line 1353 "rtti_to_mlds.m"
}

#line 1349 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0(
#line 1349 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Type_5,
#line 1349 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1349 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiDatas_7)
#line 1349 "rtti_to_mlds.m"
{
#line 1352 "rtti_to_mlds.m"
  {
#line 1352 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1352 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1352 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_8_8;

#line 1353 "rtti_to_mlds.m"
    {
#line 1353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[5]));
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0_1));
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_5));
#line 1353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_8_8, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_6));
#line 1353 "rtti_to_mlds.m"
    }
#line 1353 "rtti_to_mlds.m"
    {
#line 1353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__4_4 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, ml_backend__rtti_to_mlds__V_8_8, ml_backend__rtti_to_mlds__RttiDatas_7);
    }
#line 1352 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__4_4;
#line 1352 "rtti_to_mlds.m"
  }
#line 1349 "rtti_to_mlds.m"
}

#line 1330 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0_1(
#line 1330 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1330 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1330 "rtti_to_mlds.m"
{
#line 1330 "rtti_to_mlds.m"
  {
#line 1330 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1330 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1330 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1330 "rtti_to_mlds.m"
    {
#line 1330 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_int_1_f_0(((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1330 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1330 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1330 "rtti_to_mlds.m"
  }
#line 1330 "rtti_to_mlds.m"
}

#line 1326 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(
#line 1326 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_5,
#line 1326 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_6,
#line 1326 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10,
#line 1326 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11)
#line 1326 "rtti_to_mlds.m"
{
#line 1329 "rtti_to_mlds.m"
  {
#line 1329 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1329 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1329 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_23;
#line 1329 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_30;
#line 1329 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;

#line 1330 "rtti_to_mlds.m"
    {
#line 1330 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[33], ml_backend__rtti_to_mlds__FunctorNumberMap_6);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_5));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_23));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_30, ml_backend__rtti_to_mlds__RttiId_23, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_11);
    }
#line 1329 "rtti_to_mlds.m"
  }
#line 1326 "rtti_to_mlds.m"
}

#line 1296 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(
#line 1296 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_5,
#line 1296 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 1296 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_7)
#line 1296 "rtti_to_mlds.m"
{
#line 1300 "rtti_to_mlds.m"
  {
#line 1300 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1300 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 1300 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
#line 1300 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Type_11;
#line 1300 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;

#line 1302 "rtti_to_mlds.m"
    {
#line 1302 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_10, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_6));
#line 1302 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
#line 1302 "rtti_to_mlds.m"
    }
#line 1303 "rtti_to_mlds.m"
    {
#line 1303 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 1303 "rtti_to_mlds.m"
    }
#line 1303 "rtti_to_mlds.m"
    {
#line 1303 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Type_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1303 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 1303 "rtti_to_mlds.m"
    }
#line 1314 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7)) == (MR_mktag((MR_Integer) 1))))
#line 1315 "rtti_to_mlds.m"
      {
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuFunctor_14 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7), (MR_Integer) 1);
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1315 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_20_20;
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1315 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1315 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_40 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 0)));
#line 1316 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 1)));
#line 1316 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 2)));
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 3)));
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 4)));
#line 1316 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 5)));
#line 1319 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__V_48_48;
#line 1319 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_49_49;
#line 1319 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 1319 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 1319 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_52_52;

#line 1318 "rtti_to_mlds.m"
        {
#line 1318 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_17_17 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__Name_40);
        }
#line 1319 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 0)));
#line 1319 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 1)));
#line 1319 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 2)));
#line 1319 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 3)));
#line 1319 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 4)));
#line 1319 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_14, (MR_Integer) 5)));
#line 1319 "rtti_to_mlds.m"
        {
#line 1319 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_19_19 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_20_20);
        }
#line 1320 "rtti_to_mlds.m"
        {
#line 1320 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_22_22 = ml_backend__ml_util__gen_init_bool_1_f_0((MR_Integer) 0);
        }
#line 1322 "rtti_to_mlds.m"
        {
#line 1322 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_26_26 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ml_backend__rtti_to_mlds__MaybeResFunctor_7);
        }
#line 1321 "rtti_to_mlds.m"
        {
#line 1321 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_25_25 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_5, ml_backend__rtti_to_mlds__RttiTypeCtor_6, ml_backend__rtti_to_mlds__V_26_26);
        }
#line 1323 "rtti_to_mlds.m"
        {
#line 1323 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1323 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 1323 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1323 "rtti_to_mlds.m"
        }
#line 1320 "rtti_to_mlds.m"
        {
#line 1320 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1320 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 1320 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1320 "rtti_to_mlds.m"
        }
#line 1319 "rtti_to_mlds.m"
        {
#line 1319 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1319 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 1319 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 1319 "rtti_to_mlds.m"
        }
#line 1318 "rtti_to_mlds.m"
        {
#line 1318 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1318 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 1318 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 1318 "rtti_to_mlds.m"
        }
#line 1317 "rtti_to_mlds.m"
        {
#line 1317 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1317 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_11));
#line 1317 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 1317 "rtti_to_mlds.m"
        }
#line 1315 "rtti_to_mlds.m"
      }
#line 1314 "rtti_to_mlds.m"
    else
#line 1305 "rtti_to_mlds.m"
      {
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ResFunctor_12 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_7), (MR_Integer) 0);
#line 1305 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 0)));
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1305 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1306 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 1)));
#line 1306 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_12, (MR_Integer) 2)));

#line 1308 "rtti_to_mlds.m"
        {
#line 1308 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__Name_13);
        }
#line 1309 "rtti_to_mlds.m"
        {
#line 1309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
        }
#line 1310 "rtti_to_mlds.m"
        {
#line 1310 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_bool_1_f_0((MR_Integer) 1);
        }
#line 1312 "rtti_to_mlds.m"
        {
#line 1312 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_38_38 = backend_libs__rtti__maybe_res_functor_rtti_name_1_f_0(ml_backend__rtti_to_mlds__MaybeResFunctor_7);
        }
#line 1311 "rtti_to_mlds.m"
        {
#line 1311 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_37_37 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_5, ml_backend__rtti_to_mlds__RttiTypeCtor_6, ml_backend__rtti_to_mlds__V_38_38);
        }
#line 1313 "rtti_to_mlds.m"
        {
#line 1313 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1313 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1313 "rtti_to_mlds.m"
        }
#line 1310 "rtti_to_mlds.m"
        {
#line 1310 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1310 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1310 "rtti_to_mlds.m"
        }
#line 1309 "rtti_to_mlds.m"
        {
#line 1309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1309 "rtti_to_mlds.m"
        }
#line 1308 "rtti_to_mlds.m"
        {
#line 1308 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1308 "rtti_to_mlds.m"
        }
#line 1307 "rtti_to_mlds.m"
        {
#line 1307 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_11));
#line 1307 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_8, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1307 "rtti_to_mlds.m"
        }
#line 1305 "rtti_to_mlds.m"
      }
#line 1300 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_8;
#line 1300 "rtti_to_mlds.m"
  }
#line 1296 "rtti_to_mlds.m"
}

#line 1290 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2(
#line 1290 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1290 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1290 "rtti_to_mlds.m"
{
#line 1290 "rtti_to_mlds.m"
  {
#line 1290 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1290 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1290 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_Initializer_8;

#line 1290 "rtti_to_mlds.m"
    {
#line 1290 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_Initializer_8 = ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_element_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1290 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_Initializer_8));
#line 1290 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1290 "rtti_to_mlds.m"
  }
#line 1290 "rtti_to_mlds.m"
}

#line 1286 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_1(
#line 1286 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1286 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1286 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1286 "rtti_to_mlds.m"
{
#line 1286 "rtti_to_mlds.m"
  {
#line 1286 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1286 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_24;

#line 1286 "rtti_to_mlds.m"
    {
#line 1286 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_maybe_res_name_ordered_table__1286__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv0_HeadVar__2_24);
    }
#line 1286 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_24));
#line 1286 "rtti_to_mlds.m"
  }
#line 1286 "rtti_to_mlds.m"
}

#line 1279 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(
#line 1279 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1279 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1279 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1279 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16,
#line 1279 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17)
#line 1279 "rtti_to_mlds.m"
{
#line 1284 "rtti_to_mlds.m"
  {
#line 1284 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_22_22 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[3];
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_28_28;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArityMaps_10;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorLists_11;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_12;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_14;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1284 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1285 "rtti_to_mlds.m"
    {
#line 1285 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeInfo_22_22, ml_backend__rtti_to_mlds__NameArityMap_8, &ml_backend__rtti_to_mlds__ArityMaps_10);
    }
#line 1286 "rtti_to_mlds.m"
    {
#line 1286 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_22_22, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[6], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[32], ml_backend__rtti_to_mlds__ArityMaps_10, &ml_backend__rtti_to_mlds__FunctorLists_11);
    }
#line 8248 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_28_28 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0;
#line 1287 "rtti_to_mlds.m"
    {
#line 1287 "rtti_to_mlds.m"
      mercury__list__condense_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_28_28, ml_backend__rtti_to_mlds__FunctorLists_11, &ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1288 "rtti_to_mlds.m"
    {
#line 1288 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_13);
    }
#line 1290 "rtti_to_mlds.m"
    {
#line 1290 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[4]));
#line 1290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0_2));
#line 1290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
#line 1290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_19_19, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1290 "rtti_to_mlds.m"
    }
#line 1289 "rtti_to_mlds.m"
    {
#line 1289 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_14 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_28_28, ml_backend__rtti_to_mlds__V_19_19, ml_backend__rtti_to_mlds__Functors_12);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_17);
    }
#line 1284 "rtti_to_mlds.m"
  }
#line 1279 "rtti_to_mlds.m"
}

#line 1274 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1(
#line 1274 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1274 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1274 "rtti_to_mlds.m"
{
#line 1274 "rtti_to_mlds.m"
  {
#line 1274 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1274 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1274 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__3_3;

#line 1274 "rtti_to_mlds.m"
    {
#line 1274 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__3_3 = ml_backend__ml_util__gen_init_reserved_address_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1274 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__3_3));
#line 1274 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1274 "rtti_to_mlds.m"
  }
#line 1274 "rtti_to_mlds.m"
}

#line 1268 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(
#line 1268 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1268 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1268 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResAddrs_8,
#line 1268 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 1268 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 1268 "rtti_to_mlds.m"
{
#line 1272 "rtti_to_mlds.m"
  {
#line 1272 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1272 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_10;
#line 1272 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 1272 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_25;
#line 1272 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_32;
#line 1272 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;

#line 1274 "rtti_to_mlds.m"
    {
#line 1274 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1274 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[4]));
#line 1274 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0_1));
#line 1274 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1274 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_14_14, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_6));
#line 1274 "rtti_to_mlds.m"
    }
#line 1274 "rtti_to_mlds.m"
    {
#line 1274 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, ml_backend__rtti_to_mlds__V_14_14, ml_backend__rtti_to_mlds__ResAddrs_8);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_25));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_32, ml_backend__rtti_to_mlds__RttiId_25, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
    }
#line 1272 "rtti_to_mlds.m"
  }
#line 1268 "rtti_to_mlds.m"
}

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1341 "rtti_to_mlds.m"
{
#line 1341 "rtti_to_mlds.m"
  {
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1341 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__4_4;

#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1341 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__4_4));
#line 1341 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
  }
#line 1341 "rtti_to_mlds.m"
}

#line 1261 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_3(
#line 1261 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1261 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1261 "rtti_to_mlds.m"
{
#line 1261 "rtti_to_mlds.m"
  {
#line 1261 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1261 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 1261 "rtti_to_mlds.m"
    {
#line 1261 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__res_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1261 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 1261 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1261 "rtti_to_mlds.m"
  }
#line 1261 "rtti_to_mlds.m"
}

#line 1226 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_2(
#line 1226 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1226 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1226 "rtti_to_mlds.m"
{
#line 1226 "rtti_to_mlds.m"
  {
#line 1226 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1226 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1226 "rtti_to_mlds.m"
    {
#line 1226 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = backend_libs__rtti__res_addr_is_numeric_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1226 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1226 "rtti_to_mlds.m"
  }
#line 1226 "rtti_to_mlds.m"
}

#line 1225 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_1(
#line 1225 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1225 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1225 "rtti_to_mlds.m"
{
#line 1225 "rtti_to_mlds.m"
  {
#line 1225 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1225 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1225 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1225 "rtti_to_mlds.m"
    {
#line 1225 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__res_addr_rep_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1225 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1225 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1225 "rtti_to_mlds.m"
  }
#line 1225 "rtti_to_mlds.m"
}

#line 1219 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ResFunctors_9,
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuByPtag_10,
#line 1219 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22,
#line 1219 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23)
#line 1219 "rtti_to_mlds.m"
{
#line 1224 "rtti_to_mlds.m"
  {
#line 1224 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_47_47 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ResFunctorReps_12;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__NumericResFunctorReps_13;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14;
#line 1224 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15;
#line 1224 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_17;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ResAddrInitializer_18;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_20;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_21;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_57;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_58;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_79;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_86;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_94;
#line 1224 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_95_95;

#line 1225 "rtti_to_mlds.m"
    {
#line 1225 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ResFunctorReps_12 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[29], ml_backend__rtti_to_mlds__ResFunctors_9);
    }
#line 1226 "rtti_to_mlds.m"
    {
#line 1226 "rtti_to_mlds.m"
      mercury__list__filter_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[30], ml_backend__rtti_to_mlds__ResFunctorReps_12, &ml_backend__rtti_to_mlds__NumericResFunctorReps_13, &ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14);
    }
#line 1228 "rtti_to_mlds.m"
    {
#line 1228 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, ml_backend__rtti_to_mlds__NumericResFunctorReps_13, &ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15);
    }
#line 1229 "rtti_to_mlds.m"
    {
#line 1229 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_47_47, ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14, &ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16);
    }
#line 1230 "rtti_to_mlds.m"
    {
#line 1230 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_17);
    }
#line 1261 "rtti_to_mlds.m"
    {
#line 1261 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_57 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_reserved_functor_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[31], ml_backend__rtti_to_mlds__ResFunctors_9);
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0_4));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_17));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_69_69, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 1341 "rtti_to_mlds.m"
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_58 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_69_69, ml_backend__rtti_to_mlds__FunctorRttiNames_57);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_87_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_87_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_79));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_86, ml_backend__rtti_to_mlds__RttiId_79, ml_backend__rtti_to_mlds__Initializer_58, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_22, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26);
    }
#line 1233 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16 == (MR_Integer) 0);
#line 1235 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1234 "rtti_to_mlds.m"
      {
#line 1234 "rtti_to_mlds.m"
        {
#line 1234 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ResAddrInitializer_18 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
        }
#line 1234 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26;
#line 1234 "rtti_to_mlds.m"
      }
#line 1235 "rtti_to_mlds.m"
    else
#line 1237 "rtti_to_mlds.m"
      {
#line 1236 "rtti_to_mlds.m"
        {
#line 1236 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_res_addrs_list_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__SymbolicResFunctorReps_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_26_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28);
        }
#line 1238 "rtti_to_mlds.m"
        {
#line 1238 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ResAddrInitializer_18 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)));
        }
#line 1237 "rtti_to_mlds.m"
      }
#line 1241 "rtti_to_mlds.m"
    {
#line 1241 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__DuByPtag_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_28_28, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30);
    }
#line 1243 "rtti_to_mlds.m"
    {
#line 1243 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 1243 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
#line 1243 "rtti_to_mlds.m"
    }
#line 1244 "rtti_to_mlds.m"
    {
#line 1244 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
#line 1244 "rtti_to_mlds.m"
    }
#line 1244 "rtti_to_mlds.m"
    {
#line 1244 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1244 "rtti_to_mlds.m"
    }
#line 1245 "rtti_to_mlds.m"
    {
#line 1245 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumNumericResFunctorReps_15);
    }
#line 1246 "rtti_to_mlds.m"
    {
#line 1246 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSymbolicResFunctorReps_16);
    }
#line 1248 "rtti_to_mlds.m"
    {
#line 1248 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_39_39 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
    }
#line 1250 "rtti_to_mlds.m"
    {
#line 1250 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_42_42 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_17, ml_backend__rtti_to_mlds__RttiTypeCtor_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
    }
#line 1252 "rtti_to_mlds.m"
    {
#line 1252 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1252 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 1252 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1252 "rtti_to_mlds.m"
    }
#line 1249 "rtti_to_mlds.m"
    {
#line 1249 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1249 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 1249 "rtti_to_mlds.m"
    }
#line 1247 "rtti_to_mlds.m"
    {
#line 1247 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ResAddrInitializer_18));
#line 1247 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 1247 "rtti_to_mlds.m"
    }
#line 1246 "rtti_to_mlds.m"
    {
#line 1246 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1246 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1246 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1246 "rtti_to_mlds.m"
    }
#line 1245 "rtti_to_mlds.m"
    {
#line 1245 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1245 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 1245 "rtti_to_mlds.m"
    }
#line 1244 "rtti_to_mlds.m"
    {
#line 1244 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1244 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1244 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_95_95 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_95_95, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_95_95, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_20));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_94, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_95_95));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_94, ml_backend__rtti_to_mlds__RttiId_20, ml_backend__rtti_to_mlds__Initializer_21, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_23);
    }
#line 1224 "rtti_to_mlds.m"
  }
#line 1219 "rtti_to_mlds.m"
}

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1341 "rtti_to_mlds.m"
{
#line 1341 "rtti_to_mlds.m"
  {
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1341 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__4_4;

#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1341 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__4_4));
#line 1341 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
  }
#line 1341 "rtti_to_mlds.m"
}

#line 1212 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_2(
#line 1212 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1212 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1212 "rtti_to_mlds.m"
{
#line 1212 "rtti_to_mlds.m"
  {
#line 1212 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1212 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1212 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 1212 "rtti_to_mlds.m"
    {
#line 1212 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1212 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 1212 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1212 "rtti_to_mlds.m"
  }
#line 1212 "rtti_to_mlds.m"
}

#line 1209 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_1(
#line 1209 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1209 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1209 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2)
#line 1209 "rtti_to_mlds.m"
{
#line 1209 "rtti_to_mlds.m"
  {
#line 1209 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1209 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_25;

#line 1209 "rtti_to_mlds.m"
    {
#line 1209 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_name_ordered_table__1209__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv0_HeadVar__2_25);
    }
#line 1209 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_25));
#line 1209 "rtti_to_mlds.m"
  }
#line 1209 "rtti_to_mlds.m"
}

#line 1202 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(
#line 1202 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1202 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1202 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NameArityMap_8,
#line 1202 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17,
#line 1202 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18)
#line 1202 "rtti_to_mlds.m"
{
#line 1207 "rtti_to_mlds.m"
  {
#line 1207 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_23_23 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[2];
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_29_29;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArityMaps_10;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorLists_11;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_12;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_13;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_14;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_15;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_46;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_53;
#line 1207 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;

#line 1208 "rtti_to_mlds.m"
    {
#line 1208 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeInfo_23_23, ml_backend__rtti_to_mlds__NameArityMap_8, &ml_backend__rtti_to_mlds__ArityMaps_10);
    }
#line 1209 "rtti_to_mlds.m"
    {
#line 1209 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_23_23, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[5], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[27], ml_backend__rtti_to_mlds__ArityMaps_10, &ml_backend__rtti_to_mlds__FunctorLists_11);
    }
#line 9052 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_29_29 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 1210 "rtti_to_mlds.m"
    {
#line 1210 "rtti_to_mlds.m"
      mercury__list__condense_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_29_29, ml_backend__rtti_to_mlds__FunctorLists_11, &ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1211 "rtti_to_mlds.m"
    {
#line 1211 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_13);
    }
#line 1212 "rtti_to_mlds.m"
    {
#line 1212 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_14 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_29_29, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[28], ml_backend__rtti_to_mlds__Functors_12);
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0_3));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_13));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1341 "rtti_to_mlds.m"
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_15 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_36_36, ml_backend__rtti_to_mlds__FunctorRttiNames_14);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_54_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_54_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_46));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_53, ml_backend__rtti_to_mlds__RttiId_46, ml_backend__rtti_to_mlds__Initializer_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18);
    }
#line 1207 "rtti_to_mlds.m"
  }
#line 1202 "rtti_to_mlds.m"
}

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1341 "rtti_to_mlds.m"
{
#line 1341 "rtti_to_mlds.m"
  {
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1341 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1341 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1341 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
  }
#line 1341 "rtti_to_mlds.m"
}

#line 1195 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_1(
#line 1195 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1195 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1195 "rtti_to_mlds.m"
{
#line 1195 "rtti_to_mlds.m"
  {
#line 1195 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1195 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1195 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1195 "rtti_to_mlds.m"
    {
#line 1195 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__du_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1195 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1195 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1195 "rtti_to_mlds.m"
  }
#line 1195 "rtti_to_mlds.m"
}

#line 1187 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(
#line 1187 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_6,
#line 1187 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1187 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1187 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 1187 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 1187 "rtti_to_mlds.m"
{
#line 1192 "rtti_to_mlds.m"
  {
#line 1192 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_23_23 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0;
#line 1192 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 0)));
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagTable_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 1)));
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 2)));
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SectagFunctors_14;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_15;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_16;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_17;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_40;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_47;
#line 1192 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1193 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___SectagLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 0)));
#line 1193 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds___NumSharers_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_9, (MR_Integer) 1)));

#line 1194 "rtti_to_mlds.m"
    {
#line 1194 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_23_23, ml_backend__rtti_to_mlds__SectagMap_13, &ml_backend__rtti_to_mlds__SectagFunctors_14);
    }
#line 1195 "rtti_to_mlds.m"
    {
#line 1195 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_15 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_23_23, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[26], ml_backend__rtti_to_mlds__SectagFunctors_14);
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0_2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_6));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_30_30, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1341 "rtti_to_mlds.m"
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_16 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_30_30, ml_backend__rtti_to_mlds__FunctorRttiNames_15);
    }
#line 1198 "rtti_to_mlds.m"
    {
#line 1198 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1198 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1198 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_8));
#line 1198 "rtti_to_mlds.m"
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_17));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_40));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_47, ml_backend__rtti_to_mlds__RttiId_40, ml_backend__rtti_to_mlds__Initializer_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
    }
#line 1192 "rtti_to_mlds.m"
  }
#line 1187 "rtti_to_mlds.m"
}

#line 1174 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1(
#line 1174 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg)
#line 1174 "rtti_to_mlds.m"
{
#line 1174 "rtti_to_mlds.m"
  {
#line 1174 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1174 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 1174 "rtti_to_mlds.m"
    {
#line 1174 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__gen_du_ptag_ordered_table_body__1174__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))));
    }
#line 1174 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1174 "rtti_to_mlds.m"
  }
#line 1174 "rtti_to_mlds.m"
}

#line 1167 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(
#line 1167 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleName_1,
#line 1167 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_2,
#line 1167 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__HeadVar__3_3,
#line 1167 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__CurPtag_4)
#line 1167 "rtti_to_mlds.m"
{
#line 1170 "rtti_to_mlds.m"
  {
#line 1170 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1170 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__HeadVar__5_5;

#line 1170 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1170 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1170 "rtti_to_mlds.m"
    else
#line 1173 "rtti_to_mlds.m"
      {
#line 1173 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Ptag_11;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SectagTable_12;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__PtagTail_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 1)));
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_15;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializers_16;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SectagLocn_17;
#line 1173 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__NumSharers_18;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_20;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_21;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__3_3, (MR_Integer) 0)));
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1173 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 1173 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__V_37_37;
#line 1173 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__Name_41;
#line 1175 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds___SectagMap_19;

#line 1172 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Ptag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, (MR_Integer) 0)));
#line 1172 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SectagTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, (MR_Integer) 1)));
#line 1174 "rtti_to_mlds.m"
        {
#line 1174 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1174 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_6[9]));
#line 1174 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0_1));
#line 1174 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1174 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__CurPtag_4));
#line 1174 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1174 "rtti_to_mlds.m"
        }
#line 1174 "rtti_to_mlds.m"
        {
#line 1174 "rtti_to_mlds.m"
          mercury__require__expect_4_p_0(ml_backend__rtti_to_mlds__V_23_23, (MR_String) "ml_backend.rtti_to_mlds", (MR_String) "function \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table_body\'/4", (MR_String) "ptag mismatch");
        }
#line 1175 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SectagLocn_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 0)));
#line 1175 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__NumSharers_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 1)));
#line 1175 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds___SectagMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__SectagTable_12, (MR_Integer) 2)));
#line 1176 "rtti_to_mlds.m"
        {
#line 1176 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1176 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1176 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1176 "rtti_to_mlds.m"
        }
#line 1177 "rtti_to_mlds.m"
        {
#line 1177 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_2));
#line 1177 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_20));
#line 1177 "rtti_to_mlds.m"
        }
#line 1178 "rtti_to_mlds.m"
        {
#line 1178 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_21));
#line 1178 "rtti_to_mlds.m"
        }
#line 1178 "rtti_to_mlds.m"
        {
#line 1178 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1178 "rtti_to_mlds.m"
        }
#line 1179 "rtti_to_mlds.m"
        {
#line 1179 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSharers_18);
        }
#line 1732 "rtti_to_mlds.m"
        {
#line 1732 "rtti_to_mlds.m"
          backend_libs__rtti__sectag_locn_to_string_2_p_0(ml_backend__rtti_to_mlds__SectagLocn_17, &ml_backend__rtti_to_mlds__Name_41);
        }
#line 1731 "rtti_to_mlds.m"
        {
#line 1731 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_32_32 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_41);
        }
#line 1182 "rtti_to_mlds.m"
        {
#line 1182 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1182 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1182 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ptag_11));
#line 1182 "rtti_to_mlds.m"
        }
#line 1181 "rtti_to_mlds.m"
        {
#line 1181 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_2, ml_backend__rtti_to_mlds__V_35_35);
        }
#line 1183 "rtti_to_mlds.m"
        {
#line 1183 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1183 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1183 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1183 "rtti_to_mlds.m"
        }
#line 1180 "rtti_to_mlds.m"
        {
#line 1180 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1180 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 1180 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1180 "rtti_to_mlds.m"
        }
#line 1179 "rtti_to_mlds.m"
        {
#line 1179 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1179 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_29_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1179 "rtti_to_mlds.m"
        }
#line 1178 "rtti_to_mlds.m"
        {
#line 1178 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1178 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1178 "rtti_to_mlds.m"
        }
#line 1185 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_37_37 = (ml_backend__rtti_to_mlds__CurPtag_4 + (MR_Integer) 1);
#line 1184 "rtti_to_mlds.m"
        {
#line 1184 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializers_16 = ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(ml_backend__rtti_to_mlds__ModuleName_1, ml_backend__rtti_to_mlds__RttiTypeCtor_2, ml_backend__rtti_to_mlds__PtagTail_13, ml_backend__rtti_to_mlds__V_37_37);
        }
#line 1173 "rtti_to_mlds.m"
        {
#line 1173 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__5_5, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializer_15));
#line 1173 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__HeadVar__5_5, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializers_16));
#line 1173 "rtti_to_mlds.m"
        }
#line 1173 "rtti_to_mlds.m"
      }
#line 1170 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__HeadVar__5_5;
#line 1170 "rtti_to_mlds.m"
  }
#line 1167 "rtti_to_mlds.m"
}

#line 1131 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1(
#line 1131 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1131 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1131 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1131 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1131 "rtti_to_mlds.m"
{
#line 1131 "rtti_to_mlds.m"
  {
#line 1131 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1131 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19;

#line 1131 "rtti_to_mlds.m"
    {
#line 1131 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_stag_ordered_table_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19);
    }
#line 1131 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_19));
#line 1131 "rtti_to_mlds.m"
  }
#line 1131 "rtti_to_mlds.m"
}

#line 1124 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(
#line 1124 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1124 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1124 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__PtagMap_8,
#line 1124 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21,
#line 1124 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22)
#line 1124 "rtti_to_mlds.m"
{
#line 1128 "rtti_to_mlds.m"
  {
#line 1128 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_10;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagList_11;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagInitPrefix_12;
#line 1128 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__FirstPtag_13;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PtagInitializers_18;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_64;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_71;
#line 1128 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_72_72;
#line 1131 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24;

#line 1129 "rtti_to_mlds.m"
    {
#line 1129 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_10);
    }
#line 1130 "rtti_to_mlds.m"
    {
#line 1130 "rtti_to_mlds.m"
      mercury__map__to_assoc_list_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_sectag_table_0, ml_backend__rtti_to_mlds__PtagMap_8, &ml_backend__rtti_to_mlds__PtagList_11);
    }
#line 1131 "rtti_to_mlds.m"
    {
#line 1131 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[6]));
#line 1131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0_1));
#line 1131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_10));
#line 1131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_23_23, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1131 "rtti_to_mlds.m"
    }
#line 1131 "rtti_to_mlds.m"
    {
#line 1131 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0((MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[1], (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_23_23, ml_backend__rtti_to_mlds__PtagList_11, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_21)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24);
    }
#line 1131 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_24_24);
#line 1137 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__PtagList_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1134 "rtti_to_mlds.m"
      {
#line 1135 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1136 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FirstPtag_13 = (MR_Integer) 0;
#line 1134 "rtti_to_mlds.m"
      }
#line 1137 "rtti_to_mlds.m"
    else
#line 1138 "rtti_to_mlds.m"
      {
#line 1138 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagList_11, (MR_Integer) 0)));
#line 1138 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagList_11, (MR_Integer) 1)));
#line 1138 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_14_14;

#line 1138 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__FirstPtag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, (MR_Integer) 0)));
#line 1138 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, (MR_Integer) 1)));
#line 1139 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__FirstPtag_13 == (MR_Integer) 0);
#line 1142 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 1140 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1142 "rtti_to_mlds.m"
        else
#line 1156 "rtti_to_mlds.m"
          {
#line 1142 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__FirstPtag_13 == (MR_Integer) 1);
#line 1156 "rtti_to_mlds.m"
            if (ml_backend__rtti_to_mlds__succeeded)
#line 1144 "rtti_to_mlds.m"
              {
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__RttiElemId_17;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 1144 "rtti_to_mlds.m"
                MR_Word ml_backend__rtti_to_mlds__V_40_40;

#line 1145 "rtti_to_mlds.m"
                {
#line 1145 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__RttiElemId_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1145 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiElemId_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1145 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiElemId_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[12])));
#line 1145 "rtti_to_mlds.m"
                }
#line 1147 "rtti_to_mlds.m"
                {
#line 1147 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiElemId_17));
#line 1147 "rtti_to_mlds.m"
                }
#line 1147 "rtti_to_mlds.m"
                {
#line 1147 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1147 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1147 "rtti_to_mlds.m"
                }
#line 1148 "rtti_to_mlds.m"
                {
#line 1148 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0((MR_Integer) 0);
                }
#line 1149 "rtti_to_mlds.m"
                {
#line 1149 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_34_34 = ml_backend__ml_util__gen_init_builtin_const_1_f_0((MR_String) "MR_SECTAG_VARIABLE");
                }
#line 1152 "rtti_to_mlds.m"
                {
#line 1152 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1152 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1152 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[13])));
#line 1152 "rtti_to_mlds.m"
                }
#line 1151 "rtti_to_mlds.m"
                {
#line 1151 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1151 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_40_40));
#line 1151 "rtti_to_mlds.m"
                }
#line 1151 "rtti_to_mlds.m"
                {
#line 1151 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1151 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_39_39));
#line 1151 "rtti_to_mlds.m"
                }
#line 1150 "rtti_to_mlds.m"
                {
#line 1150 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_37_37 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_38_38);
                }
#line 1153 "rtti_to_mlds.m"
                {
#line 1153 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_37_37));
#line 1153 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1153 "rtti_to_mlds.m"
                }
#line 1149 "rtti_to_mlds.m"
                {
#line 1149 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 1149 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 1149 "rtti_to_mlds.m"
                }
#line 1148 "rtti_to_mlds.m"
                {
#line 1148 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1148 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 1148 "rtti_to_mlds.m"
                }
#line 1147 "rtti_to_mlds.m"
                {
#line 1147 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1147 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1147 "rtti_to_mlds.m"
                }
#line 1154 "rtti_to_mlds.m"
                {
#line 1154 "rtti_to_mlds.m"
                  ml_backend__rtti_to_mlds__PtagInitPrefix_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagInitPrefix_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1154 "rtti_to_mlds.m"
                  MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__PtagInitPrefix_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1154 "rtti_to_mlds.m"
                }
#line 1144 "rtti_to_mlds.m"
              }
#line 1156 "rtti_to_mlds.m"
            else
#line 1157 "rtti_to_mlds.m"
              {
#line 1157 "rtti_to_mlds.m"
                {
#line 1157 "rtti_to_mlds.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_ptag_ordered_table\'/5", (MR_String) "bad ptag list");
#line 1157 "rtti_to_mlds.m"
                  return;
                }
#line 1157 "rtti_to_mlds.m"
              }
#line 1156 "rtti_to_mlds.m"
          }
#line 1138 "rtti_to_mlds.m"
      }
#line 1160 "rtti_to_mlds.m"
    {
#line 1160 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__PtagInitializers_18 = ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_body_4_f_0(ml_backend__rtti_to_mlds__ModuleName_10, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__PtagList_11, ml_backend__rtti_to_mlds__FirstPtag_13);
    }
#line 1163 "rtti_to_mlds.m"
    {
#line 1163 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, ml_backend__rtti_to_mlds__PtagInitPrefix_12, ml_backend__rtti_to_mlds__PtagInitializers_18);
    }
#line 1163 "rtti_to_mlds.m"
    {
#line 1163 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 1163 "rtti_to_mlds.m"
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_72_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_72_72, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_64));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_72_72));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_71, ml_backend__rtti_to_mlds__RttiId_64, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_24_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_22);
    }
#line 1128 "rtti_to_mlds.m"
  }
#line 1124 "rtti_to_mlds.m"
}

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1341 "rtti_to_mlds.m"
{
#line 1341 "rtti_to_mlds.m"
  {
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1341 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1341 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1341 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
  }
#line 1341 "rtti_to_mlds.m"
}

#line 1117 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_1(
#line 1117 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1117 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1117 "rtti_to_mlds.m"
{
#line 1117 "rtti_to_mlds.m"
  {
#line 1117 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1117 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1117 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1117 "rtti_to_mlds.m"
    {
#line 1117 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1117 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1117 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1117 "rtti_to_mlds.m"
  }
#line 1117 "rtti_to_mlds.m"
}

#line 1109 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(
#line 1109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_8,
#line 1109 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1109 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1109 "rtti_to_mlds.m"
{
#line 1114 "rtti_to_mlds.m"
  {
#line 1114 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1114 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1115 "rtti_to_mlds.m"
    {
#line 1115 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__ForeignEnumByName_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1116 "rtti_to_mlds.m"
    {
#line 1116 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1117 "rtti_to_mlds.m"
    {
#line 1117 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[25], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0_2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1341 "rtti_to_mlds.m"
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
    }
#line 1114 "rtti_to_mlds.m"
  }
#line 1109 "rtti_to_mlds.m"
}

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1341 "rtti_to_mlds.m"
{
#line 1341 "rtti_to_mlds.m"
  {
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1341 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1341 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1341 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
  }
#line 1341 "rtti_to_mlds.m"
}

#line 1102 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_1(
#line 1102 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1102 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1102 "rtti_to_mlds.m"
{
#line 1102 "rtti_to_mlds.m"
  {
#line 1102 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1102 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1102 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1102 "rtti_to_mlds.m"
    {
#line 1102 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__foreign_enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1102 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1102 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1102 "rtti_to_mlds.m"
  }
#line 1102 "rtti_to_mlds.m"
}

#line 1094 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(
#line 1094 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1094 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1094 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8,
#line 1094 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1094 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1094 "rtti_to_mlds.m"
{
#line 1099 "rtti_to_mlds.m"
  {
#line 1099 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1099 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1100 "rtti_to_mlds.m"
    {
#line 1100 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1101 "rtti_to_mlds.m"
    {
#line 1101 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1102 "rtti_to_mlds.m"
    {
#line 1102 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[24], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0_2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1341 "rtti_to_mlds.m"
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
    }
#line 1099 "rtti_to_mlds.m"
  }
#line 1094 "rtti_to_mlds.m"
}

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1341 "rtti_to_mlds.m"
{
#line 1341 "rtti_to_mlds.m"
  {
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1341 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1341 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1341 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
  }
#line 1341 "rtti_to_mlds.m"
}

#line 1087 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_1(
#line 1087 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1087 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1087 "rtti_to_mlds.m"
{
#line 1087 "rtti_to_mlds.m"
  {
#line 1087 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1087 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1087 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1087 "rtti_to_mlds.m"
    {
#line 1087 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1087 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1087 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1087 "rtti_to_mlds.m"
  }
#line 1087 "rtti_to_mlds.m"
}

#line 1079 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(
#line 1079 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1079 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1079 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByName_8,
#line 1079 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1079 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1079 "rtti_to_mlds.m"
{
#line 1084 "rtti_to_mlds.m"
  {
#line 1084 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1084 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1085 "rtti_to_mlds.m"
    {
#line 1085 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__EnumByName_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1086 "rtti_to_mlds.m"
    {
#line 1086 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1087 "rtti_to_mlds.m"
    {
#line 1087 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[23], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0_2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1341 "rtti_to_mlds.m"
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
    }
#line 1084 "rtti_to_mlds.m"
  }
#line 1079 "rtti_to_mlds.m"
}

#line 1341 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2(
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1341 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1341 "rtti_to_mlds.m"
{
#line 1341 "rtti_to_mlds.m"
  {
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1341 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__4_4;

#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__4_4 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1341 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__4_4));
#line 1341 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1341 "rtti_to_mlds.m"
  }
#line 1341 "rtti_to_mlds.m"
}

#line 1072 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_1(
#line 1072 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1072 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 1072 "rtti_to_mlds.m"
{
#line 1072 "rtti_to_mlds.m"
  {
#line 1072 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1072 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1072 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 1072 "rtti_to_mlds.m"
    {
#line 1072 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__enum_functor_rtti_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 1072 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 1072 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 1072 "rtti_to_mlds.m"
  }
#line 1072 "rtti_to_mlds.m"
}

#line 1064 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(
#line 1064 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 1064 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 1064 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumByValue_8,
#line 1064 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 1064 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 1064 "rtti_to_mlds.m"
{
#line 1069 "rtti_to_mlds.m"
  {
#line 1069 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_20_20 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Functors_10;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_11;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__FunctorRttiNames_12;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_37;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_44;
#line 1069 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 1070 "rtti_to_mlds.m"
    {
#line 1070 "rtti_to_mlds.m"
      mercury__map__values_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, ml_backend__rtti_to_mlds__EnumByValue_8, &ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1071 "rtti_to_mlds.m"
    {
#line 1071 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_11);
    }
#line 1072 "rtti_to_mlds.m"
    {
#line 1072 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__FunctorRttiNames_12 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_20_20, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[22], ml_backend__rtti_to_mlds__Functors_10);
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[3]));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0_2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_11));
#line 1341 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_27_27, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 1341 "rtti_to_mlds.m"
    }
#line 1341 "rtti_to_mlds.m"
    {
#line 1341 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_13 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_ctor_rtti_name_0, ml_backend__rtti_to_mlds__V_27_27, ml_backend__rtti_to_mlds__FunctorRttiNames_12);
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_37));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_44, ml_backend__rtti_to_mlds__RttiId_37, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
    }
#line 1069 "rtti_to_mlds.m"
  }
#line 1064 "rtti_to_mlds.m"
}

#line 1026 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_locn_5_p_0(
#line 1026 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 1026 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ArgInfo_7,
#line 1026 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__ArgLocnInitializer_8,
#line 1026 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__PrevOffset_9,
#line 1026 "rtti_to_mlds.m"
  MR_Integer * ml_backend__rtti_to_mlds__NextPrevOffset_10)
#line 1026 "rtti_to_mlds.m"
{
#line 1030 "rtti_to_mlds.m"
  {
#line 1030 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgWidth_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 2)));
#line 1030 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1030 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Shift_13;
#line 1030 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Bits_14;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 1030 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 0)));
#line 1031 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ArgInfo_7, (MR_Integer) 1)));

#line 1038 "rtti_to_mlds.m"
#line 1038 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__ArgWidth_11)) {
#line 1038 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1038 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 1038 "rtti_to_mlds.m"
#line 1038 "rtti_to_mlds.m"
        switch (MR_unmkbody(ml_backend__rtti_to_mlds__ArgWidth_11)) {
#line 1038 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1038 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 1033 "rtti_to_mlds.m"
            {
#line 1034 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1035 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1036 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Bits_14 = (MR_Integer) 0;
#line 1037 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1033 "rtti_to_mlds.m"
            }
#line 1038 "rtti_to_mlds.m"
            break;
#line 1038 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 1039 "rtti_to_mlds.m"
            {
#line 1040 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1041 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1042 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__Bits_14 = (MR_Integer) -1;
#line 1043 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__NextPrevOffset_10 = (ml_backend__rtti_to_mlds__FieldOffset_12 + (MR_Integer) 1);
#line 1039 "rtti_to_mlds.m"
            }
#line 1038 "rtti_to_mlds.m"
            break;
#line 1038 "rtti_to_mlds.m"
        }
#line 1038 "rtti_to_mlds.m"
        break;
#line 1038 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 1045 "rtti_to_mlds.m"
        {
#line 1045 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__Mask_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 0)));
#line 1045 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__V_19_19;

#line 1046 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__FieldOffset_12 = (ml_backend__rtti_to_mlds__PrevOffset_9 + (MR_Integer) 1);
#line 1047 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Shift_13 = (MR_Integer) 0;
#line 1048 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_19_19 = (ml_backend__rtti_to_mlds__Mask_15 + (MR_Integer) 1);
#line 1048 "rtti_to_mlds.m"
          {
#line 1048 "rtti_to_mlds.m"
            mercury__int__log2_2_p_0(ml_backend__rtti_to_mlds__V_19_19, &ml_backend__rtti_to_mlds__Bits_14);
          }
#line 1049 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1045 "rtti_to_mlds.m"
        }
#line 1038 "rtti_to_mlds.m"
        break;
#line 1038 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 1051 "rtti_to_mlds.m"
        {
#line 1051 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__V_16_16;
#line 1051 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__Mask_33;

#line 1051 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Shift_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 0)));
#line 1051 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Mask_33 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__ArgWidth_11, (MR_Integer) 1)));
#line 1052 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__FieldOffset_12 = ml_backend__rtti_to_mlds__PrevOffset_9;
#line 1053 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_16_16 = (ml_backend__rtti_to_mlds__Mask_33 + (MR_Integer) 1);
#line 1053 "rtti_to_mlds.m"
          {
#line 1053 "rtti_to_mlds.m"
            mercury__int__log2_2_p_0(ml_backend__rtti_to_mlds__V_16_16, &ml_backend__rtti_to_mlds__Bits_14);
          }
#line 1054 "rtti_to_mlds.m"
          *ml_backend__rtti_to_mlds__NextPrevOffset_10 = ml_backend__rtti_to_mlds__FieldOffset_12;
#line 1051 "rtti_to_mlds.m"
        }
#line 1038 "rtti_to_mlds.m"
        break;
#line 1038 "rtti_to_mlds.m"
    }
#line 1056 "rtti_to_mlds.m"
    {
#line 1056 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_6));
#line 1056 "rtti_to_mlds.m"
    }
#line 1056 "rtti_to_mlds.m"
    {
#line 1056 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1056 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 1056 "rtti_to_mlds.m"
    }
#line 1057 "rtti_to_mlds.m"
    {
#line 1057 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__FieldOffset_12);
    }
#line 1058 "rtti_to_mlds.m"
    {
#line 1058 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_29_29 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Shift_13);
    }
#line 1059 "rtti_to_mlds.m"
    {
#line 1059 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Bits_14);
    }
#line 1060 "rtti_to_mlds.m"
    {
#line 1060 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 1060 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1060 "rtti_to_mlds.m"
    }
#line 1058 "rtti_to_mlds.m"
    {
#line 1058 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 1058 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 1058 "rtti_to_mlds.m"
    }
#line 1057 "rtti_to_mlds.m"
    {
#line 1057 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 1057 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 1057 "rtti_to_mlds.m"
    }
#line 1056 "rtti_to_mlds.m"
    {
#line 1056 "rtti_to_mlds.m"
      MR_Word base;
#line 1056 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1056 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__ArgLocnInitializer_8 = base;
#line 1056 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 1056 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 1056 "rtti_to_mlds.m"
    }
#line 1030 "rtti_to_mlds.m"
  }
#line 1026 "rtti_to_mlds.m"
}

#line 980 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0_1(
#line 980 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 980 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 980 "rtti_to_mlds.m"
{
#line 980 "rtti_to_mlds.m"
  {
#line 980 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 980 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 980 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 980 "rtti_to_mlds.m"
    {
#line 980 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_or_self_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 980 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 980 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 980 "rtti_to_mlds.m"
  }
#line 980 "rtti_to_mlds.m"
}

#line 975 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_field_types_6_p_0(
#line 975 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 975 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 975 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 975 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_10,
#line 975 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 975 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 975 "rtti_to_mlds.m"
{
#line 979 "rtti_to_mlds.m"
  {
#line 979 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 979 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_12;
#line 979 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_13;
#line 979 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_14;
#line 979 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18;
#line 979 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_30;
#line 979 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_37;
#line 979 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;

#line 980 "rtti_to_mlds.m"
    {
#line 980 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_12 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[21], ml_backend__rtti_to_mlds__Types_10);
    }
#line 982 "rtti_to_mlds.m"
    {
#line 982 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__TypeRttiDatas_12, &ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18);
    }
#line 984 "rtti_to_mlds.m"
    {
#line 984 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 984 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 984 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 984 "rtti_to_mlds.m"
    }
#line 100 "rtti_to_mlds.m"
    {
#line 100 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 100 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_14));
#line 100 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_38_38, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_30));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_37, ml_backend__rtti_to_mlds__RttiId_30, ml_backend__rtti_to_mlds__Initializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_18_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
    }
#line 979 "rtti_to_mlds.m"
  }
#line 975 "rtti_to_mlds.m"
}

#line 959 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3(
#line 959 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 959 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 959 "rtti_to_mlds.m"
{
#line 959 "rtti_to_mlds.m"
  {
#line 959 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 959 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 959 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_Initializer_8;

#line 959 "rtti_to_mlds.m"
    {
#line 959 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 959 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_Initializer_8));
#line 959 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 959 "rtti_to_mlds.m"
  }
#line 959 "rtti_to_mlds.m"
}

#line 951 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2(
#line 951 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 951 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 951 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 951 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 951 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 951 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 951 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 951 "rtti_to_mlds.m"
{
#line 951 "rtti_to_mlds.m"
  {
#line 951 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 951 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_RttiId_12;
#line 951 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25;
#line 951 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27;

#line 951 "rtti_to_mlds.m"
    {
#line 951 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv3_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27);
    }
#line 951 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_RttiId_12));
#line 951 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25));
#line 951 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27));
#line 951 "rtti_to_mlds.m"
  }
#line 951 "rtti_to_mlds.m"
}

#line 952 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1(
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 952 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 952 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 952 "rtti_to_mlds.m"
{
#line 952 "rtti_to_mlds.m"
  {
#line 952 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 952 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_RttiId_10;

#line 952 "rtti_to_mlds.m"
    {
#line 952 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_RttiId_10);
    }
#line 952 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_RttiId_10));
#line 952 "rtti_to_mlds.m"
  }
#line 952 "rtti_to_mlds.m"
}

#line 932 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(
#line 932 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 932 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_8,
#line 932 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_9,
#line 932 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistInfo_10,
#line 932 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30,
#line 932 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31)
#line 932 "rtti_to_mlds.m"
{
#line 935 "rtti_to_mlds.m"
  {
#line 935 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_60_60;
#line 935 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Plain_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 0)));
#line 935 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__InTci_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 1)));
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 2)));
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Locns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistInfo_10, (MR_Integer) 3)));
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_16;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_17;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_18;
#line 935 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Tci_19;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ConstrInitializer_20;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_29;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 935 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_57_57;

#line 937 "rtti_to_mlds.m"
    {
#line 937 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_16);
    }
#line 938 "rtti_to_mlds.m"
    {
#line 938 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 938 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 938 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 938 "rtti_to_mlds.m"
    }
#line 939 "rtti_to_mlds.m"
    {
#line 939 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 939 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_17));
#line 939 "rtti_to_mlds.m"
    }
#line 11231 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_60_60 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0;
#line 940 "rtti_to_mlds.m"
    {
#line 940 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_60_60, ml_backend__rtti_to_mlds__Constraints_14, &ml_backend__rtti_to_mlds__Tci_19);
    }
#line 946 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Constraints_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 942 "rtti_to_mlds.m"
      {
#line 942 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 942 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 942 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 942 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_44_44;

#line 945 "rtti_to_mlds.m"
        {
#line 945 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 945 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 945 "rtti_to_mlds.m"
        }
#line 944 "rtti_to_mlds.m"
        {
#line 944 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 944 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 944 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 944 "rtti_to_mlds.m"
        }
#line 944 "rtti_to_mlds.m"
        {
#line 944 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 944 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_42_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 944 "rtti_to_mlds.m"
        }
#line 944 "rtti_to_mlds.m"
        {
#line 944 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 944 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 944 "rtti_to_mlds.m"
        }
#line 943 "rtti_to_mlds.m"
        {
#line 943 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ConstrInitializer_20 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_41_41);
        }
#line 942 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30;
#line 942 "rtti_to_mlds.m"
      }
#line 946 "rtti_to_mlds.m"
    else
#line 947 "rtti_to_mlds.m"
      {
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_70_70;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrIds_23;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ElementType_27;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_36_36;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_39_39;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_81;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_88;
#line 947 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 950 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 950 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv5_V_24_24;
#line 950 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35;

#line 949 "rtti_to_mlds.m"
        {
#line 949 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 949 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 949 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 949 "rtti_to_mlds.m"
        }
#line 948 "rtti_to_mlds.m"
        {
#line 948 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ConstrInitializer_20 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25);
        }
#line 952 "rtti_to_mlds.m"
        {
#line 952 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[5]));
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_1));
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 952 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_36_36, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 952 "rtti_to_mlds.m"
        }
#line 951 "rtti_to_mlds.m"
        {
#line 951 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 951 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 951 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_2));
#line 951 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 951 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 951 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_33_33, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_36_36));
#line 951 "rtti_to_mlds.m"
        }
#line 953 "rtti_to_mlds.m"
        {
#line 953 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 11389 "ml_backend.rtti_to_mlds.c"
        ml_backend__rtti_to_mlds__TypeCtorInfo_70_70 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 950 "rtti_to_mlds.m"
        {
#line 950 "rtti_to_mlds.m"
          mercury__list__map_foldl2_7_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_60_60, ml_backend__rtti_to_mlds__TypeCtorInfo_70_70, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_33_33, ml_backend__rtti_to_mlds__Constraints_14, &ml_backend__rtti_to_mlds__TCConstrIds_23, ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34)), &ml_backend__rtti_to_mlds__conv5_V_24_24, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_30)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35);
        }
#line 950 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_V_24_24);
#line 950 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_35_35);
#line 955 "rtti_to_mlds.m"
        {
#line 955 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 955 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_8));
#line 955 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_81, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCConstrArrayRttiName_25));
#line 955 "rtti_to_mlds.m"
        }
#line 957 "rtti_to_mlds.m"
        {
#line 957 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 957 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_38_38, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_81));
#line 957 "rtti_to_mlds.m"
        }
#line 957 "rtti_to_mlds.m"
        {
#line 957 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ElementType_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 957 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38));
#line 957 "rtti_to_mlds.m"
        }
#line 959 "rtti_to_mlds.m"
        {
#line 959 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 959 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 959 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_exist_info_6_p_0_3));
#line 959 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 959 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_27));
#line 959 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_39_39, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_16));
#line 959 "rtti_to_mlds.m"
        }
#line 958 "rtti_to_mlds.m"
        {
#line 958 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_70_70, ml_backend__rtti_to_mlds__V_39_39, ml_backend__rtti_to_mlds__TCConstrIds_23);
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_89_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_89_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_81));
#line 107 "rtti_to_mlds.m"
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 107 "rtti_to_mlds.m"
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_88, ml_backend__rtti_to_mlds__RttiId_81, ml_backend__rtti_to_mlds__TCConstrArrayInitializer_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40);
        }
#line 947 "rtti_to_mlds.m"
      }
#line 963 "rtti_to_mlds.m"
    {
#line 963 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_120_105_115_116_95_108_111_99_110_115_95_97_114_114_97_121_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__Ordinal_9, ml_backend__rtti_to_mlds__Locns_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_40_40, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45);
    }
#line 965 "rtti_to_mlds.m"
    {
#line 965 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 965 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_18));
#line 965 "rtti_to_mlds.m"
    }
#line 965 "rtti_to_mlds.m"
    {
#line 965 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 965 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 965 "rtti_to_mlds.m"
    }
#line 966 "rtti_to_mlds.m"
    {
#line 966 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Plain_12);
    }
#line 967 "rtti_to_mlds.m"
    {
#line 967 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_51_51 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__InTci_13);
    }
#line 968 "rtti_to_mlds.m"
    {
#line 968 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_53_53 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Tci_19);
    }
#line 970 "rtti_to_mlds.m"
    {
#line 970 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 970 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_9));
#line 970 "rtti_to_mlds.m"
    }
#line 969 "rtti_to_mlds.m"
    {
#line 969 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_55_55 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_8, ml_backend__rtti_to_mlds__V_56_56);
    }
#line 972 "rtti_to_mlds.m"
    {
#line 972 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ConstrInitializer_20));
#line 972 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 972 "rtti_to_mlds.m"
    }
#line 970 "rtti_to_mlds.m"
    {
#line 970 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 970 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_54_54, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 970 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_54_54, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_57_57));
#line 970 "rtti_to_mlds.m"
    }
#line 968 "rtti_to_mlds.m"
    {
#line 968 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 968 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_52_52, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 968 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_52_52, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 968 "rtti_to_mlds.m"
    }
#line 967 "rtti_to_mlds.m"
    {
#line 967 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 967 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 967 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 967 "rtti_to_mlds.m"
    }
#line 966 "rtti_to_mlds.m"
    {
#line 966 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 966 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 966 "rtti_to_mlds.m"
    }
#line 965 "rtti_to_mlds.m"
    {
#line 965 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_29 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 965 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 965 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_29, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 965 "rtti_to_mlds.m"
    }
#line 973 "rtti_to_mlds.m"
    {
#line 973 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__RttiId_18, ml_backend__rtti_to_mlds__Initializer_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_45_45, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_31);
    }
#line 935 "rtti_to_mlds.m"
  }
#line 932 "rtti_to_mlds.m"
}

#line 925 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_exist_tc_constr_id_5_p_0(
#line 925 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_6,
#line 925 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Ordinal_7,
#line 925 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 925 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 925 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10)
#line 925 "rtti_to_mlds.m"
{
#line 928 "rtti_to_mlds.m"
  {
#line 928 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 928 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_11;

#line 929 "rtti_to_mlds.m"
    {
#line 929 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 929 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_7));
#line 929 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_8));
#line 929 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiName_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_9));
#line 929 "rtti_to_mlds.m"
    }
#line 930 "rtti_to_mlds.m"
    {
#line 930 "rtti_to_mlds.m"
      MR_Word base;
#line 930 "rtti_to_mlds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 930 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_10 = base;
#line 930 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_6));
#line 930 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_11));
#line 930 "rtti_to_mlds.m"
    }
#line 928 "rtti_to_mlds.m"
  }
#line 925 "rtti_to_mlds.m"
}

#line 916 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0_1(
#line 916 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 916 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 916 "rtti_to_mlds.m"
{
#line 916 "rtti_to_mlds.m"
  {
#line 916 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 916 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 916 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_HeadVar__2_2;

#line 916 "rtti_to_mlds.m"
    {
#line 916 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv2_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 916 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_HeadVar__2_2));
#line 916 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 916 "rtti_to_mlds.m"
  }
#line 916 "rtti_to_mlds.m"
}

#line 903 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MakeRttiId_10,
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Constraint_11,
#line 903 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_12,
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24,
#line 903 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25,
#line 903 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26,
#line 903 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27)
#line 903 "rtti_to_mlds.m"
{
#line 909 "rtti_to_mlds.m"
  {
#line 909 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_38_38 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Constraint_11, (MR_Integer) 0)));
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Types_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Constraint_11, (MR_Integer) 1)));
#line 909 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Arity_17;
#line 909 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__TCNum_18;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_21;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PTIInitializers_22;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_23;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_47;
#line 909 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 913 "rtti_to_mlds.m"
    void MR_CALL (* ml_backend__rtti_to_mlds__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 913 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_RttiId_12;
#line 915 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_20;

#line 911 "rtti_to_mlds.m"
    {
#line 911 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_38_38, ml_backend__rtti_to_mlds__Types_16, &ml_backend__rtti_to_mlds__Arity_17);
    }
#line 912 "rtti_to_mlds.m"
    {
#line 912 "rtti_to_mlds.m"
      mercury__counter__allocate_3_p_0(&ml_backend__rtti_to_mlds__TCNum_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_0_24, ml_backend__rtti_to_mlds__STATE_VARIABLE_Counter_25);
    }
#line 913 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MakeRttiId_10, (MR_Integer) 1)));
#line 913 "rtti_to_mlds.m"
    {
#line 913 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__func_0(((MR_Box) ml_backend__rtti_to_mlds__MakeRttiId_10), ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_18)), ((MR_Box) (ml_backend__rtti_to_mlds__Arity_17)), &ml_backend__rtti_to_mlds__conv1_RttiId_12);
    }
#line 913 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__RttiId_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_RttiId_12);
#line 915 "rtti_to_mlds.m"
    {
#line 915 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, &ml_backend__rtti_to_mlds__ModuleName_20);
    }
#line 916 "rtti_to_mlds.m"
    {
#line 916 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_21 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_38_38, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[20], ml_backend__rtti_to_mlds__Types_16);
    }
#line 917 "rtti_to_mlds.m"
    {
#line 917 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__TypeRttiDatas_21, &ml_backend__rtti_to_mlds__PTIInitializers_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_26, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30);
    }
#line 919 "rtti_to_mlds.m"
    {
#line 919 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 919 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (*ml_backend__rtti_to_mlds__RttiId_12));
#line 919 "rtti_to_mlds.m"
    }
#line 919 "rtti_to_mlds.m"
    {
#line 919 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 919 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_31_31, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 919 "rtti_to_mlds.m"
    }
#line 920 "rtti_to_mlds.m"
    {
#line 920 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_34_34 = ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_103_101_110_95_105_110_105_116_95_116_99_95_114_116_116_105_95_110_97_109_101_95_95_91_49_93_95_48_3_f_0(ml_backend__rtti_to_mlds__TCName_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
    }
#line 922 "rtti_to_mlds.m"
    {
#line 922 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PTIInitializers_22));
#line 922 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 922 "rtti_to_mlds.m"
    }
#line 920 "rtti_to_mlds.m"
    {
#line 920 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 920 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_33_33, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 920 "rtti_to_mlds.m"
    }
#line 919 "rtti_to_mlds.m"
    {
#line 919 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 919 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 919 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_48_48, 1) = ((MR_Box) (*ml_backend__rtti_to_mlds__RttiId_12));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_47, *ml_backend__rtti_to_mlds__RttiId_12, ml_backend__rtti_to_mlds__Initializer_23, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_30_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_27);
    }
#line 909 "rtti_to_mlds.m"
  }
#line 903 "rtti_to_mlds.m"
}

#line 876 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_init_exist_locn_2_f_0(
#line 876 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_4,
#line 876 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5)
#line 876 "rtti_to_mlds.m"
{
#line 879 "rtti_to_mlds.m"
  {
#line 879 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 879 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
#line 879 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__SlotInCell_7;
#line 879 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__SlotInTci_8;
#line 879 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_9;
#line 879 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 879 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 879 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 879 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 879 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 879 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;

#line 882 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5)) == (MR_mktag((MR_Integer) 0))))
#line 883 "rtti_to_mlds.m"
      {
#line 883 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInCell_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 0)));
#line 884 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInTci_8 = (MR_Integer) -1;
#line 883 "rtti_to_mlds.m"
      }
#line 882 "rtti_to_mlds.m"
    else
#line 881 "rtti_to_mlds.m"
      {
#line 881 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInCell_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 0)));
#line 881 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__SlotInTci_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__ExistTypeInfoLocn_5, (MR_Integer) 1)));
#line 881 "rtti_to_mlds.m"
      }
#line 886 "rtti_to_mlds.m"
    {
#line 886 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_4));
#line 886 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_9, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 886 "rtti_to_mlds.m"
    }
#line 887 "rtti_to_mlds.m"
    {
#line 887 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_9));
#line 887 "rtti_to_mlds.m"
    }
#line 887 "rtti_to_mlds.m"
    {
#line 887 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 887 "rtti_to_mlds.m"
    }
#line 888 "rtti_to_mlds.m"
    {
#line 888 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__SlotInCell_7);
    }
#line 889 "rtti_to_mlds.m"
    {
#line 889 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__SlotInTci_8);
    }
#line 890 "rtti_to_mlds.m"
    {
#line 890 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_15_15, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 890 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_15_15, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 890 "rtti_to_mlds.m"
    }
#line 888 "rtti_to_mlds.m"
    {
#line 888 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 888 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_14_14));
#line 888 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 888 "rtti_to_mlds.m"
    }
#line 887 "rtti_to_mlds.m"
    {
#line 887 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 887 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 887 "rtti_to_mlds.m"
    }
#line 879 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_6;
#line 879 "rtti_to_mlds.m"
  }
#line 876 "rtti_to_mlds.m"
}

#line 859 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(
#line 859 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 859 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 859 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MaybeResFunctor_8,
#line 859 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12,
#line 859 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13)
#line 859 "rtti_to_mlds.m"
{
#line 866 "rtti_to_mlds.m"
  {
#line 866 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 866 "rtti_to_mlds.m"
    if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8)) == (MR_mktag((MR_Integer) 1))))
#line 870 "rtti_to_mlds.m"
      {
#line 870 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__DuFunctor_11 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8), (MR_Integer) 1);

#line 871 "rtti_to_mlds.m"
        {
#line 871 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__DuFunctor_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
        }
#line 870 "rtti_to_mlds.m"
      }
#line 866 "rtti_to_mlds.m"
    else
#line 866 "rtti_to_mlds.m"
      {
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ResFunctor_10 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__MaybeResFunctor_8), (MR_Integer) 0);
#line 866 "rtti_to_mlds.m"
        MR_String ml_backend__rtti_to_mlds__FunctorName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 0)));
#line 866 "rtti_to_mlds.m"
        MR_Integer ml_backend__rtti_to_mlds__Ordinal_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 1)));
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ReservedAddress_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__ResFunctor_10, (MR_Integer) 2)));
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiName_25;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__RttiId_26;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Initializer_27;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_29_29;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_30_30;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_31_31;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_32_32;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_33_33;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_34_34;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_35_35;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__Name_43;
#line 866 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_44_44;

#line 850 "rtti_to_mlds.m"
        {
#line 850 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiName_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 850 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_23));
#line 850 "rtti_to_mlds.m"
        }
#line 851 "rtti_to_mlds.m"
        {
#line 851 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__RttiId_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 851 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_26, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_25));
#line 851 "rtti_to_mlds.m"
        }
#line 852 "rtti_to_mlds.m"
        {
#line 852 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_29_29, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_26));
#line 852 "rtti_to_mlds.m"
        }
#line 852 "rtti_to_mlds.m"
        {
#line 852 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_28_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_28_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_29_29));
#line 852 "rtti_to_mlds.m"
        }
#line 853 "rtti_to_mlds.m"
        {
#line 853 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_31_31 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_22);
        }
#line 854 "rtti_to_mlds.m"
        {
#line 854 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_33_33 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_23);
        }
#line 855 "rtti_to_mlds.m"
        {
#line 855 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_35_35 = ml_backend__ml_util__gen_init_reserved_address_2_f_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__ReservedAddress_24);
        }
#line 856 "rtti_to_mlds.m"
        {
#line 856 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 856 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_34_34, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_35_35));
#line 856 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "rtti_to_mlds.m"
        }
#line 854 "rtti_to_mlds.m"
        {
#line 854 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_32_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_33_33));
#line 854 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_32_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_34_34));
#line 854 "rtti_to_mlds.m"
        }
#line 853 "rtti_to_mlds.m"
        {
#line 853 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_31_31));
#line 853 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_30_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_32_32));
#line 853 "rtti_to_mlds.m"
        }
#line 852 "rtti_to_mlds.m"
        {
#line 852 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Initializer_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_28_28));
#line 852 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_27, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_30_30));
#line 852 "rtti_to_mlds.m"
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_44_44, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_26));
#line 107 "rtti_to_mlds.m"
        }
#line 107 "rtti_to_mlds.m"
        {
#line 107 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Name_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 107 "rtti_to_mlds.m"
        }
#line 108 "rtti_to_mlds.m"
        {
#line 108 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_43, ml_backend__rtti_to_mlds__RttiId_26, ml_backend__rtti_to_mlds__Initializer_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_12, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_13);
        }
#line 866 "rtti_to_mlds.m"
      }
#line 866 "rtti_to_mlds.m"
  }
#line 859 "rtti_to_mlds.m"
}

#line 755 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_2(
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
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 755 "rtti_to_mlds.m"
    {
#line 755 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__du_arg_info_name_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 755 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 755 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 755 "rtti_to_mlds.m"
  }
#line 755 "rtti_to_mlds.m"
}

#line 754 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_1(
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
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 754 "rtti_to_mlds.m"
    {
#line 754 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__du_arg_info_type_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 754 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 754 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 754 "rtti_to_mlds.m"
  }
#line 754 "rtti_to_mlds.m"
}

#line 756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(
#line 756 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 756 "rtti_to_mlds.m"
{
#line 756 "rtti_to_mlds.m"
  {
#line 756 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 756 "rtti_to_mlds.m"
    MR_builtin_longjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0, 1);
#line 756 "rtti_to_mlds.m"
  }
#line 756 "rtti_to_mlds.m"
}

#line 756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5(
#line 756 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 756 "rtti_to_mlds.m"
{
#line 756 "rtti_to_mlds.m"
  {
#line 756 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 756 "rtti_to_mlds.m"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103 = ((MR_Word) (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103);
#line 756 "rtti_to_mlds.m"
    {
#line 756 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(ml_backend__rtti_to_mlds__env_ptr);
    }
#line 756 "rtti_to_mlds.m"
  }
#line 756 "rtti_to_mlds.m"
}

#line 756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_4(
#line 756 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 756 "rtti_to_mlds.m"
{
#line 756 "rtti_to_mlds.m"
  {
#line 756 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 12303 "ml_backend.rtti_to_mlds.c"
    (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 756 "rtti_to_mlds.m"
    {
#line 756 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = ml_backend__rtti_to_mlds____Unify____maybe__maybe_1_2((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeCtorInfo_104_104, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_103_103);
    }
#line 756 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded)
#line 756 "rtti_to_mlds.m"
      {
#line 756 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_3(ml_backend__rtti_to_mlds__env_ptr);
      }
#line 756 "rtti_to_mlds.m"
  }
#line 756 "rtti_to_mlds.m"
}

#line 756 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(
#line 756 "rtti_to_mlds.m"
  void * ml_backend__rtti_to_mlds__env_ptr_arg)
#line 756 "rtti_to_mlds.m"
{
#line 756 "rtti_to_mlds.m"
  {
#line 756 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s * ml_backend__rtti_to_mlds__env_ptr = (struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s *) ml_backend__rtti_to_mlds__env_ptr_arg;

#line 756 "rtti_to_mlds.m"
    if (MR_builtin_setjmp((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__commit_0) == 0)
#line 756 "rtti_to_mlds.m"
      {
#line 756 "rtti_to_mlds.m"
        {
#line 756 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds__V_19_19;

#line 756 "rtti_to_mlds.m"
          {
#line 756 "rtti_to_mlds.m"
            MR_Word base;
#line 756 "rtti_to_mlds.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 756 "rtti_to_mlds.m"
            (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__V_42_42 = base;
#line 756 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), base, 0) = NULL;
#line 756 "rtti_to_mlds.m"
          }
#line 756 "rtti_to_mlds.m"
          {
#line 756 "rtti_to_mlds.m"
            mercury__list__member_2_p_1((ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100, &(ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__conv2_V_103_103, (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17, ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_5, ml_backend__rtti_to_mlds__env_ptr);
          }
#line 756 "rtti_to_mlds.m"
        }
#line 756 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = MR_FALSE;
#line 756 "rtti_to_mlds.m"
      }
#line 756 "rtti_to_mlds.m"
    else
#line 756 "rtti_to_mlds.m"
      (ml_backend__rtti_to_mlds__env_ptr)->ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded = MR_TRUE;
#line 756 "rtti_to_mlds.m"
  }
#line 756 "rtti_to_mlds.m"
}

#line 748 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(
#line 748 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 748 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 748 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__DuFunctor_8,
#line 748 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38,
#line 748 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39)
#line 748 "rtti_to_mlds.m"
{
#line 748 "rtti_to_mlds.m"
  {
#line 748 "rtti_to_mlds.m"
    struct ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0_s ml_backend__rtti_to_mlds__env;

#line 751 "rtti_to_mlds.m"
    {
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_96_96 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0;
#line 751 "rtti_to_mlds.m"
      MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 0)));
#line 751 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Arity_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 1)));
#line 751 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Ordinal_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 2)));
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Rep_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 3)));
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgInfos_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 4)));
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__MaybeExistInfo_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DuFunctor_8, (MR_Integer) 5)));
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgTypes_16;
#line 751 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__ContainsVarBitVector_20;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ModuleName_21;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgTypeInitializer_24;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgNameInitializer_25;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__HaveArgLocns_26;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ArgLocnsInitializer_27;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__ExistInfoInitializer_29;
#line 751 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Ptag_30;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__SectagAndLocn_31;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Locn_33;
#line 751 "rtti_to_mlds.m"
      MR_Integer ml_backend__rtti_to_mlds__Stag_34;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__RttiName_35;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__RttiId_36;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__Initializer_37;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_76_76;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_78_78;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_81_81;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_82_82;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_90_90;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_91_91;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_92_92;
#line 751 "rtti_to_mlds.m"
      MR_Word ml_backend__rtti_to_mlds__V_93_93;

#line 754 "rtti_to_mlds.m"
      {
#line 754 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ArgTypes_16 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_96_96, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_or_self_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[18], ml_backend__rtti_to_mlds__ArgInfos_14);
      }
#line 12495 "ml_backend.rtti_to_mlds.c"
      (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[4];
#line 755 "rtti_to_mlds.m"
      {
#line 755 "rtti_to_mlds.m"
        (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_96_96, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__TypeInfo_100_100, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[19], ml_backend__rtti_to_mlds__ArgInfos_14);
      }
#line 757 "rtti_to_mlds.m"
      {
#line 757 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__ContainsVarBitVector_20 = backend_libs__type_ctor_info__compute_contains_var_bit_vector_1_f_0(ml_backend__rtti_to_mlds__ArgTypes_16);
      }
#line 758 "rtti_to_mlds.m"
      {
#line 758 "rtti_to_mlds.m"
        hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, &ml_backend__rtti_to_mlds__ModuleName_21);
      }
#line 765 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__ArgInfos_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "rtti_to_mlds.m"
        {
#line 766 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 766 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_44_44;
#line 766 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 769 "rtti_to_mlds.m"
          {
#line 769 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 769 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[8])));
#line 769 "rtti_to_mlds.m"
          }
#line 768 "rtti_to_mlds.m"
          {
#line 768 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 768 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_44_44, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 768 "rtti_to_mlds.m"
          }
#line 768 "rtti_to_mlds.m"
          {
#line 768 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 768 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 768 "rtti_to_mlds.m"
          }
#line 767 "rtti_to_mlds.m"
          {
#line 767 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgTypeInitializer_24 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_43_43);
          }
#line 766 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38;
#line 766 "rtti_to_mlds.m"
        }
#line 765 "rtti_to_mlds.m"
      else
#line 760 "rtti_to_mlds.m"
        {
#line 760 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_49_49;

#line 761 "rtti_to_mlds.m"
          {
#line 761 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_field_types_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ArgTypes_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_38, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48);
          }
#line 764 "rtti_to_mlds.m"
          {
#line 764 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 764 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 764 "rtti_to_mlds.m"
          }
#line 763 "rtti_to_mlds.m"
          {
#line 763 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgTypeInitializer_24 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_49_49);
          }
#line 760 "rtti_to_mlds.m"
        }
#line 756 "rtti_to_mlds.m"
      {
#line 756 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_6(&ml_backend__rtti_to_mlds__env);
      }
#line 12594 "ml_backend.rtti_to_mlds.c"
      if ((ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__succeeded)
#line 12596 "ml_backend.rtti_to_mlds.c"
        {
#line 12598 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_56_56;

#line 773 "rtti_to_mlds.m"
          {
#line 773 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_110_97_109_101_115_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, (ml_backend__rtti_to_mlds__env).ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0_env_0__MaybeArgNames_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55);
          }
#line 776 "rtti_to_mlds.m"
          {
#line 776 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 776 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 776 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_56_56, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 776 "rtti_to_mlds.m"
          }
#line 775 "rtti_to_mlds.m"
          {
#line 775 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgNameInitializer_25 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_56_56);
          }
#line 12621 "ml_backend.rtti_to_mlds.c"
        }
#line 12623 "ml_backend.rtti_to_mlds.c"
      else
#line 12625 "ml_backend.rtti_to_mlds.c"
        {
#line 12627 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 12629 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 12631 "ml_backend.rtti_to_mlds.c"
          MR_Word ml_backend__rtti_to_mlds__V_52_52;

#line 781 "rtti_to_mlds.m"
          {
#line 781 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 781 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_52_52, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 781 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_52_52, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[9])));
#line 781 "rtti_to_mlds.m"
          }
#line 780 "rtti_to_mlds.m"
          {
#line 780 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 780 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 780 "rtti_to_mlds.m"
          }
#line 780 "rtti_to_mlds.m"
          {
#line 780 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 780 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 780 "rtti_to_mlds.m"
          }
#line 779 "rtti_to_mlds.m"
          {
#line 779 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ArgNameInitializer_25 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_50_50);
          }
#line 778 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48_48;
#line 12669 "ml_backend.rtti_to_mlds.c"
        }
#line 783 "rtti_to_mlds.m"
      {
#line 783 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_105_101_108_100_95_108_111_99_110_115_95_95_91_49_93_95_48_7_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ArgInfos_14, &ml_backend__rtti_to_mlds__HaveArgLocns_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57);
      }
#line 789 "rtti_to_mlds.m"
#line 789 "rtti_to_mlds.m"
      switch (ml_backend__rtti_to_mlds__HaveArgLocns_26) {
#line 789 "rtti_to_mlds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 789 "rtti_to_mlds.m"
        case (MR_Integer) 0:
#line 790 "rtti_to_mlds.m"
          {
#line 790 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 790 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 790 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_60_60;

#line 793 "rtti_to_mlds.m"
            {
#line 793 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 793 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 793 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[10])));
#line 793 "rtti_to_mlds.m"
            }
#line 792 "rtti_to_mlds.m"
            {
#line 792 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 792 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 792 "rtti_to_mlds.m"
            }
#line 792 "rtti_to_mlds.m"
            {
#line 792 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 792 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 792 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 792 "rtti_to_mlds.m"
            }
#line 791 "rtti_to_mlds.m"
            {
#line 791 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ArgLocnsInitializer_27 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_58_58);
            }
#line 790 "rtti_to_mlds.m"
          }
#line 789 "rtti_to_mlds.m"
          break;
#line 789 "rtti_to_mlds.m"
        case (MR_Integer) 1:
#line 786 "rtti_to_mlds.m"
          {
#line 786 "rtti_to_mlds.m"
            MR_Word ml_backend__rtti_to_mlds__V_63_63;

#line 788 "rtti_to_mlds.m"
            {
#line 788 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_63_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 788 "rtti_to_mlds.m"
              MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_63_63, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 788 "rtti_to_mlds.m"
            }
#line 787 "rtti_to_mlds.m"
            {
#line 787 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__ArgLocnsInitializer_27 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_63_63);
            }
#line 786 "rtti_to_mlds.m"
          }
#line 789 "rtti_to_mlds.m"
          break;
#line 789 "rtti_to_mlds.m"
      }
#line 801 "rtti_to_mlds.m"
      if ((ml_backend__rtti_to_mlds__MaybeExistInfo_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "rtti_to_mlds.m"
        {
#line 802 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 802 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 802 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_66_66;

#line 805 "rtti_to_mlds.m"
          {
#line 805 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 805 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 805 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__rtti_to_mlds_scalar_common_1[11])));
#line 805 "rtti_to_mlds.m"
          }
#line 804 "rtti_to_mlds.m"
          {
#line 804 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 804 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 804 "rtti_to_mlds.m"
          }
#line 804 "rtti_to_mlds.m"
          {
#line 804 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 804 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 804 "rtti_to_mlds.m"
          }
#line 803 "rtti_to_mlds.m"
          {
#line 803 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ExistInfoInitializer_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__V_64_64);
          }
#line 802 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57;
#line 802 "rtti_to_mlds.m"
        }
#line 801 "rtti_to_mlds.m"
      else
#line 796 "rtti_to_mlds.m"
        {
#line 796 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ExistInfo_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MaybeExistInfo_15, (MR_Integer) 0)));
#line 796 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_70_70;

#line 797 "rtti_to_mlds.m"
          {
#line 797 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_exist_info_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__Ordinal_12, ml_backend__rtti_to_mlds__ExistInfo_28, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_57_57, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69);
          }
#line 800 "rtti_to_mlds.m"
          {
#line 800 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 800 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_70_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 800 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_70_70, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 800 "rtti_to_mlds.m"
          }
#line 799 "rtti_to_mlds.m"
          {
#line 799 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__ExistInfoInitializer_29 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__V_70_70);
          }
#line 796 "rtti_to_mlds.m"
        }
#line 809 "rtti_to_mlds.m"
      if (((MR_tag((MR_Word) ml_backend__rtti_to_mlds__Rep_13)) == (MR_mktag((MR_Integer) 1))))
#line 810 "rtti_to_mlds.m"
        {
#line 811 "rtti_to_mlds.m"
          {
#line 811 "rtti_to_mlds.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_du_functor_desc\'/5", (MR_String) "du_hl_rep");
#line 811 "rtti_to_mlds.m"
            return;
          }
#line 810 "rtti_to_mlds.m"
        }
#line 809 "rtti_to_mlds.m"
      else
#line 808 "rtti_to_mlds.m"
        {
#line 808 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__Ptag_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Rep_13, (MR_Integer) 0)));
#line 808 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SectagAndLocn_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Rep_13, (MR_Integer) 1)));
#line 808 "rtti_to_mlds.m"
        }
#line 817 "rtti_to_mlds.m"
#line 817 "rtti_to_mlds.m"
      switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__SectagAndLocn_31)) {
#line 817 "rtti_to_mlds.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 817 "rtti_to_mlds.m"
        case (MR_Integer) 0:
#line 817 "rtti_to_mlds.m"
#line 817 "rtti_to_mlds.m"
          switch (MR_unmkbody(ml_backend__rtti_to_mlds__SectagAndLocn_31)) {
#line 817 "rtti_to_mlds.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 817 "rtti_to_mlds.m"
            case (MR_Integer) 0:
#line 814 "rtti_to_mlds.m"
              {
#line 815 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 0;
#line 816 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Stag_34 = (MR_Integer) -1;
#line 814 "rtti_to_mlds.m"
              }
#line 817 "rtti_to_mlds.m"
              break;
#line 817 "rtti_to_mlds.m"
            case (MR_Integer) 1:
#line 818 "rtti_to_mlds.m"
              {
#line 819 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 1;
#line 820 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Stag_34 = (MR_Integer) -1;
#line 818 "rtti_to_mlds.m"
              }
#line 817 "rtti_to_mlds.m"
              break;
#line 817 "rtti_to_mlds.m"
          }
#line 817 "rtti_to_mlds.m"
          break;
#line 817 "rtti_to_mlds.m"
        case (MR_Integer) 1:
#line 822 "rtti_to_mlds.m"
          {
#line 822 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SectagAndLocn_31, (MR_Integer) 0)));
#line 823 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 2;
#line 822 "rtti_to_mlds.m"
          }
#line 817 "rtti_to_mlds.m"
          break;
#line 817 "rtti_to_mlds.m"
        case (MR_Integer) 2:
#line 825 "rtti_to_mlds.m"
          {
#line 825 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Stag_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__SectagAndLocn_31, (MR_Integer) 0)));
#line 826 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Locn_33 = (MR_Integer) 3;
#line 825 "rtti_to_mlds.m"
          }
#line 817 "rtti_to_mlds.m"
          break;
#line 817 "rtti_to_mlds.m"
      }
#line 828 "rtti_to_mlds.m"
      {
#line 828 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 828 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_35, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Ordinal_12));
#line 828 "rtti_to_mlds.m"
      }
#line 829 "rtti_to_mlds.m"
      {
#line 829 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__RttiId_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 829 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_35));
#line 829 "rtti_to_mlds.m"
      }
#line 830 "rtti_to_mlds.m"
      {
#line 830 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_36));
#line 830 "rtti_to_mlds.m"
      }
#line 830 "rtti_to_mlds.m"
      {
#line 830 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_74_74, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_75_75));
#line 830 "rtti_to_mlds.m"
      }
#line 831 "rtti_to_mlds.m"
      {
#line 831 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_77_77 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
      }
#line 832 "rtti_to_mlds.m"
      {
#line 832 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_79_79 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Arity_11);
      }
#line 833 "rtti_to_mlds.m"
      {
#line 833 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_81_81 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__ContainsVarBitVector_20);
      }
#line 834 "rtti_to_mlds.m"
      {
#line 834 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_83_83 = ml_backend__rtti_to_mlds__gen_init_sectag_locn_1_f_0(ml_backend__rtti_to_mlds__Locn_33);
      }
#line 835 "rtti_to_mlds.m"
      {
#line 835 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_85_85 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ptag_30);
      }
#line 836 "rtti_to_mlds.m"
      {
#line 836 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_87_87 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Stag_34);
      }
#line 837 "rtti_to_mlds.m"
      {
#line 837 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_89_89 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Ordinal_12);
      }
#line 842 "rtti_to_mlds.m"
      {
#line 842 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_93_93, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ExistInfoInitializer_29));
#line 842 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_93_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 842 "rtti_to_mlds.m"
      }
#line 840 "rtti_to_mlds.m"
      {
#line 840 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_92_92, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgLocnsInitializer_27));
#line 840 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_92_92, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_93_93));
#line 840 "rtti_to_mlds.m"
      }
#line 839 "rtti_to_mlds.m"
      {
#line 839 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgNameInitializer_25));
#line 839 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_92_92));
#line 839 "rtti_to_mlds.m"
      }
#line 838 "rtti_to_mlds.m"
      {
#line 838 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 838 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_90_90, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__ArgTypeInitializer_24));
#line 838 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_90_90, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_91_91));
#line 838 "rtti_to_mlds.m"
      }
#line 837 "rtti_to_mlds.m"
      {
#line 837 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 837 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_90_90));
#line 837 "rtti_to_mlds.m"
      }
#line 836 "rtti_to_mlds.m"
      {
#line 836 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 836 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_86_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 836 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_86_86, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 836 "rtti_to_mlds.m"
      }
#line 835 "rtti_to_mlds.m"
      {
#line 835 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 835 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 835 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_84_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 835 "rtti_to_mlds.m"
      }
#line 834 "rtti_to_mlds.m"
      {
#line 834 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 834 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_82_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 834 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_82_82, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 834 "rtti_to_mlds.m"
      }
#line 833 "rtti_to_mlds.m"
      {
#line 833 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 833 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_81_81));
#line 833 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_80_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_82_82));
#line 833 "rtti_to_mlds.m"
      }
#line 832 "rtti_to_mlds.m"
      {
#line 832 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 832 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_78_78, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_79_79));
#line 832 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_78_78, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_80_80));
#line 832 "rtti_to_mlds.m"
      }
#line 831 "rtti_to_mlds.m"
      {
#line 831 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_76_76, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 831 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_76_76, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_78_78));
#line 831 "rtti_to_mlds.m"
      }
#line 830 "rtti_to_mlds.m"
      {
#line 830 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Initializer_37 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_37, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 830 "rtti_to_mlds.m"
        MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_76_76));
#line 830 "rtti_to_mlds.m"
      }
#line 843 "rtti_to_mlds.m"
      {
#line 843 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__RttiId_36, ml_backend__rtti_to_mlds__Initializer_37, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39);
      }
#line 751 "rtti_to_mlds.m"
    }
#line 748 "rtti_to_mlds.m"
  }
#line 748 "rtti_to_mlds.m"
}

#line 744 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0_1(
#line 744 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 744 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 744 "rtti_to_mlds.m"
{
#line 744 "rtti_to_mlds.m"
  {
#line 744 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 744 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 744 "rtti_to_mlds.m"
    {
#line 744 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 744 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 744 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 744 "rtti_to_mlds.m"
  }
#line 744 "rtti_to_mlds.m"
}

#line 730 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(
#line 730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_6,
#line 730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__NotagFunctorDesc_8,
#line 730 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 730 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 730 "rtti_to_mlds.m"
{
#line 734 "rtti_to_mlds.m"
  {
#line 734 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 734 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__FunctorName_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 0)));
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 1)));
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MaybeArgName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__NotagFunctorDesc_8, (MR_Integer) 2)));
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ArgTypeRttiData_13;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PTIInitializer_14;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_16;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_17;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_21_21;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_23_23;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_25_25;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_26_26;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_28_28;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_40;
#line 734 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_41_41;

#line 736 "rtti_to_mlds.m"
    {
#line 736 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ArgTypeRttiData_13 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ml_backend__rtti_to_mlds__ArgType_11);
    }
#line 737 "rtti_to_mlds.m"
    {
#line 737 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_6, ml_backend__rtti_to_mlds__ArgTypeRttiData_13, &ml_backend__rtti_to_mlds__PTIInitializer_14, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20);
    }
#line 740 "rtti_to_mlds.m"
    {
#line 740 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_7));
#line 740 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiId_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 740 "rtti_to_mlds.m"
    }
#line 741 "rtti_to_mlds.m"
    {
#line 741 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 741 "rtti_to_mlds.m"
    }
#line 741 "rtti_to_mlds.m"
    {
#line 741 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_21_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 741 "rtti_to_mlds.m"
    }
#line 742 "rtti_to_mlds.m"
    {
#line 742 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__FunctorName_10);
    }
#line 744 "rtti_to_mlds.m"
    {
#line 744 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_28_28 = ml_backend__ml_code_util__ml_string_type_0_f_0();
    }
#line 744 "rtti_to_mlds.m"
    {
#line 744 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_27_27 = ml_backend__ml_util__gen_init_maybe_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__V_28_28, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[17], ml_backend__rtti_to_mlds__MaybeArgName_12);
    }
#line 745 "rtti_to_mlds.m"
    {
#line 745 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_27_27));
#line 745 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 745 "rtti_to_mlds.m"
    }
#line 743 "rtti_to_mlds.m"
    {
#line 743 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 743 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_25_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__PTIInitializer_14));
#line 743 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_25_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_26_26));
#line 743 "rtti_to_mlds.m"
    }
#line 742 "rtti_to_mlds.m"
    {
#line 742 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 742 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_23_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_25_25));
#line 742 "rtti_to_mlds.m"
    }
#line 741 "rtti_to_mlds.m"
    {
#line 741 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_21_21));
#line 741 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_23_23));
#line 741 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_16));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_40, ml_backend__rtti_to_mlds__RttiId_16, ml_backend__rtti_to_mlds__Initializer_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_20_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
    }
#line 734 "rtti_to_mlds.m"
  }
#line 730 "rtti_to_mlds.m"
}

#line 714 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_7,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Lang_8,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_9,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctor_10,
#line 714 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 714 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 714 "rtti_to_mlds.m"
{
#line 719 "rtti_to_mlds.m"
  {
#line 719 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 719 "rtti_to_mlds.m"
    {
#line 719 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_102_111_114_101_105_103_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_6_p_0(ml_backend__rtti_to_mlds__Lang_8, ml_backend__rtti_to_mlds__RttiTypeCtor_9, ml_backend__rtti_to_mlds__ForeignEnumFunctor_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
    }
#line 719 "rtti_to_mlds.m"
  }
#line 714 "rtti_to_mlds.m"
}

#line 701 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds___ModuleInfo_6,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_7,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__EnumFunctor_8,
#line 701 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15,
#line 701 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16)
#line 701 "rtti_to_mlds.m"
{
#line 704 "rtti_to_mlds.m"
  {
#line 704 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 704 "rtti_to_mlds.m"
    {
#line 704 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_95_101_110_117_109_95_102_117_110_99_116_111_114_95_100_101_115_99_95_95_91_49_93_95_48_5_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_7, ml_backend__rtti_to_mlds__EnumFunctor_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_15, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_16);
    }
#line 704 "rtti_to_mlds.m"
  }
#line 701 "rtti_to_mlds.m"
}

#line 657 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4(
#line 657 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 657 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 657 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 657 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 657 "rtti_to_mlds.m"
{
#line 657 "rtti_to_mlds.m"
  {
#line 657 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 657 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13;

#line 657 "rtti_to_mlds.m"
    {
#line 657 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_maybe_res_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13);
    }
#line 657 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_13));
#line 657 "rtti_to_mlds.m"
  }
#line 657 "rtti_to_mlds.m"
}

#line 624 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3(
#line 624 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 624 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 624 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 624 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 624 "rtti_to_mlds.m"
{
#line 624 "rtti_to_mlds.m"
  {
#line 624 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 624 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19;

#line 624 "rtti_to_mlds.m"
    {
#line 624 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_foreign_enum_functor_desc_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 5))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19);
    }
#line 624 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_19));
#line 624 "rtti_to_mlds.m"
  }
#line 624 "rtti_to_mlds.m"
}

#line 606 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2(
#line 606 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 606 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 606 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 606 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 606 "rtti_to_mlds.m"
{
#line 606 "rtti_to_mlds.m"
  {
#line 606 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 606 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16;

#line 606 "rtti_to_mlds.m"
    {
#line 606 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_enum_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16);
    }
#line 606 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_16));
#line 606 "rtti_to_mlds.m"
  }
#line 606 "rtti_to_mlds.m"
}

#line 641 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1(
#line 641 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 641 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 641 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 641 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 641 "rtti_to_mlds.m"
{
#line 641 "rtti_to_mlds.m"
  {
#line 641 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 641 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39;

#line 641 "rtti_to_mlds.m"
    {
#line 641 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_du_functor_desc_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39);
    }
#line 641 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_39));
#line 641 "rtti_to_mlds.m"
  }
#line 641 "rtti_to_mlds.m"
}

#line 595 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(
#line 595 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_9,
#line 595 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_10,
#line 595 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_11,
#line 595 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__FunctorInitializer_12,
#line 595 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__LayoutInitializer_13,
#line 595 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__NumberMapInitializer_14,
#line 595 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43,
#line 595 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44)
#line 595 "rtti_to_mlds.m"
{
#line 601 "rtti_to_mlds.m"
  {
#line 601 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 601 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_16;

#line 602 "rtti_to_mlds.m"
    {
#line 602 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, &ml_backend__rtti_to_mlds__ModuleName_16);
    }
#line 619 "rtti_to_mlds.m"
#line 619 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__TypeCtorDetails_11)) {
#line 619 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 619 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 605 "rtti_to_mlds.m"
        {
#line 605 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__EnumFunctors_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 605 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__EnumByValue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 605 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__EnumByName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 605 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 605 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 605 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84;
#line 605 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85;
#line 605 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86;
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 604 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds___IsDummy_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 606 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84;

#line 606 "rtti_to_mlds.m"
          {
#line 606 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 606 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[3]));
#line 606 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_2));
#line 606 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 606 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 606 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_83_83, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 606 "rtti_to_mlds.m"
          }
#line 606 "rtti_to_mlds.m"
          {
#line 606 "rtti_to_mlds.m"
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_enum_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_83_83, ml_backend__rtti_to_mlds__EnumFunctors_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84);
          }
#line 606 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_84_84);
#line 608 "rtti_to_mlds.m"
          {
#line 608 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_enum_value_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__EnumByValue_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_84_84, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85);
          }
#line 610 "rtti_to_mlds.m"
          {
#line 610 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_enum_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__EnumByName_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_85_85, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86);
          }
#line 612 "rtti_to_mlds.m"
          {
#line 612 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_86_86, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
          }
#line 613 "rtti_to_mlds.m"
          {
#line 613 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
          }
#line 615 "rtti_to_mlds.m"
          {
#line 615 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
          }
#line 617 "rtti_to_mlds.m"
          {
#line 617 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
          }
#line 605 "rtti_to_mlds.m"
        }
#line 619 "rtti_to_mlds.m"
        break;
#line 619 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 622 "rtti_to_mlds.m"
        {
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ForeignEnumLang_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ForeignEnumFunctors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ForeignEnumByName_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76;
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77;
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78;
#line 622 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_91 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 620 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 623 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76;

#line 624 "rtti_to_mlds.m"
          {
#line 624 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 624 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[1]));
#line 624 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_3));
#line 624 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 624 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 624 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ForeignEnumLang_23));
#line 624 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_75_75, 5) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 624 "rtti_to_mlds.m"
          }
#line 623 "rtti_to_mlds.m"
          {
#line 623 "rtti_to_mlds.m"
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_foreign_enum_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_75_75, ml_backend__rtti_to_mlds__ForeignEnumFunctors_25, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76);
          }
#line 623 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_76_76);
#line 627 "rtti_to_mlds.m"
          {
#line 627 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_foreign_enum_ordinal_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ForeignEnumByOrdinal_26, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77);
          }
#line 629 "rtti_to_mlds.m"
          {
#line 629 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_foreign_enum_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ForeignEnumByName_27, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_77_77, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78);
          }
#line 631 "rtti_to_mlds.m"
          {
#line 631 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_91, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_78_78, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
          }
#line 632 "rtti_to_mlds.m"
          {
#line 632 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
          }
#line 634 "rtti_to_mlds.m"
          {
#line 634 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)));
          }
#line 636 "rtti_to_mlds.m"
          {
#line 636 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
          }
#line 622 "rtti_to_mlds.m"
        }
#line 619 "rtti_to_mlds.m"
        break;
#line 619 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 640 "rtti_to_mlds.m"
        {
#line 640 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__DuFunctors_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 640 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__DuByPtag_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 640 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__DuByName_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 640 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 640 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68;
#line 640 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69;
#line 640 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70;
#line 640 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_92 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 639 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)));
#line 641 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68;

#line 641 "rtti_to_mlds.m"
          {
#line 641 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 641 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[2]));
#line 641 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_1));
#line 641 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 641 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 641 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_67_67, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 641 "rtti_to_mlds.m"
          }
#line 641 "rtti_to_mlds.m"
          {
#line 641 "rtti_to_mlds.m"
            mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_67_67, ml_backend__rtti_to_mlds__DuFunctors_29, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68);
          }
#line 641 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_68_68);
#line 643 "rtti_to_mlds.m"
          {
#line 643 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_du_ptag_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__DuByPtag_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69);
          }
#line 645 "rtti_to_mlds.m"
          {
#line 645 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_du_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__DuByName_31, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_69_69, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70);
          }
#line 647 "rtti_to_mlds.m"
          {
#line 647 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_92, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_70_70, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
          }
#line 648 "rtti_to_mlds.m"
          {
#line 648 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
          }
#line 650 "rtti_to_mlds.m"
          {
#line 650 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)));
          }
#line 652 "rtti_to_mlds.m"
          {
#line 652 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
          }
#line 640 "rtti_to_mlds.m"
        }
#line 619 "rtti_to_mlds.m"
        break;
#line 619 "rtti_to_mlds.m"
      case (MR_Integer) 3:
#line 619 "rtti_to_mlds.m"
#line 619 "rtti_to_mlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 0)))) {
#line 619 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 619 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 656 "rtti_to_mlds.m"
            {
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MaybeResFunctors_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ResFunctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 3)));
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MaybeResByName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 5)));
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60;
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61;
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62;
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__FunctorNumberMap_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 6)));
#line 656 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DuByPtag_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 4)));
#line 655 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 657 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60;

#line 657 "rtti_to_mlds.m"
              {
#line 657 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 657 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[4]));
#line 657 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0_4));
#line 657 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 657 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_9));
#line 657 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_10));
#line 657 "rtti_to_mlds.m"
              }
#line 657 "rtti_to_mlds.m"
              {
#line 657 "rtti_to_mlds.m"
                mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_maybe_reserved_functor_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_59_59, ml_backend__rtti_to_mlds__MaybeResFunctors_33, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60);
              }
#line 657 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_60_60);
#line 659 "rtti_to_mlds.m"
              {
#line 659 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_maybe_res_value_ordered_table_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__ResFunctors_34, ml_backend__rtti_to_mlds__DuByPtag_94, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_60_60, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61);
              }
#line 661 "rtti_to_mlds.m"
              {
#line 661 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_maybe_res_name_ordered_table_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__MaybeResByName_35, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_61_61, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62);
              }
#line 663 "rtti_to_mlds.m"
              {
#line 663 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__FunctorNumberMap_93, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
              }
#line 664 "rtti_to_mlds.m"
              {
#line 664 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)));
              }
#line 666 "rtti_to_mlds.m"
              {
#line 666 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)));
              }
#line 668 "rtti_to_mlds.m"
              {
#line 668 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
              }
#line 656 "rtti_to_mlds.m"
            }
#line 619 "rtti_to_mlds.m"
            break;
#line 619 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 671 "rtti_to_mlds.m"
            {
#line 671 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__NotagFunctor_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 2)));
#line 671 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 671 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));

#line 672 "rtti_to_mlds.m"
              {
#line 672 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_functor_number_map_4_p_0(ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(1), &ml_backend__rtti_to_mlds_scalar_common_1[7]), ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
              }
#line 673 "rtti_to_mlds.m"
              {
#line 673 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              }
#line 675 "rtti_to_mlds.m"
              {
#line 675 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)));
              }
#line 677 "rtti_to_mlds.m"
              {
#line 677 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_16, ml_backend__rtti_to_mlds__RttiTypeCtor_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)));
              }
#line 679 "rtti_to_mlds.m"
              {
#line 679 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_notag_functor_desc_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__RttiTypeCtor_10, ml_backend__rtti_to_mlds__NotagFunctor_37, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
              }
#line 671 "rtti_to_mlds.m"
            }
#line 619 "rtti_to_mlds.m"
            break;
#line 619 "rtti_to_mlds.m"
          case (MR_Integer) 2:
#line 682 "rtti_to_mlds.m"
            {
#line 682 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__EqvType_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TypeCtorDetails_11, (MR_Integer) 1)));
#line 682 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeRttiData_39;

#line 683 "rtti_to_mlds.m"
              {
#line 683 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__TypeRttiData_39 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(ml_backend__rtti_to_mlds__EqvType_38);
              }
#line 684 "rtti_to_mlds.m"
              {
#line 684 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_pseudo_type_info_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_9, ml_backend__rtti_to_mlds__TypeRttiData_39, ml_backend__rtti_to_mlds__LayoutInitializer_13, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44);
              }
#line 687 "rtti_to_mlds.m"
              {
#line 687 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
              }
#line 688 "rtti_to_mlds.m"
              {
#line 688 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
              }
#line 682 "rtti_to_mlds.m"
            }
#line 619 "rtti_to_mlds.m"
            break;
#line 619 "rtti_to_mlds.m"
          case (MR_Integer) 3:
#line 619 "rtti_to_mlds.m"
          case (MR_Integer) 4:
#line 619 "rtti_to_mlds.m"
          case (MR_Integer) 5:
#line 693 "rtti_to_mlds.m"
            {
#line 694 "rtti_to_mlds.m"
              {
#line 694 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__LayoutInitializer_13 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
              }
#line 695 "rtti_to_mlds.m"
              {
#line 695 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__FunctorInitializer_12 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
              }
#line 696 "rtti_to_mlds.m"
              {
#line 696 "rtti_to_mlds.m"
                *ml_backend__rtti_to_mlds__NumberMapInitializer_14 = ml_backend__ml_util__gen_init_null_pointer_1_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
              }
#line 693 "rtti_to_mlds.m"
              *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_43;
#line 693 "rtti_to_mlds.m"
            }
#line 619 "rtti_to_mlds.m"
            break;
#line 619 "rtti_to_mlds.m"
        }
#line 619 "rtti_to_mlds.m"
        break;
#line 619 "rtti_to_mlds.m"
    }
#line 601 "rtti_to_mlds.m"
  }
#line 595 "rtti_to_mlds.m"
}

#line 550 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6(
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 550 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 550 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 550 "rtti_to_mlds.m"
{
#line 550 "rtti_to_mlds.m"
  {
#line 550 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 550 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10;

#line 550 "rtti_to_mlds.m"
    {
#line 550 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10);
    }
#line 550 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10));
#line 550 "rtti_to_mlds.m"
  }
#line 550 "rtti_to_mlds.m"
}

#line 549 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_5(
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 549 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 549 "rtti_to_mlds.m"
{
#line 549 "rtti_to_mlds.m"
  {
#line 549 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 549 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 549 "rtti_to_mlds.m"
    {
#line 549 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 549 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 549 "rtti_to_mlds.m"
  }
#line 549 "rtti_to_mlds.m"
}

#line 547 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_4(
#line 547 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 547 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 547 "rtti_to_mlds.m"
{
#line 547 "rtti_to_mlds.m"
  {
#line 547 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 547 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 547 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv5_HeadVar__2_2;

#line 547 "rtti_to_mlds.m"
    {
#line 547 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv5_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 547 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv5_HeadVar__2_2));
#line 547 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 547 "rtti_to_mlds.m"
  }
#line 547 "rtti_to_mlds.m"
}

#line 520 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3(
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 520 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 520 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 520 "rtti_to_mlds.m"
{
#line 520 "rtti_to_mlds.m"
  {
#line 520 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 520 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10;

#line 520 "rtti_to_mlds.m"
    {
#line 520 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10);
    }
#line 520 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10));
#line 520 "rtti_to_mlds.m"
  }
#line 520 "rtti_to_mlds.m"
}

#line 519 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_2(
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 519 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 519 "rtti_to_mlds.m"
{
#line 519 "rtti_to_mlds.m"
  {
#line 519 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 519 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 519 "rtti_to_mlds.m"
    {
#line 519 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 519 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 519 "rtti_to_mlds.m"
  }
#line 519 "rtti_to_mlds.m"
}

#line 517 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_1(
#line 517 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 517 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 517 "rtti_to_mlds.m"
{
#line 517 "rtti_to_mlds.m"
  {
#line 517 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 517 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 517 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 517 "rtti_to_mlds.m"
    {
#line 517 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 517 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 517 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 517 "rtti_to_mlds.m"
  }
#line 517 "rtti_to_mlds.m"
}

#line 501 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8,
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 501 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34,
#line 501 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35)
#line 501 "rtti_to_mlds.m"
{
#line 508 "rtti_to_mlds.m"
  {
#line 508 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 508 "rtti_to_mlds.m"
#line 508 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8)) {
#line 508 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 508 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 508 "rtti_to_mlds.m"
        {
#line 509 "rtti_to_mlds.m"
          {
#line 509 "rtti_to_mlds.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/6", (MR_String) "plain_arity_zero_pseudo_type_info");
#line 509 "rtti_to_mlds.m"
            return;
          }
#line 508 "rtti_to_mlds.m"
        }
#line 508 "rtti_to_mlds.m"
        break;
#line 508 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 511 "rtti_to_mlds.m"
        {
#line 511 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 0)));
#line 511 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 1)));
#line 511 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_15;
#line 513 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 513 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv0_V_16_16;

#line 512 "rtti_to_mlds.m"
          {
#line 512 "rtti_to_mlds.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_15);
          }
#line 513 "rtti_to_mlds.m"
          {
#line 513 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_15, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv0_V_16_16);
          }
#line 513 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 513 "rtti_to_mlds.m"
            {
#line 513 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_V_16_16);
#line 513 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 513 "rtti_to_mlds.m"
            }
#line 516 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 516 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34;
#line 516 "rtti_to_mlds.m"
          else
#line 518 "rtti_to_mlds.m"
            {
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_115_115 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_17;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_18;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_19;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_21;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_23;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Type_24;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalType_25;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_73_73;
#line 518 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 520 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62;

#line 517 "rtti_to_mlds.m"
              {
#line 517 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ArgRttiDatas_17 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[13], ml_backend__rtti_to_mlds__ArgTypes_14);
              }
#line 519 "rtti_to_mlds.m"
              {
#line 519 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RealRttiDatas_18 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[14], ml_backend__rtti_to_mlds__ArgRttiDatas_17);
              }
#line 520 "rtti_to_mlds.m"
              {
#line 520 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 520 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 520 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_3));
#line 520 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 520 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_61_61, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 520 "rtti_to_mlds.m"
              }
#line 520 "rtti_to_mlds.m"
              {
#line 520 "rtti_to_mlds.m"
                mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_115_115, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_61_61, ml_backend__rtti_to_mlds__RealRttiDatas_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62);
              }
#line 520 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_62_62);
#line 522 "rtti_to_mlds.m"
              {
#line 522 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_19);
              }
#line 523 "rtti_to_mlds.m"
              {
#line 523 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 523 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 523 "rtti_to_mlds.m"
              }
#line 523 "rtti_to_mlds.m"
              {
#line 523 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 523 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 523 "rtti_to_mlds.m"
              }
#line 524 "rtti_to_mlds.m"
              {
#line 524 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_66_66 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__RttiTypeCtor_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
              }
#line 526 "rtti_to_mlds.m"
              {
#line 526 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_69_69 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__ArgRttiDatas_17);
              }
#line 528 "rtti_to_mlds.m"
              {
#line 528 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 528 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "rtti_to_mlds.m"
              }
#line 525 "rtti_to_mlds.m"
              {
#line 525 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 525 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 525 "rtti_to_mlds.m"
              }
#line 523 "rtti_to_mlds.m"
              {
#line 523 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 523 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 523 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 523 "rtti_to_mlds.m"
              }
#line 529 "rtti_to_mlds.m"
              {
#line 529 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_62_62, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72);
              }
#line 532 "rtti_to_mlds.m"
              {
#line 532 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_19);
              }
#line 533 "rtti_to_mlds.m"
              {
#line 533 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 533 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 533 "rtti_to_mlds.m"
              }
#line 533 "rtti_to_mlds.m"
              {
#line 533 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 533 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_21));
#line 533 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_73_73));
#line 533 "rtti_to_mlds.m"
              }
#line 534 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 534 "rtti_to_mlds.m"
              {
#line 534 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 534 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 534 "rtti_to_mlds.m"
              }
#line 536 "rtti_to_mlds.m"
              {
#line 536 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RvalType_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 536 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_23));
#line 536 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 536 "rtti_to_mlds.m"
              }
#line 538 "rtti_to_mlds.m"
              {
#line 538 "rtti_to_mlds.m"
                ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_72_72, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);
              }
#line 518 "rtti_to_mlds.m"
            }
#line 511 "rtti_to_mlds.m"
        }
#line 508 "rtti_to_mlds.m"
        break;
#line 508 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 541 "rtti_to_mlds.m"
        {
#line 541 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__VarArityId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 0)));
#line 541 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_101 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiPseudoTypeInfo_8, (MR_Integer) 1)));
#line 541 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_102;
#line 543 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 543 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv4_V_27_27;

#line 542 "rtti_to_mlds.m"
          {
#line 542 "rtti_to_mlds.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_102);
          }
#line 543 "rtti_to_mlds.m"
          {
#line 543 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_102, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv4_V_27_27);
          }
#line 543 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 543 "rtti_to_mlds.m"
            {
#line 543 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_V_27_27);
#line 543 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 543 "rtti_to_mlds.m"
            }
#line 546 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 546 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34;
#line 546 "rtti_to_mlds.m"
          else
#line 548 "rtti_to_mlds.m"
            {
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_125_125 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_126_126 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Globals_28;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TargetLang_29;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitRttiName_30;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitializerArgs_32;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_41_41;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_80;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_81;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_82;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_83;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_84;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_85;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_86;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_87;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Type_88;
#line 548 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalType_89;
#line 550 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42;

#line 547 "rtti_to_mlds.m"
              {
#line 547 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ArgRttiDatas_81 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_125_125, ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[15], ml_backend__rtti_to_mlds__ArgTypes_101);
              }
#line 549 "rtti_to_mlds.m"
              {
#line 549 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RealRttiDatas_82 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[16], ml_backend__rtti_to_mlds__ArgRttiDatas_81);
              }
#line 550 "rtti_to_mlds.m"
              {
#line 550 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 550 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 550 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0_6));
#line 550 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 550 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_41_41, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 550 "rtti_to_mlds.m"
              }
#line 550 "rtti_to_mlds.m"
              {
#line 550 "rtti_to_mlds.m"
                mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_126_126, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_41_41, ml_backend__rtti_to_mlds__RealRttiDatas_82, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_34)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42);
              }
#line 550 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_42_42);
#line 552 "rtti_to_mlds.m"
              {
#line 552 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_80 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ml_backend__rtti_to_mlds__VarArityId_26);
              }
#line 553 "rtti_to_mlds.m"
              {
#line 553 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_83);
              }
#line 554 "rtti_to_mlds.m"
              {
#line 554 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__Globals_28);
              }
#line 555 "rtti_to_mlds.m"
              {
#line 555 "rtti_to_mlds.m"
                libs__globals__get_target_2_p_0(ml_backend__rtti_to_mlds__Globals_28, &ml_backend__rtti_to_mlds__TargetLang_29);
              }
#line 557 "rtti_to_mlds.m"
              {
#line 557 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__InitRttiName_30 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_83, ml_backend__rtti_to_mlds__RttiTypeCtor_80, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
              }
#line 559 "rtti_to_mlds.m"
              {
#line 559 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)), ml_backend__rtti_to_mlds__ModuleName_83, ml_backend__rtti_to_mlds__ArgRttiDatas_81);
              }
#line 561 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__TargetLang_29 == (MR_Integer) 2);
#line 568 "rtti_to_mlds.m"
              if (ml_backend__rtti_to_mlds__succeeded)
#line 567 "rtti_to_mlds.m"
                {
#line 567 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_45_45;

#line 567 "rtti_to_mlds.m"
                  {
#line 567 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 567 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 567 "rtti_to_mlds.m"
                  }
#line 567 "rtti_to_mlds.m"
                  {
#line 567 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 567 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 567 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 567 "rtti_to_mlds.m"
                  }
#line 567 "rtti_to_mlds.m"
                }
#line 568 "rtti_to_mlds.m"
              else
#line 569 "rtti_to_mlds.m"
                {
#line 569 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 569 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 569 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds__V_49_49;
#line 569 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_50_50;

#line 571 "rtti_to_mlds.m"
                  {
#line 571 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_49_49 = mercury__list__length_1_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_125_125, ml_backend__rtti_to_mlds__ArgTypes_101);
                  }
#line 571 "rtti_to_mlds.m"
                  {
#line 571 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_48_48 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_49_49);
                  }
#line 573 "rtti_to_mlds.m"
                  {
#line 573 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 573 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 573 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 573 "rtti_to_mlds.m"
                  }
#line 571 "rtti_to_mlds.m"
                  {
#line 571 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 571 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 571 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 571 "rtti_to_mlds.m"
                  }
#line 570 "rtti_to_mlds.m"
                  {
#line 570 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 570 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 570 "rtti_to_mlds.m"
                  }
#line 569 "rtti_to_mlds.m"
                }
#line 575 "rtti_to_mlds.m"
              {
#line 575 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 575 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 575 "rtti_to_mlds.m"
              }
#line 575 "rtti_to_mlds.m"
              {
#line 575 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Type_88 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_88, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 575 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_88, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 575 "rtti_to_mlds.m"
              }
#line 575 "rtti_to_mlds.m"
              {
#line 575 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_84 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 575 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_88));
#line 575 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InitializerArgs_32));
#line 575 "rtti_to_mlds.m"
              }
#line 577 "rtti_to_mlds.m"
              {
#line 577 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_84, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_42_42, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
              }
#line 580 "rtti_to_mlds.m"
              {
#line 580 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_85 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_83);
              }
#line 581 "rtti_to_mlds.m"
              {
#line 581 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 581 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 581 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 581 "rtti_to_mlds.m"
              }
#line 581 "rtti_to_mlds.m"
              {
#line 581 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 581 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_86, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_85));
#line 581 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_86, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 581 "rtti_to_mlds.m"
              }
#line 582 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_86);
#line 582 "rtti_to_mlds.m"
              {
#line 582 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_87 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_87, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 582 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 582 "rtti_to_mlds.m"
              }
#line 584 "rtti_to_mlds.m"
              {
#line 584 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RvalType_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 584 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_87));
#line 584 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_88));
#line 584 "rtti_to_mlds.m"
              }
#line 586 "rtti_to_mlds.m"
              {
#line 586 "rtti_to_mlds.m"
                ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_89, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35);
              }
#line 548 "rtti_to_mlds.m"
            }
#line 541 "rtti_to_mlds.m"
        }
#line 508 "rtti_to_mlds.m"
        break;
#line 508 "rtti_to_mlds.m"
      case (MR_Integer) 3:
#line 589 "rtti_to_mlds.m"
        {
#line 590 "rtti_to_mlds.m"
          {
#line 590 "rtti_to_mlds.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_pseudo_type_info_defn\'/6", (MR_String) "type_var");
#line 590 "rtti_to_mlds.m"
            return;
          }
#line 589 "rtti_to_mlds.m"
        }
#line 508 "rtti_to_mlds.m"
        break;
#line 508 "rtti_to_mlds.m"
    }
#line 508 "rtti_to_mlds.m"
  }
#line 501 "rtti_to_mlds.m"
}

#line 455 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6(
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 455 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 455 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 455 "rtti_to_mlds.m"
{
#line 455 "rtti_to_mlds.m"
  {
#line 455 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 455 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10;

#line 455 "rtti_to_mlds.m"
    {
#line 455 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10);
    }
#line 455 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_STATE_VARIABLE_GlobalData_10));
#line 455 "rtti_to_mlds.m"
  }
#line 455 "rtti_to_mlds.m"
}

#line 454 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_5(
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 454 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 454 "rtti_to_mlds.m"
{
#line 454 "rtti_to_mlds.m"
  {
#line 454 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 454 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 454 "rtti_to_mlds.m"
    {
#line 454 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 454 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 454 "rtti_to_mlds.m"
  }
#line 454 "rtti_to_mlds.m"
}

#line 453 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_4(
#line 453 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 453 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 453 "rtti_to_mlds.m"
{
#line 453 "rtti_to_mlds.m"
  {
#line 453 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 453 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 453 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv5_HeadVar__2_2;

#line 453 "rtti_to_mlds.m"
    {
#line 453 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv5_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 453 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv5_HeadVar__2_2));
#line 453 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 453 "rtti_to_mlds.m"
  }
#line 453 "rtti_to_mlds.m"
}

#line 426 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3(
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 426 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 426 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 426 "rtti_to_mlds.m"
{
#line 426 "rtti_to_mlds.m"
  {
#line 426 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 426 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10;

#line 426 "rtti_to_mlds.m"
    {
#line 426 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10);
    }
#line 426 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_10));
#line 426 "rtti_to_mlds.m"
  }
#line 426 "rtti_to_mlds.m"
}

#line 425 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_2(
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 425 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 425 "rtti_to_mlds.m"
{
#line 425 "rtti_to_mlds.m"
  {
#line 425 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 425 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;

#line 425 "rtti_to_mlds.m"
    {
#line 425 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__real_rtti_data_1_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 425 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 425 "rtti_to_mlds.m"
  }
#line 425 "rtti_to_mlds.m"
}

#line 424 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_1(
#line 424 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 424 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 424 "rtti_to_mlds.m"
{
#line 424 "rtti_to_mlds.m"
  {
#line 424 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 424 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 424 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_HeadVar__2_2;

#line 424 "rtti_to_mlds.m"
    {
#line 424 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv1_HeadVar__2_2 = backend_libs__rtti__type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 424 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_HeadVar__2_2));
#line 424 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 424 "rtti_to_mlds.m"
  }
#line 424 "rtti_to_mlds.m"
}

#line 409 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiTypeInfo_8,
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 409 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33,
#line 409 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34)
#line 409 "rtti_to_mlds.m"
{
#line 415 "rtti_to_mlds.m"
  {
#line 415 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;

#line 415 "rtti_to_mlds.m"
#line 415 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiTypeInfo_8)) {
#line 415 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 415 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 415 "rtti_to_mlds.m"
        {
#line 416 "rtti_to_mlds.m"
          {
#line 416 "rtti_to_mlds.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.rtti_to_mlds", (MR_String) "predicate \140ml_backend.rtti_to_mlds.gen_type_info_defn\'/6", (MR_String) "plain_arity_zero_type_info");
#line 416 "rtti_to_mlds.m"
            return;
          }
#line 415 "rtti_to_mlds.m"
        }
#line 415 "rtti_to_mlds.m"
        break;
#line 415 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 418 "rtti_to_mlds.m"
        {
#line 418 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 0)));
#line 418 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 1)));
#line 418 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_15;
#line 420 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 420 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv0_V_16_16;

#line 419 "rtti_to_mlds.m"
          {
#line 419 "rtti_to_mlds.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_15);
          }
#line 420 "rtti_to_mlds.m"
          {
#line 420 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_15, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv0_V_16_16);
          }
#line 420 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 420 "rtti_to_mlds.m"
            {
#line 420 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_16_16 = ((MR_Word) ml_backend__rtti_to_mlds__conv0_V_16_16);
#line 420 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 420 "rtti_to_mlds.m"
            }
#line 423 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 423 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33;
#line 423 "rtti_to_mlds.m"
          else
#line 424 "rtti_to_mlds.m"
            {
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_111_111 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_17;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_18;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_19;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_20;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_21;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_22;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_23;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Type_24;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalType_25;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 424 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 426 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58;

#line 424 "rtti_to_mlds.m"
              {
#line 424 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ArgRttiDatas_17 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0, ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[9], ml_backend__rtti_to_mlds__ArgTypes_14);
              }
#line 425 "rtti_to_mlds.m"
              {
#line 425 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RealRttiDatas_18 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[10], ml_backend__rtti_to_mlds__ArgRttiDatas_17);
              }
#line 426 "rtti_to_mlds.m"
              {
#line 426 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 426 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 426 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_3));
#line 426 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 426 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_57_57, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 426 "rtti_to_mlds.m"
              }
#line 426 "rtti_to_mlds.m"
              {
#line 426 "rtti_to_mlds.m"
                mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_111_111, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_57_57, ml_backend__rtti_to_mlds__RealRttiDatas_18, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58);
              }
#line 426 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_GlobalData_58_58);
#line 428 "rtti_to_mlds.m"
              {
#line 428 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_19);
              }
#line 429 "rtti_to_mlds.m"
              {
#line 429 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 429 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 429 "rtti_to_mlds.m"
              }
#line 429 "rtti_to_mlds.m"
              {
#line 429 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 429 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 429 "rtti_to_mlds.m"
              }
#line 430 "rtti_to_mlds.m"
              {
#line 430 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_62_62 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__RttiTypeCtor_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
              }
#line 432 "rtti_to_mlds.m"
              {
#line 432 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_65_65 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), ml_backend__rtti_to_mlds__ModuleName_19, ml_backend__rtti_to_mlds__ArgRttiDatas_17);
              }
#line 434 "rtti_to_mlds.m"
              {
#line 434 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 434 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 434 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 434 "rtti_to_mlds.m"
              }
#line 431 "rtti_to_mlds.m"
              {
#line 431 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 431 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 431 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 431 "rtti_to_mlds.m"
              }
#line 429 "rtti_to_mlds.m"
              {
#line 429 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 429 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 429 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 429 "rtti_to_mlds.m"
              }
#line 435 "rtti_to_mlds.m"
              {
#line 435 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_20, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_58_58, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68);
              }
#line 438 "rtti_to_mlds.m"
              {
#line 438 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_21 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_19);
              }
#line 439 "rtti_to_mlds.m"
              {
#line 439 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 439 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 439 "rtti_to_mlds.m"
              }
#line 439 "rtti_to_mlds.m"
              {
#line 439 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_21));
#line 439 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 439 "rtti_to_mlds.m"
              }
#line 440 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_22);
#line 440 "rtti_to_mlds.m"
              {
#line 440 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 440 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 440 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 440 "rtti_to_mlds.m"
              }
#line 442 "rtti_to_mlds.m"
              {
#line 442 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RvalType_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 442 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_23));
#line 442 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_25, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_24));
#line 442 "rtti_to_mlds.m"
              }
#line 444 "rtti_to_mlds.m"
              {
#line 444 "rtti_to_mlds.m"
                ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_68_68, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);
              }
#line 424 "rtti_to_mlds.m"
            }
#line 418 "rtti_to_mlds.m"
        }
#line 415 "rtti_to_mlds.m"
        break;
#line 415 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 447 "rtti_to_mlds.m"
        {
#line 447 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__VarArityId_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 0)));
#line 447 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__ArgTypes_97 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__RttiTypeInfo_8, (MR_Integer) 1)));
#line 447 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__PDupRvalTypeMap_98;
#line 449 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 449 "rtti_to_mlds.m"
          MR_Box ml_backend__rtti_to_mlds__conv4_V_27_27;

#line 448 "rtti_to_mlds.m"
          {
#line 448 "rtti_to_mlds.m"
            ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33, &ml_backend__rtti_to_mlds__PDupRvalTypeMap_98);
          }
#line 449 "rtti_to_mlds.m"
          {
#line 449 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__succeeded = mercury__map__search_3_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ml_backend__rtti_to_mlds__PDupRvalTypeMap_98, ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10)), &ml_backend__rtti_to_mlds__conv4_V_27_27);
          }
#line 449 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 449 "rtti_to_mlds.m"
            {
#line 449 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_V_27_27);
#line 449 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 449 "rtti_to_mlds.m"
            }
#line 452 "rtti_to_mlds.m"
          if (ml_backend__rtti_to_mlds__succeeded)
#line 452 "rtti_to_mlds.m"
            *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33;
#line 452 "rtti_to_mlds.m"
          else
#line 453 "rtti_to_mlds.m"
            {
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_121_121 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_122_122 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Globals_28;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TargetLang_29;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitRttiName_30;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__InitializerArgs_32;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_76;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ArgRttiDatas_77;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RealRttiDatas_78;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__ModuleName_79;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_80;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MLDS_ModuleName_81;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__DataAddr_82;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Rval_83;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Type_84;
#line 453 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__RvalType_85;
#line 455 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38;

#line 453 "rtti_to_mlds.m"
              {
#line 453 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__ArgRttiDatas_77 = mercury__list__map_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_121_121, ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[11], ml_backend__rtti_to_mlds__ArgTypes_97);
              }
#line 454 "rtti_to_mlds.m"
              {
#line 454 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RealRttiDatas_78 = mercury__list__filter_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[12], ml_backend__rtti_to_mlds__ArgRttiDatas_77);
              }
#line 455 "rtti_to_mlds.m"
              {
#line 455 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 455 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 455 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0_6));
#line 455 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 455 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 455 "rtti_to_mlds.m"
              }
#line 455 "rtti_to_mlds.m"
              {
#line 455 "rtti_to_mlds.m"
                mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_122_122, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_37_37, ml_backend__rtti_to_mlds__RealRttiDatas_78, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_33)), &ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38);
              }
#line 455 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38 = ((MR_Word) ml_backend__rtti_to_mlds__conv7_STATE_VARIABLE_GlobalData_38_38);
#line 457 "rtti_to_mlds.m"
              {
#line 457 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RttiTypeCtor_76 = backend_libs__rtti__var_arity_id_to_rtti_type_ctor_1_f_0(ml_backend__rtti_to_mlds__VarArityId_26);
              }
#line 458 "rtti_to_mlds.m"
              {
#line 458 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_79);
              }
#line 459 "rtti_to_mlds.m"
              {
#line 459 "rtti_to_mlds.m"
                hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__Globals_28);
              }
#line 460 "rtti_to_mlds.m"
              {
#line 460 "rtti_to_mlds.m"
                libs__globals__get_target_2_p_0(ml_backend__rtti_to_mlds__Globals_28, &ml_backend__rtti_to_mlds__TargetLang_29);
              }
#line 462 "rtti_to_mlds.m"
              {
#line 462 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__InitRttiName_30 = ml_backend__rtti_to_mlds__gen_init_rtti_name_3_f_0(ml_backend__rtti_to_mlds__ModuleName_79, ml_backend__rtti_to_mlds__RttiTypeCtor_76, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)));
              }
#line 464 "rtti_to_mlds.m"
              {
#line 464 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_datas_array_3_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)), ml_backend__rtti_to_mlds__ModuleName_79, ml_backend__rtti_to_mlds__ArgRttiDatas_77);
              }
#line 466 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__succeeded = (ml_backend__rtti_to_mlds__TargetLang_29 == (MR_Integer) 2);
#line 480 "rtti_to_mlds.m"
              if (ml_backend__rtti_to_mlds__succeeded)
#line 479 "rtti_to_mlds.m"
                {
#line 479 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_41_41;

#line 479 "rtti_to_mlds.m"
                  {
#line 479 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 479 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 479 "rtti_to_mlds.m"
                  }
#line 479 "rtti_to_mlds.m"
                  {
#line 479 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 479 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 479 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_41_41));
#line 479 "rtti_to_mlds.m"
                  }
#line 479 "rtti_to_mlds.m"
                }
#line 480 "rtti_to_mlds.m"
              else
#line 481 "rtti_to_mlds.m"
                {
#line 481 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 481 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_44_44;
#line 481 "rtti_to_mlds.m"
                  MR_Integer ml_backend__rtti_to_mlds__V_45_45;
#line 481 "rtti_to_mlds.m"
                  MR_Word ml_backend__rtti_to_mlds__V_46_46;

#line 483 "rtti_to_mlds.m"
                  {
#line 483 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_45_45 = mercury__list__length_1_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_121_121, ml_backend__rtti_to_mlds__ArgTypes_97);
                  }
#line 483 "rtti_to_mlds.m"
                  {
#line 483 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_44_44 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_45_45);
                  }
#line 484 "rtti_to_mlds.m"
                  {
#line 484 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitCastRttiDatasArray_31));
#line 484 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_46_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "rtti_to_mlds.m"
                  }
#line 483 "rtti_to_mlds.m"
                  {
#line 483 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_44_44));
#line 483 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 483 "rtti_to_mlds.m"
                  }
#line 482 "rtti_to_mlds.m"
                  {
#line 482 "rtti_to_mlds.m"
                    ml_backend__rtti_to_mlds__InitializerArgs_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InitRttiName_30));
#line 482 "rtti_to_mlds.m"
                    MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InitializerArgs_32, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_43_43));
#line 482 "rtti_to_mlds.m"
                  }
#line 481 "rtti_to_mlds.m"
                }
#line 486 "rtti_to_mlds.m"
              {
#line 486 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 486 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 486 "rtti_to_mlds.m"
              }
#line 486 "rtti_to_mlds.m"
              {
#line 486 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Type_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 486 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Type_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 486 "rtti_to_mlds.m"
              }
#line 486 "rtti_to_mlds.m"
              {
#line 486 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_80 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_84));
#line 486 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InitializerArgs_32));
#line 486 "rtti_to_mlds.m"
              }
#line 488 "rtti_to_mlds.m"
              {
#line 488 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_80, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_38_38, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50);
              }
#line 491 "rtti_to_mlds.m"
              {
#line 491 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__MLDS_ModuleName_81 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__rtti_to_mlds__ModuleName_79);
              }
#line 492 "rtti_to_mlds.m"
              {
#line 492 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 492 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_51_51, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 492 "rtti_to_mlds.m"
              }
#line 492 "rtti_to_mlds.m"
              {
#line 492 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__DataAddr_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_ModuleName_81));
#line 492 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__DataAddr_82, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 492 "rtti_to_mlds.m"
              }
#line 493 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__rtti_to_mlds__DataAddr_82);
#line 493 "rtti_to_mlds.m"
              {
#line 493 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Rval_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 493 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Rval_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 493 "rtti_to_mlds.m"
              }
#line 495 "rtti_to_mlds.m"
              {
#line 495 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__RvalType_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Rval_83));
#line 495 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RvalType_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Type_84));
#line 495 "rtti_to_mlds.m"
              }
#line 497 "rtti_to_mlds.m"
              {
#line 497 "rtti_to_mlds.m"
                ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__RvalType_85, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50_50, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_34);
              }
#line 453 "rtti_to_mlds.m"
            }
#line 447 "rtti_to_mlds.m"
        }
#line 415 "rtti_to_mlds.m"
        break;
#line 415 "rtti_to_mlds.m"
    }
#line 415 "rtti_to_mlds.m"
  }
#line 409 "rtti_to_mlds.m"
}

#line 400 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(
#line 400 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_6,
#line 400 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Types_7,
#line 400 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_8,
#line 400 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_9,
#line 400 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_10)
#line 400 "rtti_to_mlds.m"
{
#line 403 "rtti_to_mlds.m"
  {
#line 403 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 403 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiName_11;

#line 404 "rtti_to_mlds.m"
    {
#line 404 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiName_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 404 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 404 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_7));
#line 404 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_8));
#line 404 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiName_11, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_9));
#line 404 "rtti_to_mlds.m"
    }
#line 405 "rtti_to_mlds.m"
    {
#line 405 "rtti_to_mlds.m"
      MR_Word base;
#line 405 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_10 = base;
#line 405 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_6));
#line 405 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiName_11));
#line 405 "rtti_to_mlds.m"
    }
#line 403 "rtti_to_mlds.m"
  }
#line 400 "rtti_to_mlds.m"
}

#line 387 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4(
#line 387 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 387 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 387 "rtti_to_mlds.m"
{
#line 387 "rtti_to_mlds.m"
  {
#line 387 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 387 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 387 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv7_Initializer_8;

#line 387 "rtti_to_mlds.m"
    {
#line 387 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv7_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 387 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv7_Initializer_8));
#line 387 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 387 "rtti_to_mlds.m"
  }
#line 387 "rtti_to_mlds.m"
}

#line 383 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3(
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 383 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 383 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 383 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 383 "rtti_to_mlds.m"
{
#line 383 "rtti_to_mlds.m"
  {
#line 383 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 383 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_RttiId_12;
#line 383 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25;
#line 383 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27;

#line 383 "rtti_to_mlds.m"
    {
#line 383 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv4_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27);
    }
#line 383 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_RttiId_12));
#line 383 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Counter_25));
#line 383 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_27));
#line 383 "rtti_to_mlds.m"
  }
#line 383 "rtti_to_mlds.m"
}

#line 383 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2(
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 383 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 383 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 383 "rtti_to_mlds.m"
{
#line 383 "rtti_to_mlds.m"
  {
#line 383 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 383 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_RttiId_10;

#line 383 "rtti_to_mlds.m"
    {
#line 383 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_instance_constr_id_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_RttiId_10);
    }
#line 383 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_RttiId_10));
#line 383 "rtti_to_mlds.m"
  }
#line 383 "rtti_to_mlds.m"
}

#line 376 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_1(
#line 376 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 376 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 376 "rtti_to_mlds.m"
{
#line 376 "rtti_to_mlds.m"
  {
#line 376 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 376 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 376 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 376 "rtti_to_mlds.m"
    {
#line 376 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = backend_libs__rtti__maybe_pseudo_type_info_to_rtti_data_1_f_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 376 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 376 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 376 "rtti_to_mlds.m"
  }
#line 376 "rtti_to_mlds.m"
}

#line 360 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Instance_8,
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 360 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31,
#line 360 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32)
#line 360 "rtti_to_mlds.m"
{
#line 365 "rtti_to_mlds.m"
  {
#line 365 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_59_59;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_73_73;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 0)));
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Types_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 1)));
#line 365 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumTypeVars_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 2)));
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 3)));
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCDeclRttiId_17;
#line 365 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumInstanceConstraints_18;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceTypesRttiId_20;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_23;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeRttiDatas_24;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypesInitializer_25;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCConstrIds_26;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ElementType_28;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_30;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_37_37;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_38_38;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_40_40;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_42_42;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_43_43;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_45_45;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_46_46;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_47_47;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_48_48;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_50_50;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_51_51;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_52_52;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_53_53;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_54_54;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_83;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_91;
#line 365 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_92_92;
#line 366 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds___Methods_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Instance_8, (MR_Integer) 4)));
#line 382 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_27_27;
#line 382 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv6_V_27_27;
#line 382 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39;

#line 368 "rtti_to_mlds.m"
    {
#line 368 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCDeclRttiId_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 368 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCDeclRttiId_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 368 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCDeclRttiId_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 368 "rtti_to_mlds.m"
    }
#line 15975 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_59_59 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0;
#line 369 "rtti_to_mlds.m"
    {
#line 369 "rtti_to_mlds.m"
      mercury__list__length_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_59_59, ml_backend__rtti_to_mlds__InstanceConstraints_15, &ml_backend__rtti_to_mlds__NumInstanceConstraints_18);
    }
#line 370 "rtti_to_mlds.m"
    {
#line 370 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 370 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 370 "rtti_to_mlds.m"
    }
#line 371 "rtti_to_mlds.m"
    {
#line 371 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceTypesRttiId_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 371 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceTypesTCRttiName_19));
#line 371 "rtti_to_mlds.m"
    }
#line 372 "rtti_to_mlds.m"
    {
#line 372 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 372 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 372 "rtti_to_mlds.m"
    }
#line 373 "rtti_to_mlds.m"
    {
#line 373 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 373 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 373 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsTCRttiName_21));
#line 373 "rtti_to_mlds.m"
    }
#line 374 "rtti_to_mlds.m"
    {
#line 374 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_23);
    }
#line 376 "rtti_to_mlds.m"
    {
#line 376 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TypeRttiDatas_24 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[8], ml_backend__rtti_to_mlds__Types_13);
    }
#line 377 "rtti_to_mlds.m"
    {
#line 377 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_pseudo_type_info_array_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, ml_backend__rtti_to_mlds__TypeRttiDatas_24, &ml_backend__rtti_to_mlds__TypesInitializer_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_31, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35);
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_84_84, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceTypesRttiId_20));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_83, ml_backend__rtti_to_mlds__InstanceTypesRttiId_20, ml_backend__rtti_to_mlds__TypesInitializer_25, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_35_35, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36);
    }
#line 383 "rtti_to_mlds.m"
    {
#line 383 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_4[1]));
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_2));
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_12));
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_40_40, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__Types_13));
#line 383 "rtti_to_mlds.m"
    }
#line 383 "rtti_to_mlds.m"
    {
#line 383 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_3));
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 383 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_37_37, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_40_40));
#line 383 "rtti_to_mlds.m"
    }
#line 384 "rtti_to_mlds.m"
    {
#line 384 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_38_38 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 16097 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_73_73 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 382 "rtti_to_mlds.m"
    {
#line 382 "rtti_to_mlds.m"
      mercury__list__map_foldl2_7_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_59_59, ml_backend__rtti_to_mlds__TypeCtorInfo_73_73, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_37_37, ml_backend__rtti_to_mlds__InstanceConstraints_15, &ml_backend__rtti_to_mlds__TCConstrIds_26, ((MR_Box) (ml_backend__rtti_to_mlds__V_38_38)), &ml_backend__rtti_to_mlds__conv6_V_27_27, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_36_36)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39);
    }
#line 382 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__V_27_27 = ((MR_Word) ml_backend__rtti_to_mlds__conv6_V_27_27);
#line 382 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_GlobalData_39_39);
#line 385 "rtti_to_mlds.m"
    {
#line 385 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_42_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 385 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_42_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22));
#line 385 "rtti_to_mlds.m"
    }
#line 385 "rtti_to_mlds.m"
    {
#line 385 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ElementType_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 385 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_42_42));
#line 385 "rtti_to_mlds.m"
    }
#line 387 "rtti_to_mlds.m"
    {
#line 387 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 387 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 387 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0_4));
#line 387 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 387 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_28));
#line 387 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_43_43, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_23));
#line 387 "rtti_to_mlds.m"
    }
#line 386 "rtti_to_mlds.m"
    {
#line 386 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_73_73, ml_backend__rtti_to_mlds__V_43_43, ml_backend__rtti_to_mlds__TCConstrIds_26);
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_92_92, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_92_92));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_91, ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22, ml_backend__rtti_to_mlds__InstanceConstrsInitializer_29, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_39_39, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44);
    }
#line 391 "rtti_to_mlds.m"
    {
#line 391 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 391 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_46_46, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 391 "rtti_to_mlds.m"
    }
#line 391 "rtti_to_mlds.m"
    {
#line 391 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 391 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_45_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_46_46));
#line 391 "rtti_to_mlds.m"
    }
#line 392 "rtti_to_mlds.m"
    {
#line 392 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_48_48 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__TCDeclRttiId_17);
    }
#line 393 "rtti_to_mlds.m"
    {
#line 393 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_50_50 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumTypeVars_14);
    }
#line 394 "rtti_to_mlds.m"
    {
#line 394 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_52_52 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumInstanceConstraints_18);
    }
#line 395 "rtti_to_mlds.m"
    {
#line 395 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_54_54 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__InstanceTypesRttiId_20);
    }
#line 396 "rtti_to_mlds.m"
    {
#line 396 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_56_56 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_23, ml_backend__rtti_to_mlds__InstanceConstrsRttiId_22);
    }
#line 397 "rtti_to_mlds.m"
    {
#line 397 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 397 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 397 "rtti_to_mlds.m"
    }
#line 395 "rtti_to_mlds.m"
    {
#line 395 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_54_54));
#line 395 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_53_53, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 395 "rtti_to_mlds.m"
    }
#line 394 "rtti_to_mlds.m"
    {
#line 394 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 394 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_51_51, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_52_52));
#line 394 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_51_51, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 394 "rtti_to_mlds.m"
    }
#line 393 "rtti_to_mlds.m"
    {
#line 393 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_50_50));
#line 393 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_51_51));
#line 393 "rtti_to_mlds.m"
    }
#line 392 "rtti_to_mlds.m"
    {
#line 392 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_48_48));
#line 392 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_47_47, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 392 "rtti_to_mlds.m"
    }
#line 391 "rtti_to_mlds.m"
    {
#line 391 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_30 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_30, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_45_45));
#line 391 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_30, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_47_47));
#line 391 "rtti_to_mlds.m"
    }
#line 398 "rtti_to_mlds.m"
    {
#line 398 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_30, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_44_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_32);
    }
#line 365 "rtti_to_mlds.m"
  }
#line 360 "rtti_to_mlds.m"
}

#line 347 "rtti_to_mlds.m"
static MR_Word MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(
#line 347 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_4,
#line 347 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodId_5)
#line 347 "rtti_to_mlds.m"
{
#line 349 "rtti_to_mlds.m"
  {
#line 349 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_6;
#line 349 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__MethodName_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 0)));
#line 349 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__MethodArity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 1)));
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__PredOrFunc_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__MethodId_5, (MR_Integer) 2)));
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_10;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_12_12;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_14_14;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_15_15;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_16_16;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 349 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_19_19;
#line 349 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__Name_22;

#line 351 "rtti_to_mlds.m"
    {
#line 351 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__RttiId_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_10, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_4));
#line 351 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__RttiId_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 351 "rtti_to_mlds.m"
    }
#line 352 "rtti_to_mlds.m"
    {
#line 352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 352 "rtti_to_mlds.m"
    }
#line 352 "rtti_to_mlds.m"
    {
#line 352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_12_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_12_12, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13));
#line 352 "rtti_to_mlds.m"
    }
#line 353 "rtti_to_mlds.m"
    {
#line 353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_15_15 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__MethodName_7);
    }
#line 354 "rtti_to_mlds.m"
    {
#line 354 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__MethodArity_8);
    }
#line 1727 "rtti_to_mlds.m"
    {
#line 1727 "rtti_to_mlds.m"
      backend_libs__rtti__pred_or_func_to_string_2_p_0(ml_backend__rtti_to_mlds__PredOrFunc_9, &ml_backend__rtti_to_mlds__Name_22);
    }
#line 1726 "rtti_to_mlds.m"
    {
#line 1726 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_19_19 = ml_backend__ml_util__gen_init_builtin_const_1_f_0(ml_backend__rtti_to_mlds__Name_22);
    }
#line 356 "rtti_to_mlds.m"
    {
#line 356 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_19_19));
#line 356 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 356 "rtti_to_mlds.m"
    }
#line 354 "rtti_to_mlds.m"
    {
#line 354 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_17_17));
#line 354 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_16_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 354 "rtti_to_mlds.m"
    }
#line 353 "rtti_to_mlds.m"
    {
#line 353 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_14_14, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_15_15));
#line 353 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_14_14, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_16_16));
#line 353 "rtti_to_mlds.m"
    }
#line 352 "rtti_to_mlds.m"
    {
#line 352 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_12_12));
#line 352 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_6, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_14_14));
#line 352 "rtti_to_mlds.m"
    }
#line 349 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__Initializer_6;
#line 349 "rtti_to_mlds.m"
  }
#line 347 "rtti_to_mlds.m"
}

#line 344 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1(
#line 344 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 344 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 344 "rtti_to_mlds.m"
{
#line 344 "rtti_to_mlds.m"
  {
#line 344 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 344 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 344 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_Initializer_6;

#line 344 "rtti_to_mlds.m"
    {
#line 344 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_Initializer_6 = ml_backend__rtti_to_mlds__gen_tc_id_method_id_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 344 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_Initializer_6));
#line 344 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 344 "rtti_to_mlds.m"
  }
#line 344 "rtti_to_mlds.m"
}

#line 340 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(
#line 340 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_6,
#line 340 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_7,
#line 340 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__MethodIds_8,
#line 340 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11,
#line 340 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12)
#line 340 "rtti_to_mlds.m"
{
#line 343 "rtti_to_mlds.m"
  {
#line 343 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 343 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_10;
#line 343 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 343 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_23;
#line 343 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_24_24;

#line 344 "rtti_to_mlds.m"
    {
#line 344 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 344 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[3]));
#line 344 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0_1));
#line 344 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 344 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_13_13, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_7));
#line 344 "rtti_to_mlds.m"
    }
#line 344 "rtti_to_mlds.m"
    {
#line 344 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_10 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ml_backend__rtti_to_mlds__V_13_13, ml_backend__rtti_to_mlds__MethodIds_8);
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_24_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_24_24, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_6));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_23, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_24_24));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_23, ml_backend__rtti_to_mlds__RttiId_6, ml_backend__rtti_to_mlds__Initializer_10, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_11, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_12);
    }
#line 343 "rtti_to_mlds.m"
  }
#line 340 "rtti_to_mlds.m"
}

#line 337 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0_1(
#line 337 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 337 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 337 "rtti_to_mlds.m"
{
#line 337 "rtti_to_mlds.m"
  {
#line 337 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 337 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 337 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_HeadVar__2_2;

#line 337 "rtti_to_mlds.m"
    {
#line 337 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv0_HeadVar__2_2 = ml_backend__ml_util__gen_init_string_1_f_0(((MR_String) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 337 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_HeadVar__2_2));
#line 337 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 337 "rtti_to_mlds.m"
  }
#line 337 "rtti_to_mlds.m"
}

#line 333 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(
#line 333 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 333 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Names_6,
#line 333 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 333 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
#line 333 "rtti_to_mlds.m"
{
#line 336 "rtti_to_mlds.m"
  {
#line 336 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 336 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_8;
#line 336 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_21;
#line 336 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_22_22;

#line 337 "rtti_to_mlds.m"
    {
#line 337 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_8 = ml_backend__ml_util__gen_init_array_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[7], ml_backend__rtti_to_mlds__Names_6);
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_22_22, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_5));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_21, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_22_22));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_21, ml_backend__rtti_to_mlds__RttiId_5, ml_backend__rtti_to_mlds__Initializer_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
    }
#line 336 "rtti_to_mlds.m"
  }
#line 333 "rtti_to_mlds.m"
}

#line 327 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(
#line 327 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCName_5,
#line 327 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__TCNum_6,
#line 327 "rtti_to_mlds.m"
  MR_Integer ml_backend__rtti_to_mlds__Arity_7,
#line 327 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__RttiId_8)
#line 327 "rtti_to_mlds.m"
{
#line 329 "rtti_to_mlds.m"
  {
#line 329 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 329 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCRttiName_9;

#line 330 "rtti_to_mlds.m"
    {
#line 330 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCRttiName_9 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 330 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCRttiName_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCNum_6));
#line 330 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCRttiName_9, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Arity_7));
#line 330 "rtti_to_mlds.m"
    }
#line 331 "rtti_to_mlds.m"
    {
#line 331 "rtti_to_mlds.m"
      MR_Word base;
#line 331 "rtti_to_mlds.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__RttiId_8 = base;
#line 331 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_5));
#line 331 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TCRttiName_9));
#line 331 "rtti_to_mlds.m"
    }
#line 329 "rtti_to_mlds.m"
  }
#line 327 "rtti_to_mlds.m"
}

#line 311 "rtti_to_mlds.m"
static MR_Box MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3(
#line 311 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 311 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1)
#line 311 "rtti_to_mlds.m"
{
#line 311 "rtti_to_mlds.m"
  {
#line 311 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 311 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 311 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv6_Initializer_8;

#line 311 "rtti_to_mlds.m"
    {
#line 311 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__conv6_Initializer_8 = ml_backend__rtti_to_mlds__gen_init_cast_rtti_id_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1));
    }
#line 311 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_Initializer_8));
#line 311 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__wrapper_arg_2;
#line 311 "rtti_to_mlds.m"
  }
#line 311 "rtti_to_mlds.m"
}

#line 305 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2(
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 305 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 305 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_5,
#line 305 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_6)
#line 305 "rtti_to_mlds.m"
{
#line 305 "rtti_to_mlds.m"
  {
#line 305 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 305 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv3_RttiId_12;
#line 305 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25;
#line 305 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27;

#line 305 "rtti_to_mlds.m"
    {
#line 305 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_tc_constraint_8_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv3_RttiId_12, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_5), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27);
    }
#line 305 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv3_RttiId_12));
#line 305 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_Counter_25));
#line 305 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_6 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_27));
#line 305 "rtti_to_mlds.m"
  }
#line 305 "rtti_to_mlds.m"
}

#line 305 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1(
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 305 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 305 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 305 "rtti_to_mlds.m"
{
#line 305 "rtti_to_mlds.m"
  {
#line 305 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 305 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_RttiId_8;

#line 305 "rtti_to_mlds.m"
    {
#line 305 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__make_decl_super_id_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Integer) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_RttiId_8);
    }
#line 305 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_RttiId_8));
#line 305 "rtti_to_mlds.m"
  }
#line 305 "rtti_to_mlds.m"
}

#line 257 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_7,
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__TCDecl_8,
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_9,
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_10,
#line 257 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49,
#line 257 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50)
#line 257 "rtti_to_mlds.m"
{
#line 261 "rtti_to_mlds.m"
  {
#line 261 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCId_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 0)));
#line 261 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Version_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 1)));
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Supers_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCDecl_8, (MR_Integer) 2)));
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCName_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 0)));
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNames_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 1)));
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCId_12, (MR_Integer) 2)));
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleSymName_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 0)));
#line 261 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__ClassName_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 1)));
#line 261 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__Arity_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TCName_15, (MR_Integer) 2)));
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__ModuleName_21;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNamesRttiId_22;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TVarNamesInitializer_24;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIdsRttiId_27;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MethodIdsInitializer_29;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCIdRttiId_32;
#line 261 "rtti_to_mlds.m"
    MR_String ml_backend__rtti_to_mlds__ModuleSymNameStr_33;
#line 261 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumTVars_34;
#line 261 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumMethods_35;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TCIdInitializer_36;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SupersInitType_45;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__SupersInitializer_46;
#line 261 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__NumSupers_47;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Initializer_48;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_71_71;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_82_82;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_87_87;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_89_89;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_90_90;
#line 261 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_91_91;

#line 265 "rtti_to_mlds.m"
    {
#line 265 "rtti_to_mlds.m"
      hlds__hlds_module__module_info_get_name_2_p_0(ml_backend__rtti_to_mlds__ModuleInfo_7, &ml_backend__rtti_to_mlds__ModuleName_21);
    }
#line 266 "rtti_to_mlds.m"
    {
#line 266 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TVarNamesRttiId_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TVarNamesRttiId_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 266 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TVarNamesRttiId_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 266 "rtti_to_mlds.m"
    }
#line 271 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__TVarNames_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "rtti_to_mlds.m"
      {
#line 268 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TVarNamesInitType_23;
#line 268 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_53_53;

#line 269 "rtti_to_mlds.m"
        {
#line 269 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 269 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_53_53, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TVarNamesRttiId_22));
#line 269 "rtti_to_mlds.m"
        }
#line 269 "rtti_to_mlds.m"
        {
#line 269 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitType_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 269 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TVarNamesInitType_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 269 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__TVarNamesInitType_23, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_53_53));
#line 269 "rtti_to_mlds.m"
        }
#line 270 "rtti_to_mlds.m"
        {
#line 270 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitializer_24 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__TVarNamesInitType_23);
        }
#line 268 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49;
#line 268 "rtti_to_mlds.m"
      }
#line 271 "rtti_to_mlds.m"
    else
#line 272 "rtti_to_mlds.m"
      {
#line 273 "rtti_to_mlds.m"
        {
#line 273 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_tc_id_var_names_4_p_0(ml_backend__rtti_to_mlds__TVarNamesRttiId_22, ml_backend__rtti_to_mlds__TVarNames_16, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_49, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
        }
#line 274 "rtti_to_mlds.m"
        {
#line 274 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__TVarNamesInitializer_24 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__TVarNamesRttiId_22);
        }
#line 272 "rtti_to_mlds.m"
      }
#line 276 "rtti_to_mlds.m"
    {
#line 276 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MethodIdsRttiId_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MethodIdsRttiId_27, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 276 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__MethodIdsRttiId_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 276 "rtti_to_mlds.m"
    }
#line 281 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__MethodIds_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 278 "rtti_to_mlds.m"
      {
#line 278 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__MethodIdsInitType_28;
#line 278 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_56_56;

#line 279 "rtti_to_mlds.m"
        {
#line 279 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 279 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsRttiId_27));
#line 279 "rtti_to_mlds.m"
        }
#line 279 "rtti_to_mlds.m"
        {
#line 279 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitType_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MethodIdsInitType_28, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 279 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MethodIdsInitType_28, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 279 "rtti_to_mlds.m"
        }
#line 280 "rtti_to_mlds.m"
        {
#line 280 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitializer_29 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__MethodIdsInitType_28);
        }
#line 278 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 278 "rtti_to_mlds.m"
      }
#line 281 "rtti_to_mlds.m"
    else
#line 282 "rtti_to_mlds.m"
      {
#line 283 "rtti_to_mlds.m"
        {
#line 283 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__gen_tc_id_method_ids_5_p_0(ml_backend__rtti_to_mlds__MethodIdsRttiId_27, ml_backend__rtti_to_mlds__TCName_15, ml_backend__rtti_to_mlds__MethodIds_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55);
        }
#line 284 "rtti_to_mlds.m"
        {
#line 284 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__MethodIdsInitializer_29 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__MethodIdsRttiId_27);
        }
#line 282 "rtti_to_mlds.m"
      }
#line 286 "rtti_to_mlds.m"
    {
#line 286 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCIdRttiId_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 286 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCIdRttiId_32, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 286 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__TCIdRttiId_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 286 "rtti_to_mlds.m"
    }
#line 287 "rtti_to_mlds.m"
    {
#line 287 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__ModuleSymNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ml_backend__rtti_to_mlds__ModuleSymName_18);
    }
#line 288 "rtti_to_mlds.m"
    {
#line 288 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__rtti_to_mlds__TVarNames_16, &ml_backend__rtti_to_mlds__NumTVars_34);
    }
#line 289 "rtti_to_mlds.m"
    {
#line 289 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_method_id_0, ml_backend__rtti_to_mlds__MethodIds_17, &ml_backend__rtti_to_mlds__NumMethods_35);
    }
#line 290 "rtti_to_mlds.m"
    {
#line 290 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCIdRttiId_32));
#line 290 "rtti_to_mlds.m"
    }
#line 290 "rtti_to_mlds.m"
    {
#line 290 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_58_58 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_58_58, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 290 "rtti_to_mlds.m"
    }
#line 291 "rtti_to_mlds.m"
    {
#line 291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_61_61 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__ModuleSymNameStr_33);
    }
#line 292 "rtti_to_mlds.m"
    {
#line 292 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_63_63 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__ClassName_19);
    }
#line 293 "rtti_to_mlds.m"
    {
#line 293 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_65_65 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Arity_20);
    }
#line 294 "rtti_to_mlds.m"
    {
#line 294 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_67_67 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumTVars_34);
    }
#line 295 "rtti_to_mlds.m"
    {
#line 295 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_69_69 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumMethods_35);
    }
#line 298 "rtti_to_mlds.m"
    {
#line 298 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsInitializer_29));
#line 298 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 298 "rtti_to_mlds.m"
    }
#line 296 "rtti_to_mlds.m"
    {
#line 296 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_70_70, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TVarNamesInitializer_24));
#line 296 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_70_70, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_71_71));
#line 296 "rtti_to_mlds.m"
    }
#line 295 "rtti_to_mlds.m"
    {
#line 295 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_68_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 295 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_68_68, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 295 "rtti_to_mlds.m"
    }
#line 294 "rtti_to_mlds.m"
    {
#line 294 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_67_67));
#line 294 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 294 "rtti_to_mlds.m"
    }
#line 293 "rtti_to_mlds.m"
    {
#line 293 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 293 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_64_64, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 293 "rtti_to_mlds.m"
    }
#line 292 "rtti_to_mlds.m"
    {
#line 292 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_62_62, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_63_63));
#line 292 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_62_62, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 292 "rtti_to_mlds.m"
    }
#line 291 "rtti_to_mlds.m"
    {
#line 291 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_60_60, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 291 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_60_60, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 291 "rtti_to_mlds.m"
    }
#line 290 "rtti_to_mlds.m"
    {
#line 290 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__TCIdInitializer_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCIdInitializer_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_58_58));
#line 290 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__TCIdInitializer_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 290 "rtti_to_mlds.m"
    }
#line 299 "rtti_to_mlds.m"
    {
#line 299 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__TCIdRttiId_32, ml_backend__rtti_to_mlds__TCIdInitializer_36, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_55_55, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73);
    }
#line 302 "rtti_to_mlds.m"
    if ((ml_backend__rtti_to_mlds__Supers_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 301 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73;
#line 302 "rtti_to_mlds.m"
    else
#line 303 "rtti_to_mlds.m"
      {
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_106_106;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperRttiIds_39;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperArrayRttiId_42;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__ElementType_43;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__SuperArrayInitializer_44;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 303 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 304 "rtti_to_mlds.m"
        MR_Word ml_backend__rtti_to_mlds__V_40_40;
#line 304 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv5_V_40_40;
#line 304 "rtti_to_mlds.m"
        MR_Box ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76;

#line 305 "rtti_to_mlds.m"
        {
#line 305 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_77_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[1]));
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_1));
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_77_77, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 305 "rtti_to_mlds.m"
        }
#line 305 "rtti_to_mlds.m"
        {
#line 305 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_8[0]));
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_2));
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_7));
#line 305 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 305 "rtti_to_mlds.m"
        }
#line 306 "rtti_to_mlds.m"
        {
#line 306 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_75_75 = mercury__counter__init_1_f_0((MR_Integer) 1);
        }
#line 17253 "ml_backend.rtti_to_mlds.c"
        ml_backend__rtti_to_mlds__TypeCtorInfo_106_106 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0;
#line 304 "rtti_to_mlds.m"
        {
#line 304 "rtti_to_mlds.m"
          mercury__list__map_foldl2_7_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ml_backend__rtti_to_mlds__TypeCtorInfo_106_106, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_74_74, ml_backend__rtti_to_mlds__Supers_14, &ml_backend__rtti_to_mlds__SuperRttiIds_39, ((MR_Box) (ml_backend__rtti_to_mlds__V_75_75)), &ml_backend__rtti_to_mlds__conv5_V_40_40, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_73_73)), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76);
        }
#line 304 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_40_40 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_V_40_40);
#line 304 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76 = ((MR_Word) ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_GlobalData_76_76);
#line 308 "rtti_to_mlds.m"
        {
#line 308 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SuperArrayRttiId_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SuperArrayRttiId_42, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TCName_15));
#line 308 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__SuperArrayRttiId_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 308 "rtti_to_mlds.m"
        }
#line 309 "rtti_to_mlds.m"
        {
#line 309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_79_79, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__SuperArrayRttiId_42));
#line 309 "rtti_to_mlds.m"
        }
#line 309 "rtti_to_mlds.m"
        {
#line 309 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__ElementType_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_43, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 309 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__ElementType_43, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_79_79));
#line 309 "rtti_to_mlds.m"
        }
#line 311 "rtti_to_mlds.m"
        {
#line 311 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 311 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[2]));
#line 311 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0_3));
#line 311 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 311 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ElementType_43));
#line 311 "rtti_to_mlds.m"
          MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleName_21));
#line 311 "rtti_to_mlds.m"
        }
#line 310 "rtti_to_mlds.m"
        {
#line 310 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__SuperArrayInitializer_44 = ml_backend__ml_util__gen_init_array_2_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_106_106, ml_backend__rtti_to_mlds__V_80_80, ml_backend__rtti_to_mlds__SuperRttiIds_39);
        }
#line 312 "rtti_to_mlds.m"
        {
#line 312 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(ml_backend__rtti_to_mlds__SuperArrayRttiId_42, ml_backend__rtti_to_mlds__SuperArrayInitializer_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_76_76, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81);
        }
#line 303 "rtti_to_mlds.m"
      }
#line 316 "rtti_to_mlds.m"
    {
#line 316 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_82_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 316 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_82_82, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodIdsRttiId_27));
#line 316 "rtti_to_mlds.m"
    }
#line 316 "rtti_to_mlds.m"
    {
#line 316 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__SupersInitType_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__SupersInitType_45, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 316 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__SupersInitType_45, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_82_82));
#line 316 "rtti_to_mlds.m"
    }
#line 317 "rtti_to_mlds.m"
    {
#line 317 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__SupersInitializer_46 = ml_backend__ml_util__gen_init_null_pointer_1_f_0(ml_backend__rtti_to_mlds__SupersInitType_45);
    }
#line 318 "rtti_to_mlds.m"
    {
#line 318 "rtti_to_mlds.m"
      mercury__list__length_2_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_constraint_0, ml_backend__rtti_to_mlds__Supers_14, &ml_backend__rtti_to_mlds__NumSupers_47);
    }
#line 319 "rtti_to_mlds.m"
    {
#line 319 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_84_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 319 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_84_84, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_10));
#line 319 "rtti_to_mlds.m"
    }
#line 319 "rtti_to_mlds.m"
    {
#line 319 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 319 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 319 "rtti_to_mlds.m"
    }
#line 320 "rtti_to_mlds.m"
    {
#line 320 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_86_86 = ml_backend__rtti_to_mlds__gen_init_rtti_id_2_f_0(ml_backend__rtti_to_mlds__ModuleName_21, ml_backend__rtti_to_mlds__TCIdRttiId_32);
    }
#line 321 "rtti_to_mlds.m"
    {
#line 321 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_88_88 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Version_13);
    }
#line 322 "rtti_to_mlds.m"
    {
#line 322 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_90_90 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumSupers_47);
    }
#line 324 "rtti_to_mlds.m"
    {
#line 324 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_91_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 324 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__SupersInitializer_46));
#line 324 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_91_91, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 324 "rtti_to_mlds.m"
    }
#line 322 "rtti_to_mlds.m"
    {
#line 322 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 322 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_89_89, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_90_90));
#line 322 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_89_89, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_91_91));
#line 322 "rtti_to_mlds.m"
    }
#line 321 "rtti_to_mlds.m"
    {
#line 321 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 321 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_87_87, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 321 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_87_87, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_89_89));
#line 321 "rtti_to_mlds.m"
    }
#line 320 "rtti_to_mlds.m"
    {
#line 320 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 320 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_87_87));
#line 320 "rtti_to_mlds.m"
    }
#line 319 "rtti_to_mlds.m"
    {
#line 319 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Initializer_48 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 319 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_48, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 319 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_48, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 319 "rtti_to_mlds.m"
    }
#line 325 "rtti_to_mlds.m"
    {
#line 325 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_10, ml_backend__rtti_to_mlds__Initializer_48, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_81_81, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_50);
    }
#line 261 "rtti_to_mlds.m"
  }
#line 257 "rtti_to_mlds.m"
}

#line 172 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1(
#line 172 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 172 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 172 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 172 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 172 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_4)
#line 172 "rtti_to_mlds.m"
{
#line 172 "rtti_to_mlds.m"
  {
#line 172 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 172 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_Initializer_10;
#line 172 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13;

#line 172 "rtti_to_mlds.m"
    {
#line 172 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__gen_init_method_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv1_Initializer_10, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_3), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13);
    }
#line 172 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_Initializer_10));
#line 172 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_4 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_13));
#line 172 "rtti_to_mlds.m"
  }
#line 172 "rtti_to_mlds.m"
}

#line 161 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(
#line 161 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__ModuleInfo_5,
#line 161 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiData_6,
#line 161 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47,
#line 161 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48)
#line 161 "rtti_to_mlds.m"
{
#line 164 "rtti_to_mlds.m"
  {
#line 164 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 164 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RttiId_8;
#line 164 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_9;
#line 164 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_49_49;

#line 165 "rtti_to_mlds.m"
    {
#line 165 "rtti_to_mlds.m"
      backend_libs__rtti__rtti_data_to_id_2_p_0(ml_backend__rtti_to_mlds__RttiData_6, &ml_backend__rtti_to_mlds__RttiId_8);
    }
#line 166 "rtti_to_mlds.m"
    {
#line 166 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 166 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_49_49, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_8));
#line 166 "rtti_to_mlds.m"
    }
#line 166 "rtti_to_mlds.m"
    {
#line 166 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 166 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_9, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_49_49));
#line 166 "rtti_to_mlds.m"
    }
#line 184 "rtti_to_mlds.m"
#line 184 "rtti_to_mlds.m"
    switch (MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) {
#line 184 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 184 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 200 "rtti_to_mlds.m"
        {
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__TypeCtorData_27 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 0);
#line 200 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__Version_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 0)));
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__TypeModule_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 1)));
#line 200 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds__TypeName_30 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 2)));
#line 200 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__TypeArity_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 3)));
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__UnifyUniv_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 4)));
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__CompareUniv_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 5)));
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Flags_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 6)));
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__TypeCtorDetails_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__TypeCtorData_27, (MR_Integer) 7)));
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__RttiTypeCtor_36;
#line 200 "rtti_to_mlds.m"
          MR_String ml_backend__rtti_to_mlds__TypeModuleName_37;
#line 200 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__NumPtags_38;
#line 200 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__NumFunctors_39;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__FunctorsRttiId_40;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__LayoutRttiId_41;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__FunctorsInfo_42;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__LayoutInfo_43;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__NumberMapInfo_44;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__UnifyInitializer_45;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__CompareInitializer_46;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_55_55;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_56_56;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_57_57;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_58_58;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_59_59;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_60_60;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_61_61;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_62_62;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_63_63;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_64_64;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_65_65;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_66_66;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_67_67;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_68_68;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_69_69;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_70_70;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_71_71;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_72_72;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_73_73;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_74_74;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_75_75;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_77_77;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_78_78;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_79_79;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_80_80;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_81_81;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_83_83;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_84_84;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_85_85;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_86_86;
#line 200 "rtti_to_mlds.m"
          MR_Integer ml_backend__rtti_to_mlds__V_87_87;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__V_88_88;
#line 200 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Initializer_108;

#line 203 "rtti_to_mlds.m"
          {
#line 203 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__RttiTypeCtor_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 203 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeModule_29));
#line 203 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeName_30));
#line 203 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__RttiTypeCtor_36, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__TypeArity_31));
#line 203 "rtti_to_mlds.m"
          }
#line 204 "rtti_to_mlds.m"
          {
#line 204 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__TypeModuleName_37 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ml_backend__rtti_to_mlds__TypeModule_29);
          }
#line 205 "rtti_to_mlds.m"
          {
#line 205 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__NumPtags_38 = backend_libs__rtti__type_ctor_details_num_ptags_1_f_0(ml_backend__rtti_to_mlds__TypeCtorDetails_35);
          }
#line 206 "rtti_to_mlds.m"
          {
#line 206 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__NumFunctors_39 = backend_libs__rtti__type_ctor_details_num_functors_1_f_0(ml_backend__rtti_to_mlds__TypeCtorDetails_35);
          }
#line 207 "rtti_to_mlds.m"
          {
#line 207 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__FunctorsRttiId_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 207 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FunctorsRttiId_40, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_36));
#line 207 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__FunctorsRttiId_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 207 "rtti_to_mlds.m"
          }
#line 208 "rtti_to_mlds.m"
          {
#line 208 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__LayoutRttiId_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 208 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__LayoutRttiId_41, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiTypeCtor_36));
#line 208 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__LayoutRttiId_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15))));
#line 208 "rtti_to_mlds.m"
          }
#line 210 "rtti_to_mlds.m"
          {
#line 210 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_functors_layout_info_8_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__RttiTypeCtor_36, ml_backend__rtti_to_mlds__TypeCtorDetails_35, &ml_backend__rtti_to_mlds__FunctorsInfo_42, &ml_backend__rtti_to_mlds__LayoutInfo_43, &ml_backend__rtti_to_mlds__NumberMapInfo_44, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52);
          }
#line 217 "rtti_to_mlds.m"
          {
#line 217 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__UnifyUniv_32, &ml_backend__rtti_to_mlds__UnifyInitializer_45, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_52_52, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53);
          }
#line 219 "rtti_to_mlds.m"
          {
#line 219 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_init_special_pred_5_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__CompareUniv_33, &ml_backend__rtti_to_mlds__CompareInitializer_46, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_53_53, &ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54);
          }
#line 222 "rtti_to_mlds.m"
          {
#line 222 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 222 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_56_56, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_8));
#line 222 "rtti_to_mlds.m"
          }
#line 222 "rtti_to_mlds.m"
          {
#line 222 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 222 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_55_55, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_56_56));
#line 222 "rtti_to_mlds.m"
          }
#line 223 "rtti_to_mlds.m"
          {
#line 223 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_58_58 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__TypeArity_31);
          }
#line 224 "rtti_to_mlds.m"
          {
#line 224 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_60_60 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__Version_28);
          }
#line 225 "rtti_to_mlds.m"
          {
#line 225 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_62_62 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumPtags_38);
          }
#line 226 "rtti_to_mlds.m"
          {
#line 226 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_64_64 = ml_backend__rtti_to_mlds__gen_init_type_ctor_rep_1_f_0(ml_backend__rtti_to_mlds__TypeCtorData_27);
          }
#line 229 "rtti_to_mlds.m"
          {
#line 229 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_68_68 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__TypeModuleName_37);
          }
#line 230 "rtti_to_mlds.m"
          {
#line 230 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_70_70 = ml_backend__ml_util__gen_init_string_1_f_0(ml_backend__rtti_to_mlds__TypeName_30);
          }
#line 234 "rtti_to_mlds.m"
          {
#line 234 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_74_74 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 234 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_74_74, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__FunctorsRttiId_40));
#line 234 "rtti_to_mlds.m"
          }
#line 234 "rtti_to_mlds.m"
          {
#line 234 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_73_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 234 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_73_73, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_74_74));
#line 234 "rtti_to_mlds.m"
          }
#line 236 "rtti_to_mlds.m"
          {
#line 236 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_75_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_75_75, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__FunctorsInfo_42));
#line 236 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_75_75, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "rtti_to_mlds.m"
          }
#line 234 "rtti_to_mlds.m"
          {
#line 234 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_72_72 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 234 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_72_72, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_73_73));
#line 234 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_72_72, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_75_75));
#line 234 "rtti_to_mlds.m"
          }
#line 237 "rtti_to_mlds.m"
          {
#line 237 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_80_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 237 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_80_80, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__LayoutRttiId_41));
#line 237 "rtti_to_mlds.m"
          }
#line 237 "rtti_to_mlds.m"
          {
#line 237 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_79_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_79_79, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 237 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_79_79, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_80_80));
#line 237 "rtti_to_mlds.m"
          }
#line 239 "rtti_to_mlds.m"
          {
#line 239 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_81_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_81_81, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__LayoutInfo_43));
#line 239 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_81_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "rtti_to_mlds.m"
          }
#line 237 "rtti_to_mlds.m"
          {
#line 237 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_78_78 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 237 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_78_78, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_79_79));
#line 237 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__V_78_78, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_81_81));
#line 237 "rtti_to_mlds.m"
          }
#line 240 "rtti_to_mlds.m"
          {
#line 240 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_84_84 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__NumFunctors_39);
          }
#line 241 "rtti_to_mlds.m"
          {
#line 241 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_87_87 = backend_libs__rtti__encode_type_ctor_flags_1_f_0(ml_backend__rtti_to_mlds__Flags_34);
          }
#line 241 "rtti_to_mlds.m"
          {
#line 241 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_86_86 = ml_backend__ml_util__gen_init_int_1_f_0(ml_backend__rtti_to_mlds__V_87_87);
          }
#line 250 "rtti_to_mlds.m"
          {
#line 250 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__NumberMapInfo_44));
#line 250 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_88_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "rtti_to_mlds.m"
          }
#line 241 "rtti_to_mlds.m"
          {
#line 241 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_86_86));
#line 241 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_85_85, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_88_88));
#line 241 "rtti_to_mlds.m"
          }
#line 240 "rtti_to_mlds.m"
          {
#line 240 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_83_83, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_84_84));
#line 240 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_83_83, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_85_85));
#line 240 "rtti_to_mlds.m"
          }
#line 239 "rtti_to_mlds.m"
          {
#line 239 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 239 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_77_77, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_78_78));
#line 239 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_77_77, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_83_83));
#line 239 "rtti_to_mlds.m"
          }
#line 236 "rtti_to_mlds.m"
          {
#line 236 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_71_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_72_72));
#line 236 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_71_71, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_77_77));
#line 236 "rtti_to_mlds.m"
          }
#line 230 "rtti_to_mlds.m"
          {
#line 230 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_69_69, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_70_70));
#line 230 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_69_69, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_71_71));
#line 230 "rtti_to_mlds.m"
          }
#line 229 "rtti_to_mlds.m"
          {
#line 229 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_67_67, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_68_68));
#line 229 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_67_67, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_69_69));
#line 229 "rtti_to_mlds.m"
          }
#line 228 "rtti_to_mlds.m"
          {
#line 228 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 228 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__CompareInitializer_46));
#line 228 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_66_66, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_67_67));
#line 228 "rtti_to_mlds.m"
          }
#line 227 "rtti_to_mlds.m"
          {
#line 227 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 227 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__UnifyInitializer_45));
#line 227 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_65_65, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_66_66));
#line 227 "rtti_to_mlds.m"
          }
#line 226 "rtti_to_mlds.m"
          {
#line 226 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 226 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_63_63, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_64_64));
#line 226 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_63_63, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_65_65));
#line 226 "rtti_to_mlds.m"
          }
#line 225 "rtti_to_mlds.m"
          {
#line 225 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 225 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_62_62));
#line 225 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_61_61, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_63_63));
#line 225 "rtti_to_mlds.m"
          }
#line 224 "rtti_to_mlds.m"
          {
#line 224 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 224 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_59_59, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_60_60));
#line 224 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_59_59, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_61_61));
#line 224 "rtti_to_mlds.m"
          }
#line 223 "rtti_to_mlds.m"
          {
#line 223 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_58_58));
#line 223 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_57_57, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_59_59));
#line 223 "rtti_to_mlds.m"
          }
#line 222 "rtti_to_mlds.m"
          {
#line 222 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__Initializer_108 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_108, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_55_55));
#line 222 "rtti_to_mlds.m"
            MR_hl_field(MR_mktag(2), ml_backend__rtti_to_mlds__Initializer_108, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_57_57));
#line 222 "rtti_to_mlds.m"
          }
#line 251 "rtti_to_mlds.m"
          {
#line 251 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__Initializer_108, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_54_54, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
          }
#line 200 "rtti_to_mlds.m"
        }
#line 184 "rtti_to_mlds.m"
        break;
#line 184 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 192 "rtti_to_mlds.m"
        {
#line 192 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__TCDecl_25 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 1);

#line 193 "rtti_to_mlds.m"
          {
#line 193 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_type_class_decl_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__TCDecl_25, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
          }
#line 192 "rtti_to_mlds.m"
        }
#line 184 "rtti_to_mlds.m"
        break;
#line 184 "rtti_to_mlds.m"
      case (MR_Integer) 2:
#line 196 "rtti_to_mlds.m"
        {
#line 196 "rtti_to_mlds.m"
          MR_Word ml_backend__rtti_to_mlds__Instance_26 = (MR_Word) MR_body(((MR_Word) ml_backend__rtti_to_mlds__RttiData_6), (MR_Integer) 2);

#line 197 "rtti_to_mlds.m"
          {
#line 197 "rtti_to_mlds.m"
            ml_backend__rtti_to_mlds__gen_type_class_instance_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__Instance_26, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
          }
#line 196 "rtti_to_mlds.m"
        }
#line 184 "rtti_to_mlds.m"
        break;
#line 184 "rtti_to_mlds.m"
      case (MR_Integer) 3:
#line 184 "rtti_to_mlds.m"
#line 184 "rtti_to_mlds.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 0)))) {
#line 184 "rtti_to_mlds.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 184 "rtti_to_mlds.m"
          case (MR_Integer) 0:
#line 185 "rtti_to_mlds.m"
            {
#line 185 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__TypeInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));

#line 186 "rtti_to_mlds.m"
              {
#line 186 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_type_info_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__TypeInfo_23, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
              }
#line 185 "rtti_to_mlds.m"
            }
#line 184 "rtti_to_mlds.m"
            break;
#line 184 "rtti_to_mlds.m"
          case (MR_Integer) 1:
#line 188 "rtti_to_mlds.m"
            {
#line 188 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__PseudoTypeInfo_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));

#line 189 "rtti_to_mlds.m"
              {
#line 189 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__gen_pseudo_type_info_defn_6_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__PseudoTypeInfo_24, ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
              }
#line 188 "rtti_to_mlds.m"
            }
#line 184 "rtti_to_mlds.m"
            break;
#line 184 "rtti_to_mlds.m"
          case (MR_Integer) 2:
#line 169 "rtti_to_mlds.m"
            {
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__BaseTypeClassInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 4)));
#line 169 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__N2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 1)));
#line 169 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__N3_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 2)));
#line 169 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__N4_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 3)));
#line 169 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__N5_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 4)));
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Methods_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 5)));
#line 169 "rtti_to_mlds.m"
              MR_Integer ml_backend__rtti_to_mlds__NumExtra_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__BaseTypeClassInfo_13, (MR_Integer) 0)));
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__MethodInitializers_21;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__Initializer_22;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_95_95;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_97_97;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_98_98;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_99_99;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_100_100;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_101_101;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_102_102;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_103_103;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_104_104;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_105_105;
#line 169 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds__V_106_106;
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds___InstanceModule_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));
#line 168 "rtti_to_mlds.m"
              MR_Word ml_backend__rtti_to_mlds___ClassId_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 2)));
#line 168 "rtti_to_mlds.m"
              MR_String ml_backend__rtti_to_mlds___InstanceStr_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 3)));
#line 172 "rtti_to_mlds.m"
              MR_Box ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96;

#line 172 "rtti_to_mlds.m"
              {
#line 172 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_95_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 172 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_7[0]));
#line 172 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0_1));
#line 172 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 172 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_5));
#line 172 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_95_95, 4) = ((MR_Box) (ml_backend__rtti_to_mlds__NumExtra_20));
#line 172 "rtti_to_mlds.m"
              }
#line 172 "rtti_to_mlds.m"
              {
#line 172 "rtti_to_mlds.m"
                mercury__list__map_foldl_5_p_0((MR_Word) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_95_95, ml_backend__rtti_to_mlds__Methods_19, &ml_backend__rtti_to_mlds__MethodInitializers_21, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_47)), &ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96);
              }
#line 172 "rtti_to_mlds.m"
              ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_STATE_VARIABLE_GlobalData_96_96);
#line 175 "rtti_to_mlds.m"
              {
#line 175 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_98_98 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__NumExtra_20);
              }
#line 176 "rtti_to_mlds.m"
              {
#line 176 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_100_100 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N2_15);
              }
#line 177 "rtti_to_mlds.m"
              {
#line 177 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_102_102 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N3_16);
              }
#line 178 "rtti_to_mlds.m"
              {
#line 178 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_104_104 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N4_17);
              }
#line 179 "rtti_to_mlds.m"
              {
#line 179 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_106_106 = ml_backend__ml_util__gen_init_boxed_int_1_f_0(ml_backend__rtti_to_mlds__N5_18);
              }
#line 180 "rtti_to_mlds.m"
              {
#line 180 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_105_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 180 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_105_105, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_106_106));
#line 180 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_105_105, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MethodInitializers_21));
#line 180 "rtti_to_mlds.m"
              }
#line 178 "rtti_to_mlds.m"
              {
#line 178 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_103_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_103_103, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_104_104));
#line 178 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_103_103, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_105_105));
#line 178 "rtti_to_mlds.m"
              }
#line 177 "rtti_to_mlds.m"
              {
#line 177 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_101_101, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_102_102));
#line 177 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_101_101, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_103_103));
#line 177 "rtti_to_mlds.m"
              }
#line 176 "rtti_to_mlds.m"
              {
#line 176 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_99_99, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_100_100));
#line 176 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_99_99, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_101_101));
#line 176 "rtti_to_mlds.m"
              }
#line 175 "rtti_to_mlds.m"
              {
#line 175 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_97_97, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_98_98));
#line 175 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__V_97_97, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_99_99));
#line 175 "rtti_to_mlds.m"
              }
#line 174 "rtti_to_mlds.m"
              {
#line 174 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__Initializer_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 174 "rtti_to_mlds.m"
                MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__Initializer_22, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_97_97));
#line 174 "rtti_to_mlds.m"
              }
#line 182 "rtti_to_mlds.m"
              {
#line 182 "rtti_to_mlds.m"
                ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_9, ml_backend__rtti_to_mlds__RttiId_8, ml_backend__rtti_to_mlds__Initializer_22, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_96_96, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_48);
              }
#line 169 "rtti_to_mlds.m"
            }
#line 184 "rtti_to_mlds.m"
            break;
#line 184 "rtti_to_mlds.m"
        }
#line 184 "rtti_to_mlds.m"
        break;
#line 184 "rtti_to_mlds.m"
    }
#line 164 "rtti_to_mlds.m"
  }
#line 161 "rtti_to_mlds.m"
}

#line 110 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(
#line 110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Name_6,
#line 110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_7,
#line 110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_8,
#line 110 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18,
#line 110 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19)
#line 110 "rtti_to_mlds.m"
{
#line 113 "rtti_to_mlds.m"
  {
#line 113 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Context_10;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_Context_11;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Exported_12;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Flags_13;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__MLDS_Type_15;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__DefnBody_16;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Defn_17;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_20_20;
#line 113 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Access_24;

#line 118 "rtti_to_mlds.m"
    {
#line 118 "rtti_to_mlds.m"
      mercury__term__context_init_1_p_0(&ml_backend__rtti_to_mlds__Context_10);
    }
#line 119 "rtti_to_mlds.m"
    {
#line 119 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_Context_11 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__rtti_to_mlds__Context_10);
    }
#line 122 "rtti_to_mlds.m"
    {
#line 122 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Exported_12 = backend_libs__rtti__rtti_id_is_exported_1_f_0(ml_backend__rtti_to_mlds__RttiId_7);
    }
#line 144 "rtti_to_mlds.m"
#line 144 "rtti_to_mlds.m"
    switch (ml_backend__rtti_to_mlds__Exported_12) {
#line 144 "rtti_to_mlds.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 144 "rtti_to_mlds.m"
      case (MR_Integer) 0:
#line 146 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Access_24 = (MR_Integer) 2;
#line 144 "rtti_to_mlds.m"
        break;
#line 144 "rtti_to_mlds.m"
      case (MR_Integer) 1:
#line 143 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__Access_24 = (MR_Integer) 0;
#line 144 "rtti_to_mlds.m"
        break;
#line 144 "rtti_to_mlds.m"
    }
#line 153 "rtti_to_mlds.m"
    {
#line 153 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Flags_13 = ml_backend__mlds__init_decl_flags_6_f_0(ml_backend__rtti_to_mlds__Access_24, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 130 "rtti_to_mlds.m"
    {
#line 130 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_20_20, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_7));
#line 130 "rtti_to_mlds.m"
    }
#line 130 "rtti_to_mlds.m"
    {
#line 130 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__MLDS_Type_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_Type_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 130 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__MLDS_Type_15, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__V_20_20));
#line 130 "rtti_to_mlds.m"
    }
#line 131 "rtti_to_mlds.m"
    {
#line 131 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__DefnBody_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_Type_15));
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__Initializer_8));
#line 131 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__DefnBody_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 131 "rtti_to_mlds.m"
    }
#line 132 "rtti_to_mlds.m"
    {
#line 132 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Defn_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__Name_6));
#line 132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__MLDS_Context_11));
#line 132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 2) = ((MR_Box) (ml_backend__rtti_to_mlds__Flags_13));
#line 132 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__Defn_17, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__DefnBody_16));
#line 132 "rtti_to_mlds.m"
    }
#line 134 "rtti_to_mlds.m"
    {
#line 134 "rtti_to_mlds.m"
      ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defn_3_p_0(ml_backend__rtti_to_mlds__Defn_17, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_18, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_19);
    }
#line 113 "rtti_to_mlds.m"
  }
#line 110 "rtti_to_mlds.m"
}

#line 103 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__rtti_id_and_init_to_defn_4_p_0(
#line 103 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__RttiId_5,
#line 103 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Initializer_6,
#line 103 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9,
#line 103 "rtti_to_mlds.m"
  MR_Word * ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10)
#line 103 "rtti_to_mlds.m"
{
#line 106 "rtti_to_mlds.m"
  {
#line 106 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 106 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__Name_8;
#line 106 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;

#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_11_11 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__RttiId_5));
#line 107 "rtti_to_mlds.m"
    }
#line 107 "rtti_to_mlds.m"
    {
#line 107 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__Name_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 107 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(1), ml_backend__rtti_to_mlds__Name_8, 0) = ((MR_Box) (ml_backend__rtti_to_mlds__V_11_11));
#line 107 "rtti_to_mlds.m"
    }
#line 108 "rtti_to_mlds.m"
    {
#line 108 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__rtti_entity_name_and_init_to_defn_5_p_0(ml_backend__rtti_to_mlds__Name_8, ml_backend__rtti_to_mlds__RttiId_5, ml_backend__rtti_to_mlds__Initializer_6, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
    }
#line 106 "rtti_to_mlds.m"
  }
#line 103 "rtti_to_mlds.m"
}

#line 1753 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5(
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
    MR_Word ml_backend__rtti_to_mlds__conv8_HeadVar__3_37;

#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__2_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv8_HeadVar__3_37);
    }
#line 1753 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv8_HeadVar__3_37));
#line 1753 "rtti_to_mlds.m"
  }
#line 1753 "rtti_to_mlds.m"
}

#line 1753 "rtti_to_mlds.m"
static MR_bool MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4(
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
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1753 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1753 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv7_HeadVar__3_41;

#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__succeeded = ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1753__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv7_HeadVar__3_41);
    }
#line 1753 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 1753 "rtti_to_mlds.m"
      {
#line 1753 "rtti_to_mlds.m"
        *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv7_HeadVar__3_41));
#line 1753 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = MR_TRUE;
#line 1753 "rtti_to_mlds.m"
      }
#line 1753 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__succeeded;
#line 1753 "rtti_to_mlds.m"
  }
#line 1753 "rtti_to_mlds.m"
}

#line 1752 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_3(
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
    MR_Word ml_backend__rtti_to_mlds__conv6_HeadVar__2_33;

#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__IntroducedFrom__pred__order_mlds_rtti_defns__1752__1_2_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), &ml_backend__rtti_to_mlds__conv6_HeadVar__2_33);
    }
#line 1752 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_2 = ((MR_Box) (ml_backend__rtti_to_mlds__conv6_HeadVar__2_33));
#line 1752 "rtti_to_mlds.m"
  }
#line 1752 "rtti_to_mlds.m"
}

#line 1748 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_2(
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1748 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1748 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 1748 "rtti_to_mlds.m"
{
#line 1748 "rtti_to_mlds.m"
  {
#line 1748 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1748 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16;

#line 1748 "rtti_to_mlds.m"
    {
#line 1748 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_arcs_3_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16);
    }
#line 1748 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv4_STATE_VARIABLE_Graph_16));
#line 1748 "rtti_to_mlds.m"
  }
#line 1748 "rtti_to_mlds.m"
}

#line 1747 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_1(
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 1747 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3,
#line 1747 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_4,
#line 1747 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_5)
#line 1747 "rtti_to_mlds.m"
{
#line 1747 "rtti_to_mlds.m"
  {
#line 1747 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 1747 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20;
#line 1747 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22;

#line 1747 "rtti_to_mlds.m"
    {
#line 1747 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_defn_nodes_5_p_0(((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20, ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_4), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22);
    }
#line 1747 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_Graph_20));
#line 1747 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_5 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_NameMap_22));
#line 1747 "rtti_to_mlds.m"
  }
#line 1747 "rtti_to_mlds.m"
}

#line 46 "rtti_to_mlds.m"
MR_Word MR_CALL 
ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(
#line 46 "rtti_to_mlds.m"
  MR_Word ml_backend__rtti_to_mlds__Defns_3)
#line 46 "rtti_to_mlds.m"
{
#line 1744 "rtti_to_mlds.m"
  {
#line 1744 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdDefns_4;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_19_19 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_data_name_0;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeCtorInfo_25_25;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_26_26;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_31_31;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__TypeInfo_35_35;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__NameMap_6;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__RevOrdSets_7;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdSets_8;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__OrdLists_9;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_13_13;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_17_17;
#line 1744 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_18_18;
#line 1747 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12;
#line 1747 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv2_NameMap_6;
#line 1748 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15;

#line 1746 "rtti_to_mlds.m"
    {
#line 1746 "rtti_to_mlds.m"
      mercury__digraph__init_1_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, &ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10);
    }
#line 18660 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 1747 "rtti_to_mlds.m"
    {
#line 1747 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_13_13 = mercury__map__init_0_f_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, ml_backend__rtti_to_mlds__TypeCtorInfo_25_25);
    }
#line 18667 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_26_26 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[0];
#line 1747 "rtti_to_mlds.m"
    {
#line 1747 "rtti_to_mlds.m"
      mercury__list__foldl2_6_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_25_25, ml_backend__rtti_to_mlds__TypeInfo_26_26, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[0], (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[4], ml_backend__rtti_to_mlds__Defns_3, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_10_10)), &ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12, ((MR_Box) (ml_backend__rtti_to_mlds__V_13_13)), &ml_backend__rtti_to_mlds__conv2_NameMap_6);
    }
#line 1747 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12 = ((MR_Word) ml_backend__rtti_to_mlds__conv3_STATE_VARIABLE_Graph_12_12);
#line 1747 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__NameMap_6 = ((MR_Word) ml_backend__rtti_to_mlds__conv2_NameMap_6);
#line 1748 "rtti_to_mlds.m"
    {
#line 1748 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_25_25, ml_backend__rtti_to_mlds__TypeInfo_26_26, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[5], ml_backend__rtti_to_mlds__Defns_3, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_12_12)), &ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15);
    }
#line 1748 "rtti_to_mlds.m"
    ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15 = ((MR_Word) ml_backend__rtti_to_mlds__conv5_STATE_VARIABLE_Graph_15_15);
#line 1749 "rtti_to_mlds.m"
    {
#line 1749 "rtti_to_mlds.m"
      mercury__digraph__atsort_2_p_0(ml_backend__rtti_to_mlds__TypeCtorInfo_19_19, ml_backend__rtti_to_mlds__STATE_VARIABLE_Graph_15_15, &ml_backend__rtti_to_mlds__RevOrdSets_7);
    }
#line 18690 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_31_31 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[1];
#line 1751 "rtti_to_mlds.m"
    {
#line 1751 "rtti_to_mlds.m"
      mercury__list__reverse_2_p_0(ml_backend__rtti_to_mlds__TypeInfo_31_31, ml_backend__rtti_to_mlds__RevOrdSets_7, &ml_backend__rtti_to_mlds__OrdSets_8);
    }
#line 18697 "ml_backend.rtti_to_mlds.c"
    ml_backend__rtti_to_mlds__TypeInfo_35_35 = (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[2];
#line 1752 "rtti_to_mlds.m"
    {
#line 1752 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_31_31, ml_backend__rtti_to_mlds__TypeInfo_35_35, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_2[6], ml_backend__rtti_to_mlds__OrdSets_8, &ml_backend__rtti_to_mlds__OrdLists_9);
    }
#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1753 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[1]));
#line 1753 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_4));
#line 1753 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1753 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_18_18, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__NameMap_6));
#line 1753 "rtti_to_mlds.m"
    }
#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1753 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_5[2]));
#line 1753 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0_5));
#line 1753 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1753 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_17_17, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__V_18_18));
#line 1753 "rtti_to_mlds.m"
    }
#line 1753 "rtti_to_mlds.m"
    {
#line 1753 "rtti_to_mlds.m"
      mercury__list__map_3_p_0(ml_backend__rtti_to_mlds__TypeInfo_35_35, (MR_Word) &ml_backend__rtti_to_mlds_scalar_common_1[3], ml_backend__rtti_to_mlds__V_17_17, ml_backend__rtti_to_mlds__OrdLists_9, &ml_backend__rtti_to_mlds__OrdDefns_4);
    }
#line 1744 "rtti_to_mlds.m"
    return ml_backend__rtti_to_mlds__OrdDefns_4;
#line 1744 "rtti_to_mlds.m"
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
#line 92 "rtti_to_mlds.m"
  {
#line 92 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded = ((((MR_tag((MR_Word) ml_backend__rtti_to_mlds__RttiData_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 87 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_11_11;
#line 87 "rtti_to_mlds.m"
    MR_Integer ml_backend__rtti_to_mlds__V_8_8;

#line 87 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 87 "rtti_to_mlds.m"
      {
#line 87 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__RttiData_6, (MR_Integer) 1)));
#line 87 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__succeeded = ((MR_tag((MR_Word) ml_backend__rtti_to_mlds__V_11_11)) == (MR_mktag((MR_Integer) 3)));
#line 87 "rtti_to_mlds.m"
        if (ml_backend__rtti_to_mlds__succeeded)
#line 87 "rtti_to_mlds.m"
          ml_backend__rtti_to_mlds__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__rtti_to_mlds__V_11_11, (MR_Integer) 0)));
#line 87 "rtti_to_mlds.m"
      }
#line 92 "rtti_to_mlds.m"
    if (ml_backend__rtti_to_mlds__succeeded)
#line 92 "rtti_to_mlds.m"
      *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10 = ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9;
#line 92 "rtti_to_mlds.m"
    else
#line 93 "rtti_to_mlds.m"
      {
#line 93 "rtti_to_mlds.m"
        ml_backend__rtti_to_mlds__gen_init_rtti_data_defn_4_p_0(ml_backend__rtti_to_mlds__ModuleInfo_5, ml_backend__rtti_to_mlds__RttiData_6, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_9, ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_10);
      }
#line 92 "rtti_to_mlds.m"
  }
#line 36 "rtti_to_mlds.m"
}

#line 84 "rtti_to_mlds.m"
static void MR_CALL 
ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1(
#line 84 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__closure_arg,
#line 84 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_1,
#line 84 "rtti_to_mlds.m"
  MR_Box ml_backend__rtti_to_mlds__wrapper_arg_2,
#line 84 "rtti_to_mlds.m"
  MR_Box * ml_backend__rtti_to_mlds__wrapper_arg_3)
#line 84 "rtti_to_mlds.m"
{
#line 84 "rtti_to_mlds.m"
  {
#line 84 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__closure = ml_backend__rtti_to_mlds__closure_arg;
#line 84 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10;

#line 84 "rtti_to_mlds.m"
    {
#line 84 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__add_rtti_data_to_mlds_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_1), ((MR_Word) ml_backend__rtti_to_mlds__wrapper_arg_2), &ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10);
    }
#line 84 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__wrapper_arg_3 = ((MR_Box) (ml_backend__rtti_to_mlds__conv0_STATE_VARIABLE_GlobalData_10));
#line 84 "rtti_to_mlds.m"
  }
#line 84 "rtti_to_mlds.m"
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
#line 83 "rtti_to_mlds.m"
  {
#line 83 "rtti_to_mlds.m"
    MR_bool ml_backend__rtti_to_mlds__succeeded;
#line 83 "rtti_to_mlds.m"
    MR_Word ml_backend__rtti_to_mlds__V_10_10;
#line 84 "rtti_to_mlds.m"
    MR_Box ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9;

#line 84 "rtti_to_mlds.m"
    {
#line 84 "rtti_to_mlds.m"
      ml_backend__rtti_to_mlds__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 84 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 0) = ((MR_Box) (&ml_backend__rtti_to_mlds_scalar_common_3[0]));
#line 84 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 1) = ((MR_Box) (ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0_1));
#line 84 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 84 "rtti_to_mlds.m"
      MR_hl_field(MR_mktag(0), ml_backend__rtti_to_mlds__V_10_10, 3) = ((MR_Box) (ml_backend__rtti_to_mlds__ModuleInfo_5));
#line 84 "rtti_to_mlds.m"
    }
#line 84 "rtti_to_mlds.m"
    {
#line 84 "rtti_to_mlds.m"
      mercury__list__foldl_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0, ml_backend__rtti_to_mlds__V_10_10, ml_backend__rtti_to_mlds__RttiDatas_6, ((MR_Box) (ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_0_8)), &ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9);
    }
#line 84 "rtti_to_mlds.m"
    *ml_backend__rtti_to_mlds__STATE_VARIABLE_GlobalData_9 = ((MR_Word) ml_backend__rtti_to_mlds__conv1_STATE_VARIABLE_GlobalData_9);
#line 83 "rtti_to_mlds.m"
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
