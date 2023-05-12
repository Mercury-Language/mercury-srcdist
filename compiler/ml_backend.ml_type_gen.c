/*
** Automatically generated from `ml_type_gen.m'
** by the Mercury compiler,
** version rotd-2023-05-12
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_code_util.mih"
#include "ml_backend.ml_gen_info.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.file_names.mih"
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
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0;

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_type_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo ml_backend__ml_type_gen__ml_backend__ml_type_gen__field_types_mlds_field_info_0_0[4];

static const MR_DuFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0;

static const MR_DuFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_stag_ordered_mlds_field_info_0_0[1];

static const MR_DuPtagLayout ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_ptag_ordered_mlds_field_info_0[1];

static const MR_DuFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_name_ordered_mlds_field_info_0[1];

static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_mlds_field_info_0[1];

static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0;

static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1;

static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_ordinal_ordered_tag_uses_base_class_0[2];

static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0[2];

static const MR_Integer ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0[2];

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1040__1_2_p_0(
  MR_Integer Arity_14,
  MR_Integer HeadVar__2_22);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_du_ctor_member__590__1_2_p_0(
  MR_Word UnconstrainedTVarsEC_45,
  MR_Word UnconstrainedTVars_48);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__318__1_2_p_0(
  MR_Integer Arity_14,
  MR_Integer HeadVar__2_23);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_4_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_4_p_0(
  MR_Word Mapping_5,
  MR_Word MLDS_Type_6,
  MR_Word CtorRepn_7,
  MR_Word * ExportConstant_8);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(
  MR_Word ExportedEnumInfo_3,
  MR_Word * MLDS_ExportedEnum_4);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word ArgRepn_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_19,
  MR_Integer * STATE_VARIABLE_ArgNum_20);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word TypeVar_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * STATE_VARIABLE_ArgNum_16);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word _Constraint_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * STATE_VARIABLE_ArgNum_16);

static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_104_108_100_95_100_117_95_99_116_111_114_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_105_101_108_100_95_95_91_51_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * STATE_VARIABLE_ArgNum_16);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_4_f_0(
  MR_Word BaseClassId_6,
  MR_Word CtorClassId_7,
  MR_Word ClassQualifier_8,
  MR_Word FieldInfo_9);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
  MR_Word FieldInfo_3);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word BaseClassId_17,
  MR_Word BaseClassQualifier_18,
  MR_Word SecondaryTagClassId_19,
  MR_Word TypeCtor_20,
  MR_Word TypeDefn_21,
  MR_Word CtorRepn_22,
  MR_Word BaseClassFields0_23,
  MR_Word * BaseClassFields_24,
  MR_Word BaseClassClasses0_25,
  MR_Word * BaseClassClasses_26,
  MR_Word BaseClassCtors0_27,
  MR_Word * BaseClassCtors_28);

static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_3_f_0_1(
  MR_Box closure_arg);

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_3_f_0(
  MR_Word Context_5,
  MR_Word MLDS_Type_6,
  MR_Word CtorRepn_7);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ClassDefns_0_13,
  MR_Word * STATE_VARIABLE_ClassDefns_14);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn_11,
  MR_Word CtorRepns_12,
  MR_Word MaybeEqualityMembers_13,
  MR_Word * ClassDefn_14);

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_6_p_0(
  MR_Word Target_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word CtorRepns_10,
  MR_Word MaybeEqualityMembers_11,
  MR_Word * ClassDefn_12);

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);

static void MR_CALL 
ml_backend__ml_type_gen__ctors_with_and_without_secondary_tag_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumWith_0_2,
  MR_Integer * STATE_VARIABLE_NumWith_3,
  MR_Integer STATE_VARIABLE_NumWithout_0_4,
  MR_Integer * STATE_VARIABLE_NumWithout_5);

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

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[6][2];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[5][1];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[2][8];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[4][5];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[2][7];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_7[1][17];

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_8[3][10];




static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[0])),
    ((MR_Box) (ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[1])),
    ((MR_Box) (ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_2[6][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 3U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_3[5][1] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "<constructor>"))
  },
  /* row   1 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 1)) | (MR_Unsigned) 1U))
  },
  /* row   2 */
  {
    ((MR_Box) (((MR_Box) (MR_Word) (UINT8_C(0)))))
  },
  /* row   3 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))
  },
  /* row   4 */
  {
    (MR_Box) (((MR_Unsigned) 1U << 1))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_4[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_5[4][5] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_6[2][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_7[1][17] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 14)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_target_lang_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_id_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_type_gen_scalar_common_8[3][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__term_context__term_context__type_ctor_info_term_context_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)),
    ((MR_Box) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__pair__pti_pair_2__plain_parse_tree__prog_data__type_ctor_info_type_ctor_0__plain_hlds__hlds_data__type_ctor_info_hlds_type_defn_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_type_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_class_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_function_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0)
  }
};

static const MR_FA_TypeInfo_Struct1 ml_backend__ml_type_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__ml_type_gen__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__ml_type_gen__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__ml_type_gen__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo ml_backend__ml_type_gen__ml_backend__ml_type_gen__field_types_mlds_field_info_0_0[4] = {
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_name_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0),
  (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_gc_statement_0),
  (MR_PseudoTypeInfo) (&mercury__term_context__term_context__type_ctor_info_term_context_0)
};

static const MR_DuFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0 = {
  (MR_String) "mlds_field_info",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  ml_backend__ml_type_gen__ml_backend__ml_type_gen__field_types_mlds_field_info_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_stag_ordered_mlds_field_info_0_0[1] = {
  &ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_functor_desc_mlds_field_info_0_0
};

static const MR_DuPtagLayout ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_ptag_ordered_mlds_field_info_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_stag_ordered_mlds_field_info_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_type_gen____Unify____mlds_field_info_0_0_10001)),
  ((MR_Box) (ml_backend__ml_type_gen____Compare____mlds_field_info_0_0_10001)),
  (MR_String) "ml_backend.ml_type_gen",
  (MR_String) "mlds_field_info",
  { ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_name_ordered_mlds_field_info_0 },
  { ml_backend__ml_type_gen__ml_backend__ml_type_gen__du_ptag_ordered_mlds_field_info_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_mlds_field_info_0,

};

static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_0 = {
  (MR_String) "tag_does_not_use_base_class",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_functor_desc_tag_uses_base_class_0_1 = {
  (MR_String) "tag_uses_base_class",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_ordinal_ordered_tag_uses_base_class_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001)),
  ((MR_Box) (ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001)),
  (MR_String) "ml_backend.ml_type_gen",
  (MR_String) "tag_uses_base_class",
  { ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_name_ordered_tag_uses_base_class_0 },
  { ml_backend__ml_type_gen__ml_backend__ml_type_gen__enum_ordinal_ordered_tag_uses_base_class_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ml_backend__ml_type_gen__ml_backend__ml_type_gen__functor_number_map_tag_uses_base_class_0,

};

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1040__1_2_p_0(
  MR_Integer Arity_14,
  MR_Integer HeadVar__2_22)
{
  MR_bool succeeded = (Arity_14 == HeadVar__2_22);

  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_du_ctor_member__590__1_2_p_0(
  MR_Word UnconstrainedTVarsEC_45,
  MR_Word UnconstrainedTVars_48)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&ml_backend__ml_type_gen_scalar_common_2[4]), ((MR_Box) (UnconstrainedTVars_48)), ((MR_Box) (UnconstrainedTVarsEC_45)));
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__318__1_2_p_0(
  MR_Integer Arity_14,
  MR_Integer HeadVar__2_23)
{
  MR_bool succeeded = (Arity_14 == HeadVar__2_23);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
ml_backend__ml_type_gen____Compare____mlds_field_info_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))));
    MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));
    MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 3))));
    MR_Word SubResult1_6;

    ml_backend__mlds____Compare____mlds_field_var_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      ml_backend__mlds____Compare____mlds_type_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
      {
        MR_Word SubResult3_12;

        ml_backend__mlds____Compare____mlds_gc_statement_0_0(&SubResult3_12, ArgX3_10, ArgY3_11);
        succeeded = (SubResult3_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult3_12;
        else
          mercury__term_context____Compare____term_context_0_0(HeadVar__1_1, ArgX4_13, ArgY4_14);
      }
    }
  }
}

MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____mlds_field_info_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))));
    MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 3))));
    MR_Word ArgY4_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 3))));

    succeeded = ml_backend__mlds____Unify____mlds_field_var_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ArgX2_5, ArgY2_6);
      if (succeeded)
      {
        succeeded = ml_backend__mlds____Unify____mlds_gc_statement_0_0(ArgX3_7, ArgY3_8);
        if (succeeded)
          succeeded = mercury__term_context____Unify____term_context_0_0(ArgX4_9, ArgY4_10);
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_4_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__generate_foreign_enum_constant__1040__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_type_gen__generate_foreign_enum_constant_4_p_0(
  MR_Word Mapping_5,
  MR_Word MLDS_Type_6,
  MR_Word CtorRepn_7,
  MR_Word * ExportConstant_8)
{
  MR_bool succeeded;
  MR_Word SymName_11 = ((MR_Word) ((MR_hl_field(0, CtorRepn_7, (MR_Integer) 2))));
  MR_Word ConsTag_12 = ((MR_Word) ((MR_hl_field(0, CtorRepn_7, (MR_Integer) 3))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_7, (MR_Integer) 5))));
  MR_Word ConstRval_16;
  MR_String Name_17;
  MR_String ForeignName_18;
  MR_Word Var_19;
  MR_Word Var_23;
  MR_Box conv0_ForeignName_18;

  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[2]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ml_backend__ml_type_gen__generate_foreign_enum_constant_4_p_0_1));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Arity_14));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_19, (MR_String) "predicate \140ml_backend.ml_type_gen.generate_foreign_enum_constant\'/4", (MR_String) "enum constant arity != 0");
  switch (MR_tag((MR_Word) ConsTag_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_70;

            {
              Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_70, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(3, Var_70, 2) = ((MR_Box) (MLDS_Type_6));
            }
            {
              ConstRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_16, 1) = ((MR_Box) (Var_70));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
            return;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_26 = ((MR_Word) ((MR_hl_field(1, ConsTag_12, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) IntTag_26)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_27 = ((MR_Integer) ((MR_hl_field(0, IntTag_26, (MR_Integer) 0))));
              MR_Word Var_66;

              {
                Var_66 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_66, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, Var_66, 1) = ((MR_Box) (Int_27));
                MR_hl_field(3, Var_66, 2) = ((MR_Box) (MLDS_Type_6));
              }
              {
                ConstRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ConstRval_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, ConstRval_16, 1) = ((MR_Box) (Var_66));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
              return;
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
              return;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
        return;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
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
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
            return;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lang_37 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_12, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String String_38 = ((MR_String) ((MR_hl_field(3, ConsTag_12, (MR_Integer) 2))));
            MR_Word Var_69;

            {
              Var_69 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_69, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_69, 1) = (MR_Box) ((MR_Unsigned) (Lang_37));
              MR_hl_field(3, Var_69, 2) = ((MR_Box) (String_38));
              MR_hl_field(3, Var_69, 3) = ((MR_Box) (MLDS_Type_6));
            }
            {
              ConstRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_16, 1) = ((MR_Box) (Var_69));
            }
          }
          break;
      }
      break;
  }
  Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(SymName_11);
  mercury__map__lookup_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Mapping_5, ((MR_Box) (Name_17)), &conv0_ForeignName_18);
  ForeignName_18 = ((MR_String) (conv0_ForeignName_18));
  {
    Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_23, 0) = ((MR_Box) (ConstRval_16));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *ExportConstant_8 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (ForeignName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_23));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_ExportConstant_8;

  ml_backend__ml_type_gen__generate_foreign_enum_constant_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv0_ExportConstant_8);
  *wrapper_arg_2 = ((MR_Box) (conv0_ExportConstant_8));
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(
  MR_Word ExportedEnumInfo_3,
  MR_Word * MLDS_ExportedEnum_4)
{
  MR_Word TypeCtor_5 = ((MR_Word) ((MR_hl_field(0, ExportedEnumInfo_3, (MR_Integer) 0))));
  MR_Word CtorRepns_6 = ((MR_Word) ((MR_hl_field(0, ExportedEnumInfo_3, (MR_Integer) 1))));
  MR_Word Lang_7 = ((MR_Unsigned) ((MR_hl_field(0, ExportedEnumInfo_3, (MR_Integer) 2))) & (MR_Integer) 3);
  MR_Word Mapping_8 = ((MR_Word) ((MR_hl_field(0, ExportedEnumInfo_3, (MR_Integer) 3))));
  MR_Word Context_9 = ((MR_Word) ((MR_hl_field(0, ExportedEnumInfo_3, (MR_Integer) 4))));
  MR_Word QualifiedClassName_10;
  MR_Integer MLDS_ClassArity_11;
  MR_Word MLDS_Type_12;
  MR_Word ExportConstants_13;
  MR_Word Var_14;
  MR_Word Var_16;

  ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_5, &QualifiedClassName_10, &MLDS_ClassArity_11);
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (QualifiedClassName_10));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (MLDS_ClassArity_11));
    MR_hl_field(0, Var_14, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
  }
  MLDS_Type_12 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_14)));
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (Mapping_8));
    MR_hl_field(0, Var_16, 4) = ((MR_Box) (MLDS_Type_12));
  }
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_constant_0), Var_16, CtorRepns_6, &ExportConstants_13);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *MLDS_ExportedEnum_4 = base;
    MR_hl_field(0, base, 0) = (MR_Box) ((MR_Unsigned) (Lang_7));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeCtor_5));
    MR_hl_field(0, base, 3) = ((MR_Box) (ExportConstants_13));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word ArgRepn_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_19,
  MR_Integer * STATE_VARIABLE_ArgNum_20)
{
  MR_bool succeeded;
  MR_Word MaybeFieldName_14 = ((MR_Word) ((MR_hl_field(0, ArgRepn_10, (MR_Integer) 0))));
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, ArgRepn_10, (MR_Integer) 1))));
  MR_Word PosWidth_16 = ((MR_Word) ((MR_hl_field(0, ArgRepn_10, (MR_Integer) 2))));
  MR_Word Width_18;
  MR_Word FieldVarName_23;
  MR_Word DeclFlags_24;
  MR_Word MLDS_Type_25;

  Width_18 = parse_tree__prog_data__arg_pos_width_to_width_only_1_f_0(PosWidth_16);
  FieldVarName_23 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0(MaybeFieldName_14, STATE_VARIABLE_ArgNum_0_19);
  DeclFlags_24 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
  succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_8, Type_15, Width_18);
  if (succeeded)
    MLDS_Type_25 = (MR_Word) ((MR_Unsigned) 20U);
  else
    MLDS_Type_25 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_8, Type_15);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Defn_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FieldVarName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (DeclFlags_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (MLDS_Type_25));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *FieldInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FieldVarName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (MLDS_Type_25));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_9));
  }
  *STATE_VARIABLE_ArgNum_20 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_19 + (MR_Unsigned) 1);
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word TypeVar_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * STATE_VARIABLE_ArgNum_16)
{
  MR_bool succeeded;
  MR_Word Type_14;
  MR_Word Var_17;
  MR_Word FieldVarName_23;
  MR_Word DeclFlags_24;
  MR_Word MLDS_Type_25;

  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (TypeVar_10));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  Type_14 = parse_tree__builtin_lib_types__build_type_info_type_1_f_0(Var_17);
  FieldVarName_23 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ArgNum_0_15);
  DeclFlags_24 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
  succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_8, Type_14, (MR_Integer) 2);
  if (succeeded)
    MLDS_Type_25 = (MR_Word) ((MR_Unsigned) 20U);
  else
    MLDS_Type_25 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_8, Type_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Defn_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FieldVarName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (DeclFlags_24));
    MR_hl_field(0, base, 3) = ((MR_Box) (MLDS_Type_25));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *FieldInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FieldVarName_23));
    MR_hl_field(0, base, 1) = ((MR_Box) (MLDS_Type_25));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_9));
  }
  *STATE_VARIABLE_ArgNum_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_15 + (MR_Unsigned) 1);
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word _Constraint_10,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * STATE_VARIABLE_ArgNum_16)
{
  ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_104_108_100_95_100_117_95_99_116_111_114_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_105_101_108_100_95_95_91_51_93_95_48_7_p_0(ModuleInfo_8, Context_9, Defn_11, FieldInfo_12, STATE_VARIABLE_ArgNum_0_15, STATE_VARIABLE_ArgNum_16);
}

static void MR_CALL 
ml_backend__ml_type_gen__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_108_95_103_101_110_95_104_108_100_95_100_117_95_99_116_111_114_95_116_121_112_101_99_108_97_115_115_95_105_110_102_111_95_102_105_101_108_100_95_95_91_51_93_95_48_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Context_9,
  MR_Word * Defn_11,
  MR_Word * FieldInfo_12,
  MR_Integer STATE_VARIABLE_ArgNum_0_15,
  MR_Integer * STATE_VARIABLE_ArgNum_16)
{
  MR_bool succeeded;
  MR_Word Type_14;
  MR_Word FieldVarName_21;
  MR_Word DeclFlags_22;
  MR_Word MLDS_Type_23;

  Type_14 = parse_tree__builtin_lib_types__typeclass_info_type_0_f_0();
  FieldVarName_21 = ml_backend__ml_code_util__ml_gen_hld_field_name_2_f_0((MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_ArgNum_0_15);
  DeclFlags_22 = ml_backend__ml_code_util__ml_gen_public_field_decl_flags_0_f_0();
  succeeded = ml_backend__ml_code_util__ml_must_box_field_type_3_p_0(ModuleInfo_8, Type_14, (MR_Integer) 2);
  if (succeeded)
    MLDS_Type_23 = (MR_Word) ((MR_Unsigned) 20U);
  else
    MLDS_Type_23 = ml_backend__mlds__mercury_type_to_mlds_type_2_f_0(ModuleInfo_8, Type_14);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    *Defn_11 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FieldVarName_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (Context_9));
    MR_hl_field(0, base, 2) = ((MR_Box) (DeclFlags_22));
    MR_hl_field(0, base, 3) = ((MR_Box) (MLDS_Type_23));
    MR_hl_field(0, base, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    *FieldInfo_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (FieldVarName_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (MLDS_Type_23));
    MR_hl_field(0, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 3) = ((MR_Box) (Context_9));
  }
  *STATE_VARIABLE_ArgNum_16 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_ArgNum_0_15 + (MR_Unsigned) 1);
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__gen_init_field_4_f_0(
  MR_Word BaseClassId_6,
  MR_Word CtorClassId_7,
  MR_Word ClassQualifier_8,
  MR_Word FieldInfo_9)
{
  MR_Word Stmt_10;
  MR_Word FieldVarName_11 = ((MR_Word) ((MR_hl_field(0, FieldInfo_9, (MR_Integer) 0))));
  MR_Word FieldType_12 = ((MR_Word) ((MR_hl_field(0, FieldInfo_9, (MR_Integer) 1))));
  MR_Word Context_14 = ((MR_Word) ((MR_hl_field(0, FieldInfo_9, (MR_Integer) 3))));
  MR_Word LocalVarName_15;
  MR_Word Param_16;
  MR_Word CtorClassType_17;
  MR_Word FieldId_18;
  MR_Word FieldLval_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_23;
  MR_Word Var_27;
  MR_Word Var_28;
  MR_Word Var_29;

  {
    LocalVarName_15 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, LocalVarName_15, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, LocalVarName_15, 1) = ((MR_Box) (FieldVarName_11));
  }
  {
    Var_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_20, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, Var_20, 1) = ((MR_Box) (LocalVarName_15));
    MR_hl_field(3, Var_20, 2) = ((MR_Box) (FieldType_12));
  }
  {
    Param_16 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Param_16, 0) = ((MR_Box) (Var_20));
  }
  CtorClassType_17 = (MR_Word) (MR_mkword(1, (MR_Word) (CtorClassId_7)));
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (ClassQualifier_8));
    MR_hl_field(0, Var_21, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) (FieldVarName_11));
  }
  {
    Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_23, 1) = ((MR_Box) (CtorClassType_17));
  }
  {
    FieldId_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, FieldId_18, 0) = ((MR_Box) (Var_21));
    MR_hl_field(1, FieldId_18, 1) = ((MR_Box) (Var_23));
  }
  {
    Var_27 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_27, 0) = ((MR_Box) ((MR_Unsigned) 9U));
    MR_hl_field(3, Var_27, 1) = ((MR_Box) (CtorClassType_17));
  }
  Var_28 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_6)));
  {
    FieldLval_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldLval_19, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_type_gen_scalar_common_3[2])));
    MR_hl_field(0, FieldLval_19, 1) = ((MR_Box) (Var_27));
    MR_hl_field(0, FieldLval_19, 2) = ((MR_Box) (Var_28));
    MR_hl_field(0, FieldLval_19, 3) = ((MR_Box) (FieldId_18));
    MR_hl_field(0, FieldLval_19, 4) = ((MR_Box) (FieldType_12));
  }
  {
    Var_29 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, Var_29, 0) = ((MR_Box) (FieldLval_19));
    MR_hl_field(2, Var_29, 1) = ((MR_Box) (Param_16));
  }
  {
    Stmt_10 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Stmt_10, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, Stmt_10, 1) = ((MR_Box) (Var_29));
    MR_hl_field(3, Stmt_10, 2) = ((MR_Box) (Context_14));
  }
  return Stmt_10;
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__make_arg_1_f_0(
  MR_Word FieldInfo_3)
{
  MR_Word Arg_4;
  MR_Word FieldVarName_5 = ((MR_Word) ((MR_hl_field(0, FieldInfo_3, (MR_Integer) 0))));
  MR_Word Type_6 = ((MR_Word) ((MR_hl_field(0, FieldInfo_3, (MR_Integer) 1))));
  MR_Word GcStmt_7 = ((MR_Word) ((MR_hl_field(0, FieldInfo_3, (MR_Integer) 2))));
  MR_Word Var_9;

  {
    Var_9 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_9, 0) = ((MR_Box) ((MR_Unsigned) 7U));
    MR_hl_field(3, Var_9, 1) = ((MR_Box) (FieldVarName_5));
  }
  {
    Arg_4 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Arg_4, 0) = ((MR_Box) (Var_9));
    MR_hl_field(0, Arg_4, 1) = ((MR_Box) (Type_6));
    MR_hl_field(0, Arg_4, 2) = ((MR_Box) (GcStmt_7));
  }
  return Arg_4;
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv10_Defn_11;
  MR_Word conv9_FieldInfo_12;
  MR_Integer conv8_STATE_VARIABLE_ArgNum_20;

  ml_backend__ml_type_gen__ml_gen_hld_du_ctor_field_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv10_Defn_11, &conv9_FieldInfo_12, ((MR_Integer) (wrapper_arg_4)), &conv8_STATE_VARIABLE_ArgNum_20);
  *wrapper_arg_2 = ((MR_Box) (conv10_Defn_11));
  *wrapper_arg_3 = ((MR_Box) (conv9_FieldInfo_12));
  *wrapper_arg_5 = ((MR_Box) (conv8_STATE_VARIABLE_ArgNum_20));
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv6_Defn_11;
  MR_Word conv5_FieldInfo_12;
  MR_Integer conv4_STATE_VARIABLE_ArgNum_16;

  ml_backend__ml_type_gen__ml_gen_hld_du_ctor_typeclass_info_field_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv6_Defn_11, &conv5_FieldInfo_12, ((MR_Integer) (wrapper_arg_4)), &conv4_STATE_VARIABLE_ArgNum_16);
  *wrapper_arg_2 = ((MR_Box) (conv6_Defn_11));
  *wrapper_arg_3 = ((MR_Box) (conv5_FieldInfo_12));
  *wrapper_arg_5 = ((MR_Box) (conv4_STATE_VARIABLE_ArgNum_16));
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_Defn_11;
  MR_Word conv1_FieldInfo_12;
  MR_Integer conv0_STATE_VARIABLE_ArgNum_16;

  ml_backend__ml_type_gen__ml_gen_hld_du_ctor_type_info_field_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), &conv2_Defn_11, &conv1_FieldInfo_12, ((MR_Integer) (wrapper_arg_4)), &conv0_STATE_VARIABLE_ArgNum_16);
  *wrapper_arg_2 = ((MR_Box) (conv2_Defn_11));
  *wrapper_arg_3 = ((MR_Box) (conv1_FieldInfo_12));
  *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_ArgNum_16));
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_du_ctor_member__590__1_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0(
  MR_Word ModuleInfo_15,
  MR_Word Target_16,
  MR_Word BaseClassId_17,
  MR_Word BaseClassQualifier_18,
  MR_Word SecondaryTagClassId_19,
  MR_Word TypeCtor_20,
  MR_Word TypeDefn_21,
  MR_Word CtorRepn_22,
  MR_Word BaseClassFields0_23,
  MR_Word * BaseClassFields_24,
  MR_Word BaseClassClasses0_25,
  MR_Word * BaseClassClasses_26,
  MR_Word BaseClassCtors0_27,
  MR_Word * BaseClassCtors_28)
{
  MR_bool succeeded;
  MR_Word MaybeExistConstraints_30 = ((MR_Word) ((MR_hl_field(0, CtorRepn_22, (MR_Integer) 1))));
  MR_Word CtorName_31 = ((MR_Word) ((MR_hl_field(0, CtorRepn_22, (MR_Integer) 2))));
  MR_Word ConsTag_32 = ((MR_Word) ((MR_hl_field(0, CtorRepn_22, (MR_Integer) 3))));
  MR_Word ArgRepns_33 = ((MR_Word) ((MR_hl_field(0, CtorRepn_22, (MR_Integer) 4))));
  MR_Integer CtorArity_34 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_22, (MR_Integer) 5))));
  MR_Word Context_36;
  MR_String UnqualCtorName_37;
  MR_Word PolyFields_39;
  MR_Word PolyFieldInfos_40;
  MR_Integer ArgNum2_41;
  MR_Word OrdinaryFields_54;
  MR_Word OrdinaryFieldInfos_55;
  MR_Word SubClassFields_57;
  MR_Word SubClassFieldInfos_58;
  MR_Word MaybeSecTagVal_59;
  MR_Word UsesBaseClass_61;
  MR_Word SubClassCtors_68;
  MR_Word Var_82;
  MR_Word TypeName_121;
  MR_Integer TypeArity_122;
  MR_String UnqualTypeName_123;
  MR_Box conv11__ArgNum3_56;

  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_21, &Context_36);
  TypeName_121 = ((MR_Word) ((MR_hl_field(0, TypeCtor_20, (MR_Integer) 0))));
  TypeArity_122 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_20, (MR_Integer) 1))));
  UnqualTypeName_123 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeName_121);
  UnqualCtorName_37 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(Target_16, UnqualTypeName_123, TypeArity_122, CtorName_31, CtorArity_34);
  if ((MaybeExistConstraints_30 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    PolyFields_39 = (MR_Word) ((MR_Unsigned) 0U);
    PolyFieldInfos_40 = (MR_Word) ((MR_Unsigned) 0U);
    ArgNum2_41 = (MR_Integer) 1;
  }
  else
  {
    MR_Word ExistConstraints_42 = (MR_Word) (MR_body((MR_Word) (MaybeExistConstraints_30), (MR_Integer) 1));
    MR_Word ExistQTVars_43 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_42, (MR_Integer) 0))));
    MR_Word Constraints_44 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_42, (MR_Integer) 1))));
    MR_Word UnconstrainedTVarsEC_45 = ((MR_Word) ((MR_hl_field(0, ExistConstraints_42, (MR_Integer) 2))));
    MR_Word ConstrainedTVars_47;
    MR_Word UnconstrainedTVars_48;
    MR_Word TypeInfoFields_49;
    MR_Word TypeInfoFieldInfos_50;
    MR_Integer ArgNum1_51;
    MR_Word TypeClassInfoFields_52;
    MR_Word TypeClassInfoFieldInfos_53;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Word Var_81;
    MR_Box conv3_ArgNum1_51;
    MR_Box conv7_ArgNum2_41;

    parse_tree__prog_type__constraint_list_get_tvars_2_p_0(Constraints_44, &ConstrainedTVars_47);
    mercury__list__delete_elems_3_p_0((MR_Word) (&ml_backend__ml_type_gen_scalar_common_2[3]), ExistQTVars_43, ConstrainedTVars_47, &UnconstrainedTVars_48);
    {
      Var_77 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_77, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[3]));
      MR_hl_field(0, Var_77, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_1));
      MR_hl_field(0, Var_77, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_77, 3) = ((MR_Box) (UnconstrainedTVarsEC_45));
      MR_hl_field(0, Var_77, 4) = ((MR_Box) (UnconstrainedTVars_48));
    }
    mercury__require__expect_3_p_0(Var_77, (MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_hld_du_ctor_member\'/14", (MR_String) "UnconstrainedTVars != UnconstrainedTVarsEC");
    {
      Var_80 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_80, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[0]));
      MR_hl_field(0, Var_80, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_2));
      MR_hl_field(0, Var_80, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_80, 3) = ((MR_Box) (ModuleInfo_15));
      MR_hl_field(0, Var_80, 4) = ((MR_Box) (Context_36));
    }
    mercury__list__map2_foldl_6_p_0((MR_Word) (&ml_backend__ml_type_gen_scalar_common_2[3]), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_80, UnconstrainedTVars_48, &TypeInfoFields_49, &TypeInfoFieldInfos_50, ((MR_Box) ((MR_Integer) 1)), &conv3_ArgNum1_51);
    ArgNum1_51 = ((MR_Integer) (conv3_ArgNum1_51));
    {
      Var_81 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_81, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[1]));
      MR_hl_field(0, Var_81, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_3));
      MR_hl_field(0, Var_81, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_81, 3) = ((MR_Box) (ModuleInfo_15));
      MR_hl_field(0, Var_81, 4) = ((MR_Box) (Context_36));
    }
    mercury__list__map2_foldl_6_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_81, Constraints_44, &TypeClassInfoFields_52, &TypeClassInfoFieldInfos_53, ((MR_Box) (ArgNum1_51)), &conv7_ArgNum2_41);
    ArgNum2_41 = ((MR_Integer) (conv7_ArgNum2_41));
    PolyFields_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), TypeInfoFields_49, TypeClassInfoFields_52);
    PolyFieldInfos_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0), TypeInfoFieldInfos_50, TypeClassInfoFieldInfos_53);
  }
  {
    Var_82 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_82, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_8[2]));
    MR_hl_field(0, Var_82, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0_4));
    MR_hl_field(0, Var_82, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_82, 3) = ((MR_Box) (ModuleInfo_15));
    MR_hl_field(0, Var_82, 4) = ((MR_Box) (Context_36));
  }
  mercury__list__map2_foldl_6_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_arg_repn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_82, ArgRepns_33, &OrdinaryFields_54, &OrdinaryFieldInfos_55, ((MR_Box) (ArgNum2_41)), &conv11__ArgNum3_56);
  SubClassFields_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), PolyFields_39, OrdinaryFields_54);
  SubClassFieldInfos_58 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0), PolyFieldInfos_40, OrdinaryFieldInfos_55);
  MaybeSecTagVal_59 = hlds__hlds_data__get_maybe_secondary_tag_1_f_0(ConsTag_32);
  UsesBaseClass_61 = ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(ConsTag_32);
  switch (Target_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      SubClassCtors_68 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word CtorClassId_62;
        MR_Word CtorClassQualifier_63;
        MR_Word SubClassCtorFunc_64;

        switch (UsesBaseClass_61) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_83;

              {
                Var_83 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_83, 0) = ((MR_Box) (BaseClassQualifier_18));
                MR_hl_field(0, Var_83, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(0, Var_83, 2) = ((MR_Box) (UnqualCtorName_37));
              }
              {
                CtorClassId_62 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CtorClassId_62, 0) = ((MR_Box) (Var_83));
                MR_hl_field(0, CtorClassId_62, 1) = ((MR_Box) (CtorArity_34));
                MR_hl_field(0, CtorClassId_62, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              CtorClassQualifier_63 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_16, BaseClassQualifier_18, (MR_Integer) 1, UnqualCtorName_37, CtorArity_34);
            }
            break;
          case (MR_Integer) 1:
            {
              CtorClassId_62 = BaseClassId_17;
              CtorClassQualifier_63 = BaseClassQualifier_18;
            }
            break;
        }
        SubClassCtorFunc_64 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(Target_16, BaseClassId_17, CtorClassId_62, CtorClassQualifier_63, SecondaryTagClassId_19, MaybeSecTagVal_59, SubClassFieldInfos_58, Context_36);
        {
          SubClassCtors_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, SubClassCtors_68, 0) = ((MR_Box) (SubClassCtorFunc_64));
          MR_hl_field(1, SubClassCtors_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word CtorClassId_162;
        MR_Word CtorClassQualifier_163;
        MR_Word SubClassCtorFunc_164;

        switch (UsesBaseClass_61) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_134;

              {
                Var_134 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_134, 0) = ((MR_Box) (BaseClassQualifier_18));
                MR_hl_field(0, Var_134, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
                MR_hl_field(0, Var_134, 2) = ((MR_Box) (UnqualCtorName_37));
              }
              {
                CtorClassId_162 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, CtorClassId_162, 0) = ((MR_Box) (Var_134));
                MR_hl_field(0, CtorClassId_162, 1) = ((MR_Box) (CtorArity_34));
                MR_hl_field(0, CtorClassId_162, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
              }
              CtorClassQualifier_163 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_16, BaseClassQualifier_18, (MR_Integer) 1, UnqualCtorName_37, CtorArity_34);
            }
            break;
          case (MR_Integer) 1:
            {
              CtorClassId_162 = BaseClassId_17;
              CtorClassQualifier_163 = BaseClassQualifier_18;
            }
            break;
        }
        SubClassCtorFunc_164 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(Target_16, BaseClassId_17, CtorClassId_162, CtorClassQualifier_163, SecondaryTagClassId_19, MaybeSecTagVal_59, SubClassFieldInfos_58, Context_36);
        succeeded = (Target_16 == (MR_Integer) 2);
        if (succeeded)
        {
          succeeded = (SubClassFields_57 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
          }
        }
        if (succeeded)
        {
          MR_Word ZeroArgCtorFunc_147;
          MR_Word Var_150;

          ZeroArgCtorFunc_147 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(Target_16, BaseClassId_17, CtorClassId_162, CtorClassQualifier_163, SecondaryTagClassId_19, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), Context_36);
          {
            Var_150 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_150, 0) = ((MR_Box) (SubClassCtorFunc_164));
            MR_hl_field(1, Var_150, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            SubClassCtors_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SubClassCtors_68, 0) = ((MR_Box) (ZeroArgCtorFunc_147));
            MR_hl_field(1, SubClassCtors_68, 1) = ((MR_Box) (Var_150));
          }
        }
        else
          {
            SubClassCtors_68 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, SubClassCtors_68, 0) = ((MR_Box) (SubClassCtorFunc_164));
            MR_hl_field(1, SubClassCtors_68, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
      }
      break;
  }
  switch (UsesBaseClass_61) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Inherits_70;
        MR_Word TypeParams_74;
        MR_Word SubClassDefn_76;

        if ((MaybeSecTagVal_59 == (MR_Word) ((MR_Unsigned) 0U)))
          switch (Target_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Inherits_70 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 1:
              Inherits_70 = (MR_Word) ((MR_Unsigned) 0U);
              break;
            case (MR_Integer) 2:
              Inherits_70 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_17)));
              break;
          }
        else
          Inherits_70 = (MR_Word) (MR_mkword(1, (MR_Word) (SecondaryTagClassId_19)));
        hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_21, &TypeParams_74);
        {
          SubClassDefn_76 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, SubClassDefn_76, 0) = ((MR_Box) (UnqualCtorName_37));
          MR_hl_field(0, SubClassDefn_76, 1) = ((MR_Box) (CtorArity_34));
          MR_hl_field(0, SubClassDefn_76, 2) = ((MR_Box) (Context_36));
          MR_hl_field(0, SubClassDefn_76, 3) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[3]));
          MR_hl_field(0, SubClassDefn_76, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, SubClassDefn_76, 5) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SubClassDefn_76, 6) = ((MR_Box) (Inherits_70));
          MR_hl_field(0, SubClassDefn_76, 7) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SubClassDefn_76, 8) = ((MR_Box) (TypeParams_74));
          MR_hl_field(0, SubClassDefn_76, 9) = ((MR_Box) (SubClassFields_57));
          MR_hl_field(0, SubClassDefn_76, 10) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SubClassDefn_76, 11) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(0, SubClassDefn_76, 12) = ((MR_Box) (SubClassCtors_68));
        }
        *BaseClassFields_24 = BaseClassFields0_23;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *BaseClassClasses_26 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (SubClassDefn_76));
          MR_hl_field(1, base, 1) = ((MR_Box) (BaseClassClasses0_25));
        }
        *BaseClassCtors_28 = BaseClassCtors0_27;
      }
      break;
    case (MR_Integer) 1:
      {
        *BaseClassFields_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), SubClassFields_57, BaseClassFields0_23);
        *BaseClassClasses_26 = BaseClassClasses0_25;
        *BaseClassCtors_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), SubClassCtors_68, BaseClassCtors0_27);
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_3_f_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__ml_type_gen__IntroducedFrom__pred__ml_gen_hld_enum_constant__318__1_2_p_0(((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))));
  return succeeded;
}

static MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_constant_3_f_0(
  MR_Word Context_5,
  MR_Word MLDS_Type_6,
  MR_Word CtorRepn_7)
{
  MR_bool succeeded;
  MR_Word FieldVarDefn_8;
  MR_Word QualSymName_11 = ((MR_Word) ((MR_hl_field(0, CtorRepn_7, (MR_Integer) 2))));
  MR_Word ConsTag_12 = ((MR_Word) ((MR_hl_field(0, CtorRepn_7, (MR_Integer) 3))));
  MR_Integer Arity_14 = ((MR_Integer) ((MR_hl_field(0, CtorRepn_7, (MR_Integer) 5))));
  MR_Word ConstRval_16;
  MR_String Name_17;
  MR_Word VarName_18;
  MR_Word Var_20;
  MR_Word Var_28;

  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_5[2]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_enum_constant_3_f_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Arity_14));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) ((MR_Integer) 0));
  }
  mercury__require__expect_3_p_0(Var_20, (MR_String) "function \140ml_backend.ml_type_gen.ml_gen_hld_enum_constant\'/3", (MR_String) "arity != []");
  switch (MR_tag((MR_Word) ConsTag_12)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(ConsTag_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_74;

            {
              Var_74 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_74, 0) = ((MR_Box) ((MR_Unsigned) 9U));
              MR_hl_field(3, Var_74, 1) = ((MR_Box) ((MR_Integer) 0));
              MR_hl_field(3, Var_74, 2) = ((MR_Box) (MLDS_Type_6));
            }
            {
              ConstRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_16, 1) = ((MR_Box) (Var_74));
            }
          }
          break;
        case (MR_Integer) 1:
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntTag_30 = ((MR_Word) ((MR_hl_field(1, ConsTag_12, (MR_Integer) 0))));

        switch (MR_tag((MR_Word) IntTag_30)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Int_31 = ((MR_Integer) ((MR_hl_field(0, IntTag_30, (MR_Integer) 0))));
              MR_Word Var_70;

              {
                Var_70 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_70, 0) = ((MR_Box) ((MR_Unsigned) 9U));
                MR_hl_field(3, Var_70, 1) = ((MR_Box) (Int_31));
                MR_hl_field(3, Var_70, 2) = ((MR_Box) (MLDS_Type_6));
              }
              {
                ConstRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, ConstRval_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(3, ConstRval_16, 1) = ((MR_Box) (Var_70));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
            break;
          case (MR_Integer) 3:
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, ConsTag_12, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
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
          mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.enum_cons_tag_to_ml_const_rval\'/3", (MR_String) "enum constant requires an int or foreign tag");
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lang_41 = ((MR_Unsigned) ((MR_hl_field(3, ConsTag_12, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String String_42 = ((MR_String) ((MR_hl_field(3, ConsTag_12, (MR_Integer) 2))));
            MR_Word Var_73;

            {
              Var_73 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_73, 0) = ((MR_Box) ((MR_Unsigned) 14U));
              MR_hl_field(3, Var_73, 1) = (MR_Box) ((MR_Unsigned) (Lang_41));
              MR_hl_field(3, Var_73, 2) = ((MR_Box) (String_42));
              MR_hl_field(3, Var_73, 3) = ((MR_Box) (MLDS_Type_6));
            }
            {
              ConstRval_16 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, ConstRval_16, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, ConstRval_16, 1) = ((MR_Box) (Var_73));
            }
          }
          break;
      }
      break;
  }
  Name_17 = mdbcomp__sym_name__unqualify_name_1_f_0(QualSymName_11);
  {
    VarName_18 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, VarName_18, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(3, VarName_18, 1) = ((MR_Box) (Name_17));
  }
  {
    Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_28, 0) = ((MR_Box) (ConstRval_16));
  }
  {
    FieldVarDefn_8 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, FieldVarDefn_8, 0) = ((MR_Box) (VarName_18));
    MR_hl_field(0, FieldVarDefn_8, 1) = ((MR_Box) (Context_5));
    MR_hl_field(0, FieldVarDefn_8, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[1]));
    MR_hl_field(0, FieldVarDefn_8, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_type_gen_scalar_common_2[5])));
    MR_hl_field(0, FieldVarDefn_8, 4) = ((MR_Box) (Var_28));
    MR_hl_field(0, FieldVarDefn_8, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return FieldVarDefn_8;
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_FieldVarDefn_8;

  conv0_FieldVarDefn_8 = ml_backend__ml_type_gen__ml_gen_hld_enum_constant_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_FieldVarDefn_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word Target_7,
  MR_Word HeadVar__3_3,
  MR_Word STATE_VARIABLE_ClassDefns_0_13,
  MR_Word * STATE_VARIABLE_ClassDefns_14)
{
  MR_Word TypeCtor_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word TypeDefn_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_Word TypeStatus_11;
  MR_Word DefinedThisModule_12;

  hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_9, &TypeStatus_11);
  DefinedThisModule_12 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_11);
  switch (DefinedThisModule_12) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_ClassDefns_14 = STATE_VARIABLE_ClassDefns_0_13;
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeBody_15;

        hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_9, &TypeBody_15);
        switch (MR_tag((MR_Word) TypeBody_15)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TypeBodyDu_20 = (MR_Word) ((MR_Word) (TypeBody_15));
              MR_Word MaybeSuperType_22 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_20, (MR_Integer) 1))));
              MR_Word MaybeRepn_24 = ((MR_Word) ((MR_hl_field(0, TypeBodyDu_20, (MR_Integer) 3))));
              MR_Word Repn_26;

              if ((MaybeRepn_24 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.ml_type_gen.ml_gen_hld_type_defn\'/6", (MR_String) "MaybeRepn = no");
                  return;
                }
              else
                Repn_26 = ((MR_Word) ((MR_hl_field(1, MaybeRepn_24, (MR_Integer) 0))));
              if ((MaybeSuperType_22 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word CtorRepns_28 = ((MR_Word) ((MR_hl_field(0, Repn_26, (MR_Integer) 0))));
                MR_Word DuTypeKind_31 = ((MR_Word) ((MR_hl_field(0, Repn_26, (MR_Integer) 3))));
                MR_Word ClassDefn_35;

                switch (MR_tag((MR_Word) DuTypeKind_31)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(DuTypeKind_31)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        ml_backend__ml_type_gen__ml_gen_hld_enum_type_6_p_0(Target_7, TypeCtor_8, TypeDefn_9, CtorRepns_28, (MR_Word) ((MR_Unsigned) 0U), &ClassDefn_35);
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word Context_41;
                          MR_Word QualifiedClassName_42;
                          MR_Integer MLDS_ClassArity_43;
                          MR_String MLDS_ClassName_46;
                          MR_Word ValueMember_47;
                          MR_Word MLDS_Type_48;
                          MR_Word EnumConstMembers_49;
                          MR_Word Members_50;
                          MR_Word Inherits_51;
                          MR_Word Implements_52;
                          MR_Word TypeVars_53;
                          MR_Word Var_59;
                          MR_Word Var_61;
                          MR_Word Var_62;

                          hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_9, &Context_41);
                          ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_8, &QualifiedClassName_42, &MLDS_ClassArity_43);
                          MLDS_ClassName_46 = ((MR_String) ((MR_hl_field(0, QualifiedClassName_42, (MR_Integer) 2))));
                          {
                            ValueMember_47 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ValueMember_47, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, ValueMember_47, 1) = ((MR_Box) (Context_41));
                            MR_hl_field(0, ValueMember_47, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[4]));
                            MR_hl_field(0, ValueMember_47, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_type_gen_scalar_common_2[5])));
                            MR_hl_field(0, ValueMember_47, 4) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, ValueMember_47, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                          {
                            Var_59 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_59, 0) = ((MR_Box) (QualifiedClassName_42));
                            MR_hl_field(0, Var_59, 1) = ((MR_Box) (MLDS_ClassArity_43));
                            MR_hl_field(0, Var_59, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                          }
                          MLDS_Type_48 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_59)));
                          {
                            Var_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Var_61, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[0]));
                            MR_hl_field(0, Var_61, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0_1));
                            MR_hl_field(0, Var_61, 2) = ((MR_Box) ((MR_Integer) 2));
                            MR_hl_field(0, Var_61, 3) = ((MR_Box) (Context_41));
                            MR_hl_field(0, Var_61, 4) = ((MR_Box) (MLDS_Type_48));
                          }
                          EnumConstMembers_49 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), Var_61, CtorRepns_28);
                          {
                            Var_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_62, 0) = ((MR_Box) (ValueMember_47));
                            MR_hl_field(1, Var_62, 1) = ((MR_Box) (EnumConstMembers_49));
                          }
                          Members_50 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), (MR_Word) ((MR_Unsigned) 0U), Var_62);
                          switch (Target_7) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 0:
                            case (MR_Integer) 1:
                              {
                                Inherits_51 = (MR_Word) ((MR_Unsigned) 0U);
                                Implements_52 = (MR_Word) ((MR_Unsigned) 0U);
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                MR_Word Var_63;
                                MR_Word Var_64;

                                Var_63 = ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0();
                                Inherits_51 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_63)));
                                Var_64 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
                                {
                                  Implements_52 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(1, Implements_52, 0) = ((MR_Box) (Var_64));
                                  MR_hl_field(1, Implements_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                                }
                              }
                              break;
                          }
                          hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_9, &TypeVars_53);
                          {
                            ClassDefn_35 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, ClassDefn_35, 0) = ((MR_Box) (MLDS_ClassName_46));
                            MR_hl_field(0, ClassDefn_35, 1) = ((MR_Box) (MLDS_ClassArity_43));
                            MR_hl_field(0, ClassDefn_35, 2) = ((MR_Box) (Context_41));
                            MR_hl_field(0, ClassDefn_35, 3) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[3]));
                            MR_hl_field(0, ClassDefn_35, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                            MR_hl_field(0, ClassDefn_35, 5) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, ClassDefn_35, 6) = ((MR_Box) (Inherits_51));
                            MR_hl_field(0, ClassDefn_35, 7) = ((MR_Box) (Implements_52));
                            MR_hl_field(0, ClassDefn_35, 8) = ((MR_Box) (TypeVars_53));
                            MR_hl_field(0, ClassDefn_35, 9) = ((MR_Box) (Members_50));
                            MR_hl_field(0, ClassDefn_35, 10) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, ClassDefn_35, 11) = ((MR_Box) ((MR_Unsigned) 0U));
                            MR_hl_field(0, ClassDefn_35, 12) = ((MR_Box) ((MR_Unsigned) 0U));
                          }
                        }
                        break;
                      case (MR_Integer) 2:
                        ml_backend__ml_type_gen__ml_gen_hld_du_type_7_p_0(ModuleInfo_6, Target_7, TypeCtor_8, TypeDefn_9, CtorRepns_28, (MR_Word) ((MR_Unsigned) 0U), &ClassDefn_35);
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    ml_backend__ml_type_gen__ml_gen_hld_enum_type_6_p_0(Target_7, TypeCtor_8, TypeDefn_9, CtorRepns_28, (MR_Word) ((MR_Unsigned) 0U), &ClassDefn_35);
                    break;
                  case (MR_Integer) 2:
                    ml_backend__ml_type_gen__ml_gen_hld_du_type_7_p_0(ModuleInfo_6, Target_7, TypeCtor_8, TypeDefn_9, CtorRepns_28, (MR_Word) ((MR_Unsigned) 0U), &ClassDefn_35);
                    break;
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *STATE_VARIABLE_ClassDefns_14 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (ClassDefn_35));
                  MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_ClassDefns_0_13));
                }
              }
              else
                *STATE_VARIABLE_ClassDefns_14 = STATE_VARIABLE_ClassDefns_0_13;
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_ClassDefns_14 = STATE_VARIABLE_ClassDefns_0_13;
            break;
          case (MR_Integer) 2:
            *STATE_VARIABLE_ClassDefns_14 = STATE_VARIABLE_ClassDefns_0_13;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, TypeBody_15, (MR_Integer) 0))))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *STATE_VARIABLE_ClassDefns_14 = STATE_VARIABLE_ClassDefns_0_13;
                break;
              case (MR_Integer) 1:
                *STATE_VARIABLE_ClassDefns_14 = STATE_VARIABLE_ClassDefns_0_13;
                break;
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_BaseClassFields_24;
  MR_Word conv1_BaseClassClasses_26;
  MR_Word conv0_BaseClassCtors_28;

  ml_backend__ml_type_gen__ml_gen_hld_du_ctor_member_14_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 9)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_BaseClassFields_24, ((MR_Word) (wrapper_arg_4)), &conv1_BaseClassClasses_26, ((MR_Word) (wrapper_arg_6)), &conv0_BaseClassCtors_28);
  *wrapper_arg_3 = ((MR_Box) (conv2_BaseClassFields_24));
  *wrapper_arg_5 = ((MR_Box) (conv1_BaseClassClasses_26));
  *wrapper_arg_7 = ((MR_Box) (conv0_BaseClassCtors_28));
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_du_type_7_p_0(
  MR_Word ModuleInfo_8,
  MR_Word Target_9,
  MR_Word TypeCtor_10,
  MR_Word TypeDefn_11,
  MR_Word CtorRepns_12,
  MR_Word MaybeEqualityMembers_13,
  MR_Word * ClassDefn_14)
{
  MR_bool succeeded;
  MR_Word Context_15;
  MR_Word QualBaseClassName_16;
  MR_Integer BaseClassArity_17;
  MR_Word BaseClassId_18;
  MR_Word BaseClassModuleName_19;
  MR_Word QualKind_20;
  MR_String BaseClassName_21;
  MR_Word BaseClassQualifier_22;
  MR_Integer NumWithSecTag_23;
  MR_Integer NumWithoutSecTag_24;
  MR_Word TagFieldVarMembers_28;
  MR_Word TagClassMembers_29;
  MR_Word TagClassId_30;
  MR_Word CtorMemberFields_32;
  MR_Word CtorMemberClasses_33;
  MR_Word BaseClassCtorMethods_34;
  MR_Word Implements_37;
  MR_Word TypeParams_38;
  MR_Word MemberFields_39;
  MR_Word MemberClasses_40;
  MR_Word Var_51;
  MR_Word Var_57;
  MR_Box conv5_CtorMemberFields_32;
  MR_Box conv4_CtorMemberClasses_33;
  MR_Box conv3_BaseClassCtorMethods_34;

  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_11, &Context_15);
  ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_10, &QualBaseClassName_16, &BaseClassArity_17);
  {
    BaseClassId_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, BaseClassId_18, 0) = ((MR_Box) (QualBaseClassName_16));
    MR_hl_field(0, BaseClassId_18, 1) = ((MR_Box) (BaseClassArity_17));
    MR_hl_field(0, BaseClassId_18, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  BaseClassModuleName_19 = ((MR_Word) ((MR_hl_field(0, QualBaseClassName_16, (MR_Integer) 0))));
  QualKind_20 = ((MR_Unsigned) ((MR_hl_field(0, QualBaseClassName_16, (MR_Integer) 1))) & (MR_Integer) 1);
  BaseClassName_21 = ((MR_String) ((MR_hl_field(0, QualBaseClassName_16, (MR_Integer) 2))));
  BaseClassQualifier_22 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_9, BaseClassModuleName_19, QualKind_20, BaseClassName_21, BaseClassArity_17);
  ml_backend__ml_type_gen__ctors_with_and_without_secondary_tag_loop_5_p_0(CtorRepns_12, (MR_Integer) 0, &NumWithSecTag_23, (MR_Integer) 0, &NumWithoutSecTag_24);
  succeeded = (NumWithSecTag_23 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Word TagVarMember_25;
    MR_Word TagFieldVarMembers0_27;

    {
      TagVarMember_25 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TagVarMember_25, 0) = ((MR_Box) ((MR_Unsigned) 4U));
      MR_hl_field(0, TagVarMember_25, 1) = ((MR_Box) (Context_15));
      MR_hl_field(0, TagVarMember_25, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[4]));
      MR_hl_field(0, TagVarMember_25, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_type_gen_scalar_common_2[5])));
      MR_hl_field(0, TagVarMember_25, 4) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(0, TagVarMember_25, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      TagFieldVarMembers0_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, TagFieldVarMembers0_27, 0) = ((MR_Box) (TagVarMember_25));
      MR_hl_field(1, TagFieldVarMembers0_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    succeeded = (NumWithoutSecTag_24 == (MR_Integer) 0);
    if (succeeded)
    {
      TagFieldVarMembers_28 = TagFieldVarMembers0_27;
      TagClassMembers_29 = (MR_Word) ((MR_Unsigned) 0U);
      TagClassId_30 = BaseClassId_18;
    }
    else
    {
      MR_Word TagTypeDefn_31;
      MR_Word ClassName_78;
      MR_Word Inherits_82;

      {
        ClassName_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, ClassName_78, 0) = ((MR_Box) (BaseClassQualifier_22));
        MR_hl_field(0, ClassName_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
        MR_hl_field(0, ClassName_78, 2) = ((MR_Box) ((MR_String) "tag_type"));
      }
      {
        TagClassId_30 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TagClassId_30, 0) = ((MR_Box) (ClassName_78));
        MR_hl_field(0, TagClassId_30, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, TagClassId_30, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
      }
      switch (Target_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Inherits_82 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          Inherits_82 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 2:
          Inherits_82 = (MR_Word) (MR_mkword(1, (MR_Word) (BaseClassId_18)));
          break;
      }
      {
        TagTypeDefn_31 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, TagTypeDefn_31, 0) = ((MR_Box) ((MR_String) "tag_type"));
        MR_hl_field(0, TagTypeDefn_31, 1) = ((MR_Box) ((MR_Integer) 0));
        MR_hl_field(0, TagTypeDefn_31, 2) = ((MR_Box) (Context_15));
        MR_hl_field(0, TagTypeDefn_31, 3) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[3]));
        MR_hl_field(0, TagTypeDefn_31, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, TagTypeDefn_31, 5) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, TagTypeDefn_31, 6) = ((MR_Box) (Inherits_82));
        MR_hl_field(0, TagTypeDefn_31, 7) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, TagTypeDefn_31, 8) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, TagTypeDefn_31, 9) = ((MR_Box) (TagFieldVarMembers0_27));
        MR_hl_field(0, TagTypeDefn_31, 10) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, TagTypeDefn_31, 11) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(0, TagTypeDefn_31, 12) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      TagFieldVarMembers_28 = (MR_Word) ((MR_Unsigned) 0U);
      {
        TagClassMembers_29 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, TagClassMembers_29, 0) = ((MR_Box) (TagTypeDefn_31));
        MR_hl_field(1, TagClassMembers_29, 1) = ((MR_Box) (TagFieldVarMembers_28));
      }
    }
  }
  else
  {
    TagFieldVarMembers_28 = (MR_Word) ((MR_Unsigned) 0U);
    TagClassMembers_29 = (MR_Word) ((MR_Unsigned) 0U);
    TagClassId_30 = BaseClassId_18;
  }
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_7[0]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_du_type_7_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 7));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (ModuleInfo_8));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (Target_9));
    MR_hl_field(0, Var_51, 5) = ((MR_Box) (BaseClassId_18));
    MR_hl_field(0, Var_51, 6) = ((MR_Box) (BaseClassQualifier_22));
    MR_hl_field(0, Var_51, 7) = ((MR_Box) (TagClassId_30));
    MR_hl_field(0, Var_51, 8) = ((MR_Box) (TypeCtor_10));
    MR_hl_field(0, Var_51, 9) = ((MR_Box) (TypeDefn_11));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&ml_backend__ml_type_gen_scalar_common_2[1]), (MR_Word) (&ml_backend__ml_type_gen_scalar_common_2[0]), (MR_Word) (&ml_backend__ml_type_gen_scalar_common_2[2]), Var_51, CtorRepns_12, ((MR_Box) ((MR_Unsigned) 0U)), &conv5_CtorMemberFields_32, ((MR_Box) ((MR_Unsigned) 0U)), &conv4_CtorMemberClasses_33, ((MR_Box) ((MR_Unsigned) 0U)), &conv3_BaseClassCtorMethods_34);
  CtorMemberFields_32 = ((MR_Word) (conv5_CtorMemberFields_32));
  CtorMemberClasses_33 = ((MR_Word) (conv4_CtorMemberClasses_33));
  BaseClassCtorMethods_34 = ((MR_Word) (conv3_BaseClassCtorMethods_34));
  switch (Target_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      Implements_37 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_55;

        Var_55 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
        {
          Implements_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Implements_37, 0) = ((MR_Box) (Var_55));
          MR_hl_field(1, Implements_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_11, &TypeParams_38);
  Var_57 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), TagFieldVarMembers_28, CtorMemberFields_32);
  MemberFields_39 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), MaybeEqualityMembers_13, Var_57);
  MemberClasses_40 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_class_defn_0), TagClassMembers_29, CtorMemberClasses_33);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *ClassDefn_14 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (BaseClassName_21));
    MR_hl_field(0, base, 1) = ((MR_Box) (BaseClassArity_17));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[3]));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 6) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 7) = ((MR_Box) (Implements_37));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeParams_38));
    MR_hl_field(0, base, 9) = ((MR_Box) (MemberFields_39));
    MR_hl_field(0, base, 10) = ((MR_Box) (MemberClasses_40));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 12) = ((MR_Box) (BaseClassCtorMethods_34));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_FieldVarDefn_8;

  conv0_FieldVarDefn_8 = ml_backend__ml_type_gen__ml_gen_hld_enum_constant_3_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_FieldVarDefn_8));
  return wrapper_arg_2;
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_hld_enum_type_6_p_0(
  MR_Word Target_7,
  MR_Word TypeCtor_8,
  MR_Word TypeDefn_9,
  MR_Word CtorRepns_10,
  MR_Word MaybeEqualityMembers_11,
  MR_Word * ClassDefn_12)
{
  MR_Word Context_13;
  MR_Word QualifiedClassName_14;
  MR_Integer MLDS_ClassArity_15;
  MR_String MLDS_ClassName_18;
  MR_Word ValueMember_19;
  MR_Word MLDS_Type_20;
  MR_Word EnumConstMembers_21;
  MR_Word Members_22;
  MR_Word Inherits_24;
  MR_Word Implements_25;
  MR_Word TypeVars_26;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;

  hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_9, &Context_13);
  ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(TypeCtor_8, &QualifiedClassName_14, &MLDS_ClassArity_15);
  MLDS_ClassName_18 = ((MR_String) ((MR_hl_field(0, QualifiedClassName_14, (MR_Integer) 2))));
  {
    ValueMember_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, ValueMember_19, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ValueMember_19, 1) = ((MR_Box) (Context_13));
    MR_hl_field(0, ValueMember_19, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[4]));
    MR_hl_field(0, ValueMember_19, 3) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_type_gen_scalar_common_2[5])));
    MR_hl_field(0, ValueMember_19, 4) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, ValueMember_19, 5) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Var_33 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_33, 0) = ((MR_Box) (QualifiedClassName_14));
    MR_hl_field(0, Var_33, 1) = ((MR_Box) (MLDS_ClassArity_15));
    MR_hl_field(0, Var_33, 2) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
  }
  MLDS_Type_20 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_33)));
  {
    Var_35 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_35, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_6[0]));
    MR_hl_field(0, Var_35, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_hld_enum_type_6_p_0_1));
    MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_35, 3) = ((MR_Box) (Context_13));
    MR_hl_field(0, Var_35, 4) = ((MR_Box) (MLDS_Type_20));
  }
  EnumConstMembers_21 = mercury__list__map_2_f_0((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constructor_repn_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), Var_35, CtorRepns_10);
  {
    Var_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_36, 0) = ((MR_Box) (ValueMember_19));
    MR_hl_field(1, Var_36, 1) = ((MR_Box) (EnumConstMembers_21));
  }
  Members_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_var_defn_0), MaybeEqualityMembers_11, Var_36);
  switch (Target_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        Inherits_24 = (MR_Word) ((MR_Unsigned) 0U);
        Implements_25 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_37;
        MR_Word Var_38;

        Var_37 = ml_backend__ml_code_util__ml_java_mercury_enum_class_0_f_0();
        Inherits_24 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_37)));
        Var_38 = ml_backend__ml_code_util__ml_java_mercury_type_interface_0_f_0();
        {
          Implements_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Implements_25, 0) = ((MR_Box) (Var_38));
          MR_hl_field(1, Implements_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
  }
  hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_9, &TypeVars_26);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
    *ClassDefn_12 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MLDS_ClassName_18));
    MR_hl_field(0, base, 1) = ((MR_Box) (MLDS_ClassArity_15));
    MR_hl_field(0, base, 2) = ((MR_Box) (Context_13));
    MR_hl_field(0, base, 3) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[3]));
    MR_hl_field(0, base, 4) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
    MR_hl_field(0, base, 5) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 6) = ((MR_Box) (Inherits_24));
    MR_hl_field(0, base, 7) = ((MR_Box) (Implements_25));
    MR_hl_field(0, base, 8) = ((MR_Box) (TypeVars_26));
    MR_hl_field(0, base, 9) = ((MR_Box) (Members_22));
    MR_hl_field(0, base, 10) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 11) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, base, 12) = ((MR_Box) ((MR_Unsigned) 0U));
  }
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_MLDS_ExportedEnum_4;

  ml_backend__ml_type_gen__ml_gen_exported_enum_2_p_0(((MR_Word) (wrapper_arg_1)), &conv0_MLDS_ExportedEnum_4);
  *wrapper_arg_2 = ((MR_Box) (conv0_MLDS_ExportedEnum_4));
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_exported_enums_2_p_0(
  MR_Word ModuleInfo_3,
  MR_Word * MLDS_ExportedEnums_4)
{
  MR_Word ExportedEnumInfo_5;

  hlds__hlds_module__module_info_get_exported_enums_2_p_0(ModuleInfo_3, &ExportedEnumInfo_5);
  mercury__list__map_3_p_0((MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_exported_enum_info_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_exported_enum_0), (MR_Word) (&ml_backend__ml_type_gen_scalar_common_1[2]), ExportedEnumInfo_5, MLDS_ExportedEnums_4);
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_target_uses_constructors_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_tag_uses_base_class_1_f_0(
  MR_Word ConsTag_3)
{
  while (MR_TRUE)
  {
    MR_Word UsesBaseClass_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) ConsTag_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        UsesBaseClass_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        UsesBaseClass_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 7:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 10:
          case (MR_Integer) 12:
          case (MR_Integer) 13:
          case (MR_Integer) 14:
            UsesBaseClass_4 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubTag_7 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 2))));
              MR_Word next_value_of_ConsTag_3 = SubTag_7;

              // direct tailcall eliminated
              ;
              ConsTag_3 = next_value_of_ConsTag_3;
              continue;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word RemoteArgsTagInfo_5 = ((MR_Word) ((MR_hl_field(3, ConsTag_3, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) RemoteArgsTagInfo_5)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  UsesBaseClass_4 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                case (MR_Integer) 3:
                  UsesBaseClass_4 = (MR_Integer) 0;
                  break;
              }
            }
            break;
        }
        break;
    }
    return UsesBaseClass_4;
    break;
  }
}

void MR_CALL 
ml_backend__ml_type_gen__ctors_with_and_without_secondary_tag_3_p_0(
  MR_Word CtorRepns_4,
  MR_Integer * NumWith_5,
  MR_Integer * NumWithout_6)
{
  ml_backend__ml_type_gen__ctors_with_and_without_secondary_tag_loop_5_p_0(CtorRepns_4, (MR_Integer) 0, NumWith_5, (MR_Integer) 0, NumWithout_6);
}

static void MR_CALL 
ml_backend__ml_type_gen__ctors_with_and_without_secondary_tag_loop_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_NumWith_0_2,
  MR_Integer * STATE_VARIABLE_NumWith_3,
  MR_Integer STATE_VARIABLE_NumWithout_0_4,
  MR_Integer * STATE_VARIABLE_NumWithout_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_NumWithout_5 = STATE_VARIABLE_NumWithout_0_4;
      *STATE_VARIABLE_NumWith_3 = STATE_VARIABLE_NumWith_0_2;
    }
    else
    {
      MR_Word CtorRepn_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word CtorRepns_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
      MR_Word TagVal_16 = ((MR_Word) ((MR_hl_field(0, CtorRepn_12, (MR_Integer) 3))));
      MR_Word MaybeSecTag_17;
      MR_Integer STATE_VARIABLE_NumWith_23_23;
      MR_Integer STATE_VARIABLE_NumWithout_25_25;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_NumWith_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_NumWithout_0_4;

      MaybeSecTag_17 = hlds__hlds_data__get_maybe_secondary_tag_1_f_0(TagVal_16);
      if ((MaybeSecTag_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_NumWithout_25_25 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumWithout_0_4 + (MR_Unsigned) 1);
        STATE_VARIABLE_NumWith_23_23 = STATE_VARIABLE_NumWith_0_2;
      }
      else
      {
        STATE_VARIABLE_NumWith_23_23 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumWith_0_2 + (MR_Unsigned) 1);
        STATE_VARIABLE_NumWithout_25_25 = STATE_VARIABLE_NumWithout_0_4;
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = CtorRepns_13;
      next_value_of_STATE_VARIABLE_NumWith_0_2 = STATE_VARIABLE_NumWith_23_23;
      next_value_of_STATE_VARIABLE_NumWithout_0_4 = STATE_VARIABLE_NumWithout_25_25;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_NumWith_0_2 = next_value_of_STATE_VARIABLE_NumWith_0_2;
      STATE_VARIABLE_NumWithout_0_4 = next_value_of_STATE_VARIABLE_NumWithout_0_4;
      continue;
    }
    break;
  }
}

MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_4_f_0(
  MR_Word CompilationTarget_6,
  MR_Word TypeCtor_7,
  MR_Word Name_8,
  MR_Integer Arity_9)
{
  MR_String CtorName_10;
  MR_Word TypeName_11 = ((MR_Word) ((MR_hl_field(0, TypeCtor_7, (MR_Integer) 0))));
  MR_Integer TypeArity_12 = ((MR_Integer) ((MR_hl_field(0, TypeCtor_7, (MR_Integer) 1))));
  MR_String UnqualTypeName_13;

  UnqualTypeName_13 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeName_11);
  CtorName_10 = ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(CompilationTarget_6, UnqualTypeName_13, TypeArity_12, Name_8, Arity_9);
  return CtorName_10;
}

MR_String MR_CALL 
ml_backend__ml_type_gen__ml_gen_du_ctor_name_unqual_type_5_f_0(
  MR_Word CompilationTarget_7,
  MR_String UnqualTypeName_8,
  MR_Integer TypeArity_9,
  MR_Word Name_10,
  MR_Integer Arity_11)
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
    CtorName_12 = mercury__string__f_43_43_2_f_0((MR_String) "mr_", UnqualName_13);
  else
    CtorName_12 = UnqualName_13;
  return CtorName_12;
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_type_name_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * QualifiedTypeName_6,
  MR_Integer * Arity_5)
{
  MR_Word Name_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word ModuleName_7;
  MR_String TypeName_8;
  MR_Word MLDS_Module_9;

  *Arity_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  if (((MR_tag((MR_Word) Name_4)) == (MR_Integer) 1))
  {
    ModuleName_7 = ((MR_Word) ((MR_hl_field(1, Name_4, (MR_Integer) 0))));
    TypeName_8 = ((MR_String) ((MR_hl_field(1, Name_4, (MR_Integer) 1))));
  }
  else
  {
    TypeName_8 = ((MR_String) ((MR_hl_field(0, Name_4, (MR_Integer) 0))));
    ModuleName_7 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  }
  MLDS_Module_9 = ml_backend__mlds__mercury_module_name_to_mlds_1_f_0(ModuleName_7);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
    *QualifiedTypeName_6 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (MLDS_Module_9));
    MR_hl_field(0, base, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
    MR_hl_field(0, base, 2) = ((MR_Box) (TypeName_8));
  }
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv1_Stmt_10;

  conv1_Stmt_10 = ml_backend__ml_type_gen__gen_init_field_4_f_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv1_Stmt_10));
  return wrapper_arg_2;
}

static MR_Box MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Word conv0_Arg_4;

  conv0_Arg_4 = ml_backend__ml_type_gen__make_arg_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Arg_4));
  return wrapper_arg_2;
}

MR_Word MR_CALL 
ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(
  MR_Word Target_10,
  MR_Word BaseClassId_11,
  MR_Word CtorClassId_12,
  MR_Word ClassQualifier_13,
  MR_Word SecondaryTagClassId_14,
  MR_Word MaybeTag_15,
  MR_Word FieldInfos_16,
  MR_Word Context_17)
{
  MR_Word CtorDefn_18;
  MR_Word Args_19;
  MR_Word InitMembers0_21;
  MR_Word InitMembers_24;
  MR_Word Params_27;
  MR_Word Stmt_28;
  MR_Word EnvVarNames_29;
  MR_Word Var_31;
  MR_Word Var_38;

  Args_19 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_argument_0), (MR_Word) (&ml_backend__ml_type_gen_scalar_common_1[1]), FieldInfos_16);
  {
    Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[1]));
    MR_hl_field(0, Var_31, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0_2));
    MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_31, 3) = ((MR_Box) (BaseClassId_11));
    MR_hl_field(0, Var_31, 4) = ((MR_Box) (CtorClassId_12));
    MR_hl_field(0, Var_31, 5) = ((MR_Box) (ClassQualifier_13));
  }
  InitMembers0_21 = mercury__list__map_2_f_0((MR_Word) (&ml_backend__ml_type_gen__ml_backend__ml_type_gen__type_ctor_info_mlds_field_info_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_stmt_0), Var_31, FieldInfos_16);
  if ((MaybeTag_15 == (MR_Word) ((MR_Unsigned) 0U)))
    InitMembers_24 = InitMembers0_21;
  else
  {
    MR_Integer TagVal_22 = ((MR_Integer) ((MR_hl_field(1, MaybeTag_15, (MR_Integer) 0))));
    MR_Word InitTag_23;
    MR_Word TagClass_48 = ((MR_Word) ((MR_hl_field(0, SecondaryTagClassId_14, (MR_Integer) 0))));
    MR_Integer TagArity_49 = ((MR_Integer) ((MR_hl_field(0, SecondaryTagClassId_14, (MR_Integer) 1))));
    MR_Word BaseClassQualifier_51 = ((MR_Word) ((MR_hl_field(0, TagClass_48, (MR_Integer) 0))));
    MR_Word QualKind_52 = ((MR_Unsigned) ((MR_hl_field(0, TagClass_48, (MR_Integer) 1))) & (MR_Integer) 1);
    MR_String TagClassName_53 = ((MR_String) ((MR_hl_field(0, TagClass_48, (MR_Integer) 2))));
    MR_Word TagClassQualifier_54;
    MR_Word Rval_55;
    MR_Word CtorClassType_56;
    MR_Word FieldId_57;
    MR_Word FieldLval_58;
    MR_Word Var_59;
    MR_Word Var_60;
    MR_Word Var_63;
    MR_Word Var_64;
    MR_Word Var_68;
    MR_Word Var_71;

    TagClassQualifier_54 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(Target_10, BaseClassQualifier_51, QualKind_52, TagClassName_53, TagArity_49);
    {
      Var_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_59, 0) = ((MR_Box) (TagVal_22));
    }
    {
      Rval_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Rval_55, 0) = ((MR_Box) ((MR_Unsigned) 1U));
      MR_hl_field(3, Rval_55, 1) = ((MR_Box) (Var_59));
    }
    CtorClassType_56 = (MR_Word) (MR_mkword(1, (MR_Word) (CtorClassId_12)));
    {
      Var_60 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_60, 0) = ((MR_Box) (TagClassQualifier_54));
      MR_hl_field(0, Var_60, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Var_60, 2) = ((MR_Box) ((MR_Unsigned) 4U));
    }
    Var_64 = (MR_Word) (MR_mkword(1, (MR_Word) (SecondaryTagClassId_14)));
    {
      Var_63 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_63, 0) = ((MR_Box) ((MR_Unsigned) 7U));
      MR_hl_field(3, Var_63, 1) = ((MR_Box) (Var_64));
    }
    {
      FieldId_57 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, FieldId_57, 0) = ((MR_Box) (Var_60));
      MR_hl_field(1, FieldId_57, 1) = ((MR_Box) (Var_63));
    }
    {
      Var_68 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_68, 0) = ((MR_Box) ((MR_Unsigned) 9U));
      MR_hl_field(3, Var_68, 1) = ((MR_Box) (CtorClassType_56));
    }
    {
      FieldLval_58 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, FieldLval_58, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_type_gen_scalar_common_3[2])));
      MR_hl_field(0, FieldLval_58, 1) = ((MR_Box) (Var_68));
      MR_hl_field(0, FieldLval_58, 2) = ((MR_Box) (CtorClassType_56));
      MR_hl_field(0, FieldLval_58, 3) = ((MR_Box) (FieldId_57));
      MR_hl_field(0, FieldLval_58, 4) = ((MR_Box) (MR_mkword(3, &ml_backend__ml_type_gen_scalar_common_2[5])));
    }
    {
      Var_71 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, Var_71, 0) = ((MR_Box) (FieldLval_58));
      MR_hl_field(2, Var_71, 1) = ((MR_Box) (Rval_55));
    }
    {
      InitTag_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, InitTag_23, 0) = ((MR_Box) ((MR_Unsigned) 8U));
      MR_hl_field(3, InitTag_23, 1) = ((MR_Box) (Var_71));
      MR_hl_field(3, InitTag_23, 2) = ((MR_Box) (Context_17));
    }
    {
      InitMembers_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, InitMembers_24, 0) = ((MR_Box) (InitTag_23));
      MR_hl_field(1, InitMembers_24, 1) = ((MR_Box) (InitMembers0_21));
    }
  }
  {
    Params_27 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_27, 0) = ((MR_Box) (Args_19));
    MR_hl_field(0, Params_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    Stmt_28 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Stmt_28, 0) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Stmt_28, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, Stmt_28, 2) = ((MR_Box) (InitMembers_24));
    MR_hl_field(0, Stmt_28, 3) = ((MR_Box) (Context_17));
  }
  EnvVarNames_29 = mercury__set__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0));
  {
    Var_38 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_38, 0) = ((MR_Box) (Stmt_28));
  }
  {
    CtorDefn_18 = (MR_Word) MR_new_object(MR_Word, (8 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, CtorDefn_18, 0) = ((MR_Box) (MR_mkword(1, &ml_backend__ml_type_gen_scalar_common_3[0])));
    MR_hl_field(0, CtorDefn_18, 1) = ((MR_Box) (Context_17));
    MR_hl_field(0, CtorDefn_18, 2) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_3[1]));
    MR_hl_field(0, CtorDefn_18, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(0, CtorDefn_18, 4) = ((MR_Box) (Params_27));
    MR_hl_field(0, CtorDefn_18, 5) = ((MR_Box) (Var_38));
    MR_hl_field(0, CtorDefn_18, 6) = ((MR_Box) (EnvVarNames_29));
    MR_hl_field(0, CtorDefn_18, 7) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return CtorDefn_18;
}

static void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_ClassDefns_14;

  ml_backend__ml_type_gen__ml_gen_hld_type_defn_if_local_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_ClassDefns_14);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_ClassDefns_14));
}

void MR_CALL 
ml_backend__ml_type_gen__ml_gen_types_3_p_0(
  MR_Word ModuleInfo_4,
  MR_Word Target_5,
  MR_Word * ClassDefns_6)
{
  MR_Word HighLevelData_7;

  HighLevelData_7 = ml_backend__ml_util__mlds_target_high_level_data_1_f_0(Target_5);
  switch (HighLevelData_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *ClassDefns_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeTable_8;
        MR_Word TypeCtorDefns_9;
        MR_Word Var_10;
        MR_Box conv1_ClassDefns_6;

        hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_4, &TypeTable_8);
        hlds__hlds_data__get_all_type_ctor_defns_2_p_0(TypeTable_8, &TypeCtorDefns_9);
        {
          Var_10 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_10, 0) = ((MR_Box) (&ml_backend__ml_type_gen_scalar_common_4[0]));
          MR_hl_field(0, Var_10, 1) = ((MR_Box) (ml_backend__ml_type_gen__ml_gen_types_3_p_0_1));
          MR_hl_field(0, Var_10, 2) = ((MR_Box) ((MR_Integer) 2));
          MR_hl_field(0, Var_10, 3) = ((MR_Box) (ModuleInfo_4));
          MR_hl_field(0, Var_10, 4) = ((MR_Box) (Target_5));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&ml_backend__ml_type_gen_scalar_common_1[0]), (MR_Word) (&ml_backend__ml_type_gen_scalar_common_2[0]), Var_10, TypeCtorDefns_9, ((MR_Box) ((MR_Unsigned) 0U)), &conv1_ClassDefns_6);
        *ClassDefns_6 = ((MR_Word) (conv1_ClassDefns_6));
      }
      break;
  }
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____mlds_field_info_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_type_gen____Unify____mlds_field_info_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_type_gen____Compare____mlds_field_info_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_type_gen____Compare____mlds_field_info_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ml_backend__ml_type_gen____Unify____tag_uses_base_class_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ml_backend__ml_type_gen____Compare____tag_uses_base_class_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
