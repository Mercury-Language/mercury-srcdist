/*
** Automatically generated from `ml_type_gen.m'
** by the Mercury compiler,
** version rotd-2017-07-11
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
#include "check_hlds.proc_requests.mih"
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
  MR_Word ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_110;
  MR_Box ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__conv12_RA_110;
};


static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0;

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

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1285__1_2_p_0(
  MR_Integer ml_backend__ml_type_gen__Arity_18,
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_70);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__379__1_2_p_0(
  MR_Integer ml_backend__ml_type_gen__Arity_17,
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_65);

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
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_3,
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_4);

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

static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_tag_constant_4_f_0(
  MR_Word ml_backend__ml_type_gen__Context_6,
  MR_Word ml_backend__ml_type_gen__TypeCtor_7,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_8,
  MR_Word ml_backend__ml_type_gen__Ctor_9);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
  MR_Word ml_backend__ml_type_gen__TypeCtor_5,
  MR_Word ml_backend__ml_type_gen__ConsTagValues_6,
  MR_Word ml_backend__ml_type_gen__Ctor_7);

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

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_4_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_5,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_8_p_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_2,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_3,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_4,
  MR_Box * ml_backend__ml_type_gen__wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_8_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
  MR_Word ml_backend__ml_type_gen__Ctors_12,
  MR_Word ml_backend__ml_type_gen__TagValues_13,
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_44,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_45);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(
  MR_Word ml_backend__ml_type_gen__Context_8,
  MR_Word ml_backend__ml_type_gen__BaseClassQualifier_9,
  MR_Word ml_backend__ml_type_gen__BaseClassId_10,
  MR_Word ml_backend__ml_type_gen__Members_11,
  MR_Word ml_backend__ml_type_gen__Target_12,
  MR_Word * ml_backend__ml_type_gen__MLDS_TypeDefn_13,
  MR_Word * ml_backend__ml_type_gen__SecondaryTagClassId_14);

static void MR_CALL 
ml_backend__ml_type_gen__ml_num_ctors_that_need_secondary_tag_7_p_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word ml_backend__ml_type_gen__HeadVar__2_2,
  MR_Word ml_backend__ml_type_gen__HeadVar__3_3,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_0_4,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_NumCtors_5,
  MR_Integer ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_0_6,
  MR_Integer * ml_backend__ml_type_gen__STATE_VARIABLE_NumSecTagCtors_7);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
  MR_Word ml_backend__ml_type_gen__HeadVar__1_1,
  MR_Word * ml_backend__ml_type_gen__RA_2);

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
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_33,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_34);

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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[9][2];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[1][7];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[3][5];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[2][9];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[2][1];

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
    ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[1])),
    ((MR_Box) (ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_2[4])))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "tag_type")),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_2[7])))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[3][5] = {
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
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0))
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "<constructor>"))
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
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
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
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

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1285__1_2_p_0(
  MR_Integer ml_backend__ml_type_gen__Arity_18,
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_70)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_18 == ml_backend__ml_type_gen__HeadVar__2_70);

    return ml_backend__ml_type_gen__succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__379__1_2_p_0(
  MR_Integer ml_backend__ml_type_gen__Arity_17,
  MR_Integer ml_backend__ml_type_gen__HeadVar__2_65)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Arity_17 == ml_backend__ml_type_gen__HeadVar__2_65);

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
        MR_Word ml_backend__ml_type_gen__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_type_gen__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ml_backend__ml_type_gen__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_type_gen__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ml_backend__ml_type_gen__ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word ml_backend__ml_type_gen__ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word ml_backend__ml_type_gen__Var_12;

        {
          ml_backend__mlds____Compare____mlds_var_name_0_0(&ml_backend__ml_type_gen__Var_12, ml_backend__ml_type_gen__ArgX1_4, ml_backend__ml_type_gen__ArgY1_5);
        }
        ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Var_12 == (MR_Integer) 0);
        ml_backend__ml_type_gen__succeeded = !(ml_backend__ml_type_gen__succeeded);
        if (ml_backend__ml_type_gen__succeeded)
          *ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__Var_12;
        else
          {
            MR_Word ml_backend__ml_type_gen__Var_13;

            {
              ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_type_gen__Var_13, ml_backend__ml_type_gen__ArgX2_6, ml_backend__ml_type_gen__ArgY2_7);
            }
            ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Var_13 == (MR_Integer) 0);
            ml_backend__ml_type_gen__succeeded = !(ml_backend__ml_type_gen__succeeded);
            if (ml_backend__ml_type_gen__succeeded)
              *ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__Var_13;
            else
              {
                MR_Word ml_backend__ml_type_gen__Var_14;

                {
                  ml_backend__mlds____Compare____mlds_gc_statement_0_0(&ml_backend__ml_type_gen__Var_14, ml_backend__ml_type_gen__ArgX3_8, ml_backend__ml_type_gen__ArgY3_9);
                }
                ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__Var_14 == (MR_Integer) 0);
                ml_backend__ml_type_gen__succeeded = !(ml_backend__ml_type_gen__succeeded);
                if (ml_backend__ml_type_gen__succeeded)
                  *ml_backend__ml_type_gen__HeadVar__1_1 = ml_backend__ml_type_gen__Var_14;
                else
                  {
                    mercury__term____Compare____context_0_0(ml_backend__ml_type_gen__HeadVar__1_1, ml_backend__ml_type_gen__ArgX4_10, ml_backend__ml_type_gen__ArgY4_11);
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
        MR_Word ml_backend__ml_type_gen__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ml_backend__ml_type_gen__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ml_backend__ml_type_gen__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word ml_backend__ml_type_gen__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word ml_backend__ml_type_gen__ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word ml_backend__ml_type_gen__ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__HeadVar__2_2, (MR_Integer) 3)));

        {
          ml_backend__ml_type_gen__succeeded = ml_backend__mlds____Unify____mlds_var_name_0_0(ml_backend__ml_type_gen__ArgX1_3, ml_backend__ml_type_gen__ArgY1_4);
        }
        if (ml_backend__ml_type_gen__succeeded)
          {
            {
              ml_backend__ml_type_gen__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_type_gen__ArgX2_5, ml_backend__ml_type_gen__ArgY2_6);
            }
            if (ml_backend__ml_type_gen__succeeded)
              {
                {
                  ml_backend__ml_type_gen__succeeded = ml_backend__mlds____Unify____mlds_gc_statement_0_0(ml_backend__ml_type_gen__ArgX3_7, ml_backend__ml_type_gen__ArgY3_8);
                }
                if (ml_backend__ml_type_gen__succeeded)
                  {
                    ml_backend__ml_type_gen__succeeded = mercury__term____Unify____context_0_0(ml_backend__ml_type_gen__ArgX4_9, ml_backend__ml_type_gen__ArgY4_10);
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
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1285__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))));
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
    MR_Word ml_backend__ml_type_gen__Var_67;
    MR_Word ml_backend__ml_type_gen__Var_71;
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
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
            return;
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
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
              MR_Word ml_backend__ml_type_gen__Var_66;

              {
                ml_backend__ml_type_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_type_gen__Int_21));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_11));
              }
              {
                ml_backend__ml_type_gen__ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_66));
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
                return;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_type_gen__Lang_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 1)));
              MR_String ml_backend__ml_type_gen__String_24 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_20, (MR_Integer) 2)));
              MR_Word ml_backend__ml_type_gen__Var_65;

              {
                ml_backend__ml_type_gen__Var_65 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_65, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_65, 1) = ((MR_Box) (ml_backend__ml_type_gen__Lang_23));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_65, 2) = ((MR_Box) (ml_backend__ml_type_gen__String_24));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_65, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_11));
              }
              {
                ml_backend__ml_type_gen__ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_22, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_65));
              }
            }
            break;
        }
        break;
    }
    {
      ml_backend__ml_type_gen__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 1) = ((MR_Box) (ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 3) = ((MR_Box) (ml_backend__ml_type_gen__Arity_18));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_3_p_0(ml_backend__ml_type_gen__Var_67, (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant arity != 0");
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
      ml_backend__ml_type_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_71, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_22));
    }
    {
      ml_backend__ml_type_gen__ExportConstant_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportConstant_59, 0) = ((MR_Box) (ml_backend__ml_type_gen__ForeignName_58));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportConstant_59, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_71));
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
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1(
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
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(
  MR_Word ml_backend__ml_type_gen__ExportedEnumInfo_3,
  MR_Word * ml_backend__ml_type_gen__MLDS_ExportedEnum_4)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__Lang_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_3, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_3, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_3, (MR_Integer) 2)));
    MR_Word ml_backend__ml_type_gen__Mapping_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_3, (MR_Integer) 3)));
    MR_Word ml_backend__ml_type_gen__Ctors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_3, (MR_Integer) 4)));
    MR_Word ml_backend__ml_type_gen__TagValues_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__ExportedEnumInfo_3, (MR_Integer) 5)));
    MR_Word ml_backend__ml_type_gen__QualifiedClassName_11;
    MR_Integer ml_backend__ml_type_gen__MLDS_ClassArity_12;
    MR_Word ml_backend__ml_type_gen__MLDS_Type_13;
    MR_Word ml_backend__ml_type_gen__ExportConstants_14;
    MR_Word ml_backend__ml_type_gen__Var_16;
    MR_Box ml_backend__ml_type_gen__conv1_ExportConstants_14;

    {
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_7, &ml_backend__ml_type_gen__QualifiedClassName_11, &ml_backend__ml_type_gen__MLDS_ClassArity_12);
    }
    {
      ml_backend__ml_type_gen__MLDS_Type_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_13, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualifiedClassName_11));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_13, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_12));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_13, 3) = ((MR_Box) ((MR_Integer) 4));
    }
    {
      ml_backend__ml_type_gen__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_16, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_16, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_16, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_16, 4) = ((MR_Box) (ml_backend__ml_type_gen__Mapping_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_16, 5) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_16, 6) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_13));
    }
    {
      mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[3], ml_backend__ml_type_gen__Var_16, ml_backend__ml_type_gen__Ctors_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv1_ExportConstants_14);
    }
    ml_backend__ml_type_gen__ExportConstants_14 = ((MR_Word) ml_backend__ml_type_gen__conv1_ExportConstants_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__MLDS_ExportedEnum_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Lang_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__ExportConstants_14));
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
    MR_String ml_backend__ml_type_gen__FieldName_31;
    MR_Word ml_backend__ml_type_gen__FieldVarName_32;
    MR_Word ml_backend__ml_type_gen__DataName_33;
    MR_Word ml_backend__ml_type_gen__DeclFlags_34;
    MR_Word ml_backend__ml_type_gen__MLDS_Type_35;
    MR_Word ml_backend__ml_type_gen__GcStmt_36;
    MR_Word ml_backend__ml_type_gen__Var_37;
    MR_Word ml_backend__ml_type_gen__Var_38;
    MR_Word ml_backend__ml_type_gen___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Arg_10, (MR_Integer) 3)));

    {
      ml_backend__ml_type_gen__FieldName_31 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(ml_backend__ml_type_gen__MaybeFieldName_14, ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_18);
    }
    {
      ml_backend__ml_type_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_31));
    }
    {
      ml_backend__ml_type_gen__FieldVarName_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_37));
    }
    {
      ml_backend__ml_type_gen__DataName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_33, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_32));
    }
    {
      ml_backend__ml_type_gen__DeclFlags_34 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_15, ml_backend__ml_type_gen__Width_16);
    }
    if (ml_backend__ml_type_gen__succeeded)
      ml_backend__ml_type_gen__MLDS_Type_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      {
        ml_backend__ml_type_gen__MLDS_Type_35 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_15);
      }
    ml_backend__ml_type_gen__GcStmt_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_type_gen__Var_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 0) = ((MR_Box) (ml_backend__ml_type_gen__DataName_33));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_34));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_35));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_38, 5) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_36));
    }
    *ml_backend__ml_type_gen__Defn_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_38);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_35));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_36));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__Context_9));
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
    MR_String ml_backend__ml_type_gen__FieldName_32;
    MR_Word ml_backend__ml_type_gen__FieldVarName_33;
    MR_Word ml_backend__ml_type_gen__DataName_34;
    MR_Word ml_backend__ml_type_gen__DeclFlags_35;
    MR_Word ml_backend__ml_type_gen__MLDS_Type_36;
    MR_Word ml_backend__ml_type_gen__GcStmt_37;
    MR_Word ml_backend__ml_type_gen__Var_38;
    MR_Word ml_backend__ml_type_gen__Var_39;

    {
      ml_backend__ml_type_gen__Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_18, 0) = ((MR_Box) (ml_backend__ml_type_gen__TypeVar_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      check_hlds__polymorphism__build_type_info_type_2_p_0(ml_backend__ml_type_gen__Var_18, &ml_backend__ml_type_gen__Type_15);
    }
    {
      ml_backend__ml_type_gen__FieldName_32 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_16);
    }
    {
      ml_backend__ml_type_gen__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_38, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_32));
    }
    {
      ml_backend__ml_type_gen__FieldVarName_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_33, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_38));
    }
    {
      ml_backend__ml_type_gen__DataName_34 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_34, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_34, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_33));
    }
    {
      ml_backend__ml_type_gen__DeclFlags_35 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    if (ml_backend__ml_type_gen__succeeded)
      ml_backend__ml_type_gen__MLDS_Type_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      {
        ml_backend__ml_type_gen__MLDS_Type_36 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_15);
      }
    ml_backend__ml_type_gen__GcStmt_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_type_gen__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_type_gen__DataName_34));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_39, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_39, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_35));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_39, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_36));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_39, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_39, 5) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_37));
    }
    *ml_backend__ml_type_gen__Defn_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_39);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_33));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_36));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_37));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__Context_9));
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
    MR_String ml_backend__ml_type_gen__FieldName_30;
    MR_Word ml_backend__ml_type_gen__FieldVarName_31;
    MR_Word ml_backend__ml_type_gen__DataName_32;
    MR_Word ml_backend__ml_type_gen__DeclFlags_33;
    MR_Word ml_backend__ml_type_gen__MLDS_Type_34;
    MR_Word ml_backend__ml_type_gen__GcStmt_35;
    MR_Word ml_backend__ml_type_gen__Var_36;
    MR_Word ml_backend__ml_type_gen__Var_37;

    {
      check_hlds__polymorphism__build_typeclass_info_type_2_p_0(ml_backend__ml_type_gen__Constraint_10, &ml_backend__ml_type_gen__Type_14);
    }
    {
      ml_backend__ml_type_gen__FieldName_30 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__STATE_VARIABLE_ArgNum_0_15);
    }
    {
      ml_backend__ml_type_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_36, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldName_30));
    }
    {
      ml_backend__ml_type_gen__FieldVarName_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__FieldVarName_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_36));
    }
    {
      ml_backend__ml_type_gen__DataName_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_32, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__DataName_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_31));
    }
    {
      ml_backend__ml_type_gen__DeclFlags_33 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    }
    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
    if (ml_backend__ml_type_gen__succeeded)
      ml_backend__ml_type_gen__MLDS_Type_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      {
        ml_backend__ml_type_gen__MLDS_Type_34 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ml_backend__ml_type_gen__ModuleInfo_8, ml_backend__ml_type_gen__Type_14);
      }
    ml_backend__ml_type_gen__GcStmt_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      ml_backend__ml_type_gen__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__DataName_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_33));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_34));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 5) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_35));
    }
    *ml_backend__ml_type_gen__Defn_11 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_37);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *ml_backend__ml_type_gen__FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__FieldVarName_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_type_gen__GcStmt_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_type_gen__Context_9));
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
    MR_Word ml_backend__ml_type_gen__Stmt_12;
    MR_Word ml_backend__ml_type_gen__VarName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_11, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen__Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_11, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen__Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__FieldInfo_11, (MR_Integer) 3)));
    MR_String ml_backend__ml_type_gen__Name_17;
    MR_Word ml_backend__ml_type_gen__QualVarName_24;
    MR_Word ml_backend__ml_type_gen__Param_25;
    MR_Word ml_backend__ml_type_gen__Field_26;
    MR_Word ml_backend__ml_type_gen__Var_32;
    MR_Word ml_backend__ml_type_gen__Var_35;
    MR_Word ml_backend__ml_type_gen__Var_36;
    MR_Word ml_backend__ml_type_gen__Var_37;
    MR_Word ml_backend__ml_type_gen__Var_39;
    MR_Word ml_backend__ml_type_gen__Var_40;
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
                mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
              }
            }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ml_backend__ml_type_gen__RequiresQualifiedParams_46;
          MR_Box ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_46;

          {
            ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_46 = mercury__require__unexpected_2_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "function \140ml_backend.ml_type_gen.target_requires_module_qualified_params\'/1", (MR_String) "target erlang");
          }
          ml_backend__ml_type_gen__RequiresQualifiedParams_46 = ((MR_Word) ml_backend__ml_type_gen__conv0_RequiresQualifiedParams_46);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_type_gen__ModuleName_61;
          MR_Word ml_backend__ml_type_gen__Var_57;
          MR_Integer ml_backend__ml_type_gen__Var_49;
          MR_Word ml_backend__ml_type_gen__Var_50;
          MR_Word ml_backend__ml_type_gen__Var_51;
          MR_String ml_backend__ml_type_gen__Var_52;

          ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (ml_backend__ml_type_gen__succeeded)
            {
              ml_backend__ml_type_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 1)));
              ml_backend__ml_type_gen__Var_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 2)));
              ml_backend__ml_type_gen__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_8, (MR_Integer) 3)));
              ml_backend__ml_type_gen__ModuleName_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_57, (MR_Integer) 0)));
              ml_backend__ml_type_gen__Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_57, (MR_Integer) 1)));
              ml_backend__ml_type_gen__Var_52 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_57, (MR_Integer) 2)));
              ml_backend__ml_type_gen__succeeded = MR_TRUE;
            }
          if (ml_backend__ml_type_gen__succeeded)
            {
              {
                ml_backend__ml_type_gen__QualVarName_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__ModuleName_61));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 1) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualVarName_24, 2) = ((MR_Box) (ml_backend__ml_type_gen__VarName_13));
              }
            }
          else
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
              }
            }
        }
        break;
    }
    {
      ml_backend__ml_type_gen__Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_32, 0) = ((MR_Box) (ml_backend__ml_type_gen__QualVarName_24));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__Type_14));
    }
    {
      ml_backend__ml_type_gen__Param_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Param_25, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_32));
    }
    {
      ml_backend__ml_type_gen__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_35, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_9));
    }
    {
      ml_backend__ml_type_gen__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__Name_17));
    }
    {
      ml_backend__ml_type_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_39, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_9));
    }
    {
      ml_backend__ml_type_gen__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_36, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_37));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_36, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_39));
    }
    {
      ml_backend__ml_type_gen__Field_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[0])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_35));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_36));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 3) = ((MR_Box) (ml_backend__ml_type_gen__Type_14));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_26, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_8));
    }
    {
      ml_backend__ml_type_gen__Var_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_40, 0) = ((MR_Box) (ml_backend__ml_type_gen__Field_26));
      MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_40, 1) = ((MR_Box) (ml_backend__ml_type_gen__Param_25));
    }
    {
      ml_backend__ml_type_gen__Stmt_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Stmt_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Stmt_12, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_40));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Stmt_12, 2) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
    }
    return ml_backend__ml_type_gen__Stmt_12;
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

    (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_110 = ((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__conv12_RA_110);
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

      (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = ((MR_tag((MR_Word) (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_110)) == (MR_mktag((MR_Integer) 2)));
      if ((ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
        {
          {
            ml_backend__ml_type_gen__Var_73 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_110, (MR_Integer) 0)));
            ml_backend__ml_type_gen__Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_110, (MR_Integer) 1)));
            ml_backend__ml_type_gen__Var_75 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RA_110, (MR_Integer) 2)));
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
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, &(ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__conv12_RA_110, (ml_backend__ml_type_gen__env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RAs_71, ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_6, ml_backend__ml_type_gen__env_ptr);
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
      MR_Word ml_backend__ml_type_gen__Globals_32;
      MR_Word ml_backend__ml_type_gen__Target_33;
      MR_String ml_backend__ml_type_gen__UnqualCtorName_34;
      MR_Word ml_backend__ml_type_gen__TagVal_35;
      MR_Word ml_backend__ml_type_gen___Ctxt_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_20, (MR_Integer) 5)));
      MR_Word ml_backend__ml_type_gen__ReservedAddr_36;

      {
        hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_18, &ml_backend__ml_type_gen__Context_31);
      }
      {
        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_13, &ml_backend__ml_type_gen__Globals_32);
      }
      {
        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_32, &ml_backend__ml_type_gen__Target_33);
      }
      {
        ml_backend__ml_type_gen__UnqualCtorName_34 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(ml_backend__ml_type_gen__Target_33, ml_backend__ml_type_gen__TypeCtor_17, ml_backend__ml_type_gen__CtorName_27, ml_backend__ml_type_gen__CtorArity_29);
      }
      {
        ml_backend__ml_type_gen__TagVal_35 = ml_backend__ml_type_gen__get_tagval_3_f_0(ml_backend__ml_type_gen__TypeCtor_17, ml_backend__ml_type_gen__ConsTagValues_19, ml_backend__ml_type_gen__Ctor_20);
      }
      {
        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(ml_backend__ml_type_gen__TagVal_35, &ml_backend__ml_type_gen__ReservedAddr_36);
      }
      if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
        {
          switch (MR_tag((MR_Word) ml_backend__ml_type_gen__ReservedAddr_36)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ml_backend__ml_type_gen__MLDS_Members_22 = ml_backend__ml_type_gen__MLDS_Members0_21;
              break;
            case (MR_Integer) 1:
              *ml_backend__ml_type_gen__MLDS_Members_22 = ml_backend__ml_type_gen__MLDS_Members0_21;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjName_40;
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjDataName_41;
                MR_Word ml_backend__ml_type_gen__DeclFlags0_43;
                MR_Word ml_backend__ml_type_gen__DeclFlags_44;
                MR_Word ml_backend__ml_type_gen__MLDS_ReservedObjDefn_45;
                MR_Word ml_backend__ml_type_gen__Var_89;
                MR_Word ml_backend__ml_type_gen__Var_91;

                {
                  ml_backend__ml_type_gen__Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_89, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_89, 1) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_34));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_89, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_29));
                }
                {
                  ml_backend__ml_type_gen__MLDS_ReservedObjName_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_ReservedObjName_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_ReservedObjName_40, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_89));
                }
                {
                  ml_backend__ml_type_gen__MLDS_ReservedObjDataName_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_ReservedObjDataName_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_ReservedObjDataName_41, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjName_40));
                }
                {
                  ml_backend__ml_type_gen__DeclFlags0_43 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
                }
                {
                  ml_backend__mlds__set_data_access_3_p_0((MR_Integer) 0, ml_backend__ml_type_gen__DeclFlags0_43, &ml_backend__ml_type_gen__DeclFlags_44);
                }
                {
                  ml_backend__ml_type_gen__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_91, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjDataName_41));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_91, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_91, 2) = ((MR_Box) (ml_backend__ml_type_gen__DeclFlags_44));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_91, 3) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_16));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_91, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_91, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                ml_backend__ml_type_gen__MLDS_ReservedObjDefn_45 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_91);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_type_gen__MLDS_Members_22 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ReservedObjDefn_45));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Members0_21));
                }
              }
              break;
          }
          *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = ml_backend__ml_type_gen__MLDS_CtorMethods0_23;
        }
      else
        {
          MR_Word ml_backend__ml_type_gen__TypeCtorInfo_132_132;
          MR_Word ml_backend__ml_type_gen__TypeCtorInfo_133_133;
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
          MR_Word ml_backend__ml_type_gen__Var_95;
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
              MR_Word ml_backend__ml_type_gen__TypeInfo_111_111;
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_117_117;
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_118_118;
              MR_Word ml_backend__ml_type_gen__TypeCtorInfo_119_119;
              MR_Word ml_backend__ml_type_gen__ConstrainedTVars_53;
              MR_Word ml_backend__ml_type_gen__UnconstrainedTVars_54;
              MR_Word ml_backend__ml_type_gen__TypeInfoMembers_55;
              MR_Word ml_backend__ml_type_gen__TypeInfoFieldInfos_56;
              MR_Integer ml_backend__ml_type_gen__ArgNum1_57;
              MR_Word ml_backend__ml_type_gen__TypeClassInfoMembers_58;
              MR_Word ml_backend__ml_type_gen__TypeClassInfoFieldInfos_59;
              MR_Word ml_backend__ml_type_gen__Var_93;
              MR_Word ml_backend__ml_type_gen__Var_94;
              MR_Box ml_backend__ml_type_gen__conv3_ArgNum1_57;
              MR_Box ml_backend__ml_type_gen__conv7_ArgNum2_50;

              {
                parse_tree__prog_type__constraint_list_get_tvars_2_p_0(ml_backend__ml_type_gen__Constraints_26, &ml_backend__ml_type_gen__ConstrainedTVars_53);
              }
              ml_backend__ml_type_gen__TypeInfo_111_111 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[2];
              {
                mercury__list__delete_elems_3_p_0(ml_backend__ml_type_gen__TypeInfo_111_111, ml_backend__ml_type_gen__ExistQTVars_25, ml_backend__ml_type_gen__ConstrainedTVars_53, &ml_backend__ml_type_gen__UnconstrainedTVars_54);
              }
              {
                ml_backend__ml_type_gen__Var_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_93, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[0]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_93, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_1));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_93, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_93, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
              }
              ml_backend__ml_type_gen__TypeCtorInfo_117_117 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
              ml_backend__ml_type_gen__TypeCtorInfo_118_118 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
              ml_backend__ml_type_gen__TypeCtorInfo_119_119 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
              {
                mercury__list__map2_foldl_6_p_0(ml_backend__ml_type_gen__TypeInfo_111_111, ml_backend__ml_type_gen__TypeCtorInfo_117_117, ml_backend__ml_type_gen__TypeCtorInfo_118_118, ml_backend__ml_type_gen__TypeCtorInfo_119_119, ml_backend__ml_type_gen__Var_93, ml_backend__ml_type_gen__UnconstrainedTVars_54, &ml_backend__ml_type_gen__TypeInfoMembers_55, &ml_backend__ml_type_gen__TypeInfoFieldInfos_56, ((MR_Box) ((MR_Integer) 1)), &ml_backend__ml_type_gen__conv3_ArgNum1_57);
              }
              ml_backend__ml_type_gen__ArgNum1_57 = ((MR_Integer) ml_backend__ml_type_gen__conv3_ArgNum1_57);
              {
                ml_backend__ml_type_gen__Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_94, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[1]));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_94, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_94, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
                MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_94, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
              }
              {
                mercury__list__map2_foldl_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, ml_backend__ml_type_gen__TypeCtorInfo_117_117, ml_backend__ml_type_gen__TypeCtorInfo_118_118, ml_backend__ml_type_gen__TypeCtorInfo_119_119, ml_backend__ml_type_gen__Var_94, ml_backend__ml_type_gen__Constraints_26, &ml_backend__ml_type_gen__TypeClassInfoMembers_58, &ml_backend__ml_type_gen__TypeClassInfoFieldInfos_59, ((MR_Box) (ml_backend__ml_type_gen__ArgNum1_57)), &ml_backend__ml_type_gen__conv7_ArgNum2_50);
              }
              ml_backend__ml_type_gen__ArgNum2_50 = ((MR_Integer) ml_backend__ml_type_gen__conv7_ArgNum2_50);
              {
                ml_backend__ml_type_gen__ExtraMembers_48 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_117_117, ml_backend__ml_type_gen__TypeInfoMembers_55, ml_backend__ml_type_gen__TypeClassInfoMembers_58);
              }
              {
                ml_backend__ml_type_gen__ExtraFieldInfos_49 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_118_118, ml_backend__ml_type_gen__TypeInfoFieldInfos_56, ml_backend__ml_type_gen__TypeClassInfoFieldInfos_59);
              }
            }
          {
            ml_backend__ml_type_gen__Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[2]));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_3));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_13));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_95, 4) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
          }
          ml_backend__ml_type_gen__TypeCtorInfo_132_132 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
          ml_backend__ml_type_gen__TypeCtorInfo_133_133 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
          {
            mercury__list__map2_foldl_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, ml_backend__ml_type_gen__TypeCtorInfo_132_132, ml_backend__ml_type_gen__TypeCtorInfo_133_133, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ml_backend__ml_type_gen__Var_95, ml_backend__ml_type_gen__Args_28, &ml_backend__ml_type_gen__OrdinaryMembers_60, &ml_backend__ml_type_gen__OrdinaryFieldInfos_61, ((MR_Box) (ml_backend__ml_type_gen__ArgNum2_50)), &ml_backend__ml_type_gen__conv11__ArgNum3_62);
          }
          ml_backend__ml_type_gen___ArgNum3_62 = ((MR_Integer) ml_backend__ml_type_gen__conv11__ArgNum3_62);
          {
            ml_backend__ml_type_gen__Members_63 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_132_132, ml_backend__ml_type_gen__ExtraMembers_48, ml_backend__ml_type_gen__OrdinaryMembers_60);
          }
          {
            ml_backend__ml_type_gen__FieldInfos_64 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_133_133, ml_backend__ml_type_gen__ExtraFieldInfos_49, ml_backend__ml_type_gen__OrdinaryFieldInfos_61);
          }
          {
            ml_backend__ml_type_gen__MaybeSecTagVal_65 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_35);
          }
          {
            ml_backend__ml_type_gen__UsesConstructors_66 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(ml_backend__ml_type_gen__Target_33);
          }
          {
            ml_backend__ml_type_gen__UsesBaseClass_67 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ml_backend__ml_type_gen__TagVal_35);
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
                      MR_Word ml_backend__ml_type_gen__Var_96;

                      {
                        ml_backend__ml_type_gen__Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_96, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_15));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_96, 1) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_96, 2) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_34));
                      }
                      {
                        ml_backend__ml_type_gen__CtorClassType_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_68, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_96));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_68, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_29));
                        MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__CtorClassType_68, 3) = ((MR_Box) ((MR_Integer) 0));
                      }
                      {
                        ml_backend__ml_type_gen__CtorClassQualifier_69 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_33, ml_backend__ml_type_gen__BaseClassQualifier_15, (MR_Integer) 1, ml_backend__ml_type_gen__UnqualCtorName_34, ml_backend__ml_type_gen__CtorArity_29);
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
                  ml_backend__ml_type_gen__CtorFunction_70 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_type_gen__Target_33, ml_backend__ml_type_gen__BaseClassId_14, ml_backend__ml_type_gen__CtorClassType_68, ml_backend__ml_type_gen__CtorClassQualifier_69, ml_backend__ml_type_gen__SecondaryTagClassId_16, ml_backend__ml_type_gen__MaybeSecTagVal_65, ml_backend__ml_type_gen__FieldInfos_64, ml_backend__ml_type_gen__Context_31);
                }
                (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = (ml_backend__ml_type_gen__Target_33 == (MR_Integer) 2);
                if (!((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded))
                  {
                    MR_Word ml_backend__ml_type_gen__Var_100;

                    (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__TagVal_35)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_35, (MR_Integer) 0)))) == (MR_Integer) 17)));
                    if ((ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded)
                      {
                        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__RAs_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_35, (MR_Integer) 1)));
                        ml_backend__ml_type_gen__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_35, (MR_Integer) 2)));
                        (ml_backend__ml_type_gen__env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_12_p_0_env_0__succeeded = (ml_backend__ml_type_gen__Var_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
                    MR_Word ml_backend__ml_type_gen__Var_103;

                    {
                      ml_backend__ml_type_gen__ZeroArgCtor_78 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_type_gen__Target_33, ml_backend__ml_type_gen__BaseClassId_14, ml_backend__ml_type_gen__CtorClassType_68, ml_backend__ml_type_gen__CtorClassQualifier_69, ml_backend__ml_type_gen__SecondaryTagClassId_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_type_gen__Context_31);
                    }
                    {
                      ml_backend__ml_type_gen__Var_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_103, 0) = ((MR_Box) (ml_backend__ml_type_gen__CtorFunction_70));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_103, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      ml_backend__ml_type_gen__Ctors_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_79, 0) = ((MR_Box) (ml_backend__ml_type_gen__ZeroArgCtor_78));
                      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Ctors_79, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_103));
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
                MR_Word ml_backend__ml_type_gen__MLDS_TypeDefn_88;
                MR_Word ml_backend__ml_type_gen__Var_108;

                if ((ml_backend__ml_type_gen__MaybeSecTagVal_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    MR_Word ml_backend__ml_type_gen__UsesEmptyBaseClasses_82;

                    {
                      ml_backend__ml_type_gen__UsesEmptyBaseClasses_82 = ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(ml_backend__ml_type_gen__Target_33);
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
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_86, 0) = ((MR_Box) (ml_backend__ml_type_gen__UnqualCtorName_34));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_86, 1) = ((MR_Box) (ml_backend__ml_type_gen__CtorArity_29));
                }
                {
                  ml_backend__ml_type_gen__MLDS_TypeFlags_87 = ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0();
                }
                {
                  ml_backend__ml_type_gen__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_86));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_31));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_87));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 3) = ((MR_Box) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 5) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_81));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 7) = ((MR_Box) (ml_backend__ml_type_gen__TypeParams_85));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 8) = ((MR_Box) (ml_backend__ml_type_gen__Ctors_79));
                  MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_108, 9) = ((MR_Box) (ml_backend__ml_type_gen__Members_63));
                }
                ml_backend__ml_type_gen__MLDS_TypeDefn_88 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ml_backend__ml_type_gen__Var_108);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ml_backend__ml_type_gen__MLDS_Members_22 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefn_88));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Members0_21));
                }
                *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = ml_backend__ml_type_gen__MLDS_CtorMethods0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                {
                  *ml_backend__ml_type_gen__MLDS_Members_22 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_132_132, ml_backend__ml_type_gen__Members_63, ml_backend__ml_type_gen__MLDS_Members0_21);
                }
                {
                  *ml_backend__ml_type_gen__MLDS_CtorMethods_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_132_132, ml_backend__ml_type_gen__Ctors_79, ml_backend__ml_type_gen__MLDS_CtorMethods0_23);
                }
              }
              break;
          }
        }
    }
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
            ml_backend__ml_type_gen__conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "function \140ml_backend.ml_type_gen.target_uses_empty_base_classes\'/1", (MR_String) "target erlang");
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
    MR_Word ml_backend__ml_type_gen__TagVal_34;
    MR_Word ml_backend__ml_type_gen__Var_35;
    MR_Word ml_backend__ml_type_gen__Name_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 2)));
    MR_Integer ml_backend__ml_type_gen__Arity_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 4)));
    MR_Word ml_backend__ml_type_gen__Var_46;
    MR_Word ml_backend__ml_type_gen___ExistQTVars_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 0)));
    MR_Word ml_backend__ml_type_gen___Constraints_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 1)));
    MR_Word ml_backend__ml_type_gen___Args_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 3)));
    MR_Word ml_backend__ml_type_gen___Ctxt_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Ctor_9, (MR_Integer) 5)));
    MR_Box ml_backend__ml_type_gen__conv0_TagVal_34;

    {
      ml_backend__ml_type_gen__Var_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_46, 1) = ((MR_Box) (ml_backend__ml_type_gen__Name_42));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_46, 2) = ((MR_Box) (ml_backend__ml_type_gen__Arity_44));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_46, 3) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_7));
    }
    {
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ml_backend__ml_type_gen__ConsTagValues_8, ((MR_Box) (ml_backend__ml_type_gen__Var_46)), &ml_backend__ml_type_gen__conv0_TagVal_34);
    }
    ml_backend__ml_type_gen__TagVal_34 = ((MR_Word) ml_backend__ml_type_gen__conv0_TagVal_34);
    {
      ml_backend__ml_type_gen__Var_35 = hlds__hlds_data__get_secondary_tag_1_f_0(ml_backend__ml_type_gen__TagVal_34);
    }
    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Var_35)) == (MR_mktag((MR_Integer) 1)));
    if (ml_backend__ml_type_gen__succeeded)
      {
        ml_backend__ml_type_gen__SecondaryTag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_35, (MR_Integer) 0)));
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
          MR_Word ml_backend__ml_type_gen__Var_27;
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
            ml_backend__ml_type_gen__Var_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_24, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_24, 1) = ((MR_Box) (ml_backend__ml_type_gen__VarName_19));
          }
          {
            ml_backend__ml_type_gen__Var_25 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1);
          }
          {
            ml_backend__ml_type_gen__Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_27, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_20));
          }
          {
            ml_backend__ml_type_gen__Defn_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_24));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_6));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_25));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 4) = ((MR_Box) (ml_backend__ml_type_gen__Var_27));
            MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_21, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
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
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0_1(
  MR_Box ml_backend__ml_type_gen__closure_arg)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;

    {
      ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__379__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))));
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
    MR_Word ml_backend__ml_type_gen__Var_62;
    MR_Word ml_backend__ml_type_gen__Var_66;
    MR_Word ml_backend__ml_type_gen__Var_67;
    MR_Word ml_backend__ml_type_gen__Var_68;
    MR_Word ml_backend__ml_type_gen__Var_69;
    MR_Word ml_backend__ml_type_gen__Var_71;
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
            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ml_backend__ml_type_gen__Int_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 1)));
              MR_Word ml_backend__ml_type_gen__Var_61;

              {
                ml_backend__ml_type_gen__Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__Int_20));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_61, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_10));
              }
              {
                ml_backend__ml_type_gen__ConstValue_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_61));
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
                mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ml_backend__ml_type_gen__ForeignLang_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 1)));
              MR_String ml_backend__ml_type_gen__ForeignTagValue_23 = ((MR_String) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__TagVal_19, (MR_Integer) 2)));
              MR_Word ml_backend__ml_type_gen__Var_60;

              {
                ml_backend__ml_type_gen__Var_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_60, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_60, 1) = ((MR_Box) (ml_backend__ml_type_gen__ForeignLang_22));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_60, 2) = ((MR_Box) (ml_backend__ml_type_gen__ForeignTagValue_23));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_60, 3) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_10));
              }
              {
                ml_backend__ml_type_gen__ConstValue_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__ConstValue_21, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_60));
              }
            }
            break;
        }
        break;
    }
    {
      ml_backend__ml_type_gen__Var_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_62, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_62, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_62, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_62, 3) = ((MR_Box) (ml_backend__ml_type_gen__Arity_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_62, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_3_p_0(ml_backend__ml_type_gen__Var_62, (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "arity != []");
    }
    {
      ml_backend__ml_type_gen__UnqualifiedName_55 = mdbcomp__sym_name__unqualify_name_1_f_0(ml_backend__ml_type_gen__Name_15);
    }
    {
      ml_backend__ml_type_gen__Var_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_66, 1) = ((MR_Box) (ml_backend__ml_type_gen__UnqualifiedName_55));
    }
    {
      ml_backend__ml_type_gen__VarName_56 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__VarName_56, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__VarName_56, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_66));
    }
    {
      ml_backend__ml_type_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_68, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_68, 1) = ((MR_Box) (ml_backend__ml_type_gen__VarName_56));
    }
    {
      ml_backend__ml_type_gen__Var_69 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1);
    }
    {
      ml_backend__ml_type_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_71, 0) = ((MR_Box) (ml_backend__ml_type_gen__ConstValue_21));
    }
    {
      ml_backend__ml_type_gen__Var_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_68));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_69));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 4) = ((MR_Box) (ml_backend__ml_type_gen__Var_71));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_67, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ml_backend__ml_type_gen__Defn_12 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_67);
    return ml_backend__ml_type_gen__Defn_12;
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
                MR_Word ml_backend__ml_type_gen__Ctors_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 0)));
                MR_Word ml_backend__ml_type_gen__TagValues_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 1)));
                MR_Word ml_backend__ml_type_gen__DuTypeKind_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 3)));
                MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word ml_backend__ml_type_gen___CheaperTagTest_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 2)));
                MR_Word ml_backend__ml_type_gen__MaybeUserEqComp_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 4)));
                MR_Word ml_backend__ml_type_gen___MaybeDirectArgCtors_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 5)));
                MR_Word ml_backend__ml_type_gen___ReservedTag_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 6)))) & (MR_Integer) 1);
                MR_Word ml_backend__ml_type_gen__Var_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                MR_Word ml_backend__ml_type_gen__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TypeBody_20, (MR_Integer) 7)));

                switch (MR_tag((MR_Word) ml_backend__ml_type_gen__DuTypeKind_28)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ml_backend__ml_type_gen__DuTypeKind_28)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word ml_backend__ml_type_gen__Globals_36;
                          MR_Word ml_backend__ml_type_gen__Target_37;

                          {
                            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_36);
                          }
                          {
                            libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_36, &ml_backend__ml_type_gen__Target_37);
                          }
                          {
                            ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(ml_backend__ml_type_gen__Target_37, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_25, ml_backend__ml_type_gen__TagValues_26, ml_backend__ml_type_gen__MaybeEqualityMembers_34, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ml_backend__ml_type_gen__Globals_44;
                          MR_Word ml_backend__ml_type_gen__Target_45;

                          {
                            hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_44);
                          }
                          {
                            libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_44, &ml_backend__ml_type_gen__Target_45);
                          }
                          {
                            ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(ml_backend__ml_type_gen__Target_45, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_25, ml_backend__ml_type_gen__TagValues_26, ml_backend__ml_type_gen__MaybeEqualityMembers_34, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          ml_backend__ml_type_gen__ml_gen_hld_du_type_8_p_0(ml_backend__ml_type_gen__ModuleInfo_5, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_25, ml_backend__ml_type_gen__TagValues_26, ml_backend__ml_type_gen__MaybeEqualityMembers_34, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word ml_backend__ml_type_gen__Globals_36;
                      MR_Word ml_backend__ml_type_gen__Target_37;

                      {
                        hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_5, &ml_backend__ml_type_gen__Globals_36);
                      }
                      {
                        libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_36, &ml_backend__ml_type_gen__Target_37);
                      }
                      {
                        ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(ml_backend__ml_type_gen__Target_37, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_25, ml_backend__ml_type_gen__TagValues_26, ml_backend__ml_type_gen__MaybeEqualityMembers_34, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
                      }
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      ml_backend__ml_type_gen__ml_gen_hld_du_type_8_p_0(ml_backend__ml_type_gen__ModuleInfo_5, ml_backend__ml_type_gen__TypeCtor_6, ml_backend__ml_type_gen__TypeDefn_7, ml_backend__ml_type_gen__Ctors_25, ml_backend__ml_type_gen__TagValues_26, ml_backend__ml_type_gen__MaybeEqualityMembers_34, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_11, ml_backend__ml_type_gen__STATE_VARIABLE_Defns_12);
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
ml_backend__ml_type_gen__ml_gen_hld_du_type_8_p_0_1(
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
ml_backend__ml_type_gen__ml_gen_hld_du_type_8_p_0(
  MR_Word ml_backend__ml_type_gen__ModuleInfo_9,
  MR_Word ml_backend__ml_type_gen__TypeCtor_10,
  MR_Word ml_backend__ml_type_gen__TypeDefn_11,
  MR_Word ml_backend__ml_type_gen__Ctors_12,
  MR_Word ml_backend__ml_type_gen__TagValues_13,
  MR_Word ml_backend__ml_type_gen__MaybeEqualityMembers_14,
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_44,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_45)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__TypeInfo_73_73;
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_74_74;
    MR_Word ml_backend__ml_type_gen__Context_16;
    MR_Word ml_backend__ml_type_gen__QualBaseClassName_17;
    MR_Integer ml_backend__ml_type_gen__BaseClassArity_18;
    MR_Word ml_backend__ml_type_gen__BaseClassId_19;
    MR_Word ml_backend__ml_type_gen__BaseClassModuleName_20;
    MR_Word ml_backend__ml_type_gen__QualKind_21;
    MR_String ml_backend__ml_type_gen__BaseClassName_22;
    MR_Word ml_backend__ml_type_gen__Globals_23;
    MR_Word ml_backend__ml_type_gen__Target_24;
    MR_Word ml_backend__ml_type_gen__BaseClassQualifier_25;
    MR_Integer ml_backend__ml_type_gen__NumCtors_26;
    MR_Integer ml_backend__ml_type_gen__NumSecTagCtors_27;
    MR_Word ml_backend__ml_type_gen__TagMembers_31;
    MR_Word ml_backend__ml_type_gen__TagClassId_32;
    MR_Word ml_backend__ml_type_gen__CtorMembers_34;
    MR_Word ml_backend__ml_type_gen__BaseClassCtorMethods_35;
    MR_Word ml_backend__ml_type_gen__Implements_38;
    MR_Word ml_backend__ml_type_gen__TypeParams_39;
    MR_Word ml_backend__ml_type_gen__Members_40;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeName_41;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_42;
    MR_Word ml_backend__ml_type_gen__Defn_43;
    MR_Word ml_backend__ml_type_gen__Var_59;
    MR_Word ml_backend__ml_type_gen__Var_64;
    MR_Box ml_backend__ml_type_gen__conv3_CtorMembers_34;
    MR_Box ml_backend__ml_type_gen__conv2_BaseClassCtorMethods_35;

    {
      hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__Context_16);
    }
    {
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_10, &ml_backend__ml_type_gen__QualBaseClassName_17, &ml_backend__ml_type_gen__BaseClassArity_18);
    }
    {
      ml_backend__ml_type_gen__BaseClassId_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_19, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualBaseClassName_17));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_19, 2) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassArity_18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__BaseClassId_19, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    ml_backend__ml_type_gen__BaseClassModuleName_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_17, (MR_Integer) 0)));
    ml_backend__ml_type_gen__QualKind_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_17, (MR_Integer) 1)));
    ml_backend__ml_type_gen__BaseClassName_22 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualBaseClassName_17, (MR_Integer) 2)));
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(ml_backend__ml_type_gen__ModuleInfo_9, &ml_backend__ml_type_gen__Globals_23);
    }
    {
      libs__globals__get_target_2_p_0(ml_backend__ml_type_gen__Globals_23, &ml_backend__ml_type_gen__Target_24);
    }
    {
      ml_backend__ml_type_gen__BaseClassQualifier_25 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_24, ml_backend__ml_type_gen__BaseClassModuleName_20, ml_backend__ml_type_gen__QualKind_21, ml_backend__ml_type_gen__BaseClassName_22, ml_backend__ml_type_gen__BaseClassArity_18);
    }
    {
      ml_backend__ml_type_gen__ml_num_ctors_that_need_secondary_tag_7_p_0(ml_backend__ml_type_gen__TypeCtor_10, ml_backend__ml_type_gen__TagValues_13, ml_backend__ml_type_gen__Ctors_12, (MR_Integer) 0, &ml_backend__ml_type_gen__NumCtors_26, (MR_Integer) 0, &ml_backend__ml_type_gen__NumSecTagCtors_27);
    }
    ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__NumSecTagCtors_27 > (MR_Integer) 0);
    if (ml_backend__ml_type_gen__succeeded)
      {
        MR_Word ml_backend__ml_type_gen__TagDataMember_28;
        MR_Word ml_backend__ml_type_gen__TagMembers0_30;
        MR_Word ml_backend__ml_type_gen__Var_50;
        MR_Word ml_backend__ml_type_gen__Var_54;

        {
          ml_backend__ml_type_gen__Var_54 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
        }
        {
          ml_backend__ml_type_gen__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_2[8])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_54));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ml_backend__ml_type_gen__TagDataMember_28 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_50);
        {
          ml_backend__ml_type_gen__TagMembers0_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers0_30, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagDataMember_28));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers0_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        ml_backend__ml_type_gen__succeeded = (ml_backend__ml_type_gen__NumSecTagCtors_27 == ml_backend__ml_type_gen__NumCtors_26);
        if (ml_backend__ml_type_gen__succeeded)
          {
            ml_backend__ml_type_gen__TagMembers_31 = ml_backend__ml_type_gen__TagMembers0_30;
            ml_backend__ml_type_gen__TagClassId_32 = ml_backend__ml_type_gen__BaseClassId_19;
          }
        else
          {
            MR_Word ml_backend__ml_type_gen__TagTypeDefn_33;

            {
              ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(ml_backend__ml_type_gen__Context_16, ml_backend__ml_type_gen__BaseClassQualifier_25, ml_backend__ml_type_gen__BaseClassId_19, ml_backend__ml_type_gen__TagMembers0_30, ml_backend__ml_type_gen__Target_24, &ml_backend__ml_type_gen__TagTypeDefn_33, &ml_backend__ml_type_gen__TagClassId_32);
            }
            {
              ml_backend__ml_type_gen__TagMembers_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers_31, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagTypeDefn_33));
              MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__TagMembers_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
          }
      }
    else
      {
        ml_backend__ml_type_gen__TagMembers_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        ml_backend__ml_type_gen__TagClassId_32 = ml_backend__ml_type_gen__BaseClassId_19;
      }
    {
      ml_backend__ml_type_gen__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_type_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 3) = ((MR_Box) (ml_backend__ml_type_gen__ModuleInfo_9));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 5) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassQualifier_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 6) = ((MR_Box) (ml_backend__ml_type_gen__TagClassId_32));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 7) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 8) = ((MR_Box) (ml_backend__ml_type_gen__TypeDefn_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_59, 9) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_13));
    }
    ml_backend__ml_type_gen__TypeInfo_73_73 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[1];
    {
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ml_backend__ml_type_gen__TypeInfo_73_73, ml_backend__ml_type_gen__TypeInfo_73_73, ml_backend__ml_type_gen__Var_59, ml_backend__ml_type_gen__Ctors_12, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv3_CtorMembers_34, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ml_backend__ml_type_gen__conv2_BaseClassCtorMethods_35);
    }
    ml_backend__ml_type_gen__CtorMembers_34 = ((MR_Word) ml_backend__ml_type_gen__conv3_CtorMembers_34);
    ml_backend__ml_type_gen__BaseClassCtorMethods_35 = ((MR_Word) ml_backend__ml_type_gen__conv2_BaseClassCtorMethods_35);
    switch (ml_backend__ml_type_gen__Target_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        ml_backend__ml_type_gen__Implements_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_type_gen__Var_62;

          {
            ml_backend__ml_type_gen__Var_62 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
          }
          {
            ml_backend__ml_type_gen__Implements_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_38, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_62));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    {
      hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__TypeParams_39);
    }
    ml_backend__ml_type_gen__TypeCtorInfo_74_74 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      ml_backend__ml_type_gen__Var_64 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_74_74, ml_backend__ml_type_gen__TagMembers_31, ml_backend__ml_type_gen__CtorMembers_34);
    }
    {
      ml_backend__ml_type_gen__Members_40 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_74_74, ml_backend__ml_type_gen__MaybeEqualityMembers_14, ml_backend__ml_type_gen__Var_64);
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeName_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_41, 0) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassName_22));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_41, 1) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassArity_18));
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeFlags_42 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__Defn_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_41));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_42));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 6) = ((MR_Box) (ml_backend__ml_type_gen__Implements_38));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 7) = ((MR_Box) (ml_backend__ml_type_gen__TypeParams_39));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 8) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassCtorMethods_35));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Defn_43, 9) = ((MR_Box) (ml_backend__ml_type_gen__Members_40));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_45 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__Defn_43));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_44));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(
  MR_Word ml_backend__ml_type_gen__Context_8,
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
    MR_Word ml_backend__ml_type_gen__Var_29;

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
          MR_Word ml_backend__ml_type_gen__EmptyBaseClasses_40;
          MR_Box ml_backend__ml_type_gen__conv0_EmptyBaseClasses_40;

          {
            ml_backend__ml_type_gen__conv0_EmptyBaseClasses_40 = mercury__require__unexpected_2_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "function \140ml_backend.ml_type_gen.target_uses_empty_base_classes\'/1", (MR_String) "target erlang");
            return;
          }
          ml_backend__ml_type_gen__EmptyBaseClasses_40 = ((MR_Word) ml_backend__ml_type_gen__conv0_EmptyBaseClasses_40);
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
      ml_backend__ml_type_gen__MLDS_TypeFlags_25 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[6]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_8));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_25));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 5) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_20));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_29, 9) = ((MR_Box) (ml_backend__ml_type_gen__Members_11));
    }
    *ml_backend__ml_type_gen__MLDS_TypeDefn_13 = (MR_Word) MR_mkword(MR_mktag(2), (MR_Word) ml_backend__ml_type_gen__Var_29);
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
                MR_Word ml_backend__ml_type_gen__ArgX1_60;
                MR_Word ml_backend__ml_type_gen__ArgX2_62;
                MR_Integer ml_backend__ml_type_gen__ArgX3_64;

                {
                  ml_backend__ml_type_gen__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(ml_backend__ml_type_gen__TagVal_35, &ml_backend__ml_type_gen__Var_42);
                }
                if (ml_backend__ml_type_gen__succeeded)
                  {
                    ml_backend__ml_type_gen__succeeded = ((MR_tag((MR_Word) ml_backend__ml_type_gen__Var_42)) == (MR_mktag((MR_Integer) 2)));
                    if (ml_backend__ml_type_gen__succeeded)
                      {
                        ml_backend__ml_type_gen__ArgX1_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_42, (MR_Integer) 0)));
                        ml_backend__ml_type_gen__ArgX2_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_42, (MR_Integer) 1)));
                        ml_backend__ml_type_gen__ArgX3_64 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_42, (MR_Integer) 2)));
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
  MR_Word ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_33,
  MR_Word * ml_backend__ml_type_gen__STATE_VARIABLE_Defns_34)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_46_46;
    MR_Word ml_backend__ml_type_gen__Context_16;
    MR_Word ml_backend__ml_type_gen__QualifiedClassName_17;
    MR_Integer ml_backend__ml_type_gen__MLDS_ClassArity_18;
    MR_String ml_backend__ml_type_gen__MLDS_ClassName_21;
    MR_Word ml_backend__ml_type_gen__ValueMember_22;
    MR_Word ml_backend__ml_type_gen__MLDS_Type_23;
    MR_Word ml_backend__ml_type_gen__EnumConstMembers_24;
    MR_Word ml_backend__ml_type_gen__Members_25;
    MR_Word ml_backend__ml_type_gen__Implements_27;
    MR_Word ml_backend__ml_type_gen__Inherits_28;
    MR_Word ml_backend__ml_type_gen__TypeVars_29;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeName_30;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeFlags_31;
    MR_Word ml_backend__ml_type_gen__MLDS_TypeDefn_32;
    MR_Word ml_backend__ml_type_gen__Var_36;
    MR_Word ml_backend__ml_type_gen__Var_37;
    MR_Word ml_backend__ml_type_gen__Var_50;
    MR_Word ml_backend__ml_type_gen__Var_54;
    MR_Word ml_backend__ml_type_gen__Var_19;
    MR_Word ml_backend__ml_type_gen__Var_20;

    {
      hlds__hlds_data__get_type_defn_context_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__Context_16);
    }
    {
      ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(ml_backend__ml_type_gen__TypeCtor_10, &ml_backend__ml_type_gen__QualifiedClassName_17, &ml_backend__ml_type_gen__MLDS_ClassArity_18);
    }
    ml_backend__ml_type_gen__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_17, (MR_Integer) 0)));
    ml_backend__ml_type_gen__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_17, (MR_Integer) 1)));
    ml_backend__ml_type_gen__MLDS_ClassName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__QualifiedClassName_17, (MR_Integer) 2)));
    {
      ml_backend__ml_type_gen__Var_54 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__Var_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &ml_backend__ml_type_gen_scalar_common_2[5])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_54));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_50, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ml_backend__ml_type_gen__ValueMember_22 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_type_gen__Var_50);
    {
      ml_backend__ml_type_gen__MLDS_Type_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_23, 1) = ((MR_Box) (ml_backend__ml_type_gen__QualifiedClassName_17));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_23, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_18));
      MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__MLDS_Type_23, 3) = ((MR_Box) ((MR_Integer) 4));
    }
    ml_backend__ml_type_gen__TypeCtorInfo_46_46 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
    {
      ml_backend__ml_type_gen__Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_36, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_36, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0_1));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_36, 3) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_36, 4) = ((MR_Box) (ml_backend__ml_type_gen__TypeCtor_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_36, 5) = ((MR_Box) (ml_backend__ml_type_gen__TagValues_13));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_36, 6) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_Type_23));
    }
    {
      ml_backend__ml_type_gen__EnumConstMembers_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, ml_backend__ml_type_gen__TypeCtorInfo_46_46, ml_backend__ml_type_gen__Var_36, ml_backend__ml_type_gen__Ctors_12);
    }
    {
      ml_backend__ml_type_gen__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_37, 0) = ((MR_Box) (ml_backend__ml_type_gen__ValueMember_22));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_type_gen__EnumConstMembers_24));
    }
    {
      ml_backend__ml_type_gen__Members_25 = mercury__list__f_43_43_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_46_46, ml_backend__ml_type_gen__MaybeEqualityMembers_14, ml_backend__ml_type_gen__Var_37);
    }
    switch (ml_backend__ml_type_gen__Target_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 3:
        {
          ml_backend__ml_type_gen__Implements_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ml_backend__ml_type_gen__Inherits_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ml_backend__ml_type_gen__Var_38;
          MR_Word ml_backend__ml_type_gen__Var_40;

          {
            ml_backend__ml_type_gen__Var_38 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
          }
          {
            ml_backend__ml_type_gen__Implements_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_27, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_38));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Implements_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            ml_backend__ml_type_gen__Var_40 = ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0();
          }
          {
            ml_backend__ml_type_gen__Inherits_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_28, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_40));
            MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Inherits_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    {
      hlds__hlds_data__get_type_defn_tparams_2_p_0(ml_backend__ml_type_gen__TypeDefn_11, &ml_backend__ml_type_gen__TypeVars_29);
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_30, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassName_21));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeName_30, 1) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_ClassArity_18));
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeFlags_31 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    {
      ml_backend__ml_type_gen__MLDS_TypeDefn_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeName_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_16));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 2) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeFlags_31));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 3) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 5) = ((MR_Box) (ml_backend__ml_type_gen__Inherits_28));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 6) = ((MR_Box) (ml_backend__ml_type_gen__Implements_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 7) = ((MR_Box) (ml_backend__ml_type_gen__TypeVars_29));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__MLDS_TypeDefn_32, 9) = ((MR_Box) (ml_backend__ml_type_gen__Members_25));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ml_backend__ml_type_gen__STATE_VARIABLE_Defns_34 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_type_gen__MLDS_TypeDefn_32));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_type_gen__STATE_VARIABLE_Defns_0_33));
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
    MR_Word ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_4;

    {
      ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1), &ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_4);
    }
    *ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv0_MLDS_ExportedEnum_4));
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

    {
      hlds__hlds_module__module_info_get_exported_enums_2_p_0(ml_backend__ml_type_gen__ModuleInfo_3, &ml_backend__ml_type_gen__ExportedEnumInfo_5);
    }
    {
      mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_1[2], ml_backend__ml_type_gen__ExportedEnumInfo_5, ml_backend__ml_type_gen__MLDS_ExportedEnums_4);
    }
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
            ml_backend__ml_type_gen__conv0_HeadVar__2_2 = mercury__require__unexpected_2_f_0((MR_Word) &mercury__bool__bool__type_ctor_info_bool_0, (MR_String) "function \140ml_backend.ml_type_gen.ml_target_uses_constructors\'/1", (MR_String) "target erlang");
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
ml_backend__ml_type_gen__ml_gen_enum_constant_data_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__DeclFlags_2;

    {
      ml_backend__ml_type_gen__DeclFlags_2 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1);
    }
    return ml_backend__ml_type_gen__DeclFlags_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_const_member_data_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__DeclFlags_2;

    {
      ml_backend__ml_type_gen__DeclFlags_2 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 1);
    }
    return ml_backend__ml_type_gen__DeclFlags_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_member_data_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__DeclFlags_2;

    {
      ml_backend__ml_type_gen__DeclFlags_2 = ml_backend__mlds__init_data_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
    }
    return ml_backend__ml_type_gen__DeclFlags_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_member_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__DeclFlags_2;

    {
      ml_backend__ml_type_gen__DeclFlags_2 = ml_backend__mlds__init_function_decl_flags_2_f_0((MR_Integer) 0, (MR_Integer) 1);
    }
    return ml_backend__ml_type_gen__DeclFlags_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0(void)
{
  {
    MR_bool ml_backend__ml_type_gen__succeeded;
    MR_Word ml_backend__ml_type_gen__DeclFlags_2;

    {
      ml_backend__ml_type_gen__DeclFlags_2 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    }
    return ml_backend__ml_type_gen__DeclFlags_2;
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

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
  MR_Box ml_backend__ml_type_gen__closure_arg,
  MR_Box ml_backend__ml_type_gen__wrapper_arg_1)
{
  {
    MR_Box ml_backend__ml_type_gen__wrapper_arg_2;
    MR_Box ml_backend__ml_type_gen__closure = ml_backend__ml_type_gen__closure_arg;
    MR_Word ml_backend__ml_type_gen__conv1_Stmt_12;

    {
      ml_backend__ml_type_gen__conv1_Stmt_12 = ml_backend__ml_type_gen__gen_init_field_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__closure, (MR_Integer) 6))), ((MR_Word) ml_backend__ml_type_gen__wrapper_arg_1));
    }
    ml_backend__ml_type_gen__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_type_gen__conv1_Stmt_12));
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
    MR_Word ml_backend__ml_type_gen__TypeCtorInfo_41_41 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
    MR_Word ml_backend__ml_type_gen__Args_19;
    MR_Word ml_backend__ml_type_gen__InitMembers0_21;
    MR_Word ml_backend__ml_type_gen__InitMembers_24;
    MR_Word ml_backend__ml_type_gen__CtorFlags_26;
    MR_Word ml_backend__ml_type_gen__Params_27;
    MR_Word ml_backend__ml_type_gen__Stmt_28;
    MR_Word ml_backend__ml_type_gen__EnvVarNames_30;
    MR_Word ml_backend__ml_type_gen__Var_32;
    MR_Word ml_backend__ml_type_gen__Var_37;
    MR_Word ml_backend__ml_type_gen__Var_39;

    {
      ml_backend__ml_type_gen__Args_19 = mercury__list__map_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_41_41, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_1[1], ml_backend__ml_type_gen__FieldInfos_16);
    }
    {
      ml_backend__ml_type_gen__Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 3) = ((MR_Box) (ml_backend__ml_type_gen__Target_10));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 4) = ((MR_Box) (ml_backend__ml_type_gen__BaseClassId_11));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 5) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_32, 6) = ((MR_Box) (ml_backend__ml_type_gen__ClassQualifier_13));
    }
    {
      ml_backend__ml_type_gen__InitMembers0_21 = mercury__list__map_2_f_0(ml_backend__ml_type_gen__TypeCtorInfo_41_41, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, ml_backend__ml_type_gen__Var_32, ml_backend__ml_type_gen__FieldInfos_16);
    }
    if ((ml_backend__ml_type_gen__MaybeTag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ml_backend__ml_type_gen__InitMembers_24 = ml_backend__ml_type_gen__InitMembers0_21;
    else
      {
        MR_Integer ml_backend__ml_type_gen__TagVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__MaybeTag_15, (MR_Integer) 0)));
        MR_Word ml_backend__ml_type_gen__InitTag_23;
        MR_Word ml_backend__ml_type_gen__TagClassQualifier_61;
        MR_Word ml_backend__ml_type_gen__Val_64;
        MR_Word ml_backend__ml_type_gen__Field_65;
        MR_Word ml_backend__ml_type_gen__Var_68;
        MR_Word ml_backend__ml_type_gen__Var_71;
        MR_Word ml_backend__ml_type_gen__Var_72;
        MR_Word ml_backend__ml_type_gen__Var_73;
        MR_Word ml_backend__ml_type_gen__Var_75;
        MR_Word ml_backend__ml_type_gen__Var_76;
        MR_Word ml_backend__ml_type_gen__TagClass_55;
        MR_Integer ml_backend__ml_type_gen__TagArity_56;
        MR_Word ml_backend__ml_type_gen__Var_57;

        ml_backend__ml_type_gen__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_type_gen__SecondaryTagClassId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (ml_backend__ml_type_gen__succeeded)
          {
            ml_backend__ml_type_gen__TagClass_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 1)));
            ml_backend__ml_type_gen__TagArity_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 2)));
            ml_backend__ml_type_gen__Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__SecondaryTagClassId_14, (MR_Integer) 3)));
            {
              MR_Word ml_backend__ml_type_gen__BaseClassQualifier_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_55, (MR_Integer) 0)));
              MR_Word ml_backend__ml_type_gen__QualKind_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_55, (MR_Integer) 1)));
              MR_String ml_backend__ml_type_gen__TagClassName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__TagClass_55, (MR_Integer) 2)));

              {
                ml_backend__ml_type_gen__TagClassQualifier_61 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_type_gen__Target_10, ml_backend__ml_type_gen__BaseClassQualifier_58, ml_backend__ml_type_gen__QualKind_59, ml_backend__ml_type_gen__TagClassName_60, ml_backend__ml_type_gen__TagArity_56);
              }
            }
          }
        else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.gen_init_tag\'/5", (MR_String) "class_id should be a class");
            }
          }
        {
          ml_backend__ml_type_gen__Var_68 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_68, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagVal_22));
        }
        {
          ml_backend__ml_type_gen__Val_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Val_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Val_64, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_68));
        }
        {
          ml_backend__ml_type_gen__Var_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_71, 1) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
        }
        {
          ml_backend__ml_type_gen__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_73, 0) = ((MR_Box) (ml_backend__ml_type_gen__TagClassQualifier_61));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_73, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_73, 2) = ((MR_Box) ((MR_String) "data_tag"));
        }
        {
          ml_backend__ml_type_gen__Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__Var_75, 1) = ((MR_Box) (ml_backend__ml_type_gen__SecondaryTagClassId_14));
        }
        {
          ml_backend__ml_type_gen__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_72, 0) = ((MR_Box) (ml_backend__ml_type_gen__Var_73));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_72, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_75));
        }
        {
          ml_backend__ml_type_gen__Field_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_65, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[0])));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_65, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_71));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_65, 2) = ((MR_Box) (ml_backend__ml_type_gen__Var_72));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_65, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Field_65, 4) = ((MR_Box) (ml_backend__ml_type_gen__ClassType_12));
        }
        {
          ml_backend__ml_type_gen__Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_76, 0) = ((MR_Box) (ml_backend__ml_type_gen__Field_65));
          MR_hl_field(MR_mktag(2), ml_backend__ml_type_gen__Var_76, 1) = ((MR_Box) (ml_backend__ml_type_gen__Val_64));
        }
        {
          ml_backend__ml_type_gen__InitTag_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__InitTag_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__InitTag_23, 1) = ((MR_Box) (ml_backend__ml_type_gen__Var_76));
          MR_hl_field(MR_mktag(3), ml_backend__ml_type_gen__InitTag_23, 2) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
        }
        {
          ml_backend__ml_type_gen__InitMembers_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__InitMembers_24, 0) = ((MR_Box) (ml_backend__ml_type_gen__InitTag_23));
          MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__InitMembers_24, 1) = ((MR_Box) (ml_backend__ml_type_gen__InitMembers0_21));
        }
      }
    {
      ml_backend__ml_type_gen__CtorFlags_26 = ml_backend__mlds__init_function_decl_flags_2_f_0((MR_Integer) 0, (MR_Integer) 1);
    }
    {
      ml_backend__ml_type_gen__Params_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Params_27, 0) = ((MR_Box) (ml_backend__ml_type_gen__Args_19));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Params_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      ml_backend__ml_type_gen__Stmt_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_28, 1) = ((MR_Box) (ml_backend__ml_type_gen__InitMembers_24));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Stmt_28, 2) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
    }
    {
      ml_backend__ml_type_gen__EnvVarNames_30 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    }
    {
      ml_backend__ml_type_gen__Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), ml_backend__ml_type_gen__Var_39, 0) = ((MR_Box) (ml_backend__ml_type_gen__Stmt_28));
    }
    {
      ml_backend__ml_type_gen__Var_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[1])));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 1) = ((MR_Box) (ml_backend__ml_type_gen__Context_17));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 2) = ((MR_Box) (ml_backend__ml_type_gen__CtorFlags_26));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 4) = ((MR_Box) (ml_backend__ml_type_gen__Params_27));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 5) = ((MR_Box) (ml_backend__ml_type_gen__Var_39));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 7) = ((MR_Box) (ml_backend__ml_type_gen__EnvVarNames_30));
      MR_hl_field(MR_mktag(0), ml_backend__ml_type_gen__Var_37, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    ml_backend__ml_type_gen__CtorDefn_18 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_type_gen__Var_37);
    return ml_backend__ml_type_gen__CtorDefn_18;
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
      libs__globals__lookup_bool_option_3_p_0(ml_backend__ml_type_gen__Globals_5, (MR_Integer) 264, &ml_backend__ml_type_gen__HighLevelData_6);
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
