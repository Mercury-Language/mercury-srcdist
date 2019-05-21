/*
** Automatically generated from `ml_type_gen.m'
** by the Mercury compiler,
** version DEV
** configured for x86_64-pc-linux-gnu.
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


// :- module ml_backend.ml_type_gen.
// :- implementation.

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
#include "hlds.mark_tail_calls.mih"
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



struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s {
  MR_bool ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded;
  MR_Word ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RAs_73;
  jmp_buf ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__commit_0;
  MR_Word ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RA_112;
  MR_Box ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__conv12_RA_112;
};


static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

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
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1281__1_2_p_0(
  MR_Integer Arity_18,
  MR_Integer HeadVar__2_79);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__381__1_2_p_0(
  MR_Integer Arity_17,
  MR_Integer HeadVar__2_74);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Mapping_9,
  MR_Word TagValues_10,
  MR_Word MLDS_Type_11,
  MR_Word Ctor_12,
  MR_Word STATE_VARIABLE_ExportConstants_0_67,
  MR_Word * STATE_VARIABLE_ExportConstants_68);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(
  MR_Word ExportedEnumInfo_3,
  MR_Word * MLDS_ExportedEnum_4);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word Arg_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_18,
  MR_Integer * STATE_VARIABLE_ArgNum_19);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word TypeVar_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_16,
  MR_Integer * STATE_VARIABLE_ArgNum_17);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word Constraint_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * STATE_VARIABLE_ArgNum_16);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_5_f_0(
  MR_Word Target_7,
  MR_Word BaseClassId_8,
  MR_Word ClassType_9,
  MR_Word ClassQualifier_10,
  MR_Word FieldInfo_11);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
  MR_Word FieldInfo_3);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word BaseClassId_18,
  MR_Word BaseClassQualifier_19,
  MR_Word SecondaryTagClassId_20,
  MR_Word TypeCtor_21,
  MR_Word TypeDefn_22,
  MR_Word ConsTagValues_23,
  MR_Word Ctor_24,
  MR_Word BaseClassFields0_25,
  MR_Word * BaseClassFields_26,
  MR_Word BaseClassClasses0_27,
  MR_Word * BaseClassClasses_28,
  MR_Word BaseClassCtors0_29,
  MR_Word * BaseClassCtors_30);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_tag_constant_4_f_0(
  MR_Word Context_6,
  MR_Word TypeCtor_7,
  MR_Word ConsTagValues_8,
  MR_Word Ctor_9);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
  MR_Word TypeCtor_5,
  MR_Word ConsTagValues_6,
  MR_Word Ctor_7);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0(
  MR_Word Context_7,
  MR_Word TypeCtor_8,
  MR_Word ConsTagValues_9,
  MR_Word MLDS_Type_10,
  MR_Word Ctor_11);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Defns_0_13,
  MR_Word * STATE_VARIABLE_Defns_14);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word TypeCtor_9,
  MR_Word TypeDefn_10,
  MR_Word STATE_VARIABLE_Defns_0_31,
  MR_Word * STATE_VARIABLE_Defns_32);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Target_11,
  MR_Word TypeCtor_12,
  MR_Word TypeDefn_13,
  MR_Word Ctors_14,
  MR_Word TagValues_15,
  MR_Word MaybeEqualityMembers_16,
  MR_Word STATE_VARIABLE_Defns_0_47,
  MR_Word * STATE_VARIABLE_Defns_48);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(
  MR_Word Context_8,
  MR_Word BaseClassQualifier_9,
  MR_Word BaseClassId_10,
  MR_Word Members_11,
  MR_Word Target_12,
  MR_Word * MLDS_TypeDefn_13,
  MR_Word * SecondaryTagClassId_14);

static void MR_CALL 
ml_backend__ml_type_gen__ml_num_ctors_that_need_secondary_tag_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumCtors_0_4,
  MR_Integer * STATE_VARIABLE_NumCtors_5,
  MR_Integer STATE_VARIABLE_NumSecTagCtors_0_6,
  MR_Integer * STATE_VARIABLE_NumSecTagCtors_7);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * RA_2);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(
  MR_Word Target_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn_11,
  MR_Word Ctors_12,
  MR_Word TagValues_13,
  MR_Word MaybeEqualityMembers_14,
  MR_Word STATE_VARIABLE_Defns_0_33,
  MR_Word * STATE_VARIABLE_Defns_34);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____mlds_field_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_type_gen____Compare____mlds_field_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_1[3][3];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[9][2];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[1][8];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[3][5];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[2][9];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[2][1];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_7[1][18];

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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "tag_type")),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_7[1][18] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 15)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_cons_id_0__plain_hlds__hlds_data__type_ctor_info_cons_tag_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
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
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
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

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0
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
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_name_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_gc_statement_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0
};

static const MR_DuFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0 = {
  (MR_String) "mlds_field_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_type_gen__ml_backend__ml_type_gen__field_types_mlds_field_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_stag_ordered_mlds_field_info_0_0[1] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_ptag_ordered_mlds_field_info_0[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
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
  MR_TYPECTOR_REP_DU,
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
  MR_TYPECTOR_REP_ENUM,
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
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1281__1_2_p_0(
  MR_Integer Arity_18,
  MR_Integer HeadVar__2_79)
{
  {
    MR_bool succeeded = (Arity_18 == HeadVar__2_79);

    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__381__1_2_p_0(
  MR_Integer Arity_17,
  MR_Integer HeadVar__2_74)
{
  {
    MR_bool succeeded = (Arity_17 == HeadVar__2_74);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) HeadVar__3_3;

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
ml_backend__ml_type_gen____Compare____mlds_field_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_16 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word ArgX4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word ArgY4_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 3)));
      MR_Word Var_12;

      ml_backend__mlds____Compare____mlds_field_var_name_0_0(&Var_12, ArgX1_4, ArgY1_5);
      succeeded = (Var_12 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_12;
      else
      {
        MR_Word Var_13;

        ml_backend__mlds____Compare____mlds_type_0_0(&Var_13, ArgX2_6, ArgY2_7);
        succeeded = (Var_13 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_13;
        else
        {
          MR_Word Var_14;

          ml_backend__mlds____Compare____mlds_gc_statement_0_0(&Var_14, ArgX3_8, ArgY3_9);
          succeeded = (Var_14 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_14;
          else
            mercury__term____Compare____context_0_0(HeadVar__1_1, ArgX4_10, ArgY4_11);
        }
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____mlds_field_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgX4_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 3)));

      succeeded = ml_backend__mlds____Unify____mlds_field_var_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX2_5, ArgY2_6);
        if (succeeded)
        {
          succeeded = ml_backend__mlds____Unify____mlds_gc_statement_0_0(ArgX3_7, ArgY3_8);
          if (succeeded)
            succeeded = mercury__term____Unify____context_0_0(ArgX4_9, ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1281__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(
  MR_Word TypeCtor_8,
  MR_Word Mapping_9,
  MR_Word TagValues_10,
  MR_Word MLDS_Type_11,
  MR_Word Ctor_12,
  MR_Word STATE_VARIABLE_ExportConstants_0_67,
  MR_Word * STATE_VARIABLE_ExportConstants_68)
{
  {
    MR_bool succeeded;
    MR_Word QualName_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 2)));
    MR_Integer Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 4)));
    MR_Word TagVal_20;
    MR_Word ConstValue_23;
    MR_String UnqualName_63;
    MR_Word UnqualSymName_64;
    MR_String ForeignName_65;
    MR_Word ExportConstant_66;
    MR_Word Var_69;
    MR_Word Var_76;
    MR_Word Var_80;
    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 0)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 1)));
    MR_Word _Args_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 3)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_12, (MR_Integer) 5)));
    MR_Box conv0_TagVal_20;
    MR_Box conv1_ForeignName_65;

    {
      Var_69 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_69, 1) = ((MR_Box) (QualName_16));
      MR_hl_field(MR_mktag(3), Var_69, 2) = ((MR_Box) (Arity_18));
      MR_hl_field(MR_mktag(3), Var_69, 3) = ((MR_Box) (TypeCtor_8));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, TagValues_10, ((MR_Box) (Var_69)), &conv0_TagVal_20);
    TagVal_20 = ((MR_Word) conv0_TagVal_20);
    switch (MR_tag((MR_Word) TagVal_20)) {
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
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TagVal_20, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), TagVal_20, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) IntTag_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_21, (MR_Integer) 0)));
                    MR_Word Var_75;

                    {
                      Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Int_22));
                      MR_hl_field(MR_mktag(3), Var_75, 2) = ((MR_Box) (MLDS_Type_11));
                    }
                    {
                      ConstValue_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstValue_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstValue_23, 1) = ((MR_Box) (Var_75));
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
                  {
                    {
                      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
                      return;
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lang_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), TagVal_20, (MR_Integer) 1)));
              MR_String String_32 = ((MR_String) (MR_hl_field(MR_mktag(3), TagVal_20, (MR_Integer) 2)));
              MR_Word Var_72;

              {
                Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Lang_31));
                MR_hl_field(MR_mktag(3), Var_72, 2) = ((MR_Box) (String_32));
                MR_hl_field(MR_mktag(3), Var_72, 3) = ((MR_Box) (MLDS_Type_11));
              }
              {
                ConstValue_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstValue_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstValue_23, 1) = ((MR_Box) (Var_72));
              }
            }
            break;
          case (MR_Integer) 2:
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
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant requires an int or foreign tag");
                return;
              }
            }
            break;
        }
        break;
    }
    {
      Var_76 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_76, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_76, 1) = ((MR_Box) (ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0_1));
      MR_hl_field(MR_mktag(0), Var_76, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_76, 3) = ((MR_Box) (Arity_18));
      MR_hl_field(MR_mktag(0), Var_76, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_76, (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/7", (MR_String) "enum constant arity != 0");
    UnqualName_63 = mdbcomp__sym_name__unqualify_name_1_f_0(QualName_16);
    {
      UnqualSymName_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), UnqualSymName_64, 0) = ((MR_Box) (UnqualName_63));
    }
    mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, Mapping_9, ((MR_Box) (UnqualSymName_64)), &conv1_ForeignName_65);
    ForeignName_65 = ((MR_String) conv1_ForeignName_65);
    {
      Var_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_80, 0) = ((MR_Box) (ConstValue_23));
    }
    {
      ExportConstant_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ExportConstant_66, 0) = ((MR_Box) (ForeignName_65));
      MR_hl_field(MR_mktag(0), ExportConstant_66, 1) = ((MR_Box) (Var_80));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ExportConstants_68 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ExportConstant_66));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ExportConstants_0_67));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_ExportConstants_68;

    ml_backend__ml_type_gen__generate_foreign_enum_constant_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_ExportConstants_68);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ExportConstants_68));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(
  MR_Word ExportedEnumInfo_3,
  MR_Word * MLDS_ExportedEnum_4)
{
  {
    MR_Word Lang_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_3, (MR_Integer) 0)));
    MR_Word Context_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_3, (MR_Integer) 1)));
    MR_Word TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_3, (MR_Integer) 2)));
    MR_Word Mapping_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_3, (MR_Integer) 3)));
    MR_Word Ctors_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_3, (MR_Integer) 4)));
    MR_Word TagValues_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ExportedEnumInfo_3, (MR_Integer) 5)));
    MR_Word QualifiedClassName_11;
    MR_Integer MLDS_ClassArity_12;
    MR_Word MLDS_Type_13;
    MR_Word ExportConstants_14;
    MR_Word Var_16;
    MR_Box conv1_ExportConstants_14;

    ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_7, &QualifiedClassName_11, &MLDS_ClassArity_12);
    {
      MLDS_Type_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MLDS_Type_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), MLDS_Type_13, 1) = ((MR_Box) (QualifiedClassName_11));
      MR_hl_field(MR_mktag(3), MLDS_Type_13, 2) = ((MR_Box) (MLDS_ClassArity_12));
      MR_hl_field(MR_mktag(3), MLDS_Type_13, 3) = ((MR_Box) ((MR_Integer) 3));
    }
    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[3]));
      MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1));
      MR_hl_field(MR_mktag(0), Var_16, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_16, 3) = ((MR_Box) (TypeCtor_7));
      MR_hl_field(MR_mktag(0), Var_16, 4) = ((MR_Box) (Mapping_8));
      MR_hl_field(MR_mktag(0), Var_16, 5) = ((MR_Box) (TagValues_10));
      MR_hl_field(MR_mktag(0), Var_16, 6) = ((MR_Box) (MLDS_Type_13));
    }
    mercury__list__foldl_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[4], Var_16, Ctors_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_ExportConstants_14);
    ExportConstants_14 = ((MR_Word) conv1_ExportConstants_14);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *MLDS_ExportedEnum_4 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Lang_5));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_6));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeCtor_7));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ExportConstants_14));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word Arg_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_18,
  MR_Integer * STATE_VARIABLE_ArgNum_19)
{
  {
    MR_bool succeeded;
    MR_Word MaybeFieldName_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 0)));
    MR_Word Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 1)));
    MR_Word Width_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 2)));
    MR_Word FieldVarName_31;
    MR_Word DeclFlags_32;
    MR_Word MLDS_Type_33;
    MR_Word GcStmt_34;
    MR_Word _Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_10, (MR_Integer) 3)));

    FieldVarName_31 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(MaybeFieldName_14, STATE_VARIABLE_ArgNum_0_18);
    DeclFlags_32 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_8, Type_15, Width_16);
    if (succeeded)
      MLDS_Type_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      MLDS_Type_33 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_8, Type_15);
    GcStmt_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *Defn_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FieldVarName_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeclFlags_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MLDS_Type_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GcStmt_34));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FieldVarName_31));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_33));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GcStmt_34));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_9));
    }
    *STATE_VARIABLE_ArgNum_19 = (STATE_VARIABLE_ArgNum_0_18 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word TypeVar_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_16,
  MR_Integer * STATE_VARIABLE_ArgNum_17)
{
  {
    MR_bool succeeded;
    MR_Word Type_15;
    MR_Word Var_18;
    MR_Word FieldVarName_32;
    MR_Word DeclFlags_33;
    MR_Word MLDS_Type_34;
    MR_Word GcStmt_35;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (TypeVar_10));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    check_hlds__polymorphism__build_type_info_type_2_p_0(Var_18, &Type_15);
    FieldVarName_32 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_ArgNum_0_16);
    DeclFlags_33 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_8, Type_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    if (succeeded)
      MLDS_Type_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      MLDS_Type_34 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_8, Type_15);
    GcStmt_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *Defn_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FieldVarName_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeclFlags_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MLDS_Type_34));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GcStmt_35));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FieldVarName_32));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_34));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GcStmt_35));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_9));
    }
    *STATE_VARIABLE_ArgNum_17 = (STATE_VARIABLE_ArgNum_0_16 + (MR_Integer) 1);
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word Constraint_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * STATE_VARIABLE_ArgNum_16)
{
  {
    MR_bool succeeded;
    MR_Word Type_14;
    MR_Word FieldVarName_30;
    MR_Word DeclFlags_31;
    MR_Word MLDS_Type_32;
    MR_Word GcStmt_33;

    check_hlds__polymorphism__build_typeclass_info_type_2_p_0(Constraint_10, &Type_14);
    FieldVarName_30 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), STATE_VARIABLE_ArgNum_0_15);
    DeclFlags_31 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
    succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_8, Type_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    if (succeeded)
      MLDS_Type_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
    else
      MLDS_Type_32 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_8, Type_14);
    GcStmt_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      *Defn_11 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FieldVarName_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_9));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (DeclFlags_31));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MLDS_Type_32));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (GcStmt_33));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      *FieldInfo_12 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FieldVarName_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MLDS_Type_32));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GcStmt_33));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Context_9));
    }
    *STATE_VARIABLE_ArgNum_16 = (STATE_VARIABLE_ArgNum_0_15 + (MR_Integer) 1);
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_5_f_0(
  MR_Word Target_7,
  MR_Word BaseClassId_8,
  MR_Word ClassType_9,
  MR_Word ClassQualifier_10,
  MR_Word FieldInfo_11)
{
  {
    MR_bool succeeded;
    MR_Word Stmt_12;
    MR_Word FieldVarName_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldInfo_11, (MR_Integer) 0)));
    MR_Word Type_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldInfo_11, (MR_Integer) 1)));
    MR_Word Context_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldInfo_11, (MR_Integer) 3)));
    MR_Word LocalVarName_21;
    MR_Word Param_22;
    MR_Word Field_23;
    MR_Word Var_26;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word _GcStmt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldInfo_11, (MR_Integer) 2)));

    switch (Target_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word _QualClassName_18;
          MR_Integer Var_19;
          MR_Word Var_20;

          succeeded = ((((MR_tag((MR_Word) BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            _QualClassName_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), BaseClassId_8, (MR_Integer) 1)));
            Var_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), BaseClassId_8, (MR_Integer) 2)));
            Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), BaseClassId_8, (MR_Integer) 3)));
          }
          if (!(succeeded))
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word _QualClassName_38;
          MR_Integer Var_39;
          MR_Word Var_40;

          succeeded = ((((MR_tag((MR_Word) BaseClassId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), BaseClassId_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            _QualClassName_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), BaseClassId_8, (MR_Integer) 1)));
            Var_39 = ((MR_Integer) (MR_hl_field(MR_mktag(3), BaseClassId_8, (MR_Integer) 2)));
            Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), BaseClassId_8, (MR_Integer) 3)));
          }
          if (!(succeeded))
          {
            mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.gen_init_field\'/5", (MR_String) "invalid BaseClassId");
          }
        }
        break;
    }
    {
      LocalVarName_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), LocalVarName_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), LocalVarName_21, 1) = ((MR_Box) (FieldVarName_13));
    }
    {
      Var_26 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_26, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Var_26, 1) = ((MR_Box) (LocalVarName_21));
      MR_hl_field(MR_mktag(3), Var_26, 2) = ((MR_Box) (Type_14));
    }
    {
      Param_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Param_22, 0) = ((MR_Box) (Var_26));
    }
    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (ClassType_9));
    }
    {
      Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (ClassQualifier_10));
      MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) (FieldVarName_13));
    }
    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
      MR_hl_field(MR_mktag(3), Var_33, 1) = ((MR_Box) (ClassType_9));
    }
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) (Var_33));
    }
    {
      Field_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Field_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[0])));
      MR_hl_field(MR_mktag(0), Field_23, 1) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(0), Field_23, 2) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), Field_23, 3) = ((MR_Box) (Type_14));
      MR_hl_field(MR_mktag(0), Field_23, 4) = ((MR_Box) (BaseClassId_8));
    }
    {
      Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (Field_23));
      MR_hl_field(MR_mktag(2), Var_34, 1) = ((MR_Box) (Param_22));
    }
    {
      Stmt_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Stmt_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(3), Stmt_12, 1) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(3), Stmt_12, 2) = ((MR_Box) (Context_16));
    }
    return Stmt_12;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
  MR_Word FieldInfo_3)
{
  {
    MR_Word Arg_4;
    MR_Word FieldVarName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldInfo_3, (MR_Integer) 0)));
    MR_Word Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldInfo_3, (MR_Integer) 1)));
    MR_Word GcStmt_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldInfo_3, (MR_Integer) 2)));
    MR_Word Var_9;
    MR_Word _Context_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), FieldInfo_3, (MR_Integer) 3)));

    {
      Var_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
      MR_hl_field(MR_mktag(3), Var_9, 1) = ((MR_Box) (FieldVarName_5));
    }
    {
      Arg_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Arg_4, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(0), Arg_4, 1) = ((MR_Box) (Type_6));
      MR_hl_field(MR_mktag(0), Arg_4, 2) = ((MR_Box) (GcStmt_7));
    }
    return Arg_4;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv10_Defn_11;
    MR_Word conv9_FieldInfo_12;
    MR_Integer conv8_STATE_VARIABLE_ArgNum_19;

    ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv10_Defn_11, &conv9_FieldInfo_12, ((MR_Integer) wrapper_arg_4), &conv8_STATE_VARIABLE_ArgNum_19);
    *wrapper_arg_2 = ((MR_Box) (conv10_Defn_11));
    *wrapper_arg_3 = ((MR_Box) (conv9_FieldInfo_12));
    *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_ArgNum_19));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv6_Defn_11;
    MR_Word conv5_FieldInfo_12;
    MR_Integer conv4_STATE_VARIABLE_ArgNum_16;

    ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv6_Defn_11, &conv5_FieldInfo_12, ((MR_Integer) wrapper_arg_4), &conv4_STATE_VARIABLE_ArgNum_16);
    *wrapper_arg_2 = ((MR_Box) (conv6_Defn_11));
    *wrapper_arg_3 = ((MR_Box) (conv5_FieldInfo_12));
    *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ArgNum_16));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_Defn_11;
    MR_Word conv1_FieldInfo_12;
    MR_Integer conv0_STATE_VARIABLE_ArgNum_17;

    ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), &conv2_Defn_11, &conv1_FieldInfo_12, ((MR_Integer) wrapper_arg_4), &conv0_STATE_VARIABLE_ArgNum_17);
    *wrapper_arg_2 = ((MR_Box) (conv2_Defn_11));
    *wrapper_arg_3 = ((MR_Box) (conv1_FieldInfo_12));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ArgNum_17));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_4(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s * env_ptr = (struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s *) env_ptr_arg;

    MR_builtin_longjmp((env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_6(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s * env_ptr = (struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RA_112 = ((MR_Word) (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__conv12_RA_112);
    ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_5(env_ptr);
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_5(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s * env_ptr = (struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Integer Var_77;

      (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded = ((MR_tag((MR_Word) (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RA_112)) == (MR_mktag((MR_Integer) 2)));
      if ((env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded)
      {
        Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(2), (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RA_112, (MR_Integer) 0)));
        Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RA_112, (MR_Integer) 1)));
        Var_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RA_112, (MR_Integer) 2)));
        ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_4(env_ptr);
      }
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_7(
  void * env_ptr_arg)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s * env_ptr = (struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s *) env_ptr_arg;

    if (MR_builtin_setjmp((env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_reserved_address_0, &(env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__conv12_RA_112, (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RAs_73, ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_6, env_ptr);
        }
        (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0(
  MR_Word ModuleInfo_16,
  MR_Word Target_17,
  MR_Word BaseClassId_18,
  MR_Word BaseClassQualifier_19,
  MR_Word SecondaryTagClassId_20,
  MR_Word TypeCtor_21,
  MR_Word TypeDefn_22,
  MR_Word ConsTagValues_23,
  MR_Word Ctor_24,
  MR_Word BaseClassFields0_25,
  MR_Word * BaseClassFields_26,
  MR_Word BaseClassClasses0_27,
  MR_Word * BaseClassClasses_28,
  MR_Word BaseClassCtors0_29,
  MR_Word * BaseClassCtors_30)
{
  {
    struct ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0_s env;

    {
      MR_Word ExistQTVars_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 0)));
      MR_Word Constraints_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 1)));
      MR_Word CtorName_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 2)));
      MR_Word Args_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 3)));
      MR_Integer CtorArity_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 4)));
      MR_Word Context_37;
      MR_String UnqualCtorName_38;
      MR_Word TagVal_39;
      MR_Word _Ctxt_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 5)));
      MR_Word ReservedAddr_40;

      hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_22, &Context_37);
      UnqualCtorName_38 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(Target_17, TypeCtor_21, CtorName_33, CtorArity_35);
      TagVal_39 = ml_backend__ml_type_gen__get_tagval_3_f_0(TypeCtor_21, ConsTagValues_23, Ctor_24);
      (env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(TagVal_39, &ReservedAddr_40);
      if ((env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded)
      {
        switch (MR_tag((MR_Word) ReservedAddr_40)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *BaseClassFields_26 = BaseClassFields0_25;
            break;
          case (MR_Integer) 1:
            *BaseClassFields_26 = BaseClassFields0_25;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ReservedObjName_44;
              MR_Word ReservedObjDefn_47;

              {
                ReservedObjName_44 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), ReservedObjName_44, 0) = ((MR_Box) (UnqualCtorName_38));
                MR_hl_field(MR_mktag(2), ReservedObjName_44, 1) = ((MR_Box) (CtorArity_35));
              }
              {
                ReservedObjDefn_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ReservedObjDefn_47, 0) = ((MR_Box) (ReservedObjName_44));
                MR_hl_field(MR_mktag(0), ReservedObjDefn_47, 1) = ((MR_Box) (Context_37));
                MR_hl_field(MR_mktag(0), ReservedObjDefn_47, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[7]));
                MR_hl_field(MR_mktag(0), ReservedObjDefn_47, 3) = ((MR_Box) (SecondaryTagClassId_20));
                MR_hl_field(MR_mktag(0), ReservedObjDefn_47, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), ReservedObjDefn_47, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *BaseClassFields_26 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ReservedObjDefn_47));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BaseClassFields0_25));
              }
            }
            break;
        }
        *BaseClassClasses_28 = BaseClassClasses0_27;
        *BaseClassCtors_30 = BaseClassCtors0_29;
      }
      else
      {
        MR_Word TypeCtorInfo_134_134;
        MR_Word TypeCtorInfo_135_135;
        MR_Word PolyFields_50;
        MR_Word PolyFieldInfos_51;
        MR_Integer ArgNum2_52;
        MR_Word OrdinaryFields_62;
        MR_Word OrdinaryFieldInfos_63;
        MR_Word SubClassFields_65;
        MR_Word SubClassFieldInfos_66;
        MR_Word MaybeSecTagVal_67;
        MR_Word UsesConstructors_68;
        MR_Word UsesBaseClass_69;
        MR_Word SubClassCtors_81;
        MR_Word Var_96;
        MR_Integer _ArgNum3_64;
        MR_Box conv11__ArgNum3_64;

        if ((ExistQTVars_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          PolyFields_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          PolyFieldInfos_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          ArgNum2_52 = (MR_Integer) 1;
        }
        else
        {
          MR_Word TypeInfo_113_113;
          MR_Word TypeCtorInfo_119_119;
          MR_Word TypeCtorInfo_120_120;
          MR_Word TypeCtorInfo_121_121;
          MR_Word ConstrainedTVars_55;
          MR_Word UnconstrainedTVars_56;
          MR_Word TypeInfoFields_57;
          MR_Word TypeInfoFieldInfos_58;
          MR_Integer ArgNum1_59;
          MR_Word TypeClassInfoFields_60;
          MR_Word TypeClassInfoFieldInfos_61;
          MR_Word Var_94;
          MR_Word Var_95;
          MR_Box conv3_ArgNum1_59;
          MR_Box conv7_ArgNum2_52;

          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_32, &ConstrainedTVars_55);
          TypeInfo_113_113 = (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[3];
          mercury__list__delete_elems_3_p_0(TypeInfo_113_113, ExistQTVars_31, ConstrainedTVars_55, &UnconstrainedTVars_56);
          {
            Var_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_94, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[0]));
            MR_hl_field(MR_mktag(0), Var_94, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_1));
            MR_hl_field(MR_mktag(0), Var_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_94, 3) = ((MR_Box) (ModuleInfo_16));
            MR_hl_field(MR_mktag(0), Var_94, 4) = ((MR_Box) (Context_37));
          }
          TypeCtorInfo_119_119 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0;
          TypeCtorInfo_120_120 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
          TypeCtorInfo_121_121 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
          mercury__list__map2_foldl_6_p_0(TypeInfo_113_113, TypeCtorInfo_119_119, TypeCtorInfo_120_120, TypeCtorInfo_121_121, Var_94, UnconstrainedTVars_56, &TypeInfoFields_57, &TypeInfoFieldInfos_58, ((MR_Box) ((MR_Integer) 1)), &conv3_ArgNum1_59);
          ArgNum1_59 = ((MR_Integer) conv3_ArgNum1_59);
          {
            Var_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_95, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[1]));
            MR_hl_field(MR_mktag(0), Var_95, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_2));
            MR_hl_field(MR_mktag(0), Var_95, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_95, 3) = ((MR_Box) (ModuleInfo_16));
            MR_hl_field(MR_mktag(0), Var_95, 4) = ((MR_Box) (Context_37));
          }
          mercury__list__map2_foldl_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, TypeCtorInfo_119_119, TypeCtorInfo_120_120, TypeCtorInfo_121_121, Var_95, Constraints_32, &TypeClassInfoFields_60, &TypeClassInfoFieldInfos_61, ((MR_Box) (ArgNum1_59)), &conv7_ArgNum2_52);
          ArgNum2_52 = ((MR_Integer) conv7_ArgNum2_52);
          PolyFields_50 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_119_119, TypeInfoFields_57, TypeClassInfoFields_60);
          PolyFieldInfos_51 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_120_120, TypeInfoFieldInfos_58, TypeClassInfoFieldInfos_61);
        }
        {
          Var_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_96, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[2]));
          MR_hl_field(MR_mktag(0), Var_96, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_3));
          MR_hl_field(MR_mktag(0), Var_96, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), Var_96, 3) = ((MR_Box) (ModuleInfo_16));
          MR_hl_field(MR_mktag(0), Var_96, 4) = ((MR_Box) (Context_37));
        }
        TypeCtorInfo_134_134 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0;
        TypeCtorInfo_135_135 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
        mercury__list__map2_foldl_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, TypeCtorInfo_134_134, TypeCtorInfo_135_135, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, Var_96, Args_34, &OrdinaryFields_62, &OrdinaryFieldInfos_63, ((MR_Box) (ArgNum2_52)), &conv11__ArgNum3_64);
        _ArgNum3_64 = ((MR_Integer) conv11__ArgNum3_64);
        SubClassFields_65 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_134_134, PolyFields_50, OrdinaryFields_62);
        SubClassFieldInfos_66 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_135_135, PolyFieldInfos_51, OrdinaryFieldInfos_63);
        MaybeSecTagVal_67 = hlds__hlds_data__get_secondary_tag_1_f_0(TagVal_39);
        UsesConstructors_68 = ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(Target_17);
        UsesBaseClass_69 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(TagVal_39);
        switch (UsesConstructors_68) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            SubClassCtors_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word CtorClassType_70;
              MR_Word CtorClassQualifier_71;
              MR_Word SubClassCtorFunc_72;
              MR_Word Var_78;
              MR_Word Var_79;

              switch (UsesBaseClass_69) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_97;

                    {
                      Var_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_97, 0) = ((MR_Box) (BaseClassQualifier_19));
                      MR_hl_field(MR_mktag(0), Var_97, 1) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(0), Var_97, 2) = ((MR_Box) (UnqualCtorName_38));
                    }
                    {
                      CtorClassType_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), CtorClassType_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), CtorClassType_70, 1) = ((MR_Box) (Var_97));
                      MR_hl_field(MR_mktag(3), CtorClassType_70, 2) = ((MR_Box) (CtorArity_35));
                      MR_hl_field(MR_mktag(3), CtorClassType_70, 3) = ((MR_Box) ((MR_Integer) 0));
                    }
                    CtorClassQualifier_71 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_17, BaseClassQualifier_19, (MR_Integer) 1, UnqualCtorName_38, CtorArity_35);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    CtorClassType_70 = BaseClassId_18;
                    CtorClassQualifier_71 = BaseClassQualifier_19;
                  }
                  break;
              }
              SubClassCtorFunc_72 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(Target_17, BaseClassId_18, CtorClassType_70, CtorClassQualifier_71, SecondaryTagClassId_20, MaybeSecTagVal_67, SubClassFieldInfos_66, Context_37);
              (env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded = (Target_17 == (MR_Integer) 2);
              if (!((env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded))
              {
                MR_Word Var_101;

                (env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded = ((((MR_tag((MR_Word) TagVal_39)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TagVal_39, (MR_Integer) 0)))) == (MR_Integer) 16)));
                if ((env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded)
                {
                  (env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__RAs_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), TagVal_39, (MR_Integer) 1)));
                  Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), TagVal_39, (MR_Integer) 2)));
                  (env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded = (Var_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if ((env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded)
                    ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_7(&env);
                }
              }
              if ((env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded)
              {
                (env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded = ((MR_tag((MR_Word) SubClassFields_65)) == (MR_mktag((MR_Integer) 1)));
                if ((env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded)
                {
                  Var_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubClassFields_65, (MR_Integer) 0)));
                  Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubClassFields_65, (MR_Integer) 1)));
                }
              }
              if ((env).ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0_env_0__succeeded)
              {
                MR_Word ZeroArgCtorFunc_80;
                MR_Word Var_104;

                ZeroArgCtorFunc_80 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(Target_17, BaseClassId_18, CtorClassType_70, CtorClassQualifier_71, SecondaryTagClassId_20, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), Context_37);
                {
                  Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (SubClassCtorFunc_72));
                  MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
                {
                  SubClassCtors_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SubClassCtors_81, 0) = ((MR_Box) (ZeroArgCtorFunc_80));
                  MR_hl_field(MR_mktag(1), SubClassCtors_81, 1) = ((MR_Box) (Var_104));
                }
              }
              else
              {
                {
                  SubClassCtors_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), SubClassCtors_81, 0) = ((MR_Box) (SubClassCtorFunc_72));
                  MR_hl_field(MR_mktag(1), SubClassCtors_81, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
            }
            break;
        }
        switch (UsesBaseClass_69) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Inherits_83;
              MR_Word TypeParams_87;
              MR_Word SubClassTypeName_88;
              MR_Word SubClassTypeFlags_89;
              MR_Word SubClassDefn_90;

              if ((MaybeSecTagVal_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word UsesEmptyBaseClasses_84;

                UsesEmptyBaseClasses_84 = ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(Target_17);
                switch (UsesEmptyBaseClasses_84) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Inherits_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        Inherits_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Inherits_83, 0) = ((MR_Box) (BaseClassId_18));
                        MR_hl_field(MR_mktag(1), Inherits_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                    }
                    break;
                }
              }
              else
              {
                {
                  Inherits_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Inherits_83, 0) = ((MR_Box) (SecondaryTagClassId_20));
                  MR_hl_field(MR_mktag(1), Inherits_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                }
              }
              hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_22, &TypeParams_87);
              {
                SubClassTypeName_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SubClassTypeName_88, 0) = ((MR_Box) (UnqualCtorName_38));
                MR_hl_field(MR_mktag(0), SubClassTypeName_88, 1) = ((MR_Box) (CtorArity_35));
              }
              SubClassTypeFlags_89 = ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0();
              {
                SubClassDefn_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 0) = ((MR_Box) (SubClassTypeName_88));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 1) = ((MR_Box) (Context_37));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 2) = ((MR_Box) (SubClassTypeFlags_89));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 3) = ((MR_Box) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 5) = ((MR_Box) (Inherits_83));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 7) = ((MR_Box) (TypeParams_87));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 8) = ((MR_Box) (SubClassFields_65));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), SubClassDefn_90, 11) = ((MR_Box) (SubClassCtors_81));
              }
              *BaseClassFields_26 = BaseClassFields0_25;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *BaseClassClasses_28 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (SubClassDefn_90));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (BaseClassClasses0_27));
              }
              *BaseClassCtors_30 = BaseClassCtors0_29;
            }
            break;
          case (MR_Integer) 1:
            {
              *BaseClassFields_26 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_134_134, SubClassFields_65, BaseClassFields0_25);
              *BaseClassClasses_28 = BaseClassClasses0_27;
              *BaseClassCtors_30 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0, SubClassCtors_81, BaseClassCtors0_29);
            }
            break;
        }
      }
    }
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__target_uses_empty_base_classes_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_tag_constant_4_f_0(
  MR_Word Context_6,
  MR_Word TypeCtor_7,
  MR_Word ConsTagValues_8,
  MR_Word Ctor_9)
{
  {
    MR_bool succeeded;
    MR_Word Defns_10;
    MR_Integer SecondaryTag_11;
    MR_Word TagVal_32;
    MR_Word Var_33;
    MR_Word Name_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 2)));
    MR_Integer Arity_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 4)));
    MR_Word Var_44;
    MR_Word _ExistQTVars_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 0)));
    MR_Word _Constraints_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 1)));
    MR_Word _Args_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 3)));
    MR_Word _Ctxt_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 5)));
    MR_Box conv0_TagVal_32;

    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_44, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_44, 1) = ((MR_Box) (Name_40));
      MR_hl_field(MR_mktag(3), Var_44, 2) = ((MR_Box) (Arity_42));
      MR_hl_field(MR_mktag(3), Var_44, 3) = ((MR_Box) (TypeCtor_7));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagValues_8, ((MR_Box) (Var_44)), &conv0_TagVal_32);
    TagVal_32 = ((MR_Word) conv0_TagVal_32);
    Var_33 = hlds__hlds_data__get_secondary_tag_1_f_0(TagVal_32);
    succeeded = ((MR_tag((MR_Word) Var_33)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      SecondaryTag_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_33, (MR_Integer) 0)));
      {
        MR_Word Name_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 2)));
        MR_String UnqualifiedName_18;
        MR_Word VarName_19;
        MR_Word ConstValue_20;
        MR_Word Defn_21;
        MR_Word Var_22;
        MR_Word Var_25;
        MR_Word _ExistQTVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 0)));
        MR_Word _Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 1)));
        MR_Word _Args_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 3)));
        MR_Integer _Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 4)));
        MR_Word _Ctxt_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_9, (MR_Integer) 5)));

        UnqualifiedName_18 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_14);
        {
          VarName_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), VarName_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), VarName_19, 1) = ((MR_Box) (UnqualifiedName_18));
        }
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_22, 0) = ((MR_Box) (SecondaryTag_11));
        }
        {
          ConstValue_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ConstValue_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(3), ConstValue_20, 1) = ((MR_Box) (Var_22));
        }
        {
          Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (ConstValue_20));
        }
        {
          Defn_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Defn_21, 0) = ((MR_Box) (VarName_19));
          MR_hl_field(MR_mktag(0), Defn_21, 1) = ((MR_Box) (Context_6));
          MR_hl_field(MR_mktag(0), Defn_21, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[7]));
          MR_hl_field(MR_mktag(0), Defn_21, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
          MR_hl_field(MR_mktag(0), Defn_21, 4) = ((MR_Box) (Var_25));
          MR_hl_field(MR_mktag(0), Defn_21, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          Defns_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Defns_10, 0) = ((MR_Box) (Defn_21));
          MR_hl_field(MR_mktag(1), Defns_10, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    else
      Defns_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    return Defns_10;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__get_tagval_3_f_0(
  MR_Word TypeCtor_5,
  MR_Word ConsTagValues_6,
  MR_Word Ctor_7)
{
  {
    MR_Word TagVal_8;
    MR_Word Name_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 2)));
    MR_Integer Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 4)));
    MR_Word Var_15;
    MR_Word _ExistQTVars_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 0)));
    MR_Word _Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 1)));
    MR_Word _Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3)));
    MR_Word _Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 5)));
    MR_Box conv0_TagVal_8;

    {
      Var_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_15, 1) = ((MR_Box) (Name_11));
      MR_hl_field(MR_mktag(3), Var_15, 2) = ((MR_Box) (Arity_13));
      MR_hl_field(MR_mktag(3), Var_15, 3) = ((MR_Box) (TypeCtor_5));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagValues_6, ((MR_Box) (Var_15)), &conv0_TagVal_8);
    TagVal_8 = ((MR_Word) conv0_TagVal_8);
    return TagVal_8;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__381__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Integer) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))));
    return succeeded;
  }
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0(
  MR_Word Context_7,
  MR_Word TypeCtor_8,
  MR_Word ConsTagValues_9,
  MR_Word MLDS_Type_10,
  MR_Word Ctor_11)
{
  {
    MR_bool succeeded;
    MR_Word FieldVarDefn_12;
    MR_Word Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 2)));
    MR_Integer Arity_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 4)));
    MR_Word TagVal_19;
    MR_Word ConstValue_22;
    MR_String UnqualifiedName_62;
    MR_Word VarName_63;
    MR_Word Var_64;
    MR_Word Var_71;
    MR_Word Var_77;
    MR_Word _ExistQTVars_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 0)));
    MR_Word _Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 1)));
    MR_Word _Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 3)));
    MR_Word _Ctxt_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_11, (MR_Integer) 5)));
    MR_Box conv0_TagVal_19;

    {
      Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (Name_15));
      MR_hl_field(MR_mktag(3), Var_64, 2) = ((MR_Box) (Arity_17));
      MR_hl_field(MR_mktag(3), Var_64, 3) = ((MR_Box) (TypeCtor_8));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagValues_9, ((MR_Box) (Var_64)), &conv0_TagVal_19);
    TagVal_19 = ((MR_Word) conv0_TagVal_19);
    switch (MR_tag((MR_Word) TagVal_19)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TagVal_19, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word IntTag_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), TagVal_19, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) IntTag_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Integer Int_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), IntTag_20, (MR_Integer) 0)));
                    MR_Word Var_70;

                    {
                      Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                      MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (Int_21));
                      MR_hl_field(MR_mktag(3), Var_70, 2) = ((MR_Box) (MLDS_Type_10));
                    }
                    {
                      ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(3), ConstValue_22, 1) = ((MR_Box) (Var_70));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int tag");
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int tag");
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ForeignLang_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), TagVal_19, (MR_Integer) 1)));
              MR_String ForeignTagValue_31 = ((MR_String) (MR_hl_field(MR_mktag(3), TagVal_19, (MR_Integer) 2)));
              MR_Word Var_67;

              {
                Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (ForeignLang_30));
                MR_hl_field(MR_mktag(3), Var_67, 2) = ((MR_Box) (ForeignTagValue_31));
                MR_hl_field(MR_mktag(3), Var_67, 3) = ((MR_Box) (MLDS_Type_10));
              }
              {
                ConstValue_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ConstValue_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ConstValue_22, 1) = ((MR_Box) (Var_67));
              }
            }
            break;
          case (MR_Integer) 2:
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
            {
              mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "enum constant needs int or foreign tag");
            }
            break;
        }
        break;
    }
    {
      Var_71 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_71, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[2]));
      MR_hl_field(MR_mktag(0), Var_71, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0_1));
      MR_hl_field(MR_mktag(0), Var_71, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_71, 3) = ((MR_Box) (Arity_17));
      MR_hl_field(MR_mktag(0), Var_71, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_71, (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/5", (MR_String) "arity != []");
    UnqualifiedName_62 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_15);
    {
      VarName_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), VarName_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(3), VarName_63, 1) = ((MR_Box) (UnqualifiedName_62));
    }
    {
      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (ConstValue_22));
    }
    {
      FieldVarDefn_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), FieldVarDefn_12, 0) = ((MR_Box) (VarName_63));
      MR_hl_field(MR_mktag(0), FieldVarDefn_12, 1) = ((MR_Box) (Context_7));
      MR_hl_field(MR_mktag(0), FieldVarDefn_12, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[7]));
      MR_hl_field(MR_mktag(0), FieldVarDefn_12, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), FieldVarDefn_12, 4) = ((MR_Box) (Var_77));
      MR_hl_field(MR_mktag(0), FieldVarDefn_12, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return FieldVarDefn_12;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_Defns_0_13,
  MR_Word * STATE_VARIABLE_Defns_14)
{
  {
    MR_Word TypeCtor_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_Word TypeDefn_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
    MR_Word TypeStatus_11;
    MR_Word DefinedThisModule_12;

    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_9, &TypeStatus_11);
    DefinedThisModule_12 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_11);
    switch (DefinedThisModule_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Defns_14 = STATE_VARIABLE_Defns_0_13;
        break;
      case (MR_Integer) 1:
        ml_backend__ml_type_gen__ml_gen_hld_type_defn_6_p_0(ModuleInfo_6, Target_7, TypeCtor_8, TypeDefn_9, STATE_VARIABLE_Defns_0_13, STATE_VARIABLE_Defns_14);
        break;
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_FieldVarDefn_12;

    conv0_FieldVarDefn_12 = ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_FieldVarDefn_12));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_6_p_0(
  MR_Word ModuleInfo_7,
  MR_Word Target_8,
  MR_Word TypeCtor_9,
  MR_Word TypeDefn_10,
  MR_Word STATE_VARIABLE_Defns_0_31,
  MR_Word * STATE_VARIABLE_Defns_32)
{
  {
    MR_Word TypeBody_12;

    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_10, &TypeBody_12);
    switch (MR_tag((MR_Word) TypeBody_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Defns_32 = STATE_VARIABLE_Defns_0_31;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Ctors_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 0)));
          MR_Word TagValues_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 1)));
          MR_Word DuTypeKind_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 3)));
          MR_Word MaybeEqualityMembers_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word _CheaperTagTest_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 2)));
          MR_Word MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 4)));
          MR_Word _MaybeDirectArgCtors_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 5)));
          MR_Word _ReservedTag_23 = ((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word Var_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), TypeBody_12, (MR_Integer) 7)));

          switch (MR_tag((MR_Word) DuTypeKind_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(DuTypeKind_20)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(Target_8, TypeCtor_9, TypeDefn_10, Ctors_17, TagValues_18, MaybeEqualityMembers_26, STATE_VARIABLE_Defns_0_31, STATE_VARIABLE_Defns_32);
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word TypeCtorInfo_48_76;
                    MR_Word Context_46;
                    MR_Word QualifiedClassName_47;
                    MR_Integer MLDS_ClassArity_48;
                    MR_String MLDS_ClassName_51;
                    MR_Word ValueMember_52;
                    MR_Word MLDS_Type_53;
                    MR_Word EnumConstMembers_54;
                    MR_Word Members_55;
                    MR_Word Implements_57;
                    MR_Word Inherits_58;
                    MR_Word TypeVars_59;
                    MR_Word MLDS_TypeName_60;
                    MR_Word MLDS_TypeFlags_61;
                    MR_Word MLDS_TypeDefn_62;
                    MR_Word Var_64;
                    MR_Word Var_65;
                    MR_Word Var_49;
                    MR_Word Var_50;

                    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_10, &Context_46);
                    ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_9, &QualifiedClassName_47, &MLDS_ClassArity_48);
                    Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedClassName_47, (MR_Integer) 0)));
                    Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedClassName_47, (MR_Integer) 1)));
                    MLDS_ClassName_51 = ((MR_String) (MR_hl_field(MR_mktag(0), QualifiedClassName_47, (MR_Integer) 2)));
                    {
                      ValueMember_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), ValueMember_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), ValueMember_52, 1) = ((MR_Box) (Context_46));
                      MR_hl_field(MR_mktag(0), ValueMember_52, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[5]));
                      MR_hl_field(MR_mktag(0), ValueMember_52, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
                      MR_hl_field(MR_mktag(0), ValueMember_52, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), ValueMember_52, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MLDS_Type_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), MLDS_Type_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), MLDS_Type_53, 1) = ((MR_Box) (QualifiedClassName_47));
                      MR_hl_field(MR_mktag(3), MLDS_Type_53, 2) = ((MR_Box) (MLDS_ClassArity_48));
                      MR_hl_field(MR_mktag(3), MLDS_Type_53, 3) = ((MR_Box) ((MR_Integer) 3));
                    }
                    TypeCtorInfo_48_76 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0;
                    {
                      Var_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Var_64, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[1]));
                      MR_hl_field(MR_mktag(0), Var_64, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_type_defn_6_p_0_1));
                      MR_hl_field(MR_mktag(0), Var_64, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                      MR_hl_field(MR_mktag(0), Var_64, 3) = ((MR_Box) (Context_46));
                      MR_hl_field(MR_mktag(0), Var_64, 4) = ((MR_Box) (TypeCtor_9));
                      MR_hl_field(MR_mktag(0), Var_64, 5) = ((MR_Box) (TagValues_18));
                      MR_hl_field(MR_mktag(0), Var_64, 6) = ((MR_Box) (MLDS_Type_53));
                    }
                    EnumConstMembers_54 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, TypeCtorInfo_48_76, Var_64, Ctors_17);
                    {
                      Var_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_65, 0) = ((MR_Box) (ValueMember_52));
                      MR_hl_field(MR_mktag(1), Var_65, 1) = ((MR_Box) (EnumConstMembers_54));
                    }
                    Members_55 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_48_76, MaybeEqualityMembers_26, Var_65);
                    switch (Target_8) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                      case (MR_Integer) 1:
                        {
                          Implements_57 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          Inherits_58 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Var_66;
                          MR_Word Var_68;

                          Var_66 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
                          {
                            Implements_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Implements_57, 0) = ((MR_Box) (Var_66));
                            MR_hl_field(MR_mktag(1), Implements_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                          Var_68 = ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0();
                          {
                            Inherits_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Inherits_58, 0) = ((MR_Box) (Var_68));
                            MR_hl_field(MR_mktag(1), Inherits_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        }
                        break;
                    }
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_10, &TypeVars_59);
                    {
                      MLDS_TypeName_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MLDS_TypeName_60, 0) = ((MR_Box) (MLDS_ClassName_51));
                      MR_hl_field(MR_mktag(0), MLDS_TypeName_60, 1) = ((MR_Box) (MLDS_ClassArity_48));
                    }
                    MLDS_TypeFlags_61 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
                    {
                      MLDS_TypeDefn_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 0) = ((MR_Box) (MLDS_TypeName_60));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 1) = ((MR_Box) (Context_46));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 2) = ((MR_Box) (MLDS_TypeFlags_61));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 3) = ((MR_Box) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 5) = ((MR_Box) (Inherits_58));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 6) = ((MR_Box) (Implements_57));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 7) = ((MR_Box) (TypeVars_59));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 8) = ((MR_Box) (Members_55));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_62, 11) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      *STATE_VARIABLE_Defns_32 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MLDS_TypeDefn_62));
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Defns_0_31));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  ml_backend__ml_type_gen__ml_gen_hld_du_type_9_p_0(ModuleInfo_7, Target_8, TypeCtor_9, TypeDefn_10, Ctors_17, TagValues_18, MaybeEqualityMembers_26, STATE_VARIABLE_Defns_0_31, STATE_VARIABLE_Defns_32);
                  break;
              }
              break;
            case (MR_Integer) 1:
              ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(Target_8, TypeCtor_9, TypeDefn_10, Ctors_17, TagValues_18, MaybeEqualityMembers_26, STATE_VARIABLE_Defns_0_31, STATE_VARIABLE_Defns_32);
              break;
            case (MR_Integer) 2:
              ml_backend__ml_type_gen__ml_gen_hld_du_type_9_p_0(ModuleInfo_7, Target_8, TypeCtor_9, TypeDefn_10, Ctors_17, TagValues_18, MaybeEqualityMembers_26, STATE_VARIABLE_Defns_0_31, STATE_VARIABLE_Defns_32);
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_Defns_32 = STATE_VARIABLE_Defns_0_31;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TypeBody_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *STATE_VARIABLE_Defns_32 = STATE_VARIABLE_Defns_0_31;
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_Defns_32 = STATE_VARIABLE_Defns_0_31;
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv2_BaseClassFields_26;
    MR_Word conv1_BaseClassClasses_28;
    MR_Word conv0_BaseClassCtors_30;

    ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_15_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv2_BaseClassFields_26, ((MR_Word) wrapper_arg_4), &conv1_BaseClassClasses_28, ((MR_Word) wrapper_arg_6), &conv0_BaseClassCtors_30);
    *wrapper_arg_3 = ((MR_Box) (conv2_BaseClassFields_26));
    *wrapper_arg_5 = ((MR_Box) (conv1_BaseClassClasses_28));
    *wrapper_arg_7 = ((MR_Box) (conv0_BaseClassCtors_30));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_9_p_0(
  MR_Word ModuleInfo_10,
  MR_Word Target_11,
  MR_Word TypeCtor_12,
  MR_Word TypeDefn_13,
  MR_Word Ctors_14,
  MR_Word TagValues_15,
  MR_Word MaybeEqualityMembers_16,
  MR_Word STATE_VARIABLE_Defns_0_47,
  MR_Word * STATE_VARIABLE_Defns_48)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_80_80;
    MR_Word Context_18;
    MR_Word QualBaseClassName_19;
    MR_Integer BaseClassArity_20;
    MR_Word BaseClassId_21;
    MR_Word BaseClassModuleName_22;
    MR_Word QualKind_23;
    MR_String BaseClassName_24;
    MR_Word BaseClassQualifier_25;
    MR_Integer NumCtors_26;
    MR_Integer NumSecTagCtors_27;
    MR_Word TagFieldVarMembers_31;
    MR_Word TagClassMembers_32;
    MR_Word TagClassId_33;
    MR_Word CtorMemberFields_35;
    MR_Word CtorMemberClasses_36;
    MR_Word BaseClassCtorMethods_37;
    MR_Word Implements_40;
    MR_Word TypeParams_41;
    MR_Word MemberFields_42;
    MR_Word MemberClasses_43;
    MR_Word MLDS_TypeName_44;
    MR_Word MLDS_TypeFlags_45;
    MR_Word Defn_46;
    MR_Word Var_59;
    MR_Word Var_65;
    MR_Box conv5_CtorMemberFields_35;
    MR_Box conv4_CtorMemberClasses_36;
    MR_Box conv3_BaseClassCtorMethods_37;

    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_13, &Context_18);
    ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_12, &QualBaseClassName_19, &BaseClassArity_20);
    {
      BaseClassId_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), BaseClassId_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), BaseClassId_21, 1) = ((MR_Box) (QualBaseClassName_19));
      MR_hl_field(MR_mktag(3), BaseClassId_21, 2) = ((MR_Box) (BaseClassArity_20));
      MR_hl_field(MR_mktag(3), BaseClassId_21, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    BaseClassModuleName_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualBaseClassName_19, (MR_Integer) 0)));
    QualKind_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualBaseClassName_19, (MR_Integer) 1)));
    BaseClassName_24 = ((MR_String) (MR_hl_field(MR_mktag(0), QualBaseClassName_19, (MR_Integer) 2)));
    BaseClassQualifier_25 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_11, BaseClassModuleName_22, QualKind_23, BaseClassName_24, BaseClassArity_20);
    ml_backend__ml_type_gen__ml_num_ctors_that_need_secondary_tag_7_p_0(TypeCtor_12, TagValues_15, Ctors_14, (MR_Integer) 0, &NumCtors_26, (MR_Integer) 0, &NumSecTagCtors_27);
    succeeded = (NumSecTagCtors_27 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Word TagVarMember_28;
      MR_Word TagFieldVarMembers0_30;

      {
        TagVarMember_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TagVarMember_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        MR_hl_field(MR_mktag(0), TagVarMember_28, 1) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), TagVarMember_28, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[5]));
        MR_hl_field(MR_mktag(0), TagVarMember_28, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        MR_hl_field(MR_mktag(0), TagVarMember_28, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        MR_hl_field(MR_mktag(0), TagVarMember_28, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      {
        TagFieldVarMembers0_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), TagFieldVarMembers0_30, 0) = ((MR_Box) (TagVarMember_28));
        MR_hl_field(MR_mktag(1), TagFieldVarMembers0_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
      succeeded = (NumSecTagCtors_27 == NumCtors_26);
      if (succeeded)
      {
        TagFieldVarMembers_31 = TagFieldVarMembers0_30;
        TagClassMembers_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        TagClassId_33 = BaseClassId_21;
      }
      else
      {
        MR_Word TagTypeDefn_34;

        ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(Context_18, BaseClassQualifier_25, BaseClassId_21, TagFieldVarMembers0_30, Target_11, &TagTypeDefn_34, &TagClassId_33);
        TagFieldVarMembers_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          TagClassMembers_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), TagClassMembers_32, 0) = ((MR_Box) (TagTypeDefn_34));
          MR_hl_field(MR_mktag(1), TagClassMembers_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    else
    {
      TagFieldVarMembers_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      TagClassMembers_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      TagClassId_33 = BaseClassId_21;
    }
    {
      Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_59, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_type_9_p_0_1));
      MR_hl_field(MR_mktag(0), Var_59, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
      MR_hl_field(MR_mktag(0), Var_59, 3) = ((MR_Box) (ModuleInfo_10));
      MR_hl_field(MR_mktag(0), Var_59, 4) = ((MR_Box) (Target_11));
      MR_hl_field(MR_mktag(0), Var_59, 5) = ((MR_Box) (BaseClassId_21));
      MR_hl_field(MR_mktag(0), Var_59, 6) = ((MR_Box) (BaseClassQualifier_25));
      MR_hl_field(MR_mktag(0), Var_59, 7) = ((MR_Box) (TagClassId_33));
      MR_hl_field(MR_mktag(0), Var_59, 8) = ((MR_Box) (TypeCtor_12));
      MR_hl_field(MR_mktag(0), Var_59, 9) = ((MR_Box) (TypeDefn_13));
      MR_hl_field(MR_mktag(0), Var_59, 10) = ((MR_Box) (TagValues_15));
    }
    mercury__list__foldl3_8_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[1], (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[0], (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[2], Var_59, Ctors_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv5_CtorMemberFields_35, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv4_CtorMemberClasses_36, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv3_BaseClassCtorMethods_37);
    CtorMemberFields_35 = ((MR_Word) conv5_CtorMemberFields_35);
    CtorMemberClasses_36 = ((MR_Word) conv4_CtorMemberClasses_36);
    BaseClassCtorMethods_37 = ((MR_Word) conv3_BaseClassCtorMethods_37);
    switch (Target_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        Implements_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_63;

          Var_63 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
          {
            Implements_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Implements_40, 0) = ((MR_Box) (Var_63));
            MR_hl_field(MR_mktag(1), Implements_40, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_13, &TypeParams_41);
    TypeCtorInfo_80_80 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0;
    Var_65 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_80_80, TagFieldVarMembers_31, CtorMemberFields_35);
    MemberFields_42 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_80_80, MaybeEqualityMembers_16, Var_65);
    MemberClasses_43 = mercury__list__f_43_43_2_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0, TagClassMembers_32, CtorMemberClasses_36);
    {
      MLDS_TypeName_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MLDS_TypeName_44, 0) = ((MR_Box) (BaseClassName_24));
      MR_hl_field(MR_mktag(0), MLDS_TypeName_44, 1) = ((MR_Box) (BaseClassArity_20));
    }
    MLDS_TypeFlags_45 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    {
      Defn_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Defn_46, 0) = ((MR_Box) (MLDS_TypeName_44));
      MR_hl_field(MR_mktag(0), Defn_46, 1) = ((MR_Box) (Context_18));
      MR_hl_field(MR_mktag(0), Defn_46, 2) = ((MR_Box) (MLDS_TypeFlags_45));
      MR_hl_field(MR_mktag(0), Defn_46, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), Defn_46, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Defn_46, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Defn_46, 6) = ((MR_Box) (Implements_40));
      MR_hl_field(MR_mktag(0), Defn_46, 7) = ((MR_Box) (TypeParams_41));
      MR_hl_field(MR_mktag(0), Defn_46, 8) = ((MR_Box) (MemberFields_42));
      MR_hl_field(MR_mktag(0), Defn_46, 9) = ((MR_Box) (MemberClasses_43));
      MR_hl_field(MR_mktag(0), Defn_46, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Defn_46, 11) = ((MR_Box) (BaseClassCtorMethods_37));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Defns_48 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Defn_46));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Defns_0_47));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_secondary_tag_class_7_p_0(
  MR_Word Context_8,
  MR_Word BaseClassQualifier_9,
  MR_Word BaseClassId_10,
  MR_Word Members_11,
  MR_Word Target_12,
  MR_Word * MLDS_TypeDefn_13,
  MR_Word * SecondaryTagClassId_14)
{
  {
    MR_Word ClassName_16;
    MR_Word Inherits_20;
    MR_Word MLDS_TypeFlags_25;

    {
      ClassName_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ClassName_16, 0) = ((MR_Box) (BaseClassQualifier_9));
      MR_hl_field(MR_mktag(0), ClassName_16, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), ClassName_16, 2) = ((MR_Box) ((MR_String) "tag_type"));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *SecondaryTagClassId_14 = base;
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ClassName_16));
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Integer) 0));
    }
    switch (Target_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Inherits_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        Inherits_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          {
            Inherits_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Inherits_20, 0) = ((MR_Box) (BaseClassId_10));
            MR_hl_field(MR_mktag(1), Inherits_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    MLDS_TypeFlags_25 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      *MLDS_TypeDefn_13 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[8]));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Context_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MLDS_TypeFlags_25));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Inherits_20));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Members_11));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_num_ctors_that_need_secondary_tag_7_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Integer STATE_VARIABLE_NumCtors_0_4,
  MR_Integer * STATE_VARIABLE_NumCtors_5,
  MR_Integer STATE_VARIABLE_NumSecTagCtors_0_6,
  MR_Integer * STATE_VARIABLE_NumSecTagCtors_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_NumSecTagCtors_7 = STATE_VARIABLE_NumSecTagCtors_0_6;
      *STATE_VARIABLE_NumCtors_5 = STATE_VARIABLE_NumCtors_0_4;
    }
    else
    {
      MR_Word Ctor_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Ctors_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Integer STATE_VARIABLE_NumCtors_26_26 = (STATE_VARIABLE_NumCtors_0_4 + (MR_Integer) 1);
      MR_Integer STATE_VARIABLE_NumSecTagCtors_28_28;
      MR_Word TagVal_35;
      MR_Word Name_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 2)));
      MR_Integer Arity_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 4)));
      MR_Word Var_53;
      MR_Word _ExistQTVars_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 0)));
      MR_Word _Constraints_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 1)));
      MR_Word _Args_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 3)));
      MR_Word _Ctxt_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 5)));
      MR_Box conv0_TagVal_35;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_NumCtors_0_4;
      MR_Integer next_value_of_STATE_VARIABLE_NumSecTagCtors_0_6;

      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), Var_53, 1) = ((MR_Box) (Name_49));
        MR_hl_field(MR_mktag(3), Var_53, 2) = ((MR_Box) (Arity_51));
        MR_hl_field(MR_mktag(3), Var_53, 3) = ((MR_Box) (HeadVar__1_1));
      }
      mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, HeadVar__2_2, ((MR_Box) (Var_53)), &conv0_TagVal_35);
      TagVal_35 = ((MR_Word) conv0_TagVal_35);
      {
        MR_Word Var_41;
        MR_Integer Var_36;

        Var_41 = hlds__hlds_data__get_secondary_tag_1_f_0(TagVal_35);
        succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
          Var_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
      }
      if (!(succeeded))
      {
        MR_Word Var_42;
        MR_Word ArgX1_60;
        MR_Word ArgX2_62;
        MR_Integer ArgX3_64;

        succeeded = ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(TagVal_35, &Var_42);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Var_42)) == (MR_mktag((MR_Integer) 2)));
          if (succeeded)
          {
            ArgX1_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_42, (MR_Integer) 0)));
            ArgX2_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), Var_42, (MR_Integer) 1)));
            ArgX3_64 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_42, (MR_Integer) 2)));
          }
        }
      }
      if (succeeded)
      {
        STATE_VARIABLE_NumSecTagCtors_28_28 = (STATE_VARIABLE_NumSecTagCtors_0_6 + (MR_Integer) 1);
      }
      else
        STATE_VARIABLE_NumSecTagCtors_28_28 = STATE_VARIABLE_NumSecTagCtors_0_6;
      // direct tailcall eliminated
      next_value_of_HeadVar__3_3 = Ctors_19;
      next_value_of_STATE_VARIABLE_NumCtors_0_4 = STATE_VARIABLE_NumCtors_26_26;
      next_value_of_STATE_VARIABLE_NumSecTagCtors_0_6 = STATE_VARIABLE_NumSecTagCtors_28_28;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_NumCtors_0_4 = next_value_of_STATE_VARIABLE_NumCtors_0_4;
      STATE_VARIABLE_NumSecTagCtors_0_6 = next_value_of_STATE_VARIABLE_NumSecTagCtors_0_6;
      continue;
    }
    break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__tagval_is_reserved_addr_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * RA_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for tailcalls optimized into a loop
    if (((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
    {
      *RA_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
      succeeded = MR_TRUE;
    }
    else
    if (((((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
    {
      MR_Word TagVal_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1 = TagVal_5;

      // direct tailcall eliminated
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_FieldVarDefn_12;

    conv0_FieldVarDefn_12 = ml_backend__ml_type_gen__ml_gen_hld_enum_constant_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_FieldVarDefn_12));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0(
  MR_Word Target_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn_11,
  MR_Word Ctors_12,
  MR_Word TagValues_13,
  MR_Word MaybeEqualityMembers_14,
  MR_Word STATE_VARIABLE_Defns_0_33,
  MR_Word * STATE_VARIABLE_Defns_34)
{
  {
    MR_Word TypeCtorInfo_48_48;
    MR_Word Context_16;
    MR_Word QualifiedClassName_17;
    MR_Integer MLDS_ClassArity_18;
    MR_String MLDS_ClassName_21;
    MR_Word ValueMember_22;
    MR_Word MLDS_Type_23;
    MR_Word EnumConstMembers_24;
    MR_Word Members_25;
    MR_Word Implements_27;
    MR_Word Inherits_28;
    MR_Word TypeVars_29;
    MR_Word MLDS_TypeName_30;
    MR_Word MLDS_TypeFlags_31;
    MR_Word MLDS_TypeDefn_32;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_19;
    MR_Word Var_20;

    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_11, &Context_16);
    ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_10, &QualifiedClassName_17, &MLDS_ClassArity_18);
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedClassName_17, (MR_Integer) 0)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), QualifiedClassName_17, (MR_Integer) 1)));
    MLDS_ClassName_21 = ((MR_String) (MR_hl_field(MR_mktag(0), QualifiedClassName_17, (MR_Integer) 2)));
    {
      ValueMember_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ValueMember_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ValueMember_22, 1) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(0), ValueMember_22, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[5]));
      MR_hl_field(MR_mktag(0), ValueMember_22, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
      MR_hl_field(MR_mktag(0), ValueMember_22, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), ValueMember_22, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MLDS_Type_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), MLDS_Type_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(3), MLDS_Type_23, 1) = ((MR_Box) (QualifiedClassName_17));
      MR_hl_field(MR_mktag(3), MLDS_Type_23, 2) = ((MR_Box) (MLDS_ClassArity_18));
      MR_hl_field(MR_mktag(3), MLDS_Type_23, 3) = ((MR_Box) ((MR_Integer) 3));
    }
    TypeCtorInfo_48_48 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0;
    {
      Var_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_enum_type_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_36, 3) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(0), Var_36, 4) = ((MR_Box) (TypeCtor_10));
      MR_hl_field(MR_mktag(0), Var_36, 5) = ((MR_Box) (TagValues_13));
      MR_hl_field(MR_mktag(0), Var_36, 6) = ((MR_Box) (MLDS_Type_23));
    }
    EnumConstMembers_24 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, TypeCtorInfo_48_48, Var_36, Ctors_12);
    {
      Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (ValueMember_22));
      MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (EnumConstMembers_24));
    }
    Members_25 = mercury__list__f_43_43_2_f_0(TypeCtorInfo_48_48, MaybeEqualityMembers_14, Var_37);
    switch (Target_9) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          Implements_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Inherits_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Var_38;
          MR_Word Var_40;

          Var_38 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
          {
            Implements_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Implements_27, 0) = ((MR_Box) (Var_38));
            MR_hl_field(MR_mktag(1), Implements_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          Var_40 = ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0();
          {
            Inherits_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Inherits_28, 0) = ((MR_Box) (Var_40));
            MR_hl_field(MR_mktag(1), Inherits_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
    }
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_11, &TypeVars_29);
    {
      MLDS_TypeName_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MLDS_TypeName_30, 0) = ((MR_Box) (MLDS_ClassName_21));
      MR_hl_field(MR_mktag(0), MLDS_TypeName_30, 1) = ((MR_Box) (MLDS_ClassArity_18));
    }
    MLDS_TypeFlags_31 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    {
      MLDS_TypeDefn_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 0) = ((MR_Box) (MLDS_TypeName_30));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 1) = ((MR_Box) (Context_16));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 2) = ((MR_Box) (MLDS_TypeFlags_31));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 3) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 5) = ((MR_Box) (Inherits_28));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 6) = ((MR_Box) (Implements_27));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 7) = ((MR_Box) (TypeVars_29));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 8) = ((MR_Box) (Members_25));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 9) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 10) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), MLDS_TypeDefn_32, 11) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_Defns_34 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MLDS_TypeDefn_32));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Defns_0_33));
    }
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_MLDS_ExportedEnum_4;

    ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(((MR_Word) wrapper_arg_1), &conv0_MLDS_ExportedEnum_4);
    *wrapper_arg_2 = ((MR_Box) (conv0_MLDS_ExportedEnum_4));
  }
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * MLDS_ExportedEnums_4)
{
  {
    MR_Word ExportedEnumInfo_5;

    hlds__hlds_module__module_info_get_exported_enums_2_p_0(ModuleInfo_3, &ExportedEnumInfo_5);
    mercury__list__map_3_p_0((MR_Word) &hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_1[2], ExportedEnumInfo_5, MLDS_ExportedEnums_4);
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(
  MR_Word Tag_3)
{
  while (MR_TRUE)
  {
    MR_Word UsesBaseClass_4;

    // setup for tailcalls optimized into a loop
    switch (MR_tag((MR_Word) Tag_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Tag_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            UsesBaseClass_4 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            UsesBaseClass_4 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        UsesBaseClass_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Tag_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
          case (MR_Integer) 15:
            UsesBaseClass_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 7:
            {
              MR_Word SubTag_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_3, (MR_Integer) 2)));
              MR_Integer _ConstNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Tag_3, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_3 = SubTag_37;

              // direct tailcall eliminated
              Tag_3 = next_value_of_Tag_3;
              continue;
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word SubTag_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_3, (MR_Integer) 2)));
              MR_Word _RAs_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), Tag_3, (MR_Integer) 1)));
              MR_Word next_value_of_Tag_3 = SubTag_6;

              // direct tailcall eliminated
              Tag_3 = next_value_of_Tag_3;
              continue;
            }
            break;
        }
        break;
    }
    return UsesBaseClass_4;
    break;
  }
}

MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_uses_secondary_tag_4_p_0(
  MR_Word TypeCtor_5,
  MR_Word ConsTagValues_6,
  MR_Word Ctor_7,
  MR_Integer * SecondaryTag_8)
{
  {
    MR_bool succeeded;
    MR_Word TagVal_9;
    MR_Word Var_10;
    MR_Word Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 2)));
    MR_Integer Arity_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 4)));
    MR_Word Var_21;
    MR_Word _ExistQTVars_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 0)));
    MR_Word _Constraints_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 1)));
    MR_Word _Args_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 3)));
    MR_Word _Ctxt_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_7, (MR_Integer) 5)));
    MR_Box conv0_TagVal_9;

    {
      Var_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_21, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), Var_21, 1) = ((MR_Box) (Name_17));
      MR_hl_field(MR_mktag(3), Var_21, 2) = ((MR_Box) (Arity_19));
      MR_hl_field(MR_mktag(3), Var_21, 3) = ((MR_Box) (TypeCtor_5));
    }
    mercury__map__lookup_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0, ConsTagValues_6, ((MR_Box) (Var_21)), &conv0_TagVal_9);
    TagVal_9 = ((MR_Word) conv0_TagVal_9);
    Var_10 = hlds__hlds_data__get_secondary_tag_1_f_0(TagVal_9);
    succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
      *SecondaryTag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0)));
    return succeeded;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_enum_constant_data_decl_flags_0_f_0(void)
{
  {
    return (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[7];
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_const_member_data_decl_flags_0_f_0(void)
{
  {
    return (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[6];
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_member_data_decl_flags_0_f_0(void)
{
  {
    return (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[5];
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_member_decl_flags_0_f_0(void)
{
  {
    MR_Word DeclFlags_2;

    DeclFlags_2 = ml_backend__mlds__init_function_decl_flags_2_f_0((MR_Integer) 0, (MR_Integer) 1);
    return DeclFlags_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_decl_flags_0_f_0(void)
{
  {
    MR_Word DeclFlags_2;

    DeclFlags_2 = ml_backend__mlds__init_class_decl_flags_3_f_0((MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 0);
    return DeclFlags_2;
  }
}

MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(
  MR_Word CompilationTarget_6,
  MR_Word TypeCtor_7,
  MR_Word Name_8,
  MR_Integer Arity_9)
{
  {
    MR_String CtorName_10;
    MR_Word TypeName_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 0)));
    MR_Integer TypeArity_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), TypeCtor_7, (MR_Integer) 1)));
    MR_String UnqualTypeName_13;

    UnqualTypeName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeName_11);
    CtorName_10 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(CompilationTarget_6, UnqualTypeName_13, TypeArity_12, Name_8, Arity_9);
    return CtorName_10;
  }
}

MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(
  MR_Word CompilationTarget_7,
  MR_String UnqualTypeName_8,
  MR_Integer TypeArity_9,
  MR_Word Name_10,
  MR_Integer Arity_11)
{
  {
    MR_bool succeeded;
    MR_String CtorName_12;
    MR_String UnqualName_13;

    UnqualName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_10);
    switch (CompilationTarget_7) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        succeeded = MR_TRUE;
        break;
      case (MR_Integer) 2:
        succeeded = MR_TRUE;
        break;
    }
    if (succeeded)
    {
      succeeded = (strcmp(UnqualName_13, UnqualTypeName_8) == 0);
      if (succeeded)
        succeeded = (Arity_11 == TypeArity_9);
    }
    if (succeeded)
    {
      CtorName_12 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", UnqualName_13);
    }
    else
      CtorName_12 = UnqualName_13;
    return CtorName_12;
  }
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * QualifiedTypeName_6,
  MR_Integer * Arity_5)
{
  {
    MR_Word Name_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ModuleName_7;
    MR_String TypeName_8;
    MR_Word MLDS_Module_9;

    *Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    if (((MR_tag((MR_Word) Name_4)) == (MR_mktag((MR_Integer) 1))))
    {
      ModuleName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Name_4, (MR_Integer) 0)));
      TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(1), Name_4, (MR_Integer) 1)));
    }
    else
    {
      TypeName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Name_4, (MR_Integer) 0)));
      ModuleName_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    }
    MLDS_Module_9 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *QualifiedTypeName_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MLDS_Module_9));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (TypeName_8));
    }
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv1_Stmt_12;

    conv1_Stmt_12 = ml_backend__ml_type_gen__gen_init_field_5_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6))), ((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv1_Stmt_12));
    return wrapper_arg_2;
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv0_Arg_4;

    conv0_Arg_4 = ml_backend__ml_type_gen__make_arg_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_Arg_4));
    return wrapper_arg_2;
  }
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(
  MR_Word Target_10,
  MR_Word BaseClassId_11,
  MR_Word ClassType_12,
  MR_Word ClassQualifier_13,
  MR_Word SecondaryTagClassId_14,
  MR_Word MaybeTag_15,
  MR_Word FieldInfos_16,
  MR_Word Context_17)
{
  {
    MR_bool succeeded;
    MR_Word CtorDefn_18;
    MR_Word TypeCtorInfo_41_41 = (MR_Word) &ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0;
    MR_Word Args_19;
    MR_Word InitMembers0_21;
    MR_Word InitMembers_24;
    MR_Word CtorFlags_26;
    MR_Word Params_27;
    MR_Word Stmt_28;
    MR_Word EnvVarNames_30;
    MR_Word Var_32;
    MR_Word Var_39;

    Args_19 = mercury__list__map_2_f_0(TypeCtorInfo_41_41, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0, (MR_Word) &ml_backend__ml_type_gen_scalar_common_1[1], FieldInfos_16);
    {
      Var_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_32, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_32, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2));
      MR_hl_field(MR_mktag(0), Var_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
      MR_hl_field(MR_mktag(0), Var_32, 3) = ((MR_Box) (Target_10));
      MR_hl_field(MR_mktag(0), Var_32, 4) = ((MR_Box) (BaseClassId_11));
      MR_hl_field(MR_mktag(0), Var_32, 5) = ((MR_Box) (ClassType_12));
      MR_hl_field(MR_mktag(0), Var_32, 6) = ((MR_Box) (ClassQualifier_13));
    }
    InitMembers0_21 = mercury__list__map_2_f_0(TypeCtorInfo_41_41, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0, Var_32, FieldInfos_16);
    if ((MaybeTag_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      InitMembers_24 = InitMembers0_21;
    else
    {
      MR_Integer TagVal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeTag_15, (MR_Integer) 0)));
      MR_Word InitTag_23;
      MR_Word TagClassQualifier_61;
      MR_Word Val_63;
      MR_Word Field_64;
      MR_Word Var_67;
      MR_Word Var_70;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_75;
      MR_Word Var_76;
      MR_Word TagClass_55;
      MR_Integer TagArity_56;
      MR_Word Var_57;

      succeeded = ((((MR_tag((MR_Word) SecondaryTagClassId_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SecondaryTagClassId_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        TagClass_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), SecondaryTagClassId_14, (MR_Integer) 1)));
        TagArity_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), SecondaryTagClassId_14, (MR_Integer) 2)));
        Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), SecondaryTagClassId_14, (MR_Integer) 3)));
        {
          MR_Word BaseClassQualifier_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), TagClass_55, (MR_Integer) 0)));
          MR_Word QualKind_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), TagClass_55, (MR_Integer) 1)));
          MR_String TagClassName_60 = ((MR_String) (MR_hl_field(MR_mktag(0), TagClass_55, (MR_Integer) 2)));

          TagClassQualifier_61 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_10, BaseClassQualifier_58, QualKind_59, TagClassName_60, TagArity_56);
        }
      }
      else
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140ml_backend.ml_type_gen.gen_init_tag\'/5", (MR_String) "class_id should be a class");
      }
      {
        Var_67 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_67, 0) = ((MR_Box) (TagVal_22));
      }
      {
        Val_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Val_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(3), Val_63, 1) = ((MR_Box) (Var_67));
      }
      {
        Var_70 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_70, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), Var_70, 1) = ((MR_Box) (ClassType_12));
      }
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (TagClassQualifier_61));
        MR_hl_field(MR_mktag(0), Var_72, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_72, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
      }
      {
        Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
        MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (SecondaryTagClassId_14));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (Var_75));
      }
      {
        Field_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Field_64, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[0])));
        MR_hl_field(MR_mktag(0), Field_64, 1) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), Field_64, 2) = ((MR_Box) (Var_71));
        MR_hl_field(MR_mktag(0), Field_64, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
        MR_hl_field(MR_mktag(0), Field_64, 4) = ((MR_Box) (ClassType_12));
      }
      {
        Var_76 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_76, 0) = ((MR_Box) (Field_64));
        MR_hl_field(MR_mktag(2), Var_76, 1) = ((MR_Box) (Val_63));
      }
      {
        InitTag_23 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), InitTag_23, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
        MR_hl_field(MR_mktag(3), InitTag_23, 1) = ((MR_Box) (Var_76));
        MR_hl_field(MR_mktag(3), InitTag_23, 2) = ((MR_Box) (Context_17));
      }
      {
        InitMembers_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), InitMembers_24, 0) = ((MR_Box) (InitTag_23));
        MR_hl_field(MR_mktag(1), InitMembers_24, 1) = ((MR_Box) (InitMembers0_21));
      }
    }
    CtorFlags_26 = ml_backend__mlds__init_function_decl_flags_2_f_0((MR_Integer) 0, (MR_Integer) 1);
    {
      Params_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Params_27, 0) = ((MR_Box) (Args_19));
      MR_hl_field(MR_mktag(0), Params_27, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    {
      Stmt_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Stmt_28, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Stmt_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), Stmt_28, 2) = ((MR_Box) (InitMembers_24));
      MR_hl_field(MR_mktag(0), Stmt_28, 3) = ((MR_Box) (Context_17));
    }
    EnvVarNames_30 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
    {
      Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Stmt_28));
    }
    {
      CtorDefn_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), CtorDefn_18, 0) = ((MR_Box) (MR_mkword(MR_mktag(1), &ml_backend__ml_type_gen_scalar_common_6[1])));
      MR_hl_field(MR_mktag(0), CtorDefn_18, 1) = ((MR_Box) (Context_17));
      MR_hl_field(MR_mktag(0), CtorDefn_18, 2) = ((MR_Box) (CtorFlags_26));
      MR_hl_field(MR_mktag(0), CtorDefn_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), CtorDefn_18, 4) = ((MR_Box) (Params_27));
      MR_hl_field(MR_mktag(0), CtorDefn_18, 5) = ((MR_Box) (Var_39));
      MR_hl_field(MR_mktag(0), CtorDefn_18, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      MR_hl_field(MR_mktag(0), CtorDefn_18, 7) = ((MR_Box) (EnvVarNames_30));
      MR_hl_field(MR_mktag(0), CtorDefn_18, 8) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return CtorDefn_18;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_STATE_VARIABLE_Defns_14;

    ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), ((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv0_STATE_VARIABLE_Defns_14);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Defns_14));
  }
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Target_5,
  MR_Word * Defns_6)
{
  {
    MR_Word Globals_7;
    MR_Word HighLevelData_8;

    hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_4, &Globals_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 265, &HighLevelData_8);
    switch (HighLevelData_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Defns_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeTable_9;
          MR_Word TypeCtorDefns_10;
          MR_Word Var_12;
          MR_Box conv1_Defns_6;

          hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_9);
          hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_9, &TypeCtorDefns_10);
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_types_3_p_0_1));
            MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (ModuleInfo_4));
            MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Target_5));
          }
          mercury__list__foldl_4_p_0((MR_Word) &ml_backend__ml_type_gen_scalar_common_1[0], (MR_Word) &ml_backend__ml_type_gen_scalar_common_2[0], Var_12, TypeCtorDefns_10, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &conv1_Defns_6);
          *Defns_6 = ((MR_Word) conv1_Defns_6);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____mlds_field_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_type_gen____Unify____mlds_field_info_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen____Compare____mlds_field_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_type_gen____Compare____mlds_field_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ml_backend.ml_type_gen.
