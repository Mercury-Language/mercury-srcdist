/*
** Automatically generated from `ml_type_gen.m'
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


/* :- module ml_backend.ml_type_gen. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_type_gen__init
ENDINIT
*/

#include "ml_backend.ml_type_gen.mih"


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
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
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



#line 658 "ml_type_gen.m"
struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s {
#line 666 "ml_type_gen.m"
  MR_bool ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded;
#line 782 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RAs_66;
#line 784 "ml_type_gen.m"
  jmp_buf ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__commit_0;
#line 784 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106;
#line 784 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__conv9_RA_106;
#line 658 "ml_type_gen.m"
};

#line 432 "ml_type_gen.m"
struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s {
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10;
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12;
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13;
#line 437 "ml_type_gen.m"
  MR_bool ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded;
#line 456 "ml_type_gen.m"
  jmp_buf ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_0;
#line 456 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_59;
#line 456 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv0_Ctor_59;
#line 477 "ml_type_gen.m"
  jmp_buf ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_1;
#line 477 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_27;
#line 478 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv1_Ctor_27;
#line 432 "ml_type_gen.m"
};


#line 195 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 198 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 201 "ml_backend.ml_type_gen.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 204 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

#line 207 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

#line 210 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 213 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

#line 216 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;

#line 219 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0;

#line 222 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1;

#line 225 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_value_ordered_tag_uses_base_class_0[2];

#line 228 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0[2];

#line 231 "ml_backend.ml_type_gen.c"
static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0[2];

#line 234 "ml_backend.ml_type_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
#line 237 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 239 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2);

#line 242 "ml_backend.ml_type_gen.c"
static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
#line 245 "ml_backend.ml_type_gen.c"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_1,
#line 247 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 249 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3);

#line 1208 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1(
#line 1208 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 1208 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1208 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 1208 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3);

#line 1185 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
#line 1185 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8);

#line 1256 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1256__1_2_p_0(
#line 1256 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_18,
#line 1256 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_71);

#line 334 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_enum_constant__334__1_2_p_0(
#line 334 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_17,
#line 334 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_65);

#line 1256 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1(
#line 1256 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg);

#line 1215 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Mapping_9,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_10,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Type_11,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_12,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_59,
#line 1215 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_60);

#line 1185 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen___ModuleInfo_5,
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
#line 1185 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8);

#line 1044 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_field_6_p_0(
#line 1044 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1044 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1044 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Arg_9,
#line 1044 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1044 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16,
#line 1044 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17);

#line 1033 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_info_member_6_p_0(
#line 1033 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1033 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1033 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeVar_9,
#line 1033 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1033 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_14,
#line 1033 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_15);

#line 1026 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_typeclass_info_member_6_p_0(
#line 1026 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1026 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1026 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Constraint_9,
#line 1026 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1026 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_13,
#line 1026 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_14);

#line 957 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_5_f_0(
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_7,
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_8,
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassType_9,
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassQualifier_10,
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Member_11);

#line 946 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
#line 946 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1);

#line 889 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
#line 889 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1);

#line 743 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_3(
#line 743 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 743 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 743 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 743 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 743 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4);

#line 736 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_2(
#line 736 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 736 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 736 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 736 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 736 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4);

#line 734 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_1(
#line 734 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 734 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 734 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 734 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 734 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4);

#line 784 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_4(
#line 784 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 784 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_6(
#line 784 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 784 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_5(
#line 784 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 784 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_7(
#line 784 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 658 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0(
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_13,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_14,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_15,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_16,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_17,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_18,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_19,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_20,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Members0_21,
#line 658 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_Members_22,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_CtorMethods0_23,
#line 658 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_CtorMethods_24);

#line 608 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_secondary_tag_class_7_p_0(
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Context_8,
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_9,
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_10,
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Members_11,
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_12,
#line 608 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_TypeDefn_13,
#line 608 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__SecondaryTagClassId_14);

#line 598 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
#line 598 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
#line 598 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
#line 598 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_7);

#line 591 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
#line 591 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
#line 591 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__RA_2);

#line 582 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_needs_secondary_tag_3_p_0(
#line 582 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_4,
#line 582 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_5,
#line 582 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_6);

#line 496 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_9(
#line 496 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 496 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 496 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 496 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
#line 496 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
#line 496 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5);

#line 456 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_1(
#line 456 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 456 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_3(
#line 456 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 456 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_2(
#line 456 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 456 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_4(
#line 456 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 477 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_5(
#line 477 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 478 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_7(
#line 478 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 477 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_6(
#line 477 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 477 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_8(
#line 477 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg);

#line 432 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0(
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_9,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctors_12,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_13,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_45,
#line 432 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_46);

#line 334 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0_1(
#line 334 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg);

#line 295 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0(
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_7,
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_9,
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Type_10,
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_11);

#line 252 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0_1(
#line 252 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 252 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

#line 234 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_9,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctors_12,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_13,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35,
#line 234 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36);

#line 153 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_defn_4_p_0(
#line 153 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_5,
#line 153 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
#line 153 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11,
#line 153 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);

#line 1182 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
#line 1182 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 1182 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1182 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2);

#line 918 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
#line 918 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 918 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

#line 915 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
#line 915 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 915 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

#line 147 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0_1(
#line 147 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 147 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 147 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 147 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_1[3][3];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[6][2];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[4][1];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[2][7];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[2][5];

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
    ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[0])),
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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[2][7] = {
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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
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
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 966 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 975 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 983 "ml_backend.ml_type_gen.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 992 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

#line 1001 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

#line 1010 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1018 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1027 "ml_backend.ml_type_gen.c"
static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0
  }
};

#line 1035 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0 = {
  (MR_String) "tag_does_not_use_base_class",
  (MR_Integer) 0
};

#line 1041 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1 = {
  (MR_String) "tag_uses_base_class",
  (MR_Integer) 1
};

#line 1047 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_value_ordered_tag_uses_base_class_0[2] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0,
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1
};

#line 1053 "ml_backend.ml_type_gen.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0[2] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0,
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1
};

#line 1059 "ml_backend.ml_type_gen.c"
static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1065 "ml_backend.ml_type_gen.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_tag_uses_base_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001)),
  ((MR_Box) (ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001)),
  (MR_String) "ml_backend.ml_type_gen",
  (MR_String) "tag_uses_base_class",
  {     ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0 },
  {     ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_value_ordered_tag_uses_base_class_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0
};

#line 1082 "ml_backend.ml_type_gen.c"
static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
#line 1085 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1087 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2)
#line 1089 "ml_backend.ml_type_gen.c"
{
#line 1091 "ml_backend.ml_type_gen.c"
  {
#line 1093 "ml_backend.ml_type_gen.c"
    MR_bool ml_backend__ml_type_gen__succeeded;

#line 1096 "ml_backend.ml_type_gen.c"
    {
#line 1098 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2));
    }
#line 1101 "ml_backend.ml_type_gen.c"
    return ml_backend__ml_type_gen__succeeded;
#line 1103 "ml_backend.ml_type_gen.c"
  }
#line 1105 "ml_backend.ml_type_gen.c"
}

#line 1108 "ml_backend.ml_type_gen.c"
static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
#line 1111 "ml_backend.ml_type_gen.c"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_1,
#line 1113 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 1115 "ml_backend.ml_type_gen.c"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3)
#line 1117 "ml_backend.ml_type_gen.c"
{
#line 1119 "ml_backend.ml_type_gen.c"
  {
#line 1121 "ml_backend.ml_type_gen.c"
    MR_Word ml_backend__ml_type_gen__conv0_HeadVar__1_1;

#line 1124 "ml_backend.ml_type_gen.c"
    {
#line 1126 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(&ml_backend__ml_type_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_3));
    }
#line 1129 "ml_backend.ml_type_gen.c"
    *ml_backend__ml_type_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_type_gen__conv0_HeadVar__1_1));
#line 1131 "ml_backend.ml_type_gen.c"
  }
#line 1133 "ml_backend.ml_type_gen.c"
}

#line 1208 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1(
#line 1208 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 1208 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1208 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 1208 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3)
#line 1208 "ml_type_gen.m"
{
#line 1208 "ml_type_gen.m"
  {
#line 1208 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 1208 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_60;

#line 1208 "ml_type_gen.m"
    {
#line 1208 "ml_type_gen.m"
      ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_60);
    }
#line 1208 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_60));
#line 1208 "ml_type_gen.m"
  }
#line 1208 "ml_type_gen.m"
}

#line 1185 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
#line 1185 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8)
#line 1185 "ml_type_gen.m"
{
#line 1189 "ml_type_gen.m"
  {
#line 1189 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1189 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Lang_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 0)));
#line 1189 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 1)));
#line 1189 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 2)));
#line 1189 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Mapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 3)));
#line 1189 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeDefn_13;
#line 1189 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeBody_14;

#line 1191 "ml_type_gen.m"
    {
#line 1191 "ml_type_gen.m"
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(ml_backend__ml_type_gen__TypeTable_6, ml_backend__ml_type_gen__TypeCtor_11, &ml_backend__ml_type_gen__TypeDefn_13);
    }
#line 1192 "ml_type_gen.m"
    {
#line 1192 "ml_type_gen.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_type_gen__TypeDefn_13, &ml_backend__ml_type_gen__TypeBody_14);
    }
#line 1200 "ml_type_gen.m"
#line 1200 "ml_type_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_14)) {
#line 1200 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1200 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 1198 "ml_type_gen.m"
        {
#line 1199 "ml_type_gen.m"
          {
#line 1199 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_exported_enum\'/4", (MR_String) "invalid type");
#line 1199 "ml_type_gen.m"
            return;
          }
#line 1198 "ml_type_gen.m"
        }
#line 1200 "ml_type_gen.m"
        break;
#line 1200 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 1203 "ml_type_gen.m"
        {
#line 1203 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 0)));
#line 1203 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TagValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 1)));
#line 1203 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__QualifiedClassName_29;
#line 1203 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__MLDS_ClassArity_30;
#line 1203 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__MLDS_Type_31;
#line 1203 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__ExportConstants_32;
#line 1203 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_34_34;
#line 1201 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___CheaperTagTest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 2)));
#line 1201 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___IsEnumOrDummy_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 3)));
#line 1201 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___MaybeUserEq_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 4)));
#line 1201 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___MaybeDirectArgCtors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 5)));
#line 1201 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___ReservedTag_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1201 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___ReservedAddr_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1201 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___IsForeignType_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 7)));
#line 1207 "ml_type_gen.m"
          MR_Box ml_backend__ml_type_gen__conv1_ExportConstants_32;

#line 1204 "ml_type_gen.m"
          {
#line 1204 "ml_type_gen.m"
            ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_11, &ml_backend__ml_type_gen__QualifiedClassName_29, &ml_backend__ml_type_gen__MLDS_ClassArity_30);
          }
#line 1205 "ml_type_gen.m"
          {
#line 1205 "ml_type_gen.m"
            ml_backend__ml_type_gen__MLDS_Type_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1205 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1205 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualifiedClassName_29));
#line 1205 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_30));
#line 1205 "ml_type_gen.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 3) = ((MR_Box) ((MR_Integer) 4));
#line 1205 "ml_type_gen.m"
          }
#line 1208 "ml_type_gen.m"
          {
#line 1208 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1208 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[0]));
#line 1208 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1));
#line 1208 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1208 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_11));
#line 1208 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 4) = ((MR_Box) (ml_backend__ml_type_gen__Mapping_12));
#line 1208 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 5) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_21));
#line 1208 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_34_34, 6) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_31));
#line 1208 "ml_type_gen.m"
          }
#line 1207 "ml_type_gen.m"
          {
#line 1207 "ml_type_gen.m"
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[2], ml_backend__ml_type_gen__V_34_34, ml_backend__ml_type_gen__Ctors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv1_ExportConstants_32);
          }
#line 1207 "ml_type_gen.m"
          ml_backend__ml_type_gen__ExportConstants_32 = ((MR_Word) ml_backend__ml_type_gen__conv1_ExportConstants_32);
#line 1211 "ml_type_gen.m"
          {
#line 1211 "ml_type_gen.m"
            MR_Word base;
#line 1211 "ml_type_gen.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "ml_type_gen.m"
            *ml_backend__ml_type_gen__MLDS_ExportedEnum_8 = base;
#line 1211 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Lang_9));
#line 1211 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_10));
#line 1211 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_11));
#line 1211 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__ExportConstants_32));
#line 1211 "ml_type_gen.m"
          }
#line 1203 "ml_type_gen.m"
        }
#line 1200 "ml_type_gen.m"
        break;
#line 1200 "ml_type_gen.m"
      case (MR_Integer) 2:
#line 1198 "ml_type_gen.m"
        {
#line 1199 "ml_type_gen.m"
          {
#line 1199 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_exported_enum\'/4", (MR_String) "invalid type");
#line 1199 "ml_type_gen.m"
            return;
          }
#line 1198 "ml_type_gen.m"
        }
#line 1200 "ml_type_gen.m"
        break;
#line 1200 "ml_type_gen.m"
      case (MR_Integer) 3:
#line 1198 "ml_type_gen.m"
        {
#line 1199 "ml_type_gen.m"
          {
#line 1199 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_exported_enum\'/4", (MR_String) "invalid type");
#line 1199 "ml_type_gen.m"
            return;
          }
#line 1198 "ml_type_gen.m"
        }
#line 1200 "ml_type_gen.m"
        break;
#line 1200 "ml_type_gen.m"
    }
#line 1189 "ml_type_gen.m"
  }
#line 1185 "ml_type_gen.m"
}

#line 1256 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1256__1_2_p_0(
#line 1256 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_18,
#line 1256 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_71)
#line 1256 "ml_type_gen.m"
{
#line 1256 "ml_type_gen.m"
  {
#line 1256 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_18 == ml_backend__ml_type_gen__HeadVar__2_71);

#line 1256 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 1256 "ml_type_gen.m"
  }
#line 1256 "ml_type_gen.m"
}

#line 334 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_enum_constant__334__1_2_p_0(
#line 334 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_17,
#line 334 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_65)
#line 334 "ml_type_gen.m"
{
#line 334 "ml_type_gen.m"
  {
#line 334 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_17 == ml_backend__ml_type_gen__HeadVar__2_65);

#line 334 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 334 "ml_type_gen.m"
  }
#line 334 "ml_type_gen.m"
}

#line 89 "ml_type_gen.m"
void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(
#line 89 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__HeadVar__1_1,
#line 89 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
#line 89 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__3_3)
#line 89 "ml_type_gen.m"
{
#line 89 "ml_type_gen.m"
  {
#line 89 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 89 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__2_2;
#line 89 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__3_3;

#line 89 "ml_type_gen.m"
    {
#line 89 "ml_type_gen.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_type_gen__HeadVar__1_1, ml_backend__ml_type_gen__Cast_HeadVar1_4, ml_backend__ml_type_gen__Cast_HeadVar2_5);
    }
#line 89 "ml_type_gen.m"
  }
#line 89 "ml_type_gen.m"
}

#line 89 "ml_type_gen.m"
MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(
#line 89 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_1,
#line 89 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2)
#line 89 "ml_type_gen.m"
{
#line 1447 "ml_backend.ml_type_gen.c"
  {
#line 1449 "ml_backend.ml_type_gen.c"
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__HeadVar__2_1 == ml_backend__ml_type_gen__HeadVar__2_2);

#line 1452 "ml_backend.ml_type_gen.c"
    return ml_backend__ml_type_gen__succeeded;
#line 1454 "ml_backend.ml_type_gen.c"
  }
#line 89 "ml_type_gen.m"
}

#line 1256 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1(
#line 1256 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg)
#line 1256 "ml_type_gen.m"
{
#line 1256 "ml_type_gen.m"
  {
#line 1256 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1256 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;

#line 1256 "ml_type_gen.m"
    {
#line 1256 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1256__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))));
    }
#line 1256 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 1256 "ml_type_gen.m"
  }
#line 1256 "ml_type_gen.m"
}

#line 1215 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Mapping_9,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_10,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Type_11,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_12,
#line 1215 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_59,
#line 1215 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_60)
#line 1215 "ml_type_gen.m"
{
#line 1222 "ml_type_gen.m"
  {
#line 1222 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1222 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__QualName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 2)));
#line 1222 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 4)));
#line 1222 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_20;
#line 1222 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ConstValue_22;
#line 1222 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__UnqualName_55;
#line 1222 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__UnqualSymName_56;
#line 1222 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__ForeignName_57;
#line 1222 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ExportConstant_58;
#line 1222 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_61_61;
#line 1222 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_67_67;
#line 1222 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_72_72;
#line 1223 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 0)));
#line 1223 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 1)));
#line 1223 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 3)));
#line 1223 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 5)));
#line 1224 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_20;
#line 1259 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv1_ForeignName_57;

#line 1224 "ml_type_gen.m"
    {
#line 1224 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1224 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualName_16));
#line 1224 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_18));
#line 1224 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_8));
#line 1224 "ml_type_gen.m"
    }
#line 1224 "ml_type_gen.m"
    {
#line 1224 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__TagValues_10, ((MR_Box) (ml_backend__ml_type_gen__V_61_61)), &ml_backend__ml_type_gen__conv0_TagVal_20);
    }
#line 1224 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_20 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_20);
#line 1228 "ml_type_gen.m"
#line 1228 "ml_type_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_20)) {
#line 1228 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1228 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 1251 "ml_type_gen.m"
        {
#line 1252 "ml_type_gen.m"
          {
#line 1252 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
#line 1252 "ml_type_gen.m"
            return;
          }
#line 1251 "ml_type_gen.m"
        }
#line 1228 "ml_type_gen.m"
        break;
#line 1228 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 1228 "ml_type_gen.m"
      case (MR_Integer) 2:
#line 1251 "ml_type_gen.m"
        {
#line 1252 "ml_type_gen.m"
          {
#line 1252 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
#line 1252 "ml_type_gen.m"
            return;
          }
#line 1251 "ml_type_gen.m"
        }
#line 1228 "ml_type_gen.m"
        break;
#line 1228 "ml_type_gen.m"
      case (MR_Integer) 3:
#line 1228 "ml_type_gen.m"
#line 1228 "ml_type_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 0)))) {
#line 1228 "ml_type_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 0:
#line 1226 "ml_type_gen.m"
            {
#line 1226 "ml_type_gen.m"
              MR_Integer ml_backend__ml_type_gen__Int_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 1)));
#line 1226 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_66_66;

#line 1227 "ml_type_gen.m"
              {
#line 1227 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1227 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_66_66, 1) = ((MR_Box) (ml_backend__ml_type_gen__Int_21));
#line 1227 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_66_66, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_11));
#line 1227 "ml_type_gen.m"
              }
#line 1227 "ml_type_gen.m"
              {
#line 1227 "ml_type_gen.m"
                ml_backend__ml_type_gen__ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1227 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1227 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_66_66));
#line 1227 "ml_type_gen.m"
              }
#line 1226 "ml_type_gen.m"
            }
#line 1228 "ml_type_gen.m"
            break;
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 1:
#line 1229 "ml_type_gen.m"
            {
#line 1229 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__Lang_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 1)));
#line 1229 "ml_type_gen.m"
              MR_String ml_backend__ml_type_gen__String_24 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 2)));
#line 1229 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_65_65;

#line 1230 "ml_type_gen.m"
              {
#line 1230 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_65_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_65_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1230 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_65_65, 1) = ((MR_Box) (ml_backend__ml_type_gen__Lang_23));
#line 1230 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_65_65, 2) = ((MR_Box) (ml_backend__ml_type_gen__String_24));
#line 1230 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_65_65, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_11));
#line 1230 "ml_type_gen.m"
              }
#line 1230 "ml_type_gen.m"
              {
#line 1230 "ml_type_gen.m"
                ml_backend__ml_type_gen__ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1230 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1230 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_65_65));
#line 1230 "ml_type_gen.m"
              }
#line 1229 "ml_type_gen.m"
            }
#line 1228 "ml_type_gen.m"
            break;
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 2:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 3:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 4:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 5:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 6:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 7:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 8:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 9:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 10:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 11:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 12:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 13:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 14:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 15:
#line 1228 "ml_type_gen.m"
          case (MR_Integer) 16:
#line 1251 "ml_type_gen.m"
            {
#line 1252 "ml_type_gen.m"
              {
#line 1252 "ml_type_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
#line 1252 "ml_type_gen.m"
                return;
              }
#line 1251 "ml_type_gen.m"
            }
#line 1228 "ml_type_gen.m"
            break;
#line 1228 "ml_type_gen.m"
        }
#line 1228 "ml_type_gen.m"
        break;
#line 1228 "ml_type_gen.m"
    }
#line 1256 "ml_type_gen.m"
    {
#line 1256 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_67_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1256 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[1]));
#line 1256 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 1) = ((MR_Box) (ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1));
#line 1256 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1256 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 3) = ((MR_Box) (ml_backend__ml_type_gen__Arity_18));
#line 1256 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_67_67, 4) = ((MR_Box) ((MR_Integer) 0));
#line 1256 "ml_type_gen.m"
    }
#line 1256 "ml_type_gen.m"
    {
#line 1256 "ml_type_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_type_gen__V_67_67, (MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant arity != 0");
    }
#line 1257 "ml_type_gen.m"
    {
#line 1257 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualName_55 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__QualName_16);
    }
#line 1258 "ml_type_gen.m"
    {
#line 1258 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualSymName_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1258 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__UnqualSymName_56, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualName_55));
#line 1258 "ml_type_gen.m"
    }
#line 1259 "ml_type_gen.m"
    {
#line 1259 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_type_gen__Mapping_9, ((MR_Box) (ml_backend__ml_type_gen__UnqualSymName_56)), &ml_backend__ml_type_gen__conv1_ForeignName_57);
    }
#line 1259 "ml_type_gen.m"
    ml_backend__ml_type_gen__ForeignName_57 = ((MR_String) ml_backend__ml_type_gen__conv1_ForeignName_57);
#line 1261 "ml_type_gen.m"
    {
#line 1261 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1261 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_72_72, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_22));
#line 1261 "ml_type_gen.m"
    }
#line 1260 "ml_type_gen.m"
    {
#line 1260 "ml_type_gen.m"
      ml_backend__ml_type_gen__ExportConstant_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportConstant_58, 0) = ((MR_Box) (ml_backend__ml_type_gen__ForeignName_57));
#line 1260 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportConstant_58, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_72_72));
#line 1260 "ml_type_gen.m"
    }
#line 1262 "ml_type_gen.m"
    {
#line 1262 "ml_type_gen.m"
      MR_Word base;
#line 1262 "ml_type_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1262 "ml_type_gen.m"
      *ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_60 = base;
#line 1262 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__ExportConstant_58));
#line 1262 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_59));
#line 1262 "ml_type_gen.m"
    }
#line 1222 "ml_type_gen.m"
  }
#line 1215 "ml_type_gen.m"
}

#line 1185 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen___ModuleInfo_5,
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
#line 1185 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
#line 1185 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8)
#line 1185 "ml_type_gen.m"
{
#line 1189 "ml_type_gen.m"
  {
#line 1189 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;

#line 1189 "ml_type_gen.m"
    {
#line 1189 "ml_type_gen.m"
      ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(ml_backend__ml_type_gen__TypeTable_6, ml_backend__ml_type_gen__ExportedEnumInfo_7, ml_backend__ml_type_gen__MLDS_ExportedEnum_8);
    }
#line 1189 "ml_type_gen.m"
  }
#line 1185 "ml_type_gen.m"
}

#line 1044 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_field_6_p_0(
#line 1044 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1044 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1044 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Arg_9,
#line 1044 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1044 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16,
#line 1044 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17)
#line 1044 "ml_type_gen.m"
{
#line 1047 "ml_type_gen.m"
  {
#line 1047 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MaybeFieldName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_9, (MR_Integer) 0)));
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_9, (MR_Integer) 1)));
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Width_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_9, (MR_Integer) 2)));
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Type_28;
#line 1047 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__FieldName_29;
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_30_30;
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_31_31;
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_33_33;
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_40;
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EntityDefn_42;
#line 1047 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__DeclFlags_43;
#line 1048 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Context_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_9, (MR_Integer) 3)));

#line 1058 "ml_type_gen.m"
    {
#line 1058 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_13, ml_backend__ml_type_gen__Width_14);
    }
#line 1058 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1059 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Type_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1058 "ml_type_gen.m"
    else
#line 1061 "ml_type_gen.m"
      {
#line 1061 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Type_28 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_13);
      }
#line 1063 "ml_type_gen.m"
    {
#line 1063 "ml_type_gen.m"
      ml_backend__ml_type_gen__FieldName_29 = ml_backend__ml_code_util__ml_gen_field_name_2_f_0(ml_backend__ml_type_gen__MaybeFieldName_12, ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16);
    }
#line 1065 "ml_type_gen.m"
    {
#line 1065 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_29));
#line 1065 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1065 "ml_type_gen.m"
    }
#line 1065 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__V_31_31);
#line 1066 "ml_type_gen.m"
    {
#line 1066 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_33_33 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_8);
    }
#line 1073 "ml_type_gen.m"
    {
#line 1073 "ml_type_gen.m"
      ml_backend__ml_type_gen__Name_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_40, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_30_30));
#line 1073 "ml_type_gen.m"
    }
#line 1076 "ml_type_gen.m"
    {
#line 1076 "ml_type_gen.m"
      ml_backend__ml_type_gen__EntityDefn_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_42, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_28));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_42, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_42, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "ml_type_gen.m"
    }
#line 1077 "ml_type_gen.m"
    {
#line 1077 "ml_type_gen.m"
      ml_backend__ml_type_gen__DeclFlags_43 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
#line 1078 "ml_type_gen.m"
    {
#line 1078 "ml_type_gen.m"
      MR_Word base;
#line 1078 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "ml_type_gen.m"
      *ml_backend__ml_type_gen__Defn_10 = base;
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_40));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_33_33));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_43));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_42));
#line 1078 "ml_type_gen.m"
    }
#line 1067 "ml_type_gen.m"
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16 + (MR_Integer) 1);
#line 1047 "ml_type_gen.m"
  }
#line 1044 "ml_type_gen.m"
}

#line 1033 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_info_member_6_p_0(
#line 1033 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1033 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1033 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeVar_9,
#line 1033 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1033 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_14,
#line 1033 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_15)
#line 1033 "ml_type_gen.m"
{
#line 1036 "ml_type_gen.m"
  {
#line 1036 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_13;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_16_16;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Type_29;
#line 1036 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__FieldName_30;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_31_31;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_32_32;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_34_34;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_41;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EntityDefn_43;
#line 1036 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__DeclFlags_44;

#line 1041 "ml_type_gen.m"
    {
#line 1041 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_16_16, 0) = ((MR_Box) (ml_backend__ml_type_gen__TypeVar_9));
#line 1041 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_16_16, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1041 "ml_type_gen.m"
    }
#line 1041 "ml_type_gen.m"
    {
#line 1041 "ml_type_gen.m"
      check_hlds__polymorphism__build_type_info_type_2_p_0(ml_backend__ml_type_gen__V_16_16, &ml_backend__ml_type_gen__Type_13);
    }
#line 1058 "ml_type_gen.m"
    {
#line 1058 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_13, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1058 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1059 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Type_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1058 "ml_type_gen.m"
    else
#line 1061 "ml_type_gen.m"
      {
#line 1061 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Type_29 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_13);
      }
#line 1063 "ml_type_gen.m"
    {
#line 1063 "ml_type_gen.m"
      ml_backend__ml_type_gen__FieldName_30 = ml_backend__ml_code_util__ml_gen_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_14);
    }
#line 1065 "ml_type_gen.m"
    {
#line 1065 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_32_32, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_30));
#line 1065 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_32_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1065 "ml_type_gen.m"
    }
#line 1065 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__V_32_32);
#line 1066 "ml_type_gen.m"
    {
#line 1066 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_34_34 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_8);
    }
#line 1073 "ml_type_gen.m"
    {
#line 1073 "ml_type_gen.m"
      ml_backend__ml_type_gen__Name_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_41, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_31_31));
#line 1073 "ml_type_gen.m"
    }
#line 1076 "ml_type_gen.m"
    {
#line 1076 "ml_type_gen.m"
      ml_backend__ml_type_gen__EntityDefn_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_43, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_29));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_43, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "ml_type_gen.m"
    }
#line 1077 "ml_type_gen.m"
    {
#line 1077 "ml_type_gen.m"
      ml_backend__ml_type_gen__DeclFlags_44 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
#line 1078 "ml_type_gen.m"
    {
#line 1078 "ml_type_gen.m"
      MR_Word base;
#line 1078 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "ml_type_gen.m"
      *ml_backend__ml_type_gen__Defn_10 = base;
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_41));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_34_34));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_44));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_43));
#line 1078 "ml_type_gen.m"
    }
#line 1067 "ml_type_gen.m"
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_15 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_14 + (MR_Integer) 1);
#line 1036 "ml_type_gen.m"
  }
#line 1033 "ml_type_gen.m"
}

#line 1026 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_typeclass_info_member_6_p_0(
#line 1026 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_7,
#line 1026 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_8,
#line 1026 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Constraint_9,
#line 1026 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defn_10,
#line 1026 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_13,
#line 1026 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_14)
#line 1026 "ml_type_gen.m"
{
#line 1029 "ml_type_gen.m"
  {
#line 1029 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1029 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_12;
#line 1029 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Type_27;
#line 1029 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__FieldName_28;
#line 1029 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_29_29;
#line 1029 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_30_30;
#line 1029 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_32_32;
#line 1029 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_39;
#line 1029 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EntityDefn_41;
#line 1029 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__DeclFlags_42;

#line 1030 "ml_type_gen.m"
    {
#line 1030 "ml_type_gen.m"
      check_hlds__polymorphism__build_typeclass_info_type_2_p_0(ml_backend__ml_type_gen__Constraint_9, &ml_backend__ml_type_gen__Type_12);
    }
#line 1058 "ml_type_gen.m"
    {
#line 1058 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 1058 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1059 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Type_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 1058 "ml_type_gen.m"
    else
#line 1061 "ml_type_gen.m"
      {
#line 1061 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Type_27 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_7, ml_backend__ml_type_gen__Type_12);
      }
#line 1063 "ml_type_gen.m"
    {
#line 1063 "ml_type_gen.m"
      ml_backend__ml_type_gen__FieldName_28 = ml_backend__ml_code_util__ml_gen_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_13);
    }
#line 1065 "ml_type_gen.m"
    {
#line 1065 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1065 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_28));
#line 1065 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1065 "ml_type_gen.m"
    }
#line 1065 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__V_30_30);
#line 1066 "ml_type_gen.m"
    {
#line 1066 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_32_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_8);
    }
#line 1073 "ml_type_gen.m"
    {
#line 1073 "ml_type_gen.m"
      ml_backend__ml_type_gen__Name_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_39, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_29_29));
#line 1073 "ml_type_gen.m"
    }
#line 1076 "ml_type_gen.m"
    {
#line 1076 "ml_type_gen.m"
      ml_backend__ml_type_gen__EntityDefn_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_41, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_27));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_41, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1076 "ml_type_gen.m"
    }
#line 1077 "ml_type_gen.m"
    {
#line 1077 "ml_type_gen.m"
      ml_backend__ml_type_gen__DeclFlags_42 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
#line 1078 "ml_type_gen.m"
    {
#line 1078 "ml_type_gen.m"
      MR_Word base;
#line 1078 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1078 "ml_type_gen.m"
      *ml_backend__ml_type_gen__Defn_10 = base;
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_39));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_32_32));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_42));
#line 1078 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_41));
#line 1078 "ml_type_gen.m"
    }
#line 1067 "ml_type_gen.m"
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_14 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_13 + (MR_Integer) 1);
#line 1029 "ml_type_gen.m"
  }
#line 1026 "ml_type_gen.m"
}

#line 957 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_5_f_0(
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_7,
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_8,
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassType_9,
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassQualifier_10,
#line 957 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Member_11)
#line 957 "ml_type_gen.m"
{
#line 961 "ml_type_gen.m"
  {
#line 961 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Statement_12;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EntityName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Member_11, (MR_Integer) 0)));
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Context_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Member_11, (MR_Integer) 1)));
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Defn_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Member_11, (MR_Integer) 3)));
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_20;
#line 961 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__Name_29;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__VarName_30;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__QualVarName_37;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Param_38;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Field_39;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_54_54;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_57_57;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_58_58;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_59_59;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_61_61;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_62_62;
#line 961 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_63_63;
#line 962 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Flags_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Member_11, (MR_Integer) 2)));
#line 972 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__VarName0_27;
#line 972 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__Name0_28;
#line 973 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_43_43;
#line 973 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_44_44;

#line 966 "ml_type_gen.m"
#line 966 "ml_type_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_type_gen__Defn_16)) {
#line 966 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 966 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 969 "ml_type_gen.m"
        {
#line 970 "ml_type_gen.m"
          {
#line 970 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "non-data member");
          }
#line 969 "ml_type_gen.m"
        }
#line 966 "ml_type_gen.m"
        break;
#line 966 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 964 "ml_type_gen.m"
        {
#line 964 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___Init_18;
#line 964 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen___GCStatement_19;

#line 964 "ml_type_gen.m"
          ml_backend__ml_type_gen__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_16, (MR_Integer) 0)));
#line 964 "ml_type_gen.m"
          ml_backend__ml_type_gen___Init_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_16, (MR_Integer) 1)));
#line 964 "ml_type_gen.m"
          ml_backend__ml_type_gen___GCStatement_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_16, (MR_Integer) 2)));
#line 964 "ml_type_gen.m"
        }
#line 966 "ml_type_gen.m"
        break;
#line 966 "ml_type_gen.m"
      case (MR_Integer) 2:
#line 969 "ml_type_gen.m"
        {
#line 970 "ml_type_gen.m"
          {
#line 970 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "non-data member");
          }
#line 969 "ml_type_gen.m"
        }
#line 966 "ml_type_gen.m"
        break;
#line 966 "ml_type_gen.m"
    }
#line 973 "ml_type_gen.m"
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__EntityName_13)) == (MR_mktag((MR_Integer) 1)));
#line 973 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 973 "ml_type_gen.m"
      {
#line 973 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityName_13, (MR_Integer) 0)));
#line 973 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__V_43_43)) == (MR_mktag((MR_Integer) 1)));
#line 973 "ml_type_gen.m"
        if (ml_backend__ml_type_gen__succeeded)
#line 973 "ml_type_gen.m"
          {
#line 973 "ml_type_gen.m"
            ml_backend__ml_type_gen__VarName0_27 = (MR_Word) MR_body(((MR_Word) ml_backend__ml_type_gen__V_43_43), (MR_Integer) 1);
#line 974 "ml_type_gen.m"
            ml_backend__ml_type_gen__Name0_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__VarName0_27, (MR_Integer) 0)));
#line 974 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__VarName0_27, (MR_Integer) 1)));
#line 974 "ml_type_gen.m"
            ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__V_44_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 973 "ml_type_gen.m"
          }
#line 973 "ml_type_gen.m"
      }
#line 972 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 976 "ml_type_gen.m"
      {
#line 976 "ml_type_gen.m"
        ml_backend__ml_type_gen__Name_29 = ml_backend__ml_type_gen__Name0_28;
#line 977 "ml_type_gen.m"
        ml_backend__ml_type_gen__VarName_30 = ml_backend__ml_type_gen__VarName0_27;
#line 976 "ml_type_gen.m"
      }
#line 972 "ml_type_gen.m"
    else
#line 979 "ml_type_gen.m"
      {
#line 979 "ml_type_gen.m"
        {
#line 979 "ml_type_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "non-var member");
        }
#line 979 "ml_type_gen.m"
      }
#line 2412 "ml_backend.ml_type_gen.c"
#line 2413 "ml_backend.ml_type_gen.c"
    switch (ml_backend__ml_type_gen__Target_7) {
#line 2415 "ml_backend.ml_type_gen.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 2417 "ml_backend.ml_type_gen.c"
      case (MR_Integer) 0:
#line 2419 "ml_backend.ml_type_gen.c"
        {
#line 991 "ml_type_gen.m"
          {
#line 991 "ml_type_gen.m"
            ml_backend__ml_type_gen__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 991 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_10));
#line 991 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 1) = ((MR_Box) ((MR_Integer) 1));
#line 991 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_30));
#line 991 "ml_type_gen.m"
          }
#line 2433 "ml_backend.ml_type_gen.c"
        }
#line 2435 "ml_backend.ml_type_gen.c"
        break;
#line 2437 "ml_backend.ml_type_gen.c"
      case (MR_Integer) 1:
#line 984 "ml_type_gen.m"
        {
#line 984 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__ModuleName_32;
#line 984 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_49_49;
#line 984 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__V_35_35;
#line 984 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_36_36;
#line 984 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_33_33;
#line 984 "ml_type_gen.m"
          MR_String ml_backend__ml_type_gen__V_34_34;

#line 984 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 984 "ml_type_gen.m"
          if (ml_backend__ml_type_gen__succeeded)
#line 984 "ml_type_gen.m"
            {
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 1)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 2)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 3)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__ModuleName_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_49_49, (MR_Integer) 0)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_49_49, (MR_Integer) 1)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_49_49, (MR_Integer) 2)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 984 "ml_type_gen.m"
            }
#line 984 "ml_type_gen.m"
          if (ml_backend__ml_type_gen__succeeded)
#line 985 "ml_type_gen.m"
            {
#line 985 "ml_type_gen.m"
              {
#line 985 "ml_type_gen.m"
                ml_backend__ml_type_gen__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 985 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ModuleName_32));
#line 985 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 985 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_30));
#line 985 "ml_type_gen.m"
              }
#line 985 "ml_type_gen.m"
            }
#line 984 "ml_type_gen.m"
          else
#line 987 "ml_type_gen.m"
            {
#line 987 "ml_type_gen.m"
              {
#line 987 "ml_type_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
              }
#line 987 "ml_type_gen.m"
            }
#line 984 "ml_type_gen.m"
        }
#line 2507 "ml_backend.ml_type_gen.c"
        break;
#line 2509 "ml_backend.ml_type_gen.c"
      case (MR_Integer) 3:
#line 2511 "ml_backend.ml_type_gen.c"
        {
#line 911 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__RequiresQualifiedParams_70;
#line 911 "ml_type_gen.m"
          MR_Box ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_70;

#line 911 "ml_type_gen.m"
          {
#line 911 "ml_type_gen.m"
            ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_70 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_requires_module_qualified_params\'/1", (MR_String) "target erlang");
          }
#line 911 "ml_type_gen.m"
          ml_backend__ml_type_gen__RequiresQualifiedParams_70 = ((MR_Word) ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_70);
#line 2525 "ml_backend.ml_type_gen.c"
        }
#line 2527 "ml_backend.ml_type_gen.c"
        break;
#line 2529 "ml_backend.ml_type_gen.c"
      case (MR_Integer) 2:
#line 984 "ml_type_gen.m"
        {
#line 984 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__ModuleName_86;
#line 984 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_81_81;
#line 984 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__V_73_73;
#line 984 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_74_74;
#line 984 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_75_75;
#line 984 "ml_type_gen.m"
          MR_String ml_backend__ml_type_gen__V_76_76;

#line 984 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 984 "ml_type_gen.m"
          if (ml_backend__ml_type_gen__succeeded)
#line 984 "ml_type_gen.m"
            {
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 1)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 2)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 3)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__ModuleName_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_81_81, (MR_Integer) 0)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_81_81, (MR_Integer) 1)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_76_76 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_81_81, (MR_Integer) 2)));
#line 984 "ml_type_gen.m"
              ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 984 "ml_type_gen.m"
            }
#line 984 "ml_type_gen.m"
          if (ml_backend__ml_type_gen__succeeded)
#line 985 "ml_type_gen.m"
            {
#line 985 "ml_type_gen.m"
              {
#line 985 "ml_type_gen.m"
                ml_backend__ml_type_gen__QualVarName_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 985 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ModuleName_86));
#line 985 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 1) = ((MR_Box) ((MR_Integer) 0));
#line 985 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_30));
#line 985 "ml_type_gen.m"
              }
#line 985 "ml_type_gen.m"
            }
#line 984 "ml_type_gen.m"
          else
#line 987 "ml_type_gen.m"
            {
#line 987 "ml_type_gen.m"
              {
#line 987 "ml_type_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
              }
#line 987 "ml_type_gen.m"
            }
#line 984 "ml_type_gen.m"
        }
#line 2599 "ml_backend.ml_type_gen.c"
        break;
#line 2601 "ml_backend.ml_type_gen.c"
    }
#line 993 "ml_type_gen.m"
    {
#line 993 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_54_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 993 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_54_54, 0) = ((MR_Box) (ml_backend__ml_type_gen__QualVarName_37));
#line 993 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_54_54, 1) = ((MR_Box) (ml_backend__ml_type_gen__Type_20));
#line 993 "ml_type_gen.m"
    }
#line 993 "ml_type_gen.m"
    {
#line 993 "ml_type_gen.m"
      ml_backend__ml_type_gen__Param_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 993 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Param_38, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_54_54));
#line 993 "ml_type_gen.m"
    }
#line 994 "ml_type_gen.m"
    {
#line 994 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_57_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 994 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_57_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 994 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_57_57, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_9));
#line 994 "ml_type_gen.m"
    }
#line 995 "ml_type_gen.m"
    {
#line 995 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 995 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_59_59, 0) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_10));
#line 995 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_59_59, 1) = ((MR_Box) ((MR_Integer) 1));
#line 995 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_59_59, 2) = ((MR_Box) (ml_backend__ml_type_gen__Name_29));
#line 995 "ml_type_gen.m"
    }
#line 996 "ml_type_gen.m"
    {
#line 996 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 996 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 996 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_9));
#line 996 "ml_type_gen.m"
    }
#line 995 "ml_type_gen.m"
    {
#line 995 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 995 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_58_58, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_59_59));
#line 995 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_58_58, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_61_61));
#line 995 "ml_type_gen.m"
    }
#line 994 "ml_type_gen.m"
    {
#line 994 "ml_type_gen.m"
      ml_backend__ml_type_gen__Field_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 994 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_3[1])));
#line 994 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_57_57));
#line 994 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_58_58));
#line 994 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 3) = ((MR_Box) (ml_backend__ml_type_gen__Type_20));
#line 994 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_39, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_8));
#line 994 "ml_type_gen.m"
    }
#line 1001 "ml_type_gen.m"
    {
#line 1001 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_63_63 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_63_63, 0) = ((MR_Box) (ml_backend__ml_type_gen__Field_39));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_63_63, 1) = ((MR_Box) (ml_backend__ml_type_gen__Param_38));
#line 1001 "ml_type_gen.m"
    }
#line 1001 "ml_type_gen.m"
    {
#line 1001 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_62_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_62_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_62_62, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_63_63));
#line 1001 "ml_type_gen.m"
    }
#line 1001 "ml_type_gen.m"
    {
#line 1001 "ml_type_gen.m"
      ml_backend__ml_type_gen__Statement_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Statement_12, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_62_62));
#line 1001 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Statement_12, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_14));
#line 1001 "ml_type_gen.m"
    }
#line 961 "ml_type_gen.m"
    return ml_backend__ml_type_gen__Statement_12;
#line 961 "ml_type_gen.m"
  }
#line 957 "ml_type_gen.m"
}

#line 946 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
#line 946 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1)
#line 946 "ml_type_gen.m"
{
#line 948 "ml_type_gen.m"
  {
#line 948 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 948 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Arg_7;
#line 948 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 948 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Defn_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 3)));
#line 948 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Context_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 948 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Flags_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 949 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Type_8;
#line 949 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__GCStatement_10;
#line 949 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Init_9;

#line 949 "ml_type_gen.m"
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Defn_6)) == (MR_mktag((MR_Integer) 1)));
#line 949 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 949 "ml_type_gen.m"
      {
#line 949 "ml_type_gen.m"
        ml_backend__ml_type_gen__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_6, (MR_Integer) 0)));
#line 949 "ml_type_gen.m"
        ml_backend__ml_type_gen___Init_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_6, (MR_Integer) 1)));
#line 949 "ml_type_gen.m"
        ml_backend__ml_type_gen__GCStatement_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defn_6, (MR_Integer) 2)));
#line 950 "ml_type_gen.m"
        {
#line 950 "ml_type_gen.m"
          ml_backend__ml_type_gen__Arg_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 950 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_7, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_3));
#line 950 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_7, 1) = ((MR_Box) (ml_backend__ml_type_gen__Type_8));
#line 950 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_7, 2) = ((MR_Box) (ml_backend__ml_type_gen__GCStatement_10));
#line 950 "ml_type_gen.m"
        }
#line 949 "ml_type_gen.m"
      }
#line 949 "ml_type_gen.m"
    else
#line 952 "ml_type_gen.m"
      {
#line 952 "ml_type_gen.m"
        {
#line 952 "ml_type_gen.m"
          mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.make_arg\'/1", (MR_String) "non-data member");
        }
#line 952 "ml_type_gen.m"
      }
#line 948 "ml_type_gen.m"
    return ml_backend__ml_type_gen__Arg_7;
#line 948 "ml_type_gen.m"
  }
#line 946 "ml_type_gen.m"
}

#line 889 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
#line 889 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1)
#line 889 "ml_type_gen.m"
{
#line 891 "ml_type_gen.m"
  {
#line 891 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 891 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__HeadVar__2_2;

#line 891 "ml_type_gen.m"
#line 891 "ml_type_gen.m"
    switch (ml_backend__ml_type_gen__HeadVar__1_1) {
#line 891 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 891 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 891 "ml_type_gen.m"
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 891 "ml_type_gen.m"
        break;
#line 891 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 892 "ml_type_gen.m"
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 891 "ml_type_gen.m"
        break;
#line 891 "ml_type_gen.m"
      case (MR_Integer) 3:
#line 894 "ml_type_gen.m"
        {
#line 895 "ml_type_gen.m"
          MR_Box ml_backend__ml_type_gen__conv0_HeadVar__2_2;

#line 895 "ml_type_gen.m"
          {
#line 895 "ml_type_gen.m"
            ml_backend__ml_type_gen__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_uses_empty_base_classes\'/1", (MR_String) "target erlang");
          }
#line 895 "ml_type_gen.m"
          ml_backend__ml_type_gen__HeadVar__2_2 = ((MR_Word) ml_backend__ml_type_gen__conv0_HeadVar__2_2);
#line 894 "ml_type_gen.m"
        }
#line 891 "ml_type_gen.m"
        break;
#line 891 "ml_type_gen.m"
      case (MR_Integer) 2:
#line 893 "ml_type_gen.m"
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 891 "ml_type_gen.m"
        break;
#line 891 "ml_type_gen.m"
    }
#line 891 "ml_type_gen.m"
    return ml_backend__ml_type_gen__HeadVar__2_2;
#line 891 "ml_type_gen.m"
  }
#line 889 "ml_type_gen.m"
}

#line 743 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_3(
#line 743 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 743 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 743 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 743 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 743 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4)
#line 743 "ml_type_gen.m"
{
#line 743 "ml_type_gen.m"
  {
#line 743 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 743 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv7_Defn_10;
#line 743 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__conv6_STATE_VARIABLE_ArgNum_17;

#line 743 "ml_type_gen.m"
    {
#line 743 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_ctor_field_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv7_Defn_10, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_3), &ml_backend__ml_type_gen__conv6_STATE_VARIABLE_ArgNum_17);
    }
#line 743 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv7_Defn_10));
#line 743 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_type_gen__conv6_STATE_VARIABLE_ArgNum_17));
#line 743 "ml_type_gen.m"
  }
#line 743 "ml_type_gen.m"
}

#line 736 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_2(
#line 736 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 736 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 736 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 736 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 736 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4)
#line 736 "ml_type_gen.m"
{
#line 736 "ml_type_gen.m"
  {
#line 736 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 736 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv4_Defn_10;
#line 736 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__conv3_STATE_VARIABLE_ArgNum_14;

#line 736 "ml_type_gen.m"
    {
#line 736 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_typeclass_info_member_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv4_Defn_10, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_3), &ml_backend__ml_type_gen__conv3_STATE_VARIABLE_ArgNum_14);
    }
#line 736 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv4_Defn_10));
#line 736 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_type_gen__conv3_STATE_VARIABLE_ArgNum_14));
#line 736 "ml_type_gen.m"
  }
#line 736 "ml_type_gen.m"
}

#line 734 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_1(
#line 734 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 734 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 734 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
#line 734 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3,
#line 734 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_4)
#line 734 "ml_type_gen.m"
{
#line 734 "ml_type_gen.m"
  {
#line 734 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 734 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv1_Defn_10;
#line 734 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_15;

#line 734 "ml_type_gen.m"
    {
#line 734 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_type_info_member_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv1_Defn_10, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_3), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_15);
    }
#line 734 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv1_Defn_10));
#line 734 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_4 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_15));
#line 734 "ml_type_gen.m"
  }
#line 734 "ml_type_gen.m"
}

#line 784 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_4(
#line 784 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 784 "ml_type_gen.m"
{
#line 784 "ml_type_gen.m"
  {
#line 784 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 784 "ml_type_gen.m"
    MR_builtin_longjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__commit_0, 1);
#line 784 "ml_type_gen.m"
  }
#line 784 "ml_type_gen.m"
}

#line 784 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_6(
#line 784 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 784 "ml_type_gen.m"
{
#line 784 "ml_type_gen.m"
  {
#line 784 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 784 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106 = ((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__conv9_RA_106);
#line 784 "ml_type_gen.m"
    {
#line 784 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_5(ml_backend__ml_type_gen__env_ptr);
    }
#line 784 "ml_type_gen.m"
  }
#line 784 "ml_type_gen.m"
}

#line 784 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_5(
#line 784 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 784 "ml_type_gen.m"
{
#line 784 "ml_type_gen.m"
  {
#line 784 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 784 "ml_type_gen.m"
    {
#line 785 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_68_68;
#line 785 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_69_69;
#line 785 "ml_type_gen.m"
      MR_Integer ml_backend__ml_type_gen__V_70_70;

#line 785 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106)) == (MR_mktag((MR_Integer) 2)));
#line 785 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 785 "ml_type_gen.m"
        {
#line 785 "ml_type_gen.m"
          {
#line 785 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106, (MR_Integer) 0)));
#line 785 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106, (MR_Integer) 1)));
#line 785 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RA_106, (MR_Integer) 2)));
#line 785 "ml_type_gen.m"
          }
#line 785 "ml_type_gen.m"
          {
#line 785 "ml_type_gen.m"
            ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_4(ml_backend__ml_type_gen__env_ptr);
          }
#line 785 "ml_type_gen.m"
        }
#line 784 "ml_type_gen.m"
    }
#line 784 "ml_type_gen.m"
  }
#line 784 "ml_type_gen.m"
}

#line 784 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_7(
#line 784 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 784 "ml_type_gen.m"
{
#line 784 "ml_type_gen.m"
  {
#line 784 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 784 "ml_type_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__commit_0) == 0)
#line 784 "ml_type_gen.m"
      {
#line 784 "ml_type_gen.m"
        {
#line 784 "ml_type_gen.m"
          {
#line 784 "ml_type_gen.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, &(ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__conv9_RA_106, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RAs_66, ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_6, ml_backend__ml_type_gen__env_ptr);
          }
#line 784 "ml_type_gen.m"
        }
#line 784 "ml_type_gen.m"
        (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = MR_FALSE;
#line 784 "ml_type_gen.m"
      }
#line 784 "ml_type_gen.m"
    else
#line 784 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = MR_TRUE;
#line 784 "ml_type_gen.m"
  }
#line 784 "ml_type_gen.m"
}

#line 658 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0(
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_13,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_14,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_15,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_16,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_17,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_18,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_19,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_20,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Members0_21,
#line 658 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_Members_22,
#line 658 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_CtorMethods0_23,
#line 658 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_CtorMethods_24)
#line 658 "ml_type_gen.m"
{
#line 658 "ml_type_gen.m"
  {
#line 658 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0_s ml_backend__ml_type_gen__env;

#line 666 "ml_type_gen.m"
    {
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__ExistQTVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 0)));
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Constraints_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 1)));
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__CtorName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 2)));
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 3)));
#line 666 "ml_type_gen.m"
      MR_Integer ml_backend__ml_type_gen__CtorArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 4)));
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Context_31;
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_Context_32;
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Globals_33;
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Target_34;
#line 666 "ml_type_gen.m"
      MR_String ml_backend__ml_type_gen__UnqualCtorName_35;
#line 666 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TagVal_36;
#line 667 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen___Ctxt_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 5)));
#line 681 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__ReservedAddr_37;

#line 671 "ml_type_gen.m"
      {
#line 671 "ml_type_gen.m"
        hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_18, &ml_backend__ml_type_gen__Context_31);
      }
#line 672 "ml_type_gen.m"
      {
#line 672 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Context_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_31);
      }
#line 675 "ml_type_gen.m"
      {
#line 675 "ml_type_gen.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_13, &ml_backend__ml_type_gen__Globals_33);
      }
#line 676 "ml_type_gen.m"
      {
#line 676 "ml_type_gen.m"
        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_33, &ml_backend__ml_type_gen__Target_34);
      }
#line 677 "ml_type_gen.m"
      {
#line 677 "ml_type_gen.m"
        ml_backend__ml_type_gen__UnqualCtorName_35 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__TypeCtor_17, ml_backend__ml_type_gen__CtorName_27, ml_backend__ml_type_gen__CtorArity_29);
      }
#line 680 "ml_type_gen.m"
      {
#line 680 "ml_type_gen.m"
        ml_backend__ml_type_gen__TagVal_36 = ml_backend__ml_type_gen__get_tagval_3_f_0(ml_backend__ml_type_gen__TypeCtor_17, ml_backend__ml_type_gen__ConsTagValues_19, ml_backend__ml_type_gen__Ctor_20);
      }
#line 681 "ml_type_gen.m"
      {
#line 681 "ml_type_gen.m"
        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(ml_backend__ml_type_gen__TagVal_36, &ml_backend__ml_type_gen__ReservedAddr_37);
      }
#line 681 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 709 "ml_type_gen.m"
        {
#line 682 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_38_38;
#line 682 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_39_39;
#line 682 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__V_40_40;

#line 682 "ml_type_gen.m"
          (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__ReservedAddr_37)) == (MR_mktag((MR_Integer) 2)));
#line 682 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 682 "ml_type_gen.m"
            {
#line 682 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 0)));
#line 682 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 1)));
#line 682 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 2)));
#line 691 "ml_type_gen.m"
              {
#line 691 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjName_41;
#line 691 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42;
#line 691 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__EntityDefn_44;
#line 691 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__DeclFlags_45;
#line 691 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46;
#line 691 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_85_85;
#line 691 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_87_87;

#line 690 "ml_type_gen.m"
                {
#line 690 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_ReservedObjName_41 = ml_backend__ml_code_util__ml_format_reserved_object_name_2_f_0(ml_backend__ml_type_gen__UnqualCtorName_35, ml_backend__ml_type_gen__CtorArity_29);
                }
#line 693 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_85_85 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__MLDS_ReservedObjName_41);
#line 693 "ml_type_gen.m"
                {
#line 693 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 693 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_85_85));
#line 693 "ml_type_gen.m"
                }
#line 698 "ml_type_gen.m"
                {
#line 698 "ml_type_gen.m"
                  ml_backend__ml_type_gen__EntityDefn_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 698 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 0) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_16));
#line 698 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "ml_type_gen.m"
                }
#line 700 "ml_type_gen.m"
                {
#line 700 "ml_type_gen.m"
                  ml_backend__ml_type_gen__V_87_87 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
                }
#line 700 "ml_type_gen.m"
                {
#line 700 "ml_type_gen.m"
                  ml_backend__ml_type_gen__DeclFlags_45 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_type_gen__V_87_87, (MR_Integer) 0);
                }
#line 702 "ml_type_gen.m"
                {
#line 702 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 702 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42));
#line 702 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_32));
#line 702 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_45));
#line 702 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_44));
#line 702 "ml_type_gen.m"
                }
#line 704 "ml_type_gen.m"
                {
#line 704 "ml_type_gen.m"
                  MR_Word base;
#line 704 "ml_type_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 704 "ml_type_gen.m"
                  *ml_backend__ml_type_gen__MLDS_Members_22 = base;
#line 704 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46));
#line 704 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Members0_21));
#line 704 "ml_type_gen.m"
                }
#line 691 "ml_type_gen.m"
              }
#line 682 "ml_type_gen.m"
            }
#line 682 "ml_type_gen.m"
          else
#line 708 "ml_type_gen.m"
            *ml_backend__ml_type_gen__MLDS_Members_22 = ml_backend__ml_type_gen__MLDS_Members0_21;
#line 710 "ml_type_gen.m"
          *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = ml_backend__ml_type_gen__MLDS_CtorMethods0_23;
#line 709 "ml_type_gen.m"
        }
#line 681 "ml_type_gen.m"
      else
#line 715 "ml_type_gen.m"
        {
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TypeCtorInfo_124_124;
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__ExtraMembers_48;
#line 715 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen__ArgNum2_49;
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__OrdinaryMembers_57;
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__Members_59;
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__MaybeSecTagVal_60;
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__UsesConstructors_61;
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__UsesBaseClass_62;
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__Ctors_74;
#line 715 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_91_91;
#line 743 "ml_type_gen.m"
          MR_Integer ml_backend__ml_type_gen___ArgNum3_58;
#line 743 "ml_type_gen.m"
          MR_Box ml_backend__ml_type_gen__conv8__ArgNum3_58;

#line 729 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__ExistQTVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "ml_type_gen.m"
            {
#line 727 "ml_type_gen.m"
              ml_backend__ml_type_gen__ExtraMembers_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 728 "ml_type_gen.m"
              ml_backend__ml_type_gen__ArgNum2_49 = (MR_Integer) 1;
#line 725 "ml_type_gen.m"
            }
#line 729 "ml_type_gen.m"
          else
#line 730 "ml_type_gen.m"
            {
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeInfo_107_107;
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_112_112;
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_113_113;
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__ConstrainedTVars_52;
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__UnconstrainedTVars_53;
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeInfoMembers_54;
#line 730 "ml_type_gen.m"
              MR_Integer ml_backend__ml_type_gen__ArgNum1_55;
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TypeClassInfoMembers_56;
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_89_89;
#line 730 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_90_90;
#line 734 "ml_type_gen.m"
              MR_Box ml_backend__ml_type_gen__conv2_ArgNum1_55;
#line 736 "ml_type_gen.m"
              MR_Box ml_backend__ml_type_gen__conv5_ArgNum2_49;

#line 731 "ml_type_gen.m"
              {
#line 731 "ml_type_gen.m"
                parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ml_backend__ml_type_gen__Constraints_26, &ml_backend__ml_type_gen__ConstrainedTVars_52);
              }
#line 3386 "ml_backend.ml_type_gen.c"
              ml_backend__ml_type_gen__TypeInfo_107_107 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[1];
#line 732 "ml_type_gen.m"
              {
#line 732 "ml_type_gen.m"
                mercury__list__delete_elems_3_p_0(ml_backend__ml_type_gen__TypeInfo_107_107, ml_backend__ml_type_gen__ExistQTVars_25, ml_backend__ml_type_gen__ConstrainedTVars_52, &ml_backend__ml_type_gen__UnconstrainedTVars_53);
              }
#line 734 "ml_type_gen.m"
              {
#line 734 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_89_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 734 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[2]));
#line 734 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_1));
#line 734 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 734 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
#line 734 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_89_89, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
#line 734 "ml_type_gen.m"
              }
#line 3409 "ml_backend.ml_type_gen.c"
              ml_backend__ml_type_gen__TypeCtorInfo_112_112 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 3411 "ml_backend.ml_type_gen.c"
              ml_backend__ml_type_gen__TypeCtorInfo_113_113 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 734 "ml_type_gen.m"
              {
#line 734 "ml_type_gen.m"
                mercury__list__map_foldl_5_p_0(ml_backend__ml_type_gen__TypeInfo_107_107, ml_backend__ml_type_gen__TypeCtorInfo_112_112, ml_backend__ml_type_gen__TypeCtorInfo_113_113, ml_backend__ml_type_gen__V_89_89, ml_backend__ml_type_gen__UnconstrainedTVars_53, &ml_backend__ml_type_gen__TypeInfoMembers_54, ((MR_Box) ((MR_Integer) 1)), &ml_backend__ml_type_gen__conv2_ArgNum1_55);
              }
#line 734 "ml_type_gen.m"
              ml_backend__ml_type_gen__ArgNum1_55 = ((MR_Integer) ml_backend__ml_type_gen__conv2_ArgNum1_55);
#line 736 "ml_type_gen.m"
              {
#line 736 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[3]));
#line 736 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_2));
#line 736 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 736 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
#line 736 "ml_type_gen.m"
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_90_90, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
#line 736 "ml_type_gen.m"
              }
#line 736 "ml_type_gen.m"
              {
#line 736 "ml_type_gen.m"
                mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ml_backend__ml_type_gen__TypeCtorInfo_112_112, ml_backend__ml_type_gen__TypeCtorInfo_113_113, ml_backend__ml_type_gen__V_90_90, ml_backend__ml_type_gen__Constraints_26, &ml_backend__ml_type_gen__TypeClassInfoMembers_56, ((MR_Box) (ml_backend__ml_type_gen__ArgNum1_55)), &ml_backend__ml_type_gen__conv5_ArgNum2_49);
              }
#line 736 "ml_type_gen.m"
              ml_backend__ml_type_gen__ArgNum2_49 = ((MR_Integer) ml_backend__ml_type_gen__conv5_ArgNum2_49);
#line 738 "ml_type_gen.m"
              {
#line 738 "ml_type_gen.m"
                ml_backend__ml_type_gen__ExtraMembers_48 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_112_112, ml_backend__ml_type_gen__TypeInfoMembers_54, ml_backend__ml_type_gen__TypeClassInfoMembers_56);
              }
#line 730 "ml_type_gen.m"
            }
#line 743 "ml_type_gen.m"
          {
#line 743 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_91_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 743 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[4]));
#line 743 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_3));
#line 743 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 743 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
#line 743 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_91_91, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
#line 743 "ml_type_gen.m"
          }
#line 3466 "ml_backend.ml_type_gen.c"
          ml_backend__ml_type_gen__TypeCtorInfo_124_124 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 743 "ml_type_gen.m"
          {
#line 743 "ml_type_gen.m"
            mercury__list__map_foldl_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_type_gen__TypeCtorInfo_124_124, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_type_gen__V_91_91, ml_backend__ml_type_gen__Args_28, &ml_backend__ml_type_gen__OrdinaryMembers_57, ((MR_Box) (ml_backend__ml_type_gen__ArgNum2_49)), &ml_backend__ml_type_gen__conv8__ArgNum3_58);
          }
#line 743 "ml_type_gen.m"
          ml_backend__ml_type_gen___ArgNum3_58 = ((MR_Integer) ml_backend__ml_type_gen__conv8__ArgNum3_58);
#line 746 "ml_type_gen.m"
          {
#line 746 "ml_type_gen.m"
            ml_backend__ml_type_gen__Members_59 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_124_124, ml_backend__ml_type_gen__ExtraMembers_48, ml_backend__ml_type_gen__OrdinaryMembers_57);
          }
#line 750 "ml_type_gen.m"
          {
#line 750 "ml_type_gen.m"
            ml_backend__ml_type_gen__MaybeSecTagVal_60 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_36);
          }
#line 751 "ml_type_gen.m"
          {
#line 751 "ml_type_gen.m"
            ml_backend__ml_type_gen__UsesConstructors_61 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(ml_backend__ml_type_gen__Target_34);
          }
#line 752 "ml_type_gen.m"
          {
#line 752 "ml_type_gen.m"
            ml_backend__ml_type_gen__UsesBaseClass_62 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_type_gen__TagVal_36);
          }
#line 797 "ml_type_gen.m"
#line 797 "ml_type_gen.m"
          switch (ml_backend__ml_type_gen__UsesConstructors_61) {
#line 797 "ml_type_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 797 "ml_type_gen.m"
            case (MR_Integer) 0:
#line 799 "ml_type_gen.m"
              ml_backend__ml_type_gen__Ctors_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 797 "ml_type_gen.m"
              break;
#line 797 "ml_type_gen.m"
            case (MR_Integer) 1:
#line 754 "ml_type_gen.m"
              {
#line 754 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__CtorClassType_63;
#line 754 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__CtorClassQualifier_64;
#line 754 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__CtorFunction_65;
#line 788 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_71_71;
#line 788 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_72_72;

#line 759 "ml_type_gen.m"
#line 759 "ml_type_gen.m"
                switch (ml_backend__ml_type_gen__UsesBaseClass_62) {
#line 759 "ml_type_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 759 "ml_type_gen.m"
                  case (MR_Integer) 0:
#line 760 "ml_type_gen.m"
                    {
#line 760 "ml_type_gen.m"
                      MR_Word ml_backend__ml_type_gen__V_92_92;

#line 762 "ml_type_gen.m"
                      {
#line 762 "ml_type_gen.m"
                        ml_backend__ml_type_gen__V_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 762 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_92_92, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_15));
#line 762 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_92_92, 1) = ((MR_Box) ((MR_Integer) 1));
#line 762 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_92_92, 2) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_35));
#line 762 "ml_type_gen.m"
                      }
#line 761 "ml_type_gen.m"
                      {
#line 761 "ml_type_gen.m"
                        ml_backend__ml_type_gen__CtorClassType_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 761 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 761 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_63, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_92_92));
#line 761 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_63, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_29));
#line 761 "ml_type_gen.m"
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_63, 3) = ((MR_Box) ((MR_Integer) 0));
#line 761 "ml_type_gen.m"
                      }
#line 764 "ml_type_gen.m"
                      {
#line 764 "ml_type_gen.m"
                        ml_backend__ml_type_gen__CtorClassQualifier_64 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassQualifier_15, (MR_Integer) 1, ml_backend__ml_type_gen__UnqualCtorName_35, ml_backend__ml_type_gen__CtorArity_29);
                      }
#line 760 "ml_type_gen.m"
                    }
#line 759 "ml_type_gen.m"
                    break;
#line 759 "ml_type_gen.m"
                  case (MR_Integer) 1:
#line 756 "ml_type_gen.m"
                    {
#line 757 "ml_type_gen.m"
                      ml_backend__ml_type_gen__CtorClassType_63 = ml_backend__ml_type_gen__BaseClassId_14;
#line 758 "ml_type_gen.m"
                      ml_backend__ml_type_gen__CtorClassQualifier_64 = ml_backend__ml_type_gen__BaseClassQualifier_15;
#line 756 "ml_type_gen.m"
                    }
#line 759 "ml_type_gen.m"
                    break;
#line 759 "ml_type_gen.m"
                }
#line 767 "ml_type_gen.m"
                {
#line 767 "ml_type_gen.m"
                  ml_backend__ml_type_gen__CtorFunction_65 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassId_14, ml_backend__ml_type_gen__CtorClassType_63, ml_backend__ml_type_gen__CtorClassQualifier_64, ml_backend__ml_type_gen__SecondaryTagClassId_16, ml_backend__ml_type_gen__MaybeSecTagVal_60, ml_backend__ml_type_gen__Members_59, ml_backend__ml_type_gen__MLDS_Context_32);
                }
#line 779 "ml_type_gen.m"
                (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = (ml_backend__ml_type_gen__Target_34 == (MR_Integer) 2);
#line 780 "ml_type_gen.m"
                if (!((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded))
#line 782 "ml_type_gen.m"
                  {
#line 782 "ml_type_gen.m"
                    MR_Word ml_backend__ml_type_gen__V_96_96;

#line 781 "ml_type_gen.m"
                    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 0)))) == (MR_Integer) 16)));
#line 781 "ml_type_gen.m"
                    if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 781 "ml_type_gen.m"
                      {
#line 781 "ml_type_gen.m"
                        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__RAs_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 1)));
#line 781 "ml_type_gen.m"
                        ml_backend__ml_type_gen__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 2)));
#line 782 "ml_type_gen.m"
                        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = (ml_backend__ml_type_gen__V_96_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 782 "ml_type_gen.m"
                        if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 784 "ml_type_gen.m"
                          {
#line 784 "ml_type_gen.m"
                            ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_7(&ml_backend__ml_type_gen__env);
                          }
#line 781 "ml_type_gen.m"
                      }
#line 782 "ml_type_gen.m"
                  }
#line 787 "ml_type_gen.m"
                if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 787 "ml_type_gen.m"
                  {
#line 788 "ml_type_gen.m"
                    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Members_59)) == (MR_mktag((MR_Integer) 1)));
#line 788 "ml_type_gen.m"
                    if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 788 "ml_type_gen.m"
                      {
#line 788 "ml_type_gen.m"
                        ml_backend__ml_type_gen__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Members_59, (MR_Integer) 0)));
#line 788 "ml_type_gen.m"
                        ml_backend__ml_type_gen__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Members_59, (MR_Integer) 1)));
#line 788 "ml_type_gen.m"
                      }
#line 787 "ml_type_gen.m"
                  }
#line 777 "ml_type_gen.m"
                if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0_env_0__succeeded)
#line 792 "ml_type_gen.m"
                  {
#line 792 "ml_type_gen.m"
                    MR_Word ml_backend__ml_type_gen__ZeroArgCtor_73;
#line 792 "ml_type_gen.m"
                    MR_Word ml_backend__ml_type_gen__V_99_99;

#line 790 "ml_type_gen.m"
                    {
#line 790 "ml_type_gen.m"
                      ml_backend__ml_type_gen__ZeroArgCtor_73 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassId_14, ml_backend__ml_type_gen__CtorClassType_63, ml_backend__ml_type_gen__CtorClassQualifier_64, ml_backend__ml_type_gen__SecondaryTagClassId_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__MLDS_Context_32);
                    }
#line 793 "ml_type_gen.m"
                    {
#line 793 "ml_type_gen.m"
                      ml_backend__ml_type_gen__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "ml_type_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_99_99, 0) = ((MR_Box) (ml_backend__ml_type_gen__CtorFunction_65));
#line 793 "ml_type_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_99_99, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 793 "ml_type_gen.m"
                    }
#line 793 "ml_type_gen.m"
                    {
#line 793 "ml_type_gen.m"
                      ml_backend__ml_type_gen__Ctors_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 793 "ml_type_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_74, 0) = ((MR_Box) (ml_backend__ml_type_gen__ZeroArgCtor_73));
#line 793 "ml_type_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_74, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_99_99));
#line 793 "ml_type_gen.m"
                    }
#line 792 "ml_type_gen.m"
                  }
#line 777 "ml_type_gen.m"
                else
#line 795 "ml_type_gen.m"
                  {
#line 795 "ml_type_gen.m"
                    {
#line 795 "ml_type_gen.m"
                      ml_backend__ml_type_gen__Ctors_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "ml_type_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_74, 0) = ((MR_Box) (ml_backend__ml_type_gen__CtorFunction_65));
#line 795 "ml_type_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 795 "ml_type_gen.m"
                    }
#line 795 "ml_type_gen.m"
                  }
#line 754 "ml_type_gen.m"
              }
#line 797 "ml_type_gen.m"
              break;
#line 797 "ml_type_gen.m"
          }
#line 807 "ml_type_gen.m"
#line 807 "ml_type_gen.m"
          switch (ml_backend__ml_type_gen__UsesBaseClass_62) {
#line 807 "ml_type_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 807 "ml_type_gen.m"
            case (MR_Integer) 0:
#line 808 "ml_type_gen.m"
              {
#line 808 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__Inherits_76;
#line 808 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__TypeParams_80;
#line 808 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_TypeName_81;
#line 808 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_82;
#line 808 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_83;
#line 808 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MLDS_TypeDefn_84;
#line 808 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_104_104;

#line 820 "ml_type_gen.m"
                if ((ml_backend__ml_type_gen__MaybeSecTagVal_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "ml_type_gen.m"
                  {
#line 821 "ml_type_gen.m"
                    MR_Word ml_backend__ml_type_gen__UsesEmptyBaseClasses_77;

#line 822 "ml_type_gen.m"
                    {
#line 822 "ml_type_gen.m"
                      ml_backend__ml_type_gen__UsesEmptyBaseClasses_77 = ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(ml_backend__ml_type_gen__Target_34);
                    }
#line 826 "ml_type_gen.m"
#line 826 "ml_type_gen.m"
                    switch (ml_backend__ml_type_gen__UsesEmptyBaseClasses_77) {
#line 826 "ml_type_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 826 "ml_type_gen.m"
                      case (MR_Integer) 0:
#line 828 "ml_type_gen.m"
                        ml_backend__ml_type_gen__Inherits_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 826 "ml_type_gen.m"
                        break;
#line 826 "ml_type_gen.m"
                      case (MR_Integer) 1:
#line 824 "ml_type_gen.m"
                        {
#line 825 "ml_type_gen.m"
                          {
#line 825 "ml_type_gen.m"
                            ml_backend__ml_type_gen__Inherits_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 825 "ml_type_gen.m"
                            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_76, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_14));
#line 825 "ml_type_gen.m"
                            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "ml_type_gen.m"
                          }
#line 824 "ml_type_gen.m"
                        }
#line 826 "ml_type_gen.m"
                        break;
#line 826 "ml_type_gen.m"
                    }
#line 821 "ml_type_gen.m"
                  }
#line 820 "ml_type_gen.m"
                else
#line 818 "ml_type_gen.m"
                  {
#line 819 "ml_type_gen.m"
                    {
#line 819 "ml_type_gen.m"
                      ml_backend__ml_type_gen__Inherits_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 819 "ml_type_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_76, 0) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_16));
#line 819 "ml_type_gen.m"
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 819 "ml_type_gen.m"
                    }
#line 818 "ml_type_gen.m"
                  }
#line 833 "ml_type_gen.m"
                {
#line 833 "ml_type_gen.m"
                  hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_18, &ml_backend__ml_type_gen__TypeParams_80);
                }
#line 836 "ml_type_gen.m"
                {
#line 836 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_TypeName_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 836 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_81, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_35));
#line 836 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_81, 1) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_29));
#line 836 "ml_type_gen.m"
                }
#line 837 "ml_type_gen.m"
                {
#line 837 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_TypeFlags_82 = ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0();
                }
#line 838 "ml_type_gen.m"
                {
#line 838 "ml_type_gen.m"
                  ml_backend__ml_type_gen__V_104_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 838 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 0) = ((MR_Box) ((MR_Integer) 0));
#line 838 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 838 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_76));
#line 838 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 838 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeParams_80));
#line 838 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 5) = ((MR_Box) (ml_backend__ml_type_gen__Ctors_74));
#line 838 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_104_104, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_59));
#line 838 "ml_type_gen.m"
                }
#line 838 "ml_type_gen.m"
                ml_backend__ml_type_gen__MLDS_TypeDefnBody_83 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__V_104_104);
#line 840 "ml_type_gen.m"
                {
#line 840 "ml_type_gen.m"
                  ml_backend__ml_type_gen__MLDS_TypeDefn_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 840 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_84, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_81));
#line 840 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_84, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_32));
#line 840 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_84, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_82));
#line 840 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_84, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_83));
#line 840 "ml_type_gen.m"
                }
#line 842 "ml_type_gen.m"
                {
#line 842 "ml_type_gen.m"
                  MR_Word base;
#line 842 "ml_type_gen.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 842 "ml_type_gen.m"
                  *ml_backend__ml_type_gen__MLDS_Members_22 = base;
#line 842 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefn_84));
#line 842 "ml_type_gen.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Members0_21));
#line 842 "ml_type_gen.m"
                }
#line 843 "ml_type_gen.m"
                *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = ml_backend__ml_type_gen__MLDS_CtorMethods0_23;
#line 808 "ml_type_gen.m"
              }
#line 807 "ml_type_gen.m"
              break;
#line 807 "ml_type_gen.m"
            case (MR_Integer) 1:
#line 803 "ml_type_gen.m"
              {
#line 805 "ml_type_gen.m"
                {
#line 805 "ml_type_gen.m"
                  *ml_backend__ml_type_gen__MLDS_Members_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_124_124, ml_backend__ml_type_gen__Members_59, ml_backend__ml_type_gen__MLDS_Members0_21);
                }
#line 806 "ml_type_gen.m"
                {
#line 806 "ml_type_gen.m"
                  *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_124_124, ml_backend__ml_type_gen__Ctors_74, ml_backend__ml_type_gen__MLDS_CtorMethods0_23);
                }
#line 803 "ml_type_gen.m"
              }
#line 807 "ml_type_gen.m"
              break;
#line 807 "ml_type_gen.m"
          }
#line 715 "ml_type_gen.m"
        }
#line 666 "ml_type_gen.m"
    }
#line 658 "ml_type_gen.m"
  }
#line 658 "ml_type_gen.m"
}

#line 608 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_secondary_tag_class_7_p_0(
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Context_8,
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_9,
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_10,
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Members_11,
#line 608 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_12,
#line 608 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_TypeDefn_13,
#line 608 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__SecondaryTagClassId_14)
#line 608 "ml_type_gen.m"
{
#line 613 "ml_type_gen.m"
  {
#line 613 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 613 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ClassName_16;
#line 613 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Inherits_20;
#line 613 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_25;
#line 613 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_26;
#line 613 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_30_30;

#line 618 "ml_type_gen.m"
    {
#line 618 "ml_type_gen.m"
      ml_backend__ml_type_gen__ClassName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 618 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_9));
#line 618 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 1) = ((MR_Box) ((MR_Integer) 1));
#line 618 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 2) = ((MR_Box) ((MR_String) "tag_type"));
#line 618 "ml_type_gen.m"
    }
#line 620 "ml_type_gen.m"
    {
#line 620 "ml_type_gen.m"
      MR_Word base;
#line 620 "ml_type_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 620 "ml_type_gen.m"
      *ml_backend__ml_type_gen__SecondaryTagClassId_14 = base;
#line 620 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 620 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassName_16));
#line 620 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 620 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 620 "ml_type_gen.m"
    }
#line 3949 "ml_backend.ml_type_gen.c"
#line 3950 "ml_backend.ml_type_gen.c"
    switch (ml_backend__ml_type_gen__Target_12) {
#line 3952 "ml_backend.ml_type_gen.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 3954 "ml_backend.ml_type_gen.c"
      case (MR_Integer) 0:
#line 633 "ml_type_gen.m"
        ml_backend__ml_type_gen__Inherits_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3958 "ml_backend.ml_type_gen.c"
        break;
#line 3960 "ml_backend.ml_type_gen.c"
      case (MR_Integer) 1:
#line 633 "ml_type_gen.m"
        ml_backend__ml_type_gen__Inherits_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 3964 "ml_backend.ml_type_gen.c"
        break;
#line 3966 "ml_backend.ml_type_gen.c"
      case (MR_Integer) 3:
#line 3968 "ml_backend.ml_type_gen.c"
        {
#line 895 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__EmptyBaseClasses_45;
#line 895 "ml_type_gen.m"
          MR_Box ml_backend__ml_type_gen__conv0_EmptyBaseClasses_45;

#line 895 "ml_type_gen.m"
          {
#line 895 "ml_type_gen.m"
            ml_backend__ml_type_gen__conv0_EmptyBaseClasses_45 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_uses_empty_base_classes\'/1", (MR_String) "target erlang");
#line 895 "ml_type_gen.m"
            return;
          }
#line 895 "ml_type_gen.m"
          ml_backend__ml_type_gen__EmptyBaseClasses_45 = ((MR_Word) ml_backend__ml_type_gen__conv0_EmptyBaseClasses_45);
#line 3984 "ml_backend.ml_type_gen.c"
        }
#line 3986 "ml_backend.ml_type_gen.c"
        break;
#line 3988 "ml_backend.ml_type_gen.c"
      case (MR_Integer) 2:
#line 3990 "ml_backend.ml_type_gen.c"
        {
#line 630 "ml_type_gen.m"
          {
#line 630 "ml_type_gen.m"
            ml_backend__ml_type_gen__Inherits_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 630 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_20, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_10));
#line 630 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 630 "ml_type_gen.m"
          }
#line 4002 "ml_backend.ml_type_gen.c"
        }
#line 4004 "ml_backend.ml_type_gen.c"
        break;
#line 4006 "ml_backend.ml_type_gen.c"
    }
#line 1144 "ml_type_gen.m"
    {
#line 1144 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_TypeFlags_25 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 645 "ml_type_gen.m"
    {
#line 645 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 645 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 0) = ((MR_Box) ((MR_Integer) 0));
#line 645 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_20));
#line 645 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 645 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_30_30, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_11));
#line 645 "ml_type_gen.m"
    }
#line 645 "ml_type_gen.m"
    ml_backend__ml_type_gen__MLDS_TypeDefnBody_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__V_30_30);
#line 647 "ml_type_gen.m"
    {
#line 647 "ml_type_gen.m"
      MR_Word base;
#line 647 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 647 "ml_type_gen.m"
      *ml_backend__ml_type_gen__MLDS_TypeDefn_13 = base;
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[5]));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_8));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_25));
#line 647 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_26));
#line 647 "ml_type_gen.m"
    }
#line 613 "ml_type_gen.m"
  }
#line 608 "ml_type_gen.m"
}

#line 598 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
#line 598 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
#line 598 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
#line 598 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_7)
#line 598 "ml_type_gen.m"
{
#line 600 "ml_type_gen.m"
  {
#line 600 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 600 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_8;
#line 600 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 2)));
#line 600 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 4)));
#line 600 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_15_15;
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 0)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 1)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 3)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 5)));
#line 602 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_8;

#line 602 "ml_type_gen.m"
    {
#line 602 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_15_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_15_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_15_15, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_11));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_15_15, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_13));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_15_15, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_5));
#line 602 "ml_type_gen.m"
    }
#line 602 "ml_type_gen.m"
    {
#line 602 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_6, ((MR_Box) (ml_backend__ml_type_gen__V_15_15)), &ml_backend__ml_type_gen__conv0_TagVal_8);
    }
#line 602 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_8 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_8);
#line 600 "ml_type_gen.m"
    return ml_backend__ml_type_gen__TagVal_8;
#line 600 "ml_type_gen.m"
  }
#line 598 "ml_type_gen.m"
}

#line 591 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
#line 591 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
#line 591 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__RA_2)
#line 591 "ml_type_gen.m"
{
#line 594 "ml_type_gen.m"
  while (MR_TRUE)
#line 594 "ml_type_gen.m"
    {
#line 594 "ml_type_gen.m"
      /* tailcall optimized into a loop */
#line 594 "ml_type_gen.m"
      {
#line 594 "ml_type_gen.m"
        MR_bool ml_backend__ml_type_gen__succeeded;

#line 594 "ml_type_gen.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 594 "ml_type_gen.m"
          {
#line 594 "ml_type_gen.m"
            *ml_backend__ml_type_gen__RA_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 594 "ml_type_gen.m"
            ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 594 "ml_type_gen.m"
          }
#line 594 "ml_type_gen.m"
        else
#line 594 "ml_type_gen.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 595 "ml_type_gen.m"
          {
#line 595 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__TagVal_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 2)));
#line 595 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));

#line 596 "ml_type_gen.m"
            /* direct tailcall eliminated */
#line 596 "ml_type_gen.m"
            {
#line 596 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__HeadVar__1__tmp_copy_1 = ml_backend__ml_type_gen__TagVal_5;

#line 596 "ml_type_gen.m"
              ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__HeadVar__1__tmp_copy_1;
#line 596 "ml_type_gen.m"
            }
#line 596 "ml_type_gen.m"
            continue;
#line 595 "ml_type_gen.m"
          }
#line 594 "ml_type_gen.m"
        else
#line 594 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = MR_FALSE;
#line 594 "ml_type_gen.m"
        return ml_backend__ml_type_gen__succeeded;
#line 594 "ml_type_gen.m"
      }
#line 594 "ml_type_gen.m"
      break;
#line 594 "ml_type_gen.m"
    }
#line 591 "ml_type_gen.m"
}

#line 582 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_needs_secondary_tag_3_p_0(
#line 582 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_4,
#line 582 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_5,
#line 582 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_6)
#line 582 "ml_type_gen.m"
{
#line 585 "ml_type_gen.m"
  {
#line 585 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 585 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_7;
#line 585 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 2)));
#line 585 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 4)));
#line 585 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_25_25;
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___ExistQTVars_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 0)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Constraints_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 1)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Args_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 3)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Ctxt_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_6, (MR_Integer) 5)));
#line 602 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_7;

#line 602 "ml_type_gen.m"
    {
#line 602 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_25_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_25_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_25_25, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_21));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_25_25, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_23));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_25_25, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_4));
#line 602 "ml_type_gen.m"
    }
#line 602 "ml_type_gen.m"
    {
#line 602 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__TagValues_5, ((MR_Box) (ml_backend__ml_type_gen__V_25_25)), &ml_backend__ml_type_gen__conv0_TagVal_7);
    }
#line 602 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_7 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_7);
#line 587 "ml_type_gen.m"
    {
#line 587 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_13_13;
#line 587 "ml_type_gen.m"
      MR_Integer ml_backend__ml_type_gen__V_8_8;

#line 587 "ml_type_gen.m"
      {
#line 587 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_13_13 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_7);
      }
#line 587 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 587 "ml_type_gen.m"
      if (ml_backend__ml_type_gen__succeeded)
#line 587 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_13_13, (MR_Integer) 0)));
#line 587 "ml_type_gen.m"
    }
#line 588 "ml_type_gen.m"
    if (!(ml_backend__ml_type_gen__succeeded))
#line 588 "ml_type_gen.m"
      {
#line 588 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_14_14;
#line 588 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_35_35;
#line 588 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_36_36;
#line 588 "ml_type_gen.m"
        MR_Integer ml_backend__ml_type_gen__V_37_37;

#line 588 "ml_type_gen.m"
        {
#line 588 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(ml_backend__ml_type_gen__TagVal_7, &ml_backend__ml_type_gen__V_14_14);
        }
#line 588 "ml_type_gen.m"
        if (ml_backend__ml_type_gen__succeeded)
#line 588 "ml_type_gen.m"
          {
#line 588 "ml_type_gen.m"
            ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__V_14_14)) == (MR_mktag((MR_Integer) 2)));
#line 588 "ml_type_gen.m"
            if (ml_backend__ml_type_gen__succeeded)
#line 588 "ml_type_gen.m"
              {
#line 588 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_14_14, (MR_Integer) 0)));
#line 588 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_14_14, (MR_Integer) 1)));
#line 588 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_14_14, (MR_Integer) 2)));
#line 588 "ml_type_gen.m"
              }
#line 588 "ml_type_gen.m"
          }
#line 588 "ml_type_gen.m"
      }
#line 585 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 585 "ml_type_gen.m"
  }
#line 582 "ml_type_gen.m"
}

#line 496 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_9(
#line 496 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 496 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 496 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 496 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
#line 496 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
#line 496 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5)
#line 496 "ml_type_gen.m"
{
#line 496 "ml_type_gen.m"
  {
#line 496 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 496 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv3_MLDS_Members_22;
#line 496 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv2_MLDS_CtorMethods_24;

#line 496 "ml_type_gen.m"
    {
#line 496 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_ctor_member_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 9))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv3_MLDS_Members_22, ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_4), &ml_backend__ml_type_gen__conv2_MLDS_CtorMethods_24);
    }
#line 496 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv3_MLDS_Members_22));
#line 496 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_type_gen__conv2_MLDS_CtorMethods_24));
#line 496 "ml_type_gen.m"
  }
#line 496 "ml_type_gen.m"
}

#line 456 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_1(
#line 456 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 456 "ml_type_gen.m"
{
#line 456 "ml_type_gen.m"
  {
#line 456 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 456 "ml_type_gen.m"
    MR_builtin_longjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_0, 1);
#line 456 "ml_type_gen.m"
  }
#line 456 "ml_type_gen.m"
}

#line 456 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_3(
#line 456 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 456 "ml_type_gen.m"
{
#line 456 "ml_type_gen.m"
  {
#line 456 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 456 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_59 = ((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv0_Ctor_59);
#line 456 "ml_type_gen.m"
    {
#line 456 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_2(ml_backend__ml_type_gen__env_ptr);
    }
#line 456 "ml_type_gen.m"
  }
#line 456 "ml_type_gen.m"
}

#line 456 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_2(
#line 456 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 456 "ml_type_gen.m"
{
#line 456 "ml_type_gen.m"
  {
#line 456 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 457 "ml_type_gen.m"
    {
#line 457 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = ml_backend__ml_type_gen__ml_needs_secondary_tag_3_p_0((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_59);
    }
#line 457 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded)
#line 457 "ml_type_gen.m"
      {
#line 457 "ml_type_gen.m"
        ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_1(ml_backend__ml_type_gen__env_ptr);
      }
#line 456 "ml_type_gen.m"
  }
#line 456 "ml_type_gen.m"
}

#line 456 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_4(
#line 456 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 456 "ml_type_gen.m"
{
#line 456 "ml_type_gen.m"
  {
#line 456 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 456 "ml_type_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_0) == 0)
#line 456 "ml_type_gen.m"
      {
#line 456 "ml_type_gen.m"
        {
#line 456 "ml_type_gen.m"
          {
#line 456 "ml_type_gen.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv0_Ctor_59, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12, ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_3, ml_backend__ml_type_gen__env_ptr);
          }
#line 456 "ml_type_gen.m"
        }
#line 456 "ml_type_gen.m"
        (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = MR_FALSE;
#line 456 "ml_type_gen.m"
      }
#line 456 "ml_type_gen.m"
    else
#line 456 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = MR_TRUE;
#line 456 "ml_type_gen.m"
  }
#line 456 "ml_type_gen.m"
}

#line 477 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_5(
#line 477 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 477 "ml_type_gen.m"
{
#line 477 "ml_type_gen.m"
  {
#line 477 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 477 "ml_type_gen.m"
    MR_builtin_longjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_1, 1);
#line 477 "ml_type_gen.m"
  }
#line 477 "ml_type_gen.m"
}

#line 478 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_7(
#line 478 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 478 "ml_type_gen.m"
{
#line 478 "ml_type_gen.m"
  {
#line 478 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 478 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_27 = ((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv1_Ctor_27);
#line 478 "ml_type_gen.m"
    {
#line 478 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_6(ml_backend__ml_type_gen__env_ptr);
    }
#line 478 "ml_type_gen.m"
  }
#line 478 "ml_type_gen.m"
}

#line 477 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_6(
#line 477 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 477 "ml_type_gen.m"
{
#line 477 "ml_type_gen.m"
  {
#line 477 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 480 "ml_type_gen.m"
    {
#line 480 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = ml_backend__ml_type_gen__ml_needs_secondary_tag_3_p_0((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctor_27);
    }
#line 479 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = !((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded);
#line 479 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded)
#line 479 "ml_type_gen.m"
      {
#line 479 "ml_type_gen.m"
        ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_5(ml_backend__ml_type_gen__env_ptr);
      }
#line 477 "ml_type_gen.m"
  }
#line 477 "ml_type_gen.m"
}

#line 477 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_8(
#line 477 "ml_type_gen.m"
  void * ml_backend__ml_type_gen__env_ptr_arg)
#line 477 "ml_type_gen.m"
{
#line 477 "ml_type_gen.m"
  {
#line 477 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

#line 477 "ml_type_gen.m"
    if (MR_builtin_setjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__commit_1) == 0)
#line 477 "ml_type_gen.m"
      {
#line 477 "ml_type_gen.m"
        {
#line 478 "ml_type_gen.m"
          {
#line 478 "ml_type_gen.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__conv1_Ctor_27, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12, ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_7, ml_backend__ml_type_gen__env_ptr);
          }
#line 477 "ml_type_gen.m"
        }
#line 477 "ml_type_gen.m"
        (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = MR_FALSE;
#line 477 "ml_type_gen.m"
      }
#line 477 "ml_type_gen.m"
    else
#line 477 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = MR_TRUE;
#line 477 "ml_type_gen.m"
  }
#line 477 "ml_type_gen.m"
}

#line 432 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0(
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_9,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctors_12,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_13,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
#line 432 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_45,
#line 432 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_46)
#line 432 "ml_type_gen.m"
{
#line 432 "ml_type_gen.m"
  {
#line 432 "ml_type_gen.m"
    struct ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0_s ml_backend__ml_type_gen__env;

#line 432 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10 = ml_backend__ml_type_gen__TypeCtor_10;
#line 432 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12 = ml_backend__ml_type_gen__Ctors_12;
#line 432 "ml_type_gen.m"
    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13 = ml_backend__ml_type_gen__TagValues_13;
#line 437 "ml_type_gen.m"
    {
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TypeInfo_68_68;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TypeCtorInfo_69_69;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Context_16;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_Context_17;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__QualBaseClassName_18;
#line 437 "ml_type_gen.m"
      MR_Integer ml_backend__ml_type_gen__BaseClassArity_19;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__BaseClassId_20;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__BaseClassModuleName_21;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__QualKind_22;
#line 437 "ml_type_gen.m"
      MR_String ml_backend__ml_type_gen__BaseClassName_23;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Globals_24;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Target_25;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__BaseClassQualifier_26;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TagMembers_28;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TagClassId_29;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__CtorMembers_34;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__BaseClassCtorMethods_35;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Implements_38;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__TypeParams_39;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Members_40;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_TypeName_41;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_42;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_43;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__Defn_44;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_50_50;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_55_55;
#line 437 "ml_type_gen.m"
      MR_Word ml_backend__ml_type_gen__V_56_56;
#line 496 "ml_type_gen.m"
      MR_Box ml_backend__ml_type_gen__conv5_CtorMembers_34;
#line 496 "ml_type_gen.m"
      MR_Box ml_backend__ml_type_gen__conv4_BaseClassCtorMethods_35;

#line 438 "ml_type_gen.m"
      {
#line 438 "ml_type_gen.m"
        hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__Context_16);
      }
#line 439 "ml_type_gen.m"
      {
#line 439 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_Context_17 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
      }
#line 442 "ml_type_gen.m"
      {
#line 442 "ml_type_gen.m"
        ml_backend__ml_type_gen__ml_gen_type_name_3_p_0((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10, &ml_backend__ml_type_gen__QualBaseClassName_18, &ml_backend__ml_type_gen__BaseClassArity_19);
      }
#line 443 "ml_type_gen.m"
      {
#line 443 "ml_type_gen.m"
        ml_backend__ml_type_gen__BaseClassId_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 443 "ml_type_gen.m"
        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 443 "ml_type_gen.m"
        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualBaseClassName_18));
#line 443 "ml_type_gen.m"
        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 2) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassArity_19));
#line 443 "ml_type_gen.m"
        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 3) = ((MR_Box) ((MR_Integer) 0));
#line 443 "ml_type_gen.m"
      }
#line 445 "ml_type_gen.m"
      ml_backend__ml_type_gen__BaseClassModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 0)));
#line 445 "ml_type_gen.m"
      ml_backend__ml_type_gen__QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 1)));
#line 445 "ml_type_gen.m"
      ml_backend__ml_type_gen__BaseClassName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 2)));
#line 446 "ml_type_gen.m"
      {
#line 446 "ml_type_gen.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_9, &ml_backend__ml_type_gen__Globals_24);
      }
#line 447 "ml_type_gen.m"
      {
#line 447 "ml_type_gen.m"
        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_24, &ml_backend__ml_type_gen__Target_25);
      }
#line 448 "ml_type_gen.m"
      {
#line 448 "ml_type_gen.m"
        ml_backend__ml_type_gen__BaseClassQualifier_26 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_25, ml_backend__ml_type_gen__BaseClassModuleName_21, ml_backend__ml_type_gen__QualKind_22, ml_backend__ml_type_gen__BaseClassName_23, ml_backend__ml_type_gen__BaseClassArity_19);
      }
#line 456 "ml_type_gen.m"
      {
#line 456 "ml_type_gen.m"
        ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_4(&ml_backend__ml_type_gen__env);
      }
#line 455 "ml_type_gen.m"
      (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = !((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded);
#line 451 "ml_type_gen.m"
      if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded)
#line 460 "ml_type_gen.m"
        {
#line 460 "ml_type_gen.m"
          ml_backend__ml_type_gen__TagMembers_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 461 "ml_type_gen.m"
          ml_backend__ml_type_gen__TagClassId_29 = ml_backend__ml_type_gen__BaseClassId_20;
#line 460 "ml_type_gen.m"
        }
#line 451 "ml_type_gen.m"
      else
#line 464 "ml_type_gen.m"
        {
#line 464 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TagDataMember_30;
#line 464 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TagMembers0_32;
#line 464 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_76_76;
#line 464 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_77_77;

#line 536 "ml_type_gen.m"
          {
#line 536 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_76_76 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
          }
#line 1154 "ml_type_gen.m"
          {
#line 1154 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_77_77 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
          }
#line 535 "ml_type_gen.m"
          {
#line 535 "ml_type_gen.m"
            ml_backend__ml_type_gen__TagDataMember_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 535 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_30, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_3[3])));
#line 535 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_30, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_76_76));
#line 535 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_30, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_77_77));
#line 535 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_1[2])));
#line 535 "ml_type_gen.m"
          }
#line 470 "ml_type_gen.m"
          {
#line 470 "ml_type_gen.m"
            ml_backend__ml_type_gen__TagMembers0_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 470 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers0_32, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagDataMember_30));
#line 470 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers0_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 470 "ml_type_gen.m"
          }
#line 477 "ml_type_gen.m"
          {
#line 477 "ml_type_gen.m"
            ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_8(&ml_backend__ml_type_gen__env);
          }
#line 477 "ml_type_gen.m"
          (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded = !((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded);
#line 476 "ml_type_gen.m"
          if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__succeeded)
#line 483 "ml_type_gen.m"
            {
#line 483 "ml_type_gen.m"
              ml_backend__ml_type_gen__TagMembers_28 = ml_backend__ml_type_gen__TagMembers0_32;
#line 484 "ml_type_gen.m"
              ml_backend__ml_type_gen__TagClassId_29 = ml_backend__ml_type_gen__BaseClassId_20;
#line 483 "ml_type_gen.m"
            }
#line 476 "ml_type_gen.m"
          else
#line 487 "ml_type_gen.m"
            {
#line 487 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__TagTypeDefn_33;

#line 486 "ml_type_gen.m"
              {
#line 486 "ml_type_gen.m"
                ml_backend__ml_type_gen__ml_gen_secondary_tag_class_7_p_0(ml_backend__ml_type_gen__MLDS_Context_17, ml_backend__ml_type_gen__BaseClassQualifier_26, ml_backend__ml_type_gen__BaseClassId_20, ml_backend__ml_type_gen__TagMembers0_32, ml_backend__ml_type_gen__Target_25, &ml_backend__ml_type_gen__TagTypeDefn_33, &ml_backend__ml_type_gen__TagClassId_29);
              }
#line 488 "ml_type_gen.m"
              {
#line 488 "ml_type_gen.m"
                ml_backend__ml_type_gen__TagMembers_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "ml_type_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers_28, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagTypeDefn_33));
#line 488 "ml_type_gen.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 488 "ml_type_gen.m"
              }
#line 487 "ml_type_gen.m"
            }
#line 464 "ml_type_gen.m"
        }
#line 496 "ml_type_gen.m"
      {
#line 496 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_7[0]));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_9));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_9));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_20));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 5) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_26));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 6) = ((MR_Box) (ml_backend__ml_type_gen__TagClassId_29));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 7) = ((MR_Box) ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TypeCtor_10));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 8) = ((MR_Box) (ml_backend__ml_type_gen__TypeDefn_11));
#line 496 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_50_50, 9) = ((MR_Box) ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__TagValues_13));
#line 496 "ml_type_gen.m"
      }
#line 4851 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen__TypeInfo_68_68 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[0];
#line 496 "ml_type_gen.m"
      {
#line 496 "ml_type_gen.m"
        mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ml_backend__ml_type_gen__TypeInfo_68_68, ml_backend__ml_type_gen__TypeInfo_68_68, ml_backend__ml_type_gen__V_50_50, (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0_env_0__Ctors_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv5_CtorMembers_34, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv4_BaseClassCtorMethods_35);
      }
#line 496 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorMembers_34 = ((MR_Word) ml_backend__ml_type_gen__conv5_CtorMembers_34);
#line 496 "ml_type_gen.m"
      ml_backend__ml_type_gen__BaseClassCtorMethods_35 = ((MR_Word) ml_backend__ml_type_gen__conv4_BaseClassCtorMethods_35);
#line 509 "ml_type_gen.m"
#line 509 "ml_type_gen.m"
      switch (ml_backend__ml_type_gen__Target_25) {
#line 509 "ml_type_gen.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 509 "ml_type_gen.m"
        case (MR_Integer) 0:
#line 509 "ml_type_gen.m"
        case (MR_Integer) 1:
#line 509 "ml_type_gen.m"
        case (MR_Integer) 3:
#line 514 "ml_type_gen.m"
          ml_backend__ml_type_gen__Implements_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 509 "ml_type_gen.m"
          break;
#line 509 "ml_type_gen.m"
        case (MR_Integer) 2:
#line 507 "ml_type_gen.m"
          {
#line 507 "ml_type_gen.m"
            MR_Word ml_backend__ml_type_gen__V_53_53;

#line 508 "ml_type_gen.m"
            {
#line 508 "ml_type_gen.m"
              ml_backend__ml_type_gen__V_53_53 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
            }
#line 508 "ml_type_gen.m"
            {
#line 508 "ml_type_gen.m"
              ml_backend__ml_type_gen__Implements_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 508 "ml_type_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_38, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_53_53));
#line 508 "ml_type_gen.m"
              MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 508 "ml_type_gen.m"
            }
#line 507 "ml_type_gen.m"
          }
#line 509 "ml_type_gen.m"
          break;
#line 509 "ml_type_gen.m"
      }
#line 517 "ml_type_gen.m"
      {
#line 517 "ml_type_gen.m"
        hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__TypeParams_39);
      }
#line 4910 "ml_backend.ml_type_gen.c"
      ml_backend__ml_type_gen__TypeCtorInfo_69_69 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 520 "ml_type_gen.m"
      {
#line 520 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_55_55 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_69_69, ml_backend__ml_type_gen__TagMembers_28, ml_backend__ml_type_gen__CtorMembers_34);
      }
#line 520 "ml_type_gen.m"
      {
#line 520 "ml_type_gen.m"
        ml_backend__ml_type_gen__Members_40 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_69_69, ml_backend__ml_type_gen__MaybeEqualityMembers_14, ml_backend__ml_type_gen__V_55_55);
      }
#line 521 "ml_type_gen.m"
      {
#line 521 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_TypeName_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 521 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_41, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassName_23));
#line 521 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_41, 1) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassArity_19));
#line 521 "ml_type_gen.m"
      }
#line 1144 "ml_type_gen.m"
      {
#line 1144 "ml_type_gen.m"
        ml_backend__ml_type_gen__MLDS_TypeFlags_42 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
      }
#line 523 "ml_type_gen.m"
      {
#line 523 "ml_type_gen.m"
        ml_backend__ml_type_gen__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 523 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 0) = ((MR_Box) ((MR_Integer) 0));
#line 523 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 523 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 3) = ((MR_Box) (ml_backend__ml_type_gen__Implements_38));
#line 523 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeParams_39));
#line 523 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 5) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassCtorMethods_35));
#line 523 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_56_56, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_40));
#line 523 "ml_type_gen.m"
      }
#line 523 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_TypeDefnBody_43 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__V_56_56);
#line 525 "ml_type_gen.m"
      {
#line 525 "ml_type_gen.m"
        ml_backend__ml_type_gen__Defn_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 525 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_44, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_41));
#line 525 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_44, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_17));
#line 525 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_44, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_42));
#line 525 "ml_type_gen.m"
        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_44, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_43));
#line 525 "ml_type_gen.m"
      }
#line 528 "ml_type_gen.m"
      {
#line 528 "ml_type_gen.m"
        MR_Word base;
#line 528 "ml_type_gen.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 528 "ml_type_gen.m"
        *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_46 = base;
#line 528 "ml_type_gen.m"
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Defn_44));
#line 528 "ml_type_gen.m"
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_45));
#line 528 "ml_type_gen.m"
      }
#line 437 "ml_type_gen.m"
    }
#line 432 "ml_type_gen.m"
  }
#line 432 "ml_type_gen.m"
}

#line 334 "ml_type_gen.m"
static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0_1(
#line 334 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg)
#line 334 "ml_type_gen.m"
{
#line 334 "ml_type_gen.m"
  {
#line 334 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 334 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;

#line 334 "ml_type_gen.m"
    {
#line 334 "ml_type_gen.m"
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_enum_constant__334__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))));
    }
#line 334 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 334 "ml_type_gen.m"
  }
#line 334 "ml_type_gen.m"
}

#line 295 "ml_type_gen.m"
static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0(
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_7,
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_9,
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MLDS_Type_10,
#line 295 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_11)
#line 295 "ml_type_gen.m"
{
#line 299 "ml_type_gen.m"
  {
#line 299 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Defn_12;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 2)));
#line 299 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 4)));
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_19;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ConstValue_21;
#line 299 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__UnqualifiedName_54;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_55_55;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_61_61;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_66_66;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_67_67;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_68_68;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_70_70;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_71_71;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_72_72;
#line 299 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_74_74;
#line 301 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___ExistQTVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 0)));
#line 301 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 1)));
#line 301 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 3)));
#line 301 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Ctxt_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 5)));
#line 302 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_19;

#line 302 "ml_type_gen.m"
    {
#line 302 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_55_55 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 302 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_55_55, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_55_55, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_15));
#line 302 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_55_55, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_17));
#line 302 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_55_55, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_8));
#line 302 "ml_type_gen.m"
    }
#line 302 "ml_type_gen.m"
    {
#line 302 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_9, ((MR_Box) (ml_backend__ml_type_gen__V_55_55)), &ml_backend__ml_type_gen__conv0_TagVal_19);
    }
#line 302 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_19 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_19);
#line 306 "ml_type_gen.m"
#line 306 "ml_type_gen.m"
    switch (MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_19)) {
#line 306 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 306 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 330 "ml_type_gen.m"
        {
#line 331 "ml_type_gen.m"
          {
#line 331 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
          }
#line 330 "ml_type_gen.m"
        }
#line 306 "ml_type_gen.m"
        break;
#line 306 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 306 "ml_type_gen.m"
      case (MR_Integer) 2:
#line 330 "ml_type_gen.m"
        {
#line 331 "ml_type_gen.m"
          {
#line 331 "ml_type_gen.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
          }
#line 330 "ml_type_gen.m"
        }
#line 306 "ml_type_gen.m"
        break;
#line 306 "ml_type_gen.m"
      case (MR_Integer) 3:
#line 306 "ml_type_gen.m"
#line 306 "ml_type_gen.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 0)))) {
#line 306 "ml_type_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 306 "ml_type_gen.m"
          case (MR_Integer) 0:
#line 304 "ml_type_gen.m"
            {
#line 304 "ml_type_gen.m"
              MR_Integer ml_backend__ml_type_gen__Int_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 1)));
#line 304 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_60_60;

#line 305 "ml_type_gen.m"
              {
#line 305 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 305 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_60_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 305 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_60_60, 1) = ((MR_Box) (ml_backend__ml_type_gen__Int_20));
#line 305 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_60_60, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_10));
#line 305 "ml_type_gen.m"
              }
#line 305 "ml_type_gen.m"
              {
#line 305 "ml_type_gen.m"
                ml_backend__ml_type_gen__ConstValue_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 305 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 305 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_60_60));
#line 305 "ml_type_gen.m"
              }
#line 304 "ml_type_gen.m"
            }
#line 306 "ml_type_gen.m"
            break;
#line 306 "ml_type_gen.m"
          case (MR_Integer) 1:
#line 307 "ml_type_gen.m"
            {
#line 307 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__ForeignLang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 1)));
#line 307 "ml_type_gen.m"
              MR_String ml_backend__ml_type_gen__ForeignTagValue_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 2)));
#line 307 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__V_59_59;

#line 308 "ml_type_gen.m"
              {
#line 308 "ml_type_gen.m"
                ml_backend__ml_type_gen__V_59_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 308 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_59_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 308 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_59_59, 1) = ((MR_Box) (ml_backend__ml_type_gen__ForeignLang_22));
#line 308 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_59_59, 2) = ((MR_Box) (ml_backend__ml_type_gen__ForeignTagValue_23));
#line 308 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_59_59, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_10));
#line 308 "ml_type_gen.m"
              }
#line 308 "ml_type_gen.m"
              {
#line 308 "ml_type_gen.m"
                ml_backend__ml_type_gen__ConstValue_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 308 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 308 "ml_type_gen.m"
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_59_59));
#line 308 "ml_type_gen.m"
              }
#line 307 "ml_type_gen.m"
            }
#line 306 "ml_type_gen.m"
            break;
#line 306 "ml_type_gen.m"
          case (MR_Integer) 2:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 3:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 4:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 5:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 6:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 7:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 8:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 9:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 10:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 11:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 12:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 13:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 14:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 15:
#line 306 "ml_type_gen.m"
          case (MR_Integer) 16:
#line 330 "ml_type_gen.m"
            {
#line 331 "ml_type_gen.m"
              {
#line 331 "ml_type_gen.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
              }
#line 330 "ml_type_gen.m"
            }
#line 306 "ml_type_gen.m"
            break;
#line 306 "ml_type_gen.m"
        }
#line 306 "ml_type_gen.m"
        break;
#line 306 "ml_type_gen.m"
    }
#line 334 "ml_type_gen.m"
    {
#line 334 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 334 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[1]));
#line 334 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0_1));
#line 334 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 334 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 3) = ((MR_Box) (ml_backend__ml_type_gen__Arity_17));
#line 334 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_61_61, 4) = ((MR_Box) ((MR_Integer) 0));
#line 334 "ml_type_gen.m"
    }
#line 334 "ml_type_gen.m"
    {
#line 334 "ml_type_gen.m"
      mercury__require__expect_4_p_0(ml_backend__ml_type_gen__V_61_61, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_enum_constant\'/5", (MR_String) "arity != []");
    }
#line 337 "ml_type_gen.m"
    {
#line 337 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualifiedName_54 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__Name_15);
    }
#line 339 "ml_type_gen.m"
    {
#line 339 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_68_68, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualifiedName_54));
#line 339 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_68_68, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 339 "ml_type_gen.m"
    }
#line 339 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__V_68_68);
#line 339 "ml_type_gen.m"
    {
#line 339 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 339 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_66_66, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_67_67));
#line 339 "ml_type_gen.m"
    }
#line 340 "ml_type_gen.m"
    {
#line 340 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_70_70 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_7);
    }
#line 1174 "ml_type_gen.m"
    {
#line 1174 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_71_71 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 342 "ml_type_gen.m"
    {
#line 342 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_74_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_74_74, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_21));
#line 342 "ml_type_gen.m"
    }
#line 342 "ml_type_gen.m"
    {
#line 342 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 342 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_72_72, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 342 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_72_72, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_74_74));
#line 342 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_72_72, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "ml_type_gen.m"
    }
#line 338 "ml_type_gen.m"
    {
#line 338 "ml_type_gen.m"
      ml_backend__ml_type_gen__Defn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 338 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_66_66));
#line 338 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_70_70));
#line 338 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_71_71));
#line 338 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 3) = ((MR_Box) (ml_backend__ml_type_gen__V_72_72));
#line 338 "ml_type_gen.m"
    }
#line 299 "ml_type_gen.m"
    return ml_backend__ml_type_gen__Defn_12;
#line 299 "ml_type_gen.m"
  }
#line 295 "ml_type_gen.m"
}

#line 252 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0_1(
#line 252 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 252 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
#line 252 "ml_type_gen.m"
{
#line 252 "ml_type_gen.m"
  {
#line 252 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
#line 252 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 252 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_Defn_12;

#line 252 "ml_type_gen.m"
    {
#line 252 "ml_type_gen.m"
      ml_backend__ml_type_gen__conv0_Defn_12 = ml_backend__ml_type_gen__ml_gen_enum_constant_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
#line 252 "ml_type_gen.m"
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_Defn_12));
#line 252 "ml_type_gen.m"
    return ml_backend__ml_type_gen__wrapper_arg_2;
#line 252 "ml_type_gen.m"
  }
#line 252 "ml_type_gen.m"
}

#line 234 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_9,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctors_12,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TagValues_13,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
#line 234 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35,
#line 234 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36)
#line 234 "ml_type_gen.m"
{
#line 239 "ml_type_gen.m"
  {
#line 239 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_49_49;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Context_16;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Context_17;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__QualifiedClassName_18;
#line 239 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__MLDS_ClassArity_19;
#line 239 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__MLDS_ClassName_22;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ValueMember_23;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Type_24;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EnumConstMembers_25;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Members_26;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Implements_28;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Inherits_29;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeVars_30;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeName_31;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_32;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_33;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Defn_34;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_38_38;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_39_39;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_44_44;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_58_58;
#line 239 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_59_59;
#line 245 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_20_20;
#line 245 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_21_21;

#line 240 "ml_type_gen.m"
    {
#line 240 "ml_type_gen.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__Context_16);
    }
#line 241 "ml_type_gen.m"
    {
#line 241 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Context_17 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
    }
#line 244 "ml_type_gen.m"
    {
#line 244 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_10, &ml_backend__ml_type_gen__QualifiedClassName_18, &ml_backend__ml_type_gen__MLDS_ClassArity_19);
    }
#line 245 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 0)));
#line 245 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 1)));
#line 245 "ml_type_gen.m"
    ml_backend__ml_type_gen__MLDS_ClassName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 2)));
#line 291 "ml_type_gen.m"
    {
#line 291 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_58_58 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
    }
#line 1154 "ml_type_gen.m"
    {
#line 1154 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_59_59 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 290 "ml_type_gen.m"
    {
#line 290 "ml_type_gen.m"
      ml_backend__ml_type_gen__ValueMember_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 290 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_3[0])));
#line 290 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_58_58));
#line 290 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_59_59));
#line 290 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_1[2])));
#line 290 "ml_type_gen.m"
    }
#line 249 "ml_type_gen.m"
    {
#line 249 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 249 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 249 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualifiedClassName_18));
#line 249 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_19));
#line 249 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 3) = ((MR_Box) ((MR_Integer) 4));
#line 249 "ml_type_gen.m"
    }
#line 5524 "ml_backend.ml_type_gen.c"
    ml_backend__ml_type_gen__TypeCtorInfo_49_49 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 252 "ml_type_gen.m"
    {
#line 252 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[1]));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0_1));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 3) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_10));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 5) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_13));
#line 252 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_38_38, 6) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_24));
#line 252 "ml_type_gen.m"
    }
#line 251 "ml_type_gen.m"
    {
#line 251 "ml_type_gen.m"
      ml_backend__ml_type_gen__EnumConstMembers_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ml_backend__ml_type_gen__TypeCtorInfo_49_49, ml_backend__ml_type_gen__V_38_38, ml_backend__ml_type_gen__Ctors_12);
    }
#line 255 "ml_type_gen.m"
    {
#line 255 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_39_39, 0) = ((MR_Box) (ml_backend__ml_type_gen__ValueMember_23));
#line 255 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_39_39, 1) = ((MR_Box) (ml_backend__ml_type_gen__EnumConstMembers_25));
#line 255 "ml_type_gen.m"
    }
#line 254 "ml_type_gen.m"
    {
#line 254 "ml_type_gen.m"
      ml_backend__ml_type_gen__Members_26 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_49_49, ml_backend__ml_type_gen__MaybeEqualityMembers_14, ml_backend__ml_type_gen__V_39_39);
    }
#line 266 "ml_type_gen.m"
#line 266 "ml_type_gen.m"
    switch (ml_backend__ml_type_gen__Target_9) {
#line 266 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 266 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 266 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 266 "ml_type_gen.m"
      case (MR_Integer) 3:
#line 270 "ml_type_gen.m"
        {
#line 271 "ml_type_gen.m"
          ml_backend__ml_type_gen__Implements_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 272 "ml_type_gen.m"
          ml_backend__ml_type_gen__Inherits_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "ml_type_gen.m"
        }
#line 266 "ml_type_gen.m"
        break;
#line 266 "ml_type_gen.m"
      case (MR_Integer) 2:
#line 263 "ml_type_gen.m"
        {
#line 263 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_40_40;
#line 263 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_42_42;

#line 264 "ml_type_gen.m"
          {
#line 264 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_40_40 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
          }
#line 264 "ml_type_gen.m"
          {
#line 264 "ml_type_gen.m"
            ml_backend__ml_type_gen__Implements_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 264 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_28, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_40_40));
#line 264 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "ml_type_gen.m"
          }
#line 265 "ml_type_gen.m"
          {
#line 265 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_42_42 = ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0();
          }
#line 265 "ml_type_gen.m"
          {
#line 265 "ml_type_gen.m"
            ml_backend__ml_type_gen__Inherits_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_29, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_42_42));
#line 265 "ml_type_gen.m"
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 265 "ml_type_gen.m"
          }
#line 263 "ml_type_gen.m"
        }
#line 266 "ml_type_gen.m"
        break;
#line 266 "ml_type_gen.m"
    }
#line 275 "ml_type_gen.m"
    {
#line 275 "ml_type_gen.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__TypeVars_30);
    }
#line 278 "ml_type_gen.m"
    {
#line 278 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_TypeName_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_31, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassName_22));
#line 278 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_19));
#line 278 "ml_type_gen.m"
    }
#line 1144 "ml_type_gen.m"
    {
#line 1144 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_TypeFlags_32 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 280 "ml_type_gen.m"
    {
#line 280 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 280 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 0) = ((MR_Box) ((MR_Integer) 4));
#line 280 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_29));
#line 280 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 3) = ((MR_Box) (ml_backend__ml_type_gen__Implements_28));
#line 280 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeVars_30));
#line 280 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_44_44, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_26));
#line 280 "ml_type_gen.m"
    }
#line 280 "ml_type_gen.m"
    ml_backend__ml_type_gen__MLDS_TypeDefnBody_33 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__V_44_44);
#line 282 "ml_type_gen.m"
    {
#line 282 "ml_type_gen.m"
      ml_backend__ml_type_gen__Defn_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 282 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_31));
#line 282 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_17));
#line 282 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_32));
#line 282 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_33));
#line 282 "ml_type_gen.m"
    }
#line 285 "ml_type_gen.m"
    {
#line 285 "ml_type_gen.m"
      MR_Word base;
#line 285 "ml_type_gen.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 285 "ml_type_gen.m"
      *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36 = base;
#line 285 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Defn_34));
#line 285 "ml_type_gen.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35));
#line 285 "ml_type_gen.m"
    }
#line 239 "ml_type_gen.m"
  }
#line 234 "ml_type_gen.m"
}

#line 153 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_defn_4_p_0(
#line 153 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_5,
#line 153 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
#line 153 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11,
#line 153 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12)
#line 153 "ml_type_gen.m"
{
#line 156 "ml_type_gen.m"
  {
#line 156 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 156 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 0)));
#line 156 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 1)));
#line 156 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeStatus_9;
#line 156 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__DefinedThisModule_10;

#line 157 "ml_type_gen.m"
    {
#line 157 "ml_type_gen.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(ml_backend__ml_type_gen__TypeDefn_7, &ml_backend__ml_type_gen__TypeStatus_9);
    }
#line 158 "ml_type_gen.m"
    {
#line 158 "ml_type_gen.m"
      ml_backend__ml_type_gen__DefinedThisModule_10 = hlds__status__type_status_defined_in_this_module_1_f_0(ml_backend__ml_type_gen__TypeStatus_9);
    }
#line 162 "ml_type_gen.m"
#line 162 "ml_type_gen.m"
    switch (ml_backend__ml_type_gen__DefinedThisModule_10) {
#line 162 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 162 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 163 "ml_type_gen.m"
        *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 162 "ml_type_gen.m"
        break;
#line 162 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 169 "ml_type_gen.m"
        {
#line 169 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TypeBody_20;

#line 170 "ml_type_gen.m"
          {
#line 170 "ml_type_gen.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_type_gen__TypeDefn_7, &ml_backend__ml_type_gen__TypeBody_20);
          }
#line 173 "ml_type_gen.m"
#line 173 "ml_type_gen.m"
          switch (MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_20)) {
#line 173 "ml_type_gen.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 173 "ml_type_gen.m"
            case (MR_Integer) 0:
#line 208 "ml_type_gen.m"
              *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 173 "ml_type_gen.m"
              break;
#line 173 "ml_type_gen.m"
            case (MR_Integer) 1:
#line 181 "ml_type_gen.m"
              {
#line 181 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__Ctors_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 0)));
#line 181 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__TagValues_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 1)));
#line 181 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__DuTypeKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 3)));
#line 181 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 180 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen___CheaperTagTest_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 2)));
#line 180 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__MaybeUserEqComp_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 4)));
#line 180 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen___MaybeDirectArgCtors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 5)));
#line 180 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen___ReservedTag_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 180 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 180 "ml_type_gen.m"
                MR_Word ml_backend__ml_type_gen__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 7)));

#line 192 "ml_type_gen.m"
#line 192 "ml_type_gen.m"
                switch (MR_tag((MR_Word) ml_backend__ml_type_gen__DuTypeKind_26)) {
#line 192 "ml_type_gen.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 192 "ml_type_gen.m"
                  case (MR_Integer) 0:
#line 192 "ml_type_gen.m"
#line 192 "ml_type_gen.m"
                    switch (MR_unmkbody(ml_backend__ml_type_gen__DuTypeKind_26)) {
#line 192 "ml_type_gen.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 192 "ml_type_gen.m"
                      case (MR_Integer) 0:
#line 187 "ml_type_gen.m"
                        {
#line 187 "ml_type_gen.m"
                          MR_Word ml_backend__ml_type_gen__Globals_34;
#line 187 "ml_type_gen.m"
                          MR_Word ml_backend__ml_type_gen__Target_35;

#line 188 "ml_type_gen.m"
                          {
#line 188 "ml_type_gen.m"
                            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_34);
                          }
#line 189 "ml_type_gen.m"
                          {
#line 189 "ml_type_gen.m"
                            libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_34, &ml_backend__ml_type_gen__Target_35);
                          }
#line 190 "ml_type_gen.m"
                          {
#line 190 "ml_type_gen.m"
                            ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(ml_backend__ml_type_gen__Target_35, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                          }
#line 187 "ml_type_gen.m"
                        }
#line 192 "ml_type_gen.m"
                        break;
#line 192 "ml_type_gen.m"
                      case (MR_Integer) 1:
#line 193 "ml_type_gen.m"
                        {
#line 193 "ml_type_gen.m"
                          MR_Word ml_backend__ml_type_gen__Globals_45;
#line 193 "ml_type_gen.m"
                          MR_Word ml_backend__ml_type_gen__Target_46;

#line 196 "ml_type_gen.m"
                          {
#line 196 "ml_type_gen.m"
                            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_45);
                          }
#line 197 "ml_type_gen.m"
                          {
#line 197 "ml_type_gen.m"
                            libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_45, &ml_backend__ml_type_gen__Target_46);
                          }
#line 198 "ml_type_gen.m"
                          {
#line 198 "ml_type_gen.m"
                            ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(ml_backend__ml_type_gen__Target_46, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                          }
#line 193 "ml_type_gen.m"
                        }
#line 192 "ml_type_gen.m"
                        break;
#line 192 "ml_type_gen.m"
                      case (MR_Integer) 2:
#line 204 "ml_type_gen.m"
                        {
#line 204 "ml_type_gen.m"
                          ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0(ml_backend__ml_type_gen__ModuleInfo_5, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                        }
#line 192 "ml_type_gen.m"
                        break;
#line 192 "ml_type_gen.m"
                    }
#line 192 "ml_type_gen.m"
                    break;
#line 192 "ml_type_gen.m"
                  case (MR_Integer) 1:
#line 187 "ml_type_gen.m"
                    {
#line 187 "ml_type_gen.m"
                      MR_Word ml_backend__ml_type_gen__Globals_34;
#line 187 "ml_type_gen.m"
                      MR_Word ml_backend__ml_type_gen__Target_35;

#line 188 "ml_type_gen.m"
                      {
#line 188 "ml_type_gen.m"
                        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_34);
                      }
#line 189 "ml_type_gen.m"
                      {
#line 189 "ml_type_gen.m"
                        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_34, &ml_backend__ml_type_gen__Target_35);
                      }
#line 190 "ml_type_gen.m"
                      {
#line 190 "ml_type_gen.m"
                        ml_backend__ml_type_gen__ml_gen_enum_type_8_p_0(ml_backend__ml_type_gen__Target_35, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                      }
#line 187 "ml_type_gen.m"
                    }
#line 192 "ml_type_gen.m"
                    break;
#line 192 "ml_type_gen.m"
                  case (MR_Integer) 2:
#line 204 "ml_type_gen.m"
                    {
#line 204 "ml_type_gen.m"
                      ml_backend__ml_type_gen__ml_gen_du_parent_type_8_p_0(ml_backend__ml_type_gen__ModuleInfo_5, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                    }
#line 192 "ml_type_gen.m"
                    break;
#line 192 "ml_type_gen.m"
                }
#line 181 "ml_type_gen.m"
              }
#line 173 "ml_type_gen.m"
              break;
#line 173 "ml_type_gen.m"
            case (MR_Integer) 2:
#line 174 "ml_type_gen.m"
              *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 173 "ml_type_gen.m"
              break;
#line 173 "ml_type_gen.m"
            case (MR_Integer) 3:
#line 173 "ml_type_gen.m"
#line 173 "ml_type_gen.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 0)))) {
#line 173 "ml_type_gen.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 173 "ml_type_gen.m"
                case (MR_Integer) 0:
#line 210 "ml_type_gen.m"
                  *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 173 "ml_type_gen.m"
                  break;
#line 173 "ml_type_gen.m"
                case (MR_Integer) 1:
#line 172 "ml_type_gen.m"
                  *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
#line 173 "ml_type_gen.m"
                  break;
#line 173 "ml_type_gen.m"
              }
#line 173 "ml_type_gen.m"
              break;
#line 173 "ml_type_gen.m"
          }
#line 169 "ml_type_gen.m"
        }
#line 162 "ml_type_gen.m"
        break;
#line 162 "ml_type_gen.m"
    }
#line 156 "ml_type_gen.m"
  }
#line 153 "ml_type_gen.m"
}

#line 1182 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
#line 1182 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 1182 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 1182 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2)
#line 1182 "ml_type_gen.m"
{
#line 1182 "ml_type_gen.m"
  {
#line 1182 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 1182 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8;

#line 1182 "ml_type_gen.m"
    {
#line 1182 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8);
    }
#line 1182 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8));
#line 1182 "ml_type_gen.m"
  }
#line 1182 "ml_type_gen.m"
}

#line 114 "ml_type_gen.m"
void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(
#line 114 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_3,
#line 114 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnums_4)
#line 114 "ml_type_gen.m"
{
#line 1179 "ml_type_gen.m"
  {
#line 1179 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1179 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_5;
#line 1179 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeTable_6;
#line 1179 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_7_7;

#line 1180 "ml_type_gen.m"
    {
#line 1180 "ml_type_gen.m"
      hlds__hlds_module__module_info_get_exported_enums_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__ExportedEnumInfo_5);
    }
#line 1181 "ml_type_gen.m"
    {
#line 1181 "ml_type_gen.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__TypeTable_6);
    }
#line 1182 "ml_type_gen.m"
    {
#line 1182 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1182 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[1]));
#line 1182 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1));
#line 1182 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1182 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_3));
#line 1182 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_7_7, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeTable_6));
#line 1182 "ml_type_gen.m"
    }
#line 1182 "ml_type_gen.m"
    {
#line 1182 "ml_type_gen.m"
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0, ml_backend__ml_type_gen__V_7_7, ml_backend__ml_type_gen__ExportedEnumInfo_5, ml_backend__ml_type_gen__MLDS_ExportedEnums_4);
    }
#line 1179 "ml_type_gen.m"
  }
#line 114 "ml_type_gen.m"
}

#line 918 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
#line 918 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 918 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
#line 918 "ml_type_gen.m"
{
#line 918 "ml_type_gen.m"
  {
#line 918 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
#line 918 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 918 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv1_Statement_12;

#line 918 "ml_type_gen.m"
    {
#line 918 "ml_type_gen.m"
      ml_backend__ml_type_gen__conv1_Statement_12 = ml_backend__ml_type_gen__gen_init_field_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
#line 918 "ml_type_gen.m"
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv1_Statement_12));
#line 918 "ml_type_gen.m"
    return ml_backend__ml_type_gen__wrapper_arg_2;
#line 918 "ml_type_gen.m"
  }
#line 918 "ml_type_gen.m"
}

#line 915 "ml_type_gen.m"
static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
#line 915 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 915 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
#line 915 "ml_type_gen.m"
{
#line 915 "ml_type_gen.m"
  {
#line 915 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
#line 915 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 915 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_Arg_7;

#line 915 "ml_type_gen.m"
    {
#line 915 "ml_type_gen.m"
      ml_backend__ml_type_gen__conv0_Arg_7 = ml_backend__ml_type_gen__make_arg_1_f_0(((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
#line 915 "ml_type_gen.m"
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_Arg_7));
#line 915 "ml_type_gen.m"
    return ml_backend__ml_type_gen__wrapper_arg_2;
#line 915 "ml_type_gen.m"
  }
#line 915 "ml_type_gen.m"
}

#line 106 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(
#line 106 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Target_10,
#line 106 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__BaseClassId_11,
#line 106 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassType_12,
#line 106 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ClassQualifier_13,
#line 106 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_14,
#line 106 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__MaybeTag_15,
#line 106 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Members_16,
#line 106 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Context_17)
#line 106 "ml_type_gen.m"
{
#line 914 "ml_type_gen.m"
  {
#line 914 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__CtorDefn_18;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_45_45 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Args_19;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__InitMembers0_21;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__InitMembers_24;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Stmt_25;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__EnvVarNames_27;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Ctor_28;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__CtorFlags_29;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_31_31;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_32_32;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_35_35;
#line 914 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_36_36;

#line 915 "ml_type_gen.m"
    {
#line 915 "ml_type_gen.m"
      ml_backend__ml_type_gen__Args_19 = mercury__list__map_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_45_45, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_1[1], ml_backend__ml_type_gen__Members_16);
    }
#line 918 "ml_type_gen.m"
    {
#line 918 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 918 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[0]));
#line 918 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2));
#line 918 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 918 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 3) = ((MR_Box) (ml_backend__ml_type_gen__Target_10));
#line 918 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_11));
#line 918 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 5) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
#line 918 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_31_31, 6) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_13));
#line 918 "ml_type_gen.m"
    }
#line 918 "ml_type_gen.m"
    {
#line 918 "ml_type_gen.m"
      ml_backend__ml_type_gen__InitMembers0_21 = mercury__list__map_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_45_45, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_type_gen__V_31_31, ml_backend__ml_type_gen__Members_16);
    }
#line 925 "ml_type_gen.m"
    if ((ml_backend__ml_type_gen__MaybeTag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 927 "ml_type_gen.m"
      ml_backend__ml_type_gen__InitMembers_24 = ml_backend__ml_type_gen__InitMembers0_21;
#line 925 "ml_type_gen.m"
    else
#line 921 "ml_type_gen.m"
      {
#line 921 "ml_type_gen.m"
        MR_Integer ml_backend__ml_type_gen__TagVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__MaybeTag_15, (MR_Integer) 0)));
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__InitTag_23;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TagClassQualifier_65;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__Val_68;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__Field_69;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_73_73;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_76_76;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_77_77;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_78_78;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_80_80;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_81_81;
#line 921 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_82_82;
#line 1010 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__TagClass_59;
#line 1010 "ml_type_gen.m"
        MR_Integer ml_backend__ml_type_gen__TagArity_60;
#line 1010 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__V_61_61;

#line 1010 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__SecondaryTagClassId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 1010 "ml_type_gen.m"
        if (ml_backend__ml_type_gen__succeeded)
#line 1010 "ml_type_gen.m"
          {
#line 1010 "ml_type_gen.m"
            ml_backend__ml_type_gen__TagClass_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 1)));
#line 1010 "ml_type_gen.m"
            ml_backend__ml_type_gen__TagArity_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 2)));
#line 1010 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 3)));
#line 1011 "ml_type_gen.m"
            {
#line 1011 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__BaseClassQualifier_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_59, (MR_Integer) 0)));
#line 1011 "ml_type_gen.m"
              MR_Word ml_backend__ml_type_gen__QualKind_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_59, (MR_Integer) 1)));
#line 1011 "ml_type_gen.m"
              MR_String ml_backend__ml_type_gen__TagClassName_64 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_59, (MR_Integer) 2)));

#line 1012 "ml_type_gen.m"
              {
#line 1012 "ml_type_gen.m"
                ml_backend__ml_type_gen__TagClassQualifier_65 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_10, ml_backend__ml_type_gen__BaseClassQualifier_62, ml_backend__ml_type_gen__QualKind_63, ml_backend__ml_type_gen__TagClassName_64, ml_backend__ml_type_gen__TagArity_60);
              }
#line 1011 "ml_type_gen.m"
            }
#line 1010 "ml_type_gen.m"
          }
#line 1010 "ml_type_gen.m"
        else
#line 1015 "ml_type_gen.m"
          {
#line 1015 "ml_type_gen.m"
            {
#line 1015 "ml_type_gen.m"
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_tag\'/5", (MR_String) "class_id should be a class");
            }
#line 1015 "ml_type_gen.m"
          }
#line 1019 "ml_type_gen.m"
        {
#line 1019 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_73_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "ml_type_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_73_73, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagVal_22));
#line 1019 "ml_type_gen.m"
        }
#line 1019 "ml_type_gen.m"
        {
#line 1019 "ml_type_gen.m"
          ml_backend__ml_type_gen__Val_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Val_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1019 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Val_68, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_73_73));
#line 1019 "ml_type_gen.m"
        }
#line 1020 "ml_type_gen.m"
        {
#line 1020 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1020 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1020 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_76_76, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
#line 1020 "ml_type_gen.m"
        }
#line 1021 "ml_type_gen.m"
        {
#line 1021 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_78_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_78_78, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagClassQualifier_65));
#line 1021 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_78_78, 1) = ((MR_Box) ((MR_Integer) 1));
#line 1021 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_78_78, 2) = ((MR_Box) ((MR_String) "data_tag"));
#line 1021 "ml_type_gen.m"
        }
#line 1022 "ml_type_gen.m"
        {
#line 1022 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1022 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_80_80, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1022 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_80_80, 1) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_14));
#line 1022 "ml_type_gen.m"
        }
#line 1021 "ml_type_gen.m"
        {
#line 1021 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1021 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_77_77, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_78_78));
#line 1021 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_77_77, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_80_80));
#line 1021 "ml_type_gen.m"
        }
#line 1020 "ml_type_gen.m"
        {
#line 1020 "ml_type_gen.m"
          ml_backend__ml_type_gen__Field_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1020 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_3[1])));
#line 1020 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_76_76));
#line 1020 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_77_77));
#line 1020 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 1020 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_69, 4) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
#line 1020 "ml_type_gen.m"
        }
#line 1024 "ml_type_gen.m"
        {
#line 1024 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_82_82 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "ml_type_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_82_82, 0) = ((MR_Box) (ml_backend__ml_type_gen__Field_69));
#line 1024 "ml_type_gen.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__V_82_82, 1) = ((MR_Box) (ml_backend__ml_type_gen__Val_68));
#line 1024 "ml_type_gen.m"
        }
#line 1024 "ml_type_gen.m"
        {
#line 1024 "ml_type_gen.m"
          ml_backend__ml_type_gen__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1024 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1024 "ml_type_gen.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_81_81, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_82_82));
#line 1024 "ml_type_gen.m"
        }
#line 1024 "ml_type_gen.m"
        {
#line 1024 "ml_type_gen.m"
          ml_backend__ml_type_gen__InitTag_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1024 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__InitTag_23, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_81_81));
#line 1024 "ml_type_gen.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__InitTag_23, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
#line 1024 "ml_type_gen.m"
        }
#line 924 "ml_type_gen.m"
        {
#line 924 "ml_type_gen.m"
          ml_backend__ml_type_gen__InitMembers_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__InitMembers_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__InitTag_23));
#line 924 "ml_type_gen.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__InitMembers_24, 1) = ((MR_Box) (ml_backend__ml_type_gen__InitMembers0_21));
#line 924 "ml_type_gen.m"
        }
#line 921 "ml_type_gen.m"
      }
#line 930 "ml_type_gen.m"
    {
#line 930 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 930 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_32_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 930 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_32_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__InitMembers_24));
#line 930 "ml_type_gen.m"
    }
#line 930 "ml_type_gen.m"
    {
#line 930 "ml_type_gen.m"
      ml_backend__ml_type_gen__Stmt_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 930 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_25, 0) = ((MR_Box) (ml_backend__ml_type_gen__V_32_32));
#line 930 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_25, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
#line 930 "ml_type_gen.m"
    }
#line 932 "ml_type_gen.m"
    {
#line 932 "ml_type_gen.m"
      ml_backend__ml_type_gen__EnvVarNames_27 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
#line 933 "ml_type_gen.m"
    {
#line 933 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 933 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_35_35, 0) = ((MR_Box) (ml_backend__ml_type_gen__Args_19));
#line 933 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_35_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "ml_type_gen.m"
    }
#line 934 "ml_type_gen.m"
    ml_backend__ml_type_gen__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__Stmt_25);
#line 933 "ml_type_gen.m"
    {
#line 933 "ml_type_gen.m"
      ml_backend__ml_type_gen__Ctor_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 933 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 1) = ((MR_Box) (ml_backend__ml_type_gen__V_35_35));
#line 933 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 2) = ((MR_Box) (ml_backend__ml_type_gen__V_36_36));
#line 933 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "ml_type_gen.m"
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 4) = ((MR_Box) (ml_backend__ml_type_gen__EnvVarNames_27));
#line 933 "ml_type_gen.m"
    }
#line 935 "ml_type_gen.m"
    {
#line 935 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorFlags_29 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 940 "ml_type_gen.m"
    {
#line 940 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorDefn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 940 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_3[2])));
#line 940 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
#line 940 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorFlags_29));
#line 940 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 3) = ((MR_Box) (ml_backend__ml_type_gen__Ctor_28));
#line 940 "ml_type_gen.m"
    }
#line 914 "ml_type_gen.m"
    return ml_backend__ml_type_gen__CtorDefn_18;
#line 914 "ml_type_gen.m"
  }
#line 106 "ml_type_gen.m"
}

#line 101 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(
#line 101 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1)
#line 101 "ml_type_gen.m"
{
#line 883 "ml_type_gen.m"
  {
#line 883 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 883 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__HeadVar__2_2;

#line 883 "ml_type_gen.m"
#line 883 "ml_type_gen.m"
    switch (ml_backend__ml_type_gen__HeadVar__1_1) {
#line 883 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 883 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 883 "ml_type_gen.m"
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
#line 883 "ml_type_gen.m"
        break;
#line 883 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 884 "ml_type_gen.m"
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 883 "ml_type_gen.m"
        break;
#line 883 "ml_type_gen.m"
      case (MR_Integer) 3:
#line 886 "ml_type_gen.m"
        {
#line 887 "ml_type_gen.m"
          MR_Box ml_backend__ml_type_gen__conv0_HeadVar__2_2;

#line 887 "ml_type_gen.m"
          {
#line 887 "ml_type_gen.m"
            ml_backend__ml_type_gen__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_target_uses_constructors\'/1", (MR_String) "target erlang");
          }
#line 887 "ml_type_gen.m"
          ml_backend__ml_type_gen__HeadVar__2_2 = ((MR_Word) ml_backend__ml_type_gen__conv0_HeadVar__2_2);
#line 886 "ml_type_gen.m"
        }
#line 883 "ml_type_gen.m"
        break;
#line 883 "ml_type_gen.m"
      case (MR_Integer) 2:
#line 885 "ml_type_gen.m"
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
#line 883 "ml_type_gen.m"
        break;
#line 883 "ml_type_gen.m"
    }
#line 883 "ml_type_gen.m"
    return ml_backend__ml_type_gen__HeadVar__2_2;
#line 883 "ml_type_gen.m"
  }
#line 101 "ml_type_gen.m"
}

#line 97 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(
#line 97 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Tag_3)
#line 97 "ml_type_gen.m"
{
#line 852 "ml_type_gen.m"
  while (MR_TRUE)
#line 852 "ml_type_gen.m"
    {
#line 852 "ml_type_gen.m"
      /* tailcall optimized into a loop */
#line 852 "ml_type_gen.m"
      {
#line 852 "ml_type_gen.m"
        MR_bool ml_backend__ml_type_gen__succeeded;
#line 852 "ml_type_gen.m"
        MR_Word ml_backend__ml_type_gen__UsesBaseClass_4;

#line 852 "ml_type_gen.m"
#line 852 "ml_type_gen.m"
        switch (MR_tag((MR_Word) ml_backend__ml_type_gen__Tag_3)) {
#line 852 "ml_type_gen.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 852 "ml_type_gen.m"
          case (MR_Integer) 0:
#line 852 "ml_type_gen.m"
#line 852 "ml_type_gen.m"
            switch (MR_unmkbody(ml_backend__ml_type_gen__Tag_3)) {
#line 852 "ml_type_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 852 "ml_type_gen.m"
              case (MR_Integer) 0:
#line 853 "ml_type_gen.m"
                ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 1;
#line 852 "ml_type_gen.m"
                break;
#line 852 "ml_type_gen.m"
              case (MR_Integer) 1:
#line 880 "ml_type_gen.m"
                ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 0;
#line 852 "ml_type_gen.m"
                break;
#line 852 "ml_type_gen.m"
            }
#line 852 "ml_type_gen.m"
            break;
#line 852 "ml_type_gen.m"
          case (MR_Integer) 1:
#line 852 "ml_type_gen.m"
          case (MR_Integer) 2:
#line 880 "ml_type_gen.m"
            ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 0;
#line 852 "ml_type_gen.m"
            break;
#line 852 "ml_type_gen.m"
          case (MR_Integer) 3:
#line 852 "ml_type_gen.m"
#line 852 "ml_type_gen.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 0)))) {
#line 852 "ml_type_gen.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 852 "ml_type_gen.m"
              case (MR_Integer) 0:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 1:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 2:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 3:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 4:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 5:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 6:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 8:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 9:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 10:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 11:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 12:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 13:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 14:
#line 852 "ml_type_gen.m"
              case (MR_Integer) 15:
#line 880 "ml_type_gen.m"
                ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 0;
#line 852 "ml_type_gen.m"
                break;
#line 852 "ml_type_gen.m"
              case (MR_Integer) 7:
#line 858 "ml_type_gen.m"
                {
#line 858 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__SubTag_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 2)));
#line 858 "ml_type_gen.m"
                  MR_Integer ml_backend__ml_type_gen___ConstNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 1)));

#line 859 "ml_type_gen.m"
                  /* direct tailcall eliminated */
#line 859 "ml_type_gen.m"
                  {
#line 859 "ml_type_gen.m"
                    MR_Word ml_backend__ml_type_gen__Tag__tmp_copy_3 = ml_backend__ml_type_gen__SubTag_37;

#line 859 "ml_type_gen.m"
                    ml_backend__ml_type_gen__Tag_3 = ml_backend__ml_type_gen__Tag__tmp_copy_3;
#line 859 "ml_type_gen.m"
                  }
#line 859 "ml_type_gen.m"
                  continue;
#line 858 "ml_type_gen.m"
                }
#line 852 "ml_type_gen.m"
                break;
#line 852 "ml_type_gen.m"
              case (MR_Integer) 16:
#line 855 "ml_type_gen.m"
                {
#line 855 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen__SubTag_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 2)));
#line 855 "ml_type_gen.m"
                  MR_Word ml_backend__ml_type_gen___RAs_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 1)));

#line 856 "ml_type_gen.m"
                  /* direct tailcall eliminated */
#line 856 "ml_type_gen.m"
                  {
#line 856 "ml_type_gen.m"
                    MR_Word ml_backend__ml_type_gen__Tag__tmp_copy_3 = ml_backend__ml_type_gen__SubTag_6;

#line 856 "ml_type_gen.m"
                    ml_backend__ml_type_gen__Tag_3 = ml_backend__ml_type_gen__Tag__tmp_copy_3;
#line 856 "ml_type_gen.m"
                  }
#line 856 "ml_type_gen.m"
                  continue;
#line 855 "ml_type_gen.m"
                }
#line 852 "ml_type_gen.m"
                break;
#line 852 "ml_type_gen.m"
            }
#line 852 "ml_type_gen.m"
            break;
#line 852 "ml_type_gen.m"
        }
#line 852 "ml_type_gen.m"
        return ml_backend__ml_type_gen__UsesBaseClass_4;
#line 852 "ml_type_gen.m"
      }
#line 852 "ml_type_gen.m"
      break;
#line 852 "ml_type_gen.m"
    }
#line 97 "ml_type_gen.m"
}

#line 86 "ml_type_gen.m"
MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_uses_secondary_tag_4_p_0(
#line 86 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
#line 86 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
#line 86 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Ctor_7,
#line 86 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__SecondaryTag_8)
#line 86 "ml_type_gen.m"
{
#line 570 "ml_type_gen.m"
  {
#line 570 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 570 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TagVal_9;
#line 570 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_10_10;
#line 570 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 2)));
#line 570 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 4)));
#line 570 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__V_21_21;
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___ExistQTVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 0)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 1)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 3)));
#line 601 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen___Ctxt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 5)));
#line 602 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_9;

#line 602 "ml_type_gen.m"
    {
#line 602 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_21_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_21_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_21_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_17));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_21_21, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_19));
#line 602 "ml_type_gen.m"
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__V_21_21, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_5));
#line 602 "ml_type_gen.m"
    }
#line 602 "ml_type_gen.m"
    {
#line 602 "ml_type_gen.m"
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_6, ((MR_Box) (ml_backend__ml_type_gen__V_21_21)), &ml_backend__ml_type_gen__conv0_TagVal_9);
    }
#line 602 "ml_type_gen.m"
    ml_backend__ml_type_gen__TagVal_9 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_9);
#line 572 "ml_type_gen.m"
    {
#line 572 "ml_type_gen.m"
      ml_backend__ml_type_gen__V_10_10 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_9);
    }
#line 572 "ml_type_gen.m"
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__V_10_10)) == (MR_mktag((MR_Integer) 1)));
#line 572 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 572 "ml_type_gen.m"
      *ml_backend__ml_type_gen__SecondaryTag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__V_10_10, (MR_Integer) 0)));
#line 570 "ml_type_gen.m"
    return ml_backend__ml_type_gen__succeeded;
#line 570 "ml_type_gen.m"
  }
#line 86 "ml_type_gen.m"
}

#line 80 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_const_member_decl_flags_0_f_0(void)
#line 80 "ml_type_gen.m"
{
#line 1157 "ml_type_gen.m"
  {
#line 1157 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1157 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

#line 1164 "ml_type_gen.m"
    {
#line 1164 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 1157 "ml_type_gen.m"
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
#line 1157 "ml_type_gen.m"
  }
#line 80 "ml_type_gen.m"
}

#line 75 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_member_decl_flags_0_f_0(void)
#line 75 "ml_type_gen.m"
{
#line 1147 "ml_type_gen.m"
  {
#line 1147 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1147 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

#line 1154 "ml_type_gen.m"
    {
#line 1154 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 1147 "ml_type_gen.m"
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
#line 1147 "ml_type_gen.m"
  }
#line 75 "ml_type_gen.m"
}

#line 71 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_decl_flags_0_f_0(void)
#line 71 "ml_type_gen.m"
{
#line 1167 "ml_type_gen.m"
  {
#line 1167 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1167 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

#line 1174 "ml_type_gen.m"
    {
#line 1174 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
#line 1167 "ml_type_gen.m"
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
#line 1167 "ml_type_gen.m"
  }
#line 71 "ml_type_gen.m"
}

#line 67 "ml_type_gen.m"
MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0(void)
#line 67 "ml_type_gen.m"
{
#line 1136 "ml_type_gen.m"
  {
#line 1136 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1136 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

#line 1144 "ml_type_gen.m"
    {
#line 1144 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
#line 1136 "ml_type_gen.m"
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
#line 1136 "ml_type_gen.m"
  }
#line 67 "ml_type_gen.m"
}

#line 62 "ml_type_gen.m"
MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(
#line 62 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__CompilationTarget_7,
#line 62 "ml_type_gen.m"
  MR_String ml_backend__ml_type_gen__UnqualTypeName_8,
#line 62 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__TypeArity_9,
#line 62 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Name_10,
#line 62 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_11)
#line 62 "ml_type_gen.m"
{
#line 1103 "ml_type_gen.m"
  {
#line 1103 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1103 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__CtorName_12;
#line 1103 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__UnqualName_13;

#line 1104 "ml_type_gen.m"
    {
#line 1104 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__Name_10);
    }
#line 1107 "ml_type_gen.m"
#line 1107 "ml_type_gen.m"
    switch (ml_backend__ml_type_gen__CompilationTarget_7) {
#line 1107 "ml_type_gen.m"
      default:
#line 1107 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = MR_FALSE;
#line 1107 "ml_type_gen.m"
        break;
#line 1107 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 1107 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 1107 "ml_type_gen.m"
        break;
#line 1107 "ml_type_gen.m"
      case (MR_Integer) 2:
#line 1106 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = MR_TRUE;
#line 1107 "ml_type_gen.m"
        break;
#line 1107 "ml_type_gen.m"
    }
#line 1108 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1108 "ml_type_gen.m"
      {
#line 1109 "ml_type_gen.m"
        ml_backend__ml_type_gen__succeeded = (strcmp(ml_backend__ml_type_gen__UnqualName_13, ml_backend__ml_type_gen__UnqualTypeName_8) == 0);
#line 1108 "ml_type_gen.m"
        if (ml_backend__ml_type_gen__succeeded)
#line 1110 "ml_type_gen.m"
          ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_11 == ml_backend__ml_type_gen__TypeArity_9);
#line 1108 "ml_type_gen.m"
      }
#line 1105 "ml_type_gen.m"
    if (ml_backend__ml_type_gen__succeeded)
#line 1116 "ml_type_gen.m"
      {
#line 1116 "ml_type_gen.m"
        {
#line 1116 "ml_type_gen.m"
          ml_backend__ml_type_gen__CtorName_12 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", ml_backend__ml_type_gen__UnqualName_13);
        }
#line 1116 "ml_type_gen.m"
      }
#line 1105 "ml_type_gen.m"
    else
#line 1118 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorName_12 = ml_backend__ml_type_gen__UnqualName_13;
#line 1103 "ml_type_gen.m"
    return ml_backend__ml_type_gen__CtorName_12;
#line 1103 "ml_type_gen.m"
  }
#line 62 "ml_type_gen.m"
}

#line 57 "ml_type_gen.m"
MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(
#line 57 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__CompilationTarget_6,
#line 57 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__TypeCtor_7,
#line 57 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__Name_8,
#line 57 "ml_type_gen.m"
  MR_Integer ml_backend__ml_type_gen__Arity_9)
#line 57 "ml_type_gen.m"
{
#line 1096 "ml_type_gen.m"
  {
#line 1096 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1096 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__CtorName_10;
#line 1096 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__TypeName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TypeCtor_7, (MR_Integer) 0)));
#line 1096 "ml_type_gen.m"
    MR_Integer ml_backend__ml_type_gen__TypeArity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TypeCtor_7, (MR_Integer) 1)));
#line 1096 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__UnqualTypeName_13;

#line 1098 "ml_type_gen.m"
    {
#line 1098 "ml_type_gen.m"
      ml_backend__ml_type_gen__UnqualTypeName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__TypeName_11);
    }
#line 1099 "ml_type_gen.m"
    {
#line 1099 "ml_type_gen.m"
      ml_backend__ml_type_gen__CtorName_10 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(ml_backend__ml_type_gen__CompilationTarget_6, ml_backend__ml_type_gen__UnqualTypeName_13, ml_backend__ml_type_gen__TypeArity_12, ml_backend__ml_type_gen__Name_8, ml_backend__ml_type_gen__Arity_9);
    }
#line 1096 "ml_type_gen.m"
    return ml_backend__ml_type_gen__CtorName_10;
#line 1096 "ml_type_gen.m"
  }
#line 57 "ml_type_gen.m"
}

#line 53 "ml_type_gen.m"
void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(
#line 53 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
#line 53 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__QualifiedTypeName_6,
#line 53 "ml_type_gen.m"
  MR_Integer * ml_backend__ml_type_gen__Arity_5)
#line 53 "ml_type_gen.m"
{
#line 1085 "ml_type_gen.m"
  {
#line 1085 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 1085 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)));
#line 1085 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__ModuleName_7;
#line 1085 "ml_type_gen.m"
    MR_String ml_backend__ml_type_gen__TypeName_8;
#line 1085 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__MLDS_Module_9;

#line 1085 "ml_type_gen.m"
    *ml_backend__ml_type_gen__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
#line 1088 "ml_type_gen.m"
    if (((MR_tag((MR_Word) ml_backend__ml_type_gen__Name_4)) == (MR_mktag((MR_Integer) 1))))
#line 1087 "ml_type_gen.m"
      {
#line 1087 "ml_type_gen.m"
        ml_backend__ml_type_gen__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_4, (MR_Integer) 0)));
#line 1087 "ml_type_gen.m"
        ml_backend__ml_type_gen__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_4, (MR_Integer) 1)));
#line 1087 "ml_type_gen.m"
      }
#line 1088 "ml_type_gen.m"
    else
#line 1090 "ml_type_gen.m"
      {
#line 1090 "ml_type_gen.m"
        ml_backend__ml_type_gen__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Name_4, (MR_Integer) 0)));
#line 1091 "ml_type_gen.m"
        {
#line 1091 "ml_type_gen.m"
          ml_backend__ml_type_gen__ModuleName_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
#line 1090 "ml_type_gen.m"
      }
#line 1093 "ml_type_gen.m"
    {
#line 1093 "ml_type_gen.m"
      ml_backend__ml_type_gen__MLDS_Module_9 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_type_gen__ModuleName_7);
    }
#line 1094 "ml_type_gen.m"
    {
#line 1094 "ml_type_gen.m"
      MR_Word base;
#line 1094 "ml_type_gen.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1094 "ml_type_gen.m"
      *ml_backend__ml_type_gen__QualifiedTypeName_6 = base;
#line 1094 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Module_9));
#line 1094 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 1094 "ml_type_gen.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__TypeName_8));
#line 1094 "ml_type_gen.m"
    }
#line 1085 "ml_type_gen.m"
  }
#line 53 "ml_type_gen.m"
}

#line 147 "ml_type_gen.m"
static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0_1(
#line 147 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__closure_arg,
#line 147 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
#line 147 "ml_type_gen.m"
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
#line 147 "ml_type_gen.m"
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3)
#line 147 "ml_type_gen.m"
{
#line 147 "ml_type_gen.m"
  {
#line 147 "ml_type_gen.m"
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
#line 147 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12;

#line 147 "ml_type_gen.m"
    {
#line 147 "ml_type_gen.m"
      ml_backend__ml_type_gen__ml_gen_type_defn_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12);
    }
#line 147 "ml_type_gen.m"
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12));
#line 147 "ml_type_gen.m"
  }
#line 147 "ml_type_gen.m"
}

#line 48 "ml_type_gen.m"
void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0(
#line 48 "ml_type_gen.m"
  MR_Word ml_backend__ml_type_gen__ModuleInfo_3,
#line 48 "ml_type_gen.m"
  MR_Word * ml_backend__ml_type_gen__Defns_4)
#line 48 "ml_type_gen.m"
{
#line 140 "ml_type_gen.m"
  {
#line 140 "ml_type_gen.m"
    MR_bool ml_backend__ml_type_gen__succeeded;
#line 140 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__Globals_5;
#line 140 "ml_type_gen.m"
    MR_Word ml_backend__ml_type_gen__HighLevelData_6;

#line 141 "ml_type_gen.m"
    {
#line 141 "ml_type_gen.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__Globals_5);
    }
#line 142 "ml_type_gen.m"
    {
#line 142 "ml_type_gen.m"
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_type_gen__Globals_5, (MR_Integer) 253, &ml_backend__ml_type_gen__HighLevelData_6);
    }
#line 148 "ml_type_gen.m"
#line 148 "ml_type_gen.m"
    switch (ml_backend__ml_type_gen__HighLevelData_6) {
#line 148 "ml_type_gen.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 148 "ml_type_gen.m"
      case (MR_Integer) 0:
#line 150 "ml_type_gen.m"
        *ml_backend__ml_type_gen__Defns_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "ml_type_gen.m"
        break;
#line 148 "ml_type_gen.m"
      case (MR_Integer) 1:
#line 144 "ml_type_gen.m"
        {
#line 144 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TypeTable_7;
#line 144 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__TypeCtorDefns_8;
#line 144 "ml_type_gen.m"
          MR_Word ml_backend__ml_type_gen__V_10_10;
#line 147 "ml_type_gen.m"
          MR_Box ml_backend__ml_type_gen__conv1_Defns_4;

#line 145 "ml_type_gen.m"
          {
#line 145 "ml_type_gen.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__TypeTable_7);
          }
#line 146 "ml_type_gen.m"
          {
#line 146 "ml_type_gen.m"
            hlds__hlds_data__get_all_type_ctor_defns_2_p_0(ml_backend__ml_type_gen__TypeTable_7, &ml_backend__ml_type_gen__TypeCtorDefns_8);
          }
#line 147 "ml_type_gen.m"
          {
#line 147 "ml_type_gen.m"
            ml_backend__ml_type_gen__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 147 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_10_10, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[0]));
#line 147 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_10_10, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_types_2_p_0_1));
#line 147 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 147 "ml_type_gen.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__V_10_10, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_3));
#line 147 "ml_type_gen.m"
          }
#line 147 "ml_type_gen.m"
          {
#line 147 "ml_type_gen.m"
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__ml_type_gen_scalar_common_1[0], (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[0], ml_backend__ml_type_gen__V_10_10, ml_backend__ml_type_gen__TypeCtorDefns_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv1_Defns_4);
          }
#line 147 "ml_type_gen.m"
          *ml_backend__ml_type_gen__Defns_4 = ((MR_Word) ml_backend__ml_type_gen__conv1_Defns_4);
#line 144 "ml_type_gen.m"
        }
#line 148 "ml_type_gen.m"
        break;
#line 148 "ml_type_gen.m"
    }
#line 140 "ml_type_gen.m"
  }
#line 48 "ml_type_gen.m"
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
