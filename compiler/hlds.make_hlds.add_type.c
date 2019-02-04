/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2018-10-08
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


// :- module hlds.make_hlds.add_type.
// :- implementation.

/*
INIT mercury__hlds__make_hlds__add_type__init
ENDINIT
*/

#include "hlds.make_hlds.add_type.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.foreign.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.make_hlds_error.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_117;
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_99;
};

struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeParams_12;
  MR_bool hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__EqvType_17;
  jmp_buf hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_62;
  MR_Box hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__conv0_Var_62;
  jmp_buf hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_1;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeInfo_65_65;
  MR_Word hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_64;
};


static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_0;

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_1;

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_value_ordered_old_defn_maybe_abstract_0[2];

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_old_defn_maybe_abstract_0[2];

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_old_defn_maybe_abstract_0[2];

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1024__1_1_f_0(
  MR_Word LambdaHeadVar__1_95);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
  MR_String FieldName_6,
  MR_Word FieldNameDefn_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
  MR_Word TypeCtor_7,
  MR_String ConsName_8,
  MR_Integer Arity_9,
  MR_Word ModuleQual_10,
  MR_Word STATE_VARIABLE_ConsIds_0_14,
  MR_Word * STATE_VARIABLE_ConsIds_15);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtor_2,
  MR_Word TypeCtorModuleName_3,
  MR_Word TVarSet_4,
  MR_Word TypeParams_5,
  MR_Word KindMap_6,
  MR_Word NeedQual_7,
  MR_Word PQInfo_8,
  MR_Word TypeStatus_9,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11,
  MR_Word STATE_VARIABLE_ConsTable_0_12,
  MR_Word * STATE_VARIABLE_ConsTable_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15);

static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
  MR_Word Ctor_16,
  MR_Word TypeCtor_17,
  MR_Word TypeCtorModuleName_18,
  MR_Word TVarSet_19,
  MR_Word TypeParams_20,
  MR_Word KindMap_21,
  MR_Word NeedQual_22,
  MR_Word PQInfo_23,
  MR_Word TypeStatus_24,
  MR_Word STATE_VARIABLE_FieldNameTable_0_55,
  MR_Word * STATE_VARIABLE_FieldNameTable_56,
  MR_Word STATE_VARIABLE_ConsTable_0_57,
  MR_Word * STATE_VARIABLE_ConsTable_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NeedQual_2,
  MR_Word PartialQuals_3,
  MR_Word TypeCtor_4,
  MR_Word ConsId_5,
  MR_Word TypeStatus_6,
  MR_Integer FieldNumber_7,
  MR_Word STATE_VARIABLE_FieldNameTable_0_8,
  MR_Word * STATE_VARIABLE_FieldNameTable_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
  MR_Word FieldName_9,
  MR_Word FieldDefn_10,
  MR_Word NeedQual_11,
  MR_Word PartialQuals_12,
  MR_Word STATE_VARIABLE_FieldNameTable_0_38,
  MR_Word * STATE_VARIABLE_FieldNameTable_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_for_current_target_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word ForeignTypeBody_11,
  MR_Word PrevErrors_12,
  MR_Word Context_13,
  MR_Word * FoundInvalidType_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(
  MR_Word TypeDefn_6,
  MR_Word TypeCtor_7,
  MR_Word * HLDSBody_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_foreign_12_p_0(
  MR_Word TypeStatus0_13,
  MR_Word TypeStatus1_14,
  MR_Word TypeCtor_15,
  MR_Word Body_16,
  MR_Word TypeDefn0_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_41,
  MR_Word * STATE_VARIABLE_FoundInvalidType_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_11_p_0(
  MR_Word TypeCtor_12,
  MR_Word OldIsAbstract_13,
  MR_Word OldStatus_14,
  MR_Word NewStatus_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_TypeDefn_0_26,
  MR_Word * STATE_VARIABLE_TypeDefn_27,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_28,
  MR_Word * STATE_VARIABLE_FoundInvalidType_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static void MR_CALL 
hlds__make_hlds__add_type__maybe_report_multiple_def_error_10_p_0(
  MR_Word TypeStatus_11,
  MR_Word TypeCtor_12,
  MR_Word Context_13,
  MR_Word OldDefn_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_23,
  MR_Word * STATE_VARIABLE_FoundInvalidType_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word BodyA_6,
  MR_Word BodyB_7,
  MR_Word * Body_8);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_3_p_0(
  MR_Word TypeBodyA_4,
  MR_Word TypeBodyB_5,
  MR_Word * TypeBody_6);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word ForeignTypeBodyA_6,
  MR_Word DuTypeBodyB_7,
  MR_Word * Body_8);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(
  MR_Word TypeStatus1_14,
  MR_Word TypeCtor_15,
  MR_Word TypeParams_16,
  MR_Word ParseTreeTypeDefn_17,
  MR_Word Body_18,
  MR_Word TypeDefn0_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_36,
  MR_Word * STATE_VARIABLE_FoundInvalidType_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_7(
  void * env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0(
  MR_Word TypeStatus_10,
  MR_Word TypeCtor_11,
  MR_Word TypeParams_12,
  MR_Word DetailsEqv_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_24,
  MR_Word * STATE_VARIABLE_FoundInvalidType_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_dummy_type_with_unify_compare_8_p_0(
  MR_Word TypeStatus_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsDu_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_26,
  MR_Word * STATE_VARIABLE_FoundInvalidType_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_abstract_11_p_0(
  MR_Word TypeStatus1_12,
  MR_Word TypeCtor_13,
  MR_Word Body_14,
  MR_Word TypeDefn0_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_27,
  MR_Word * STATE_VARIABLE_FoundInvalidType_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewBody_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_38,
  MR_Word * STATE_VARIABLE_FoundInvalidType_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__add_type__get_body_is_solver_type_2_p_0(
  MR_Word Body_3,
  MR_Word * IsSolverType_4);

static void MR_CALL 
hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewStatus_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_28,
  MR_Word * STATE_VARIABLE_FoundInvalidType_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31);

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[91][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][8];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][5];


/* sealed */ struct hlds__make_hlds__add_type__vector_common_type_5_0_s {
  const MR_String hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct hlds__make_hlds__add_type__vector_common_type_5_0_s hlds__make_hlds__add_type_vector_common_5[4];



static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[91][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_sym_name_and_arity_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the previous declaration says it is exported."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "says it is private, while"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "the previous declaration says it is private."))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "says it is exported, while"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[13])))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The previous declaration was here."))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "defined as foreign_type without being declared."))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "user-defined equality or comparison."))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and as such it is not allowed to have"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "contains no information,"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "cannot have user-defined equality or comparison."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "consists of a single zero-arity constructor"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Discriminated unions whose body"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is not yet implemented."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The export of such types as abstract types"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "with a monomorphic definition."))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is a polymorphic equivalence type"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[40]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "(There is no performance penalty for this -- the compiler will"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A better workaround is to use a \"wrapper\" type, with just one"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "by putting the type definition in the interface section."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "A quick workaround is to just export the type as a concrete type"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "is here."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "as its declaration."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have the same visibility"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "must have the same visibility."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Warning: duplicate declaration for type "))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: This declaration for type "))
  },
  /* row 68 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error:"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "of type"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) ","))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "but its"))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "The"))
  },
  /* row 74 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 75 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[31])))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[75]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 77 */
  {
    (MR_Box) ((MR_Unsigned) 1U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[51])))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[77]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 79 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: the definition of the foreign type"))
  },
  /* row 80 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: all definitions of the foreign type"))
  },
  /* row 81 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: type "))
  },
  /* row 82 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: no"))
  },
  /* row 83 */
  {
    ((MR_Box) ((MR_Unsigned) 17U)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 84 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 85 */
  {
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[63])))
  },
  /* row 86 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[85]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 87 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: field"))
  },
  /* row 88 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Here is the previous definition of field"))
  },
  /* row 89 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row 90 */
  {
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "for type"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[4]))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_8[0])),
    ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[17])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
};


static /* final */ const struct hlds__make_hlds__add_type__vector_common_type_5_0_s hlds__make_hlds__add_type_vector_common_5[4] = {
  /* row 0 */   {     (MR_String) "C" },
  /* row 1 */   {     (MR_String) "C#" },
  /* row 2 */   {     (MR_String) "Java" },
  /* row 3 */   {     (MR_String) "Erlang" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
    (MR_PseudoTypeInfo) (&hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0)
  }
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_0 = {
  (MR_String) "old_defn_is_abstract",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_1 = {
  (MR_String) "old_defn_is_not_abstract",
  (MR_Integer) 1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_value_ordered_old_defn_maybe_abstract_0[2] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_1
};

static const MR_EnumFunctorDescPtr hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_old_defn_maybe_abstract_0[2] = {
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_0,
  &hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_functor_desc_old_defn_maybe_abstract_0_1
};

static const MR_Integer hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_old_defn_maybe_abstract_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_old_defn_maybe_abstract_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0_10001)),
  ((MR_Box) (hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0_10001)),
  (MR_String) "hlds.make_hlds.add_type",
  (MR_String) "old_defn_maybe_abstract",
  {     hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_name_ordered_old_defn_maybe_abstract_0 },
  {     hlds__make_hlds__add_type__hlds__make_hlds__add_type__enum_value_ordered_old_defn_maybe_abstract_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__add_type__hlds__make_hlds__add_type__functor_number_map_old_defn_maybe_abstract_0
};

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1024__1_1_f_0(
  MR_Word LambdaHeadVar__1_95)
{
  {
    MR_Word LambdaHeadVar__2_96 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LambdaHeadVar__1_95, (MR_Integer) 0))));

    return LambdaHeadVar__2_96;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_int_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
  MR_String FieldName_6,
  MR_Word FieldNameDefn_7,
  MR_Word ModuleName_8,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11)
{
  {
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (ModuleName_8));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (FieldName_6));
    }
    mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0), ((MR_Box) (Var_12)), ((MR_Box) (FieldNameDefn_7)), STATE_VARIABLE_FieldNameTable_0_10, STATE_VARIABLE_FieldNameTable_11);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
  MR_Word TypeCtor_7,
  MR_String ConsName_8,
  MR_Integer Arity_9,
  MR_Word ModuleQual_10,
  MR_Word STATE_VARIABLE_ConsIds_0_14,
  MR_Word * STATE_VARIABLE_ConsIds_15)
{
  {
    MR_Word ConsIdA_12;
    MR_Word ConsIdB_13;
    MR_Word Var_16;
    MR_Word Var_18;
    MR_Word Var_20;

    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (ModuleQual_10));
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (ConsName_8));
    }
    {
      ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdA_12, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdA_12, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(3), ConsIdA_12, 2) = ((MR_Box) (Arity_9));
      MR_hl_field(MR_mktag(3), ConsIdA_12, 3) = ((MR_Box) (TypeCtor_7));
    }
    Var_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    {
      ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ConsIdB_13, 0) = ((MR_Box) ((MR_Unsigned) 2U));
      MR_hl_field(MR_mktag(3), ConsIdB_13, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(3), ConsIdB_13, 2) = ((MR_Box) (Arity_9));
      MR_hl_field(MR_mktag(3), ConsIdB_13, 3) = ((MR_Box) (Var_18));
    }
    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_20, 0) = ((MR_Box) (ConsIdB_13));
      MR_hl_field(MR_mktag(1), Var_20, 1) = ((MR_Box) (STATE_VARIABLE_ConsIds_0_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_ConsIds_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ConsIdA_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_20));
    }
  }
}

void MR_CALL 
hlds__make_hlds__add_type__add_du_ctors_check_foreign_type_for_cur_backend_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word TypeDefn_10,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_44,
  MR_Word * STATE_VARIABLE_FoundInvalidType_45,
  MR_Word STATE_VARIABLE_ModuleInfo_0_46,
  MR_Word * STATE_VARIABLE_ModuleInfo_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49)
{
  {
    MR_Word Context_14;
    MR_Word TVarSet_15;
    MR_Word TypeParams_16;
    MR_Word KindMap_17;
    MR_Word Body_18;
    MR_Word Status_19;
    MR_Word NeedQual_20;

    hlds__hlds_data__get_type_defn_context_2_p_0(TypeDefn_10, &Context_14);
    hlds__hlds_data__get_type_defn_tvarset_2_p_0(TypeDefn_10, &TVarSet_15);
    hlds__hlds_data__get_type_defn_tparams_2_p_0(TypeDefn_10, &TypeParams_16);
    hlds__hlds_data__get_type_defn_kind_map_2_p_0(TypeDefn_10, &KindMap_17);
    hlds__hlds_data__get_type_defn_body_2_p_0(TypeDefn_10, &Body_18);
    hlds__hlds_data__get_type_defn_status_2_p_0(TypeDefn_10, &Status_19);
    hlds__hlds_data__get_type_defn_ctors_need_qualifier_2_p_0(TypeDefn_10, &NeedQual_20);
    switch (MR_tag((MR_Word) Body_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ForeignTypeBody_38 = (MR_Word) (MR_body((MR_Word) (Body_18), (MR_Integer) 0));
          MR_Word PrevErrors_39;
          MR_Word FoundInvalidTypeInForeignBody_40;

          hlds__hlds_data__get_type_defn_prev_errors_2_p_0(TypeDefn_10, &PrevErrors_39);
          hlds__make_hlds__add_type__check_foreign_type_for_current_target_9_p_0(TypeCtor_9, ForeignTypeBody_38, PrevErrors_39, Context_14, &FoundInvalidTypeInForeignBody_40, STATE_VARIABLE_ModuleInfo_0_46, STATE_VARIABLE_ModuleInfo_47, STATE_VARIABLE_Specs_0_48, STATE_VARIABLE_Specs_49);
          switch (FoundInvalidTypeInForeignBody_40) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *STATE_VARIABLE_FoundInvalidType_45 = STATE_VARIABLE_FoundInvalidType_0_44;
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_FoundInvalidType_45 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ConsList_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Body_18, (MR_Integer) 0))));
          MR_Word CtorMap0_25;
          MR_Word PQInfo_26;
          MR_Word CtorFieldMap0_27;
          MR_Word TypeCtorSymName_28;
          MR_Word TypeCtorModuleName_31;
          MR_Word CtorFieldMap_33;
          MR_Word CtorMap_34;
          MR_Word CtorAddSpecs_35;
          MR_Word STATE_VARIABLE_ModuleInfo_57_57;

          hlds__hlds_module__module_info_get_cons_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_46, &CtorMap0_25);
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(STATE_VARIABLE_ModuleInfo_0_46, &PQInfo_26);
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_46, &CtorFieldMap0_27);
          TypeCtorSymName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 0))));
          if (((MR_tag((MR_Word) TypeCtorSymName_28)) == (MR_Integer) 1))
            TypeCtorModuleName_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TypeCtorSymName_28, (MR_Integer) 0))));
          else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_du_ctors_check_foreign_type_for_cur_backend\'/8", (MR_String) "unqualified TypeCtorSymName");
              return;
            }
          }
          hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(ConsList_21, TypeCtor_9, TypeCtorModuleName_31, TVarSet_15, TypeParams_16, KindMap_17, NeedQual_20, PQInfo_26, Status_19, CtorFieldMap0_27, &CtorFieldMap_33, CtorMap0_25, &CtorMap_34, (MR_Word) ((MR_Unsigned) 0U), &CtorAddSpecs_35);
          hlds__hlds_module__module_info_set_cons_table_3_p_0(CtorMap_34, STATE_VARIABLE_ModuleInfo_0_46, &STATE_VARIABLE_ModuleInfo_57_57);
          hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(CtorFieldMap_33, STATE_VARIABLE_ModuleInfo_57_57, STATE_VARIABLE_ModuleInfo_47);
          if ((CtorAddSpecs_35 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_FoundInvalidType_45 = STATE_VARIABLE_FoundInvalidType_0_44;
            *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
          }
          else
          {
            *STATE_VARIABLE_FoundInvalidType_45 = (MR_Integer) 1;
            *STATE_VARIABLE_Specs_49 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), CtorAddSpecs_35, STATE_VARIABLE_Specs_0_48);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_FoundInvalidType_45 = STATE_VARIABLE_FoundInvalidType_0_44;
          *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
          *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_FoundInvalidType_45 = STATE_VARIABLE_FoundInvalidType_0_44;
              *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
              *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
            }
            break;
          case (MR_Integer) 1:
            {
              *STATE_VARIABLE_FoundInvalidType_45 = STATE_VARIABLE_FoundInvalidType_0_44;
              *STATE_VARIABLE_ModuleInfo_47 = STATE_VARIABLE_ModuleInfo_0_46;
              *STATE_VARIABLE_Specs_49 = STATE_VARIABLE_Specs_0_48;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
  MR_Word HeadVar__1_1,
  MR_Word TypeCtor_2,
  MR_Word TypeCtorModuleName_3,
  MR_Word TVarSet_4,
  MR_Word TypeParams_5,
  MR_Word KindMap_6,
  MR_Word NeedQual_7,
  MR_Word PQInfo_8,
  MR_Word TypeStatus_9,
  MR_Word STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * STATE_VARIABLE_FieldNameTable_11,
  MR_Word STATE_VARIABLE_ConsTable_0_12,
  MR_Word * STATE_VARIABLE_ConsTable_13,
  MR_Word STATE_VARIABLE_Specs_0_14,
  MR_Word * STATE_VARIABLE_Specs_15)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_15 = STATE_VARIABLE_Specs_0_14;
      *STATE_VARIABLE_ConsTable_13 = STATE_VARIABLE_ConsTable_0_12;
      *STATE_VARIABLE_FieldNameTable_11 = STATE_VARIABLE_FieldNameTable_0_10;
    }
    else
    {
      MR_Word Ctor_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ctors_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FieldNameTable_52_52;
      MR_Word STATE_VARIABLE_ConsTable_53_53;
      MR_Word STATE_VARIABLE_Specs_54_54;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_FieldNameTable_0_10;
      MR_Word next_value_of_STATE_VARIABLE_ConsTable_0_12;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_14;

      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(Ctor_33, TypeCtor_2, TypeCtorModuleName_3, TVarSet_4, TypeParams_5, KindMap_6, NeedQual_7, PQInfo_8, TypeStatus_9, STATE_VARIABLE_FieldNameTable_0_10, &STATE_VARIABLE_FieldNameTable_52_52, STATE_VARIABLE_ConsTable_0_12, &STATE_VARIABLE_ConsTable_53_53, STATE_VARIABLE_Specs_0_14, &STATE_VARIABLE_Specs_54_54);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Ctors_34;
      next_value_of_STATE_VARIABLE_FieldNameTable_0_10 = STATE_VARIABLE_FieldNameTable_52_52;
      next_value_of_STATE_VARIABLE_ConsTable_0_12 = STATE_VARIABLE_ConsTable_53_53;
      next_value_of_STATE_VARIABLE_Specs_0_14 = STATE_VARIABLE_Specs_54_54;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_FieldNameTable_0_10 = next_value_of_STATE_VARIABLE_FieldNameTable_0_10;
      STATE_VARIABLE_ConsTable_0_12 = next_value_of_STATE_VARIABLE_ConsTable_0_12;
      STATE_VARIABLE_Specs_0_14 = next_value_of_STATE_VARIABLE_Specs_0_14;
      continue;
    }
    break;
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_Word conv3_LambdaHeadVar__2_96;

    conv3_LambdaHeadVar__2_96 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__1024__1_1_f_0(((MR_Word) (wrapper_arg_1)));
    wrapper_arg_2 = ((MR_Box) (conv3_LambdaHeadVar__2_96));
    return wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_ConsIds_15;

    hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_ConsIds_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_ConsIds_15));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99 = ((MR_Word) ((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_99));
    hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word Var_101;
      MR_Word Var_102;
      MR_Word Var_103;
      MR_Word Var_104;
      MR_Word Var_105;
      MR_Word Var_106;

      (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 0))));
      Var_101 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 1))));
      Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 2))));
      Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 3))));
      Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 4))));
      Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 5))));
      Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(0), (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 6))));
      (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_117);
      if ((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
        hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0), &(env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_99, (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, env_ptr);
        }
        (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
  MR_Word Ctor_16,
  MR_Word TypeCtor_17,
  MR_Word TypeCtorModuleName_18,
  MR_Word TVarSet_19,
  MR_Word TypeParams_20,
  MR_Word KindMap_21,
  MR_Word NeedQual_22,
  MR_Word PQInfo_23,
  MR_Word TypeStatus_24,
  MR_Word STATE_VARIABLE_FieldNameTable_0_55,
  MR_Word * STATE_VARIABLE_FieldNameTable_56,
  MR_Word STATE_VARIABLE_ConsTable_0_57,
  MR_Word * STATE_VARIABLE_ConsTable_58,
  MR_Word STATE_VARIABLE_Specs_0_59,
  MR_Word * STATE_VARIABLE_Specs_60)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s env;

    (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = TypeCtor_17;
    {
      MR_Word MaybeExistConstraints_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 1))));
      MR_Word Name_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 2))));
      MR_Word Args_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 3))));
      MR_Integer Arity_32 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 4))));
      MR_Word Context_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 5))));
      MR_String BaseName_34;
      MR_Word QualifiedName_35;
      MR_Word UnqualifiedName_36;
      MR_Word QualifiedConsIdA_37;
      MR_Word QualifiedConsIdB_38;
      MR_Word UnqualifiedConsIdA_39;
      MR_Word UnqualifiedConsIdB_40;
      MR_Word ConsDefn_41;
      MR_Word PartialQuals_42;
      MR_Word FieldNames_52;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word STATE_VARIABLE_Specs_86_86;
      MR_Integer _Ordinal_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Ctor_16, (MR_Integer) 0))));

      BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(Name_30);
      {
        QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), QualifiedName_35, 0) = ((MR_Box) (TypeCtorModuleName_18));
        MR_hl_field(MR_mktag(1), QualifiedName_35, 1) = ((MR_Box) (BaseName_34));
      }
      {
        UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), UnqualifiedName_36, 0) = ((MR_Box) (BaseName_34));
      }
      {
        QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), QualifiedConsIdA_37, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), QualifiedConsIdA_37, 1) = ((MR_Box) (QualifiedName_35));
        MR_hl_field(MR_mktag(3), QualifiedConsIdA_37, 2) = ((MR_Box) (Arity_32));
        MR_hl_field(MR_mktag(3), QualifiedConsIdA_37, 3) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
      }
      Var_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      {
        QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), QualifiedConsIdB_38, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), QualifiedConsIdB_38, 1) = ((MR_Box) (QualifiedName_35));
        MR_hl_field(MR_mktag(3), QualifiedConsIdB_38, 2) = ((MR_Box) (Arity_32));
        MR_hl_field(MR_mktag(3), QualifiedConsIdB_38, 3) = ((MR_Box) (Var_61));
      }
      {
        UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnqualifiedConsIdA_39, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), UnqualifiedConsIdA_39, 1) = ((MR_Box) (UnqualifiedName_36));
        MR_hl_field(MR_mktag(3), UnqualifiedConsIdA_39, 2) = ((MR_Box) (Arity_32));
        MR_hl_field(MR_mktag(3), UnqualifiedConsIdA_39, 3) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
      }
      Var_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      {
        UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), UnqualifiedConsIdB_40, 0) = ((MR_Box) ((MR_Unsigned) 2U));
        MR_hl_field(MR_mktag(3), UnqualifiedConsIdB_40, 1) = ((MR_Box) (UnqualifiedName_36));
        MR_hl_field(MR_mktag(3), UnqualifiedConsIdB_40, 2) = ((MR_Box) (Arity_32));
        MR_hl_field(MR_mktag(3), UnqualifiedConsIdB_40, 3) = ((MR_Box) (Var_62));
      }
      {
        ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ConsDefn_41, 0) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
        MR_hl_field(MR_mktag(0), ConsDefn_41, 1) = ((MR_Box) (TVarSet_19));
        MR_hl_field(MR_mktag(0), ConsDefn_41, 2) = ((MR_Box) (TypeParams_20));
        MR_hl_field(MR_mktag(0), ConsDefn_41, 3) = ((MR_Box) (KindMap_21));
        MR_hl_field(MR_mktag(0), ConsDefn_41, 4) = ((MR_Box) (MaybeExistConstraints_29));
        MR_hl_field(MR_mktag(0), ConsDefn_41, 5) = ((MR_Box) (Args_31));
        MR_hl_field(MR_mktag(0), ConsDefn_41, 6) = ((MR_Box) (Context_33));
      }
      parse_tree__module_qual__get_partial_qualifiers_4_p_0((MR_Integer) 0, TypeCtorModuleName_18, PQInfo_23, &PartialQuals_42);
      (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_3_p_0(STATE_VARIABLE_ConsTable_0_57, QualifiedConsIdA_37, &(env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
      if ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
        hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&env);
      if ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
      {
        MR_String QualifiedConsIdStr_45;
        MR_String TypeCtorStr_46;
        MR_Word Pieces_47;
        MR_Word Msg_48;
        MR_Word Spec_49;
        MR_Word Var_66;
        MR_Word Var_67;
        MR_Word Var_68;
        MR_Word Var_71;
        MR_Word Var_72;
        MR_Word Var_79;
        MR_Word Var_80;
        MR_Word Var_84;

        QualifiedConsIdStr_45 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(QualifiedConsIdA_37);
        TypeCtorStr_46 = parse_tree__prog_out__type_ctor_to_string_1_f_0((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
        {
          Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (QualifiedConsIdStr_45));
        }
        {
          Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (TypeCtorStr_46));
        }
        {
          Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
          MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[65])));
        }
        {
          Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[90])));
          MR_hl_field(MR_mktag(1), Var_68, 1) = ((MR_Box) (Var_71));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Var_67));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) (Var_68));
        }
        {
          Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[89])));
          MR_hl_field(MR_mktag(1), Pieces_47, 1) = ((MR_Box) (Var_66));
        }
        {
          Var_80 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_80, 0) = ((MR_Box) (Pieces_47));
        }
        {
          Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (Var_80));
          MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Msg_48 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_48, 0) = ((MR_Box) (Context_33));
          MR_hl_field(MR_mktag(0), Msg_48, 1) = ((MR_Box) (Var_79));
        }
        {
          Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Msg_48));
          MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_49 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_49, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_49, 2) = ((MR_Box) (Var_84));
        }
        {
          STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (Spec_49));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_59));
        }
        *STATE_VARIABLE_ConsTable_58 = STATE_VARIABLE_ConsTable_0_57;
      }
      else
      {
        MR_Word STATE_VARIABLE_OtherConsIds_87_87;
        MR_Word STATE_VARIABLE_OtherConsIds_89_89;
        MR_Word Var_91;
        MR_Word STATE_VARIABLE_OtherConsIds_92_92;
        MR_Box conv2_STATE_VARIABLE_OtherConsIds_92_92;

        {
          STATE_VARIABLE_OtherConsIds_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_OtherConsIds_87_87, 0) = ((MR_Box) (QualifiedConsIdB_38));
          MR_hl_field(MR_mktag(1), STATE_VARIABLE_OtherConsIds_87_87, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        switch (NeedQual_22) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word Var_90;

              {
                Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (UnqualifiedConsIdB_40));
                MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) (STATE_VARIABLE_OtherConsIds_87_87));
              }
              {
                STATE_VARIABLE_OtherConsIds_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_OtherConsIds_89_89, 0) = ((MR_Box) (UnqualifiedConsIdA_39));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_OtherConsIds_89_89, 1) = ((MR_Box) (Var_90));
              }
            }
            break;
          case (MR_Integer) 0:
            STATE_VARIABLE_OtherConsIds_89_89 = STATE_VARIABLE_OtherConsIds_87_87;
            break;
        }
        {
          Var_91 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_91, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_91, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
          MR_hl_field(MR_mktag(0), Var_91, 2) = ((MR_Box) ((MR_Integer) 3));
          MR_hl_field(MR_mktag(0), Var_91, 3) = ((MR_Box) ((env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
          MR_hl_field(MR_mktag(0), Var_91, 4) = ((MR_Box) (BaseName_34));
          MR_hl_field(MR_mktag(0), Var_91, 5) = ((MR_Box) (Arity_32));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[2]), Var_91, PartialQuals_42, ((MR_Box) (STATE_VARIABLE_OtherConsIds_89_89)), &conv2_STATE_VARIABLE_OtherConsIds_92_92);
        STATE_VARIABLE_OtherConsIds_92_92 = ((MR_Word) (conv2_STATE_VARIABLE_OtherConsIds_92_92));
        hlds__hlds_data__insert_into_cons_table_5_p_0(QualifiedConsIdA_37, STATE_VARIABLE_OtherConsIds_92_92, ConsDefn_41, STATE_VARIABLE_ConsTable_0_57, STATE_VARIABLE_ConsTable_58);
        STATE_VARIABLE_Specs_86_86 = STATE_VARIABLE_Specs_0_59;
      }
      FieldNames_52 = mercury__list__map_2_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[3]), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[1]), Args_31);
      hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(FieldNames_52, NeedQual_22, PartialQuals_42, (env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, QualifiedConsIdA_37, TypeStatus_24, (MR_Integer) 1, STATE_VARIABLE_FieldNameTable_0_55, STATE_VARIABLE_FieldNameTable_56, STATE_VARIABLE_Specs_86_86, STATE_VARIABLE_Specs_60);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
  MR_Word HeadVar__1_1,
  MR_Word NeedQual_2,
  MR_Word PartialQuals_3,
  MR_Word TypeCtor_4,
  MR_Word ConsId_5,
  MR_Word TypeStatus_6,
  MR_Integer FieldNumber_7,
  MR_Word STATE_VARIABLE_FieldNameTable_0_8,
  MR_Word * STATE_VARIABLE_FieldNameTable_9,
  MR_Word STATE_VARIABLE_Specs_0_10,
  MR_Word * STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_Specs_11 = STATE_VARIABLE_Specs_0_10;
      *STATE_VARIABLE_FieldNameTable_9 = STATE_VARIABLE_FieldNameTable_0_8;
    }
    else
    {
      MR_Word MaybeCtorFieldName_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word MaybeCtorFieldNames_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_FieldNameTable_42_42;
      MR_Word STATE_VARIABLE_Specs_43_43;
      MR_Integer Var_44;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_FieldNumber_7;
      MR_Word next_value_of_STATE_VARIABLE_FieldNameTable_0_8;
      MR_Word next_value_of_STATE_VARIABLE_Specs_0_10;

      if ((MaybeCtorFieldName_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        STATE_VARIABLE_FieldNameTable_42_42 = STATE_VARIABLE_FieldNameTable_0_8;
        STATE_VARIABLE_Specs_43_43 = STATE_VARIABLE_Specs_0_10;
      }
      else
      {
        MR_Word FieldName_34;
        MR_Word FieldNameContext_35;
        MR_Word FieldDefn_36;
        MR_Word Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeCtorFieldName_24, (MR_Integer) 0))));

        FieldName_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 0))));
        FieldNameContext_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_41, (MR_Integer) 1))));
        {
          FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), FieldDefn_36, 0) = ((MR_Box) (FieldNameContext_35));
          MR_hl_field(MR_mktag(0), FieldDefn_36, 1) = ((MR_Box) (TypeStatus_6));
          MR_hl_field(MR_mktag(0), FieldDefn_36, 2) = ((MR_Box) (TypeCtor_4));
          MR_hl_field(MR_mktag(0), FieldDefn_36, 3) = ((MR_Box) (ConsId_5));
          MR_hl_field(MR_mktag(0), FieldDefn_36, 4) = ((MR_Box) (FieldNumber_7));
        }
        hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(FieldName_34, FieldDefn_36, NeedQual_2, PartialQuals_3, STATE_VARIABLE_FieldNameTable_0_8, &STATE_VARIABLE_FieldNameTable_42_42, STATE_VARIABLE_Specs_0_10, &STATE_VARIABLE_Specs_43_43);
      }
      Var_44 = (MR_Integer) ((MR_Unsigned) FieldNumber_7 + (MR_Unsigned) (MR_Integer) 1);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = MaybeCtorFieldNames_25;
      next_value_of_FieldNumber_7 = Var_44;
      next_value_of_STATE_VARIABLE_FieldNameTable_0_8 = STATE_VARIABLE_FieldNameTable_42_42;
      next_value_of_STATE_VARIABLE_Specs_0_10 = STATE_VARIABLE_Specs_43_43;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      FieldNumber_7 = next_value_of_FieldNumber_7;
      STATE_VARIABLE_FieldNameTable_0_8 = next_value_of_STATE_VARIABLE_FieldNameTable_0_8;
      STATE_VARIABLE_Specs_0_10 = next_value_of_STATE_VARIABLE_Specs_0_10;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_FieldNameTable_11;

    hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_FieldNameTable_11);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_FieldNameTable_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
  MR_Word FieldName_9,
  MR_Word FieldDefn_10,
  MR_Word NeedQual_11,
  MR_Word PartialQuals_12,
  MR_Word STATE_VARIABLE_FieldNameTable_0_38,
  MR_Word * STATE_VARIABLE_FieldNameTable_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word FieldModule_17;
    MR_Word ConflictingDefns_19;
    MR_Box conv0_ConflictingDefns_19;

    if (((MR_tag((MR_Word) FieldName_9)) == (MR_Integer) 1))
      FieldModule_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FieldName_9, (MR_Integer) 0))));
    else
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
        return;
      }
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[4]), STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (FieldName_9)), &conv0_ConflictingDefns_19);
    if (succeeded)
    {
      ConflictingDefns_19 = ((MR_Word) (conv0_ConflictingDefns_19));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word OrigContext_21;
      MR_Word Context_26;
      MR_String FieldString_31;
      MR_Word Pieces_32;
      MR_Word HereMsg_33;
      MR_Word PrevPieces_34;
      MR_Word PrevMsg_35;
      MR_Word Spec_36;
      MR_Word Var_51;
      MR_Word Var_52;
      MR_Word Var_59;
      MR_Word Var_60;
      MR_Word Var_64;
      MR_Word Var_72;
      MR_Word Var_73;
      MR_Word Var_77;
      MR_Word Var_78;
      MR_Word ConflictingDefn_20;
      MR_Word Var_45;

      succeeded = (ConflictingDefns_19 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ConflictingDefn_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConflictingDefns_19, (MR_Integer) 0))));
        Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ConflictingDefns_19, (MR_Integer) 1))));
        succeeded = (Var_45 == (MR_Word) ((MR_Unsigned) 0U));
      }
      if (succeeded)
        OrigContext_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ConflictingDefn_20, (MR_Integer) 0))));
      else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
          return;
        }
      }
      Context_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FieldDefn_10, (MR_Integer) 0))));
      FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(FieldName_9);
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_52, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_52, 1) = ((MR_Box) (FieldString_31));
      }
      {
        Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_51, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[65])));
      }
      {
        Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[87])));
        MR_hl_field(MR_mktag(1), Pieces_32, 1) = ((MR_Box) (Var_51));
      }
      {
        Var_60 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_60, 0) = ((MR_Box) (Pieces_32));
      }
      {
        Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_59, 0) = ((MR_Box) (Var_60));
        MR_hl_field(MR_mktag(1), Var_59, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        HereMsg_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), HereMsg_33, 0) = ((MR_Box) (Context_26));
        MR_hl_field(MR_mktag(0), HereMsg_33, 1) = ((MR_Box) (Var_59));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (Var_52));
        MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
      }
      {
        PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[88])));
        MR_hl_field(MR_mktag(1), PrevPieces_34, 1) = ((MR_Box) (Var_64));
      }
      {
        Var_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_73, 0) = ((MR_Box) (PrevPieces_34));
      }
      {
        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Var_73));
        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), PrevMsg_35, 0) = ((MR_Box) (OrigContext_21));
        MR_hl_field(MR_mktag(0), PrevMsg_35, 1) = ((MR_Box) (Var_72));
      }
      {
        Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (PrevMsg_35));
        MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (HereMsg_33));
        MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_78));
      }
      {
        Spec_36 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_36, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_36, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_36, 2) = ((MR_Box) (Var_77));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_41 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_36));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
      }
      *STATE_VARIABLE_FieldNameTable_39 = STATE_VARIABLE_FieldNameTable_0_38;
    }
    else
    {
      MR_String UnqualFieldName_37;
      MR_Word STATE_VARIABLE_FieldNameTable_82_82;
      MR_Word Var_83;
      MR_Word Var_84;
      MR_Box conv2_STATE_VARIABLE_FieldNameTable_39;

      UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(FieldName_9);
      switch (NeedQual_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Var_81;

            {
              Var_81 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Var_81, 0) = ((MR_Box) (UnqualFieldName_37));
            }
            mercury__multi_map__set_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0), ((MR_Box) (Var_81)), ((MR_Box) (FieldDefn_10)), STATE_VARIABLE_FieldNameTable_0_38, &STATE_VARIABLE_FieldNameTable_82_82);
          }
          break;
        case (MR_Integer) 0:
          STATE_VARIABLE_FieldNameTable_82_82 = STATE_VARIABLE_FieldNameTable_0_38;
          break;
      }
      {
        Var_83 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_83, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_83, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
        MR_hl_field(MR_mktag(0), Var_83, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_83, 3) = ((MR_Box) (UnqualFieldName_37));
        MR_hl_field(MR_mktag(0), Var_83, 4) = ((MR_Box) (FieldDefn_10));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (FieldModule_17));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) (PartialQuals_12));
      }
      mercury__list__foldl_4_p_0((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_2[0]), Var_83, Var_84, ((MR_Box) (STATE_VARIABLE_FieldNameTable_82_82)), &conv2_STATE_VARIABLE_FieldNameTable_39);
      *STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) (conv2_STATE_VARIABLE_FieldNameTable_39));
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_for_current_target_9_p_0(
  MR_Word TypeCtor_10,
  MR_Word ForeignTypeBody_11,
  MR_Word PrevErrors_12,
  MR_Word Context_13,
  MR_Word * FoundInvalidType_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * STATE_VARIABLE_ModuleInfo_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word Name_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0))));
    MR_Integer Arity_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 1))));
    MR_Word Globals_19;
    MR_Word Target_20;
    MR_Word Var_69;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_26, &Globals_19);
    libs__globals__get_target_2_p_0(Globals_19, &Target_20);
    backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_20, ForeignTypeBody_11, &Var_69);
    succeeded = ((MR_Integer) 1 == Var_69);
    if (succeeded)
    {
      *FoundInvalidType_14 = (MR_Integer) 0;
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
    }
    else
    {
      succeeded = (PrevErrors_12 == (MR_Integer) 1);
      if (succeeded)
      {
        *FoundInvalidType_14 = (MR_Integer) 1;
        *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      }
      else
      {
        MR_String LangStr_21 = ((&hlds__make_hlds__add_type_vector_common_5[0 + Target_20]))->hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
        MR_Word MainPieces_22;
        MR_Word Msg_24;
        MR_Word Spec_25;
        MR_Word Var_33;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_38;
        MR_Word Var_41;
        MR_Word Var_42;
        MR_Word Var_43;
        MR_Word Var_58;
        MR_Word Var_59;
        MR_Word Var_66;

        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), Var_34, 0) = ((MR_Box) (LangStr_21));
        }
        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_43, 0) = ((MR_Box) (Name_17));
          MR_hl_field(MR_mktag(0), Var_43, 1) = ((MR_Box) (Arity_18));
        }
        {
          Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_42, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_42, 1) = ((MR_Box) (Var_43));
        }
        {
          Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (Var_42));
          MR_hl_field(MR_mktag(1), Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
        }
        {
          Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[84])));
          MR_hl_field(MR_mktag(1), Var_38, 1) = ((MR_Box) (Var_41));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[83])));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_38));
        }
        {
          Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (Var_34));
          MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_35));
        }
        {
          MainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[82])));
          MR_hl_field(MR_mktag(1), MainPieces_22, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_59 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_59, 0) = ((MR_Box) (MainPieces_22));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (Var_59));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[86])));
        }
        {
          Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_13));
          MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_58));
        }
        {
          Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_66, 0) = ((MR_Box) (Msg_24));
          MR_hl_field(MR_mktag(1), Var_66, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_66));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_29 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
        }
        *FoundInvalidType_14 = (MR_Integer) 1;
      }
    }
    *STATE_VARIABLE_ModuleInfo_27 = STATE_VARIABLE_ModuleInfo_0_26;
  }
}

void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_9_p_0(
  MR_Word TypeStatus0_10,
  MR_Word NeedQual_11,
  MR_Word ItemTypeDefnInfo_12,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_41,
  MR_Word * STATE_VARIABLE_FoundInvalidType_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;
    MR_Word Specs_15;
    MR_Word SymName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 0))));
    MR_Word TypeParams_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 1))));
    MR_Word ParseTreeTypeDefn_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 2))));
    MR_Word TVarSet_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 3))));
    MR_Word Context_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ItemTypeDefnInfo_12, (MR_Integer) 4))));
    MR_Word Globals_22;
    MR_Integer Arity_23;
    MR_Word TypeCtor_24;
    MR_Word Body_25;
    MR_Word TypeStatus1_31;
    MR_Word KindMap_32;
    MR_Word HLDSTypeDefn0_33;
    MR_Word STATE_VARIABLE_ModuleInfo_45_45;
    MR_Word STATE_VARIABLE_ModuleInfo_56_56;
    MR_Word Var_59;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Globals_22);
    mercury__list__length_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), TypeParams_17, &Arity_23);
    {
      TypeCtor_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeCtor_24, 0) = ((MR_Box) (SymName_16));
      MR_hl_field(MR_mktag(0), TypeCtor_24, 1) = ((MR_Box) (Arity_23));
    }
    hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(ParseTreeTypeDefn_18, TypeCtor_24, &Body_25, STATE_VARIABLE_ModuleInfo_0_39, &STATE_VARIABLE_ModuleInfo_45_45);
    if (((MR_tag((MR_Word) Body_25)) == (MR_Integer) 1))
    {
      MR_String Var_46;

      Var_46 = mercury__term__context_file_1_f_0(Context_20);
      succeeded = mercury__string__suffix_2_p_0(Var_46, (MR_String) ".int2");
    }
    else
    if (((((MR_tag((MR_Word) Body_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_25, (MR_Integer) 0)))) == (MR_Integer) 1))))
      succeeded = MR_TRUE;
    else
      succeeded = MR_FALSE;
    if (succeeded)
      hlds__status__type_make_status_abstract_2_p_0(TypeStatus0_10, &TypeStatus1_31);
    else
      TypeStatus1_31 = TypeStatus0_10;
    mercury__map__init_1_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), (MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0), &KindMap_32);
    hlds__hlds_data__create_hlds_type_defn_10_p_0(TVarSet_19, TypeParams_17, KindMap_32, Body_25, (MR_Integer) 0, TypeStatus1_31, NeedQual_11, (MR_Integer) 0, Context_20, &HLDSTypeDefn0_33);
    switch (MR_tag((MR_Word) ParseTreeTypeDefn_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
        {
          hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(TypeStatus1_31, TypeCtor_24, TypeParams_17, ParseTreeTypeDefn_18, Body_25, HLDSTypeDefn0_33, Context_20, STATE_VARIABLE_ModuleInfo_45_45, &STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
        }
        break;
      case (MR_Integer) 2:
        {
          hlds__make_hlds__add_type__module_add_type_defn_foreign_12_p_0(TypeStatus0_10, TypeStatus1_31, TypeCtor_24, Body_25, HLDSTypeDefn0_33, Context_20, STATE_VARIABLE_ModuleInfo_45_45, &STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), ParseTreeTypeDefn_18, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(TypeStatus1_31, TypeCtor_24, TypeParams_17, ParseTreeTypeDefn_18, Body_25, HLDSTypeDefn0_33, Context_20, STATE_VARIABLE_ModuleInfo_45_45, &STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
            }
            break;
          case (MR_Integer) 1:
            {
              hlds__make_hlds__add_type__module_add_type_defn_abstract_11_p_0(TypeStatus1_31, TypeCtor_24, Body_25, HLDSTypeDefn0_33, Context_20, STATE_VARIABLE_ModuleInfo_45_45, &STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_FoundInvalidType_0_41, STATE_VARIABLE_FoundInvalidType_42, (MR_Word) ((MR_Unsigned) 0U), &Specs_15);
            }
            break;
        }
        break;
    }
    Var_59 = parse_tree__error_util__contains_errors_2_f_0(Globals_22, Specs_15);
    succeeded = (Var_59 == (MR_Integer) 1);
    if (succeeded)
      hlds__hlds_module__module_info_incr_errors_2_p_0(STATE_VARIABLE_ModuleInfo_56_56, STATE_VARIABLE_ModuleInfo_40);
    else
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_56_56;
    *STATE_VARIABLE_Specs_44 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), Specs_15, STATE_VARIABLE_Specs_0_43);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_to_hlds_5_p_0(
  MR_Word TypeDefn_6,
  MR_Word TypeCtor_7,
  MR_Word * HLDSBody_8,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) TypeDefn_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_10 = (MR_Word) (MR_body((MR_Word) (TypeDefn_6), (MR_Integer) 0));
          MR_Word Ctors_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 0))));
          MR_Word MaybeUserEqComp_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 1))));
          MR_Word MaybeDirectArgCtors_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_10, (MR_Integer) 2))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *HLDSBody_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Ctors_11));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MaybeUserEqComp_12));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          if ((MaybeDirectArgCtors_13 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
          else
          {
            MR_Word DirectArgCtors_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeDirectArgCtors_13, (MR_Integer) 0))));
            MR_Word TypeRepnDec0_17;
            MR_Word DirectArgMap0_18;
            MR_Word OldDirectArgCtors_19;
            MR_Box conv0_OldDirectArgCtors_19;

            hlds__hlds_module__module_info_get_type_repn_dec_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &TypeRepnDec0_17);
            DirectArgMap0_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_17, (MR_Integer) 1))));
            succeeded = mercury__map__search_3_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), DirectArgMap0_18, ((MR_Box) (TypeCtor_7)), &conv0_OldDirectArgCtors_19);
            if (succeeded)
            {
              OldDirectArgCtors_19 = ((MR_Word) (conv0_OldDirectArgCtors_19));
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), ((MR_Box) (DirectArgCtors_16)), ((MR_Box) (OldDirectArgCtors_19)));
              if (!(succeeded))
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.convert_type_defn_to_hlds\'/5", (MR_String) "different DirectArgCtors for same TypeCtor");
                  return;
                }
              }
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            else
            {
              MR_Word DirectArgMap_20;
              MR_Word TypeRepnDec_21;
              MR_Word Var_63;
              MR_Word Var_65;
              MR_Word Var_66;

              mercury__map__det_insert_4_p_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0), (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[1]), ((MR_Box) (TypeCtor_7)), ((MR_Box) (DirectArgCtors_16)), DirectArgMap0_18, &DirectArgMap_20);
              Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_17, (MR_Integer) 0))));
              Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_17, (MR_Integer) 2))));
              Var_66 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRepnDec0_17, (MR_Integer) 3))));
              {
                TypeRepnDec_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), TypeRepnDec_21, 0) = ((MR_Box) (Var_63));
                MR_hl_field(MR_mktag(0), TypeRepnDec_21, 1) = ((MR_Box) (DirectArgMap_20));
                MR_hl_field(MR_mktag(0), TypeRepnDec_21, 2) = ((MR_Box) (Var_65));
                MR_hl_field(MR_mktag(0), TypeRepnDec_21, 3) = ((MR_Box) (Var_66));
              }
              hlds__hlds_module__module_info_set_type_repn_dec_3_p_0(TypeRepnDec_21, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DetailsSolver_23 = (MR_Word) (MR_body((MR_Word) (TypeDefn_6), (MR_Integer) 1));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HLDSBody_8 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsSolver_23));
          }
          *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word DetailsForeign_25 = (MR_Word) (MR_body((MR_Word) (TypeDefn_6), (MR_Integer) 2));
          MR_Word ForeignType_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_25, (MR_Integer) 0))));
          MR_Word Assertions_27 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_25, (MR_Integer) 2))));
          MR_Word Body_30;
          MR_Word MaybeUserEqComp_59 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsForeign_25, (MR_Integer) 1))));

          switch (MR_tag((MR_Word) ForeignType_26)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word CForeignType_28 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignType_26, (MR_Integer) 0))));
                MR_Word Data_29;
                MR_Word Var_48;

                {
                  Data_29 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Data_29, 0) = ((MR_Box) (CForeignType_28));
                  MR_hl_field(MR_mktag(0), Data_29, 1) = ((MR_Box) (MaybeUserEqComp_59));
                  MR_hl_field(MR_mktag(0), Data_29, 2) = ((MR_Box) (Assertions_27));
                }
                {
                  Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (Data_29));
                }
                {
                  Body_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Body_30, 0) = ((MR_Box) (Var_48));
                  MR_hl_field(MR_mktag(0), Body_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word JavaForeignType_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ForeignType_26, (MR_Integer) 0))));
                MR_Word Var_45;
                MR_Word Data_56;

                {
                  Data_56 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Data_56, 0) = ((MR_Box) (JavaForeignType_31));
                  MR_hl_field(MR_mktag(0), Data_56, 1) = ((MR_Box) (MaybeUserEqComp_59));
                  MR_hl_field(MR_mktag(0), Data_56, 2) = ((MR_Box) (Assertions_27));
                }
                {
                  Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (Data_56));
                }
                {
                  Body_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Body_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 1) = ((MR_Box) (Var_45));
                  MR_hl_field(MR_mktag(0), Body_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word CSharpForeignType_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ForeignType_26, (MR_Integer) 0))));
                MR_Word Var_42;
                MR_Word Data_57;

                {
                  Data_57 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Data_57, 0) = ((MR_Box) (CSharpForeignType_32));
                  MR_hl_field(MR_mktag(0), Data_57, 1) = ((MR_Box) (MaybeUserEqComp_59));
                  MR_hl_field(MR_mktag(0), Data_57, 2) = ((MR_Box) (Assertions_27));
                }
                {
                  Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (Data_57));
                }
                {
                  Body_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Body_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 2) = ((MR_Box) (Var_42));
                  MR_hl_field(MR_mktag(0), Body_30, 3) = ((MR_Box) ((MR_Unsigned) 0U));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_39;
                MR_Word Data_58;

                {
                  Data_58 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Data_58, 0) = NULL;
                  MR_hl_field(MR_mktag(0), Data_58, 1) = ((MR_Box) (MaybeUserEqComp_59));
                  MR_hl_field(MR_mktag(0), Data_58, 2) = ((MR_Box) (Assertions_27));
                }
                {
                  Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (Data_58));
                }
                {
                  Body_30 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Body_30, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(0), Body_30, 3) = ((MR_Box) (Var_39));
                }
              }
              break;
          }
          *HLDSBody_8 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (Body_30)));
          *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word EqvType_22;
              MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 1))));

              EqvType_22 = (MR_Word) (Var_52);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HLDSBody_8 = base;
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (EqvType_22));
              }
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DetailsAbstract_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), TypeDefn_6, (MR_Integer) 1))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HLDSBody_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (DetailsAbstract_24));
              }
              *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_foreign_12_p_0(
  MR_Word TypeStatus0_13,
  MR_Word TypeStatus1_14,
  MR_Word TypeCtor_15,
  MR_Word Body_16,
  MR_Word TypeDefn0_17,
  MR_Word Context_18,
  MR_Word STATE_VARIABLE_ModuleInfo_0_39,
  MR_Word * STATE_VARIABLE_ModuleInfo_40,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_41,
  MR_Word * STATE_VARIABLE_FoundInvalidType_42,
  MR_Word STATE_VARIABLE_Specs_0_43,
  MR_Word * STATE_VARIABLE_Specs_44)
{
  {
    MR_bool succeeded;
    MR_Word SymName_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0))));
    MR_Integer Arity_23 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
    MR_Word TypeTable0_24;
    MR_Word OldDefn_25;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &TypeTable0_24);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_24, TypeCtor_15, &OldDefn_25);
    if (succeeded)
    {
      MR_Word TypeStatus_26;
      MR_Word TypeDefn1_27;
      MR_Word OldTypeStatus_28;
      MR_Word OldBody_29;
      MR_Word STATE_VARIABLE_FoundInvalidType_45_45;
      MR_Word STATE_VARIABLE_Specs_46_46;
      MR_Word OldTypeStatus_90;

      hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_25, &OldTypeStatus_90);
      hlds__status__type_combine_status_3_p_0(TypeStatus1_14, OldTypeStatus_90, &TypeStatus_26);
      hlds__hlds_data__set_type_defn_status_3_p_0(TypeStatus_26, TypeDefn0_17, &TypeDefn1_27);
      hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(TypeCtor_15, OldDefn_25, Body_16, Context_18, STATE_VARIABLE_FoundInvalidType_0_41, &STATE_VARIABLE_FoundInvalidType_45_45, STATE_VARIABLE_Specs_0_43, &STATE_VARIABLE_Specs_46_46);
      hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_25, &OldTypeStatus_28);
      hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_25, &OldBody_29);
      succeeded = ((((MR_tag((MR_Word) OldBody_29)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldBody_29, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        {
          MR_Word TypeDefn_31;
          MR_Word TypeTable_32;

          hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_11_p_0(TypeCtor_15, (MR_Integer) 0, OldTypeStatus_28, TypeStatus0_13, Context_18, TypeDefn1_27, &TypeDefn_31, STATE_VARIABLE_FoundInvalidType_45_45, STATE_VARIABLE_FoundInvalidType_42, STATE_VARIABLE_Specs_46_46, STATE_VARIABLE_Specs_44);
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn_31, TypeTable0_24, &TypeTable_32);
          hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_32, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40);
        }
      }
      else
      {
        MR_Word Globals_33;
        MR_Word MergedBody_34;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_ModuleInfo_0_39, &Globals_33);
        succeeded = hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(Globals_33, OldBody_29, Body_16, &MergedBody_34);
        if (succeeded)
        {
          MR_Word TypeDefn2_35;
          MR_Word TypeDefn_78;
          MR_Word TypeTable_79;

          hlds__hlds_data__set_type_defn_body_3_p_0(MergedBody_34, TypeDefn1_27, &TypeDefn2_35);
          hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_11_p_0(TypeCtor_15, (MR_Integer) 1, OldTypeStatus_28, TypeStatus1_14, Context_18, TypeDefn2_35, &TypeDefn_78, STATE_VARIABLE_FoundInvalidType_45_45, STATE_VARIABLE_FoundInvalidType_42, STATE_VARIABLE_Specs_46_46, STATE_VARIABLE_Specs_44);
          hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn_78, TypeTable0_24, &TypeTable_79);
          hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_79, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40);
        }
        else
          hlds__make_hlds__add_type__maybe_report_multiple_def_error_10_p_0(TypeStatus_26, TypeCtor_15, Context_18, OldDefn_25, STATE_VARIABLE_ModuleInfo_0_39, STATE_VARIABLE_ModuleInfo_40, STATE_VARIABLE_FoundInvalidType_45_45, STATE_VARIABLE_FoundInvalidType_42, STATE_VARIABLE_Specs_46_46, STATE_VARIABLE_Specs_44);
      }
    }
    else
    {
      MR_Word ForeignDeclPieces_36;
      MR_Word ForeignDeclMsg_37;
      MR_Word ForeignDeclSpec_38;
      MR_Word Var_60;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_69;
      MR_Word Var_70;
      MR_Word Var_74;

      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (SymName_22));
        MR_hl_field(MR_mktag(0), Var_62, 1) = ((MR_Box) (Arity_23));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_61, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_61, 1) = ((MR_Box) (Var_62));
      }
      {
        Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Var_61));
        MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[19])));
      }
      {
        ForeignDeclPieces_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), ForeignDeclPieces_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[81])));
        MR_hl_field(MR_mktag(1), ForeignDeclPieces_36, 1) = ((MR_Box) (Var_60));
      }
      {
        Var_70 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_70, 0) = ((MR_Box) (ForeignDeclPieces_36));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ForeignDeclMsg_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignDeclMsg_37, 0) = ((MR_Box) (Context_18));
        MR_hl_field(MR_mktag(0), ForeignDeclMsg_37, 1) = ((MR_Box) (Var_69));
      }
      {
        Var_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_74, 0) = ((MR_Box) (ForeignDeclMsg_37));
        MR_hl_field(MR_mktag(1), Var_74, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        ForeignDeclSpec_38 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), ForeignDeclSpec_38, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), ForeignDeclSpec_38, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), ForeignDeclSpec_38, 2) = ((MR_Box) (Var_74));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_44 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ForeignDeclSpec_38));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_43));
      }
      *STATE_VARIABLE_FoundInvalidType_42 = (MR_Integer) 1;
      *STATE_VARIABLE_ModuleInfo_40 = STATE_VARIABLE_ModuleInfo_0_39;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_foreign_type_visibility_11_p_0(
  MR_Word TypeCtor_12,
  MR_Word OldIsAbstract_13,
  MR_Word OldStatus_14,
  MR_Word NewStatus_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_TypeDefn_0_26,
  MR_Word * STATE_VARIABLE_TypeDefn_27,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_28,
  MR_Word * STATE_VARIABLE_FoundInvalidType_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_bool succeeded;

    switch (OldIsAbstract_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_32;
          MR_Word Var_33;

          Var_32 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(OldStatus_14);
          succeeded = (Var_32 == (MR_Integer) 0);
          if (succeeded)
          {
            Var_33 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_15);
            succeeded = (Var_33 == (MR_Integer) 1);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_69 = (MR_Word) (OldStatus_14);

          succeeded = (Var_69 == (MR_Word) ((MR_Unsigned) 20U));
          if (succeeded)
          {
            MR_Word Var_70;

            Var_70 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_15);
            succeeded = (Var_70 == (MR_Integer) 0);
          }
          else
          {
            MR_Word Var_71 = (MR_Word) (OldStatus_14);

            succeeded = (Var_71 == (MR_Word) ((MR_Unsigned) 12U));
            if (succeeded)
            {
              MR_Word Var_72 = (MR_Word) (NewStatus_15);

              succeeded = (Var_72 == (MR_Word) ((MR_Unsigned) 12U));
            }
            else
            {
              MR_Word Var_73;
              MR_Word Var_74;

              Var_73 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(OldStatus_14);
              succeeded = (Var_73 == (MR_Integer) 0);
              if (succeeded)
              {
                Var_74 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_15);
                succeeded = (Var_74 == (MR_Integer) 0);
              }
            }
          }
          succeeded = !(succeeded);
        }
        break;
    }
    if (succeeded)
    {
      MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 0))));
      MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 1))));
      MR_Word SNA_22;
      MR_Word Pieces_23;
      MR_Word Msg_24;
      MR_Word Spec_25;
      MR_Word Var_34;
      MR_Word Var_56;
      MR_Word Var_57;
      MR_Word Var_61;

      {
        Var_34 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_34, 0) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(0), Var_34, 1) = ((MR_Box) (Arity_21));
      }
      {
        SNA_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SNA_22, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), SNA_22, 1) = ((MR_Box) (Var_34));
      }
      switch (OldIsAbstract_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_46;

            {
              Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (SNA_22));
              MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[57])));
            }
            {
              Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[79])));
              MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_46));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_37;

            {
              Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (SNA_22));
              MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
            }
            {
              Pieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Pieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[80])));
              MR_hl_field(MR_mktag(1), Pieces_23, 1) = ((MR_Box) (Var_37));
            }
          }
          break;
      }
      {
        Var_57 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_57, 0) = ((MR_Box) (Pieces_23));
      }
      {
        Var_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_56, 0) = ((MR_Box) (Var_57));
        MR_hl_field(MR_mktag(1), Var_56, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Msg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Msg_24, 0) = ((MR_Box) (Context_16));
        MR_hl_field(MR_mktag(0), Msg_24, 1) = ((MR_Box) (Var_56));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Msg_24));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Spec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_25, 2) = ((MR_Box) (Var_61));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_31 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
      }
      *STATE_VARIABLE_FoundInvalidType_29 = (MR_Integer) 1;
      hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, STATE_VARIABLE_TypeDefn_0_26, STATE_VARIABLE_TypeDefn_27);
    }
    else
    {
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
      *STATE_VARIABLE_FoundInvalidType_29 = STATE_VARIABLE_FoundInvalidType_0_28;
      *STATE_VARIABLE_TypeDefn_27 = STATE_VARIABLE_TypeDefn_0_26;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__maybe_report_multiple_def_error_10_p_0(
  MR_Word TypeStatus_11,
  MR_Word TypeCtor_12,
  MR_Word Context_13,
  MR_Word OldDefn_14,
  MR_Word STATE_VARIABLE_ModuleInfo_0_21,
  MR_Word * STATE_VARIABLE_ModuleInfo_22,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_23,
  MR_Word * STATE_VARIABLE_FoundInvalidType_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;
    MR_Word Var_27 = (MR_Word) (TypeStatus_11);

    succeeded = (Var_27 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
      *STATE_VARIABLE_FoundInvalidType_24 = STATE_VARIABLE_FoundInvalidType_0_23;
    }
    else
    {
      MR_Word SymName_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 0))));
      MR_Integer Arity_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_12, (MR_Integer) 1))));
      MR_Word OldContext_20;

      hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_14, &OldContext_20);
      hlds__make_hlds_error__report_multiple_def_error_8_p_0(SymName_18, Arity_19, (MR_String) "type", Context_13, OldContext_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_0_25, STATE_VARIABLE_Specs_26);
      *STATE_VARIABLE_FoundInvalidType_24 = (MR_Integer) 1;
    }
    *STATE_VARIABLE_ModuleInfo_22 = STATE_VARIABLE_ModuleInfo_0_21;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word BodyA_6,
  MR_Word BodyB_7,
  MR_Word * Body_8)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) BodyA_6)) == (MR_Integer) 1))
    {
      MR_Word ForeignTypeBodyB_18;
      MR_Word MaybeForeignTypeBodyB_30;
      MR_Word ForeignTypeBodyB_31;
      MR_Word ForeignTypeBody_32;
      MR_Word Target_33;
      MR_Word OpMode_34;
      MR_Word MaybeCA_51;
      MR_Word MaybeJavaA_52;
      MR_Word MaybeCSharpA_53;
      MR_Word MaybeErlangA_54;
      MR_Word MaybeCB_55;
      MR_Word MaybeJavaB_56;
      MR_Word MaybeCSharpB_57;
      MR_Word MaybeErlangB_58;
      MR_Word MaybeC_59;
      MR_Word MaybeJava_60;
      MR_Word MaybeCSharp_61;
      MR_Word MaybeErlang_62;
      MR_Word Var_39;
      MR_Word Var_47;
      MR_Word Var_40;
      MR_Word Var_41;

      succeeded = ((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 0);
      if (succeeded)
      {
        ForeignTypeBodyB_18 = (MR_Word) (MR_body((MR_Word) (BodyB_7), (MR_Integer) 0));
        MaybeForeignTypeBodyB_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 3))));
        if ((MaybeForeignTypeBodyB_30 == (MR_Word) ((MR_Unsigned) 0U)))
          ForeignTypeBodyB_31 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_3[0]);
        else
          ForeignTypeBodyB_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeBodyB_30, (MR_Integer) 0))));
        MaybeCA_51 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_18, (MR_Integer) 0))));
        MaybeJavaA_52 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_18, (MR_Integer) 1))));
        MaybeCSharpA_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_18, (MR_Integer) 2))));
        MaybeErlangA_54 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_18, (MR_Integer) 3))));
        MaybeCB_55 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_31, (MR_Integer) 0))));
        MaybeJavaB_56 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_31, (MR_Integer) 1))));
        MaybeCSharpB_57 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_31, (MR_Integer) 2))));
        MaybeErlangB_58 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_31, (MR_Integer) 3))));
        if ((MaybeCA_51 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeCB_55 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeC_59 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeC_59 = MaybeCB_55;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeCB_55 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeC_59 = MaybeCA_51;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeJavaA_52 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeJavaB_56 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeJava_60 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeJava_60 = MaybeJavaB_56;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeJavaB_56 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeJava_60 = MaybeJavaA_52;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            if ((MaybeCSharpA_53 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              if ((MaybeCSharpB_57 == (MR_Word) ((MR_Unsigned) 0U)))
                MaybeCSharp_61 = (MR_Word) ((MR_Unsigned) 0U);
              else
                MaybeCSharp_61 = MaybeCSharpB_57;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = (MaybeCSharpB_57 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                MaybeCSharp_61 = MaybeCSharpA_53;
                succeeded = MR_TRUE;
              }
            }
            if (succeeded)
            {
              if ((MaybeErlangA_54 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                if ((MaybeErlangB_58 == (MR_Word) ((MR_Unsigned) 0U)))
                  MaybeErlang_62 = (MR_Word) ((MR_Unsigned) 0U);
                else
                  MaybeErlang_62 = MaybeErlangB_58;
                succeeded = MR_TRUE;
              }
              else
              {
                succeeded = (MaybeErlangB_58 == (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  MaybeErlang_62 = MaybeErlangA_54;
                  succeeded = MR_TRUE;
                }
              }
              if (succeeded)
              {
                {
                  ForeignTypeBody_32 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), ForeignTypeBody_32, 0) = ((MR_Box) (MaybeC_59));
                  MR_hl_field(MR_mktag(0), ForeignTypeBody_32, 1) = ((MR_Box) (MaybeJava_60));
                  MR_hl_field(MR_mktag(0), ForeignTypeBody_32, 2) = ((MR_Box) (MaybeCSharp_61));
                  MR_hl_field(MR_mktag(0), ForeignTypeBody_32, 3) = ((MR_Box) (MaybeErlang_62));
                }
                libs__globals__get_target_2_p_0(Globals_5, &Target_33);
                libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_34);
                Var_39 = (MR_Integer) 1;
                backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_33, ForeignTypeBody_32, &Var_47);
                succeeded = (Var_39 == Var_47);
                if (succeeded)
                {
                  succeeded = ((MR_tag((MR_Word) OpMode_34)) == (MR_Integer) 3);
                  if (succeeded)
                  {
                    Var_40 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_34, (MR_Integer) 0))));
                    succeeded = ((MR_tag((MR_Word) Var_40)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_40, (MR_Integer) 0))));
                      succeeded = (Var_41 == (MR_Word) ((MR_Unsigned) 0U));
                    }
                  }
                  succeeded = !(succeeded);
                }
                if (succeeded)
                  *Body_8 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ForeignTypeBody_32)));
                else
                {
                  MR_Word Var_42;
                  MR_Word Var_43;
                  MR_Word Var_44;
                  MR_Word Var_45;

                  {
                    Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (ForeignTypeBody_32));
                  }
                  Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 0))));
                  Var_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 1))));
                  Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), BodyA_6, (MR_Integer) 2))));
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Body_8 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_43));
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_44));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_45));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_42));
                  }
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
    }
    else
    if (((MR_tag((MR_Word) BodyA_6)) == (MR_Integer) 0))
    {
      MR_Word Var_22 = (MR_Word) (MR_body((MR_Word) (BodyA_6), (MR_Integer) 0));

      if (((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 1))
        succeeded = hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(Globals_5, Var_22, BodyB_7, Body_8);
      else
      if (((MR_tag((MR_Word) BodyB_7)) == (MR_Integer) 0))
      {
        MR_Word ForeignTypeBody_19;
        MR_Word ForeignTypeBodyB_21 = (MR_Word) (MR_body((MR_Word) (BodyB_7), (MR_Integer) 0));

        succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_3_p_0(Var_22, ForeignTypeBodyB_21, &ForeignTypeBody_19);
        if (succeeded)
        {
          *Body_8 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ForeignTypeBody_19)));
          succeeded = MR_TRUE;
        }
      }
      else
        succeeded = MR_FALSE;
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_3_p_0(
  MR_Word TypeBodyA_4,
  MR_Word TypeBodyB_5,
  MR_Word * TypeBody_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeCA_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyA_4, (MR_Integer) 0))));
    MR_Word MaybeJavaA_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyA_4, (MR_Integer) 1))));
    MR_Word MaybeCSharpA_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyA_4, (MR_Integer) 2))));
    MR_Word MaybeErlangA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyA_4, (MR_Integer) 3))));
    MR_Word MaybeCB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyB_5, (MR_Integer) 0))));
    MR_Word MaybeJavaB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyB_5, (MR_Integer) 1))));
    MR_Word MaybeCSharpB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyB_5, (MR_Integer) 2))));
    MR_Word MaybeErlangB_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeBodyB_5, (MR_Integer) 3))));
    MR_Word MaybeC_15;
    MR_Word MaybeJava_16;
    MR_Word MaybeCSharp_17;
    MR_Word MaybeErlang_18;

    if ((MaybeCA_7 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((MaybeCB_11 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeC_15 = (MR_Word) ((MR_Unsigned) 0U);
      else
        MaybeC_15 = MaybeCB_11;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (MaybeCB_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeC_15 = MaybeCA_7;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      if ((MaybeJavaA_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if ((MaybeJavaB_12 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeJava_16 = (MR_Word) ((MR_Unsigned) 0U);
        else
          MaybeJava_16 = MaybeJavaB_12;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (MaybeJavaB_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeJava_16 = MaybeJavaA_8;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        if ((MaybeCSharpA_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeCSharpB_13 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeCSharp_17 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeCSharp_17 = MaybeCSharpB_13;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeCSharpB_13 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeCSharp_17 = MaybeCSharpA_9;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeErlangA_10 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeErlangB_14 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeErlang_18 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeErlang_18 = MaybeErlangB_14;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeErlangB_14 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeErlang_18 = MaybeErlangA_10;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              *TypeBody_6 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MaybeC_15));
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MaybeJava_16));
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeCSharp_17));
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MaybeErlang_18));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(
  MR_Word Globals_5,
  MR_Word ForeignTypeBodyA_6,
  MR_Word DuTypeBodyB_7,
  MR_Word * Body_8)
{
  {
    MR_bool succeeded;
    MR_Word MaybeForeignTypeBodyB_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 3))));
    MR_Word ForeignTypeBodyB_13;
    MR_Word ForeignTypeBody_14;
    MR_Word Target_15;
    MR_Word OpMode_16;
    MR_Word MaybeCA_33;
    MR_Word MaybeJavaA_34;
    MR_Word MaybeCSharpA_35;
    MR_Word MaybeErlangA_36;
    MR_Word MaybeCB_37;
    MR_Word MaybeJavaB_38;
    MR_Word MaybeCSharpB_39;
    MR_Word MaybeErlangB_40;
    MR_Word MaybeC_41;
    MR_Word MaybeJava_42;
    MR_Word MaybeCSharp_43;
    MR_Word MaybeErlang_44;
    MR_Word Var_21;
    MR_Word Var_29;
    MR_Word Var_22;
    MR_Word Var_23;

    if ((MaybeForeignTypeBodyB_12 == (MR_Word) ((MR_Unsigned) 0U)))
      ForeignTypeBodyB_13 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_3[0]);
    else
      ForeignTypeBodyB_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeForeignTypeBodyB_12, (MR_Integer) 0))));
    MaybeCA_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 0))));
    MaybeJavaA_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 1))));
    MaybeCSharpA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 2))));
    MaybeErlangA_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyA_6, (MR_Integer) 3))));
    MaybeCB_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_13, (MR_Integer) 0))));
    MaybeJavaB_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_13, (MR_Integer) 1))));
    MaybeCSharpB_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_13, (MR_Integer) 2))));
    MaybeErlangB_40 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ForeignTypeBodyB_13, (MR_Integer) 3))));
    if ((MaybeCA_33 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      if ((MaybeCB_37 == (MR_Word) ((MR_Unsigned) 0U)))
        MaybeC_41 = (MR_Word) ((MR_Unsigned) 0U);
      else
        MaybeC_41 = MaybeCB_37;
      succeeded = MR_TRUE;
    }
    else
    {
      succeeded = (MaybeCB_37 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        MaybeC_41 = MaybeCA_33;
        succeeded = MR_TRUE;
      }
    }
    if (succeeded)
    {
      if ((MaybeJavaA_34 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        if ((MaybeJavaB_38 == (MR_Word) ((MR_Unsigned) 0U)))
          MaybeJava_42 = (MR_Word) ((MR_Unsigned) 0U);
        else
          MaybeJava_42 = MaybeJavaB_38;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (MaybeJavaB_38 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          MaybeJava_42 = MaybeJavaA_34;
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        if ((MaybeCSharpA_35 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          if ((MaybeCSharpB_39 == (MR_Word) ((MR_Unsigned) 0U)))
            MaybeCSharp_43 = (MR_Word) ((MR_Unsigned) 0U);
          else
            MaybeCSharp_43 = MaybeCSharpB_39;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (MaybeCSharpB_39 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MaybeCSharp_43 = MaybeCSharpA_35;
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
        {
          if ((MaybeErlangA_36 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            if ((MaybeErlangB_40 == (MR_Word) ((MR_Unsigned) 0U)))
              MaybeErlang_44 = (MR_Word) ((MR_Unsigned) 0U);
            else
              MaybeErlang_44 = MaybeErlangB_40;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (MaybeErlangB_40 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              MaybeErlang_44 = MaybeErlangA_36;
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
          {
            {
              ForeignTypeBody_14 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), ForeignTypeBody_14, 0) = ((MR_Box) (MaybeC_41));
              MR_hl_field(MR_mktag(0), ForeignTypeBody_14, 1) = ((MR_Box) (MaybeJava_42));
              MR_hl_field(MR_mktag(0), ForeignTypeBody_14, 2) = ((MR_Box) (MaybeCSharp_43));
              MR_hl_field(MR_mktag(0), ForeignTypeBody_14, 3) = ((MR_Box) (MaybeErlang_44));
            }
            libs__globals__get_target_2_p_0(Globals_5, &Target_15);
            libs__globals__get_op_mode_2_p_0(Globals_5, &OpMode_16);
            Var_21 = (MR_Integer) 1;
            backend_libs__foreign__have_foreign_type_for_backend_3_p_0(Target_15, ForeignTypeBody_14, &Var_29);
            succeeded = (Var_21 == Var_29);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) OpMode_16)) == (MR_Integer) 3);
              if (succeeded)
              {
                Var_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OpMode_16, (MR_Integer) 0))));
                succeeded = ((MR_tag((MR_Word) Var_22)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_22, (MR_Integer) 0))));
                  succeeded = (Var_23 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              succeeded = !(succeeded);
            }
            if (succeeded)
              *Body_8 = (MR_Word) (MR_mkword(MR_mktag(0), (MR_Word) (ForeignTypeBody_14)));
            else
            {
              MR_Word Var_24;
              MR_Word Var_25;
              MR_Word Var_26;
              MR_Word Var_27;

              {
                Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (ForeignTypeBody_14));
              }
              Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 0))));
              Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 1))));
              Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DuTypeBodyB_7, (MR_Integer) 2))));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Body_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_26));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_27));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_24));
              }
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_mercury_13_p_0(
  MR_Word TypeStatus1_14,
  MR_Word TypeCtor_15,
  MR_Word TypeParams_16,
  MR_Word ParseTreeTypeDefn_17,
  MR_Word Body_18,
  MR_Word TypeDefn0_19,
  MR_Word Context_20,
  MR_Word STATE_VARIABLE_ModuleInfo_0_34,
  MR_Word * STATE_VARIABLE_ModuleInfo_35,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_36,
  MR_Word * STATE_VARIABLE_FoundInvalidType_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39)
{
  {
    MR_bool succeeded;
    MR_Word TypeTable0_24;
    MR_Word TypeStatus_26;
    MR_Word STATE_VARIABLE_FoundInvalidType_43_43;
    MR_Word STATE_VARIABLE_Specs_44_44;
    MR_Word OldDefn_25;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_34, &TypeTable0_24);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_24, TypeCtor_15, &OldDefn_25);
    if (succeeded)
    {
      MR_Word TypeDefn_27;
      MR_Word STATE_VARIABLE_FoundInvalidType_40_40;
      MR_Word STATE_VARIABLE_Specs_41_41;
      MR_Word OldTypeStatus_58;
      MR_Word OldDefnBody_28;

      hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_25, &OldTypeStatus_58);
      hlds__status__type_combine_status_3_p_0(TypeStatus1_14, OldTypeStatus_58, &TypeStatus_26);
      hlds__hlds_data__set_type_defn_status_3_p_0(TypeStatus_26, TypeDefn0_19, &TypeDefn_27);
      hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(TypeCtor_15, OldDefn_25, Body_18, Context_20, STATE_VARIABLE_FoundInvalidType_0_36, &STATE_VARIABLE_FoundInvalidType_40_40, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_41_41);
      hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_25, &OldDefnBody_28);
      succeeded = ((((MR_tag((MR_Word) OldDefnBody_28)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldDefnBody_28, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Word Var_76 = (MR_Word) (TypeStatus_26);

        succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          STATE_VARIABLE_Specs_44_44 = STATE_VARIABLE_Specs_41_41;
          STATE_VARIABLE_FoundInvalidType_43_43 = STATE_VARIABLE_FoundInvalidType_40_40;
        }
        else
        {
          MR_Word SymName_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 0))));
          MR_Integer Arity_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_15, (MR_Integer) 1))));
          MR_Word OldContext_75;

          hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_25, &OldContext_75);
          hlds__make_hlds_error__report_multiple_def_error_8_p_0(SymName_73, Arity_74, (MR_String) "type", Context_20, OldContext_75, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Specs_41_41, &STATE_VARIABLE_Specs_44_44);
          STATE_VARIABLE_FoundInvalidType_43_43 = (MR_Integer) 1;
        }
        *STATE_VARIABLE_ModuleInfo_35 = STATE_VARIABLE_ModuleInfo_0_34;
      }
      else
      {
        MR_Word TypeTable_30;

        hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn_27, TypeTable0_24, &TypeTable_30);
        hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_30, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
        STATE_VARIABLE_Specs_44_44 = STATE_VARIABLE_Specs_41_41;
        STATE_VARIABLE_FoundInvalidType_43_43 = STATE_VARIABLE_FoundInvalidType_40_40;
      }
    }
    else
    {
      MR_Word TypeTable_51;

      TypeStatus_26 = TypeStatus1_14;
      hlds__hlds_data__add_type_ctor_defn_4_p_0(TypeCtor_15, TypeDefn0_19, TypeTable0_24, &TypeTable_51);
      hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_51, STATE_VARIABLE_ModuleInfo_0_34, STATE_VARIABLE_ModuleInfo_35);
      STATE_VARIABLE_Specs_44_44 = STATE_VARIABLE_Specs_0_38;
      STATE_VARIABLE_FoundInvalidType_43_43 = STATE_VARIABLE_FoundInvalidType_0_36;
    }
    switch (MR_tag((MR_Word) ParseTreeTypeDefn_17)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word DetailsDu_31 = (MR_Word) (MR_body((MR_Word) (ParseTreeTypeDefn_17), (MR_Integer) 0));

          hlds__make_hlds__add_type__check_for_dummy_type_with_unify_compare_8_p_0(TypeStatus_26, TypeCtor_15, DetailsDu_31, Context_20, STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_FoundInvalidType_37, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_39);
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_FoundInvalidType_37 = STATE_VARIABLE_FoundInvalidType_43_43;
          *STATE_VARIABLE_Specs_39 = STATE_VARIABLE_Specs_44_44;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word DetailsEqv_32 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ParseTreeTypeDefn_17, (MR_Integer) 1))));

          hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0(TypeStatus_26, TypeCtor_15, TypeParams_16, DetailsEqv_32, Context_20, STATE_VARIABLE_FoundInvalidType_43_43, STATE_VARIABLE_FoundInvalidType_37, STATE_VARIABLE_Specs_44_44, STATE_VARIABLE_Specs_39);
        }
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_1(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_3(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_62 = ((MR_Word) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__conv0_Var_62));
    hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_2(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_4(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_5(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeInfo_65_65 = (MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]);
    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeInfo_65_65, ((MR_Box) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_62)), ((MR_Box) ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_64)));
    if ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_4(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_6(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_1) == 0)
      {
        parse_tree__prog_type__type_contains_var_2_p_0((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__EqvType_17, &(env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__Var_64, hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_5, env_ptr);
        (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_6(env_ptr);
    (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = !((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded);
    if ((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
      hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_7(
  void * env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s * env_ptr = (struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__commit_0) == 0)
      {
        {
          mercury__list__member_2_p_1((MR_Word) (&hlds__make_hlds__add_type_scalar_common_1[0]), &(env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__conv0_Var_62, (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeParams_12, hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_3, env_ptr);
        }
        (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0(
  MR_Word TypeStatus_10,
  MR_Word TypeCtor_11,
  MR_Word TypeParams_12,
  MR_Word DetailsEqv_13,
  MR_Word Context_14,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_24,
  MR_Word * STATE_VARIABLE_FoundInvalidType_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  {
    struct hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0_s env;

    (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__TypeParams_12 = TypeParams_12;
    {
      MR_Word Var_28;

      (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__EqvType_17 = (MR_Word) (DetailsEqv_13);
      Var_28 = (MR_Word) (TypeStatus_10);
      (env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded = (Var_28 == (MR_Word) ((MR_Unsigned) 20U));
      if ((env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
        hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_7(&env);
      if ((env).hlds__make_hlds__add_type__check_for_polymorphic_eqv_type_with_monomorphic_body_9_p_0_env_0__succeeded)
      {
        MR_Word SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 0))));
        MR_Integer Arity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_11, (MR_Integer) 1))));
        MR_Word PolyEqvPieces_21;
        MR_Word PolyEqvMsg_22;
        MR_Word PolyEqvSpec_23;
        MR_Word Var_31;
        MR_Word Var_32;
        MR_Word Var_33;
        MR_Word Var_49;
        MR_Word Var_50;
        MR_Word Var_58;

        {
          Var_33 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_33, 0) = ((MR_Box) (SymName_19));
          MR_hl_field(MR_mktag(0), Var_33, 1) = ((MR_Box) (Arity_20));
        }
        {
          Var_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), Var_32, 0) = ((MR_Box) ((MR_Unsigned) 10U));
          MR_hl_field(MR_mktag(3), Var_32, 1) = ((MR_Box) (Var_33));
        }
        {
          Var_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_31, 0) = ((MR_Box) (Var_32));
          MR_hl_field(MR_mktag(1), Var_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[39])));
        }
        {
          PolyEqvPieces_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PolyEqvPieces_21, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[74])));
          MR_hl_field(MR_mktag(1), PolyEqvPieces_21, 1) = ((MR_Box) (Var_31));
        }
        {
          Var_50 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_50, 0) = ((MR_Box) (PolyEqvPieces_21));
        }
        {
          Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (Var_50));
          MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[78])));
        }
        {
          PolyEqvMsg_22 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PolyEqvMsg_22, 0) = ((MR_Box) (Context_14));
          MR_hl_field(MR_mktag(0), PolyEqvMsg_22, 1) = ((MR_Box) (Var_49));
        }
        {
          Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (PolyEqvMsg_22));
          MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          PolyEqvSpec_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PolyEqvSpec_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(0), PolyEqvSpec_23, 1) = ((MR_Box) ((MR_Unsigned) 16U));
          MR_hl_field(MR_mktag(0), PolyEqvSpec_23, 2) = ((MR_Box) (Var_58));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_Specs_27 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PolyEqvSpec_23));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_26));
        }
        *STATE_VARIABLE_FoundInvalidType_25 = (MR_Integer) 1;
      }
      else
      {
        *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
        *STATE_VARIABLE_FoundInvalidType_25 = STATE_VARIABLE_FoundInvalidType_0_24;
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_dummy_type_with_unify_compare_8_p_0(
  MR_Word TypeStatus_9,
  MR_Word TypeCtor_10,
  MR_Word DetailsDu_11,
  MR_Word Context_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_26,
  MR_Word * STATE_VARIABLE_FoundInvalidType_27,
  MR_Word STATE_VARIABLE_Specs_0_28,
  MR_Word * STATE_VARIABLE_Specs_29)
{
  {
    MR_bool succeeded;
    MR_Word Ctors_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_11, (MR_Integer) 0))));
    MR_Word MaybeCanonical_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DetailsDu_11, (MR_Integer) 1))));
    MR_Word Ctor_18;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    succeeded = (MaybeCanonical_16 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = (Ctors_15 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Ctor_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_15, (MR_Integer) 0))));
        Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Ctors_15, (MR_Integer) 1))));
        succeeded = (Var_30 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_18, (MR_Integer) 3))));
          succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_32 = hlds__status__type_status_defined_in_this_module_1_f_0(TypeStatus_9);
            succeeded = (Var_32 == (MR_Integer) 1);
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word SymName_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 0))));
      MR_Integer Arity_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_10, (MR_Integer) 1))));
      MR_Word DummyMainPieces_22;
      MR_Word DummyMsg_24;
      MR_Word DummySpec_25;
      MR_Word Var_35;
      MR_Word Var_36;
      MR_Word Var_37;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_69;

      {
        Var_37 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_37, 0) = ((MR_Box) (SymName_20));
        MR_hl_field(MR_mktag(0), Var_37, 1) = ((MR_Box) (Arity_21));
      }
      {
        Var_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_36, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), Var_36, 1) = ((MR_Box) (Var_37));
      }
      {
        Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (Var_36));
        MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[25])));
      }
      {
        DummyMainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), DummyMainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[74])));
        MR_hl_field(MR_mktag(1), DummyMainPieces_22, 1) = ((MR_Box) (Var_35));
      }
      {
        Var_62 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_62, 0) = ((MR_Box) (DummyMainPieces_22));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[76])));
      }
      {
        DummyMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DummyMsg_24, 0) = ((MR_Box) (Context_12));
        MR_hl_field(MR_mktag(0), DummyMsg_24, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (DummyMsg_24));
        MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DummySpec_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DummySpec_25, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), DummySpec_25, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), DummySpec_25, 2) = ((MR_Box) (Var_69));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_29 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DummySpec_25));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_28));
      }
      *STATE_VARIABLE_FoundInvalidType_27 = (MR_Integer) 1;
    }
    else
    {
      *STATE_VARIABLE_Specs_29 = STATE_VARIABLE_Specs_0_28;
      *STATE_VARIABLE_FoundInvalidType_27 = STATE_VARIABLE_FoundInvalidType_0_26;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_abstract_11_p_0(
  MR_Word TypeStatus1_12,
  MR_Word TypeCtor_13,
  MR_Word Body_14,
  MR_Word TypeDefn0_15,
  MR_Word Context_16,
  MR_Word STATE_VARIABLE_ModuleInfo_0_25,
  MR_Word * STATE_VARIABLE_ModuleInfo_26,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_27,
  MR_Word * STATE_VARIABLE_FoundInvalidType_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30)
{
  {
    MR_bool succeeded;
    MR_Word TypeTable0_20;
    MR_Word TypeTable_24;
    MR_Word OldDefn_21;

    hlds__hlds_module__module_info_get_type_table_2_p_0(STATE_VARIABLE_ModuleInfo_0_25, &TypeTable0_20);
    succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(TypeTable0_20, TypeCtor_13, &OldDefn_21);
    if (succeeded)
    {
      MR_Word _TypeStatus_22;
      MR_Word TypeDefn_23;
      MR_Word STATE_VARIABLE_FoundInvalidType_31_31;
      MR_Word STATE_VARIABLE_Specs_32_32;
      MR_Word OldTypeStatus_42;

      hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(TypeCtor_13, OldDefn_21, TypeStatus1_12, Context_16, STATE_VARIABLE_FoundInvalidType_0_27, &STATE_VARIABLE_FoundInvalidType_31_31, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_32_32);
      hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_21, &OldTypeStatus_42);
      hlds__status__type_combine_status_3_p_0(TypeStatus1_12, OldTypeStatus_42, &_TypeStatus_22);
      hlds__hlds_data__set_type_defn_status_3_p_0(_TypeStatus_22, TypeDefn0_15, &TypeDefn_23);
      hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(TypeCtor_13, OldDefn_21, Body_14, Context_16, STATE_VARIABLE_FoundInvalidType_31_31, STATE_VARIABLE_FoundInvalidType_28, STATE_VARIABLE_Specs_32_32, STATE_VARIABLE_Specs_30);
      hlds__hlds_data__replace_type_ctor_defn_4_p_0(TypeCtor_13, TypeDefn_23, TypeTable0_20, &TypeTable_24);
    }
    else
    {
      hlds__hlds_data__add_type_ctor_defn_4_p_0(TypeCtor_13, TypeDefn0_15, TypeTable0_20, &TypeTable_24);
      *STATE_VARIABLE_Specs_30 = STATE_VARIABLE_Specs_0_29;
      *STATE_VARIABLE_FoundInvalidType_28 = STATE_VARIABLE_FoundInvalidType_0_27;
    }
    hlds__hlds_module__module_info_set_type_table_3_p_0(TypeTable_24, STATE_VARIABLE_ModuleInfo_0_25, STATE_VARIABLE_ModuleInfo_26);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_inconsistent_solver_nosolver_type_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewBody_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_38,
  MR_Word * STATE_VARIABLE_FoundInvalidType_39,
  MR_Word STATE_VARIABLE_Specs_0_40,
  MR_Word * STATE_VARIABLE_Specs_41)
{
  {
    MR_bool succeeded;
    MR_Word OldBody_15;
    MR_Word OldIsSolverType_16;
    MR_Word NewIsSolverType_17;

    hlds__hlds_data__get_type_defn_body_2_p_0(OldDefn_10, &OldBody_15);
    hlds__make_hlds__add_type__get_body_is_solver_type_2_p_0(OldBody_15, &OldIsSolverType_16);
    hlds__make_hlds__add_type__get_body_is_solver_type_2_p_0(NewBody_11, &NewIsSolverType_17);
    succeeded = (OldIsSolverType_16 == NewIsSolverType_17);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_41 = STATE_VARIABLE_Specs_0_40;
      *STATE_VARIABLE_FoundInvalidType_39 = STATE_VARIABLE_FoundInvalidType_0_38;
    }
    else
    {
      MR_Word OldContext_18;
      MR_String ThisIsOrIsnt_19;
      MR_String OldIsOrIsnt_20;
      MR_String ThisDeclOrDefn_22;
      MR_String OldDeclOrDefn_24;
      MR_Word SymName_30;
      MR_Integer Arity_31;
      MR_Word SNA_32;
      MR_Word MainPieces_33;
      MR_Word OldPieces_34;
      MR_Word MainMsg_35;
      MR_Word OldMsg_36;
      MR_Word Spec_37;
      MR_Word Var_44;
      MR_Word Var_47;
      MR_Word Var_48;
      MR_Word Var_49;
      MR_Word Var_52;
      MR_Word Var_53;
      MR_Word Var_54;
      MR_Word Var_55;
      MR_Word Var_58;
      MR_Word Var_61;
      MR_Word Var_62;
      MR_Word Var_63;
      MR_Word Var_64;
      MR_Word Var_73;
      MR_Word Var_81;
      MR_Word Var_82;
      MR_Word Var_84;
      MR_Word Var_85;
      MR_Word Var_89;
      MR_Word Var_90;

      hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_10, &OldContext_18);
      switch (NewIsSolverType_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            ThisIsOrIsnt_19 = (MR_String) "is not a solver type";
            OldIsOrIsnt_20 = (MR_String) "is";
          }
          break;
        case (MR_Integer) 1:
          {
            ThisIsOrIsnt_19 = (MR_String) "is a solver type";
            OldIsOrIsnt_20 = (MR_String) "is not";
          }
          break;
      }
      succeeded = ((((MR_tag((MR_Word) NewBody_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), NewBody_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        ThisDeclOrDefn_22 = (MR_String) "this declaration";
        succeeded = ((((MR_tag((MR_Word) OldBody_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldBody_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          OldDeclOrDefn_24 = (MR_String) "previous declaration";
        }
        else
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140hlds.make_hlds.add_type.check_for_inconsistent_solver_nosolver_type\'/8", (MR_String) "definition before declaration");
            return;
          }
        }
      }
      else
      {
        ThisDeclOrDefn_22 = (MR_String) "this definition";
        succeeded = ((((MR_tag((MR_Word) OldBody_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), OldBody_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          OldDeclOrDefn_24 = (MR_String) "declaration";
        }
        else
        {
          MR_String OldFileName_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), OldContext_18, (MR_Integer) 0))));
          MR_Integer OldLineNumber_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OldContext_18, (MR_Integer) 1))));
          MR_String NewFileName_28 = ((MR_String) ((MR_hl_field(MR_mktag(0), NewContext_12, (MR_Integer) 0))));
          MR_Integer NewLineNumber_29 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), NewContext_12, (MR_Integer) 1))));

          succeeded = (strcmp(OldFileName_26, NewFileName_28) == 0);
          if (succeeded)
            succeeded = (OldLineNumber_27 < NewLineNumber_29);
          if (succeeded)
            OldDeclOrDefn_24 = (MR_String) "previous definition";
          else
            OldDeclOrDefn_24 = (MR_String) "other definition";
        }
      }
      SymName_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 0))));
      Arity_31 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 1))));
      {
        Var_44 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_44, 0) = ((MR_Box) (SymName_30));
        MR_hl_field(MR_mktag(0), Var_44, 1) = ((MR_Box) (Arity_31));
      }
      {
        SNA_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SNA_32, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), SNA_32, 1) = ((MR_Box) (Var_44));
      }
      {
        Var_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_48, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_48, 1) = ((MR_Box) (ThisDeclOrDefn_22));
      }
      {
        Var_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_54, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_54, 1) = ((MR_Box) (ThisIsOrIsnt_19));
      }
      {
        Var_62 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_62, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_62, 1) = ((MR_Box) (OldDeclOrDefn_24));
      }
      {
        Var_64 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_64, 0) = ((MR_Box) ((MR_Unsigned) 5U));
        MR_hl_field(MR_mktag(3), Var_64, 1) = ((MR_Box) (OldIsOrIsnt_20));
      }
      {
        Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (Var_64));
        MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
      }
      {
        Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
      }
      {
        Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_58, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[72])));
        MR_hl_field(MR_mktag(1), Var_58, 1) = ((MR_Box) (Var_61));
      }
      {
        Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
        MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_58));
      }
      {
        Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Var_54));
        MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
      }
      {
        Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (SNA_32));
        MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) (Var_53));
      }
      {
        Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[70])));
        MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (Var_52));
      }
      {
        Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_49));
      }
      {
        MainPieces_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MainPieces_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[69])));
        MR_hl_field(MR_mktag(1), MainPieces_33, 1) = ((MR_Box) (Var_47));
      }
      {
        Var_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_73, 0) = ((MR_Box) (Var_62));
        MR_hl_field(MR_mktag(1), Var_73, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[53])));
      }
      {
        OldPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), OldPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[73])));
        MR_hl_field(MR_mktag(1), OldPieces_34, 1) = ((MR_Box) (Var_73));
      }
      {
        Var_82 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_82, 0) = ((MR_Box) (MainPieces_33));
      }
      {
        Var_81 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_81, 0) = ((MR_Box) (Var_82));
        MR_hl_field(MR_mktag(1), Var_81, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MainMsg_35 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MainMsg_35, 0) = ((MR_Box) (NewContext_12));
        MR_hl_field(MR_mktag(0), MainMsg_35, 1) = ((MR_Box) (Var_81));
      }
      {
        Var_85 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_85, 0) = ((MR_Box) (OldPieces_34));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (Var_85));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        OldMsg_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldMsg_36, 0) = ((MR_Box) (OldContext_18));
        MR_hl_field(MR_mktag(0), OldMsg_36, 1) = ((MR_Box) (Var_84));
      }
      {
        Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_90, 0) = ((MR_Box) (OldMsg_36));
        MR_hl_field(MR_mktag(1), Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_89, 0) = ((MR_Box) (MainMsg_35));
        MR_hl_field(MR_mktag(1), Var_89, 1) = ((MR_Box) (Var_90));
      }
      {
        Spec_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Spec_37, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(0), Spec_37, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), Spec_37, 2) = ((MR_Box) (Var_89));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_41 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Spec_37));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_40));
      }
      *STATE_VARIABLE_FoundInvalidType_39 = (MR_Integer) 1;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__get_body_is_solver_type_2_p_0(
  MR_Word Body_3,
  MR_Word * IsSolverType_4)
{
  switch (MR_tag((MR_Word) Body_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *IsSolverType_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *IsSolverType_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Body_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *IsSolverType_4 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          {
            MR_Word Details_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Body_3, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) Details_6)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Details_6)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    *IsSolverType_4 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 3:
                    *IsSolverType_4 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *IsSolverType_4 = (MR_Integer) 0;
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_for_duplicate_type_declaration_8_p_0(
  MR_Word TypeCtor_9,
  MR_Word OldDefn_10,
  MR_Word NewStatus_11,
  MR_Word NewContext_12,
  MR_Word STATE_VARIABLE_FoundInvalidType_0_28,
  MR_Word * STATE_VARIABLE_FoundInvalidType_29,
  MR_Word STATE_VARIABLE_Specs_0_30,
  MR_Word * STATE_VARIABLE_Specs_31)
{
  {
    MR_bool succeeded;
    MR_Word OldContext_15;
    MR_String Var_32;
    MR_String Var_34;
    MR_String Var_35;

    hlds__hlds_data__get_type_defn_context_2_p_0(OldDefn_10, &OldContext_15);
    Var_32 = mercury__term__context_file_1_f_0(OldContext_15);
    succeeded = mercury__string__suffix_2_p_0(Var_32, (MR_String) ".m");
    if (succeeded)
    {
      Var_34 = mercury__term__context_file_1_f_0(NewContext_12);
      Var_35 = (MR_String) ".m";
      succeeded = mercury__string__suffix_2_p_0(Var_34, Var_35);
    }
    if (succeeded)
    {
      MR_Word OldStatus_16;
      MR_Word OldIsExported_17;
      MR_Word NewIsExported_18;
      MR_Word SymName_19;
      MR_Integer Arity_20;
      MR_Word SNA_21;
      MR_Word Severity_22;
      MR_Word DupPieces_23;
      MR_Word DupMsg_24;
      MR_Word OldMsg_26;
      MR_Word DupSpec_27;
      MR_Word Var_36;
      MR_Word Var_71;
      MR_Word Var_72;
      MR_Word Var_83;
      MR_Word Var_84;

      hlds__hlds_data__get_type_defn_status_2_p_0(OldDefn_10, &OldStatus_16);
      OldIsExported_17 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(OldStatus_16);
      NewIsExported_18 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(NewStatus_11);
      SymName_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 0))));
      Arity_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), TypeCtor_9, (MR_Integer) 1))));
      {
        Var_36 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_36, 0) = ((MR_Box) (SymName_19));
        MR_hl_field(MR_mktag(0), Var_36, 1) = ((MR_Box) (Arity_20));
      }
      {
        SNA_21 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), SNA_21, 0) = ((MR_Box) ((MR_Unsigned) 10U));
        MR_hl_field(MR_mktag(3), SNA_21, 1) = ((MR_Box) (Var_36));
      }
      succeeded = (OldIsExported_17 == NewIsExported_18);
      if (succeeded)
      {
        MR_Word Var_39;

        Severity_22 = (MR_Word) ((MR_Unsigned) 4U);
        {
          Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (SNA_21));
          MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
        }
        {
          DupPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DupPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[66])));
          MR_hl_field(MR_mktag(1), DupPieces_23, 1) = ((MR_Box) (Var_39));
        }
        *STATE_VARIABLE_FoundInvalidType_29 = STATE_VARIABLE_FoundInvalidType_0_28;
      }
      else
      {
        Severity_22 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_FoundInvalidType_29 = (MR_Integer) 1;
        switch (NewIsExported_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_49, 0) = ((MR_Box) (SNA_21));
                MR_hl_field(MR_mktag(1), Var_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[11])));
              }
              {
                DupPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DupPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67])));
                MR_hl_field(MR_mktag(1), DupPieces_23, 1) = ((MR_Box) (Var_49));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Var_61;

              {
                Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (SNA_21));
                MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])));
              }
              {
                DupPieces_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), DupPieces_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67])));
                MR_hl_field(MR_mktag(1), DupPieces_23, 1) = ((MR_Box) (Var_61));
              }
            }
            break;
        }
      }
      {
        Var_72 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_72, 0) = ((MR_Box) (DupPieces_23));
      }
      {
        Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (Var_72));
        MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        DupMsg_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DupMsg_24, 0) = ((MR_Box) (NewContext_12));
        MR_hl_field(MR_mktag(0), DupMsg_24, 1) = ((MR_Box) (Var_71));
      }
      {
        OldMsg_26 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), OldMsg_26, 0) = ((MR_Box) (OldContext_15));
        MR_hl_field(MR_mktag(0), OldMsg_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[68])));
      }
      {
        Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_84, 0) = ((MR_Box) (OldMsg_26));
        MR_hl_field(MR_mktag(1), Var_84, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        Var_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_83, 0) = ((MR_Box) (DupMsg_24));
        MR_hl_field(MR_mktag(1), Var_83, 1) = ((MR_Box) (Var_84));
      }
      {
        DupSpec_27 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), DupSpec_27, 0) = ((MR_Box) (Severity_22));
        MR_hl_field(MR_mktag(0), DupSpec_27, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(MR_mktag(0), DupSpec_27, 2) = ((MR_Box) (Var_83));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_Specs_31 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (DupSpec_27));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_Specs_0_30));
      }
    }
    else
    {
      *STATE_VARIABLE_Specs_31 = STATE_VARIABLE_Specs_0_30;
      *STATE_VARIABLE_FoundInvalidType_29 = STATE_VARIABLE_FoundInvalidType_0_28;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = hlds__make_hlds__add_type____Unify____old_defn_maybe_abstract_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    hlds__make_hlds__add_type____Compare____old_defn_maybe_abstract_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__hlds__make_hlds__add_type__init(void)
{
}

void mercury__hlds__make_hlds__add_type__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__add_type__hlds__make_hlds__add_type__type_ctor_info_old_defn_maybe_abstract_0);
}

void mercury__hlds__make_hlds__add_type__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__make_hlds__add_type__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.make_hlds.add_type.
