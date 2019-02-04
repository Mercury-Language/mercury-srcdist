/*
** Automatically generated from `ml_type_gen.m'
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



struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s {
  MR_bool ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RAs_71;
  jmp_buf ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_112;
  MR_Box ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__conv12_RA_112;
};


static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0;

static const MR_PseudoTypeInfo ml_backend__ml_type_gen__ml_backend__ml_type_gen__field_types_mlds_field_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_stag_ordered_mlds_field_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_ptag_ordered_mlds_field_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_name_ordered_mlds_field_info_0[1];

static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_mlds_field_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_value_ordered_tag_uses_base_class_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0[2];

static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0[2];

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____mlds_field_info_0_0_10001(
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_type_gen____Compare____mlds_field_info_0_0_10001(
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1283__1_2_p_0(
  MR_Integer ml_backend__ml_type_gen__Arity_18,
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_72);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__366__1_2_p_0(
  MR_Integer ml_backend__ml_type_gen__Arity_17,
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_67);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg);

static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
  MR_Word ml_backend__ml_type_gen__Mapping_9,
  MR_Word ml_backend__ml_type_gen__TagValues_10,
  MR_Word ml_backend__ml_type_gen__MLDS_Type_11,
  MR_Word ml_backend__ml_type_gen__Ctor_12,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_60,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_61);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(
  MR_Word ml_backend__ml_type_gen___ModuleInfo_5,
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_type_gen__Context_9,
  MR_Word ml_backend__ml_type_gen__Arg_10,
  MR_Word * ml_backend__ml_type_gen__Defn_11,
  MR_Word * ml_backend__ml_type_gen__FieldInfo_12,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_18,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_19);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_type_gen__Context_9,
  MR_Word ml_backend__ml_type_gen__TypeVar_10,
  MR_Word * ml_backend__ml_type_gen__Defn_11,
  MR_Word * ml_backend__ml_type_gen__FieldInfo_12,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_type_gen__Context_9,
  MR_Word ml_backend__ml_type_gen__Constraint_10,
  MR_Word * ml_backend__ml_type_gen__Defn_11,
  MR_Word * ml_backend__ml_type_gen__FieldInfo_12,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_16);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_5_f_0(
  MR_Word ml_backend__ml_type_gen__Target_7,
  MR_Word ml_backend__ml_type_gen__BaseClassId_8,
  MR_Word ml_backend__ml_type_gen__ClassType_9,
  MR_Word ml_backend__ml_type_gen__ClassQualifier_10,
  MR_Word ml_backend__ml_type_gen__FieldInfo_11);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
  MR_Word ml_backend__ml_type_gen__FieldInfo_3);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_3(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_2(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_4(
  void * ml_backend__ml_type_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_6(
  void * ml_backend__ml_type_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_5(
  void * ml_backend__ml_type_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_7(
  void * ml_backend__ml_type_gen__env_ptr_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_13,
  MR_Word ml_backend__ml_type_gen__BaseClassId_14,
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_15,
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_16,
  MR_Word ml_backend__ml_type_gen__TypeCtor_17,
  MR_Word ml_backend__ml_type_gen__TypeDefn_18,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_19,
  MR_Word ml_backend__ml_type_gen__Ctor_20,
  MR_Word ml_backend__ml_type_gen__MLDS_Members0_21,
  MR_Word * ml_backend__ml_type_gen__MLDS_Members_22,
  MR_Word ml_backend__ml_type_gen__MLDS_CtorMethods0_23,
  MR_Word * ml_backend__ml_type_gen__MLDS_CtorMethods_24);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(
  MR_Word ml_backend__ml_type_gen__MLDS_Context_8,
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_9,
  MR_Word ml_backend__ml_type_gen__BaseClassId_10,
  MR_Word ml_backend__ml_type_gen__Members_11,
  MR_Word ml_backend__ml_type_gen__Target_12,
  MR_Word * ml_backend__ml_type_gen__MLDS_TypeDefn_13,
  MR_Word * ml_backend__ml_type_gen__SecondaryTagClassId_14);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
  MR_Word ml_backend__ml_type_gen__Ctor_7);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word * ml_backend__ml_type_gen__RA_2);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_tag_constant_4_f_0(
  MR_Word ml_backend__ml_type_gen__Context_6,
  MR_Word ml_backend__ml_type_gen__TypeCtor_7,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_8,
  MR_Word ml_backend__ml_type_gen__Ctor_9);

static void MR_CALL 
ml_backend__ml_type_gen__ml_num_ctors_that_need_secondary_tag_7_p_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_type_gen__HeadVar__3_3,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_0_4,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_5,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_0_6,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_7);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_parent_type_8_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_parent_type_8_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
  MR_Word ml_backend__ml_type_gen__Ctors_12,
  MR_Word ml_backend__ml_type_gen__TagValues_13,
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_46,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_47);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0(
  MR_Word ml_backend__ml_type_gen__Context_7,
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_9,
  MR_Word ml_backend__ml_type_gen__MLDS_Type_10,
  MR_Word ml_backend__ml_type_gen__Ctor_11);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(
  MR_Word ml_backend__ml_type_gen__Target_9,
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
  MR_Word ml_backend__ml_type_gen__Ctors_12,
  MR_Word ml_backend__ml_type_gen__TagValues_13,
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_4_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_5,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_1[3][3];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[8][2];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[2][7];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[2][5];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[2][9];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[4][1];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_7[1][15];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_8[4][10];




static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_1[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[0])),
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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[8][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_2[3])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_2[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "tag_type")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[2][7] = {
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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&libs__globals__libs__globals__type_ctor_info_compilation_target_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
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
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "<constructor>"))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_2[4])))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_2[6])))
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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_8[4][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
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



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

static const MR_FA_TypeInfo_Struct2 ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &ml_backend__ml_type_gen__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_type_ctor_0hlds__hlds_data__type_ctor_info_hlds_type_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_type_gen__ml_backend__ml_type_gen__field_types_mlds_field_info_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_var_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_gc_statement_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_context_0
};

static const MR_DuFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0 = {
  (MR_String) "mlds_field_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_type_gen__ml_backend__ml_type_gen__field_types_mlds_field_info_0_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_stag_ordered_mlds_field_info_0_0[1] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_ptag_ordered_mlds_field_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_stag_ordered_mlds_field_info_0_0
  }
};

static const MR_DuFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_name_ordered_mlds_field_info_0[1] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0
};

static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_mlds_field_info_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_type_gen____Unify____mlds_field_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_type_gen____Compare____mlds_field_info_0_0_10001)),
  (MR_String) "ml_backend.ml_type_gen",
  (MR_String) "mlds_field_info",
  {     ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_name_ordered_mlds_field_info_0 },
  {     ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_ptag_ordered_mlds_field_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_mlds_field_info_0
};

static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0 = {
  (MR_String) "tag_does_not_use_base_class",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1 = {
  (MR_String) "tag_uses_base_class",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_value_ordered_tag_uses_base_class_0[2] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0,
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1
};

static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0[2] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0,
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1
};

static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_tag_uses_base_class_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
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

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____mlds_field_info_0_0_10001(
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;

    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen____Unify____mlds_field_info_0_0(((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2));
    }
    return ml_backend__ml_type_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen____Compare____mlds_field_info_0_0_10001(
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_type_gen__conv0_HeadVar__1_1;

    {
      ml_backend__ml_type_gen____Compare____mlds_field_info_0_0(&ml_backend__ml_type_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_3));
    }
    *ml_backend__ml_type_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_type_gen__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;

    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2));
    }
    return ml_backend__ml_type_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_3)
{
  {
    MR_Word ml_backend__ml_type_gen__conv0_HeadVar__1_1;

    {
      ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(&ml_backend__ml_type_gen__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_3));
    }
    *ml_backend__ml_type_gen__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_type_gen__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_61;

    {
      ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_61);
    }
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ExportConstants_61));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Lang_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__Context_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen__TypeCtor_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 2)));
    MR_Word ml_backend__ml_type_gen__Mapping_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_7, (MR_Integer) 3)));
    MR_Word ml_backend__ml_type_gen__TypeDefn_13;
    MR_Word ml_backend__ml_type_gen__TypeBody_14;

    {
      hlds__hlds_data__lookup_type_ctor_defn_3_p_0(ml_backend__ml_type_gen__TypeTable_6, ml_backend__ml_type_gen__TypeCtor_11, &ml_backend__ml_type_gen__TypeDefn_13);
    }
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_type_gen__TypeDefn_13, &ml_backend__ml_type_gen__TypeBody_14);
    }
    switch (MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_exported_enum\'/4", (MR_String) "invalid type");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_type_gen__Ctors_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 0)));
          MR_Word ml_backend__ml_type_gen__TagValues_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 1)));
          MR_Word ml_backend__ml_type_gen__QualifiedClassName_29;
          MR_Integer ml_backend__ml_type_gen__MLDS_ClassArity_30;
          MR_Word ml_backend__ml_type_gen__MLDS_Type_31;
          MR_Word ml_backend__ml_type_gen__ExportConstants_32;
          MR_Word ml_backend__ml_type_gen__Var_34;
          MR_Word ml_backend__ml_type_gen___CheaperTagTest_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 2)));
          MR_Word ml_backend__ml_type_gen___IsEnumOrDummy_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 3)));
          MR_Word ml_backend__ml_type_gen___MaybeUserEq_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 4)));
          MR_Word ml_backend__ml_type_gen___MaybeDirectArgCtors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 5)));
          MR_Word ml_backend__ml_type_gen___ReservedTag_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word ml_backend__ml_type_gen___ReservedAddr_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word ml_backend__ml_type_gen___IsForeignType_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_14, (MR_Integer) 7)));
          MR_Box ml_backend__ml_type_gen__conv1_ExportConstants_32;

          {
            ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_11, &ml_backend__ml_type_gen__QualifiedClassName_29, &ml_backend__ml_type_gen__MLDS_ClassArity_30);
          }
          {
            ml_backend__ml_type_gen__MLDS_Type_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualifiedClassName_29));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_30));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_31, 3) = ((MR_Box) ((MR_Integer) 4));
          }
          {
            ml_backend__ml_type_gen__Var_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_34, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[3]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_34, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_11));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_34, 4) = ((MR_Box) (ml_backend__ml_type_gen__Mapping_12));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_34, 5) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_21));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_34, 6) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_31));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[2], ml_backend__ml_type_gen__Var_34, ml_backend__ml_type_gen__Ctors_20, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv1_ExportConstants_32);
          }
          ml_backend__ml_type_gen__ExportConstants_32 = ((MR_Word) ml_backend__ml_type_gen__conv1_ExportConstants_32);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            *ml_backend__ml_type_gen__MLDS_ExportedEnum_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Lang_9));
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_10));
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_11));
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__ExportConstants_32));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_exported_enum\'/4", (MR_String) "invalid type");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_exported_enum\'/4", (MR_String) "invalid type");
            return;
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1283__1_2_p_0(
  MR_Integer ml_backend__ml_type_gen__Arity_18,
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_72)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_18 == ml_backend__ml_type_gen__HeadVar__2_72);

    return ml_backend__ml_type_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__366__1_2_p_0(
  MR_Integer ml_backend__ml_type_gen__Arity_17,
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_67)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_17 == ml_backend__ml_type_gen__HeadVar__2_67);

    return ml_backend__ml_type_gen__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(
  MR_Word * ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_type_gen__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Integer ml_backend__ml_type_gen__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__2_2;
    MR_Integer ml_backend__ml_type_gen__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_type_gen__HeadVar__1_1, ml_backend__ml_type_gen__Cast_HeadVar1_4, ml_backend__ml_type_gen__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__2_1,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__HeadVar__2_1 == ml_backend__ml_type_gen__HeadVar__2_2);

    return ml_backend__ml_type_gen__succeeded;
  }
}

void MR_CALL 
ml_backend__ml_type_gen____Compare____mlds_field_info_0_0(
  MR_Word * ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_type_gen__HeadVar__3_3)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Integer ml_backend__ml_type_gen__CastX_15 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__2_2;
    MR_Integer ml_backend__ml_type_gen__CastY_16 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__3_3;

    ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__CastX_15 == ml_backend__ml_type_gen__CastY_16);
    if (ml_backend__ml_type_gen__succeeded)
      *ml_backend__ml_type_gen__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word ml_backend__ml_type_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_type_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_type_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_type_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_type_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_type_gen__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_type_gen__Var_12;

        {
          ml_backend__mlds____Compare____mlds_var_name_0_0(&ml_backend__ml_type_gen__Var_12, ml_backend__ml_type_gen__Var_4, ml_backend__ml_type_gen__Var_8);
        }
        ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Var_12 == (MR_Integer) 0);
        ml_backend__ml_type_gen__succeeded = !(ml_backend__ml_type_gen__succeeded);
        if (ml_backend__ml_type_gen__succeeded)
          *ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__Var_12;
        else
          {
            MR_Word ml_backend__ml_type_gen__Var_13;

            {
              ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_type_gen__Var_13, ml_backend__ml_type_gen__Var_5, ml_backend__ml_type_gen__Var_9);
            }
            ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Var_13 == (MR_Integer) 0);
            ml_backend__ml_type_gen__succeeded = !(ml_backend__ml_type_gen__succeeded);
            if (ml_backend__ml_type_gen__succeeded)
              *ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__Var_13;
            else
              {
                MR_Word ml_backend__ml_type_gen__Var_14;

                {
                  ml_backend__mlds____Compare____mlds_gc_statement_0_0(&ml_backend__ml_type_gen__Var_14, ml_backend__ml_type_gen__Var_6, ml_backend__ml_type_gen__Var_10);
                }
                ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Var_14 == (MR_Integer) 0);
                ml_backend__ml_type_gen__succeeded = !(ml_backend__ml_type_gen__succeeded);
                if (ml_backend__ml_type_gen__succeeded)
                  *ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__Var_14;
                else
                  {
                    ml_backend__mlds____Compare____mlds_context_0_0(ml_backend__ml_type_gen__HeadVar__1_1, ml_backend__ml_type_gen__Var_7, ml_backend__ml_type_gen__Var_11);
                  }
              }
          }
      }
  }
}

MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____mlds_field_info_0_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Integer ml_backend__ml_type_gen__CastX_11 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__1_1;
    MR_Integer ml_backend__ml_type_gen__CastY_12 = (MR_Integer) ml_backend__ml_type_gen__HeadVar__2_2;

    ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__CastX_11 == ml_backend__ml_type_gen__CastY_12);
    if (ml_backend__ml_type_gen__succeeded)
      ml_backend__ml_type_gen__succeeded = MR_TRUE;
    else
      {
        MR_Word ml_backend__ml_type_gen__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_type_gen__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_type_gen__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_type_gen__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_type_gen__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_type_gen__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 3)));

        {
          ml_backend__ml_type_gen__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_type_gen__Var_3, ml_backend__ml_type_gen__Var_7);
        }
        if (ml_backend__ml_type_gen__succeeded)
          {
            {
              ml_backend__ml_type_gen__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_type_gen__Var_4, ml_backend__ml_type_gen__Var_8);
            }
            if (ml_backend__ml_type_gen__succeeded)
              {
                {
                  ml_backend__ml_type_gen__succeeded = ml_backend__mlds____Unify____mlds_gc_statement_0_0(ml_backend__ml_type_gen__Var_5, ml_backend__ml_type_gen__Var_9);
                }
                if (ml_backend__ml_type_gen__succeeded)
                  {
                    ml_backend__ml_type_gen__succeeded = ml_backend__mlds____Unify____mlds_context_0_0(ml_backend__ml_type_gen__Var_6, ml_backend__ml_type_gen__Var_10);
                  }
              }
          }
      }
    return ml_backend__ml_type_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;

    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1283__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_type_gen__succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
  MR_Word ml_backend__ml_type_gen__Mapping_9,
  MR_Word ml_backend__ml_type_gen__TagValues_10,
  MR_Word ml_backend__ml_type_gen__MLDS_Type_11,
  MR_Word ml_backend__ml_type_gen__Ctor_12,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_60,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_61)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__QualName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 2)));
    MR_Integer ml_backend__ml_type_gen__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 4)));
    MR_Word ml_backend__ml_type_gen__TagVal_20;
    MR_Word ml_backend__ml_type_gen__ConstValue_22;
    MR_String ml_backend__ml_type_gen__UnqualName_56;
    MR_Word ml_backend__ml_type_gen__UnqualSymName_57;
    MR_String ml_backend__ml_type_gen__ForeignName_58;
    MR_Word ml_backend__ml_type_gen__ExportConstant_59;
    MR_Word ml_backend__ml_type_gen__Var_62;
    MR_Word ml_backend__ml_type_gen__Var_68;
    MR_Word ml_backend__ml_type_gen__Var_73;
    MR_Word ml_backend__ml_type_gen__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen___Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 3)));
    MR_Word ml_backend__ml_type_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_12, (MR_Integer) 5)));
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_20;
    MR_Box ml_backend__ml_type_gen__conv1_ForeignName_58;

    {
      ml_backend__ml_type_gen__Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_62, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualName_16));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_62, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_62, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_8));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__TagValues_10, ((MR_Box) (ml_backend__ml_type_gen__Var_62)), &ml_backend__ml_type_gen__conv0_TagVal_20);
    }
    ml_backend__ml_type_gen__TagVal_20 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_20);
    switch (MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
            return;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__ml_type_gen__Int_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 1)));
              MR_Word ml_backend__ml_type_gen__Var_67;

              {
                ml_backend__ml_type_gen__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_67, 1) = ((MR_Box) (ml_backend__ml_type_gen__Int_21));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_67, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_11));
              }
              {
                ml_backend__ml_type_gen__ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_67));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_type_gen__Lang_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 1)));
              MR_String ml_backend__ml_type_gen__String_24 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 2)));
              MR_Word ml_backend__ml_type_gen__Var_66;

              {
                ml_backend__ml_type_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_type_gen__Lang_23));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 2) = ((MR_Box) (ml_backend__ml_type_gen__String_24));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_11));
              }
              {
                ml_backend__ml_type_gen__ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_66));
              }
            }
            break;
        }
        break;
    }
    {
      ml_backend__ml_type_gen__Var_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_68, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_68, 1) = ((MR_Box) (ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_68, 3) = ((MR_Box) (ml_backend__ml_type_gen__Arity_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_68, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(ml_backend__ml_type_gen__Var_68, (MR_String) "ml_backend.ml_type_gen", (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant arity != 0");
    }
    {
      ml_backend__ml_type_gen__UnqualName_56 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__QualName_16);
    }
    {
      ml_backend__ml_type_gen__UnqualSymName_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__UnqualSymName_57, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualName_56));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ml_backend__ml_type_gen__Mapping_9, ((MR_Box) (ml_backend__ml_type_gen__UnqualSymName_57)), &ml_backend__ml_type_gen__conv1_ForeignName_58);
    }
    ml_backend__ml_type_gen__ForeignName_58 = ((MR_String) ml_backend__ml_type_gen__conv1_ForeignName_58);
    {
      ml_backend__ml_type_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_73, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_22));
    }
    {
      ml_backend__ml_type_gen__ExportConstant_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportConstant_59, 0) = ((MR_Box) (ml_backend__ml_type_gen__ForeignName_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportConstant_59, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_73));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_61 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__ExportConstant_59));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_ExportConstants_0_60));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(
  MR_Word ml_backend__ml_type_gen___ModuleInfo_5,
  MR_Word ml_backend__ml_type_gen__TypeTable_6,
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_7,
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_8)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;

    {
      ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_101_120_112_111_114_116_101_100_95_101_110_117_109_95_95_91_49_93_95_48_4_p_0(ml_backend__ml_type_gen__TypeTable_6, ml_backend__ml_type_gen__ExportedEnumInfo_7, ml_backend__ml_type_gen__MLDS_ExportedEnum_8);
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_type_gen__Context_9,
  MR_Word ml_backend__ml_type_gen__Arg_10,
  MR_Word * ml_backend__ml_type_gen__Defn_11,
  MR_Word * ml_backend__ml_type_gen__FieldInfo_12,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_18,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_19)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__MaybeFieldName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_10, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_10, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen__Width_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_10, (MR_Integer) 2)));
    MR_Word ml_backend__ml_type_gen__MLDS_Type_31;
    MR_String ml_backend__ml_type_gen__FieldName_32;
    MR_Word ml_backend__ml_type_gen__FieldVarName_33;
    MR_Word ml_backend__ml_type_gen__DataName_34;
    MR_Word ml_backend__ml_type_gen__Name_35;
    MR_Word ml_backend__ml_type_gen__GcStmt_36;
    MR_Word ml_backend__ml_type_gen__EntityDefn_37;
    MR_Word ml_backend__ml_type_gen__DeclFlags_38;
    MR_Word ml_backend__ml_type_gen__MLDS_Context_39;
    MR_Word ml_backend__ml_type_gen__Var_40;
    MR_Word ml_backend__ml_type_gen___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_10, (MR_Integer) 3)));

    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_15, ml_backend__ml_type_gen__Width_16);
    }
    if (ml_backend__ml_type_gen__succeeded)
      ml_backend__ml_type_gen__MLDS_Type_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      {
        ml_backend__ml_type_gen__MLDS_Type_31 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_15);
      }
    {
      ml_backend__ml_type_gen__FieldName_32 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(ml_backend__ml_type_gen__MaybeFieldName_14, ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_18);
    }
    {
      ml_backend__ml_type_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_40, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_32));
    }
    {
      ml_backend__ml_type_gen__FieldVarName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_33, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_40));
    }
    {
      ml_backend__ml_type_gen__DataName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_33));
    }
    {
      ml_backend__ml_type_gen__Name_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_35, 0) = ((MR_Box) (ml_backend__ml_type_gen__DataName_34));
    }
    ml_backend__ml_type_gen__GcStmt_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_type_gen__EntityDefn_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_31));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_36));
    }
    {
      ml_backend__ml_type_gen__DeclFlags_38 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
    {
      ml_backend__ml_type_gen__MLDS_Context_39 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__Defn_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_35));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_39));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_38));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_39));
    }
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_19 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_18 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_type_gen__Context_9,
  MR_Word ml_backend__ml_type_gen__TypeVar_10,
  MR_Word * ml_backend__ml_type_gen__Defn_11,
  MR_Word * ml_backend__ml_type_gen__FieldInfo_12,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Type_15;
    MR_Word ml_backend__ml_type_gen__Var_18;
    MR_Word ml_backend__ml_type_gen__MLDS_Type_32;
    MR_String ml_backend__ml_type_gen__FieldName_33;
    MR_Word ml_backend__ml_type_gen__FieldVarName_34;
    MR_Word ml_backend__ml_type_gen__DataName_35;
    MR_Word ml_backend__ml_type_gen__Name_36;
    MR_Word ml_backend__ml_type_gen__GcStmt_37;
    MR_Word ml_backend__ml_type_gen__EntityDefn_38;
    MR_Word ml_backend__ml_type_gen__DeclFlags_39;
    MR_Word ml_backend__ml_type_gen__MLDS_Context_40;
    MR_Word ml_backend__ml_type_gen__Var_41;

    {
      ml_backend__ml_type_gen__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_18, 0) = ((MR_Box) (ml_backend__ml_type_gen__TypeVar_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__polymorphism__build_type_info_type_2_p_0(ml_backend__ml_type_gen__Var_18, &ml_backend__ml_type_gen__Type_15);
    }
    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    if (ml_backend__ml_type_gen__succeeded)
      ml_backend__ml_type_gen__MLDS_Type_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      {
        ml_backend__ml_type_gen__MLDS_Type_32 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_15);
      }
    {
      ml_backend__ml_type_gen__FieldName_33 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16);
    }
    {
      ml_backend__ml_type_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_33));
    }
    {
      ml_backend__ml_type_gen__FieldVarName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_41));
    }
    {
      ml_backend__ml_type_gen__DataName_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_35, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_34));
    }
    {
      ml_backend__ml_type_gen__Name_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_36, 0) = ((MR_Box) (ml_backend__ml_type_gen__DataName_35));
    }
    ml_backend__ml_type_gen__GcStmt_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_type_gen__EntityDefn_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_38, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_32));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_38, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_37));
    }
    {
      ml_backend__ml_type_gen__DeclFlags_39 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
    {
      ml_backend__ml_type_gen__MLDS_Context_40 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__Defn_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_36));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_40));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_39));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_38));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_40));
    }
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_17 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_8,
  MR_Word ml_backend__ml_type_gen__Context_9,
  MR_Word ml_backend__ml_type_gen__Constraint_10,
  MR_Word * ml_backend__ml_type_gen__Defn_11,
  MR_Word * ml_backend__ml_type_gen__FieldInfo_12,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_16)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Type_14;
    MR_Word ml_backend__ml_type_gen__MLDS_Type_30;
    MR_String ml_backend__ml_type_gen__FieldName_31;
    MR_Word ml_backend__ml_type_gen__FieldVarName_32;
    MR_Word ml_backend__ml_type_gen__DataName_33;
    MR_Word ml_backend__ml_type_gen__Name_34;
    MR_Word ml_backend__ml_type_gen__GcStmt_35;
    MR_Word ml_backend__ml_type_gen__EntityDefn_36;
    MR_Word ml_backend__ml_type_gen__DeclFlags_37;
    MR_Word ml_backend__ml_type_gen__MLDS_Context_38;
    MR_Word ml_backend__ml_type_gen__Var_39;

    {
      check_hlds__polymorphism__build_typeclass_info_type_2_p_0(ml_backend__ml_type_gen__Constraint_10, &ml_backend__ml_type_gen__Type_14);
    }
    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    if (ml_backend__ml_type_gen__succeeded)
      ml_backend__ml_type_gen__MLDS_Type_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      {
        ml_backend__ml_type_gen__MLDS_Type_30 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_14);
      }
    {
      ml_backend__ml_type_gen__FieldName_31 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_15);
    }
    {
      ml_backend__ml_type_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_39, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_31));
    }
    {
      ml_backend__ml_type_gen__FieldVarName_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_39));
    }
    {
      ml_backend__ml_type_gen__DataName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_33, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_32));
    }
    {
      ml_backend__ml_type_gen__Name_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_34, 0) = ((MR_Box) (ml_backend__ml_type_gen__DataName_33));
    }
    ml_backend__ml_type_gen__GcStmt_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_type_gen__EntityDefn_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_36, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_30));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_36, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_35));
    }
    {
      ml_backend__ml_type_gen__DeclFlags_37 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
    {
      ml_backend__ml_type_gen__MLDS_Context_38 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_9);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__Defn_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Name_34));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_38));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_36));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_30));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_38));
    }
    *ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_16 = (ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_15 + (MR_Integer) 1);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_5_f_0(
  MR_Word ml_backend__ml_type_gen__Target_7,
  MR_Word ml_backend__ml_type_gen__BaseClassId_8,
  MR_Word ml_backend__ml_type_gen__ClassType_9,
  MR_Word ml_backend__ml_type_gen__ClassQualifier_10,
  MR_Word ml_backend__ml_type_gen__FieldInfo_11)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Statement_12;
    MR_Word ml_backend__ml_type_gen__VarName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_11, (MR_Integer) 3)));
    MR_String ml_backend__ml_type_gen__Name_17;
    MR_Word ml_backend__ml_type_gen__QualVarName_24;
    MR_Word ml_backend__ml_type_gen__Param_25;
    MR_Word ml_backend__ml_type_gen__Field_26;
    MR_Word ml_backend__ml_type_gen__Var_33;
    MR_Word ml_backend__ml_type_gen__Var_36;
    MR_Word ml_backend__ml_type_gen__Var_37;
    MR_Word ml_backend__ml_type_gen__Var_38;
    MR_Word ml_backend__ml_type_gen__Var_40;
    MR_Word ml_backend__ml_type_gen__Var_41;
    MR_Word ml_backend__ml_type_gen__Var_42;
    MR_Word ml_backend__ml_type_gen___GcStmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_11, (MR_Integer) 2)));

    {
      ml_backend__ml_type_gen__Name_17 = ml_backend__mlds__ml_var_name_to_string_1_f_0(ml_backend__ml_type_gen__VarName_13);
    }
    switch (ml_backend__ml_type_gen__Target_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ml_backend__ml_type_gen__QualVarName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_10));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_13));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_type_gen__ModuleName_19;
          MR_Word ml_backend__ml_type_gen__Var_28;
          MR_Integer ml_backend__ml_type_gen__Var_22;
          MR_Word ml_backend__ml_type_gen__Var_23;
          MR_Word ml_backend__ml_type_gen__Var_20;
          MR_String ml_backend__ml_type_gen__Var_21;

          ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (ml_backend__ml_type_gen__succeeded)
            {
              ml_backend__ml_type_gen__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 1)));
              ml_backend__ml_type_gen__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 2)));
              ml_backend__ml_type_gen__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 3)));
              ml_backend__ml_type_gen__ModuleName_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_28, (MR_Integer) 0)));
              ml_backend__ml_type_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_28, (MR_Integer) 1)));
              ml_backend__ml_type_gen__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_28, (MR_Integer) 2)));
              ml_backend__ml_type_gen__succeeded = MR_TRUE;
            }
          if (ml_backend__ml_type_gen__succeeded)
            {
              {
                ml_backend__ml_type_gen__QualVarName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__ModuleName_19));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_13));
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
              }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_type_gen__RequiresQualifiedParams_49;
          MR_Box ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_49;

          {
            ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_49 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_requires_module_qualified_params\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_type_gen__RequiresQualifiedParams_49 = ((MR_Word) ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_49);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_type_gen__ModuleName_65;
          MR_Word ml_backend__ml_type_gen__Var_60;
          MR_Integer ml_backend__ml_type_gen__Var_52;
          MR_Word ml_backend__ml_type_gen__Var_53;
          MR_Word ml_backend__ml_type_gen__Var_54;
          MR_String ml_backend__ml_type_gen__Var_55;

          ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (ml_backend__ml_type_gen__succeeded)
            {
              ml_backend__ml_type_gen__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 1)));
              ml_backend__ml_type_gen__Var_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 2)));
              ml_backend__ml_type_gen__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 3)));
              ml_backend__ml_type_gen__ModuleName_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_60, (MR_Integer) 0)));
              ml_backend__ml_type_gen__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_60, (MR_Integer) 1)));
              ml_backend__ml_type_gen__Var_55 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_60, (MR_Integer) 2)));
              ml_backend__ml_type_gen__succeeded = MR_TRUE;
            }
          if (ml_backend__ml_type_gen__succeeded)
            {
              {
                ml_backend__ml_type_gen__QualVarName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__ModuleName_65));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_13));
              }
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
              }
            }
        }
        break;
    }
    {
      ml_backend__ml_type_gen__Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_33, 0) = ((MR_Box) (ml_backend__ml_type_gen__QualVarName_24));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_33, 1) = ((MR_Box) (ml_backend__ml_type_gen__Type_14));
    }
    {
      ml_backend__ml_type_gen__Param_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Param_25, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_33));
    }
    {
      ml_backend__ml_type_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_36, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_9));
    }
    {
      ml_backend__ml_type_gen__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 2) = ((MR_Box) (ml_backend__ml_type_gen__Name_17));
    }
    {
      ml_backend__ml_type_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_40, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_9));
    }
    {
      ml_backend__ml_type_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_38));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_40));
    }
    {
      ml_backend__ml_type_gen__Field_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[0])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_36));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_37));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 3) = ((MR_Box) (ml_backend__ml_type_gen__Type_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_8));
    }
    {
      ml_backend__ml_type_gen__Var_42 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_42, 0) = ((MR_Box) (ml_backend__ml_type_gen__Field_26));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_42, 1) = ((MR_Box) (ml_backend__ml_type_gen__Param_25));
    }
    {
      ml_backend__ml_type_gen__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_41, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_42));
    }
    {
      ml_backend__ml_type_gen__Statement_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Statement_12, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_41));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Statement_12, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
    }
    return ml_backend__ml_type_gen__Statement_12;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
  MR_Word ml_backend__ml_type_gen__FieldInfo_3)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Arg_4;
    MR_Word ml_backend__ml_type_gen__VarName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen__GcStmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_type_gen___Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_3, (MR_Integer) 3)));

    {
      ml_backend__ml_type_gen__Arg_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_4, 0) = ((MR_Box) (ml_backend__ml_type_gen__VarName_5));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_4, 1) = ((MR_Box) (ml_backend__ml_type_gen__Type_6));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_4, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_7));
    }
    return ml_backend__ml_type_gen__Arg_4;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__HeadVar__2_2;

    switch (ml_backend__ml_type_gen__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        {
          MR_Box ml_backend__ml_type_gen__conv0_HeadVar__2_2;

          {
            ml_backend__ml_type_gen__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_uses_empty_base_classes\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_type_gen__HeadVar__2_2 = ((MR_Word) ml_backend__ml_type_gen__conv0_HeadVar__2_2);
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return ml_backend__ml_type_gen__HeadVar__2_2;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_3(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv10_Defn_11;
    MR_Word ml_backend__ml_type_gen__conv9_FieldInfo_12;
    MR_Integer ml_backend__ml_type_gen__conv8_STATE_VARIABLE_ArgNum_19;

    {
      ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv10_Defn_11, &ml_backend__ml_type_gen__conv9_FieldInfo_12, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_4), &ml_backend__ml_type_gen__conv8_STATE_VARIABLE_ArgNum_19);
    }
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv10_Defn_11));
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv9_FieldInfo_12));
    *ml_backend__ml_type_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_type_gen__conv8_STATE_VARIABLE_ArgNum_19));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_2(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv6_Defn_11;
    MR_Word ml_backend__ml_type_gen__conv5_FieldInfo_12;
    MR_Integer ml_backend__ml_type_gen__conv4_STATE_VARIABLE_ArgNum_16;

    {
      ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv6_Defn_11, &ml_backend__ml_type_gen__conv5_FieldInfo_12, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_4), &ml_backend__ml_type_gen__conv4_STATE_VARIABLE_ArgNum_16);
    }
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv6_Defn_11));
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv5_FieldInfo_12));
    *ml_backend__ml_type_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_type_gen__conv4_STATE_VARIABLE_ArgNum_16));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv2_Defn_11;
    MR_Word ml_backend__ml_type_gen__conv1_FieldInfo_12;
    MR_Integer ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_17;

    {
      ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv2_Defn_11, &ml_backend__ml_type_gen__conv1_FieldInfo_12, ((MR_Integer) ml_backend__ml_type_gen__wrapper_arg_4), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_17);
    }
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv2_Defn_11));
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv1_FieldInfo_12));
    *ml_backend__ml_type_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_ArgNum_17));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_4(
  void * ml_backend__ml_type_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

    MR_builtin_longjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_6(
  void * ml_backend__ml_type_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_112 = ((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__conv12_RA_112);
    {
      ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_5(ml_backend__ml_type_gen__env_ptr);
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_5(
  void * ml_backend__ml_type_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

    {
      MR_Word ml_backend__ml_type_gen__Var_73;
      MR_Word ml_backend__ml_type_gen__Var_74;
      MR_Integer ml_backend__ml_type_gen__Var_75;

      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_112)) == (MR_mktag((MR_Integer) 2)));
      if ((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
        {
          {
            ml_backend__ml_type_gen__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_112, (MR_Integer) 0)));
            ml_backend__ml_type_gen__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_112, (MR_Integer) 1)));
            ml_backend__ml_type_gen__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_112, (MR_Integer) 2)));
          }
          {
            ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_4(ml_backend__ml_type_gen__env_ptr);
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_7(
  void * ml_backend__ml_type_gen__env_ptr_arg)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s * ml_backend__ml_type_gen__env_ptr = (struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s *) ml_backend__ml_type_gen__env_ptr_arg;

    if (MR_builtin_setjmp((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, &(ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__conv12_RA_112, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RAs_71, ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_6, ml_backend__ml_type_gen__env_ptr);
          }
        }
        (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_13,
  MR_Word ml_backend__ml_type_gen__BaseClassId_14,
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_15,
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_16,
  MR_Word ml_backend__ml_type_gen__TypeCtor_17,
  MR_Word ml_backend__ml_type_gen__TypeDefn_18,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_19,
  MR_Word ml_backend__ml_type_gen__Ctor_20,
  MR_Word ml_backend__ml_type_gen__MLDS_Members0_21,
  MR_Word * ml_backend__ml_type_gen__MLDS_Members_22,
  MR_Word ml_backend__ml_type_gen__MLDS_CtorMethods0_23,
  MR_Word * ml_backend__ml_type_gen__MLDS_CtorMethods_24)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0_s ml_backend__ml_type_gen__env;

    {
      MR_Word ml_backend__ml_type_gen__ExistQTVars_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 0)));
      MR_Word ml_backend__ml_type_gen__Constraints_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 1)));
      MR_Word ml_backend__ml_type_gen__CtorName_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 2)));
      MR_Word ml_backend__ml_type_gen__Args_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 3)));
      MR_Integer ml_backend__ml_type_gen__CtorArity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 4)));
      MR_Word ml_backend__ml_type_gen__Context_31;
      MR_Word ml_backend__ml_type_gen__MLDS_Context_32;
      MR_Word ml_backend__ml_type_gen__Globals_33;
      MR_Word ml_backend__ml_type_gen__Target_34;
      MR_String ml_backend__ml_type_gen__UnqualCtorName_35;
      MR_Word ml_backend__ml_type_gen__TagVal_36;
      MR_Word ml_backend__ml_type_gen___Ctxt_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 5)));
      MR_Word ml_backend__ml_type_gen__ReservedAddr_37;

      {
        hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_18, &ml_backend__ml_type_gen__Context_31);
      }
      {
        ml_backend__ml_type_gen__MLDS_Context_32 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_31);
      }
      {
        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_13, &ml_backend__ml_type_gen__Globals_33);
      }
      {
        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_33, &ml_backend__ml_type_gen__Target_34);
      }
      {
        ml_backend__ml_type_gen__UnqualCtorName_35 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__TypeCtor_17, ml_backend__ml_type_gen__CtorName_27, ml_backend__ml_type_gen__CtorArity_29);
      }
      {
        ml_backend__ml_type_gen__TagVal_36 = ml_backend__ml_type_gen__get_tagval_3_f_0(ml_backend__ml_type_gen__TypeCtor_17, ml_backend__ml_type_gen__ConsTagValues_19, ml_backend__ml_type_gen__Ctor_20);
      }
      {
        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(ml_backend__ml_type_gen__TagVal_36, &ml_backend__ml_type_gen__ReservedAddr_37);
      }
      if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
        {
          MR_Word ml_backend__ml_type_gen__Var_38;
          MR_Word ml_backend__ml_type_gen__Var_39;
          MR_Integer ml_backend__ml_type_gen__Var_40;

          (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__ReservedAddr_37)) == (MR_mktag((MR_Integer) 2)));
          if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
            {
              ml_backend__ml_type_gen__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 0)));
              ml_backend__ml_type_gen__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 1)));
              ml_backend__ml_type_gen__Var_40 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__ReservedAddr_37, (MR_Integer) 2)));
              {
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjName_41;
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42;
                MR_Word ml_backend__ml_type_gen__EntityDefn_44;
                MR_Word ml_backend__ml_type_gen__DeclFlags_45;
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46;
                MR_Word ml_backend__ml_type_gen__Var_90;
                MR_Word ml_backend__ml_type_gen__Var_91;
                MR_Word ml_backend__ml_type_gen__Var_93;

                {
                  ml_backend__ml_type_gen__Var_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_90, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_90, 1) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_35));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_90, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_29));
                }
                {
                  ml_backend__ml_type_gen__MLDS_ReservedObjName_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_ReservedObjName_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_ReservedObjName_41, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_90));
                }
                {
                  ml_backend__ml_type_gen__Var_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_91, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjName_41));
                }
                {
                  ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_91));
                }
                {
                  ml_backend__ml_type_gen__EntityDefn_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 0) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_16));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__EntityDefn_44, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  ml_backend__ml_type_gen__Var_93 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
                }
                {
                  ml_backend__ml_type_gen__DeclFlags_45 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_type_gen__Var_93, (MR_Integer) 0);
                }
                {
                  ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjEntityName_42));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_32));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_45));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46, 3) = ((MR_Box) (ml_backend__ml_type_gen__EntityDefn_44));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_type_gen__MLDS_Members_22 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjDefn_46));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Members0_21));
                }
              }
            }
          else
            *ml_backend__ml_type_gen__MLDS_Members_22 = ml_backend__ml_type_gen__MLDS_Members0_21;
          *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = ml_backend__ml_type_gen__MLDS_CtorMethods0_23;
        }
      else
        {
          MR_Word ml_backend__ml_type_gen__TypeCtorInfo_134_134;
          MR_Word ml_backend__ml_type_gen__TypeCtorInfo_135_135;
          MR_Word ml_backend__ml_type_gen__ExtraMembers_48;
          MR_Word ml_backend__ml_type_gen__ExtraFieldInfos_49;
          MR_Integer ml_backend__ml_type_gen__ArgNum2_50;
          MR_Word ml_backend__ml_type_gen__OrdinaryMembers_60;
          MR_Word ml_backend__ml_type_gen__OrdinaryFieldInfos_61;
          MR_Word ml_backend__ml_type_gen__Members_63;
          MR_Word ml_backend__ml_type_gen__FieldInfos_64;
          MR_Word ml_backend__ml_type_gen__MaybeSecTagVal_65;
          MR_Word ml_backend__ml_type_gen__UsesConstructors_66;
          MR_Word ml_backend__ml_type_gen__UsesBaseClass_67;
          MR_Word ml_backend__ml_type_gen__Ctors_79;
          MR_Word ml_backend__ml_type_gen__Var_97;
          MR_Integer ml_backend__ml_type_gen___ArgNum3_62;
          MR_Box ml_backend__ml_type_gen__conv11__ArgNum3_62;

          if ((ml_backend__ml_type_gen__ExistQTVars_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              ml_backend__ml_type_gen__ExtraMembers_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ml_backend__ml_type_gen__ExtraFieldInfos_49 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              ml_backend__ml_type_gen__ArgNum2_50 = (MR_Integer) 1;
            }
          else
            {
              MR_Word ml_backend__ml_type_gen__TypeInfo_113_113;
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_119_119;
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_120_120;
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_121_121;
              MR_Word ml_backend__ml_type_gen__ConstrainedTVars_53;
              MR_Word ml_backend__ml_type_gen__UnconstrainedTVars_54;
              MR_Word ml_backend__ml_type_gen__TypeInfoMembers_55;
              MR_Word ml_backend__ml_type_gen__TypeInfoFieldInfos_56;
              MR_Integer ml_backend__ml_type_gen__ArgNum1_57;
              MR_Word ml_backend__ml_type_gen__TypeClassInfoMembers_58;
              MR_Word ml_backend__ml_type_gen__TypeClassInfoFieldInfos_59;
              MR_Word ml_backend__ml_type_gen__Var_95;
              MR_Word ml_backend__ml_type_gen__Var_96;
              MR_Box ml_backend__ml_type_gen__conv3_ArgNum1_57;
              MR_Box ml_backend__ml_type_gen__conv7_ArgNum2_50;

              {
                parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ml_backend__ml_type_gen__Constraints_26, &ml_backend__ml_type_gen__ConstrainedTVars_53);
              }
              ml_backend__ml_type_gen__TypeInfo_113_113 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[1];
              {
                mercury__list__delete_elems_3_p_0(ml_backend__ml_type_gen__TypeInfo_113_113, ml_backend__ml_type_gen__ExistQTVars_25, ml_backend__ml_type_gen__ConstrainedTVars_53, &ml_backend__ml_type_gen__UnconstrainedTVars_54);
              }
              {
                ml_backend__ml_type_gen__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
              }
              ml_backend__ml_type_gen__TypeCtorInfo_119_119 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
              ml_backend__ml_type_gen__TypeCtorInfo_120_120 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
              ml_backend__ml_type_gen__TypeCtorInfo_121_121 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                mercury__list__map2_foldl_6_p_0(ml_backend__ml_type_gen__TypeInfo_113_113, ml_backend__ml_type_gen__TypeCtorInfo_119_119, ml_backend__ml_type_gen__TypeCtorInfo_120_120, ml_backend__ml_type_gen__TypeCtorInfo_121_121, ml_backend__ml_type_gen__Var_95, ml_backend__ml_type_gen__UnconstrainedTVars_54, &ml_backend__ml_type_gen__TypeInfoMembers_55, &ml_backend__ml_type_gen__TypeInfoFieldInfos_56, ((MR_Box) ((MR_Integer) 1)), &ml_backend__ml_type_gen__conv3_ArgNum1_57);
              }
              ml_backend__ml_type_gen__ArgNum1_57 = ((MR_Integer) ml_backend__ml_type_gen__conv3_ArgNum1_57);
              {
                ml_backend__ml_type_gen__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_96, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_96, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_96, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_96, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
              }
              {
                mercury__list__map2_foldl_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ml_backend__ml_type_gen__TypeCtorInfo_119_119, ml_backend__ml_type_gen__TypeCtorInfo_120_120, ml_backend__ml_type_gen__TypeCtorInfo_121_121, ml_backend__ml_type_gen__Var_96, ml_backend__ml_type_gen__Constraints_26, &ml_backend__ml_type_gen__TypeClassInfoMembers_58, &ml_backend__ml_type_gen__TypeClassInfoFieldInfos_59, ((MR_Box) (ml_backend__ml_type_gen__ArgNum1_57)), &ml_backend__ml_type_gen__conv7_ArgNum2_50);
              }
              ml_backend__ml_type_gen__ArgNum2_50 = ((MR_Integer) ml_backend__ml_type_gen__conv7_ArgNum2_50);
              {
                ml_backend__ml_type_gen__ExtraMembers_48 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_119_119, ml_backend__ml_type_gen__TypeInfoMembers_55, ml_backend__ml_type_gen__TypeClassInfoMembers_58);
              }
              {
                ml_backend__ml_type_gen__ExtraFieldInfos_49 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_120_120, ml_backend__ml_type_gen__TypeInfoFieldInfos_56, ml_backend__ml_type_gen__TypeClassInfoFieldInfos_59);
              }
            }
          {
            ml_backend__ml_type_gen__Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_97, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[2]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_97, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_97, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_97, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_97, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
          }
          ml_backend__ml_type_gen__TypeCtorInfo_134_134 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          ml_backend__ml_type_gen__TypeCtorInfo_135_135 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
          {
            mercury__list__map2_foldl_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_type_gen__TypeCtorInfo_134_134, ml_backend__ml_type_gen__TypeCtorInfo_135_135, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_type_gen__Var_97, ml_backend__ml_type_gen__Args_28, &ml_backend__ml_type_gen__OrdinaryMembers_60, &ml_backend__ml_type_gen__OrdinaryFieldInfos_61, ((MR_Box) (ml_backend__ml_type_gen__ArgNum2_50)), &ml_backend__ml_type_gen__conv11__ArgNum3_62);
          }
          ml_backend__ml_type_gen___ArgNum3_62 = ((MR_Integer) ml_backend__ml_type_gen__conv11__ArgNum3_62);
          {
            ml_backend__ml_type_gen__Members_63 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_134_134, ml_backend__ml_type_gen__ExtraMembers_48, ml_backend__ml_type_gen__OrdinaryMembers_60);
          }
          {
            ml_backend__ml_type_gen__FieldInfos_64 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_135_135, ml_backend__ml_type_gen__ExtraFieldInfos_49, ml_backend__ml_type_gen__OrdinaryFieldInfos_61);
          }
          {
            ml_backend__ml_type_gen__MaybeSecTagVal_65 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_36);
          }
          {
            ml_backend__ml_type_gen__UsesConstructors_66 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(ml_backend__ml_type_gen__Target_34);
          }
          {
            ml_backend__ml_type_gen__UsesBaseClass_67 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_type_gen__TagVal_36);
          }
          switch (ml_backend__ml_type_gen__UsesConstructors_66) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              ml_backend__ml_type_gen__Ctors_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_type_gen__CtorClassType_68;
                MR_Word ml_backend__ml_type_gen__CtorClassQualifier_69;
                MR_Word ml_backend__ml_type_gen__CtorFunction_70;
                MR_Word ml_backend__ml_type_gen__Var_76;
                MR_Word ml_backend__ml_type_gen__Var_77;

                switch (ml_backend__ml_type_gen__UsesBaseClass_67) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word ml_backend__ml_type_gen__Var_98;

                      {
                        ml_backend__ml_type_gen__Var_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_98, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_15));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_98, 1) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_98, 2) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_35));
                      }
                      {
                        ml_backend__ml_type_gen__CtorClassType_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_68, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_98));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_68, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_29));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_68, 3) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        ml_backend__ml_type_gen__CtorClassQualifier_69 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassQualifier_15, (MR_Integer) 1, ml_backend__ml_type_gen__UnqualCtorName_35, ml_backend__ml_type_gen__CtorArity_29);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ml_backend__ml_type_gen__CtorClassType_68 = ml_backend__ml_type_gen__BaseClassId_14;
                      ml_backend__ml_type_gen__CtorClassQualifier_69 = ml_backend__ml_type_gen__BaseClassQualifier_15;
                    }
                    break;
                }
                {
                  ml_backend__ml_type_gen__CtorFunction_70 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassId_14, ml_backend__ml_type_gen__CtorClassType_68, ml_backend__ml_type_gen__CtorClassQualifier_69, ml_backend__ml_type_gen__SecondaryTagClassId_16, ml_backend__ml_type_gen__MaybeSecTagVal_65, ml_backend__ml_type_gen__FieldInfos_64, ml_backend__ml_type_gen__MLDS_Context_32);
                }
                (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = (ml_backend__ml_type_gen__Target_34 == (MR_Integer) 2);
                if (!((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded))
                  {
                    MR_Word ml_backend__ml_type_gen__Var_102;

                    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_36)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 0)))) == (MR_Integer) 17)));
                    if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
                      {
                        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RAs_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 1)));
                        ml_backend__ml_type_gen__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_36, (MR_Integer) 2)));
                        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = (ml_backend__ml_type_gen__Var_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
                          {
                            ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_7(&ml_backend__ml_type_gen__env);
                          }
                      }
                  }
                if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
                  {
                    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Members_63)) == (MR_mktag((MR_Integer) 1)));
                    if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
                      {
                        ml_backend__ml_type_gen__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Members_63, (MR_Integer) 0)));
                        ml_backend__ml_type_gen__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Members_63, (MR_Integer) 1)));
                      }
                  }
                if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
                  {
                    MR_Word ml_backend__ml_type_gen__ZeroArgCtor_78;
                    MR_Word ml_backend__ml_type_gen__Var_105;

                    {
                      ml_backend__ml_type_gen__ZeroArgCtor_78 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_type_gen__Target_34, ml_backend__ml_type_gen__BaseClassId_14, ml_backend__ml_type_gen__CtorClassType_68, ml_backend__ml_type_gen__CtorClassQualifier_69, ml_backend__ml_type_gen__SecondaryTagClassId_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__MLDS_Context_32);
                    }
                    {
                      ml_backend__ml_type_gen__Var_105 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_105, 0) = ((MR_Box) (ml_backend__ml_type_gen__CtorFunction_70));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_105, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ml_backend__ml_type_gen__Ctors_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_79, 0) = ((MR_Box) (ml_backend__ml_type_gen__ZeroArgCtor_78));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_79, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_105));
                    }
                  }
                else
                  {
                    {
                      ml_backend__ml_type_gen__Ctors_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_79, 0) = ((MR_Box) (ml_backend__ml_type_gen__CtorFunction_70));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
              }
              break;
          }
          switch (ml_backend__ml_type_gen__UsesBaseClass_67) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word ml_backend__ml_type_gen__Inherits_81;
                MR_Word ml_backend__ml_type_gen__TypeParams_85;
                MR_Word ml_backend__ml_type_gen__MLDS_TypeName_86;
                MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_87;
                MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_88;
                MR_Word ml_backend__ml_type_gen__MLDS_TypeDefn_89;
                MR_Word ml_backend__ml_type_gen__Var_110;

                if ((ml_backend__ml_type_gen__MaybeSecTagVal_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word ml_backend__ml_type_gen__UsesEmptyBaseClasses_82;

                    {
                      ml_backend__ml_type_gen__UsesEmptyBaseClasses_82 = ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(ml_backend__ml_type_gen__Target_34);
                    }
                    switch (ml_backend__ml_type_gen__UsesEmptyBaseClasses_82) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ml_backend__ml_type_gen__Inherits_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            ml_backend__ml_type_gen__Inherits_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_81, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_14));
                            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        }
                        break;
                    }
                  }
                else
                  {
                    {
                      ml_backend__ml_type_gen__Inherits_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_81, 0) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_16));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                {
                  hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_18, &ml_backend__ml_type_gen__TypeParams_85);
                }
                {
                  ml_backend__ml_type_gen__MLDS_TypeName_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_86, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_35));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_86, 1) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_29));
                }
                {
                  ml_backend__ml_type_gen__MLDS_TypeFlags_87 = ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0();
                }
                {
                  ml_backend__ml_type_gen__Var_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_110, 0) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_110, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_110, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_81));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_110, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_110, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeParams_85));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_110, 5) = ((MR_Box) (ml_backend__ml_type_gen__Ctors_79));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_110, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_63));
                }
                ml_backend__ml_type_gen__MLDS_TypeDefnBody_88 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_110);
                {
                  ml_backend__ml_type_gen__MLDS_TypeDefn_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_89, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_86));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_89, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_32));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_89, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_87));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_89, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_88));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_type_gen__MLDS_Members_22 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefn_89));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Members0_21));
                }
                *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = ml_backend__ml_type_gen__MLDS_CtorMethods0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  *ml_backend__ml_type_gen__MLDS_Members_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_134_134, ml_backend__ml_type_gen__Members_63, ml_backend__ml_type_gen__MLDS_Members0_21);
                }
                {
                  *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_134_134, ml_backend__ml_type_gen__Ctors_79, ml_backend__ml_type_gen__MLDS_CtorMethods0_23);
                }
              }
              break;
          }
        }
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(
  MR_Word ml_backend__ml_type_gen__MLDS_Context_8,
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_9,
  MR_Word ml_backend__ml_type_gen__BaseClassId_10,
  MR_Word ml_backend__ml_type_gen__Members_11,
  MR_Word ml_backend__ml_type_gen__Target_12,
  MR_Word * ml_backend__ml_type_gen__MLDS_TypeDefn_13,
  MR_Word * ml_backend__ml_type_gen__SecondaryTagClassId_14)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__ClassName_16;
    MR_Word ml_backend__ml_type_gen__Inherits_20;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_25;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_26;
    MR_Word ml_backend__ml_type_gen__Var_30;

    {
      ml_backend__ml_type_gen__ClassName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ClassName_16, 2) = ((MR_Box) ((MR_String) "tag_type"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_type_gen__SecondaryTagClassId_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassName_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    switch (ml_backend__ml_type_gen__Target_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_type_gen__Inherits_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        ml_backend__ml_type_gen__Inherits_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_type_gen__EmptyBaseClasses_45;
          MR_Box ml_backend__ml_type_gen__conv0_EmptyBaseClasses_45;

          {
            ml_backend__ml_type_gen__conv0_EmptyBaseClasses_45 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.target_uses_empty_base_classes\'/1", (MR_String) "target erlang");
            return;
          }
          ml_backend__ml_type_gen__EmptyBaseClasses_45 = ((MR_Word) ml_backend__ml_type_gen__conv0_EmptyBaseClasses_45);
        }
        break;
      case (MR_Integer) 2:
        {
          {
            ml_backend__ml_type_gen__Inherits_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_20, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_10));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeFlags_25 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__Var_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_30, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_30, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_30, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_30, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_30, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_30, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_11));
    }
    ml_backend__ml_type_gen__MLDS_TypeDefnBody_26 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_30);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__MLDS_TypeDefn_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[7]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_26));
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
  MR_Word ml_backend__ml_type_gen__Ctor_7)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__TagVal_8;
    MR_Word ml_backend__ml_type_gen__Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 2)));
    MR_Integer ml_backend__ml_type_gen__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 4)));
    MR_Word ml_backend__ml_type_gen__Var_15;
    MR_Word ml_backend__ml_type_gen___ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen___Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen___Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 3)));
    MR_Word ml_backend__ml_type_gen___Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 5)));
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_8;

    {
      ml_backend__ml_type_gen__Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_15, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_11));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_15, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_15, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_5));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_6, ((MR_Box) (ml_backend__ml_type_gen__Var_15)), &ml_backend__ml_type_gen__conv0_TagVal_8);
    }
    ml_backend__ml_type_gen__TagVal_8 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_8);
    return ml_backend__ml_type_gen__TagVal_8;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word * ml_backend__ml_type_gen__RA_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_type_gen__succeeded;

        if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
          {
            *ml_backend__ml_type_gen__RA_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
            ml_backend__ml_type_gen__succeeded = MR_TRUE;
          }
        else
        if (((((MR_tag((MR_Word) ml_backend__ml_type_gen__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 17))))
          {
            MR_Word ml_backend__ml_type_gen__TagVal_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ml_backend__ml_type_gen__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));

            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_type_gen__next_value_of_HeadVar__1_1 = ml_backend__ml_type_gen__TagVal_5;

              ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        else
          ml_backend__ml_type_gen__succeeded = MR_FALSE;
        return ml_backend__ml_type_gen__succeeded;
      }
      break;
    }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_tag_constant_4_f_0(
  MR_Word ml_backend__ml_type_gen__Context_6,
  MR_Word ml_backend__ml_type_gen__TypeCtor_7,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_8,
  MR_Word ml_backend__ml_type_gen__Ctor_9)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Defns_10;
    MR_Integer ml_backend__ml_type_gen__SecondaryTag_11;
    MR_Word ml_backend__ml_type_gen__TagVal_37;
    MR_Word ml_backend__ml_type_gen__Var_38;
    MR_Word ml_backend__ml_type_gen__Name_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 2)));
    MR_Integer ml_backend__ml_type_gen__Arity_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 4)));
    MR_Word ml_backend__ml_type_gen__Var_49;
    MR_Word ml_backend__ml_type_gen___ExistQTVars_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen___Constraints_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen___Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_type_gen___Ctxt_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 5)));
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_37;

    {
      ml_backend__ml_type_gen__Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_49, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_45));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_49, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_47));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_49, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_7));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_8, ((MR_Box) (ml_backend__ml_type_gen__Var_49)), &ml_backend__ml_type_gen__conv0_TagVal_37);
    }
    ml_backend__ml_type_gen__TagVal_37 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_37);
    {
      ml_backend__ml_type_gen__Var_38 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_37);
    }
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Var_38)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_type_gen__succeeded)
      {
        ml_backend__ml_type_gen__SecondaryTag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_38, (MR_Integer) 0)));
        {
          MR_Word ml_backend__ml_type_gen__Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 2)));
          MR_String ml_backend__ml_type_gen__UnqualifiedName_18;
          MR_Word ml_backend__ml_type_gen__VarName_19;
          MR_Word ml_backend__ml_type_gen__ConstValue_20;
          MR_Word ml_backend__ml_type_gen__Defn_21;
          MR_Word ml_backend__ml_type_gen__Var_22;
          MR_Word ml_backend__ml_type_gen__Var_23;
          MR_Word ml_backend__ml_type_gen__Var_24;
          MR_Word ml_backend__ml_type_gen__Var_25;
          MR_Word ml_backend__ml_type_gen__Var_26;
          MR_Word ml_backend__ml_type_gen__Var_27;
          MR_Word ml_backend__ml_type_gen__Var_28;
          MR_Word ml_backend__ml_type_gen__Var_30;
          MR_Word ml_backend__ml_type_gen___ExistQTVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 0)));
          MR_Word ml_backend__ml_type_gen___Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 1)));
          MR_Word ml_backend__ml_type_gen___Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 3)));
          MR_Integer ml_backend__ml_type_gen___Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 4)));
          MR_Word ml_backend__ml_type_gen___Ctxt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 5)));

          {
            ml_backend__ml_type_gen__UnqualifiedName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__Name_14);
          }
          {
            ml_backend__ml_type_gen__Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__UnqualifiedName_18));
          }
          {
            ml_backend__ml_type_gen__VarName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__VarName_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__VarName_19, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_22));
          }
          {
            ml_backend__ml_type_gen__Var_23 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_23, 0) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTag_11));
          }
          {
            ml_backend__ml_type_gen__ConstValue_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_20, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_23));
          }
          {
            ml_backend__ml_type_gen__Var_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_25, 1) = ((MR_Box) (ml_backend__ml_type_gen__VarName_19));
          }
          {
            ml_backend__ml_type_gen__Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_25));
          }
          {
            ml_backend__ml_type_gen__Var_26 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_6);
          }
          {
            ml_backend__ml_type_gen__Var_27 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
          }
          {
            ml_backend__ml_type_gen__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_30, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_20));
          }
          {
            ml_backend__ml_type_gen__Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_28, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_30));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_28, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_type_gen__Defn_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_24));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_26));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_27));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 3) = ((MR_Box) (ml_backend__ml_type_gen__Var_28));
          }
          {
            ml_backend__ml_type_gen__Defns_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defns_10, 0) = ((MR_Box) (ml_backend__ml_type_gen__Defn_21));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Defns_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
    else
      ml_backend__ml_type_gen__Defns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return ml_backend__ml_type_gen__Defns_10;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_num_ctors_that_need_secondary_tag_7_p_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_type_gen__HeadVar__3_3,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_0_4,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_5,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_0_6,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_type_gen__succeeded;

        if ((ml_backend__ml_type_gen__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_7 = ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_0_6;
            *ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_5 = ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_0_4;
          }
        else
          {
            MR_Word ml_backend__ml_type_gen__Ctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 0)));
            MR_Word ml_backend__ml_type_gen__Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 1)));
            MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_26_26 = (ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_0_4 + (MR_Integer) 1);
            MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_28_28;
            MR_Word ml_backend__ml_type_gen__TagVal_35;
            MR_Word ml_backend__ml_type_gen__Name_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_18, (MR_Integer) 2)));
            MR_Integer ml_backend__ml_type_gen__Arity_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_18, (MR_Integer) 4)));
            MR_Word ml_backend__ml_type_gen__Var_53;
            MR_Word ml_backend__ml_type_gen___ExistQTVars_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_18, (MR_Integer) 0)));
            MR_Word ml_backend__ml_type_gen___Constraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_18, (MR_Integer) 1)));
            MR_Word ml_backend__ml_type_gen___Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_18, (MR_Integer) 3)));
            MR_Word ml_backend__ml_type_gen___Ctxt_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_18, (MR_Integer) 5)));
            MR_Box ml_backend__ml_type_gen__conv0_TagVal_35;

            {
              ml_backend__ml_type_gen__Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_53, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_49));
              MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_53, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_51));
              MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_53, 3) = ((MR_Box) (ml_backend__ml_type_gen__HeadVar__1_1));
            }
            {
              mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__HeadVar__2_2, ((MR_Box) (ml_backend__ml_type_gen__Var_53)), &ml_backend__ml_type_gen__conv0_TagVal_35);
            }
            ml_backend__ml_type_gen__TagVal_35 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_35);
            {
              MR_Word ml_backend__ml_type_gen__Var_41;
              MR_Integer ml_backend__ml_type_gen__Var_36;

              {
                ml_backend__ml_type_gen__Var_41 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_35);
              }
              ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Var_41)) == (MR_mktag((MR_Integer) 1)));
              if (ml_backend__ml_type_gen__succeeded)
                ml_backend__ml_type_gen__Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_41, (MR_Integer) 0)));
            }
            if (!(ml_backend__ml_type_gen__succeeded))
              {
                MR_Word ml_backend__ml_type_gen__Var_42;
                MR_Word ml_backend__ml_type_gen__Var_63;
                MR_Word ml_backend__ml_type_gen__Var_64;
                MR_Integer ml_backend__ml_type_gen__Var_65;

                {
                  ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(ml_backend__ml_type_gen__TagVal_35, &ml_backend__ml_type_gen__Var_42);
                }
                if (ml_backend__ml_type_gen__succeeded)
                  {
                    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Var_42)) == (MR_mktag((MR_Integer) 2)));
                    if (ml_backend__ml_type_gen__succeeded)
                      {
                        ml_backend__ml_type_gen__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_42, (MR_Integer) 0)));
                        ml_backend__ml_type_gen__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_42, (MR_Integer) 1)));
                        ml_backend__ml_type_gen__Var_65 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_42, (MR_Integer) 2)));
                      }
                  }
              }
            if (ml_backend__ml_type_gen__succeeded)
              {
                ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_28_28 = (ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_0_6 + (MR_Integer) 1);
              }
            else
              ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_28_28 = ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_0_6;
            /* direct tailcall eliminated */
            {
              MR_Word ml_backend__ml_type_gen__next_value_of_HeadVar__3_3 = ml_backend__ml_type_gen__Ctors_19;
              MR_Integer ml_backend__ml_type_gen__next_value_of_STATE_VARIABLE_NumCtors_0_4 = ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_26_26;
              MR_Integer ml_backend__ml_type_gen__next_value_of_STATE_VARIABLE_NumSecTagCtors_0_6 = ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_28_28;

              ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_0_6 = ml_backend__ml_type_gen__next_value_of_STATE_VARIABLE_NumSecTagCtors_0_6;
              ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_0_4 = ml_backend__ml_type_gen__next_value_of_STATE_VARIABLE_NumCtors_0_4;
              ml_backend__ml_type_gen__HeadVar__3_3 = ml_backend__ml_type_gen__next_value_of_HeadVar__3_3;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_parent_type_8_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5)
{
  {
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv1_MLDS_Members_22;
    MR_Word ml_backend__ml_type_gen__conv0_MLDS_CtorMethods_24;

    {
      ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 9))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv1_MLDS_Members_22, ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_4), &ml_backend__ml_type_gen__conv0_MLDS_CtorMethods_24);
    }
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv1_MLDS_Members_22));
    *ml_backend__ml_type_gen__wrapper_arg_5 = ((MR_Box) (ml_backend__ml_type_gen__conv0_MLDS_CtorMethods_24));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_parent_type_8_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
  MR_Word ml_backend__ml_type_gen__Ctors_12,
  MR_Word ml_backend__ml_type_gen__TagValues_13,
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_46,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_47)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__TypeInfo_78_78;
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_79_79;
    MR_Word ml_backend__ml_type_gen__Context_16;
    MR_Word ml_backend__ml_type_gen__MLDS_Context_17;
    MR_Word ml_backend__ml_type_gen__QualBaseClassName_18;
    MR_Integer ml_backend__ml_type_gen__BaseClassArity_19;
    MR_Word ml_backend__ml_type_gen__BaseClassId_20;
    MR_Word ml_backend__ml_type_gen__BaseClassModuleName_21;
    MR_Word ml_backend__ml_type_gen__QualKind_22;
    MR_String ml_backend__ml_type_gen__BaseClassName_23;
    MR_Word ml_backend__ml_type_gen__Globals_24;
    MR_Word ml_backend__ml_type_gen__Target_25;
    MR_Word ml_backend__ml_type_gen__BaseClassQualifier_26;
    MR_Integer ml_backend__ml_type_gen__NumCtors_27;
    MR_Integer ml_backend__ml_type_gen__NumSecTagCtors_28;
    MR_Word ml_backend__ml_type_gen__TagMembers_32;
    MR_Word ml_backend__ml_type_gen__TagClassId_33;
    MR_Word ml_backend__ml_type_gen__CtorMembers_35;
    MR_Word ml_backend__ml_type_gen__BaseClassCtorMethods_36;
    MR_Word ml_backend__ml_type_gen__Implements_39;
    MR_Word ml_backend__ml_type_gen__TypeParams_40;
    MR_Word ml_backend__ml_type_gen__Members_41;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeName_42;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_43;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_44;
    MR_Word ml_backend__ml_type_gen__Defn_45;
    MR_Word ml_backend__ml_type_gen__Var_63;
    MR_Word ml_backend__ml_type_gen__Var_68;
    MR_Word ml_backend__ml_type_gen__Var_69;
    MR_Box ml_backend__ml_type_gen__conv3_CtorMembers_35;
    MR_Box ml_backend__ml_type_gen__conv2_BaseClassCtorMethods_36;

    {
      hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__Context_16);
    }
    {
      ml_backend__ml_type_gen__MLDS_Context_17 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
    }
    {
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_10, &ml_backend__ml_type_gen__QualBaseClassName_18, &ml_backend__ml_type_gen__BaseClassArity_19);
    }
    {
      ml_backend__ml_type_gen__BaseClassId_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualBaseClassName_18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 2) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassArity_19));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_20, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    ml_backend__ml_type_gen__BaseClassModuleName_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 0)));
    ml_backend__ml_type_gen__QualKind_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 1)));
    ml_backend__ml_type_gen__BaseClassName_23 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_18, (MR_Integer) 2)));
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_9, &ml_backend__ml_type_gen__Globals_24);
    }
    {
      libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_24, &ml_backend__ml_type_gen__Target_25);
    }
    {
      ml_backend__ml_type_gen__BaseClassQualifier_26 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_25, ml_backend__ml_type_gen__BaseClassModuleName_21, ml_backend__ml_type_gen__QualKind_22, ml_backend__ml_type_gen__BaseClassName_23, ml_backend__ml_type_gen__BaseClassArity_19);
    }
    {
      ml_backend__ml_type_gen__ml_num_ctors_that_need_secondary_tag_7_p_0(ml_backend__ml_type_gen__TypeCtor_10, ml_backend__ml_type_gen__TagValues_13, ml_backend__ml_type_gen__Ctors_12, (MR_Integer) 0, &ml_backend__ml_type_gen__NumCtors_27, (MR_Integer) 0, &ml_backend__ml_type_gen__NumSecTagCtors_28);
    }
    ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__NumSecTagCtors_28 > (MR_Integer) 0);
    if (ml_backend__ml_type_gen__succeeded)
      {
        MR_Word ml_backend__ml_type_gen__TagDataMember_29;
        MR_Word ml_backend__ml_type_gen__TagMembers0_31;
        MR_Word ml_backend__ml_type_gen__Var_56;
        MR_Word ml_backend__ml_type_gen__Var_57;

        {
          ml_backend__ml_type_gen__Var_56 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
        }
        {
          ml_backend__ml_type_gen__Var_57 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
        }
        {
          ml_backend__ml_type_gen__TagDataMember_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_29, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[3])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_29, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_56));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_29, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_57));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagDataMember_29, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_1[2])));
        }
        {
          ml_backend__ml_type_gen__TagMembers0_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers0_31, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagDataMember_29));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers0_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__NumSecTagCtors_28 == ml_backend__ml_type_gen__NumCtors_27);
        if (ml_backend__ml_type_gen__succeeded)
          {
            ml_backend__ml_type_gen__TagMembers_32 = ml_backend__ml_type_gen__TagMembers0_31;
            ml_backend__ml_type_gen__TagClassId_33 = ml_backend__ml_type_gen__BaseClassId_20;
          }
        else
          {
            MR_Word ml_backend__ml_type_gen__TagTypeDefn_34;

            {
              ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(ml_backend__ml_type_gen__MLDS_Context_17, ml_backend__ml_type_gen__BaseClassQualifier_26, ml_backend__ml_type_gen__BaseClassId_20, ml_backend__ml_type_gen__TagMembers0_31, ml_backend__ml_type_gen__Target_25, &ml_backend__ml_type_gen__TagTypeDefn_34, &ml_backend__ml_type_gen__TagClassId_33);
            }
            {
              ml_backend__ml_type_gen__TagMembers_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers_32, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagTypeDefn_34));
              MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
      }
    else
      {
        ml_backend__ml_type_gen__TagMembers_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_type_gen__TagClassId_33 = ml_backend__ml_type_gen__BaseClassId_20;
      }
    {
      ml_backend__ml_type_gen__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_parent_type_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 5) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 6) = ((MR_Box) (ml_backend__ml_type_gen__TagClassId_33));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 7) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 8) = ((MR_Box) (ml_backend__ml_type_gen__TypeDefn_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 9) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_13));
    }
    ml_backend__ml_type_gen__TypeInfo_78_78 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[0];
    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ml_backend__ml_type_gen__TypeInfo_78_78, ml_backend__ml_type_gen__TypeInfo_78_78, ml_backend__ml_type_gen__Var_63, ml_backend__ml_type_gen__Ctors_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv3_CtorMembers_35, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv2_BaseClassCtorMethods_36);
    }
    ml_backend__ml_type_gen__CtorMembers_35 = ((MR_Word) ml_backend__ml_type_gen__conv3_CtorMembers_35);
    ml_backend__ml_type_gen__BaseClassCtorMethods_36 = ((MR_Word) ml_backend__ml_type_gen__conv2_BaseClassCtorMethods_36);
    switch (ml_backend__ml_type_gen__Target_25) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        ml_backend__ml_type_gen__Implements_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_type_gen__Var_66;

          {
            ml_backend__ml_type_gen__Var_66 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
          }
          {
            ml_backend__ml_type_gen__Implements_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_39, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_66));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    {
      hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__TypeParams_40);
    }
    ml_backend__ml_type_gen__TypeCtorInfo_79_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      ml_backend__ml_type_gen__Var_68 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_79_79, ml_backend__ml_type_gen__TagMembers_32, ml_backend__ml_type_gen__CtorMembers_35);
    }
    {
      ml_backend__ml_type_gen__Members_41 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_79_79, ml_backend__ml_type_gen__MaybeEqualityMembers_14, ml_backend__ml_type_gen__Var_68);
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeName_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_42, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassName_23));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_42, 1) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassArity_19));
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeFlags_43 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__Var_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_69, 0) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_69, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_69, 3) = ((MR_Box) (ml_backend__ml_type_gen__Implements_39));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_69, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeParams_40));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_69, 5) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassCtorMethods_36));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_69, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_41));
    }
    ml_backend__ml_type_gen__MLDS_TypeDefnBody_44 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_69);
    {
      ml_backend__ml_type_gen__Defn_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_45, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_42));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_45, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_45, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_43));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_45, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_44));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_47 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Defn_45));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_46));
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;

    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__366__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))));
    }
    return ml_backend__ml_type_gen__succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0(
  MR_Word ml_backend__ml_type_gen__Context_7,
  MR_Word ml_backend__ml_type_gen__TypeCtor_8,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_9,
  MR_Word ml_backend__ml_type_gen__MLDS_Type_10,
  MR_Word ml_backend__ml_type_gen__Ctor_11)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Defn_12;
    MR_Word ml_backend__ml_type_gen__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 2)));
    MR_Integer ml_backend__ml_type_gen__Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 4)));
    MR_Word ml_backend__ml_type_gen__TagVal_19;
    MR_Word ml_backend__ml_type_gen__ConstValue_21;
    MR_String ml_backend__ml_type_gen__UnqualifiedName_55;
    MR_Word ml_backend__ml_type_gen__VarName_56;
    MR_Word ml_backend__ml_type_gen__Var_57;
    MR_Word ml_backend__ml_type_gen__Var_63;
    MR_Word ml_backend__ml_type_gen__Var_68;
    MR_Word ml_backend__ml_type_gen__Var_69;
    MR_Word ml_backend__ml_type_gen__Var_70;
    MR_Word ml_backend__ml_type_gen__Var_71;
    MR_Word ml_backend__ml_type_gen__Var_72;
    MR_Word ml_backend__ml_type_gen__Var_73;
    MR_Word ml_backend__ml_type_gen__Var_75;
    MR_Word ml_backend__ml_type_gen___ExistQTVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen___Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen___Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 3)));
    MR_Word ml_backend__ml_type_gen___Ctxt_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_11, (MR_Integer) 5)));
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_19;

    {
      ml_backend__ml_type_gen__Var_57 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_57, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_57, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_15));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_57, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_17));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_57, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_8));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_9, ((MR_Box) (ml_backend__ml_type_gen__Var_57)), &ml_backend__ml_type_gen__conv0_TagVal_19);
    }
    ml_backend__ml_type_gen__TagVal_19 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_19);
    switch (MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__ml_type_gen__Int_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 1)));
              MR_Word ml_backend__ml_type_gen__Var_62;

              {
                ml_backend__ml_type_gen__Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_62, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_62, 1) = ((MR_Box) (ml_backend__ml_type_gen__Int_20));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_62, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_10));
              }
              {
                ml_backend__ml_type_gen__ConstValue_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_62));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
          case (MR_Integer) 16:
          case (MR_Integer) 17:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_type_gen__ForeignLang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 1)));
              MR_String ml_backend__ml_type_gen__ForeignTagValue_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 2)));
              MR_Word ml_backend__ml_type_gen__Var_61;

              {
                ml_backend__ml_type_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__ForeignLang_22));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_61, 2) = ((MR_Box) (ml_backend__ml_type_gen__ForeignTagValue_23));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_61, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_10));
              }
              {
                ml_backend__ml_type_gen__ConstValue_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_61));
              }
            }
            break;
        }
        break;
    }
    {
      ml_backend__ml_type_gen__Var_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 3) = ((MR_Box) (ml_backend__ml_type_gen__Arity_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_63, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(ml_backend__ml_type_gen__Var_63, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "arity != []");
    }
    {
      ml_backend__ml_type_gen__UnqualifiedName_55 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__Name_15);
    }
    {
      ml_backend__ml_type_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_68, 1) = ((MR_Box) (ml_backend__ml_type_gen__UnqualifiedName_55));
    }
    {
      ml_backend__ml_type_gen__VarName_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__VarName_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__VarName_56, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_68));
    }
    {
      ml_backend__ml_type_gen__Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_70, 1) = ((MR_Box) (ml_backend__ml_type_gen__VarName_56));
    }
    {
      ml_backend__ml_type_gen__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_69, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_70));
    }
    {
      ml_backend__ml_type_gen__Var_71 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_7);
    }
    {
      ml_backend__ml_type_gen__Var_72 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_75, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_21));
    }
    {
      ml_backend__ml_type_gen__Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_73, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_73, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_75));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_73, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_type_gen__Defn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_69));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_71));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_72));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_12, 3) = ((MR_Box) (ml_backend__ml_type_gen__Var_73));
    }
    return ml_backend__ml_type_gen__Defn_12;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv0_Defn_12;

    {
      ml_backend__ml_type_gen__conv0_Defn_12 = ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_Defn_12));
    return ml_backend__ml_type_gen__wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(
  MR_Word ml_backend__ml_type_gen__Target_9,
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
  MR_Word ml_backend__ml_type_gen__Ctors_12,
  MR_Word ml_backend__ml_type_gen__TagValues_13,
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_49_49;
    MR_Word ml_backend__ml_type_gen__Context_16;
    MR_Word ml_backend__ml_type_gen__MLDS_Context_17;
    MR_Word ml_backend__ml_type_gen__QualifiedClassName_18;
    MR_Integer ml_backend__ml_type_gen__MLDS_ClassArity_19;
    MR_String ml_backend__ml_type_gen__MLDS_ClassName_22;
    MR_Word ml_backend__ml_type_gen__ValueMember_23;
    MR_Word ml_backend__ml_type_gen__MLDS_Type_24;
    MR_Word ml_backend__ml_type_gen__EnumConstMembers_25;
    MR_Word ml_backend__ml_type_gen__Members_26;
    MR_Word ml_backend__ml_type_gen__Implements_28;
    MR_Word ml_backend__ml_type_gen__Inherits_29;
    MR_Word ml_backend__ml_type_gen__TypeVars_30;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeName_31;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_32;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeDefnBody_33;
    MR_Word ml_backend__ml_type_gen__Defn_34;
    MR_Word ml_backend__ml_type_gen__Var_38;
    MR_Word ml_backend__ml_type_gen__Var_39;
    MR_Word ml_backend__ml_type_gen__Var_44;
    MR_Word ml_backend__ml_type_gen__Var_57;
    MR_Word ml_backend__ml_type_gen__Var_58;
    MR_Word ml_backend__ml_type_gen__Var_20;
    MR_Word ml_backend__ml_type_gen__Var_21;

    {
      hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__Context_16);
    }
    {
      ml_backend__ml_type_gen__MLDS_Context_17 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
    }
    {
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_10, &ml_backend__ml_type_gen__QualifiedClassName_18, &ml_backend__ml_type_gen__MLDS_ClassArity_19);
    }
    ml_backend__ml_type_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 0)));
    ml_backend__ml_type_gen__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 1)));
    ml_backend__ml_type_gen__MLDS_ClassName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_18, (MR_Integer) 2)));
    {
      ml_backend__ml_type_gen__Var_57 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_type_gen__Context_16);
    }
    {
      ml_backend__ml_type_gen__Var_58 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__ValueMember_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[2])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_57));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ValueMember_23, 3) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_1[2])));
    }
    {
      ml_backend__ml_type_gen__MLDS_Type_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualifiedClassName_18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_19));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_24, 3) = ((MR_Box) ((MR_Integer) 4));
    }
    ml_backend__ml_type_gen__TypeCtorInfo_49_49 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      ml_backend__ml_type_gen__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 3) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 5) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 6) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_24));
    }
    {
      ml_backend__ml_type_gen__EnumConstMembers_25 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ml_backend__ml_type_gen__TypeCtorInfo_49_49, ml_backend__ml_type_gen__Var_38, ml_backend__ml_type_gen__Ctors_12);
    }
    {
      ml_backend__ml_type_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_type_gen__ValueMember_23));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_39, 1) = ((MR_Box) (ml_backend__ml_type_gen__EnumConstMembers_25));
    }
    {
      ml_backend__ml_type_gen__Members_26 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_49_49, ml_backend__ml_type_gen__MaybeEqualityMembers_14, ml_backend__ml_type_gen__Var_39);
    }
    switch (ml_backend__ml_type_gen__Target_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          ml_backend__ml_type_gen__Implements_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_type_gen__Inherits_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_type_gen__Var_40;
          MR_Word ml_backend__ml_type_gen__Var_42;

          {
            ml_backend__ml_type_gen__Var_40 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
          }
          {
            ml_backend__ml_type_gen__Implements_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_28, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_40));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_type_gen__Var_42 = ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0();
          }
          {
            ml_backend__ml_type_gen__Inherits_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_29, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_42));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_29, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    {
      hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__TypeVars_30);
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeName_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_31, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassName_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_19));
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeFlags_32 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__Var_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_44, 0) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_44, 2) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_29));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_44, 3) = ((MR_Box) (ml_backend__ml_type_gen__Implements_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_44, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeVars_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_44, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_44, 6) = ((MR_Box) (ml_backend__ml_type_gen__Members_26));
    }
    ml_backend__ml_type_gen__MLDS_TypeDefnBody_33 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_44);
    {
      ml_backend__ml_type_gen__Defn_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Context_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_34, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefnBody_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_36 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Defn_34));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_35));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_4_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_5,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__TypeCtor_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__TypeDefn_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen__TypeStatus_9;
    MR_Word ml_backend__ml_type_gen__DefinedThisModule_10;

    {
      hlds__hlds_data__get_type_defn_status_2_p_0(ml_backend__ml_type_gen__TypeDefn_7, &ml_backend__ml_type_gen__TypeStatus_9);
    }
    {
      ml_backend__ml_type_gen__DefinedThisModule_10 = hlds__status__type_status_defined_in_this_module_1_f_0(ml_backend__ml_type_gen__TypeStatus_9);
    }
    switch (ml_backend__ml_type_gen__DefinedThisModule_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_type_gen__TypeBody_20;

          {
            hlds__hlds_data__get_type_defn_body_2_p_0(ml_backend__ml_type_gen__TypeDefn_7, &ml_backend__ml_type_gen__TypeBody_20);
          }
          switch (MR_tag((MR_Word) ml_backend__ml_type_gen__TypeBody_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
              break;
            case (MR_Integer) 1:
              {
                MR_Word ml_backend__ml_type_gen__Ctors_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 0)));
                MR_Word ml_backend__ml_type_gen__TagValues_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 1)));
                MR_Word ml_backend__ml_type_gen__DuTypeKind_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 3)));
                MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word ml_backend__ml_type_gen___CheaperTagTest_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 2)));
                MR_Word ml_backend__ml_type_gen__MaybeUserEqComp_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 4)));
                MR_Word ml_backend__ml_type_gen___MaybeDirectArgCtors_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 5)));
                MR_Word ml_backend__ml_type_gen___ReservedTag_29 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word ml_backend__ml_type_gen__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word ml_backend__ml_type_gen__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 7)));

                switch (MR_tag((MR_Word) ml_backend__ml_type_gen__DuTypeKind_26)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ml_backend__ml_type_gen__DuTypeKind_26)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ml_backend__ml_type_gen__Globals_34;
                          MR_Word ml_backend__ml_type_gen__Target_35;

                          {
                            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_34);
                          }
                          {
                            libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_34, &ml_backend__ml_type_gen__Target_35);
                          }
                          {
                            ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(ml_backend__ml_type_gen__Target_35, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ml_backend__ml_type_gen__Globals_45;
                          MR_Word ml_backend__ml_type_gen__Target_46;

                          {
                            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_45);
                          }
                          {
                            libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_45, &ml_backend__ml_type_gen__Target_46);
                          }
                          {
                            ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(ml_backend__ml_type_gen__Target_46, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          ml_backend__ml_type_gen__ml_gen_hld_du_parent_type_8_p_0(ml_backend__ml_type_gen__ModuleInfo_5, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__ml_type_gen__Globals_34;
                      MR_Word ml_backend__ml_type_gen__Target_35;

                      {
                        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_34);
                      }
                      {
                        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_34, &ml_backend__ml_type_gen__Target_35);
                      }
                      {
                        ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(ml_backend__ml_type_gen__Target_35, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ml_backend__ml_type_gen__ml_gen_hld_du_parent_type_8_p_0(ml_backend__ml_type_gen__ModuleInfo_5, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_23, ml_backend__ml_type_gen__TagValues_24, ml_backend__ml_type_gen__MaybeEqualityMembers_32, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
                  break;
                case (MR_Integer) 1:
                  *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12 = ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11;
                  break;
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_2)
{
  {
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8;

    {
      ml_backend__ml_type_gen__ml_gen_exported_enum_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8);
    }
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_8));
  }
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_3,
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnums_4)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_5;
    MR_Word ml_backend__ml_type_gen__TypeTable_6;
    MR_Word ml_backend__ml_type_gen__Var_7;

    {
      hlds__hlds_module__module_info_get_exported_enums_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__ExportedEnumInfo_5);
    }
    {
      hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__TypeTable_6);
    }
    {
      ml_backend__ml_type_gen__Var_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_7, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_7, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_7, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_3));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_7, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeTable_6));
    }
    {
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0, ml_backend__ml_type_gen__Var_7, ml_backend__ml_type_gen__ExportedEnumInfo_5, ml_backend__ml_type_gen__MLDS_ExportedEnums_4);
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv1_Statement_12;

    {
      ml_backend__ml_type_gen__conv1_Statement_12 = ml_backend__ml_type_gen__gen_init_field_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv1_Statement_12));
    return ml_backend__ml_type_gen__wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv0_Arg_4;

    {
      ml_backend__ml_type_gen__conv0_Arg_4 = ml_backend__ml_type_gen__make_arg_1_f_0(((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_Arg_4));
    return ml_backend__ml_type_gen__wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(
  MR_Word ml_backend__ml_type_gen__Target_10,
  MR_Word ml_backend__ml_type_gen__BaseClassId_11,
  MR_Word ml_backend__ml_type_gen__ClassType_12,
  MR_Word ml_backend__ml_type_gen__ClassQualifier_13,
  MR_Word ml_backend__ml_type_gen__SecondaryTagClassId_14,
  MR_Word ml_backend__ml_type_gen__MaybeTag_15,
  MR_Word ml_backend__ml_type_gen__FieldInfos_16,
  MR_Word ml_backend__ml_type_gen__Context_17)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__CtorDefn_18;
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_46_46 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
    MR_Word ml_backend__ml_type_gen__Args_19;
    MR_Word ml_backend__ml_type_gen__InitMembers0_21;
    MR_Word ml_backend__ml_type_gen__InitMembers_24;
    MR_Word ml_backend__ml_type_gen__Stmt_25;
    MR_Word ml_backend__ml_type_gen__EnvVarNames_27;
    MR_Word ml_backend__ml_type_gen__Ctor_28;
    MR_Word ml_backend__ml_type_gen__CtorFlags_29;
    MR_Word ml_backend__ml_type_gen__Var_31;
    MR_Word ml_backend__ml_type_gen__Var_32;
    MR_Word ml_backend__ml_type_gen__Var_35;
    MR_Word ml_backend__ml_type_gen__Var_36;

    {
      ml_backend__ml_type_gen__Args_19 = mercury__list__map_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_46_46, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_1[1], ml_backend__ml_type_gen__FieldInfos_16);
    }
    {
      ml_backend__ml_type_gen__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_31, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_31, 3) = ((MR_Box) (ml_backend__ml_type_gen__Target_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_31, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_31, 5) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_31, 6) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_13));
    }
    {
      ml_backend__ml_type_gen__InitMembers0_21 = mercury__list__map_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_46_46, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_statement_0, ml_backend__ml_type_gen__Var_31, ml_backend__ml_type_gen__FieldInfos_16);
    }
    if ((ml_backend__ml_type_gen__MaybeTag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_type_gen__InitMembers_24 = ml_backend__ml_type_gen__InitMembers0_21;
    else
      {
        MR_Integer ml_backend__ml_type_gen__TagVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__MaybeTag_15, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__InitTag_23;
        MR_Word ml_backend__ml_type_gen__TagClassQualifier_66;
        MR_Word ml_backend__ml_type_gen__Val_69;
        MR_Word ml_backend__ml_type_gen__Field_70;
        MR_Word ml_backend__ml_type_gen__Var_74;
        MR_Word ml_backend__ml_type_gen__Var_77;
        MR_Word ml_backend__ml_type_gen__Var_78;
        MR_Word ml_backend__ml_type_gen__Var_79;
        MR_Word ml_backend__ml_type_gen__Var_81;
        MR_Word ml_backend__ml_type_gen__Var_82;
        MR_Word ml_backend__ml_type_gen__Var_83;
        MR_Word ml_backend__ml_type_gen__TagClass_60;
        MR_Integer ml_backend__ml_type_gen__TagArity_61;
        MR_Word ml_backend__ml_type_gen__Var_62;

        ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__SecondaryTagClassId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (ml_backend__ml_type_gen__succeeded)
          {
            ml_backend__ml_type_gen__TagClass_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 1)));
            ml_backend__ml_type_gen__TagArity_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 2)));
            ml_backend__ml_type_gen__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 3)));
            {
              MR_Word ml_backend__ml_type_gen__BaseClassQualifier_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_60, (MR_Integer) 0)));
              MR_Word ml_backend__ml_type_gen__QualKind_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_60, (MR_Integer) 1)));
              MR_String ml_backend__ml_type_gen__TagClassName_65 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_60, (MR_Integer) 2)));

              {
                ml_backend__ml_type_gen__TagClassQualifier_66 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_10, ml_backend__ml_type_gen__BaseClassQualifier_63, ml_backend__ml_type_gen__QualKind_64, ml_backend__ml_type_gen__TagClassName_65, ml_backend__ml_type_gen__TagArity_61);
              }
            }
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.gen_init_tag\'/5", (MR_String) "class_id should be a class");
            }
          }
        {
          ml_backend__ml_type_gen__Var_74 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_74, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagVal_22));
        }
        {
          ml_backend__ml_type_gen__Val_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Val_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Val_69, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_74));
        }
        {
          ml_backend__ml_type_gen__Var_77 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_77, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
        }
        {
          ml_backend__ml_type_gen__Var_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_79, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagClassQualifier_66));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_79, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_79, 2) = ((MR_Box) ((MR_String) "data_tag"));
        }
        {
          ml_backend__ml_type_gen__Var_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_81, 1) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_14));
        }
        {
          ml_backend__ml_type_gen__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_78, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_79));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_78, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_81));
        }
        {
          ml_backend__ml_type_gen__Field_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[0])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_70, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_77));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_70, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_78));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_70, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_70, 4) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
        }
        {
          ml_backend__ml_type_gen__Var_83 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_83, 0) = ((MR_Box) (ml_backend__ml_type_gen__Field_70));
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_83, 1) = ((MR_Box) (ml_backend__ml_type_gen__Val_69));
        }
        {
          ml_backend__ml_type_gen__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_82, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_83));
        }
        {
          ml_backend__ml_type_gen__InitTag_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__InitTag_23, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_82));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__InitTag_23, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
        }
        {
          ml_backend__ml_type_gen__InitMembers_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__InitMembers_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__InitTag_23));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__InitMembers_24, 1) = ((MR_Box) (ml_backend__ml_type_gen__InitMembers0_21));
        }
      }
    {
      ml_backend__ml_type_gen__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__InitMembers_24));
    }
    {
      ml_backend__ml_type_gen__Stmt_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_25, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_25, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
    }
    {
      ml_backend__ml_type_gen__EnvVarNames_27 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    {
      ml_backend__ml_type_gen__Var_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_35, 0) = ((MR_Box) (ml_backend__ml_type_gen__Args_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ml_backend__ml_type_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__Stmt_25);
    {
      ml_backend__ml_type_gen__Ctor_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_35));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_36));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 4) = ((MR_Box) (ml_backend__ml_type_gen__EnvVarNames_27));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Ctor_28, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_type_gen__CtorFlags_29 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__CtorDefn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_6[1])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorFlags_29));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__CtorDefn_18, 3) = ((MR_Box) (ml_backend__ml_type_gen__Ctor_28));
    }
    return ml_backend__ml_type_gen__CtorDefn_18;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__HeadVar__2_2;

    switch (ml_backend__ml_type_gen__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          MR_Box ml_backend__ml_type_gen__conv0_HeadVar__2_2;

          {
            ml_backend__ml_type_gen__conv0_HeadVar__2_2 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "ml_backend.ml_type_gen", (MR_String) "function \140ml_backend.ml_type_gen.ml_target_uses_constructors\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_type_gen__HeadVar__2_2 = ((MR_Word) ml_backend__ml_type_gen__conv0_HeadVar__2_2);
        }
        break;
      case (MR_Integer) 2:
        ml_backend__ml_type_gen__HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return ml_backend__ml_type_gen__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(
  MR_Word ml_backend__ml_type_gen__Tag_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ml_backend__ml_type_gen__succeeded;
        MR_Word ml_backend__ml_type_gen__UsesBaseClass_4;

        switch (MR_tag((MR_Word) ml_backend__ml_type_gen__Tag_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(ml_backend__ml_type_gen__Tag_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 0;
                break;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
              case (MR_Integer) 1:
              case (MR_Integer) 2:
              case (MR_Integer) 3:
              case (MR_Integer) 4:
              case (MR_Integer) 5:
              case (MR_Integer) 6:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
              case (MR_Integer) 10:
              case (MR_Integer) 11:
              case (MR_Integer) 12:
              case (MR_Integer) 13:
              case (MR_Integer) 14:
              case (MR_Integer) 15:
              case (MR_Integer) 16:
                ml_backend__ml_type_gen__UsesBaseClass_4 = (MR_Integer) 0;
                break;
              case (MR_Integer) 8:
                {
                  MR_Word ml_backend__ml_type_gen__SubTag_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 2)));
                  MR_Integer ml_backend__ml_type_gen___ConstNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_type_gen__next_value_of_Tag_3 = ml_backend__ml_type_gen__SubTag_38;

                    ml_backend__ml_type_gen__Tag_3 = ml_backend__ml_type_gen__next_value_of_Tag_3;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 17:
                {
                  MR_Word ml_backend__ml_type_gen__SubTag_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 2)));
                  MR_Word ml_backend__ml_type_gen___RAs_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Tag_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ml_backend__ml_type_gen__next_value_of_Tag_3 = ml_backend__ml_type_gen__SubTag_6;

                    ml_backend__ml_type_gen__Tag_3 = ml_backend__ml_type_gen__next_value_of_Tag_3;
                  }
                  continue;
                }
                break;
            }
            break;
        }
        return ml_backend__ml_type_gen__UsesBaseClass_4;
      }
      break;
    }
}

MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_uses_secondary_tag_4_p_0(
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
  MR_Word ml_backend__ml_type_gen__Ctor_7,
  MR_Integer * ml_backend__ml_type_gen__SecondaryTag_8)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__TagVal_9;
    MR_Word ml_backend__ml_type_gen__Var_10;
    MR_Word ml_backend__ml_type_gen__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 2)));
    MR_Integer ml_backend__ml_type_gen__Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 4)));
    MR_Word ml_backend__ml_type_gen__Var_21;
    MR_Word ml_backend__ml_type_gen___ExistQTVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen___Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen___Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 3)));
    MR_Word ml_backend__ml_type_gen___Ctxt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_7, (MR_Integer) 5)));
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_9;

    {
      ml_backend__ml_type_gen__Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_17));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_21, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_19));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_21, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_5));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_6, ((MR_Box) (ml_backend__ml_type_gen__Var_21)), &ml_backend__ml_type_gen__conv0_TagVal_9);
    }
    ml_backend__ml_type_gen__TagVal_9 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_9);
    {
      ml_backend__ml_type_gen__Var_10 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_9);
    }
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Var_10)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_type_gen__succeeded)
      *ml_backend__ml_type_gen__SecondaryTag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_10, (MR_Integer) 0)));
    return ml_backend__ml_type_gen__succeeded;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_const_member_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

    {
      ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_member_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

    {
      ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

    {
      ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__MLDS_DeclFlags_2;

    {
      ml_backend__ml_type_gen__MLDS_DeclFlags_2 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    return ml_backend__ml_type_gen__MLDS_DeclFlags_2;
  }
}

MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(
  MR_Word ml_backend__ml_type_gen__CompilationTarget_7,
  MR_String ml_backend__ml_type_gen__UnqualTypeName_8,
  MR_Integer ml_backend__ml_type_gen__TypeArity_9,
  MR_Word ml_backend__ml_type_gen__Name_10,
  MR_Integer ml_backend__ml_type_gen__Arity_11)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_String ml_backend__ml_type_gen__CtorName_12;
    MR_String ml_backend__ml_type_gen__UnqualName_13;

    {
      ml_backend__ml_type_gen__UnqualName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__Name_10);
    }
    switch (ml_backend__ml_type_gen__CompilationTarget_7) {
      default:
        ml_backend__ml_type_gen__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_type_gen__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        ml_backend__ml_type_gen__succeeded = MR_TRUE;
        break;
    }
    if (ml_backend__ml_type_gen__succeeded)
      {
        ml_backend__ml_type_gen__succeeded = (strcmp(ml_backend__ml_type_gen__UnqualName_13, ml_backend__ml_type_gen__UnqualTypeName_8) == 0);
        if (ml_backend__ml_type_gen__succeeded)
          ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_11 == ml_backend__ml_type_gen__TypeArity_9);
      }
    if (ml_backend__ml_type_gen__succeeded)
      {
        {
          ml_backend__ml_type_gen__CtorName_12 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", ml_backend__ml_type_gen__UnqualName_13);
        }
      }
    else
      ml_backend__ml_type_gen__CtorName_12 = ml_backend__ml_type_gen__UnqualName_13;
    return ml_backend__ml_type_gen__CtorName_12;
  }
}

MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(
  MR_Word ml_backend__ml_type_gen__CompilationTarget_6,
  MR_Word ml_backend__ml_type_gen__TypeCtor_7,
  MR_Word ml_backend__ml_type_gen__Name_8,
  MR_Integer ml_backend__ml_type_gen__Arity_9)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_String ml_backend__ml_type_gen__CtorName_10;
    MR_Word ml_backend__ml_type_gen__TypeName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TypeCtor_7, (MR_Integer) 0)));
    MR_Integer ml_backend__ml_type_gen__TypeArity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TypeCtor_7, (MR_Integer) 1)));
    MR_String ml_backend__ml_type_gen__UnqualTypeName_13;

    {
      ml_backend__ml_type_gen__UnqualTypeName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__TypeName_11);
    }
    {
      ml_backend__ml_type_gen__CtorName_10 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(ml_backend__ml_type_gen__CompilationTarget_6, ml_backend__ml_type_gen__UnqualTypeName_13, ml_backend__ml_type_gen__TypeArity_12, ml_backend__ml_type_gen__Name_8, ml_backend__ml_type_gen__Arity_9);
    }
    return ml_backend__ml_type_gen__CtorName_10;
  }
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word * ml_backend__ml_type_gen__QualifiedTypeName_6,
  MR_Integer * ml_backend__ml_type_gen__Arity_5)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__ModuleName_7;
    MR_String ml_backend__ml_type_gen__TypeName_8;
    MR_Word ml_backend__ml_type_gen__MLDS_Module_9;

    *ml_backend__ml_type_gen__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
    if (((MR_tag((MR_Word) ml_backend__ml_type_gen__Name_4)) == (MR_mktag((MR_Integer) 1))))
      {
        ml_backend__ml_type_gen__ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_4, (MR_Integer) 0)));
        ml_backend__ml_type_gen__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Name_4, (MR_Integer) 1)));
      }
    else
      {
        ml_backend__ml_type_gen__TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Name_4, (MR_Integer) 0)));
        {
          ml_backend__ml_type_gen__ModuleName_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
        }
      }
    {
      ml_backend__ml_type_gen__MLDS_Module_9 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ml_backend__ml_type_gen__ModuleName_7);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__QualifiedTypeName_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Module_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__TypeName_8));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3)
{
  {
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12;

    {
      ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_2), &ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12);
    }
    *ml_backend__ml_type_gen__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_type_gen__conv0_STATE_VARIABLE_Defns_12));
  }
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_2_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_3,
  MR_Word * ml_backend__ml_type_gen__Defns_4)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Globals_5;
    MR_Word ml_backend__ml_type_gen__HighLevelData_6;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__Globals_5);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_type_gen__Globals_5, (MR_Integer) 263, &ml_backend__ml_type_gen__HighLevelData_6);
    }
    switch (ml_backend__ml_type_gen__HighLevelData_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ml_backend__ml_type_gen__Defns_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word ml_backend__ml_type_gen__TypeTable_7;
          MR_Word ml_backend__ml_type_gen__TypeCtorDefns_8;
          MR_Word ml_backend__ml_type_gen__Var_10;
          MR_Box ml_backend__ml_type_gen__conv1_Defns_4;

          {
            hlds__hlds_module__module_info_get_type_table_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__TypeTable_7);
          }
          {
            hlds__hlds_data__get_all_type_ctor_defns_2_p_0(ml_backend__ml_type_gen__TypeTable_7, &ml_backend__ml_type_gen__TypeCtorDefns_8);
          }
          {
            ml_backend__ml_type_gen__Var_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_10, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_10, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_types_2_p_0_1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_10, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_3));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &ml_backend__ml_type_gen_scalar_common_1[0], (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[0], ml_backend__ml_type_gen__Var_10, ml_backend__ml_type_gen__TypeCtorDefns_8, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv1_Defns_4);
          }
          *ml_backend__ml_type_gen__Defns_4 = ((MR_Word) ml_backend__ml_type_gen__conv1_Defns_4);
        }
        break;
    }
  }
}

void mercury__ml_backend__ml_type_gen__init(void)
{
}

void mercury__ml_backend__ml_type_gen__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0);
	MR_register_type_ctor_info(&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_tag_uses_base_class_0);
}

void mercury__ml_backend__ml_type_gen__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__ml_type_gen__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ml_backend.ml_type_gen. */
