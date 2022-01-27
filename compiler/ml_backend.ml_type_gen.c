/*
** Automatically generated from `ml_type_gen.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module ml_backend.ml_type_gen. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_type_gen__init
ENDINIT
*/

#include "ml_backend.ml_type_gen.mih"


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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.polymorphism.mih"
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



#line 660 "ml_type_gen.m"
struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s {
#line 668 "ml_type_gen.m"
  MR_bool ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded;
#line 785 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RAs_66;
#line 787 "ml_type_gen.m"
  jmp_buf ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__commit_0;
#line 787 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106;
#line 787 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__conv9_RA_106;
#line 660 "ml_type_gen.m"
};

#line 437 "ml_type_gen.m"
struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s {
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10;
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12;
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13;
#line 442 "ml_type_gen.m"
  MR_bool ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded;
#line 461 "ml_type_gen.m"
  jmp_buf ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_0;
#line 461 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_59;
#line 461 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv0_Ctor_59;
#line 482 "ml_type_gen.m"
  jmp_buf ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_1;
#line 482 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_27;
#line 483 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv1_Ctor_27;
#line 437 "ml_type_gen.m"
};


#line 186 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 189 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 192 "ml_backend.ml_type_gen.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 195 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 198 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

#line 201 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 204 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 207 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;

#line 210 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0;

#line 213 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1;

#line 216 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_value_ordered_tag_uses_base_class_0[2];

#line 219 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0[2];

#line 222 "ml_backend.ml_type_gen.c"
static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0[2];

#line 225 "ml_backend.ml_type_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
#line 228 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 230 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2);

#line 233 "ml_backend.ml_type_gen.c"
static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
#line 236 "ml_backend.ml_type_gen.c"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_1,
#line 238 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 240 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3);

#line 1214 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1(
#line 1214 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 1214 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1214 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 1214 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3);

#line 1191 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
#line 1191 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8);

#line 1263 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1263__1_2_p_0(
#line 1263 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_19,
#line 1263 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_71);

#line 339 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_enum_constant__339__1_2_p_0(
#line 339 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_18,
#line 339 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_65);

#line 145 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_types__145__1_2_p_0(
#line 145 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_7,
#line 145 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_16);

#line 1263 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1(
#line 1263 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg);

#line 1221 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Mapping_9,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_10,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Type_11,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_12,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_59,
#line 1221 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_60);

#line 1191 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen___ModuleInfo_5,
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
#line 1191 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8);

#line 1050 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_field_6_p_0(
#line 1050 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1050 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1050 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Arg_9,
#line 1050 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1050 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16,
#line 1050 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17);

#line 1039 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_info_member_6_p_0(
#line 1039 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1039 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1039 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeVar_9,
#line 1039 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1039 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_14,
#line 1039 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_15);

#line 1032 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_typeclass_info_member_6_p_0(
#line 1032 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1032 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1032 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Constraint_9,
#line 1032 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1032 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_13,
#line 1032 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_14);

#line 963 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_5_f_0(
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_7,
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_8,
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassType_9,
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassQualifier_10,
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Member_11);

#line 952 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
#line 952 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1);

#line 893 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
#line 893 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1);

#line 746 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_3(
#line 746 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 746 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 746 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 746 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 746 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4);

#line 739 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_2(
#line 739 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 739 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 739 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 739 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 739 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4);

#line 737 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_1(
#line 737 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 737 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 737 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 737 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 737 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4);

#line 787 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_4(
#line 787 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 787 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_6(
#line 787 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 787 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_5(
#line 787 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 787 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_7(
#line 787 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 660 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0(
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_13,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_14,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_15,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_16,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_17,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_18,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_19,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_20,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Members0_21,
#line 660 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_Members_22,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_CtorMethods0_23,
#line 660 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_CtorMethods_24);

#line 613 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_secondary_tag_class_7_p_0(
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Context_8,
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_9,
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_10,
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Members_11,
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_12,
#line 613 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_TypeDefn_13,
#line 613 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__SecondaryTagClassId_14);

#line 602 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
#line 602 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
#line 602 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
#line 602 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_7);

#line 595 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
#line 595 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
#line 595 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__RA_2);

#line 586 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_needs_secondary_tag_3_p_0(
#line 586 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_4,
#line 586 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_5,
#line 586 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_6);

#line 501 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_9(
#line 501 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 501 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 501 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 501 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
#line 501 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
#line 501 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5);

#line 461 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_1(
#line 461 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 461 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_3(
#line 461 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 461 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_2(
#line 461 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 461 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_4(
#line 461 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 482 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_5(
#line 482 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 483 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_7(
#line 483 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 482 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_6(
#line 482 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 482 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_8(
#line 482 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 437 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0(
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_9,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctors_12,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_13,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_45,
#line 437 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_46);

#line 339 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0_1(
#line 339 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg);

#line 299 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0(
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_7,
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_9,
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Type_10,
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_11);

#line 255 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0_1(
#line 255 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 255 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

#line 237 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_9,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctors_12,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_13,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35,
#line 237 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36);

#line 156 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_defn_4_p_0(
#line 156 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_5,
#line 156 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
#line 156 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11,
#line 156 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);

#line 1188 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
#line 1188 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 1188 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1188 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2);

#line 924 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
#line 924 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 924 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

#line 921 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
#line 921 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 921 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

#line 150 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0_2(
#line 150 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 150 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 150 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 150 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3);

#line 145 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0_1(
#line 145 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 145 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);


static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_1[3][3];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[6][2];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[4][1];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[3][5];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[2][7];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[5][9];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_7[1][15];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_8[1][10];




static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "MR_value")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "data_tag")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "tag_type")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[3])))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "<constructor>"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[4])))))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[3][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_7[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 989 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 998 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1006 "ml_backend.ml_type_gen.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1015 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1024 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

#line 1033 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1041 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_mdbcomp__prim_data__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1050 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0
  }
};

#line 1058 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0 = {
  (MR_String) "tag_does_not_use_base_class",
  (MR_Integer) 0
};

#line 1064 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1 = {
  (MR_String) "tag_uses_base_class",
  (MR_Integer) 1
};

#line 1070 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_value_ordered_tag_uses_base_class_0[2] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0,
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1
};

#line 1076 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0[2] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0,
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1
};

#line 1082 "ml_backend.ml_type_gen.c"
static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1088 "ml_backend.ml_type_gen.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_tag_uses_base_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001)),
  ((MR_Box) (ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001)),
  (MR_String) "ml_backend.ml_type_gen",
  (MR_String) "tag_uses_base_class",
  {
    ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0
  },
  {
    ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_value_ordered_tag_uses_base_class_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0
};

#line 1109 "ml_backend.ml_type_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
#line 1112 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1114 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2)
#line 1116 "ml_backend.ml_type_gen.c"
{
#line 1118 "ml_backend.ml_type_gen.c"
  {
#line 1120 "ml_backend.ml_type_gen.c"
    MR_bool ml_backend__ml_type_gen__succeeded;

#line 1123 "ml_backend.ml_type_gen.c"
    {
#line 1125 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2));
    }
#line 1128 "ml_backend.ml_type_gen.c"
    return ml_backend__ml_type_gen__succeeded;
#line 1130 "ml_backend.ml_type_gen.c"
  }
#line 1132 "ml_backend.ml_type_gen.c"
}

#line 1135 "ml_backend.ml_type_gen.c"
static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
#line 1138 "ml_backend.ml_type_gen.c"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_1,
#line 1140 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 1142 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3)
#line 1144 "ml_backend.ml_type_gen.c"
{
#line 1146 "ml_backend.ml_type_gen.c"
  {
#line 1148 "ml_backend.ml_type_gen.c"
    MR_Word ml_backend__ml_type_gen__conv0_HeadVar__1_1;

#line 1151 "ml_backend.ml_type_gen.c"
    {
#line 1153 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(&ml_backend__ml_type_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_3));
    }
#line 1156 "ml_backend.ml_type_gen.c"
    *ml_backend__ml_type_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_type_gen__conv0_HeadVar__1_1));
#line 1158 "ml_backend.ml_type_gen.c"
  }
#line 1160 "ml_backend.ml_type_gen.c"
}

#line 1214 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1(
#line 1214 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 1214 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1214 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 1214 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3)
#line 1214 "ml_type_gen.m"
{
#line 1214 "ml_type_gen.m"
  {
#line 1214 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 1214 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_60;

#line 1214 "ml_type_gen.m"
    {
#line 1214 "ml_type_gen.m"
      ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_60);
    }
#line 1214 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_60));
#line 1214 "ml_type_gen.m"
  }
#line 1214 "ml_type_gen.m"
}

#line 1191 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
#line 1191 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8)
#line 1191 "ml_type_gen.m"
{
#line 1195 "ml_type_gen.m"
  {
#line 1195 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1195 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Lang_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 0)));
#line 1195 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 1)));
#line 1195 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 2)));
#line 1195 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Mapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 3)));
#line 1195 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeDefn_13;
#line 1195 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeBody_14;

#line 1197 "ml_type_gen.m"
    {
#line 1197 "ml_type_gen.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(ml_backend__ml_type_gen__TypeTable_6, ml_backend__ml_type_gen__TypeCtor_11, &ml_backend__ml_type_gen__TypeDefn_13);
    }
#line 1198 "ml_type_gen.m"
    {
#line 1198 "ml_type_gen.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_type_gen__TypeDefn_13, &ml_backend__ml_type_gen__TypeBody_14);
    }
#line 1206 "ml_type_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_14)) == (MR_mktag((MR_Integer) 1))))
#line 1209 "ml_type_gen.m"
      {
#line 1209 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 0)));
#line 1209 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TagValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 1)));
#line 1209 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__QualifiedClassName_29;
#line 1209 "ml_type_gen.m"
        MR_Integer ml_backend__ml_type_gen__MLDS_ClassArity_30;
#line 1209 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__MLDS_Type_31;
#line 1209 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__ExportConstants_32;
#line 1209 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_34_34;
#line 1207 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___CheaperTagTest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 2)));
#line 1207 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___IsEnumOrDummy_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 3)));
#line 1207 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___MaybeUserEq_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 4)));
#line 1207 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___MaybeDirectArgCtors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 5)));
#line 1207 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___ReservedTag_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1207 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___ReservedAddr_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1207 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___IsForeignType_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 7)));
#line 1213 "ml_type_gen.m"
        MR_Box ml_backend__ml_type_gen__conv1_ExportConstants_32;

#line 1210 "ml_type_gen.m"
        {
#line 1210 "ml_type_gen.m"
          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_11, &ml_backend__ml_type_gen__QualifiedClassName_29, &ml_backend__ml_type_gen__MLDS_ClassArity_30);
        }
#line 1211 "ml_type_gen.m"
        {
#line 1211 "ml_type_gen.m"
          ml_backend__ml_type_gen__MLDS_Type_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1211 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualifiedClassName_29));
#line 1211 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_30));
#line 1211 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 3) = ((MR_Box) ((MR_Integer) 4));
#line 1211 "ml_type_gen.m"
        }
#line 1214 "ml_type_gen.m"
        {
#line 1214 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1214 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[0]));
#line 1214 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1));
#line 1214 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1214 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_11));
#line 1214 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 4) = ((MR_Box) (ml_backend__ml_type_gen__Mapping_12));
#line 1214 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 5) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_21));
#line 1214 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 6) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_31));
#line 1214 "ml_type_gen.m"
        }
#line 1213 "ml_type_gen.m"
        {
#line 1213 "ml_type_gen.m"
          mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[2], ml_backend__ml_type_gen__V_34_34, ml_backend__ml_type_gen__Ctors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv1_ExportConstants_32);
        }
#line 1213 "ml_type_gen.m"
        ml_backend__ml_type_gen__ExportConstants_32 = ((MR_Word) ml_backend__ml_type_gen__conv1_ExportConstants_32);
#line 1217 "ml_type_gen.m"
        {
#line 1217 "ml_type_gen.m"
          MR_Word base;
#line 1217 "ml_type_gen.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "ml_type_gen.m"
          *ml_backend__ml_type_gen__MLDS_ExportedEnum_8 = base;
#line 1217 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Lang_9));
#line 1217 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_10));
#line 1217 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_11));
#line 1217 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__ExportConstants_32));
#line 1217 "ml_type_gen.m"
        }
#line 1209 "ml_type_gen.m"
      }
#line 1206 "ml_type_gen.m"
    else
#line 1204 "ml_type_gen.m"
      {
#line 1205 "ml_type_gen.m"
        {
#line 1205 "ml_type_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_exported_enum\'/4", (MR_String) "invalid type");
#line 1205 "ml_type_gen.m"
          return;
        }
#line 1204 "ml_type_gen.m"
      }
#line 1195 "ml_type_gen.m"
  }
#line 1191 "ml_type_gen.m"
}

#line 1263 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1263__1_2_p_0(
#line 1263 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_19,
#line 1263 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_71)
#line 1263 "ml_type_gen.m"
{
#line 1263 "ml_type_gen.m"
  {
#line 1263 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_19 == ml_backend__ml_type_gen__HeadVar__2_71);

#line 1263 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 1263 "ml_type_gen.m"
  }
#line 1263 "ml_type_gen.m"
}

#line 339 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_enum_constant__339__1_2_p_0(
#line 339 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_18,
#line 339 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_65)
#line 339 "ml_type_gen.m"
{
#line 339 "ml_type_gen.m"
  {
#line 339 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_18 == ml_backend__ml_type_gen__HeadVar__2_65);

#line 339 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 339 "ml_type_gen.m"
  }
#line 339 "ml_type_gen.m"
}

#line 145 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_types__145__1_2_p_0(
#line 145 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_7,
#line 145 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_16)
#line 145 "ml_type_gen.m"
{
#line 145 "ml_type_gen.m"
  {
#line 145 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 145 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_16, (MR_Integer) 0)));
#line 147 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___TypeDefn_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_16, (MR_Integer) 1)));

#line 148 "ml_type_gen.m"
    {
#line 148 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_util__type_ctor_needs_lowlevel_rep_2_p_0(ml_backend__ml_type_gen__Target_7, ml_backend__ml_type_gen__TypeCtor_11);
    }
#line 148 "ml_type_gen.m"
    ml_backend__ml_type_gen__succeeded = !(ml_backend__ml_type_gen__succeeded);
#line 145 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 145 "ml_type_gen.m"
  }
#line 145 "ml_type_gen.m"
}

#line 85 "ml_type_gen.m"
void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(
#line 85 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__HeadVar__1_1,
#line 85 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
#line 85 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__3_3)
#line 85 "ml_type_gen.m"
{
#line 85 "ml_type_gen.m"
  {
#line 85 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 85 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__2_2;
#line 85 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__3_3;

#line 85 "ml_type_gen.m"
    {
#line 85 "ml_type_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_type_gen__HeadVar__1_1, ml_backend__ml_type_gen__Cast_HeadVar1_4, ml_backend__ml_type_gen__Cast_HeadVar2_5);
#line 85 "ml_type_gen.m"
      return;
    }
#line 85 "ml_type_gen.m"
  }
#line 85 "ml_type_gen.m"
}

#line 85 "ml_type_gen.m"
MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(
#line 85 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_1,
#line 85 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2)
#line 85 "ml_type_gen.m"
{
#line 1467 "ml_backend.ml_type_gen.c"
  {
#line 1469 "ml_backend.ml_type_gen.c"
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__HeadVar__2_1 == ml_backend__ml_type_gen__HeadVar__2_2);

#line 1472 "ml_backend.ml_type_gen.c"
    return ml_backend__ml_type_gen__succeeded;
#line 1474 "ml_backend.ml_type_gen.c"
  }
#line 85 "ml_type_gen.m"
}

#line 1263 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1(
#line 1263 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg)
#line 1263 "ml_type_gen.m"
{
#line 1263 "ml_type_gen.m"
  {
#line 1263 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1263 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;

#line 1263 "ml_type_gen.m"
    {
#line 1263 "ml_type_gen.m"
      return ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1263__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))));
    }
#line 1263 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 1263 "ml_type_gen.m"
  }
#line 1263 "ml_type_gen.m"
}

#line 1221 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Mapping_9,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_10,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Type_11,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_12,
#line 1221 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_59,
#line 1221 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_60)
#line 1221 "ml_type_gen.m"
{
#line 1228 "ml_type_gen.m"
  {
#line 1228 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__QualName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 2)));
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 3)));
#line 1228 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_19;
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_20;
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ConstValue_22;
#line 1228 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__UnqualName_55;
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__UnqualSymName_56;
#line 1228 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__ForeignName_57;
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ExportConstant_58;
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_61_61;
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_67_67;
#line 1228 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_72_72;
#line 1229 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 0)));
#line 1229 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 1)));
#line 1229 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 4)));
#line 1231 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_20;
#line 1266 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv1_ForeignName_57;

#line 1230 "ml_type_gen.m"
    {
#line 1230 "ml_type_gen.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_type_gen__Args_17, &ml_backend__ml_type_gen__Arity_19);
    }
#line 1231 "ml_type_gen.m"
    {
#line 1231 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1231 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualName_16));
#line 1231 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_19));
#line 1231 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_8));
#line 1231 "ml_type_gen.m"
    }
#line 1231 "ml_type_gen.m"
    {
#line 1231 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__TagValues_10, ((MR_Box) (ml_backend__ml_type_gen__V_61_61)), &ml_backend__ml_type_gen__conv0_TagVal_20);
    }
#line 1231 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_20 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_20);
#line 1235 "ml_type_gen.m"
    if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1236 "ml_type_gen.m"
      {
#line 1236 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__Lang_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 1)));
#line 1236 "ml_type_gen.m"
        MR_String ml_backend__ml_type_gen__String_24 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 2)));
#line 1236 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_65_65;

#line 1237 "ml_type_gen.m"
        {
#line 1237 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1237 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_65_65, 1) = ((MR_Box) (ml_backend__ml_type_gen__Lang_23));
#line 1237 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_65_65, 2) = ((MR_Box) (ml_backend__ml_type_gen__String_24));
#line 1237 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_65_65, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_11));
#line 1237 "ml_type_gen.m"
        }
#line 1237 "ml_type_gen.m"
        {
#line 1237 "ml_type_gen.m"
          ml_backend__ml_type_gen__ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1237 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1237 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_65_65));
#line 1237 "ml_type_gen.m"
        }
#line 1236 "ml_type_gen.m"
      }
#line 1235 "ml_type_gen.m"
    else
#line 1235 "ml_type_gen.m"
      if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1233 "ml_type_gen.m"
        {
#line 1233 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__Int_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 1)));
#line 1233 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_66_66;

#line 1234 "ml_type_gen.m"
          {
#line 1234 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1234 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_66_66, 1) = ((MR_Box) (ml_backend__ml_type_gen__Int_21));
#line 1234 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_66_66, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_11));
#line 1234 "ml_type_gen.m"
          }
#line 1234 "ml_type_gen.m"
          {
#line 1234 "ml_type_gen.m"
            ml_backend__ml_type_gen__ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1234 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1234 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_66_66));
#line 1234 "ml_type_gen.m"
          }
#line 1233 "ml_type_gen.m"
        }
#line 1235 "ml_type_gen.m"
      else
#line 1258 "ml_type_gen.m"
        {
#line 1259 "ml_type_gen.m"
          {
#line 1259 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
#line 1259 "ml_type_gen.m"
            return;
          }
#line 1258 "ml_type_gen.m"
        }
#line 1263 "ml_type_gen.m"
    {
#line 1263 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1263 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[2]));
#line 1263 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 1) = ((MR_Box) (ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1));
#line 1263 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1263 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 3) = ((MR_Box) (ml_backend__ml_type_gen__Arity_19));
#line 1263 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1263 "ml_type_gen.m"
    }
#line 1263 "ml_type_gen.m"
    {
#line 1263 "ml_type_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_type_gen__V_67_67, (MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant arity != 0");
    }
#line 1264 "ml_type_gen.m"
    {
#line 1264 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualName_55 = mdbcomp__prim_data__unqualify_name_1_f_0(ml_backend__ml_type_gen__QualName_16);
    }
#line 1265 "ml_type_gen.m"
    {
#line 1265 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualSymName_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1265 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__UnqualSymName_56, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualName_55));
#line 1265 "ml_type_gen.m"
    }
#line 1266 "ml_type_gen.m"
    {
#line 1266 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_type_gen__Mapping_9, ((MR_Box) (ml_backend__ml_type_gen__UnqualSymName_56)), &ml_backend__ml_type_gen__conv1_ForeignName_57);
    }
#line 1266 "ml_type_gen.m"
    ml_backend__ml_type_gen__ForeignName_57 = ((MR_String) ml_backend__ml_type_gen__conv1_ForeignName_57);
#line 1268 "ml_type_gen.m"
    {
#line 1268 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1268 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_22));
#line 1268 "ml_type_gen.m"
    }
#line 1267 "ml_type_gen.m"
    {
#line 1267 "ml_type_gen.m"
      ml_backend__ml_type_gen__ExportConstant_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1267 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportConstant_58, 0) = ((MR_Box) (ml_backend__ml_type_gen__ForeignName_57));
#line 1267 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportConstant_58, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_72_72));
#line 1267 "ml_type_gen.m"
    }
#line 1269 "ml_type_gen.m"
    {
#line 1269 "ml_type_gen.m"
      MR_Word base;
#line 1269 "ml_type_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1269 "ml_type_gen.m"
      *ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_60 = base;
#line 1269 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__ExportConstant_58));
#line 1269 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_59));
#line 1269 "ml_type_gen.m"
    }
#line 1228 "ml_type_gen.m"
  }
#line 1221 "ml_type_gen.m"
}

#line 1191 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen___ModuleInfo_5,
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
#line 1191 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
#line 1191 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8)
#line 1191 "ml_type_gen.m"
{
#line 1195 "ml_type_gen.m"
  {
#line 1195 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;

#line 1195 "ml_type_gen.m"
    {
#line 1195 "ml_type_gen.m"
      ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(ml_backend__ml_type_gen__TypeTable_6, ml_backend__ml_type_gen__ExportedEnumInfo_7, ml_backend__ml_type_gen__MLDS_ExportedEnum_8);
#line 1195 "ml_type_gen.m"
      return;
    }
#line 1195 "ml_type_gen.m"
  }
#line 1191 "ml_type_gen.m"
}

#line 1050 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_field_6_p_0(
#line 1050 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1050 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1050 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Arg_9,
#line 1050 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1050 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16,
#line 1050 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17)
#line 1050 "ml_type_gen.m"
{
#line 1053 "ml_type_gen.m"
  {
#line 1053 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MaybeFieldName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_9, (MR_Integer) 0)));
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_9, (MR_Integer) 1)));
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Width_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_9, (MR_Integer) 2)));
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Type_28;
#line 1053 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__FieldName_29;
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_30_30;
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_31_31;
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_33_33;
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_40;
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EntityDefn_42;
#line 1053 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__DeclFlags_43;
#line 1054 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_9, (MR_Integer) 3)));

#line 1064 "ml_type_gen.m"
    {
#line 1064 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_13, ml_backend__ml_type_gen__Width_14);
    }
#line 1066 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1065 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Type_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1066 "ml_type_gen.m"
    else
#line 1067 "ml_type_gen.m"
      {
#line 1067 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Type_28 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_13);
      }
#line 1069 "ml_type_gen.m"
    {
#line 1069 "ml_type_gen.m"
      ml_backend__ml_type_gen__FieldName_29 = ml_backend__ml_code_util__ml_gen_field_name_2_f_0(ml_backend__ml_type_gen__MaybeFieldName_12, ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16);
    }
#line 1071 "ml_type_gen.m"
    {
#line 1071 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_29));
#line 1071 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "ml_type_gen.m"
    }
#line 1071 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__V_31_31);
#line 1072 "ml_type_gen.m"
    {
#line 1072 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_33_33 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_8);
    }
#line 1079 "ml_type_gen.m"
    {
#line 1079 "ml_type_gen.m"
      ml_backend__ml_type_gen__Name_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_40, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_30_30));
#line 1079 "ml_type_gen.m"
    }
#line 1082 "ml_type_gen.m"
    {
#line 1082 "ml_type_gen.m"
      ml_backend__ml_type_gen__EntityDefn_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_42, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_28));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_42, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "ml_type_gen.m"
    }
#line 1083 "ml_type_gen.m"
    {
#line 1083 "ml_type_gen.m"
      ml_backend__ml_type_gen__DeclFlags_43 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
#line 1084 "ml_type_gen.m"
    {
#line 1084 "ml_type_gen.m"
      MR_Word base;
#line 1084 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "ml_type_gen.m"
      *ml_backend__ml_type_gen__Defn_10 = base;
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_40));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_33_33));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_43));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_42));
#line 1084 "ml_type_gen.m"
    }
#line 1073 "ml_type_gen.m"
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16 + (MR_Integer) 1);
#line 1053 "ml_type_gen.m"
  }
#line 1050 "ml_type_gen.m"
}

#line 1039 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_info_member_6_p_0(
#line 1039 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1039 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1039 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeVar_9,
#line 1039 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1039 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_14,
#line 1039 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_15)
#line 1039 "ml_type_gen.m"
{
#line 1042 "ml_type_gen.m"
  {
#line 1042 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_13;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_16_16;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Type_29;
#line 1042 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__FieldName_30;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_31_31;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_32_32;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_34_34;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_41;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EntityDefn_43;
#line 1042 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__DeclFlags_44;

#line 1047 "ml_type_gen.m"
    {
#line 1047 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_16_16, 0) = ((MR_Box) (ml_backend__ml_type_gen__TypeVar_9));
#line 1047 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1047 "ml_type_gen.m"
    }
#line 1047 "ml_type_gen.m"
    {
#line 1047 "ml_type_gen.m"
      check_hlds__polymorphism__build_type_info_type_2_p_0(ml_backend__ml_type_gen__V_16_16, &ml_backend__ml_type_gen__Type_13);
    }
#line 1064 "ml_type_gen.m"
    {
#line 1064 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1066 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1065 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Type_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1066 "ml_type_gen.m"
    else
#line 1067 "ml_type_gen.m"
      {
#line 1067 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_13);
      }
#line 1069 "ml_type_gen.m"
    {
#line 1069 "ml_type_gen.m"
      ml_backend__ml_type_gen__FieldName_30 = ml_backend__ml_code_util__ml_gen_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_14);
    }
#line 1071 "ml_type_gen.m"
    {
#line 1071 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_32_32, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_30));
#line 1071 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "ml_type_gen.m"
    }
#line 1071 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__V_32_32);
#line 1072 "ml_type_gen.m"
    {
#line 1072 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_34_34 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_8);
    }
#line 1079 "ml_type_gen.m"
    {
#line 1079 "ml_type_gen.m"
      ml_backend__ml_type_gen__Name_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_41, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_31_31));
#line 1079 "ml_type_gen.m"
    }
#line 1082 "ml_type_gen.m"
    {
#line 1082 "ml_type_gen.m"
      ml_backend__ml_type_gen__EntityDefn_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_43, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_29));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "ml_type_gen.m"
    }
#line 1083 "ml_type_gen.m"
    {
#line 1083 "ml_type_gen.m"
      ml_backend__ml_type_gen__DeclFlags_44 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
#line 1084 "ml_type_gen.m"
    {
#line 1084 "ml_type_gen.m"
      MR_Word base;
#line 1084 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "ml_type_gen.m"
      *ml_backend__ml_type_gen__Defn_10 = base;
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_41));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_34_34));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_44));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_43));
#line 1084 "ml_type_gen.m"
    }
#line 1073 "ml_type_gen.m"
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_15 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_14 + (MR_Integer) 1);
#line 1042 "ml_type_gen.m"
  }
#line 1039 "ml_type_gen.m"
}

#line 1032 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_typeclass_info_member_6_p_0(
#line 1032 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1032 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1032 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Constraint_9,
#line 1032 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1032 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_13,
#line 1032 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_14)
#line 1032 "ml_type_gen.m"
{
#line 1035 "ml_type_gen.m"
  {
#line 1035 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1035 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_12;
#line 1035 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Type_27;
#line 1035 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__FieldName_28;
#line 1035 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_29_29;
#line 1035 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_30_30;
#line 1035 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_32_32;
#line 1035 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_39;
#line 1035 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EntityDefn_41;
#line 1035 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__DeclFlags_42;

#line 1036 "ml_type_gen.m"
    {
#line 1036 "ml_type_gen.m"
      check_hlds__polymorphism__build_typeclass_info_type_2_p_0(ml_backend__ml_type_gen__Constraint_9, &ml_backend__ml_type_gen__Type_12);
    }
#line 1064 "ml_type_gen.m"
    {
#line 1064 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1066 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1065 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Type_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1066 "ml_type_gen.m"
    else
#line 1067 "ml_type_gen.m"
      {
#line 1067 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_12);
      }
#line 1069 "ml_type_gen.m"
    {
#line 1069 "ml_type_gen.m"
      ml_backend__ml_type_gen__FieldName_28 = ml_backend__ml_code_util__ml_gen_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_13);
    }
#line 1071 "ml_type_gen.m"
    {
#line 1071 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1071 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_28));
#line 1071 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1071 "ml_type_gen.m"
    }
#line 1071 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__V_30_30);
#line 1072 "ml_type_gen.m"
    {
#line 1072 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_32_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_8);
    }
#line 1079 "ml_type_gen.m"
    {
#line 1079 "ml_type_gen.m"
      ml_backend__ml_type_gen__Name_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1079 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_39, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_29_29));
#line 1079 "ml_type_gen.m"
    }
#line 1082 "ml_type_gen.m"
    {
#line 1082 "ml_type_gen.m"
      ml_backend__ml_type_gen__EntityDefn_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_41, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_27));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1082 "ml_type_gen.m"
    }
#line 1083 "ml_type_gen.m"
    {
#line 1083 "ml_type_gen.m"
      ml_backend__ml_type_gen__DeclFlags_42 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
#line 1084 "ml_type_gen.m"
    {
#line 1084 "ml_type_gen.m"
      MR_Word base;
#line 1084 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1084 "ml_type_gen.m"
      *ml_backend__ml_type_gen__Defn_10 = base;
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_39));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_32_32));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_42));
#line 1084 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_41));
#line 1084 "ml_type_gen.m"
    }
#line 1073 "ml_type_gen.m"
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_14 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_13 + (MR_Integer) 1);
#line 1035 "ml_type_gen.m"
  }
#line 1032 "ml_type_gen.m"
}

#line 963 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_5_f_0(
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_7,
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_8,
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassType_9,
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassQualifier_10,
#line 963 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Member_11)
#line 963 "ml_type_gen.m"
{
#line 967 "ml_type_gen.m"
  {
#line 967 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Statement_12;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EntityName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Member_11, (MR_Integer) 0)));
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Member_11, (MR_Integer) 1)));
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Defn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Member_11, (MR_Integer) 3)));
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_20;
#line 967 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__Name_29;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__VarName_30;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__QualVarName_37;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Param_38;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Field_39;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_54_54;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_57_57;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_58_58;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_59_59;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_61_61;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_62_62;
#line 967 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_63_63;
#line 968 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Flags_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Member_11, (MR_Integer) 2)));
#line 984 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__VarName0_27;
#line 984 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__Name0_28;
#line 979 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_43_43;
#line 979 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_44_44;

#line 972 "ml_type_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_type_gen__Defn_16)) == (MR_mktag((MR_Integer) 1))))
#line 970 "ml_type_gen.m"
      {
#line 970 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___Init_18;
#line 970 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen___GCStatement_19;

#line 970 "ml_type_gen.m"
        ml_backend__ml_type_gen__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_16, (MR_Integer) 0)));
#line 970 "ml_type_gen.m"
        ml_backend__ml_type_gen___Init_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_16, (MR_Integer) 1)));
#line 970 "ml_type_gen.m"
        ml_backend__ml_type_gen___GCStatement_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_16, (MR_Integer) 2)));
#line 970 "ml_type_gen.m"
      }
#line 972 "ml_type_gen.m"
    else
#line 975 "ml_type_gen.m"
      {
#line 976 "ml_type_gen.m"
        {
#line 976 "ml_type_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "non-data member");
        }
#line 975 "ml_type_gen.m"
      }
#line 979 "ml_type_gen.m"
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__EntityName_13)) == (MR_mktag((MR_Integer) 1)));
#line 979 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 979 "ml_type_gen.m"
      {
#line 979 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityName_13, (MR_Integer) 0)));
#line 979 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 979 "ml_type_gen.m"
        if (ml_backend__ml_type_gen__succeeded)
#line 979 "ml_type_gen.m"
          {
#line 979 "ml_type_gen.m"
            ml_backend__ml_type_gen__VarName0_27 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_type_gen__V_43_43), (MR_Integer) 1);
#line 980 "ml_type_gen.m"
            ml_backend__ml_type_gen__Name0_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__VarName0_27, (MR_Integer) 0)));
#line 980 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__VarName0_27, (MR_Integer) 1)));
#line 980 "ml_type_gen.m"
            ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 979 "ml_type_gen.m"
          }
#line 979 "ml_type_gen.m"
      }
#line 984 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 982 "ml_type_gen.m"
      {
#line 982 "ml_type_gen.m"
        ml_backend__ml_type_gen__Name_29 = ml_backend__ml_type_gen__Name0_28;
#line 983 "ml_type_gen.m"
        ml_backend__ml_type_gen__VarName_30 = ml_backend__ml_type_gen__VarName0_27;
#line 982 "ml_type_gen.m"
      }
#line 984 "ml_type_gen.m"
    else
#line 985 "ml_type_gen.m"
      {
#line 985 "ml_type_gen.m"
        {
#line 985 "ml_type_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "non-var member");
        }
#line 985 "ml_type_gen.m"
      }
#line 2333 "ml_backend.ml_type_gen.c"
    if ((ml_backend__ml_type_gen__Target_7 == (MR_Integer) 0))
#line 2335 "ml_backend.ml_type_gen.c"
      {
#line 997 "ml_type_gen.m"
        {
#line 997 "ml_type_gen.m"
          ml_backend__ml_type_gen__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 997 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_10));
#line 997 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 1) = ((MR_Box) ((MR_Integer) 1));
#line 997 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_30));
#line 997 "ml_type_gen.m"
        }
#line 2349 "ml_backend.ml_type_gen.c"
      }
#line 2351 "ml_backend.ml_type_gen.c"
    else
#line 2353 "ml_backend.ml_type_gen.c"
      if ((ml_backend__ml_type_gen__Target_7 == (MR_Integer) 2))
#line 992 "ml_type_gen.m"
        {
#line 992 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__ModuleName_32;
#line 990 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_49_49;
#line 990 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__V_35_35;
#line 990 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_36_36;
#line 990 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_33_33;
#line 990 "ml_type_gen.m"
          MR_String ml_backend__ml_type_gen__V_34_34;

#line 990 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 990 "ml_type_gen.m"
          if (ml_backend__ml_type_gen__succeeded)
#line 990 "ml_type_gen.m"
            {
#line 990 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 1)));
#line 990 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 2)));
#line 990 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 3)));
#line 990 "ml_type_gen.m"
              ml_backend__ml_type_gen__ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_49_49, (MR_Integer) 0)));
#line 990 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_49_49, (MR_Integer) 1)));
#line 990 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_49_49, (MR_Integer) 2)));
#line 990 "ml_type_gen.m"
              ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 990 "ml_type_gen.m"
            }
#line 992 "ml_type_gen.m"
          if (ml_backend__ml_type_gen__succeeded)
#line 991 "ml_type_gen.m"
            {
#line 991 "ml_type_gen.m"
              {
#line 991 "ml_type_gen.m"
                ml_backend__ml_type_gen__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 991 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ModuleName_32));
#line 991 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 991 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_30));
#line 991 "ml_type_gen.m"
              }
#line 991 "ml_type_gen.m"
            }
#line 992 "ml_type_gen.m"
          else
#line 993 "ml_type_gen.m"
            {
#line 993 "ml_type_gen.m"
              {
#line 993 "ml_type_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
              }
#line 993 "ml_type_gen.m"
            }
#line 992 "ml_type_gen.m"
        }
#line 2423 "ml_backend.ml_type_gen.c"
      else
#line 2425 "ml_backend.ml_type_gen.c"
        if ((ml_backend__ml_type_gen__Target_7 == (MR_Integer) 4))
#line 2427 "ml_backend.ml_type_gen.c"
          {
#line 917 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__RequiresQualifiedParams_70;
#line 917 "ml_type_gen.m"
            MR_Box ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_70;

#line 917 "ml_type_gen.m"
            {
#line 917 "ml_type_gen.m"
              ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_70 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_requires_module_qualified_params\'/1", (MR_String) "target erlang");
            }
#line 917 "ml_type_gen.m"
            ml_backend__ml_type_gen__RequiresQualifiedParams_70 = ((MR_Word) ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_70);
#line 2441 "ml_backend.ml_type_gen.c"
          }
#line 2443 "ml_backend.ml_type_gen.c"
        else
#line 2445 "ml_backend.ml_type_gen.c"
          if ((ml_backend__ml_type_gen__Target_7 == (MR_Integer) 1))
#line 2447 "ml_backend.ml_type_gen.c"
            {
#line 997 "ml_type_gen.m"
              {
#line 997 "ml_type_gen.m"
                ml_backend__ml_type_gen__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 997 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_10));
#line 997 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 1) = ((MR_Box) ((MR_Integer) 1));
#line 997 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_30));
#line 997 "ml_type_gen.m"
              }
#line 2461 "ml_backend.ml_type_gen.c"
            }
#line 2463 "ml_backend.ml_type_gen.c"
          else
#line 992 "ml_type_gen.m"
            {
#line 992 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__ModuleName_89;
#line 990 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_84_84;
#line 990 "ml_type_gen.m"
              MR_Integer ml_backend__ml_type_gen__V_76_76;
#line 990 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_77_77;
#line 990 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_78_78;
#line 990 "ml_type_gen.m"
              MR_String ml_backend__ml_type_gen__V_79_79;

#line 990 "ml_type_gen.m"
              ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 990 "ml_type_gen.m"
              if (ml_backend__ml_type_gen__succeeded)
#line 990 "ml_type_gen.m"
                {
#line 990 "ml_type_gen.m"
                  ml_backend__ml_type_gen__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 1)));
#line 990 "ml_type_gen.m"
                  ml_backend__ml_type_gen__V_76_76 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 2)));
#line 990 "ml_type_gen.m"
                  ml_backend__ml_type_gen__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 3)));
#line 990 "ml_type_gen.m"
                  ml_backend__ml_type_gen__ModuleName_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_84_84, (MR_Integer) 0)));
#line 990 "ml_type_gen.m"
                  ml_backend__ml_type_gen__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_84_84, (MR_Integer) 1)));
#line 990 "ml_type_gen.m"
                  ml_backend__ml_type_gen__V_79_79 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_84_84, (MR_Integer) 2)));
#line 990 "ml_type_gen.m"
                  ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 990 "ml_type_gen.m"
                }
#line 992 "ml_type_gen.m"
              if (ml_backend__ml_type_gen__succeeded)
#line 991 "ml_type_gen.m"
                {
#line 991 "ml_type_gen.m"
                  {
#line 991 "ml_type_gen.m"
                    ml_backend__ml_type_gen__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 991 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ModuleName_89));
#line 991 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 991 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_30));
#line 991 "ml_type_gen.m"
                  }
#line 991 "ml_type_gen.m"
                }
#line 992 "ml_type_gen.m"
              else
#line 993 "ml_type_gen.m"
                {
#line 993 "ml_type_gen.m"
                  {
#line 993 "ml_type_gen.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
                  }
#line 993 "ml_type_gen.m"
                }
#line 992 "ml_type_gen.m"
            }
#line 999 "ml_type_gen.m"
    {
#line 999 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 999 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_54_54, 0) = ((MR_Box) (ml_backend__ml_type_gen__QualVarName_37));
#line 999 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_54_54, 1) = ((MR_Box) (ml_backend__ml_type_gen__Type_20));
#line 999 "ml_type_gen.m"
    }
#line 999 "ml_type_gen.m"
    {
#line 999 "ml_type_gen.m"
      ml_backend__ml_type_gen__Param_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 999 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Param_38, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_54_54));
#line 999 "ml_type_gen.m"
    }
#line 1000 "ml_type_gen.m"
    {
#line 1000 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1000 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1000 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_57_57, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_9));
#line 1000 "ml_type_gen.m"
    }
#line 1001 "ml_type_gen.m"
    {
#line 1001 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_10));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_59_59, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_59_59, 2) = ((MR_Box) (ml_backend__ml_type_gen__Name_29));
#line 1001 "ml_type_gen.m"
    }
#line 1002 "ml_type_gen.m"
    {
#line 1002 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1002 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1002 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_9));
#line 1002 "ml_type_gen.m"
    }
#line 1001 "ml_type_gen.m"
    {
#line 1001 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_59_59));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_58_58, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_61_61));
#line 1001 "ml_type_gen.m"
    }
#line 1000 "ml_type_gen.m"
    {
#line 1000 "ml_type_gen.m"
      ml_backend__ml_type_gen__Field_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_3[1])));
#line 1000 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_57_57));
#line 1000 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_58_58));
#line 1000 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 3) = ((MR_Box) (ml_backend__ml_type_gen__Type_20));
#line 1000 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_8));
#line 1000 "ml_type_gen.m"
    }
#line 1007 "ml_type_gen.m"
    {
#line 1007 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_type_gen__Field_39));
#line 1007 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_type_gen__Param_38));
#line 1007 "ml_type_gen.m"
    }
#line 1007 "ml_type_gen.m"
    {
#line 1007 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1007 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1007 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_62_62, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_63_63));
#line 1007 "ml_type_gen.m"
    }
#line 1007 "ml_type_gen.m"
    {
#line 1007 "ml_type_gen.m"
      ml_backend__ml_type_gen__Statement_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1007 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Statement_12, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_62_62));
#line 1007 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Statement_12, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_14));
#line 1007 "ml_type_gen.m"
    }
#line 967 "ml_type_gen.m"
    return ml_backend__ml_type_gen__Statement_12;
#line 967 "ml_type_gen.m"
  }
#line 963 "ml_type_gen.m"
}

#line 952 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
#line 952 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1)
#line 952 "ml_type_gen.m"
{
#line 954 "ml_type_gen.m"
  {
#line 954 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 954 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Arg_7;
#line 954 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 954 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Defn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 954 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 954 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 957 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_8;
#line 957 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__GCStatement_10;
#line 955 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Init_9;

#line 955 "ml_type_gen.m"
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Defn_6)) == (MR_mktag((MR_Integer) 1)));
#line 955 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 955 "ml_type_gen.m"
      {
#line 955 "ml_type_gen.m"
        ml_backend__ml_type_gen__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_6, (MR_Integer) 0)));
#line 955 "ml_type_gen.m"
        ml_backend__ml_type_gen___Init_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_6, (MR_Integer) 1)));
#line 955 "ml_type_gen.m"
        ml_backend__ml_type_gen__GCStatement_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_6, (MR_Integer) 2)));
#line 956 "ml_type_gen.m"
        {
#line 956 "ml_type_gen.m"
          ml_backend__ml_type_gen__Arg_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 956 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_7, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_3));
#line 956 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_7, 1) = ((MR_Box) (ml_backend__ml_type_gen__Type_8));
#line 956 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_7, 2) = ((MR_Box) (ml_backend__ml_type_gen__GCStatement_10));
#line 956 "ml_type_gen.m"
        }
#line 955 "ml_type_gen.m"
      }
#line 955 "ml_type_gen.m"
    else
#line 958 "ml_type_gen.m"
      {
#line 958 "ml_type_gen.m"
        {
#line 958 "ml_type_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.make_arg\'/1", (MR_String) "non-data member");
        }
#line 958 "ml_type_gen.m"
      }
#line 954 "ml_type_gen.m"
    return ml_backend__ml_type_gen__Arg_7;
#line 954 "ml_type_gen.m"
  }
#line 952 "ml_type_gen.m"
}

#line 893 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
#line 893 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1)
#line 893 "ml_type_gen.m"
{
#line 895 "ml_type_gen.m"
  {
#line 895 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 895 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__HeadVar__2_2;

#line 895 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__HeadVar__1_1 == (MR_Integer) 0))
#line 895 "ml_type_gen.m"
      ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 895 "ml_type_gen.m"
    else
#line 895 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__HeadVar__1_1 == (MR_Integer) 2))
#line 897 "ml_type_gen.m"
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 895 "ml_type_gen.m"
      else
#line 895 "ml_type_gen.m"
        if ((ml_backend__ml_type_gen__HeadVar__1_1 == (MR_Integer) 4))
#line 899 "ml_type_gen.m"
          {
#line 900 "ml_type_gen.m"
            MR_Box ml_backend__ml_type_gen__conv0_HeadVar__2_2;

#line 900 "ml_type_gen.m"
            {
#line 900 "ml_type_gen.m"
              ml_backend__ml_type_gen__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_uses_empty_base_classes\'/1", (MR_String) "target erlang");
            }
#line 900 "ml_type_gen.m"
            ml_backend__ml_type_gen__HeadVar__2_2 = ((MR_Word) ml_backend__ml_type_gen__conv0_HeadVar__2_2);
#line 899 "ml_type_gen.m"
          }
#line 895 "ml_type_gen.m"
        else
#line 895 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__HeadVar__1_1 == (MR_Integer) 1))
#line 896 "ml_type_gen.m"
            ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 895 "ml_type_gen.m"
          else
#line 898 "ml_type_gen.m"
            ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 895 "ml_type_gen.m"
    return ml_backend__ml_type_gen__HeadVar__2_2;
#line 895 "ml_type_gen.m"
  }
#line 893 "ml_type_gen.m"
}

#line 746 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_3(
#line 746 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 746 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 746 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 746 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 746 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4)
#line 746 "ml_type_gen.m"
{
#line 746 "ml_type_gen.m"
  {
#line 746 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 746 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv7_Defn_10;
#line 746 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__conv6_STATE_VARIABLE_ArgNum_17;

#line 746 "ml_type_gen.m"
    {
#line 746 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_ctor_field_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv7_Defn_10, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_3), &ml_backend__ml_type_gen__conv6_STATE_VARIABLE_ArgNum_17);
    }
#line 746 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv7_Defn_10));
#line 746 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_type_gen__conv6_STATE_VARIABLE_ArgNum_17));
#line 746 "ml_type_gen.m"
  }
#line 746 "ml_type_gen.m"
}

#line 739 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_2(
#line 739 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 739 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 739 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 739 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 739 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4)
#line 739 "ml_type_gen.m"
{
#line 739 "ml_type_gen.m"
  {
#line 739 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 739 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv4_Defn_10;
#line 739 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__conv3_STATE_VARIABLE_ArgNum_14;

#line 739 "ml_type_gen.m"
    {
#line 739 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_typeclass_info_member_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv4_Defn_10, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_3), &ml_backend__ml_type_gen__conv3_STATE_VARIABLE_ArgNum_14);
    }
#line 739 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv4_Defn_10));
#line 739 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_type_gen__conv3_STATE_VARIABLE_ArgNum_14));
#line 739 "ml_type_gen.m"
  }
#line 739 "ml_type_gen.m"
}

#line 737 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_1(
#line 737 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 737 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 737 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 737 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 737 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4)
#line 737 "ml_type_gen.m"
{
#line 737 "ml_type_gen.m"
  {
#line 737 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 737 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv1_Defn_10;
#line 737 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_15;

#line 737 "ml_type_gen.m"
    {
#line 737 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_type_info_member_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv1_Defn_10, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_3), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_15);
    }
#line 737 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv1_Defn_10));
#line 737 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_15));
#line 737 "ml_type_gen.m"
  }
#line 737 "ml_type_gen.m"
}

#line 787 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_4(
#line 787 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 787 "ml_type_gen.m"
{
#line 787 "ml_type_gen.m"
  {
#line 787 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 787 "ml_type_gen.m"
    MR_builtin_longjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__commit_0, 1);
#line 787 "ml_type_gen.m"
  }
#line 787 "ml_type_gen.m"
}

#line 787 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_6(
#line 787 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 787 "ml_type_gen.m"
{
#line 787 "ml_type_gen.m"
  {
#line 787 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 787 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106 = ((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__conv9_RA_106);
#line 787 "ml_type_gen.m"
    {
#line 787 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_5(ml_backend__ml_type_gen__env_ptr);
#line 787 "ml_type_gen.m"
      return;
    }
#line 787 "ml_type_gen.m"
  }
#line 787 "ml_type_gen.m"
}

#line 787 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_5(
#line 787 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 787 "ml_type_gen.m"
{
#line 787 "ml_type_gen.m"
  {
#line 787 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 787 "ml_type_gen.m"
    {
#line 788 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_68_68;
#line 788 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_69_69;
#line 788 "ml_type_gen.m"
      MR_Integer ml_backend__ml_type_gen__V_70_70;

#line 788 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106)) == (MR_mktag((MR_Integer) 2)));
#line 788 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 788 "ml_type_gen.m"
        {
#line 788 "ml_type_gen.m"
          {
#line 788 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106, (MR_Integer) 0)));
#line 788 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106, (MR_Integer) 1)));
#line 788 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106, (MR_Integer) 2)));
#line 788 "ml_type_gen.m"
          }
#line 788 "ml_type_gen.m"
          {
#line 788 "ml_type_gen.m"
            ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_4(ml_backend__ml_type_gen__env_ptr);
#line 788 "ml_type_gen.m"
            return;
          }
#line 788 "ml_type_gen.m"
        }
#line 787 "ml_type_gen.m"
    }
#line 787 "ml_type_gen.m"
  }
#line 787 "ml_type_gen.m"
}

#line 787 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_7(
#line 787 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 787 "ml_type_gen.m"
{
#line 787 "ml_type_gen.m"
  {
#line 787 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 787 "ml_type_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__commit_0) == 0)
#line 787 "ml_type_gen.m"
      {
#line 787 "ml_type_gen.m"
        {
#line 787 "ml_type_gen.m"
          {
#line 787 "ml_type_gen.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, &(ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__conv9_RA_106, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RAs_66, ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_6, ml_backend__ml_type_gen__env_ptr);
          }
#line 787 "ml_type_gen.m"
        }
#line 787 "ml_type_gen.m"
        (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = MR_FALSE;
#line 787 "ml_type_gen.m"
      }
#line 787 "ml_type_gen.m"
    else
#line 787 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = MR_TRUE;
#line 787 "ml_type_gen.m"
  }
#line 787 "ml_type_gen.m"
}

#line 660 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0(
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_13,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_14,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_15,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_16,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_17,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_18,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_19,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_20,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Members0_21,
#line 660 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_Members_22,
#line 660 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_CtorMethods0_23,
#line 660 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_CtorMethods_24)
#line 660 "ml_type_gen.m"
{
#line 660 "ml_type_gen.m"
  {
#line 660 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s ml_backend__ml_type_gen__env;

#line 668 "ml_type_gen.m"
    {
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TypeCtorInfo_107_107;
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__ExistQTVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 0)));
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Constraints_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 1)));
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__CtorName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 2)));
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 3)));
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Context_30;
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_Context_31;
#line 668 "ml_type_gen.m"
      MR_Integer ml_backend__ml_type_gen__CtorArity_32;
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Globals_33;
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Target_34;
#line 668 "ml_type_gen.m"
      MR_String ml_backend__ml_type_gen__UnqualCtorName_35;
#line 668 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TagVal_36;
#line 669 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen___Ctxt_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 4)));
#line 714 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__ReservedAddr_37;

#line 673 "ml_type_gen.m"
      {
#line 673 "ml_type_gen.m"
        hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_18, &ml_backend__ml_type_gen__Context_30);
      }
#line 674 "ml_type_gen.m"
      {
#line 674 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Context_31 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_30);
      }
#line 3102 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen__TypeCtorInfo_107_107 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 677 "ml_type_gen.m"
      {
#line 677 "ml_type_gen.m"
        mercury__list__length_2_p_0(ml_backend__ml_type_gen__TypeCtorInfo_107_107, ml_backend__ml_type_gen__Args_28, &ml_backend__ml_type_gen__CtorArity_32);
      }
#line 678 "ml_type_gen.m"
      {
#line 678 "ml_type_gen.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_13, &ml_backend__ml_type_gen__Globals_33);
      }
#line 679 "ml_type_gen.m"
      {
#line 679 "ml_type_gen.m"
        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_33, &ml_backend__ml_type_gen__Target_34);
      }
#line 680 "ml_type_gen.m"
      {
#line 680 "ml_type_gen.m"
        ml_backend__ml_type_gen__UnqualCtorName_35 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__TypeCtor_17, ml_backend__ml_type_gen__CtorName_27, ml_backend__ml_type_gen__CtorArity_32);
      }
#line 683 "ml_type_gen.m"
      {
#line 683 "ml_type_gen.m"
        ml_backend__ml_type_gen__TagVal_36 = ml_backend__ml_type_gen__get_tagval_3_f_0(ml_backend__ml_type_gen__TypeCtor_17, ml_backend__ml_type_gen__ConsTagValues_19, ml_backend__ml_type_gen__Ctor_20);
      }
#line 684 "ml_type_gen.m"
      {
#line 684 "ml_type_gen.m"
        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(ml_backend__ml_type_gen__TagVal_36, &ml_backend__ml_type_gen__ReservedAddr_37);
      }
#line 714 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 712 "ml_type_gen.m"
        {
#line 685 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_38_38;
#line 685 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_39_39;
#line 685 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__V_40_40;

#line 685 "ml_type_gen.m"
          (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__ReservedAddr_37)) == (MR_mktag((MR_Integer) 2)));
#line 685 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 685 "ml_type_gen.m"
            {
#line 685 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 0)));
#line 685 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 1)));
#line 685 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 2)));
#line 694 "ml_type_gen.m"
              {
#line 694 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjName_41;
#line 694 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42;
#line 694 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__EntityDefn_44;
#line 694 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__DeclFlags_45;
#line 694 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46;
#line 694 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_85_85;
#line 694 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_87_87;

#line 693 "ml_type_gen.m"
                {
#line 693 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_ReservedObjName_41 = ml_backend__ml_code_util__ml_format_reserved_object_name_2_f_0(ml_backend__ml_type_gen__UnqualCtorName_35, ml_backend__ml_type_gen__CtorArity_32);
                }
#line 696 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__MLDS_ReservedObjName_41);
#line 696 "ml_type_gen.m"
                {
#line 696 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_85_85));
#line 696 "ml_type_gen.m"
                }
#line 701 "ml_type_gen.m"
                {
#line 701 "ml_type_gen.m"
                  ml_backend__ml_type_gen__EntityDefn_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 701 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 0) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_16));
#line 701 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "ml_type_gen.m"
                }
#line 703 "ml_type_gen.m"
                {
#line 703 "ml_type_gen.m"
                  ml_backend__ml_type_gen__V_87_87 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
                }
#line 703 "ml_type_gen.m"
                {
#line 703 "ml_type_gen.m"
                  ml_backend__ml_type_gen__DeclFlags_45 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_type_gen__V_87_87, (MR_Integer) 0);
                }
#line 705 "ml_type_gen.m"
                {
#line 705 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 705 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42));
#line 705 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_31));
#line 705 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_45));
#line 705 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_44));
#line 705 "ml_type_gen.m"
                }
#line 707 "ml_type_gen.m"
                {
#line 707 "ml_type_gen.m"
                  MR_Word base;
#line 707 "ml_type_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 707 "ml_type_gen.m"
                  *ml_backend__ml_type_gen__MLDS_Members_22 = base;
#line 707 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46));
#line 707 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Members0_21));
#line 707 "ml_type_gen.m"
                }
#line 694 "ml_type_gen.m"
              }
#line 685 "ml_type_gen.m"
            }
#line 685 "ml_type_gen.m"
          else
#line 711 "ml_type_gen.m"
            *ml_backend__ml_type_gen__MLDS_Members_22 = ml_backend__ml_type_gen__MLDS_Members0_21;
#line 713 "ml_type_gen.m"
          *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = ml_backend__ml_type_gen__MLDS_CtorMethods0_23;
#line 712 "ml_type_gen.m"
        }
#line 714 "ml_type_gen.m"
      else
#line 718 "ml_type_gen.m"
        {
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TypeCtorInfo_124_124;
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__ExtraMembers_48;
#line 718 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__ArgNum2_49;
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__OrdinaryMembers_57;
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__Members_59;
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__MaybeSecTagVal_60;
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__UsesConstructors_61;
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__UsesBaseClass_62;
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__Ctors_74;
#line 718 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_91_91;
#line 746 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen___ArgNum3_58;
#line 746 "ml_type_gen.m"
          MR_Box ml_backend__ml_type_gen__conv8__ArgNum3_58;

#line 732 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__ExistQTVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "ml_type_gen.m"
            {
#line 730 "ml_type_gen.m"
              ml_backend__ml_type_gen__ExtraMembers_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 731 "ml_type_gen.m"
              ml_backend__ml_type_gen__ArgNum2_49 = (MR_Integer) 1;
#line 728 "ml_type_gen.m"
            }
#line 732 "ml_type_gen.m"
          else
#line 733 "ml_type_gen.m"
            {
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeInfo_108_108;
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_113_113;
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_114_114;
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__ConstrainedTVars_52;
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__UnconstrainedTVars_53;
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeInfoMembers_54;
#line 733 "ml_type_gen.m"
              MR_Integer ml_backend__ml_type_gen__ArgNum1_55;
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeClassInfoMembers_56;
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_89_89;
#line 733 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_90_90;
#line 737 "ml_type_gen.m"
              MR_Box ml_backend__ml_type_gen__conv2_ArgNum1_55;
#line 739 "ml_type_gen.m"
              MR_Box ml_backend__ml_type_gen__conv5_ArgNum2_49;

#line 734 "ml_type_gen.m"
              {
#line 734 "ml_type_gen.m"
                parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ml_backend__ml_type_gen__Constraints_26, &ml_backend__ml_type_gen__ConstrainedTVars_52);
              }
#line 3324 "ml_backend.ml_type_gen.c"
              ml_backend__ml_type_gen__TypeInfo_108_108 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[1];
#line 735 "ml_type_gen.m"
              {
#line 735 "ml_type_gen.m"
                mercury__list__delete_elems_3_p_0(ml_backend__ml_type_gen__TypeInfo_108_108, ml_backend__ml_type_gen__ExistQTVars_25, ml_backend__ml_type_gen__ConstrainedTVars_52, &ml_backend__ml_type_gen__UnconstrainedTVars_53);
              }
#line 737 "ml_type_gen.m"
              {
#line 737 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[2]));
#line 737 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_1));
#line 737 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
#line 737 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_30));
#line 737 "ml_type_gen.m"
              }
#line 3347 "ml_backend.ml_type_gen.c"
              ml_backend__ml_type_gen__TypeCtorInfo_113_113 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 3349 "ml_backend.ml_type_gen.c"
              ml_backend__ml_type_gen__TypeCtorInfo_114_114 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 737 "ml_type_gen.m"
              {
#line 737 "ml_type_gen.m"
                mercury__list__map_foldl_5_p_0(ml_backend__ml_type_gen__TypeInfo_108_108, ml_backend__ml_type_gen__TypeCtorInfo_113_113, ml_backend__ml_type_gen__TypeCtorInfo_114_114, ml_backend__ml_type_gen__V_89_89, ml_backend__ml_type_gen__UnconstrainedTVars_53, &ml_backend__ml_type_gen__TypeInfoMembers_54, ((MR_Box) ((MR_Integer) 1)), &ml_backend__ml_type_gen__conv2_ArgNum1_55);
              }
#line 737 "ml_type_gen.m"
              ml_backend__ml_type_gen__ArgNum1_55 = ((MR_Integer) ml_backend__ml_type_gen__conv2_ArgNum1_55);
#line 739 "ml_type_gen.m"
              {
#line 739 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 739 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[3]));
#line 739 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_2));
#line 739 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 739 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
#line 739 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_30));
#line 739 "ml_type_gen.m"
              }
#line 739 "ml_type_gen.m"
              {
#line 739 "ml_type_gen.m"
                mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ml_backend__ml_type_gen__TypeCtorInfo_113_113, ml_backend__ml_type_gen__TypeCtorInfo_114_114, ml_backend__ml_type_gen__V_90_90, ml_backend__ml_type_gen__Constraints_26, &ml_backend__ml_type_gen__TypeClassInfoMembers_56, ((MR_Box) (ml_backend__ml_type_gen__ArgNum1_55)), &ml_backend__ml_type_gen__conv5_ArgNum2_49);
              }
#line 739 "ml_type_gen.m"
              ml_backend__ml_type_gen__ArgNum2_49 = ((MR_Integer) ml_backend__ml_type_gen__conv5_ArgNum2_49);
#line 741 "ml_type_gen.m"
              {
#line 741 "ml_type_gen.m"
                ml_backend__ml_type_gen__ExtraMembers_48 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_113_113, ml_backend__ml_type_gen__TypeInfoMembers_54, ml_backend__ml_type_gen__TypeClassInfoMembers_56);
              }
#line 733 "ml_type_gen.m"
            }
#line 746 "ml_type_gen.m"
          {
#line 746 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 746 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[4]));
#line 746 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_3));
#line 746 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 746 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
#line 746 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_30));
#line 746 "ml_type_gen.m"
          }
#line 3404 "ml_backend.ml_type_gen.c"
          ml_backend__ml_type_gen__TypeCtorInfo_124_124 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 746 "ml_type_gen.m"
          {
#line 746 "ml_type_gen.m"
            mercury__list__map_foldl_5_p_0(ml_backend__ml_type_gen__TypeCtorInfo_107_107, ml_backend__ml_type_gen__TypeCtorInfo_124_124, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_type_gen__V_91_91, ml_backend__ml_type_gen__Args_28, &ml_backend__ml_type_gen__OrdinaryMembers_57, ((MR_Box) (ml_backend__ml_type_gen__ArgNum2_49)), &ml_backend__ml_type_gen__conv8__ArgNum3_58);
          }
#line 746 "ml_type_gen.m"
          ml_backend__ml_type_gen___ArgNum3_58 = ((MR_Integer) ml_backend__ml_type_gen__conv8__ArgNum3_58);
#line 749 "ml_type_gen.m"
          {
#line 749 "ml_type_gen.m"
            ml_backend__ml_type_gen__Members_59 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_124_124, ml_backend__ml_type_gen__ExtraMembers_48, ml_backend__ml_type_gen__OrdinaryMembers_57);
          }
#line 753 "ml_type_gen.m"
          {
#line 753 "ml_type_gen.m"
            ml_backend__ml_type_gen__MaybeSecTagVal_60 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_36);
          }
#line 754 "ml_type_gen.m"
          {
#line 754 "ml_type_gen.m"
            ml_backend__ml_type_gen__UsesConstructors_61 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(ml_backend__ml_type_gen__Target_34);
          }
#line 755 "ml_type_gen.m"
          {
#line 755 "ml_type_gen.m"
            ml_backend__ml_type_gen__UsesBaseClass_62 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_type_gen__TagVal_36);
          }
#line 800 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__UsesConstructors_61 == (MR_Integer) 0))
#line 802 "ml_type_gen.m"
            ml_backend__ml_type_gen__Ctors_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 800 "ml_type_gen.m"
          else
#line 757 "ml_type_gen.m"
            {
#line 757 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__CtorClassType_63;
#line 757 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__CtorClassQualifier_64;
#line 757 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__CtorFunction_65;
#line 791 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_71_71;
#line 791 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_72_72;

#line 762 "ml_type_gen.m"
              if ((ml_backend__ml_type_gen__UsesBaseClass_62 == (MR_Integer) 0))
#line 763 "ml_type_gen.m"
                {
#line 763 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__V_92_92;

#line 765 "ml_type_gen.m"
                  {
#line 765 "ml_type_gen.m"
                    ml_backend__ml_type_gen__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 765 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_92_92, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_15));
#line 765 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_92_92, 1) = ((MR_Box) ((MR_Integer) 1));
#line 765 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_92_92, 2) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_35));
#line 765 "ml_type_gen.m"
                  }
#line 764 "ml_type_gen.m"
                  {
#line 764 "ml_type_gen.m"
                    ml_backend__ml_type_gen__CtorClassType_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 764 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 764 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_63, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_92_92));
#line 764 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_63, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_32));
#line 764 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_63, 3) = ((MR_Box) ((MR_Integer) 0));
#line 764 "ml_type_gen.m"
                  }
#line 767 "ml_type_gen.m"
                  {
#line 767 "ml_type_gen.m"
                    ml_backend__ml_type_gen__CtorClassQualifier_64 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassQualifier_15, (MR_Integer) 1, ml_backend__ml_type_gen__UnqualCtorName_35, ml_backend__ml_type_gen__CtorArity_32);
                  }
#line 763 "ml_type_gen.m"
                }
#line 762 "ml_type_gen.m"
              else
#line 759 "ml_type_gen.m"
                {
#line 760 "ml_type_gen.m"
                  ml_backend__ml_type_gen__CtorClassType_63 = ml_backend__ml_type_gen__BaseClassId_14;
#line 761 "ml_type_gen.m"
                  ml_backend__ml_type_gen__CtorClassQualifier_64 = ml_backend__ml_type_gen__BaseClassQualifier_15;
#line 759 "ml_type_gen.m"
                }
#line 770 "ml_type_gen.m"
              {
#line 770 "ml_type_gen.m"
                ml_backend__ml_type_gen__CtorFunction_65 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassId_14, ml_backend__ml_type_gen__CtorClassType_63, ml_backend__ml_type_gen__CtorClassQualifier_64, ml_backend__ml_type_gen__SecondaryTagClassId_16, ml_backend__ml_type_gen__MaybeSecTagVal_60, ml_backend__ml_type_gen__Members_59, ml_backend__ml_type_gen__MLDS_Context_31);
              }
#line 782 "ml_type_gen.m"
              (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = (ml_backend__ml_type_gen__Target_34 == (MR_Integer) 3);
#line 783 "ml_type_gen.m"
              if (!((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded))
#line 785 "ml_type_gen.m"
                {
#line 785 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__V_96_96;

#line 784 "ml_type_gen.m"
                  (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 784 "ml_type_gen.m"
                  if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 784 "ml_type_gen.m"
                    {
#line 784 "ml_type_gen.m"
                      (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RAs_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 1)));
#line 784 "ml_type_gen.m"
                      ml_backend__ml_type_gen__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 2)));
#line 785 "ml_type_gen.m"
                      (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = (ml_backend__ml_type_gen__V_96_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 785 "ml_type_gen.m"
                      if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 787 "ml_type_gen.m"
                        {
#line 787 "ml_type_gen.m"
                          ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_7(&ml_backend__ml_type_gen__env);
                        }
#line 784 "ml_type_gen.m"
                    }
#line 785 "ml_type_gen.m"
                }
#line 790 "ml_type_gen.m"
              if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 790 "ml_type_gen.m"
                {
#line 791 "ml_type_gen.m"
                  (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Members_59)) == (MR_mktag((MR_Integer) 1)));
#line 791 "ml_type_gen.m"
                  if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 791 "ml_type_gen.m"
                    {
#line 791 "ml_type_gen.m"
                      ml_backend__ml_type_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Members_59, (MR_Integer) 0)));
#line 791 "ml_type_gen.m"
                      ml_backend__ml_type_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Members_59, (MR_Integer) 1)));
#line 791 "ml_type_gen.m"
                    }
#line 790 "ml_type_gen.m"
                }
#line 797 "ml_type_gen.m"
              if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 795 "ml_type_gen.m"
                {
#line 795 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__ZeroArgCtor_73;
#line 795 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__V_99_99;

#line 793 "ml_type_gen.m"
                  {
#line 793 "ml_type_gen.m"
                    ml_backend__ml_type_gen__ZeroArgCtor_73 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassId_14, ml_backend__ml_type_gen__CtorClassType_63, ml_backend__ml_type_gen__CtorClassQualifier_64, ml_backend__ml_type_gen__SecondaryTagClassId_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__MLDS_Context_31);
                  }
#line 796 "ml_type_gen.m"
                  {
#line 796 "ml_type_gen.m"
                    ml_backend__ml_type_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_99_99, 0) = ((MR_Box) (ml_backend__ml_type_gen__CtorFunction_65));
#line 796 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 796 "ml_type_gen.m"
                  }
#line 796 "ml_type_gen.m"
                  {
#line 796 "ml_type_gen.m"
                    ml_backend__ml_type_gen__Ctors_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 796 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_74, 0) = ((MR_Box) (ml_backend__ml_type_gen__ZeroArgCtor_73));
#line 796 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_74, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_99_99));
#line 796 "ml_type_gen.m"
                  }
#line 795 "ml_type_gen.m"
                }
#line 797 "ml_type_gen.m"
              else
#line 798 "ml_type_gen.m"
                {
#line 798 "ml_type_gen.m"
                  {
#line 798 "ml_type_gen.m"
                    ml_backend__ml_type_gen__Ctors_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 798 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_74, 0) = ((MR_Box) (ml_backend__ml_type_gen__CtorFunction_65));
#line 798 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 798 "ml_type_gen.m"
                  }
#line 798 "ml_type_gen.m"
                }
#line 757 "ml_type_gen.m"
            }
#line 810 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__UsesBaseClass_62 == (MR_Integer) 0))
#line 811 "ml_type_gen.m"
            {
#line 811 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__Inherits_76;
#line 811 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeParams_80;
#line 811 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__MLDS_TypeName_81;
#line 811 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_82;
#line 811 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_83;
#line 811 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__MLDS_TypeDefn_84;
#line 811 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_104_104;

#line 823 "ml_type_gen.m"
              if ((ml_backend__ml_type_gen__MaybeSecTagVal_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 824 "ml_type_gen.m"
                {
#line 824 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__UsesEmptyBaseClasses_77;

#line 825 "ml_type_gen.m"
                  {
#line 825 "ml_type_gen.m"
                    ml_backend__ml_type_gen__UsesEmptyBaseClasses_77 = ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(ml_backend__ml_type_gen__Target_34);
                  }
#line 829 "ml_type_gen.m"
                  if ((ml_backend__ml_type_gen__UsesEmptyBaseClasses_77 == (MR_Integer) 0))
#line 831 "ml_type_gen.m"
                    ml_backend__ml_type_gen__Inherits_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 829 "ml_type_gen.m"
                  else
#line 827 "ml_type_gen.m"
                    {
#line 828 "ml_type_gen.m"
                      {
#line 828 "ml_type_gen.m"
                        ml_backend__ml_type_gen__Inherits_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_76, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_14));
#line 828 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "ml_type_gen.m"
                      }
#line 827 "ml_type_gen.m"
                    }
#line 824 "ml_type_gen.m"
                }
#line 823 "ml_type_gen.m"
              else
#line 821 "ml_type_gen.m"
                {
#line 822 "ml_type_gen.m"
                  {
#line 822 "ml_type_gen.m"
                    ml_backend__ml_type_gen__Inherits_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 822 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_76, 0) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_16));
#line 822 "ml_type_gen.m"
                    MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 822 "ml_type_gen.m"
                  }
#line 821 "ml_type_gen.m"
                }
#line 836 "ml_type_gen.m"
              {
#line 836 "ml_type_gen.m"
                hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_18, &ml_backend__ml_type_gen__TypeParams_80);
              }
#line 839 "ml_type_gen.m"
              {
#line 839 "ml_type_gen.m"
                ml_backend__ml_type_gen__MLDS_TypeName_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 839 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_81, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_35));
#line 839 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_81, 1) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_32));
#line 839 "ml_type_gen.m"
              }
#line 840 "ml_type_gen.m"
              {
#line 840 "ml_type_gen.m"
                ml_backend__ml_type_gen__MLDS_TypeFlags_82 = ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0();
              }
#line 841 "ml_type_gen.m"
              {
#line 841 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 841 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 0) = ((MR_Box) ((MR_Integer) 0));
#line 841 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 841 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_76));
#line 841 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 841 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeParams_80));
#line 841 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 5) = ((MR_Box) (ml_backend__ml_type_gen__Ctors_74));
#line 841 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_59));
#line 841 "ml_type_gen.m"
              }
#line 841 "ml_type_gen.m"
              ml_backend__ml_type_gen__MLDS_TypeDefnBody_83 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__V_104_104);
#line 843 "ml_type_gen.m"
              {
#line 843 "ml_type_gen.m"
                ml_backend__ml_type_gen__MLDS_TypeDefn_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 843 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_84, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_81));
#line 843 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_84, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_31));
#line 843 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_84, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_82));
#line 843 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_84, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_83));
#line 843 "ml_type_gen.m"
              }
#line 845 "ml_type_gen.m"
              {
#line 845 "ml_type_gen.m"
                MR_Word base;
#line 845 "ml_type_gen.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 845 "ml_type_gen.m"
                *ml_backend__ml_type_gen__MLDS_Members_22 = base;
#line 845 "ml_type_gen.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefn_84));
#line 845 "ml_type_gen.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Members0_21));
#line 845 "ml_type_gen.m"
              }
#line 846 "ml_type_gen.m"
              *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = ml_backend__ml_type_gen__MLDS_CtorMethods0_23;
#line 811 "ml_type_gen.m"
            }
#line 810 "ml_type_gen.m"
          else
#line 806 "ml_type_gen.m"
            {
#line 808 "ml_type_gen.m"
              {
#line 808 "ml_type_gen.m"
                *ml_backend__ml_type_gen__MLDS_Members_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_124_124, ml_backend__ml_type_gen__Members_59, ml_backend__ml_type_gen__MLDS_Members0_21);
              }
#line 809 "ml_type_gen.m"
              {
#line 809 "ml_type_gen.m"
                *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_124_124, ml_backend__ml_type_gen__Ctors_74, ml_backend__ml_type_gen__MLDS_CtorMethods0_23);
              }
#line 806 "ml_type_gen.m"
            }
#line 718 "ml_type_gen.m"
        }
#line 668 "ml_type_gen.m"
    }
#line 660 "ml_type_gen.m"
  }
#line 660 "ml_type_gen.m"
}

#line 613 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_secondary_tag_class_7_p_0(
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Context_8,
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_9,
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_10,
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Members_11,
#line 613 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_12,
#line 613 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_TypeDefn_13,
#line 613 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__SecondaryTagClassId_14)
#line 613 "ml_type_gen.m"
{
#line 618 "ml_type_gen.m"
  {
#line 618 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 618 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ClassName_16;
#line 618 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Inherits_19;
#line 618 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_24;
#line 618 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_25;
#line 618 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_30_30;

#line 623 "ml_type_gen.m"
    {
#line 623 "ml_type_gen.m"
      ml_backend__ml_type_gen__ClassName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 623 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_9));
#line 623 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 1) = ((MR_Box) ((MR_Integer) 1));
#line 623 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 2) = ((MR_Box) ((MR_String) "tag_type"));
#line 623 "ml_type_gen.m"
    }
#line 625 "ml_type_gen.m"
    {
#line 625 "ml_type_gen.m"
      MR_Word base;
#line 625 "ml_type_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 625 "ml_type_gen.m"
      *ml_backend__ml_type_gen__SecondaryTagClassId_14 = base;
#line 625 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 625 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassName_16));
#line 625 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 625 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 625 "ml_type_gen.m"
    }
#line 895 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__Target_12 == (MR_Integer) 4))
#line 899 "ml_type_gen.m"
      {
#line 900 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_49_49;
#line 900 "ml_type_gen.m"
        MR_Box ml_backend__ml_type_gen__conv0_V_49_49;

#line 900 "ml_type_gen.m"
        {
#line 900 "ml_type_gen.m"
          ml_backend__ml_type_gen__conv0_V_49_49 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_uses_empty_base_classes\'/1", (MR_String) "target erlang");
#line 900 "ml_type_gen.m"
          return;
        }
#line 900 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_49_49 = ((MR_Word) ml_backend__ml_type_gen__conv0_V_49_49);
#line 899 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 899 "ml_type_gen.m"
      }
#line 895 "ml_type_gen.m"
    else
#line 895 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__Target_12 == (MR_Integer) 1))
#line 896 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 895 "ml_type_gen.m"
      else
#line 895 "ml_type_gen.m"
        if ((ml_backend__ml_type_gen__Target_12 == (MR_Integer) 3))
#line 898 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 895 "ml_type_gen.m"
        else
#line 895 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = MR_FALSE;
#line 634 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 633 "ml_type_gen.m"
      {
#line 633 "ml_type_gen.m"
        {
#line 633 "ml_type_gen.m"
          ml_backend__ml_type_gen__Inherits_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 633 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_19, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_10));
#line 633 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "ml_type_gen.m"
        }
#line 633 "ml_type_gen.m"
      }
#line 634 "ml_type_gen.m"
    else
#line 635 "ml_type_gen.m"
      ml_backend__ml_type_gen__Inherits_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1150 "ml_type_gen.m"
    {
#line 1150 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_TypeFlags_24 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 647 "ml_type_gen.m"
    {
#line 647 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 0) = ((MR_Box) ((MR_Integer) 0));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_19));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_11));
#line 647 "ml_type_gen.m"
    }
#line 647 "ml_type_gen.m"
    ml_backend__ml_type_gen__MLDS_TypeDefnBody_25 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__V_30_30);
#line 649 "ml_type_gen.m"
    {
#line 649 "ml_type_gen.m"
      MR_Word base;
#line 649 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 649 "ml_type_gen.m"
      *ml_backend__ml_type_gen__MLDS_TypeDefn_13 = base;
#line 649 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[5]));
#line 649 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_8));
#line 649 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_24));
#line 649 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_25));
#line 649 "ml_type_gen.m"
    }
#line 618 "ml_type_gen.m"
  }
#line 613 "ml_type_gen.m"
}

#line 602 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
#line 602 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
#line 602 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
#line 602 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_7)
#line 602 "ml_type_gen.m"
{
#line 604 "ml_type_gen.m"
  {
#line 604 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 604 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_8;
#line 604 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 2)));
#line 604 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 3)));
#line 604 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_14;
#line 604 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_15_15;
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 0)));
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 1)));
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Ctxt_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 4)));
#line 607 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_8;

#line 606 "ml_type_gen.m"
    {
#line 606 "ml_type_gen.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_type_gen__Args_12, &ml_backend__ml_type_gen__Arity_14);
    }
#line 607 "ml_type_gen.m"
    {
#line 607 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_15_15, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_11));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_15_15, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_14));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_15_15, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_5));
#line 607 "ml_type_gen.m"
    }
#line 607 "ml_type_gen.m"
    {
#line 607 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_6, ((MR_Box) (ml_backend__ml_type_gen__V_15_15)), &ml_backend__ml_type_gen__conv0_TagVal_8);
    }
#line 607 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_8 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_8);
#line 604 "ml_type_gen.m"
    return ml_backend__ml_type_gen__TagVal_8;
#line 604 "ml_type_gen.m"
  }
#line 602 "ml_type_gen.m"
}

#line 595 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
#line 595 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
#line 595 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__RA_2)
#line 595 "ml_type_gen.m"
{
#line 598 "ml_type_gen.m"
  while (MR_TRUE)
#line 598 "ml_type_gen.m"
    {
#line 598 "ml_type_gen.m"
      /* tailcall optimized into a loop */
#line 598 "ml_type_gen.m"
      {
#line 598 "ml_type_gen.m"
        MR_bool ml_backend__ml_type_gen__succeeded;

#line 598 "ml_type_gen.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 598 "ml_type_gen.m"
          {
#line 598 "ml_type_gen.m"
            *ml_backend__ml_type_gen__RA_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 598 "ml_type_gen.m"
            ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 598 "ml_type_gen.m"
          }
#line 598 "ml_type_gen.m"
        else
#line 598 "ml_type_gen.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 599 "ml_type_gen.m"
            {
#line 599 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TagVal_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 599 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 600 "ml_type_gen.m"
              /* direct tailcall eliminated */
#line 600 "ml_type_gen.m"
              {
#line 600 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__HeadVar__1__tmp_copy_1 = ml_backend__ml_type_gen__TagVal_5;

#line 600 "ml_type_gen.m"
                ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__HeadVar__1__tmp_copy_1;
#line 600 "ml_type_gen.m"
              }
#line 600 "ml_type_gen.m"
              continue;
#line 599 "ml_type_gen.m"
            }
#line 598 "ml_type_gen.m"
          else
#line 598 "ml_type_gen.m"
            ml_backend__ml_type_gen__succeeded = MR_FALSE;
#line 598 "ml_type_gen.m"
        return ml_backend__ml_type_gen__succeeded;
#line 598 "ml_type_gen.m"
      }
#line 598 "ml_type_gen.m"
      break;
#line 598 "ml_type_gen.m"
    }
#line 595 "ml_type_gen.m"
}

#line 586 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_needs_secondary_tag_3_p_0(
#line 586 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_4,
#line 586 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_5,
#line 586 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_6)
#line 586 "ml_type_gen.m"
{
#line 589 "ml_type_gen.m"
  {
#line 589 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 589 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_7;
#line 589 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 2)));
#line 589 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 3)));
#line 589 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_24;
#line 589 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_25_25;
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___ExistQTVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 0)));
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 1)));
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Ctxt_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 4)));
#line 607 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_7;

#line 606 "ml_type_gen.m"
    {
#line 606 "ml_type_gen.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_type_gen__Args_22, &ml_backend__ml_type_gen__Arity_24);
    }
#line 607 "ml_type_gen.m"
    {
#line 607 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_25_25, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_21));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_25_25, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_24));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_25_25, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_4));
#line 607 "ml_type_gen.m"
    }
#line 607 "ml_type_gen.m"
    {
#line 607 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__TagValues_5, ((MR_Box) (ml_backend__ml_type_gen__V_25_25)), &ml_backend__ml_type_gen__conv0_TagVal_7);
    }
#line 607 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_7 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_7);
#line 591 "ml_type_gen.m"
    {
#line 591 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_13_13;
#line 591 "ml_type_gen.m"
      MR_Integer ml_backend__ml_type_gen__V_8_8;

#line 591 "ml_type_gen.m"
      {
#line 591 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_13_13 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_7);
      }
#line 591 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 591 "ml_type_gen.m"
      if (ml_backend__ml_type_gen__succeeded)
#line 591 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_13_13, (MR_Integer) 0)));
#line 591 "ml_type_gen.m"
    }
#line 592 "ml_type_gen.m"
    if (!(ml_backend__ml_type_gen__succeeded))
#line 592 "ml_type_gen.m"
      {
#line 592 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_14_14;
#line 592 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_36_36;
#line 592 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_37_37;
#line 592 "ml_type_gen.m"
        MR_Integer ml_backend__ml_type_gen__V_38_38;

#line 592 "ml_type_gen.m"
        {
#line 592 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(ml_backend__ml_type_gen__TagVal_7, &ml_backend__ml_type_gen__V_14_14);
        }
#line 592 "ml_type_gen.m"
        if (ml_backend__ml_type_gen__succeeded)
#line 592 "ml_type_gen.m"
          {
#line 592 "ml_type_gen.m"
            ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__V_14_14)) == (MR_mktag((MR_Integer) 2)));
#line 592 "ml_type_gen.m"
            if (ml_backend__ml_type_gen__succeeded)
#line 592 "ml_type_gen.m"
              {
#line 592 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_14_14, (MR_Integer) 0)));
#line 592 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_14_14, (MR_Integer) 1)));
#line 592 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_14_14, (MR_Integer) 2)));
#line 592 "ml_type_gen.m"
              }
#line 592 "ml_type_gen.m"
          }
#line 592 "ml_type_gen.m"
      }
#line 589 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 589 "ml_type_gen.m"
  }
#line 586 "ml_type_gen.m"
}

#line 501 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_9(
#line 501 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 501 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 501 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 501 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
#line 501 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
#line 501 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5)
#line 501 "ml_type_gen.m"
{
#line 501 "ml_type_gen.m"
  {
#line 501 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 501 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv3_MLDS_Members_22;
#line 501 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv2_MLDS_CtorMethods_24;

#line 501 "ml_type_gen.m"
    {
#line 501 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 9))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv3_MLDS_Members_22, ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_4), &ml_backend__ml_type_gen__conv2_MLDS_CtorMethods_24);
    }
#line 501 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv3_MLDS_Members_22));
#line 501 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_type_gen__conv2_MLDS_CtorMethods_24));
#line 501 "ml_type_gen.m"
  }
#line 501 "ml_type_gen.m"
}

#line 461 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_1(
#line 461 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 461 "ml_type_gen.m"
{
#line 461 "ml_type_gen.m"
  {
#line 461 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 461 "ml_type_gen.m"
    MR_builtin_longjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_0, 1);
#line 461 "ml_type_gen.m"
  }
#line 461 "ml_type_gen.m"
}

#line 461 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_3(
#line 461 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 461 "ml_type_gen.m"
{
#line 461 "ml_type_gen.m"
  {
#line 461 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 461 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_59 = ((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv0_Ctor_59);
#line 461 "ml_type_gen.m"
    {
#line 461 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_2(ml_backend__ml_type_gen__env_ptr);
#line 461 "ml_type_gen.m"
      return;
    }
#line 461 "ml_type_gen.m"
  }
#line 461 "ml_type_gen.m"
}

#line 461 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_2(
#line 461 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 461 "ml_type_gen.m"
{
#line 461 "ml_type_gen.m"
  {
#line 461 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 462 "ml_type_gen.m"
    {
#line 462 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = ml_backend__ml_type_gen__ml_needs_secondary_tag_3_p_0((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_59);
    }
#line 462 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded)
#line 462 "ml_type_gen.m"
      {
#line 462 "ml_type_gen.m"
        ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_1(ml_backend__ml_type_gen__env_ptr);
#line 462 "ml_type_gen.m"
        return;
      }
#line 461 "ml_type_gen.m"
  }
#line 461 "ml_type_gen.m"
}

#line 461 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_4(
#line 461 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 461 "ml_type_gen.m"
{
#line 461 "ml_type_gen.m"
  {
#line 461 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 461 "ml_type_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_0) == 0)
#line 461 "ml_type_gen.m"
      {
#line 461 "ml_type_gen.m"
        {
#line 461 "ml_type_gen.m"
          {
#line 461 "ml_type_gen.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv0_Ctor_59, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12, ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_3, ml_backend__ml_type_gen__env_ptr);
          }
#line 461 "ml_type_gen.m"
        }
#line 461 "ml_type_gen.m"
        (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = MR_FALSE;
#line 461 "ml_type_gen.m"
      }
#line 461 "ml_type_gen.m"
    else
#line 461 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = MR_TRUE;
#line 461 "ml_type_gen.m"
  }
#line 461 "ml_type_gen.m"
}

#line 482 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_5(
#line 482 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 482 "ml_type_gen.m"
{
#line 482 "ml_type_gen.m"
  {
#line 482 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 482 "ml_type_gen.m"
    MR_builtin_longjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_1, 1);
#line 482 "ml_type_gen.m"
  }
#line 482 "ml_type_gen.m"
}

#line 483 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_7(
#line 483 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 483 "ml_type_gen.m"
{
#line 483 "ml_type_gen.m"
  {
#line 483 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 483 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_27 = ((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv1_Ctor_27);
#line 483 "ml_type_gen.m"
    {
#line 483 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_6(ml_backend__ml_type_gen__env_ptr);
#line 483 "ml_type_gen.m"
      return;
    }
#line 483 "ml_type_gen.m"
  }
#line 483 "ml_type_gen.m"
}

#line 482 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_6(
#line 482 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 482 "ml_type_gen.m"
{
#line 482 "ml_type_gen.m"
  {
#line 482 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 485 "ml_type_gen.m"
    {
#line 485 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = ml_backend__ml_type_gen__ml_needs_secondary_tag_3_p_0((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_27);
    }
#line 484 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = !((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded);
#line 484 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded)
#line 484 "ml_type_gen.m"
      {
#line 484 "ml_type_gen.m"
        ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_5(ml_backend__ml_type_gen__env_ptr);
#line 484 "ml_type_gen.m"
        return;
      }
#line 482 "ml_type_gen.m"
  }
#line 482 "ml_type_gen.m"
}

#line 482 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_8(
#line 482 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 482 "ml_type_gen.m"
{
#line 482 "ml_type_gen.m"
  {
#line 482 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 482 "ml_type_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_1) == 0)
#line 482 "ml_type_gen.m"
      {
#line 482 "ml_type_gen.m"
        {
#line 483 "ml_type_gen.m"
          {
#line 483 "ml_type_gen.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv1_Ctor_27, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12, ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_7, ml_backend__ml_type_gen__env_ptr);
          }
#line 482 "ml_type_gen.m"
        }
#line 482 "ml_type_gen.m"
        (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = MR_FALSE;
#line 482 "ml_type_gen.m"
      }
#line 482 "ml_type_gen.m"
    else
#line 482 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = MR_TRUE;
#line 482 "ml_type_gen.m"
  }
#line 482 "ml_type_gen.m"
}

#line 437 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0(
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_9,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctors_12,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_13,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
#line 437 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_45,
#line 437 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_46)
#line 437 "ml_type_gen.m"
{
#line 437 "ml_type_gen.m"
  {
#line 437 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s ml_backend__ml_type_gen__env;

#line 437 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10 = ml_backend__ml_type_gen__TypeCtor_10;
#line 437 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12 = ml_backend__ml_type_gen__Ctors_12;
#line 437 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13 = ml_backend__ml_type_gen__TagValues_13;
#line 442 "ml_type_gen.m"
    {
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TypeInfo_68_68;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TypeCtorInfo_69_69;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Context_16;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_Context_17;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__QualBaseClassName_18;
#line 442 "ml_type_gen.m"
      MR_Integer ml_backend__ml_type_gen__BaseClassArity_19;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__BaseClassId_20;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__BaseClassModuleName_21;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__QualKind_22;
#line 442 "ml_type_gen.m"
      MR_String ml_backend__ml_type_gen__BaseClassName_23;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Globals_24;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Target_25;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__BaseClassQualifier_26;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TagMembers_28;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TagClassId_29;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__CtorMembers_34;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__BaseClassCtorMethods_35;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Implements_38;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TypeParams_39;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Members_40;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_TypeName_41;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_42;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_43;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Defn_44;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_50_50;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_55_55;
#line 442 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_56_56;
#line 501 "ml_type_gen.m"
      MR_Box ml_backend__ml_type_gen__conv5_CtorMembers_34;
#line 501 "ml_type_gen.m"
      MR_Box ml_backend__ml_type_gen__conv4_BaseClassCtorMethods_35;

#line 443 "ml_type_gen.m"
      {
#line 443 "ml_type_gen.m"
        hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__Context_16);
      }
#line 444 "ml_type_gen.m"
      {
#line 444 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Context_17 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
      }
#line 447 "ml_type_gen.m"
      {
#line 447 "ml_type_gen.m"
        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10, &ml_backend__ml_type_gen__QualBaseClassName_18, &ml_backend__ml_type_gen__BaseClassArity_19);
      }
#line 448 "ml_type_gen.m"
      {
#line 448 "ml_type_gen.m"
        ml_backend__ml_type_gen__BaseClassId_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 448 "ml_type_gen.m"
        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 448 "ml_type_gen.m"
        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualBaseClassName_18));
#line 448 "ml_type_gen.m"
        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 2) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassArity_19));
#line 448 "ml_type_gen.m"
        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 448 "ml_type_gen.m"
      }
#line 450 "ml_type_gen.m"
      ml_backend__ml_type_gen__BaseClassModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 0)));
#line 450 "ml_type_gen.m"
      ml_backend__ml_type_gen__QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 1)));
#line 450 "ml_type_gen.m"
      ml_backend__ml_type_gen__BaseClassName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 2)));
#line 451 "ml_type_gen.m"
      {
#line 451 "ml_type_gen.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_9, &ml_backend__ml_type_gen__Globals_24);
      }
#line 452 "ml_type_gen.m"
      {
#line 452 "ml_type_gen.m"
        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_24, &ml_backend__ml_type_gen__Target_25);
      }
#line 453 "ml_type_gen.m"
      {
#line 453 "ml_type_gen.m"
        ml_backend__ml_type_gen__BaseClassQualifier_26 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_25, ml_backend__ml_type_gen__BaseClassModuleName_21, ml_backend__ml_type_gen__QualKind_22, ml_backend__ml_type_gen__BaseClassName_23, ml_backend__ml_type_gen__BaseClassArity_19);
      }
#line 461 "ml_type_gen.m"
      {
#line 461 "ml_type_gen.m"
        ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_4(&ml_backend__ml_type_gen__env);
      }
#line 460 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = !((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded);
#line 467 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded)
#line 465 "ml_type_gen.m"
        {
#line 465 "ml_type_gen.m"
          ml_backend__ml_type_gen__TagMembers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 466 "ml_type_gen.m"
          ml_backend__ml_type_gen__TagClassId_29 = ml_backend__ml_type_gen__BaseClassId_20;
#line 465 "ml_type_gen.m"
        }
#line 467 "ml_type_gen.m"
      else
#line 469 "ml_type_gen.m"
        {
#line 469 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TagDataMember_30;
#line 469 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TagMembers0_32;
#line 469 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_76_76;
#line 469 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_77_77;

#line 542 "ml_type_gen.m"
          {
#line 542 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_76_76 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
          }
#line 1160 "ml_type_gen.m"
          {
#line 1160 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_77_77 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          }
#line 541 "ml_type_gen.m"
          {
#line 541 "ml_type_gen.m"
            ml_backend__ml_type_gen__TagDataMember_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 541 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_3[3])));
#line 541 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_30, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_76_76));
#line 541 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_30, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_77_77));
#line 541 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_1[2])));
#line 541 "ml_type_gen.m"
          }
#line 475 "ml_type_gen.m"
          {
#line 475 "ml_type_gen.m"
            ml_backend__ml_type_gen__TagMembers0_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 475 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers0_32, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagDataMember_30));
#line 475 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 475 "ml_type_gen.m"
          }
#line 482 "ml_type_gen.m"
          {
#line 482 "ml_type_gen.m"
            ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_8(&ml_backend__ml_type_gen__env);
          }
#line 482 "ml_type_gen.m"
          (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = !((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded);
#line 490 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded)
#line 488 "ml_type_gen.m"
            {
#line 488 "ml_type_gen.m"
              ml_backend__ml_type_gen__TagMembers_28 = ml_backend__ml_type_gen__TagMembers0_32;
#line 489 "ml_type_gen.m"
              ml_backend__ml_type_gen__TagClassId_29 = ml_backend__ml_type_gen__BaseClassId_20;
#line 488 "ml_type_gen.m"
            }
#line 490 "ml_type_gen.m"
          else
#line 492 "ml_type_gen.m"
            {
#line 492 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TagTypeDefn_33;

#line 491 "ml_type_gen.m"
              {
#line 491 "ml_type_gen.m"
                ml_backend__ml_type_gen__ml_gen_secondary_tag_class_7_p_0(ml_backend__ml_type_gen__MLDS_Context_17, ml_backend__ml_type_gen__BaseClassQualifier_26, ml_backend__ml_type_gen__BaseClassId_20, ml_backend__ml_type_gen__TagMembers0_32, ml_backend__ml_type_gen__Target_25, &ml_backend__ml_type_gen__TagTypeDefn_33, &ml_backend__ml_type_gen__TagClassId_29);
              }
#line 493 "ml_type_gen.m"
              {
#line 493 "ml_type_gen.m"
                ml_backend__ml_type_gen__TagMembers_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "ml_type_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers_28, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagTypeDefn_33));
#line 493 "ml_type_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "ml_type_gen.m"
              }
#line 492 "ml_type_gen.m"
            }
#line 469 "ml_type_gen.m"
        }
#line 501 "ml_type_gen.m"
      {
#line 501 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_7[0]));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_9));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_9));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_20));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 5) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_26));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 6) = ((MR_Box) (ml_backend__ml_type_gen__TagClassId_29));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 7) = ((MR_Box) ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 8) = ((MR_Box) (ml_backend__ml_type_gen__TypeDefn_11));
#line 501 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 9) = ((MR_Box) ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13));
#line 501 "ml_type_gen.m"
      }
#line 4762 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen__TypeInfo_68_68 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[0];
#line 501 "ml_type_gen.m"
      {
#line 501 "ml_type_gen.m"
        mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ml_backend__ml_type_gen__TypeInfo_68_68, ml_backend__ml_type_gen__TypeInfo_68_68, ml_backend__ml_type_gen__V_50_50, (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv5_CtorMembers_34, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv4_BaseClassCtorMethods_35);
      }
#line 501 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorMembers_34 = ((MR_Word) ml_backend__ml_type_gen__conv5_CtorMembers_34);
#line 501 "ml_type_gen.m"
      ml_backend__ml_type_gen__BaseClassCtorMethods_35 = ((MR_Word) ml_backend__ml_type_gen__conv4_BaseClassCtorMethods_35);
#line 514 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__Target_25 == (MR_Integer) 3))
#line 512 "ml_type_gen.m"
        {
#line 512 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_53_53;

#line 513 "ml_type_gen.m"
          {
#line 513 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_53_53 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
          }
#line 513 "ml_type_gen.m"
          {
#line 513 "ml_type_gen.m"
            ml_backend__ml_type_gen__Implements_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 513 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_38, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_53_53));
#line 513 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 513 "ml_type_gen.m"
          }
#line 512 "ml_type_gen.m"
        }
#line 514 "ml_type_gen.m"
      else
#line 520 "ml_type_gen.m"
        ml_backend__ml_type_gen__Implements_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 523 "ml_type_gen.m"
      {
#line 523 "ml_type_gen.m"
        hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__TypeParams_39);
      }
#line 4806 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen__TypeCtorInfo_69_69 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 526 "ml_type_gen.m"
      {
#line 526 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_55_55 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_69_69, ml_backend__ml_type_gen__TagMembers_28, ml_backend__ml_type_gen__CtorMembers_34);
      }
#line 526 "ml_type_gen.m"
      {
#line 526 "ml_type_gen.m"
        ml_backend__ml_type_gen__Members_40 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_69_69, ml_backend__ml_type_gen__MaybeEqualityMembers_14, ml_backend__ml_type_gen__V_55_55);
      }
#line 527 "ml_type_gen.m"
      {
#line 527 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_TypeName_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_41, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassName_23));
#line 527 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_41, 1) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassArity_19));
#line 527 "ml_type_gen.m"
      }
#line 1150 "ml_type_gen.m"
      {
#line 1150 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_TypeFlags_42 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
      }
#line 529 "ml_type_gen.m"
      {
#line 529 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 529 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 0) = ((MR_Box) ((MR_Integer) 0));
#line 529 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 3) = ((MR_Box) (ml_backend__ml_type_gen__Implements_38));
#line 529 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeParams_39));
#line 529 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 5) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassCtorMethods_35));
#line 529 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_40));
#line 529 "ml_type_gen.m"
      }
#line 529 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_TypeDefnBody_43 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__V_56_56);
#line 531 "ml_type_gen.m"
      {
#line 531 "ml_type_gen.m"
        ml_backend__ml_type_gen__Defn_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 531 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_44, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_41));
#line 531 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_44, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_17));
#line 531 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_44, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_42));
#line 531 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_44, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_43));
#line 531 "ml_type_gen.m"
      }
#line 534 "ml_type_gen.m"
      {
#line 534 "ml_type_gen.m"
        MR_Word base;
#line 534 "ml_type_gen.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 534 "ml_type_gen.m"
        *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_46 = base;
#line 534 "ml_type_gen.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Defn_44));
#line 534 "ml_type_gen.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_45));
#line 534 "ml_type_gen.m"
      }
#line 442 "ml_type_gen.m"
    }
#line 437 "ml_type_gen.m"
  }
#line 437 "ml_type_gen.m"
}

#line 339 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0_1(
#line 339 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg)
#line 339 "ml_type_gen.m"
{
#line 339 "ml_type_gen.m"
  {
#line 339 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 339 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;

#line 339 "ml_type_gen.m"
    {
#line 339 "ml_type_gen.m"
      return ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_enum_constant__339__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))));
    }
#line 339 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 339 "ml_type_gen.m"
  }
#line 339 "ml_type_gen.m"
}

#line 299 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0(
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_7,
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_9,
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Type_10,
#line 299 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_11)
#line 299 "ml_type_gen.m"
{
#line 303 "ml_type_gen.m"
  {
#line 303 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Defn_12;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 2)));
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 3)));
#line 303 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_18;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_19;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ConstValue_21;
#line 303 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__UnqualifiedName_54;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_55_55;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_61_61;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_66_66;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_67_67;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_68_68;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_70_70;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_71_71;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_72_72;
#line 303 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_74_74;
#line 305 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___ExistQTVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 0)));
#line 305 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 1)));
#line 305 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Ctxt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 4)));
#line 307 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_19;

#line 306 "ml_type_gen.m"
    {
#line 306 "ml_type_gen.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_type_gen__Args_16, &ml_backend__ml_type_gen__Arity_18);
    }
#line 307 "ml_type_gen.m"
    {
#line 307 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 307 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 307 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_55_55, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_15));
#line 307 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_55_55, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_18));
#line 307 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_55_55, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_8));
#line 307 "ml_type_gen.m"
    }
#line 307 "ml_type_gen.m"
    {
#line 307 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_9, ((MR_Box) (ml_backend__ml_type_gen__V_55_55)), &ml_backend__ml_type_gen__conv0_TagVal_19);
    }
#line 307 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_19 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_19);
#line 311 "ml_type_gen.m"
    if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 312 "ml_type_gen.m"
      {
#line 312 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__ForeignLang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 1)));
#line 312 "ml_type_gen.m"
        MR_String ml_backend__ml_type_gen__ForeignTagValue_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 2)));
#line 312 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_59_59;

#line 313 "ml_type_gen.m"
        {
#line 313 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 313 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 313 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_type_gen__ForeignLang_22));
#line 313 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_59_59, 2) = ((MR_Box) (ml_backend__ml_type_gen__ForeignTagValue_23));
#line 313 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_59_59, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_10));
#line 313 "ml_type_gen.m"
        }
#line 313 "ml_type_gen.m"
        {
#line 313 "ml_type_gen.m"
          ml_backend__ml_type_gen__ConstValue_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 313 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 313 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_59_59));
#line 313 "ml_type_gen.m"
        }
#line 312 "ml_type_gen.m"
      }
#line 311 "ml_type_gen.m"
    else
#line 311 "ml_type_gen.m"
      if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 309 "ml_type_gen.m"
        {
#line 309 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__Int_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 1)));
#line 309 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_60_60;

#line 310 "ml_type_gen.m"
          {
#line 310 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 310 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_60_60, 1) = ((MR_Box) (ml_backend__ml_type_gen__Int_20));
#line 310 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_60_60, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_10));
#line 310 "ml_type_gen.m"
          }
#line 310 "ml_type_gen.m"
          {
#line 310 "ml_type_gen.m"
            ml_backend__ml_type_gen__ConstValue_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 310 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 310 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_60_60));
#line 310 "ml_type_gen.m"
          }
#line 309 "ml_type_gen.m"
        }
#line 311 "ml_type_gen.m"
      else
#line 335 "ml_type_gen.m"
        {
#line 336 "ml_type_gen.m"
          {
#line 336 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
          }
#line 335 "ml_type_gen.m"
        }
#line 339 "ml_type_gen.m"
    {
#line 339 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[2]));
#line 339 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0_1));
#line 339 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 339 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 3) = ((MR_Box) (ml_backend__ml_type_gen__Arity_18));
#line 339 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 4) = ((MR_Box) ((MR_Integer) 0));
#line 339 "ml_type_gen.m"
    }
#line 339 "ml_type_gen.m"
    {
#line 339 "ml_type_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_type_gen__V_61_61, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_enum_constant\'/5", (MR_String) "arity != []");
    }
#line 342 "ml_type_gen.m"
    {
#line 342 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualifiedName_54 = mdbcomp__prim_data__unqualify_name_1_f_0(ml_backend__ml_type_gen__Name_15);
    }
#line 344 "ml_type_gen.m"
    {
#line 344 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 344 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_68_68, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualifiedName_54));
#line 344 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "ml_type_gen.m"
    }
#line 344 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__V_68_68);
#line 344 "ml_type_gen.m"
    {
#line 344 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 344 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_66_66, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_67_67));
#line 344 "ml_type_gen.m"
    }
#line 345 "ml_type_gen.m"
    {
#line 345 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_70_70 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_7);
    }
#line 1180 "ml_type_gen.m"
    {
#line 1180 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_71_71 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 347 "ml_type_gen.m"
    {
#line 347 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 347 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_74_74, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_21));
#line 347 "ml_type_gen.m"
    }
#line 347 "ml_type_gen.m"
    {
#line 347 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 347 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 347 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_72_72, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_74_74));
#line 347 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_72_72, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "ml_type_gen.m"
    }
#line 343 "ml_type_gen.m"
    {
#line 343 "ml_type_gen.m"
      ml_backend__ml_type_gen__Defn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 343 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_66_66));
#line 343 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_70_70));
#line 343 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_71_71));
#line 343 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 3) = ((MR_Box) (ml_backend__ml_type_gen__V_72_72));
#line 343 "ml_type_gen.m"
    }
#line 303 "ml_type_gen.m"
    return ml_backend__ml_type_gen__Defn_12;
#line 303 "ml_type_gen.m"
  }
#line 299 "ml_type_gen.m"
}

#line 255 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0_1(
#line 255 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 255 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
#line 255 "ml_type_gen.m"
{
#line 255 "ml_type_gen.m"
  {
#line 255 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
#line 255 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 255 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_Defn_12;

#line 255 "ml_type_gen.m"
    {
#line 255 "ml_type_gen.m"
      ml_backend__ml_type_gen__conv0_Defn_12 = ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
#line 255 "ml_type_gen.m"
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_Defn_12));
#line 255 "ml_type_gen.m"
    return ml_backend__ml_type_gen__wrapper_arg_2;
#line 255 "ml_type_gen.m"
  }
#line 255 "ml_type_gen.m"
}

#line 237 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_9,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctors_12,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_13,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
#line 237 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35,
#line 237 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36)
#line 237 "ml_type_gen.m"
{
#line 242 "ml_type_gen.m"
  {
#line 242 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_49_49;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Context_16;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Context_17;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__QualifiedClassName_18;
#line 242 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__MLDS_ClassArity_19;
#line 242 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__MLDS_ClassName_22;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ValueMember_23;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Type_24;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EnumConstMembers_25;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Members_26;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Implements_28;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Inherits_29;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeVars_30;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeName_31;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_32;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_33;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Defn_34;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_38_38;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_39_39;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_44_44;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_58_58;
#line 242 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_59_59;
#line 248 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_20_20;
#line 248 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_21_21;

#line 243 "ml_type_gen.m"
    {
#line 243 "ml_type_gen.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__Context_16);
    }
#line 244 "ml_type_gen.m"
    {
#line 244 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Context_17 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
    }
#line 247 "ml_type_gen.m"
    {
#line 247 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_10, &ml_backend__ml_type_gen__QualifiedClassName_18, &ml_backend__ml_type_gen__MLDS_ClassArity_19);
    }
#line 248 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 0)));
#line 248 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 1)));
#line 248 "ml_type_gen.m"
    ml_backend__ml_type_gen__MLDS_ClassName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 2)));
#line 295 "ml_type_gen.m"
    {
#line 295 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_58_58 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
    }
#line 1160 "ml_type_gen.m"
    {
#line 1160 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_59_59 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 294 "ml_type_gen.m"
    {
#line 294 "ml_type_gen.m"
      ml_backend__ml_type_gen__ValueMember_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 294 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_3[0])));
#line 294 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_58_58));
#line 294 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_59_59));
#line 294 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_1[2])));
#line 294 "ml_type_gen.m"
    }
#line 252 "ml_type_gen.m"
    {
#line 252 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualifiedClassName_18));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_19));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 3) = ((MR_Box) ((MR_Integer) 4));
#line 252 "ml_type_gen.m"
    }
#line 5347 "ml_backend.ml_type_gen.c"
    ml_backend__ml_type_gen__TypeCtorInfo_49_49 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 255 "ml_type_gen.m"
    {
#line 255 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[1]));
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0_1));
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 3) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_10));
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 5) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_13));
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 6) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_24));
#line 255 "ml_type_gen.m"
    }
#line 254 "ml_type_gen.m"
    {
#line 254 "ml_type_gen.m"
      ml_backend__ml_type_gen__EnumConstMembers_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ml_backend__ml_type_gen__TypeCtorInfo_49_49, ml_backend__ml_type_gen__V_38_38, ml_backend__ml_type_gen__Ctors_12);
    }
#line 258 "ml_type_gen.m"
    {
#line 258 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 258 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_type_gen__ValueMember_23));
#line 258 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_39_39, 1) = ((MR_Box) (ml_backend__ml_type_gen__EnumConstMembers_25));
#line 258 "ml_type_gen.m"
    }
#line 257 "ml_type_gen.m"
    {
#line 257 "ml_type_gen.m"
      ml_backend__ml_type_gen__Members_26 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_49_49, ml_backend__ml_type_gen__MaybeEqualityMembers_14, ml_backend__ml_type_gen__V_39_39);
    }
#line 269 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__Target_9 == (MR_Integer) 3))
#line 266 "ml_type_gen.m"
      {
#line 266 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_40_40;
#line 266 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_42_42;

#line 267 "ml_type_gen.m"
        {
#line 267 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_40_40 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
        }
#line 267 "ml_type_gen.m"
        {
#line 267 "ml_type_gen.m"
          ml_backend__ml_type_gen__Implements_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_28, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_40_40));
#line 267 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "ml_type_gen.m"
        }
#line 268 "ml_type_gen.m"
        {
#line 268 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_42_42 = ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0();
        }
#line 268 "ml_type_gen.m"
        {
#line 268 "ml_type_gen.m"
          ml_backend__ml_type_gen__Inherits_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 268 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_29, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_42_42));
#line 268 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "ml_type_gen.m"
        }
#line 266 "ml_type_gen.m"
      }
#line 269 "ml_type_gen.m"
    else
#line 274 "ml_type_gen.m"
      {
#line 275 "ml_type_gen.m"
        ml_backend__ml_type_gen__Implements_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 276 "ml_type_gen.m"
        ml_backend__ml_type_gen__Inherits_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 274 "ml_type_gen.m"
      }
#line 279 "ml_type_gen.m"
    {
#line 279 "ml_type_gen.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__TypeVars_30);
    }
#line 282 "ml_type_gen.m"
    {
#line 282 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_TypeName_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 282 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_31, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassName_22));
#line 282 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_19));
#line 282 "ml_type_gen.m"
    }
#line 1150 "ml_type_gen.m"
    {
#line 1150 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_TypeFlags_32 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 284 "ml_type_gen.m"
    {
#line 284 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 284 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 0) = ((MR_Box) ((MR_Integer) 4));
#line 284 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_29));
#line 284 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 3) = ((MR_Box) (ml_backend__ml_type_gen__Implements_28));
#line 284 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeVars_30));
#line 284 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 284 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_26));
#line 284 "ml_type_gen.m"
    }
#line 284 "ml_type_gen.m"
    ml_backend__ml_type_gen__MLDS_TypeDefnBody_33 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__V_44_44);
#line 286 "ml_type_gen.m"
    {
#line 286 "ml_type_gen.m"
      ml_backend__ml_type_gen__Defn_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 286 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_31));
#line 286 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_17));
#line 286 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_32));
#line 286 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_33));
#line 286 "ml_type_gen.m"
    }
#line 289 "ml_type_gen.m"
    {
#line 289 "ml_type_gen.m"
      MR_Word base;
#line 289 "ml_type_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 289 "ml_type_gen.m"
      *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36 = base;
#line 289 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Defn_34));
#line 289 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35));
#line 289 "ml_type_gen.m"
    }
#line 242 "ml_type_gen.m"
  }
#line 237 "ml_type_gen.m"
}

#line 156 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_defn_4_p_0(
#line 156 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_5,
#line 156 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
#line 156 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11,
#line 156 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12)
#line 156 "ml_type_gen.m"
{
#line 159 "ml_type_gen.m"
  {
#line 159 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 159 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 159 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Status_9;
#line 159 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__DefinedThisModule_10;

#line 160 "ml_type_gen.m"
    {
#line 160 "ml_type_gen.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(ml_backend__ml_type_gen__TypeDefn_7, &ml_backend__ml_type_gen__Status_9);
    }
#line 161 "ml_type_gen.m"
    {
#line 161 "ml_type_gen.m"
      ml_backend__ml_type_gen__DefinedThisModule_10 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(ml_backend__ml_type_gen__Status_9);
    }
#line 165 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__DefinedThisModule_10 == (MR_Integer) 0))
#line 166 "ml_type_gen.m"
      *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 165 "ml_type_gen.m"
    else
#line 172 "ml_type_gen.m"
      {
#line 172 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TypeBody_20;

#line 173 "ml_type_gen.m"
        {
#line 173 "ml_type_gen.m"
          hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_type_gen__TypeDefn_7, &ml_backend__ml_type_gen__TypeBody_20);
        }
#line 176 "ml_type_gen.m"
        if (((MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_20)) == (MR_mktag((MR_Integer) 1))))
#line 184 "ml_type_gen.m"
          {
#line 184 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__Ctors_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 0)));
#line 184 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__TagValues_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 1)));
#line 184 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__DuTypeKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 3)));
#line 184 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 183 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen___CheaperTagTest_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 2)));
#line 183 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__MaybeUserEqComp_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 4)));
#line 183 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen___MaybeDirectArgCtors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 5)));
#line 183 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen___ReservedTag_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 183 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 183 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 7)));

#line 195 "ml_type_gen.m"
            if ((ml_backend__ml_type_gen__DuTypeKind_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 196 "ml_type_gen.m"
              {
#line 196 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__Globals_45;
#line 196 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__Target_46;

#line 199 "ml_type_gen.m"
                {
#line 199 "ml_type_gen.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_45);
                }
#line 200 "ml_type_gen.m"
                {
#line 200 "ml_type_gen.m"
                  libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_45, &ml_backend__ml_type_gen__Target_46);
                }
#line 201 "ml_type_gen.m"
                {
#line 201 "ml_type_gen.m"
                  ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(ml_backend__ml_type_gen__Target_46, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
#line 201 "ml_type_gen.m"
                  return;
                }
#line 196 "ml_type_gen.m"
              }
#line 195 "ml_type_gen.m"
            else
#line 195 "ml_type_gen.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__DuTypeKind_26)) == (MR_mktag((MR_Integer) 1)))) || ((ml_backend__ml_type_gen__DuTypeKind_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))))
#line 190 "ml_type_gen.m"
                {
#line 190 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__Globals_34;
#line 190 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__Target_35;

#line 191 "ml_type_gen.m"
                  {
#line 191 "ml_type_gen.m"
                    hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_34);
                  }
#line 192 "ml_type_gen.m"
                  {
#line 192 "ml_type_gen.m"
                    libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_34, &ml_backend__ml_type_gen__Target_35);
                  }
#line 193 "ml_type_gen.m"
                  {
#line 193 "ml_type_gen.m"
                    ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(ml_backend__ml_type_gen__Target_35, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
#line 193 "ml_type_gen.m"
                    return;
                  }
#line 190 "ml_type_gen.m"
                }
#line 195 "ml_type_gen.m"
              else
#line 207 "ml_type_gen.m"
                {
#line 207 "ml_type_gen.m"
                  ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0(ml_backend__ml_type_gen__ModuleInfo_5, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
#line 207 "ml_type_gen.m"
                  return;
                }
#line 184 "ml_type_gen.m"
          }
#line 176 "ml_type_gen.m"
        else
#line 176 "ml_type_gen.m"
          if (((MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_20)) == (MR_mktag((MR_Integer) 2))))
#line 177 "ml_type_gen.m"
            *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 176 "ml_type_gen.m"
          else
#line 176 "ml_type_gen.m"
            if (((MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_20)) == (MR_mktag((MR_Integer) 0))))
#line 211 "ml_type_gen.m"
              *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 176 "ml_type_gen.m"
            else
#line 176 "ml_type_gen.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_20)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 175 "ml_type_gen.m"
                *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 176 "ml_type_gen.m"
              else
#line 213 "ml_type_gen.m"
                *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 172 "ml_type_gen.m"
      }
#line 159 "ml_type_gen.m"
  }
#line 156 "ml_type_gen.m"
}

#line 1188 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
#line 1188 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 1188 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1188 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2)
#line 1188 "ml_type_gen.m"
{
#line 1188 "ml_type_gen.m"
  {
#line 1188 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 1188 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8;

#line 1188 "ml_type_gen.m"
    {
#line 1188 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8);
    }
#line 1188 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8));
#line 1188 "ml_type_gen.m"
  }
#line 1188 "ml_type_gen.m"
}

#line 110 "ml_type_gen.m"
void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(
#line 110 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_3,
#line 110 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnums_4)
#line 110 "ml_type_gen.m"
{
#line 1185 "ml_type_gen.m"
  {
#line 1185 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1185 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_5;
#line 1185 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeTable_6;
#line 1185 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_7_7;

#line 1186 "ml_type_gen.m"
    {
#line 1186 "ml_type_gen.m"
      hlds__hlds_module__module_info_get_exported_enums_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__ExportedEnumInfo_5);
    }
#line 1187 "ml_type_gen.m"
    {
#line 1187 "ml_type_gen.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__TypeTable_6);
    }
#line 1188 "ml_type_gen.m"
    {
#line 1188 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[1]));
#line 1188 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1));
#line 1188 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1188 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_3));
#line 1188 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeTable_6));
#line 1188 "ml_type_gen.m"
    }
#line 1188 "ml_type_gen.m"
    {
#line 1188 "ml_type_gen.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0, ml_backend__ml_type_gen__V_7_7, ml_backend__ml_type_gen__ExportedEnumInfo_5, ml_backend__ml_type_gen__MLDS_ExportedEnums_4);
#line 1188 "ml_type_gen.m"
      return;
    }
#line 1185 "ml_type_gen.m"
  }
#line 110 "ml_type_gen.m"
}

#line 924 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
#line 924 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 924 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
#line 924 "ml_type_gen.m"
{
#line 924 "ml_type_gen.m"
  {
#line 924 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
#line 924 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 924 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv1_Statement_12;

#line 924 "ml_type_gen.m"
    {
#line 924 "ml_type_gen.m"
      ml_backend__ml_type_gen__conv1_Statement_12 = ml_backend__ml_type_gen__gen_init_field_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
#line 924 "ml_type_gen.m"
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv1_Statement_12));
#line 924 "ml_type_gen.m"
    return ml_backend__ml_type_gen__wrapper_arg_2;
#line 924 "ml_type_gen.m"
  }
#line 924 "ml_type_gen.m"
}

#line 921 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
#line 921 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 921 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
#line 921 "ml_type_gen.m"
{
#line 921 "ml_type_gen.m"
  {
#line 921 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
#line 921 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 921 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_Arg_7;

#line 921 "ml_type_gen.m"
    {
#line 921 "ml_type_gen.m"
      ml_backend__ml_type_gen__conv0_Arg_7 = ml_backend__ml_type_gen__make_arg_1_f_0(((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
#line 921 "ml_type_gen.m"
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_Arg_7));
#line 921 "ml_type_gen.m"
    return ml_backend__ml_type_gen__wrapper_arg_2;
#line 921 "ml_type_gen.m"
  }
#line 921 "ml_type_gen.m"
}

#line 102 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(
#line 102 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_10,
#line 102 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_11,
#line 102 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassType_12,
#line 102 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassQualifier_13,
#line 102 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_14,
#line 102 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeTag_15,
#line 102 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Members_16,
#line 102 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_17)
#line 102 "ml_type_gen.m"
{
#line 920 "ml_type_gen.m"
  {
#line 920 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__CtorDefn_18;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_45_45 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Args_19;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__InitMembers0_21;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__InitMembers_24;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Stmt_25;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EnvVarNames_27;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Ctor_28;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__CtorFlags_29;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_31_31;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_32_32;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_35_35;
#line 920 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_36_36;

#line 921 "ml_type_gen.m"
    {
#line 921 "ml_type_gen.m"
      ml_backend__ml_type_gen__Args_19 = mercury__list__map_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_45_45, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_1[1], ml_backend__ml_type_gen__Members_16);
    }
#line 924 "ml_type_gen.m"
    {
#line 924 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 924 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[0]));
#line 924 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2));
#line 924 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 924 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 3) = ((MR_Box) (ml_backend__ml_type_gen__Target_10));
#line 924 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_11));
#line 924 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 5) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
#line 924 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 6) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_13));
#line 924 "ml_type_gen.m"
    }
#line 924 "ml_type_gen.m"
    {
#line 924 "ml_type_gen.m"
      ml_backend__ml_type_gen__InitMembers0_21 = mercury__list__map_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_45_45, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_type_gen__V_31_31, ml_backend__ml_type_gen__Members_16);
    }
#line 931 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__MaybeTag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 933 "ml_type_gen.m"
      ml_backend__ml_type_gen__InitMembers_24 = ml_backend__ml_type_gen__InitMembers0_21;
#line 931 "ml_type_gen.m"
    else
#line 927 "ml_type_gen.m"
      {
#line 927 "ml_type_gen.m"
        MR_Integer ml_backend__ml_type_gen__TagVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__MaybeTag_15, (MR_Integer) 0)));
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__InitTag_23;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TagClassQualifier_65;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__Val_68;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__Field_69;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_73_73;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_76_76;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_77_77;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_78_78;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_80_80;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_81_81;
#line 927 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_82_82;
#line 1020 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TagClass_59;
#line 1020 "ml_type_gen.m"
        MR_Integer ml_backend__ml_type_gen__TagArity_60;
#line 1016 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_61_61;

#line 1016 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__SecondaryTagClassId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1016 "ml_type_gen.m"
        if (ml_backend__ml_type_gen__succeeded)
#line 1016 "ml_type_gen.m"
          {
#line 1016 "ml_type_gen.m"
            ml_backend__ml_type_gen__TagClass_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 1)));
#line 1016 "ml_type_gen.m"
            ml_backend__ml_type_gen__TagArity_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 2)));
#line 1016 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 3)));
#line 1017 "ml_type_gen.m"
            {
#line 1017 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__BaseClassQualifier_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_59, (MR_Integer) 0)));
#line 1017 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__QualKind_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_59, (MR_Integer) 1)));
#line 1017 "ml_type_gen.m"
              MR_String ml_backend__ml_type_gen__TagClassName_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_59, (MR_Integer) 2)));

#line 1018 "ml_type_gen.m"
              {
#line 1018 "ml_type_gen.m"
                ml_backend__ml_type_gen__TagClassQualifier_65 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_10, ml_backend__ml_type_gen__BaseClassQualifier_62, ml_backend__ml_type_gen__QualKind_63, ml_backend__ml_type_gen__TagClassName_64, ml_backend__ml_type_gen__TagArity_60);
              }
#line 1017 "ml_type_gen.m"
            }
#line 1016 "ml_type_gen.m"
          }
#line 1016 "ml_type_gen.m"
        else
#line 1021 "ml_type_gen.m"
          {
#line 1021 "ml_type_gen.m"
            {
#line 1021 "ml_type_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_tag\'/5", (MR_String) "class_id should be a class");
            }
#line 1021 "ml_type_gen.m"
          }
#line 1025 "ml_type_gen.m"
        {
#line 1025 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "ml_type_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_73_73, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagVal_22));
#line 1025 "ml_type_gen.m"
        }
#line 1025 "ml_type_gen.m"
        {
#line 1025 "ml_type_gen.m"
          ml_backend__ml_type_gen__Val_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1025 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Val_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1025 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Val_68, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_73_73));
#line 1025 "ml_type_gen.m"
        }
#line 1026 "ml_type_gen.m"
        {
#line 1026 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1026 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1026 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_76_76, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
#line 1026 "ml_type_gen.m"
        }
#line 1027 "ml_type_gen.m"
        {
#line 1027 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_78_78, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagClassQualifier_65));
#line 1027 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_78_78, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1027 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_78_78, 2) = ((MR_Box) ((MR_String) "data_tag"));
#line 1027 "ml_type_gen.m"
        }
#line 1028 "ml_type_gen.m"
        {
#line 1028 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1028 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1028 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_80_80, 1) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_14));
#line 1028 "ml_type_gen.m"
        }
#line 1027 "ml_type_gen.m"
        {
#line 1027 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1027 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_77_77, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_78_78));
#line 1027 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_80_80));
#line 1027 "ml_type_gen.m"
        }
#line 1026 "ml_type_gen.m"
        {
#line 1026 "ml_type_gen.m"
          ml_backend__ml_type_gen__Field_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1026 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_3[1])));
#line 1026 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_76_76));
#line 1026 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_77_77));
#line 1026 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1026 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 4) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
#line 1026 "ml_type_gen.m"
        }
#line 1030 "ml_type_gen.m"
        {
#line 1030 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "ml_type_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_82_82, 0) = ((MR_Box) (ml_backend__ml_type_gen__Field_69));
#line 1030 "ml_type_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_82_82, 1) = ((MR_Box) (ml_backend__ml_type_gen__Val_68));
#line 1030 "ml_type_gen.m"
        }
#line 1030 "ml_type_gen.m"
        {
#line 1030 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1030 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1030 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_81_81, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_82_82));
#line 1030 "ml_type_gen.m"
        }
#line 1030 "ml_type_gen.m"
        {
#line 1030 "ml_type_gen.m"
          ml_backend__ml_type_gen__InitTag_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__InitTag_23, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_81_81));
#line 1030 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__InitTag_23, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
#line 1030 "ml_type_gen.m"
        }
#line 930 "ml_type_gen.m"
        {
#line 930 "ml_type_gen.m"
          ml_backend__ml_type_gen__InitMembers_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 930 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__InitMembers_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__InitTag_23));
#line 930 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__InitMembers_24, 1) = ((MR_Box) (ml_backend__ml_type_gen__InitMembers0_21));
#line 930 "ml_type_gen.m"
        }
#line 927 "ml_type_gen.m"
      }
#line 936 "ml_type_gen.m"
    {
#line 936 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 936 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_32_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__InitMembers_24));
#line 936 "ml_type_gen.m"
    }
#line 936 "ml_type_gen.m"
    {
#line 936 "ml_type_gen.m"
      ml_backend__ml_type_gen__Stmt_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 936 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_25, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_32_32));
#line 936 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_25, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
#line 936 "ml_type_gen.m"
    }
#line 938 "ml_type_gen.m"
    {
#line 938 "ml_type_gen.m"
      ml_backend__ml_type_gen__EnvVarNames_27 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 939 "ml_type_gen.m"
    {
#line 939 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 939 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_35_35, 0) = ((MR_Box) (ml_backend__ml_type_gen__Args_19));
#line 939 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "ml_type_gen.m"
    }
#line 940 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__Stmt_25);
#line 939 "ml_type_gen.m"
    {
#line 939 "ml_type_gen.m"
      ml_backend__ml_type_gen__Ctor_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 939 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_35_35));
#line 939 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_36_36));
#line 939 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 939 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 4) = ((MR_Box) (ml_backend__ml_type_gen__EnvVarNames_27));
#line 939 "ml_type_gen.m"
    }
#line 941 "ml_type_gen.m"
    {
#line 941 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorFlags_29 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 946 "ml_type_gen.m"
    {
#line 946 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorDefn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 946 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_3[2])));
#line 946 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
#line 946 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorFlags_29));
#line 946 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 3) = ((MR_Box) (ml_backend__ml_type_gen__Ctor_28));
#line 946 "ml_type_gen.m"
    }
#line 920 "ml_type_gen.m"
    return ml_backend__ml_type_gen__CtorDefn_18;
#line 920 "ml_type_gen.m"
  }
#line 102 "ml_type_gen.m"
}

#line 97 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(
#line 97 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1)
#line 97 "ml_type_gen.m"
{
#line 886 "ml_type_gen.m"
  {
#line 886 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 886 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__HeadVar__2_2;

#line 886 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__HeadVar__1_1 == (MR_Integer) 0))
#line 886 "ml_type_gen.m"
      ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 886 "ml_type_gen.m"
    else
#line 886 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__HeadVar__1_1 == (MR_Integer) 2))
#line 888 "ml_type_gen.m"
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 886 "ml_type_gen.m"
      else
#line 886 "ml_type_gen.m"
        if ((ml_backend__ml_type_gen__HeadVar__1_1 == (MR_Integer) 4))
#line 890 "ml_type_gen.m"
          {
#line 891 "ml_type_gen.m"
            MR_Box ml_backend__ml_type_gen__conv0_HeadVar__2_2;

#line 891 "ml_type_gen.m"
            {
#line 891 "ml_type_gen.m"
              ml_backend__ml_type_gen__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_target_uses_constructors\'/1", (MR_String) "target erlang");
            }
#line 891 "ml_type_gen.m"
            ml_backend__ml_type_gen__HeadVar__2_2 = ((MR_Word) ml_backend__ml_type_gen__conv0_HeadVar__2_2);
#line 890 "ml_type_gen.m"
          }
#line 886 "ml_type_gen.m"
        else
#line 886 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__HeadVar__1_1 == (MR_Integer) 1))
#line 887 "ml_type_gen.m"
            ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 886 "ml_type_gen.m"
          else
#line 889 "ml_type_gen.m"
            ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 886 "ml_type_gen.m"
    return ml_backend__ml_type_gen__HeadVar__2_2;
#line 886 "ml_type_gen.m"
  }
#line 97 "ml_type_gen.m"
}

#line 93 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(
#line 93 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Tag_3)
#line 93 "ml_type_gen.m"
{
#line 855 "ml_type_gen.m"
  while (MR_TRUE)
#line 855 "ml_type_gen.m"
    {
#line 855 "ml_type_gen.m"
      /* tailcall optimized into a loop */
#line 855 "ml_type_gen.m"
      {
#line 855 "ml_type_gen.m"
        MR_bool ml_backend__ml_type_gen__succeeded;
#line 855 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__UsesBaseClass_4;

#line 855 "ml_type_gen.m"
        if ((ml_backend__ml_type_gen__Tag_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 856 "ml_type_gen.m"
          ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 1;
#line 855 "ml_type_gen.m"
        else
#line 855 "ml_type_gen.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 861 "ml_type_gen.m"
            {
#line 861 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__SubTag_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 2)));
#line 861 "ml_type_gen.m"
              MR_Integer ml_backend__ml_type_gen___ConstNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 1)));

#line 862 "ml_type_gen.m"
              /* direct tailcall eliminated */
#line 862 "ml_type_gen.m"
              {
#line 862 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__Tag__tmp_copy_3 = ml_backend__ml_type_gen__SubTag_37;

#line 862 "ml_type_gen.m"
                ml_backend__ml_type_gen__Tag_3 = ml_backend__ml_type_gen__Tag__tmp_copy_3;
#line 862 "ml_type_gen.m"
              }
#line 862 "ml_type_gen.m"
              continue;
#line 861 "ml_type_gen.m"
            }
#line 855 "ml_type_gen.m"
          else
#line 855 "ml_type_gen.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__Tag_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 858 "ml_type_gen.m"
              {
#line 858 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__SubTag_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 2)));
#line 858 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen___RAs_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 1)));

#line 859 "ml_type_gen.m"
                /* direct tailcall eliminated */
#line 859 "ml_type_gen.m"
                {
#line 859 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__Tag__tmp_copy_3 = ml_backend__ml_type_gen__SubTag_6;

#line 859 "ml_type_gen.m"
                  ml_backend__ml_type_gen__Tag_3 = ml_backend__ml_type_gen__Tag__tmp_copy_3;
#line 859 "ml_type_gen.m"
                }
#line 859 "ml_type_gen.m"
                continue;
#line 858 "ml_type_gen.m"
              }
#line 855 "ml_type_gen.m"
            else
#line 883 "ml_type_gen.m"
              ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 0;
#line 855 "ml_type_gen.m"
        return ml_backend__ml_type_gen__UsesBaseClass_4;
#line 855 "ml_type_gen.m"
      }
#line 855 "ml_type_gen.m"
      break;
#line 855 "ml_type_gen.m"
    }
#line 93 "ml_type_gen.m"
}

#line 82 "ml_type_gen.m"
MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_uses_secondary_tag_4_p_0(
#line 82 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
#line 82 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
#line 82 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_7,
#line 82 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__SecondaryTag_8)
#line 82 "ml_type_gen.m"
{
#line 574 "ml_type_gen.m"
  {
#line 574 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 574 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_9;
#line 574 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_10_10;
#line 574 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 2)));
#line 574 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 3)));
#line 574 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_20;
#line 574 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_21_21;
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___ExistQTVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 0)));
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 1)));
#line 605 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Ctxt_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 4)));
#line 607 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_9;

#line 606 "ml_type_gen.m"
    {
#line 606 "ml_type_gen.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_type_gen__Args_18, &ml_backend__ml_type_gen__Arity_20);
    }
#line 607 "ml_type_gen.m"
    {
#line 607 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_21_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_17));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_21_21, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_20));
#line 607 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_21_21, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_5));
#line 607 "ml_type_gen.m"
    }
#line 607 "ml_type_gen.m"
    {
#line 607 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_6, ((MR_Box) (ml_backend__ml_type_gen__V_21_21)), &ml_backend__ml_type_gen__conv0_TagVal_9);
    }
#line 607 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_9 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_9);
#line 576 "ml_type_gen.m"
    {
#line 576 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_10_10 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_9);
    }
#line 576 "ml_type_gen.m"
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 576 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 576 "ml_type_gen.m"
      *ml_backend__ml_type_gen__SecondaryTag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_10_10, (MR_Integer) 0)));
#line 574 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 574 "ml_type_gen.m"
  }
#line 82 "ml_type_gen.m"
}

#line 76 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_const_member_decl_flags_0_f_0(void)
#line 76 "ml_type_gen.m"
{
#line 1163 "ml_type_gen.m"
  {
#line 1163 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1163 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

#line 1170 "ml_type_gen.m"
    {
#line 1170 "ml_type_gen.m"
      return ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 1163 "ml_type_gen.m"
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
#line 1163 "ml_type_gen.m"
  }
#line 76 "ml_type_gen.m"
}

#line 71 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_member_decl_flags_0_f_0(void)
#line 71 "ml_type_gen.m"
{
#line 1153 "ml_type_gen.m"
  {
#line 1153 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1153 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

#line 1160 "ml_type_gen.m"
    {
#line 1160 "ml_type_gen.m"
      return ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 1153 "ml_type_gen.m"
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
#line 1153 "ml_type_gen.m"
  }
#line 71 "ml_type_gen.m"
}

#line 67 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_decl_flags_0_f_0(void)
#line 67 "ml_type_gen.m"
{
#line 1173 "ml_type_gen.m"
  {
#line 1173 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1173 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

#line 1180 "ml_type_gen.m"
    {
#line 1180 "ml_type_gen.m"
      return ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 1173 "ml_type_gen.m"
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
#line 1173 "ml_type_gen.m"
  }
#line 67 "ml_type_gen.m"
}

#line 63 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0(void)
#line 63 "ml_type_gen.m"
{
#line 1142 "ml_type_gen.m"
  {
#line 1142 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1142 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

#line 1150 "ml_type_gen.m"
    {
#line 1150 "ml_type_gen.m"
      return ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 1142 "ml_type_gen.m"
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
#line 1142 "ml_type_gen.m"
  }
#line 63 "ml_type_gen.m"
}

#line 58 "ml_type_gen.m"
MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(
#line 58 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__CompilationTarget_7,
#line 58 "ml_type_gen.m"
  MR_String ml_backend__ml_type_gen__UnqualTypeName_8,
#line 58 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__TypeArity_9,
#line 58 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Name_10,
#line 58 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_11)
#line 58 "ml_type_gen.m"
{
#line 1109 "ml_type_gen.m"
  {
#line 1109 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1109 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__CtorName_12;
#line 1109 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__UnqualName_13;

#line 1110 "ml_type_gen.m"
    {
#line 1110 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualName_13 = mdbcomp__prim_data__unqualify_name_1_f_0(ml_backend__ml_type_gen__Name_10);
    }
#line 1113 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__CompilationTarget_7 == (MR_Integer) 2))
#line 1113 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 1113 "ml_type_gen.m"
    else
#line 1113 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__CompilationTarget_7 == (MR_Integer) 3))
#line 1112 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 1113 "ml_type_gen.m"
      else
#line 1113 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = MR_FALSE;
#line 1114 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1114 "ml_type_gen.m"
      {
#line 1115 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = (strcmp(ml_backend__ml_type_gen__UnqualName_13, ml_backend__ml_type_gen__UnqualTypeName_8) == 0);
#line 1114 "ml_type_gen.m"
        if (ml_backend__ml_type_gen__succeeded)
#line 1116 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_11 == ml_backend__ml_type_gen__TypeArity_9);
#line 1114 "ml_type_gen.m"
      }
#line 1123 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1122 "ml_type_gen.m"
      {
#line 1122 "ml_type_gen.m"
        {
#line 1122 "ml_type_gen.m"
          return ml_backend__ml_type_gen__CtorName_12 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", ml_backend__ml_type_gen__UnqualName_13);
        }
#line 1122 "ml_type_gen.m"
      }
#line 1123 "ml_type_gen.m"
    else
#line 1124 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorName_12 = ml_backend__ml_type_gen__UnqualName_13;
#line 1109 "ml_type_gen.m"
    return ml_backend__ml_type_gen__CtorName_12;
#line 1109 "ml_type_gen.m"
  }
#line 58 "ml_type_gen.m"
}

#line 53 "ml_type_gen.m"
MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(
#line 53 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__CompilationTarget_6,
#line 53 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_7,
#line 53 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Name_8,
#line 53 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_9)
#line 53 "ml_type_gen.m"
{
#line 1102 "ml_type_gen.m"
  {
#line 1102 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1102 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__CtorName_10;
#line 1102 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TypeCtor_7, (MR_Integer) 0)));
#line 1102 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__TypeArity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TypeCtor_7, (MR_Integer) 1)));
#line 1102 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__UnqualTypeName_13;

#line 1104 "ml_type_gen.m"
    {
#line 1104 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualTypeName_13 = mdbcomp__prim_data__unqualify_name_1_f_0(ml_backend__ml_type_gen__TypeName_11);
    }
#line 1105 "ml_type_gen.m"
    {
#line 1105 "ml_type_gen.m"
      return ml_backend__ml_type_gen__CtorName_10 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(ml_backend__ml_type_gen__CompilationTarget_6, ml_backend__ml_type_gen__UnqualTypeName_13, ml_backend__ml_type_gen__TypeArity_12, ml_backend__ml_type_gen__Name_8, ml_backend__ml_type_gen__Arity_9);
    }
#line 1102 "ml_type_gen.m"
    return ml_backend__ml_type_gen__CtorName_10;
#line 1102 "ml_type_gen.m"
  }
#line 53 "ml_type_gen.m"
}

#line 49 "ml_type_gen.m"
void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(
#line 49 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
#line 49 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__QualifiedTypeName_6,
#line 49 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__Arity_5)
#line 49 "ml_type_gen.m"
{
#line 1091 "ml_type_gen.m"
  {
#line 1091 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1091 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1091 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ModuleName_7;
#line 1091 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__TypeName_8;
#line 1091 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Module_9;

#line 1091 "ml_type_gen.m"
    *ml_backend__ml_type_gen__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1094 "ml_type_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_type_gen__Name_4)) == (MR_mktag((MR_Integer) 1))))
#line 1093 "ml_type_gen.m"
      {
#line 1093 "ml_type_gen.m"
        ml_backend__ml_type_gen__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_4, (MR_Integer) 0)));
#line 1093 "ml_type_gen.m"
        ml_backend__ml_type_gen__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_4, (MR_Integer) 1)));
#line 1093 "ml_type_gen.m"
      }
#line 1094 "ml_type_gen.m"
    else
#line 1096 "ml_type_gen.m"
      {
#line 1096 "ml_type_gen.m"
        ml_backend__ml_type_gen__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Name_4, (MR_Integer) 0)));
#line 1097 "ml_type_gen.m"
        {
#line 1097 "ml_type_gen.m"
          ml_backend__ml_type_gen__ModuleName_7 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
        }
#line 1096 "ml_type_gen.m"
      }
#line 1099 "ml_type_gen.m"
    {
#line 1099 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Module_9 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_type_gen__ModuleName_7);
    }
#line 1100 "ml_type_gen.m"
    {
#line 1100 "ml_type_gen.m"
      MR_Word base;
#line 1100 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1100 "ml_type_gen.m"
      *ml_backend__ml_type_gen__QualifiedTypeName_6 = base;
#line 1100 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Module_9));
#line 1100 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1100 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__TypeName_8));
#line 1100 "ml_type_gen.m"
    }
#line 1091 "ml_type_gen.m"
  }
#line 49 "ml_type_gen.m"
}

#line 150 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0_2(
#line 150 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 150 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 150 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 150 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3)
#line 150 "ml_type_gen.m"
{
#line 150 "ml_type_gen.m"
  {
#line 150 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 150 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12;

#line 150 "ml_type_gen.m"
    {
#line 150 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_type_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12);
    }
#line 150 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12));
#line 150 "ml_type_gen.m"
  }
#line 150 "ml_type_gen.m"
}

#line 145 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0_1(
#line 145 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 145 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
#line 145 "ml_type_gen.m"
{
#line 145 "ml_type_gen.m"
  {
#line 145 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 145 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;

#line 145 "ml_type_gen.m"
    {
#line 145 "ml_type_gen.m"
      return ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_types__145__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
#line 145 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 145 "ml_type_gen.m"
  }
#line 145 "ml_type_gen.m"
}

#line 44 "ml_type_gen.m"
void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0(
#line 44 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_3,
#line 44 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defns_4)
#line 44 "ml_type_gen.m"
{
#line 137 "ml_type_gen.m"
  {
#line 137 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 137 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Globals_5;
#line 137 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__HighLevelData_6;
#line 137 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Target_7;

#line 138 "ml_type_gen.m"
    {
#line 138 "ml_type_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__Globals_5);
    }
#line 139 "ml_type_gen.m"
    {
#line 139 "ml_type_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_type_gen__Globals_5, (MR_Integer) 249, &ml_backend__ml_type_gen__HighLevelData_6);
    }
#line 140 "ml_type_gen.m"
    {
#line 140 "ml_type_gen.m"
      libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_5, &ml_backend__ml_type_gen__Target_7);
    }
#line 151 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__HighLevelData_6 == (MR_Integer) 0))
#line 153 "ml_type_gen.m"
      *ml_backend__ml_type_gen__Defns_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 151 "ml_type_gen.m"
    else
#line 142 "ml_type_gen.m"
      {
#line 142 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TypeInfo_20_20;
#line 142 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TypeTable_8;
#line 142 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TypeCtorsDefns0_9;
#line 142 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TypeCtorDefns_13;
#line 142 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_15_15;
#line 142 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_17_17;
#line 150 "ml_type_gen.m"
        MR_Box ml_backend__ml_type_gen__conv1_Defns_4;

#line 143 "ml_type_gen.m"
        {
#line 143 "ml_type_gen.m"
          hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__TypeTable_8);
        }
#line 144 "ml_type_gen.m"
        {
#line 144 "ml_type_gen.m"
          hlds__hlds_data__get_all_type_ctor_defns_2_p_0(ml_backend__ml_type_gen__TypeTable_8, &ml_backend__ml_type_gen__TypeCtorsDefns0_9);
        }
#line 145 "ml_type_gen.m"
        {
#line 145 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 145 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_15_15, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[0]));
#line 145 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_15_15, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_types_2_p_0_1));
#line 145 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_15_15, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 145 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_15_15, 3) = ((MR_Box) (ml_backend__ml_type_gen__Target_7));
#line 145 "ml_type_gen.m"
        }
#line 6866 "ml_backend.ml_type_gen.c"
        ml_backend__ml_type_gen__TypeInfo_20_20 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_1[0];
#line 145 "ml_type_gen.m"
        {
#line 145 "ml_type_gen.m"
          mercury__list__filter_3_p_0(ml_backend__ml_type_gen__TypeInfo_20_20, ml_backend__ml_type_gen__V_15_15, ml_backend__ml_type_gen__TypeCtorsDefns0_9, &ml_backend__ml_type_gen__TypeCtorDefns_13);
        }
#line 150 "ml_type_gen.m"
        {
#line 150 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 150 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_17_17, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[0]));
#line 150 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_17_17, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_types_2_p_0_2));
#line 150 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 150 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_17_17, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_3));
#line 150 "ml_type_gen.m"
        }
#line 150 "ml_type_gen.m"
        {
#line 150 "ml_type_gen.m"
          mercury__list__foldl_4_p_0(ml_backend__ml_type_gen__TypeInfo_20_20, (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[0], ml_backend__ml_type_gen__V_17_17, ml_backend__ml_type_gen__TypeCtorDefns_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv1_Defns_4);
        }
#line 150 "ml_type_gen.m"
        *ml_backend__ml_type_gen__Defns_4 = ((MR_Word) ml_backend__ml_type_gen__conv1_Defns_4);
#line 142 "ml_type_gen.m"
      }
#line 137 "ml_type_gen.m"
  }
#line 44 "ml_type_gen.m"
}

void mercury__ml_backend__ml_type_gen__init(void)
{
}

void mercury__ml_backend__ml_type_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_tag_uses_base_class_0);
}

void mercury__ml_backend__ml_type_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_type_gen. */
