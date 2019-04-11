/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2017-06-02
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


/* :- module hlds.make_hlds.add_type. */
/* :- implementation. */

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
#include "check_hlds.unify_proc.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.make_tags.mih"
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
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_error.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99;
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_119;
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_99;
};

struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s {
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14;
  MR_bool hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded;
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_315_315;
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48;
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51;
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_0;
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__EqvType_89;
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_90;
  MR_Box hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__conv0_Var_90;
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_1;
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_321_321;
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_319;
};


static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__721__1_1_f_0(
  MR_Word hlds__make_hlds__add_type__LambdaHeadVar__1_95);

static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
  MR_String hlds__make_hlds__add_type__FieldName_6,
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
  MR_Box hlds__make_hlds__add_type__closure_arg,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
  MR_Word hlds__make_hlds__add_type__FieldName_9,
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
  MR_Word hlds__make_hlds__add_type__ConsId_5,
  MR_Word hlds__make_hlds__add_type__TypeStatus_6,
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11);

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
  MR_String hlds__make_hlds__add_type__ConsName_8,
  MR_Integer hlds__make_hlds__add_type__Arity_9,
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15);

static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
  MR_Box hlds__make_hlds__add_type__closure_arg,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
  MR_Box hlds__make_hlds__add_type__closure_arg,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
  MR_Word hlds__make_hlds__add_type__Ctor_16,
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
  MR_Word hlds__make_hlds__add_type__KindMap_21,
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
  MR_Word hlds__make_hlds__add_type__TypeStatus_24,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
  MR_Word hlds__make_hlds__add_type__KindMap_6,
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
  MR_Word hlds__make_hlds__add_type__TypeStatus_9,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15);

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
  MR_Word hlds__make_hlds__add_type__Globals_3,
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_3_p_0(
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
  MR_Word * hlds__make_hlds__add_type__TypeBody_6);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(
  MR_Word hlds__make_hlds__add_type__Globals_5,
  MR_Word hlds__make_hlds__add_type__ForeignTypeBodyA_6,
  MR_Word hlds__make_hlds__add_type__DuTypeBodyB_7,
  MR_Word * hlds__make_hlds__add_type__Body_8);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(
  MR_Word hlds__make_hlds__add_type__Globals_5,
  MR_Word hlds__make_hlds__add_type__BodyA_6,
  MR_Word hlds__make_hlds__add_type__BodyB_7,
  MR_Word * hlds__make_hlds__add_type__Body_8);

static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
  MR_Word hlds__make_hlds__add_type__Context_13,
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4);

static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
  MR_Word hlds__make_hlds__add_type__OldBody_3,
  MR_Word hlds__make_hlds__add_type__Body_4);

static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
  MR_Word hlds__make_hlds__add_type__OldBody_5,
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
  MR_Word hlds__make_hlds__add_type__Body_6,
  MR_Word * hlds__make_hlds__add_type__Body_4);

static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_1(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_3(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_4(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_5(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_6(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_2(
  void * hlds__make_hlds__add_type__env_ptr_arg);

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_7(
  void * hlds__make_hlds__add_type__env_ptr_arg);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[82][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][8];


/* sealed */ struct hlds__make_hlds__add_type__vector_common_type_5_0_s {
  const MR_String hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct hlds__make_hlds__add_type__vector_common_type_5_0_s hlds__make_hlds__add_type_vector_common_5[4];



static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[82][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or comparison."))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not allowed to have user-defined equality"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have user-defined equality or comparison."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "consists of a single zero-arity constructor"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Discriminated unions whose body"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotations."))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "consistent"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: all definitions of a type must have"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[22])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[23])))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "defined as foreign_type without being declared."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "as its type declaration."))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must have the same visibility"))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[29])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must have the same visibility."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: all definitions of a type"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[35])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[36])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "exported as abstract type."))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with monomorphic definition,"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "polymorphic equivalence type,"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(There\'s no performance penalty for this -- the compiler will"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A better work-around is to use a \"wrapper\" type, with just one"))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[51])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type by putting the type definition in the interface section."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[53])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A quick work-around is to just export the type as a concrete,"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[62]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[61])))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[4])))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[14])))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In definition of type"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type "))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 16)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for"))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 76 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[63])))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[76]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 78 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row 79 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 80 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: field"))
  },
  /* row 81 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Here is the previous definition of field"))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_1[3]))
  },
  /* row 1 */
  {
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[0])),
    ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[45])))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0))
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



static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0
  }
};

static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__721__1_1_f_0(
  MR_Word hlds__make_hlds__add_type__LambdaHeadVar__1_95)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__LambdaHeadVar__2_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__LambdaHeadVar__1_95, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_type__Var_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__LambdaHeadVar__1_95, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_type__Var_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__LambdaHeadVar__1_95, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_type__Var_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__LambdaHeadVar__1_95, (MR_Integer) 3)));

    return hlds__make_hlds__add_type__LambdaHeadVar__2_96;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
  MR_String hlds__make_hlds__add_type__FieldName_6,
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__Var_12;

    {
      hlds__make_hlds__add_type__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_12, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleName_8));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldName_6));
    }
    {
      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__Var_12)), ((MR_Box) (hlds__make_hlds__add_type__FieldNameDefn_7)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
  MR_Box hlds__make_hlds__add_type__closure_arg,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11;

    {
      hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11);
    }
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
  MR_Word hlds__make_hlds__add_type__FieldName_9,
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__FieldModule_17;
    MR_Word hlds__make_hlds__add_type__ConflictingDefns_19;
    MR_Box hlds__make_hlds__add_type__conv0_ConflictingDefns_19;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__FieldName_9)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String hlds__make_hlds__add_type__Var_16;

        hlds__make_hlds__add_type__FieldModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 0)));
        hlds__make_hlds__add_type__Var_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 1)));
      }
    else
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
          return;
        }
      }
    {
      hlds__make_hlds__add_type__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[3], hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (hlds__make_hlds__add_type__FieldName_9)), &hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
    }
    if (hlds__make_hlds__add_type__succeeded)
      {
        hlds__make_hlds__add_type__ConflictingDefns_19 = ((MR_Word) hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
      }
    if (hlds__make_hlds__add_type__succeeded)
      {
        MR_Word hlds__make_hlds__add_type__OrigContext_21;
        MR_Word hlds__make_hlds__add_type__Context_26;
        MR_String hlds__make_hlds__add_type__FieldString_31;
        MR_Word hlds__make_hlds__add_type__Pieces_32;
        MR_Word hlds__make_hlds__add_type__HereMsg_33;
        MR_Word hlds__make_hlds__add_type__PrevPieces_34;
        MR_Word hlds__make_hlds__add_type__PrevMsg_35;
        MR_Word hlds__make_hlds__add_type__Spec_36;
        MR_Word hlds__make_hlds__add_type__Var_51;
        MR_Word hlds__make_hlds__add_type__Var_52;
        MR_Word hlds__make_hlds__add_type__Var_59;
        MR_Word hlds__make_hlds__add_type__Var_60;
        MR_Word hlds__make_hlds__add_type__Var_64;
        MR_Word hlds__make_hlds__add_type__Var_72;
        MR_Word hlds__make_hlds__add_type__Var_73;
        MR_Word hlds__make_hlds__add_type__Var_77;
        MR_Word hlds__make_hlds__add_type__Var_78;
        MR_Word hlds__make_hlds__add_type__ConflictingDefn_20;
        MR_Word hlds__make_hlds__add_type__Var_45;
        MR_Word hlds__make_hlds__add_type__Var_27;
        MR_Word hlds__make_hlds__add_type__Var_28;
        MR_Word hlds__make_hlds__add_type__Var_29;
        MR_Integer hlds__make_hlds__add_type__Var_30;

        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__ConflictingDefns_19)) == (MR_mktag((MR_Integer) 1)));
        if (hlds__make_hlds__add_type__succeeded)
          {
            hlds__make_hlds__add_type__ConflictingDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 0)));
            hlds__make_hlds__add_type__Var_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 1)));
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        if (hlds__make_hlds__add_type__succeeded)
          {
            MR_Word hlds__make_hlds__add_type__Var_22;
            MR_Word hlds__make_hlds__add_type__Var_23;
            MR_Word hlds__make_hlds__add_type__Var_24;
            MR_Integer hlds__make_hlds__add_type__Var_25;

            hlds__make_hlds__add_type__OrigContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 0)));
            hlds__make_hlds__add_type__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 1)));
            hlds__make_hlds__add_type__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 2)));
            hlds__make_hlds__add_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 3)));
            hlds__make_hlds__add_type__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 4)));
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
              return;
            }
          }
        hlds__make_hlds__add_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 0)));
        hlds__make_hlds__add_type__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 1)));
        hlds__make_hlds__add_type__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 2)));
        hlds__make_hlds__add_type__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 3)));
        hlds__make_hlds__add_type__Var_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 4)));
        {
          hlds__make_hlds__add_type__FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
        {
          hlds__make_hlds__add_type__Var_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldString_31));
        }
        {
          hlds__make_hlds__add_type__Var_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_52));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[65])));
        }
        {
          hlds__make_hlds__add_type__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[80])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_51));
        }
        {
          hlds__make_hlds__add_type__Var_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_32));
        }
        {
          hlds__make_hlds__add_type__Var_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_60));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_type__HereMsg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_26));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_59));
        }
        {
          hlds__make_hlds__add_type__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_52));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
        }
        {
          hlds__make_hlds__add_type__PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[81])));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_64));
        }
        {
          hlds__make_hlds__add_type__Var_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_73, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevPieces_34));
        }
        {
          hlds__make_hlds__add_type__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_72, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_73));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_type__PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__OrigContext_21));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_72));
        }
        {
          hlds__make_hlds__add_type__Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevMsg_35));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
        {
          hlds__make_hlds__add_type__Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_77, 0) = ((MR_Box) (hlds__make_hlds__add_type__HereMsg_33));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_77, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_78));
        }
        {
          hlds__make_hlds__add_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_77));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_36));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40));
        }
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
      }
    else
      {
        MR_String hlds__make_hlds__add_type__UnqualFieldName_37;
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82;
        MR_Word hlds__make_hlds__add_type__Var_83;
        MR_Word hlds__make_hlds__add_type__Var_84;
        MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39;

        {
          hlds__make_hlds__add_type__UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
        switch (hlds__make_hlds__add_type__NeedQual_11) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_type__Var_81;

              {
                hlds__make_hlds__add_type__Var_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_81, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
              }
              {
                mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__Var_81)), ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82);
              }
            }
            break;
          case (MR_Integer) 0:
            hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
            break;
        }
        {
          hlds__make_hlds__add_type__Var_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_83, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_8[0]));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_83, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_83, 3) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_83, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10));
        }
        {
          hlds__make_hlds__add_type__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_84, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldModule_17));
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_84, 1) = ((MR_Box) (hlds__make_hlds__add_type__PartialQuals_12));
        }
        {
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[0], hlds__make_hlds__add_type__Var_83, hlds__make_hlds__add_type__Var_84, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        }
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40;
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
  MR_Word hlds__make_hlds__add_type__ConsId_5,
  MR_Word hlds__make_hlds__add_type__TypeStatus_6,
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_type__succeeded;

        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
          }
        else
          {
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;
            MR_Integer hlds__make_hlds__add_type__Var_44;

            if ((hlds__make_hlds__add_type__MaybeCtorFieldName_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
              }
            else
              {
                MR_Word hlds__make_hlds__add_type__FieldName_34;
                MR_Word hlds__make_hlds__add_type__FieldNameContext_35;
                MR_Word hlds__make_hlds__add_type__FieldDefn_36;
                MR_Word hlds__make_hlds__add_type__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeCtorFieldName_24, (MR_Integer) 0)));

                hlds__make_hlds__add_type__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_41, (MR_Integer) 0)));
                hlds__make_hlds__add_type__FieldNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_41, (MR_Integer) 1)));
                {
                  hlds__make_hlds__add_type__FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldNameContext_35));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__TypeStatus_6));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_4));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 3) = ((MR_Box) (hlds__make_hlds__add_type__ConsId_5));
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldNumber_7));
                }
                {
                  hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(hlds__make_hlds__add_type__FieldName_34, hlds__make_hlds__add_type__FieldDefn_36, hlds__make_hlds__add_type__NeedQual_2, hlds__make_hlds__add_type__PartialQuals_3, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43);
                }
              }
            hlds__make_hlds__add_type__Var_44 = (hlds__make_hlds__add_type__FieldNumber_7 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__add_type__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_type__MaybeCtorFieldNames_25;
              MR_Integer hlds__make_hlds__add_type__next_value_of_FieldNumber_7 = hlds__make_hlds__add_type__Var_44;
              MR_Word hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_FieldNameTable_0_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
              MR_Word hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;

              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_Specs_0_10;
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8 = hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_FieldNameTable_0_8;
              hlds__make_hlds__add_type__FieldNumber_7 = hlds__make_hlds__add_type__next_value_of_FieldNumber_7;
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
  MR_String hlds__make_hlds__add_type__ConsName_8,
  MR_Integer hlds__make_hlds__add_type__Arity_9,
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__ConsIdA_12;
    MR_Word hlds__make_hlds__add_type__ConsIdB_13;
    MR_Word hlds__make_hlds__add_type__Var_16;
    MR_Word hlds__make_hlds__add_type__Var_18;
    MR_Word hlds__make_hlds__add_type__Var_20;

    {
      hlds__make_hlds__add_type__Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_16, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleQual_10));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_16, 1) = ((MR_Box) (hlds__make_hlds__add_type__ConsName_8));
    }
    {
      hlds__make_hlds__add_type__ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_16));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 3) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_7));
    }
    {
      hlds__make_hlds__add_type__Var_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
    {
      hlds__make_hlds__add_type__ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_16));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__Var_18));
    }
    {
      hlds__make_hlds__add_type__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdB_13));
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdA_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_20));
    }
  }
}

static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
  MR_Box hlds__make_hlds__add_type__closure_arg,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1)
{
  {
    MR_Box hlds__make_hlds__add_type__wrapper_arg_2;
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
    MR_Word hlds__make_hlds__add_type__conv3_LambdaHeadVar__2_96;

    {
      hlds__make_hlds__add_type__conv3_LambdaHeadVar__2_96 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__721__1_1_f_0(((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1));
    }
    hlds__make_hlds__add_type__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_type__conv3_LambdaHeadVar__2_96));
    return hlds__make_hlds__add_type__wrapper_arg_2;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
  MR_Box hlds__make_hlds__add_type__closure_arg,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
{
  {
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15;

    {
      hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15);
    }
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15));
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_99);
    {
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(hlds__make_hlds__add_type__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    {
      MR_Word hlds__make_hlds__add_type__Var_101;
      MR_Word hlds__make_hlds__add_type__Var_102;
      MR_Word hlds__make_hlds__add_type__Var_103;
      MR_Word hlds__make_hlds__add_type__Var_104;
      MR_Word hlds__make_hlds__add_type__Var_105;
      MR_Word hlds__make_hlds__add_type__Var_106;
      MR_Word hlds__make_hlds__add_type__Var_107;

      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 0)));
      hlds__make_hlds__add_type__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 1)));
      hlds__make_hlds__add_type__Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 2)));
      hlds__make_hlds__add_type__Var_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 3)));
      hlds__make_hlds__add_type__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 4)));
      hlds__make_hlds__add_type__Var_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 5)));
      hlds__make_hlds__add_type__Var_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 6)));
      hlds__make_hlds__add_type__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_99, (MR_Integer) 7)));
      {
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__Var_119);
      }
      if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
        {
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(hlds__make_hlds__add_type__env_ptr);
        }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
      {
        {
          {
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_99, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, hlds__make_hlds__add_type__env_ptr);
          }
        }
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
  MR_Word hlds__make_hlds__add_type__Ctor_16,
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
  MR_Word hlds__make_hlds__add_type__KindMap_21,
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
  MR_Word hlds__make_hlds__add_type__TypeStatus_24,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60)
{
  {
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s hlds__make_hlds__add_type__env;

    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = hlds__make_hlds__add_type__TypeCtor_17;
    {
      MR_Word hlds__make_hlds__add_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 0)));
      MR_Word hlds__make_hlds__add_type__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 1)));
      MR_Word hlds__make_hlds__add_type__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 2)));
      MR_Word hlds__make_hlds__add_type__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 3)));
      MR_Integer hlds__make_hlds__add_type__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 4)));
      MR_Word hlds__make_hlds__add_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 5)));
      MR_String hlds__make_hlds__add_type__BaseName_34;
      MR_Word hlds__make_hlds__add_type__QualifiedName_35;
      MR_Word hlds__make_hlds__add_type__UnqualifiedName_36;
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdA_37;
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdB_38;
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdA_39;
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdB_40;
      MR_Word hlds__make_hlds__add_type__ConsDefn_41;
      MR_Word hlds__make_hlds__add_type__PartialQuals_42;
      MR_Word hlds__make_hlds__add_type__FieldNames_52;
      MR_Word hlds__make_hlds__add_type__Var_61;
      MR_Word hlds__make_hlds__add_type__Var_62;
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_86_86;

      {
        hlds__make_hlds__add_type__BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__Name_30);
      }
      {
        hlds__make_hlds__add_type__QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorModuleName_18));
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
      }
      {
        hlds__make_hlds__add_type__UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__UnqualifiedName_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
      }
      {
        hlds__make_hlds__add_type__QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
      }
      {
        hlds__make_hlds__add_type__Var_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
      {
        hlds__make_hlds__add_type__QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 3) = ((MR_Box) (hlds__make_hlds__add_type__Var_61));
      }
      {
        hlds__make_hlds__add_type__UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
      }
      {
        hlds__make_hlds__add_type__Var_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
      {
        hlds__make_hlds__add_type__UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 3) = ((MR_Box) (hlds__make_hlds__add_type__Var_62));
      }
      {
        hlds__make_hlds__add_type__ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 0) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__TVarSet_19));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeParams_20));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 3) = ((MR_Box) (hlds__make_hlds__add_type__KindMap_21));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 4) = ((MR_Box) (hlds__make_hlds__add_type__ExistQVars_28));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 5) = ((MR_Box) (hlds__make_hlds__add_type__Constraints_29));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 6) = ((MR_Box) (hlds__make_hlds__add_type__Args_31));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 7) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
      }
      {
        parse_tree__module_qual__get_partial_qualifiers_4_p_0((MR_Integer) 0, hlds__make_hlds__add_type__TypeCtorModuleName_18, hlds__make_hlds__add_type__PQInfo_23, &hlds__make_hlds__add_type__PartialQuals_42);
      }
      {
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_3_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__QualifiedConsIdA_37, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
      }
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
        {
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&hlds__make_hlds__add_type__env);
        }
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
        {
          MR_String hlds__make_hlds__add_type__QualifiedConsIdStr_45;
          MR_String hlds__make_hlds__add_type__TypeCtorStr_46;
          MR_Word hlds__make_hlds__add_type__Pieces_47;
          MR_Word hlds__make_hlds__add_type__Msg_48;
          MR_Word hlds__make_hlds__add_type__Spec_49;
          MR_Word hlds__make_hlds__add_type__Var_66;
          MR_Word hlds__make_hlds__add_type__Var_67;
          MR_Word hlds__make_hlds__add_type__Var_68;
          MR_Word hlds__make_hlds__add_type__Var_71;
          MR_Word hlds__make_hlds__add_type__Var_72;
          MR_Word hlds__make_hlds__add_type__Var_79;
          MR_Word hlds__make_hlds__add_type__Var_80;
          MR_Word hlds__make_hlds__add_type__Var_84;

          {
            hlds__make_hlds__add_type__QualifiedConsIdStr_45 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__make_hlds__add_type__QualifiedConsIdA_37);
          }
          {
            hlds__make_hlds__add_type__TypeCtorStr_46 = parse_tree__prog_out__type_ctor_to_string_1_f_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
          }
          {
            hlds__make_hlds__add_type__Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdStr_45));
          }
          {
            hlds__make_hlds__add_type__Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_72, 1) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorStr_46));
          }
          {
            hlds__make_hlds__add_type__Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_71, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_72));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_71, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[65])));
          }
          {
            hlds__make_hlds__add_type__Var_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[79])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_68, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_71));
          }
          {
            hlds__make_hlds__add_type__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_67));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_68));
          }
          {
            hlds__make_hlds__add_type__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[78])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_66));
          }
          {
            hlds__make_hlds__add_type__Var_80 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_80, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_47));
          }
          {
            hlds__make_hlds__add_type__Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_79, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_80));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_79, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_79));
          }
          {
            hlds__make_hlds__add_type__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_84, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_48));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_84));
          }
          {
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_49));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_86_86, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59));
          }
          *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57;
        }
      else
        {
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_87_87;
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_89_89;
          MR_Word hlds__make_hlds__add_type__Var_91;
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_92_92;
          MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_92_92;

          {
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_87_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_87_87, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdB_38));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_87_87, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          switch (hlds__make_hlds__add_type__NeedQual_22) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word hlds__make_hlds__add_type__Var_90;

                {
                  hlds__make_hlds__add_type__Var_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_90, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdB_40));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_90, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_87_87));
                }
                {
                  hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdA_39));
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_90));
                }
              }
              break;
            case (MR_Integer) 0:
              hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_89_89 = hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_87_87;
              break;
          }
          {
            hlds__make_hlds__add_type__Var_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_91, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_91, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_91, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_91, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_91, 4) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_91, 5) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
          }
          {
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[1], hlds__make_hlds__add_type__Var_91, hlds__make_hlds__add_type__PartialQuals_42, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_89_89)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_92_92);
          }
          hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_92_92 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_92_92);
          {
            hlds__hlds_data__insert_into_cons_table_5_p_0(hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_92_92, hlds__make_hlds__add_type__ConsDefn_41, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58);
          }
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_86_86 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59;
        }
      {
        hlds__make_hlds__add_type__FieldNames_52 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[2], (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[1], hlds__make_hlds__add_type__Args_31);
      }
      {
        hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(hlds__make_hlds__add_type__FieldNames_52, hlds__make_hlds__add_type__NeedQual_22, hlds__make_hlds__add_type__PartialQuals_42, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__TypeStatus_24, (MR_Integer) 1, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_86_86, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);
      }
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
  MR_Word hlds__make_hlds__add_type__KindMap_6,
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
  MR_Word hlds__make_hlds__add_type__TypeStatus_9,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool hlds__make_hlds__add_type__succeeded;

        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14;
            *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12;
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10;
          }
        else
          {
            MR_Word hlds__make_hlds__add_type__Ctor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word hlds__make_hlds__add_type__Ctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

            {
              hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(hlds__make_hlds__add_type__Ctor_33, hlds__make_hlds__add_type__TypeCtor_2, hlds__make_hlds__add_type__TypeCtorModuleName_3, hlds__make_hlds__add_type__TVarSet_4, hlds__make_hlds__add_type__TypeParams_5, hlds__make_hlds__add_type__KindMap_6, hlds__make_hlds__add_type__NeedQual_7, hlds__make_hlds__add_type__PQInfo_8, hlds__make_hlds__add_type__TypeStatus_9, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12, &hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54);
            }
            /* direct tailcall eliminated */
            {
              MR_Word hlds__make_hlds__add_type__next_value_of_HeadVar__1_1 = hlds__make_hlds__add_type__Ctors_34;
              MR_Word hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_FieldNameTable_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
              MR_Word hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_ConsTable_0_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
              MR_Word hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_Specs_0_14;
              hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12 = hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_ConsTable_0_12;
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10 = hlds__make_hlds__add_type__next_value_of_STATE_VARIABLE_FieldNameTable_0_10;
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
  MR_Word hlds__make_hlds__add_type__Globals_3,
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;

    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_type__Body_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__add_type__MaybeDirectArgCtors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word hlds__make_hlds__add_type__CtorTagMap_12;
          MR_Word hlds__make_hlds__add_type__ReservedAddr_13;
          MR_Word hlds__make_hlds__add_type__IsEnum_14;
          MR_Word hlds__make_hlds__add_type__CheaperTagTest_16;

          {
            hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_type__Body_5, hlds__make_hlds__add_type__MaybeUserEqComp_6, hlds__make_hlds__add_type__TypeCtor_2, (MR_Integer) 1, hlds__make_hlds__add_type__Globals_3, &hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__ReservedAddr_13, &hlds__make_hlds__add_type__IsEnum_14);
          }
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__ReservedAddr_13 == (MR_Integer) 1);
          if (hlds__make_hlds__add_type__succeeded)
            {
              hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__CheaperTagTest_16);
            }
          else
            hlds__make_hlds__add_type__CheaperTagTest_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_5));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorTagMap_12));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__CheaperTagTest_16));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__IsEnum_14));
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_6));
            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__MaybeDirectArgCtors_7));
            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__make_hlds__add_type__ReservedAddr_13 << (MR_Integer) 1)))));
            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_type__Body_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_17));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word hlds__make_hlds__add_type__Details_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Details_24));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word hlds__make_hlds__add_type__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_type__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__SolverTypeDetails_20));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_21));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word hlds__make_hlds__add_type__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word hlds__make_hlds__add_type__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word hlds__make_hlds__add_type__Body_32;

              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word hlds__make_hlds__add_type__CForeignType_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__add_type__Data_34;
                    MR_Word hlds__make_hlds__add_type__Var_50;

                    {
                      hlds__make_hlds__add_type__Data_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__CForeignType_33));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
                    }
                    {
                      hlds__make_hlds__add_type__Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_50, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_34));
                    }
                    {
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_50));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word hlds__make_hlds__add_type__JavaForeignType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__add_type__Var_47;
                    MR_Word hlds__make_hlds__add_type__Data_54;

                    {
                      hlds__make_hlds__add_type__Data_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__JavaForeignType_35));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_54, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_54, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
                    }
                    {
                      hlds__make_hlds__add_type__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_54));
                    }
                    {
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_47));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word hlds__make_hlds__add_type__CSharpForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
                    MR_Word hlds__make_hlds__add_type__Var_44;
                    MR_Word hlds__make_hlds__add_type__Data_55;

                    {
                      hlds__make_hlds__add_type__Data_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__CSharpForeignType_36));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_55, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_55, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
                    }
                    {
                      hlds__make_hlds__add_type__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_44, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_55));
                    }
                    {
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_44));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word hlds__make_hlds__add_type__Var_41;
                    MR_Word hlds__make_hlds__add_type__Data_56;

                    {
                      hlds__make_hlds__add_type__Data_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_56, 0) = NULL;
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_56, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_56, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
                    }
                    {
                      hlds__make_hlds__add_type__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_56));
                    }
                    {
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (hlds__make_hlds__add_type__Var_41));
                    }
                  }
                  break;
              }
              *hlds__make_hlds__add_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_32);
            }
            break;
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_3_p_0(
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
  MR_Word * hlds__make_hlds__add_type__TypeBody_6)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__MaybeCA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_type__MaybeCB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_type__MaybeC_15;
    MR_Word hlds__make_hlds__add_type__MaybeJava_16;
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_17;
    MR_Word hlds__make_hlds__add_type__MaybeErlang_18;

    if ((hlds__make_hlds__add_type__MaybeCA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((hlds__make_hlds__add_type__MaybeCB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__make_hlds__add_type__MaybeC_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          hlds__make_hlds__add_type__MaybeC_15 = hlds__make_hlds__add_type__MaybeCB_11;
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
      }
    else
      {
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__make_hlds__add_type__succeeded)
          {
            hlds__make_hlds__add_type__MaybeC_15 = hlds__make_hlds__add_type__MaybeCA_7;
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
          }
      }
    if (hlds__make_hlds__add_type__succeeded)
      {
        if ((hlds__make_hlds__add_type__MaybeJavaA_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((hlds__make_hlds__add_type__MaybeJavaB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__make_hlds__add_type__MaybeJava_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              hlds__make_hlds__add_type__MaybeJava_16 = hlds__make_hlds__add_type__MaybeJavaB_12;
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
          }
        else
          {
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_type__succeeded)
              {
                hlds__make_hlds__add_type__MaybeJava_16 = hlds__make_hlds__add_type__MaybeJavaA_8;
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
              }
          }
        if (hlds__make_hlds__add_type__succeeded)
          {
            if ((hlds__make_hlds__add_type__MaybeCSharpA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                if ((hlds__make_hlds__add_type__MaybeCSharpB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__make_hlds__add_type__MaybeCSharp_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  hlds__make_hlds__add_type__MaybeCSharp_17 = hlds__make_hlds__add_type__MaybeCSharpB_13;
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
              }
            else
              {
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__make_hlds__add_type__succeeded)
                  {
                    hlds__make_hlds__add_type__MaybeCSharp_17 = hlds__make_hlds__add_type__MaybeCSharpA_9;
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
                  }
              }
            if (hlds__make_hlds__add_type__succeeded)
              {
                if ((hlds__make_hlds__add_type__MaybeErlangA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    if ((hlds__make_hlds__add_type__MaybeErlangB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      hlds__make_hlds__add_type__MaybeErlang_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      hlds__make_hlds__add_type__MaybeErlang_18 = hlds__make_hlds__add_type__MaybeErlangB_14;
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
                  }
                else
                  {
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__make_hlds__add_type__succeeded)
                      {
                        hlds__make_hlds__add_type__MaybeErlang_18 = hlds__make_hlds__add_type__MaybeErlangA_10;
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
                      }
                  }
                if (hlds__make_hlds__add_type__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      *hlds__make_hlds__add_type__TypeBody_6 = base;
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_15));
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_16));
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_17));
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_18));
                    }
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return hlds__make_hlds__add_type__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(
  MR_Word hlds__make_hlds__add_type__Globals_5,
  MR_Word hlds__make_hlds__add_type__ForeignTypeBodyA_6,
  MR_Word hlds__make_hlds__add_type__DuTypeBodyB_7,
  MR_Word * hlds__make_hlds__add_type__Body_8)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBodyB_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 7)));
    MR_Word hlds__make_hlds__add_type__ForeignTypeBodyB_18;
    MR_Word hlds__make_hlds__add_type__ForeignTypeBody_19;
    MR_Word hlds__make_hlds__add_type__Target_20;
    MR_Word hlds__make_hlds__add_type__OpMode_21;
    MR_Word hlds__make_hlds__add_type__MaybeCA_43;
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_44;
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_45;
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_46;
    MR_Word hlds__make_hlds__add_type__MaybeCB_47;
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_48;
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_49;
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_50;
    MR_Word hlds__make_hlds__add_type__MaybeC_51;
    MR_Word hlds__make_hlds__add_type__MaybeJava_52;
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_53;
    MR_Word hlds__make_hlds__add_type__MaybeErlang_54;
    MR_Word hlds__make_hlds__add_type___Ctors_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 0)));
    MR_Word hlds__make_hlds__add_type___TagValues_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_type___CheaperTagTest_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 2)));
    MR_Word hlds__make_hlds__add_type___DuTypeKind_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 3)));
    MR_Word hlds__make_hlds__add_type___UserEq_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 4)));
    MR_Word hlds__make_hlds__add_type___DirectArgCtors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 5)));
    MR_Word hlds__make_hlds__add_type___ReservedTag_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 6)))) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__add_type___ReservedAddr_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word hlds__make_hlds__add_type__Var_26;
    MR_Word hlds__make_hlds__add_type__Var_39;
    MR_Word hlds__make_hlds__add_type__Var_27;
    MR_Word hlds__make_hlds__add_type__Var_28;

    if ((hlds__make_hlds__add_type__MaybeForeignTypeBodyB_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      hlds__make_hlds__add_type__ForeignTypeBodyB_18 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_3[0];
    else
      hlds__make_hlds__add_type__ForeignTypeBodyB_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBodyB_17, (MR_Integer) 0)));
    hlds__make_hlds__add_type__MaybeCA_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyA_6, (MR_Integer) 0)));
    hlds__make_hlds__add_type__MaybeJavaA_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyA_6, (MR_Integer) 1)));
    hlds__make_hlds__add_type__MaybeCSharpA_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyA_6, (MR_Integer) 2)));
    hlds__make_hlds__add_type__MaybeErlangA_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyA_6, (MR_Integer) 3)));
    hlds__make_hlds__add_type__MaybeCB_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_18, (MR_Integer) 0)));
    hlds__make_hlds__add_type__MaybeJavaB_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_18, (MR_Integer) 1)));
    hlds__make_hlds__add_type__MaybeCSharpB_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_18, (MR_Integer) 2)));
    hlds__make_hlds__add_type__MaybeErlangB_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_18, (MR_Integer) 3)));
    if ((hlds__make_hlds__add_type__MaybeCA_43 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        if ((hlds__make_hlds__add_type__MaybeCB_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          hlds__make_hlds__add_type__MaybeC_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          hlds__make_hlds__add_type__MaybeC_51 = hlds__make_hlds__add_type__MaybeCB_47;
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
      }
    else
      {
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (hlds__make_hlds__add_type__succeeded)
          {
            hlds__make_hlds__add_type__MaybeC_51 = hlds__make_hlds__add_type__MaybeCA_43;
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
          }
      }
    if (hlds__make_hlds__add_type__succeeded)
      {
        if ((hlds__make_hlds__add_type__MaybeJavaA_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            if ((hlds__make_hlds__add_type__MaybeJavaB_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__make_hlds__add_type__MaybeJava_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              hlds__make_hlds__add_type__MaybeJava_52 = hlds__make_hlds__add_type__MaybeJavaB_48;
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
          }
        else
          {
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (hlds__make_hlds__add_type__succeeded)
              {
                hlds__make_hlds__add_type__MaybeJava_52 = hlds__make_hlds__add_type__MaybeJavaA_44;
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
              }
          }
        if (hlds__make_hlds__add_type__succeeded)
          {
            if ((hlds__make_hlds__add_type__MaybeCSharpA_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                if ((hlds__make_hlds__add_type__MaybeCSharpB_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__make_hlds__add_type__MaybeCSharp_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  hlds__make_hlds__add_type__MaybeCSharp_53 = hlds__make_hlds__add_type__MaybeCSharpB_49;
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
              }
            else
              {
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_49 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__make_hlds__add_type__succeeded)
                  {
                    hlds__make_hlds__add_type__MaybeCSharp_53 = hlds__make_hlds__add_type__MaybeCSharpA_45;
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
                  }
              }
            if (hlds__make_hlds__add_type__succeeded)
              {
                if ((hlds__make_hlds__add_type__MaybeErlangA_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    if ((hlds__make_hlds__add_type__MaybeErlangB_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      hlds__make_hlds__add_type__MaybeErlang_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      hlds__make_hlds__add_type__MaybeErlang_54 = hlds__make_hlds__add_type__MaybeErlangB_50;
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
                  }
                else
                  {
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__make_hlds__add_type__succeeded)
                      {
                        hlds__make_hlds__add_type__MaybeErlang_54 = hlds__make_hlds__add_type__MaybeErlangA_46;
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
                      }
                  }
                if (hlds__make_hlds__add_type__succeeded)
                  {
                    {
                      hlds__make_hlds__add_type__ForeignTypeBody_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_19, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_51));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_19, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_52));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_19, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_53));
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_19, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_54));
                    }
                    {
                      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_5, &hlds__make_hlds__add_type__Target_20);
                    }
                    {
                      libs__globals__get_op_mode_2_p_0(hlds__make_hlds__add_type__Globals_5, &hlds__make_hlds__add_type__OpMode_21);
                    }
                    hlds__make_hlds__add_type__Var_26 = (MR_Integer) 1;
                    {
                      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_20, hlds__make_hlds__add_type__ForeignTypeBody_19, &hlds__make_hlds__add_type__Var_39);
                    }
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_26 == hlds__make_hlds__add_type__Var_39);
                    if (hlds__make_hlds__add_type__succeeded)
                      {
                        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__OpMode_21)) == (MR_mktag((MR_Integer) 3)));
                        if (hlds__make_hlds__add_type__succeeded)
                          {
                            hlds__make_hlds__add_type__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OpMode_21, (MR_Integer) 0)));
                            hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Var_27)) == (MR_mktag((MR_Integer) 1)));
                            if (hlds__make_hlds__add_type__succeeded)
                              {
                                hlds__make_hlds__add_type__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_27, (MR_Integer) 0)));
                                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                          }
                        hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
                      }
                    if (hlds__make_hlds__add_type__succeeded)
                      *hlds__make_hlds__add_type__Body_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_19);
                    else
                      {
                        MR_Word hlds__make_hlds__add_type__Var_29;
                        MR_Word hlds__make_hlds__add_type__Var_30;
                        MR_Word hlds__make_hlds__add_type__Var_31;
                        MR_Word hlds__make_hlds__add_type__Var_32;
                        MR_Word hlds__make_hlds__add_type__Var_33;
                        MR_Word hlds__make_hlds__add_type__Var_34;
                        MR_Word hlds__make_hlds__add_type__Var_35;
                        MR_Word hlds__make_hlds__add_type__Var_36;
                        MR_Word hlds__make_hlds__add_type__Var_37;
                        MR_Word hlds__make_hlds__add_type__Var_38;

                        {
                          hlds__make_hlds__add_type__Var_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_29, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_19));
                        }
                        hlds__make_hlds__add_type__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 0)));
                        hlds__make_hlds__add_type__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 1)));
                        hlds__make_hlds__add_type__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 2)));
                        hlds__make_hlds__add_type__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 3)));
                        hlds__make_hlds__add_type__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 4)));
                        hlds__make_hlds__add_type__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 5)));
                        hlds__make_hlds__add_type__Var_36 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 6)))) & (MR_Integer) 1);
                        hlds__make_hlds__add_type__Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        hlds__make_hlds__add_type__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DuTypeBodyB_7, (MR_Integer) 7)));
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                          *hlds__make_hlds__add_type__Body_8 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_30));
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_31));
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_32));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__Var_33));
                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__Var_34));
                          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__Var_35));
                          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__Var_36 | ((hlds__make_hlds__add_type__Var_37 << (MR_Integer) 1)))));
                          MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__Var_29));
                        }
                      }
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
                  }
              }
          }
      }
    return hlds__make_hlds__add_type__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(
  MR_Word hlds__make_hlds__add_type__Globals_5,
  MR_Word hlds__make_hlds__add_type__BodyA_6,
  MR_Word hlds__make_hlds__add_type__BodyB_7,
  MR_Word * hlds__make_hlds__add_type__Body_8)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;

    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__BodyA_6)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_type__ForeignTypeBodyB_28;
        MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBodyB_45;
        MR_Word hlds__make_hlds__add_type__ForeignTypeBodyB_46;
        MR_Word hlds__make_hlds__add_type__ForeignTypeBody_47;
        MR_Word hlds__make_hlds__add_type__Target_48;
        MR_Word hlds__make_hlds__add_type__OpMode_49;
        MR_Word hlds__make_hlds__add_type__MaybeCA_71;
        MR_Word hlds__make_hlds__add_type__MaybeJavaA_72;
        MR_Word hlds__make_hlds__add_type__MaybeCSharpA_73;
        MR_Word hlds__make_hlds__add_type__MaybeErlangA_74;
        MR_Word hlds__make_hlds__add_type__MaybeCB_75;
        MR_Word hlds__make_hlds__add_type__MaybeJavaB_76;
        MR_Word hlds__make_hlds__add_type__MaybeCSharpB_77;
        MR_Word hlds__make_hlds__add_type__MaybeErlangB_78;
        MR_Word hlds__make_hlds__add_type__MaybeC_79;
        MR_Word hlds__make_hlds__add_type__MaybeJava_80;
        MR_Word hlds__make_hlds__add_type__MaybeCSharp_81;
        MR_Word hlds__make_hlds__add_type__MaybeErlang_82;
        MR_Word hlds__make_hlds__add_type___Ctors_37;
        MR_Word hlds__make_hlds__add_type___TagValues_38;
        MR_Word hlds__make_hlds__add_type___CheaperTagTest_39;
        MR_Word hlds__make_hlds__add_type___DuTypeKind_40;
        MR_Word hlds__make_hlds__add_type___UserEq_41;
        MR_Word hlds__make_hlds__add_type___DirectArgCtors_42;
        MR_Word hlds__make_hlds__add_type___ReservedTag_43;
        MR_Word hlds__make_hlds__add_type___ReservedAddr_44;
        MR_Word hlds__make_hlds__add_type__Var_54;
        MR_Word hlds__make_hlds__add_type__Var_67;
        MR_Word hlds__make_hlds__add_type__Var_55;
        MR_Word hlds__make_hlds__add_type__Var_56;

        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__BodyB_7)) == (MR_mktag((MR_Integer) 0)));
        if (hlds__make_hlds__add_type__succeeded)
          {
            hlds__make_hlds__add_type__ForeignTypeBodyB_28 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__BodyB_7), (MR_Integer) 0);
            hlds__make_hlds__add_type___Ctors_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 0)));
            hlds__make_hlds__add_type___TagValues_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 1)));
            hlds__make_hlds__add_type___CheaperTagTest_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 2)));
            hlds__make_hlds__add_type___DuTypeKind_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 3)));
            hlds__make_hlds__add_type___UserEq_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 4)));
            hlds__make_hlds__add_type___DirectArgCtors_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 5)));
            hlds__make_hlds__add_type___ReservedTag_43 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 6)))) & (MR_Integer) 1);
            hlds__make_hlds__add_type___ReservedAddr_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            hlds__make_hlds__add_type__MaybeForeignTypeBodyB_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 7)));
            if ((hlds__make_hlds__add_type__MaybeForeignTypeBodyB_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              hlds__make_hlds__add_type__ForeignTypeBodyB_46 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_3[0];
            else
              hlds__make_hlds__add_type__ForeignTypeBodyB_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBodyB_45, (MR_Integer) 0)));
            hlds__make_hlds__add_type__MaybeCA_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_28, (MR_Integer) 0)));
            hlds__make_hlds__add_type__MaybeJavaA_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_28, (MR_Integer) 1)));
            hlds__make_hlds__add_type__MaybeCSharpA_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_28, (MR_Integer) 2)));
            hlds__make_hlds__add_type__MaybeErlangA_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_28, (MR_Integer) 3)));
            hlds__make_hlds__add_type__MaybeCB_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_46, (MR_Integer) 0)));
            hlds__make_hlds__add_type__MaybeJavaB_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_46, (MR_Integer) 1)));
            hlds__make_hlds__add_type__MaybeCSharpB_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_46, (MR_Integer) 2)));
            hlds__make_hlds__add_type__MaybeErlangB_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBodyB_46, (MR_Integer) 3)));
            if ((hlds__make_hlds__add_type__MaybeCA_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                if ((hlds__make_hlds__add_type__MaybeCB_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  hlds__make_hlds__add_type__MaybeC_79 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                else
                  hlds__make_hlds__add_type__MaybeC_79 = hlds__make_hlds__add_type__MaybeCB_75;
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
              }
            else
              {
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (hlds__make_hlds__add_type__succeeded)
                  {
                    hlds__make_hlds__add_type__MaybeC_79 = hlds__make_hlds__add_type__MaybeCA_71;
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
                  }
              }
            if (hlds__make_hlds__add_type__succeeded)
              {
                if ((hlds__make_hlds__add_type__MaybeJavaA_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  {
                    if ((hlds__make_hlds__add_type__MaybeJavaB_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      hlds__make_hlds__add_type__MaybeJava_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    else
                      hlds__make_hlds__add_type__MaybeJava_80 = hlds__make_hlds__add_type__MaybeJavaB_76;
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
                  }
                else
                  {
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (hlds__make_hlds__add_type__succeeded)
                      {
                        hlds__make_hlds__add_type__MaybeJava_80 = hlds__make_hlds__add_type__MaybeJavaA_72;
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
                      }
                  }
                if (hlds__make_hlds__add_type__succeeded)
                  {
                    if ((hlds__make_hlds__add_type__MaybeCSharpA_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        if ((hlds__make_hlds__add_type__MaybeCSharpB_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          hlds__make_hlds__add_type__MaybeCSharp_81 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        else
                          hlds__make_hlds__add_type__MaybeCSharp_81 = hlds__make_hlds__add_type__MaybeCSharpB_77;
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
                      }
                    else
                      {
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_77 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        if (hlds__make_hlds__add_type__succeeded)
                          {
                            hlds__make_hlds__add_type__MaybeCSharp_81 = hlds__make_hlds__add_type__MaybeCSharpA_73;
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
                          }
                      }
                    if (hlds__make_hlds__add_type__succeeded)
                      {
                        if ((hlds__make_hlds__add_type__MaybeErlangA_74 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          {
                            if ((hlds__make_hlds__add_type__MaybeErlangB_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              hlds__make_hlds__add_type__MaybeErlang_82 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            else
                              hlds__make_hlds__add_type__MaybeErlang_82 = hlds__make_hlds__add_type__MaybeErlangB_78;
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
                          }
                        else
                          {
                            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                            if (hlds__make_hlds__add_type__succeeded)
                              {
                                hlds__make_hlds__add_type__MaybeErlang_82 = hlds__make_hlds__add_type__MaybeErlangA_74;
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
                              }
                          }
                        if (hlds__make_hlds__add_type__succeeded)
                          {
                            {
                              hlds__make_hlds__add_type__ForeignTypeBody_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_79));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_80));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_47, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_81));
                              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_47, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_82));
                            }
                            {
                              libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_5, &hlds__make_hlds__add_type__Target_48);
                            }
                            {
                              libs__globals__get_op_mode_2_p_0(hlds__make_hlds__add_type__Globals_5, &hlds__make_hlds__add_type__OpMode_49);
                            }
                            hlds__make_hlds__add_type__Var_54 = (MR_Integer) 1;
                            {
                              backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_48, hlds__make_hlds__add_type__ForeignTypeBody_47, &hlds__make_hlds__add_type__Var_67);
                            }
                            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_54 == hlds__make_hlds__add_type__Var_67);
                            if (hlds__make_hlds__add_type__succeeded)
                              {
                                hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__OpMode_49)) == (MR_mktag((MR_Integer) 3)));
                                if (hlds__make_hlds__add_type__succeeded)
                                  {
                                    hlds__make_hlds__add_type__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OpMode_49, (MR_Integer) 0)));
                                    hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Var_55)) == (MR_mktag((MR_Integer) 1)));
                                    if (hlds__make_hlds__add_type__succeeded)
                                      {
                                        hlds__make_hlds__add_type__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_55, (MR_Integer) 0)));
                                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                      }
                                  }
                                hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
                              }
                            if (hlds__make_hlds__add_type__succeeded)
                              *hlds__make_hlds__add_type__Body_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_47);
                            else
                              {
                                MR_Word hlds__make_hlds__add_type__Var_57;
                                MR_Word hlds__make_hlds__add_type__Var_58;
                                MR_Word hlds__make_hlds__add_type__Var_59;
                                MR_Word hlds__make_hlds__add_type__Var_60;
                                MR_Word hlds__make_hlds__add_type__Var_61;
                                MR_Word hlds__make_hlds__add_type__Var_62;
                                MR_Word hlds__make_hlds__add_type__Var_63;
                                MR_Word hlds__make_hlds__add_type__Var_64;
                                MR_Word hlds__make_hlds__add_type__Var_65;
                                MR_Word hlds__make_hlds__add_type__Var_66;

                                {
                                  hlds__make_hlds__add_type__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_57, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_47));
                                }
                                hlds__make_hlds__add_type__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 0)));
                                hlds__make_hlds__add_type__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 1)));
                                hlds__make_hlds__add_type__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 2)));
                                hlds__make_hlds__add_type__Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 3)));
                                hlds__make_hlds__add_type__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 4)));
                                hlds__make_hlds__add_type__Var_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 5)));
                                hlds__make_hlds__add_type__Var_64 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 6)))) & (MR_Integer) 1);
                                hlds__make_hlds__add_type__Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                hlds__make_hlds__add_type__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__BodyA_6, (MR_Integer) 7)));
                                {
                                  MR_Word base;
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
                                  *hlds__make_hlds__add_type__Body_8 = base;
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_58));
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_59));
                                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_60));
                                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__Var_61));
                                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__Var_62));
                                  MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__Var_63));
                                  MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__Var_64 | ((hlds__make_hlds__add_type__Var_65 << (MR_Integer) 1)))));
                                  MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__Var_57));
                                }
                              }
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
      }
    else
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__BodyA_6)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word hlds__make_hlds__add_type__Var_32 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__BodyA_6), (MR_Integer) 0);

        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__BodyB_7)) == (MR_mktag((MR_Integer) 1))))
          {
            hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_and_du_type_bodies_4_p_0(hlds__make_hlds__add_type__Globals_5, hlds__make_hlds__add_type__Var_32, hlds__make_hlds__add_type__BodyB_7, hlds__make_hlds__add_type__Body_8);
          }
        else
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__BodyB_7)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word hlds__make_hlds__add_type__ForeignTypeBody_29;
            MR_Word hlds__make_hlds__add_type__ForeignTypeBodyB_31 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__BodyB_7), (MR_Integer) 0);

            {
              hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_3_p_0(hlds__make_hlds__add_type__Var_32, hlds__make_hlds__add_type__ForeignTypeBodyB_31, &hlds__make_hlds__add_type__ForeignTypeBody_29);
            }
            if (hlds__make_hlds__add_type__succeeded)
              {
                *hlds__make_hlds__add_type__Body_8 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_29);
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
              }
          }
        else
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
      }
    else
      hlds__make_hlds__add_type__succeeded = MR_FALSE;
    return hlds__make_hlds__add_type__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
  MR_Word hlds__make_hlds__add_type__Context_13,
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 0)));
    MR_Integer hlds__make_hlds__add_type__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 1)));
    MR_Word hlds__make_hlds__add_type__Globals_19;
    MR_Word hlds__make_hlds__add_type__Target_20;
    MR_Word hlds__make_hlds__add_type__Var_69;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_type__Globals_19);
    }
    {
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_19, &hlds__make_hlds__add_type__Target_20);
    }
    {
      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_20, hlds__make_hlds__add_type__ForeignTypeBody_11, &hlds__make_hlds__add_type__Var_69);
    }
    hlds__make_hlds__add_type__succeeded = ((MR_Integer) 1 == hlds__make_hlds__add_type__Var_69);
    if (hlds__make_hlds__add_type__succeeded)
      {
        *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 0;
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
      }
    else
      {
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__PrevErrors_12 == (MR_Integer) 1);
        if (hlds__make_hlds__add_type__succeeded)
          {
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
          }
        else
          {
            MR_String hlds__make_hlds__add_type__LangStr_21 = ((&hlds__make_hlds__add_type_vector_common_5[0 + hlds__make_hlds__add_type__Target_20]))->hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
            MR_Word hlds__make_hlds__add_type__MainPieces_22;
            MR_Word hlds__make_hlds__add_type__Msg_24;
            MR_Word hlds__make_hlds__add_type__Spec_25;
            MR_Word hlds__make_hlds__add_type__Var_33;
            MR_Word hlds__make_hlds__add_type__Var_34;
            MR_Word hlds__make_hlds__add_type__Var_35;
            MR_Word hlds__make_hlds__add_type__Var_38;
            MR_Word hlds__make_hlds__add_type__Var_41;
            MR_Word hlds__make_hlds__add_type__Var_42;
            MR_Word hlds__make_hlds__add_type__Var_43;
            MR_Word hlds__make_hlds__add_type__Var_58;
            MR_Word hlds__make_hlds__add_type__Var_59;
            MR_Word hlds__make_hlds__add_type__Var_66;

            {
              hlds__make_hlds__add_type__Var_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Var_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__LangStr_21));
            }
            {
              hlds__make_hlds__add_type__Var_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_17));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_43, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_18));
            }
            {
              hlds__make_hlds__add_type__Var_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_43));
            }
            {
              hlds__make_hlds__add_type__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_42));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
            }
            {
              hlds__make_hlds__add_type__Var_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_41));
            }
            {
              hlds__make_hlds__add_type__Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[72])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_38));
            }
            {
              hlds__make_hlds__add_type__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_34));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_35));
            }
            {
              hlds__make_hlds__add_type__MainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[74])));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_33));
            }
            {
              hlds__make_hlds__add_type__Var_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__MainPieces_22));
            }
            {
              hlds__make_hlds__add_type__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_58, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_59));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[77])));
            }
            {
              hlds__make_hlds__add_type__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_13));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_58));
            }
            {
              hlds__make_hlds__add_type__Var_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_24));
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              hlds__make_hlds__add_type__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_66));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_25));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28));
            }
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
          }
      }
    *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__Var_5 = (MR_Word) hlds__make_hlds__add_type__OldStatus_3;

    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
    if (hlds__make_hlds__add_type__succeeded)
      {
        MR_Word hlds__make_hlds__add_type__Var_6;

        {
          hlds__make_hlds__add_type__Var_6 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
        }
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_6 == (MR_Integer) 0);
      }
    else
      {
        MR_Word hlds__make_hlds__add_type__Var_7 = (MR_Word) hlds__make_hlds__add_type__OldStatus_3;

        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
        if (hlds__make_hlds__add_type__succeeded)
          {
            MR_Word hlds__make_hlds__add_type__Var_8 = (MR_Word) hlds__make_hlds__add_type__NewDefnStatus_4;

            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
          }
        else
          {
            MR_Word hlds__make_hlds__add_type__Var_9;
            MR_Word hlds__make_hlds__add_type__Var_10;

            {
              hlds__make_hlds__add_type__Var_9 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus_3);
            }
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_9 == (MR_Integer) 0);
            if (hlds__make_hlds__add_type__succeeded)
              {
                {
                  hlds__make_hlds__add_type__Var_10 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
                }
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Var_10 == (MR_Integer) 0);
              }
          }
      }
    return hlds__make_hlds__add_type__succeeded;
  }
}

static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
  MR_Word hlds__make_hlds__add_type__OldBody_3,
  MR_Word hlds__make_hlds__add_type__Body_4)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__OldIsSolverType_5;

    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
      {
        MR_Word hlds__make_hlds__add_type__Details_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_9)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (MR_unmkbody(hlds__make_hlds__add_type__Details_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
                break;
            }
            break;
          case (MR_Integer) 1:
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
            break;
        }
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
      }
    else
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
      {
        hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
      }
    else
      hlds__make_hlds__add_type__succeeded = MR_FALSE;
    if (hlds__make_hlds__add_type__succeeded)
      {
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
          {
            MR_Word hlds__make_hlds__add_type__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_14)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(hlds__make_hlds__add_type__Details_14)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
                }
                break;
            }
          }
        else
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
          {
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
            hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
          }
        else
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
      }
    return hlds__make_hlds__add_type__succeeded;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
  MR_Word hlds__make_hlds__add_type__OldBody_5,
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
  MR_Word hlds__make_hlds__add_type__Body_6,
  MR_Word * hlds__make_hlds__add_type__Body_4)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;

    *hlds__make_hlds__add_type__OldBody_2 = hlds__make_hlds__add_type__OldBody_5;
    *hlds__make_hlds__add_type__Body_4 = hlds__make_hlds__add_type__Body_6;
  }
}

static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;

    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[57]);
  }
}

void MR_CALL 
hlds__make_hlds__add_type__process_type_defn_8_p_0(
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
  MR_Word hlds__make_hlds__add_type__TypeDefn_10,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64)
{
  {
    MR_bool hlds__make_hlds__add_type__succeeded;
    MR_Word hlds__make_hlds__add_type__Context_14;
    MR_Word hlds__make_hlds__add_type__TVarSet_15;
    MR_Word hlds__make_hlds__add_type__Args_16;
    MR_Word hlds__make_hlds__add_type__KindMap_17;
    MR_Word hlds__make_hlds__add_type__Body_18;
    MR_Word hlds__make_hlds__add_type__Status_19;
    MR_Word hlds__make_hlds__add_type__NeedQual_20;
    MR_Word hlds__make_hlds__add_type__Globals_21;
    MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;

    {
      hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Context_14);
    }
    {
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__TVarSet_15);
    }
    {
      hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Args_16);
    }
    {
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__KindMap_17);
    }
    {
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Body_18);
    }
    {
      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Status_19);
    }
    {
      hlds__hlds_data__get_type_defn_ctors_need_qualifier_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__NeedQual_20);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Globals_21);
    }
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_type__ForeignTypeBody_50 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__Body_18), (MR_Integer) 0);
          MR_Word hlds__make_hlds__add_type__PrevErrors_51;
          MR_Word hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52;

          {
            hlds__hlds_data__get_type_defn_prev_errors_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__PrevErrors_51);
          }
          {
            hlds__make_hlds__add_type__check_foreign_type_9_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ForeignTypeBody_50, hlds__make_hlds__add_type__PrevErrors_51, hlds__make_hlds__add_type__Context_14, &hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64);
          }
          switch (hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
              break;
            case (MR_Integer) 1:
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word hlds__make_hlds__add_type__ConsList_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)));
          MR_Word hlds__make_hlds__add_type__UserEqCmp_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 4)));
          MR_Word hlds__make_hlds__add_type__ReservedTag_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) & (MR_Integer) 1);
          MR_Word hlds__make_hlds__add_type__Ctors0_31;
          MR_Word hlds__make_hlds__add_type__PQInfo_32;
          MR_Word hlds__make_hlds__add_type__CtorFields0_33;
          MR_Word hlds__make_hlds__add_type__TypeCtorSymName_34;
          MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_37;
          MR_Word hlds__make_hlds__add_type__CtorFields_39;
          MR_Word hlds__make_hlds__add_type__Ctors_40;
          MR_Word hlds__make_hlds__add_type__CtorAddSpecs_41;
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72;
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
          MR_Word hlds__make_hlds__add_type__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 1)));
          MR_Word hlds__make_hlds__add_type__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 2)));
          MR_Word hlds__make_hlds__add_type__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 3)));
          MR_Word hlds__make_hlds__add_type___DirectArgCtors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 5)));
          MR_Word hlds__make_hlds__add_type__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
          MR_Word hlds__make_hlds__add_type__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 7)));
          MR_Integer hlds__make_hlds__add_type__Var_35;
          MR_Word hlds__make_hlds__add_type__CtorName_44;
          MR_Word hlds__make_hlds__add_type__CtorArgType_45;
          MR_Word hlds__make_hlds__add_type__Var_46;

          {
            hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Ctors0_31);
          }
          {
            hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__PQInfo_32);
          }
          {
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__CtorFields0_33);
          }
          hlds__make_hlds__add_type__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
          hlds__make_hlds__add_type__Var_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String hlds__make_hlds__add_type__Var_38;

              hlds__make_hlds__add_type__TypeCtorModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 0)));
              hlds__make_hlds__add_type__Var_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 1)));
            }
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.process_type_defn\'/8", (MR_String) "unqualified TypeCtorSymName");
                return;
              }
            }
          {
            hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__TypeCtorModuleName_37, hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Args_16, hlds__make_hlds__add_type__KindMap_17, hlds__make_hlds__add_type__NeedQual_20, hlds__make_hlds__add_type__PQInfo_32, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__CtorFields0_33, &hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__Ctors0_31, &hlds__make_hlds__add_type__Ctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_type__CtorAddSpecs_41);
          }
          {
            hlds__hlds_module__module_info_set_cons_table_3_p_0(hlds__make_hlds__add_type__Ctors_40, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72);
          }
          {
            hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73);
          }
          if ((hlds__make_hlds__add_type__CtorAddSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
            }
          else
            {
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
              {
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_type__CtorAddSpecs_41, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63);
              }
            }
          {
            hlds__make_hlds__add_type__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ReservedTag_28, hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__UserEqCmp_26, &hlds__make_hlds__add_type__CtorName_44, &hlds__make_hlds__add_type__CtorArgType_45, &hlds__make_hlds__add_type__Var_46);
          }
          if (hlds__make_hlds__add_type__succeeded)
            {
              MR_Word hlds__make_hlds__add_type__NoTagType_47;
              MR_Word hlds__make_hlds__add_type__NoTagTypes0_48;
              MR_Word hlds__make_hlds__add_type__NoTagTypes_49;

              {
                hlds__make_hlds__add_type__NoTagType_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Args_16));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorName_44));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 2) = ((MR_Box) (hlds__make_hlds__add_type__CtorArgType_45));
              }
              {
                hlds__hlds_module__module_info_get_no_tag_types_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__NoTagTypes0_48);
              }
              {
                mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_9)), ((MR_Box) (hlds__make_hlds__add_type__NoTagType_47)), hlds__make_hlds__add_type__NoTagTypes0_48, &hlds__make_hlds__add_type__NoTagTypes_49);
              }
              {
                hlds__hlds_module__module_info_set_no_tag_types_3_p_0(hlds__make_hlds__add_type__NoTagTypes_49, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76);
              }
            }
          else
            hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
        }
        break;
      case (MR_Integer) 2:
        {
          *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
              hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
            }
            break;
          case (MR_Integer) 1:
            {
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
              hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
            }
            break;
        }
        break;
    }
    switch (*hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word hlds__make_hlds__add_type__ArgTypes_57;
          MR_Word hlds__make_hlds__add_type__Type_58;
          MR_Word hlds__make_hlds__add_type__Var_77;

          {
            hlds__make_hlds__add_type__Var_77 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
          }
          {
            parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_type__Var_77, hlds__make_hlds__add_type__Args_16, &hlds__make_hlds__add_type__ArgTypes_57);
          }
          {
            parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ArgTypes_57, &hlds__make_hlds__add_type__Type_58);
          }
          {
            hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Type_58, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__Body_18, hlds__make_hlds__add_type__Context_14, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62);
          }
        }
        break;
      case (MR_Integer) 1:
        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;
        break;
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_1(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_3(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_90 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__conv0_Var_90);
    {
      hlds__make_hlds__add_type__module_add_type_defn_11_p_0_2(hlds__make_hlds__add_type__env_ptr);
    }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_4(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_5(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_321_321 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
    {
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_321_321, ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_90)), ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_319)));
    }
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
      {
        hlds__make_hlds__add_type__module_add_type_defn_11_p_0_4(hlds__make_hlds__add_type__env_ptr);
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_6(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_1) == 0)
      {
        {
          parse_tree__prog_type__type_contains_var_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__EqvType_89, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_319, hlds__make_hlds__add_type__module_add_type_defn_11_p_0_5, hlds__make_hlds__add_type__env_ptr);
        }
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_2(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    {
      hlds__make_hlds__add_type__module_add_type_defn_11_p_0_6(hlds__make_hlds__add_type__env_ptr);
    }
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded);
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
      {
        hlds__make_hlds__add_type__module_add_type_defn_11_p_0_1(hlds__make_hlds__add_type__env_ptr);
      }
  }
}

static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_7(
  void * hlds__make_hlds__add_type__env_ptr_arg)
{
  {
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_0) == 0)
      {
        {
          MR_Word hlds__make_hlds__add_type__Var_267;

          (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51)) == (MR_mktag((MR_Integer) 2)));
          if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
            {
              (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__EqvType_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, (MR_Integer) 0)));
              {
                hlds__make_hlds__add_type__Var_267 = (MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48;
                (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__Var_267 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
                if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                  {
                    mercury__list__member_2_p_1((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_315_315, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__conv0_Var_90, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14, hlds__make_hlds__add_type__module_add_type_defn_11_p_0_3, hlds__make_hlds__add_type__env_ptr);
                  }
              }
            }
        }
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_TRUE;
  }
}

void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0(
  MR_Word hlds__make_hlds__add_type__TVarSet_12,
  MR_Word hlds__make_hlds__add_type__Name_13,
  MR_Word hlds__make_hlds__add_type__Args_14,
  MR_Word hlds__make_hlds__add_type__TypeDefn_15,
  MR_Word hlds__make_hlds__add_type__Context_16,
  MR_Word hlds__make_hlds__add_type__TypeStatus0_17,
  MR_Word hlds__make_hlds__add_type__NeedQual_18,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95,
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_96,
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97)
{
  {
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s hlds__make_hlds__add_type__env;

    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14 = hlds__make_hlds__add_type__Args_14;
    {
      MR_Word hlds__make_hlds__add_type__Globals_21;
      MR_Integer hlds__make_hlds__add_type__Arity_22;
      MR_Word hlds__make_hlds__add_type__TypeCtor_23;
      MR_Word hlds__make_hlds__add_type__Body0_24;
      MR_Word hlds__make_hlds__add_type__TypeStatus1_35;
      MR_Word hlds__make_hlds__add_type__TypeTable0_45;
      MR_Word hlds__make_hlds__add_type__MaybeOldDefn_55;
      MR_Word hlds__make_hlds__add_type__KindMap_57;
      MR_Word hlds__make_hlds__add_type__TypeDefn1_58;
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_139_139;
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172;
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_316_316;
      MR_Word hlds__make_hlds__add_type__Ctors_36;
      MR_Word hlds__make_hlds__add_type__MaybeUserUC_37;
      MR_Word hlds__make_hlds__add_type__Constructor_39;
      MR_Word hlds__make_hlds__add_type__Var_100;
      MR_Word hlds__make_hlds__add_type__Var_101;
      MR_Integer hlds__make_hlds__add_type__Var_102;
      MR_Word hlds__make_hlds__add_type__Var_103;
      MR_Integer hlds__make_hlds__add_type__Var_318;
      MR_Word hlds__make_hlds__add_type___MaybeDirectArg_38;
      MR_Word hlds__make_hlds__add_type__Var_310;
      MR_Word hlds__make_hlds__add_type__Var_311;
      MR_Word hlds__make_hlds__add_type__Var_312;
      MR_Integer hlds__make_hlds__add_type__Var_313;
      MR_Word hlds__make_hlds__add_type__Var_314;
      MR_Word hlds__make_hlds__add_type__Var_40;
      MR_Word hlds__make_hlds__add_type__OldDefn0_46;
      MR_Word hlds__make_hlds__add_type__Var_59;

      {
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, &hlds__make_hlds__add_type__Globals_21);
      }
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_315_315 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
      {
        mercury__list__length_2_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_315_315, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14, &hlds__make_hlds__add_type__Arity_22);
      }
      {
        hlds__make_hlds__add_type__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_23, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_23, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
      }
      {
        hlds__make_hlds__add_type__convert_type_defn_4_p_0(hlds__make_hlds__add_type__TypeDefn_15, hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__Globals_21, &hlds__make_hlds__add_type__Body0_24);
      }
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_24)) == (MR_mktag((MR_Integer) 1))))
        {
          MR_String hlds__make_hlds__add_type__Var_98;

          {
            hlds__make_hlds__add_type__Var_98 = mercury__term__context_file_1_f_0(hlds__make_hlds__add_type__Context_16);
          }
          {
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = mercury__string__suffix_2_p_0(hlds__make_hlds__add_type__Var_98, (MR_String) ".int2");
          }
        }
      else
      if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body0_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_TRUE;
      else
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_FALSE;
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
        {
          hlds__status__type_make_status_abstract_2_p_0(hlds__make_hlds__add_type__TypeStatus0_17, &hlds__make_hlds__add_type__TypeStatus1_35);
        }
      else
        hlds__make_hlds__add_type__TypeStatus1_35 = hlds__make_hlds__add_type__TypeStatus0_17;
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeDefn_15)) == (MR_mktag((MR_Integer) 0)));
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
        {
          hlds__make_hlds__add_type__Ctors_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 0)));
          hlds__make_hlds__add_type__MaybeUserUC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 1)));
          hlds__make_hlds__add_type___MaybeDirectArg_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 2)));
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Ctors_36)) == (MR_mktag((MR_Integer) 1)));
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
            {
              hlds__make_hlds__add_type__Constructor_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_36, (MR_Integer) 0)));
              hlds__make_hlds__add_type__Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_36, (MR_Integer) 1)));
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__Var_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                {
                  hlds__make_hlds__add_type__Var_310 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 0)));
                  hlds__make_hlds__add_type__Var_311 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 1)));
                  hlds__make_hlds__add_type__Var_312 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 2)));
                  hlds__make_hlds__add_type__Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 3)));
                  hlds__make_hlds__add_type__Var_313 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 4)));
                  hlds__make_hlds__add_type__Var_314 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 5)));
                  hlds__make_hlds__add_type__Var_102 = (MR_Integer) 0;
                  hlds__make_hlds__add_type__TypeCtorInfo_316_316 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
                  {
                    mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_316_316, hlds__make_hlds__add_type__Var_101, &hlds__make_hlds__add_type__Var_318);
                  }
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__Var_102 == hlds__make_hlds__add_type__Var_318);
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                    {
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeUserUC_37)) == (MR_mktag((MR_Integer) 1)));
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                        {
                          hlds__make_hlds__add_type__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeUserUC_37, (MR_Integer) 0)));
                          {
                            hlds__make_hlds__add_type__Var_103 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_type__TypeStatus0_17);
                          }
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__Var_103 == (MR_Integer) 1);
                        }
                    }
                }
            }
        }
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
        {
          MR_Word hlds__make_hlds__add_type__DummyMainPieces_41;
          MR_Word hlds__make_hlds__add_type__DummyMsg_43;
          MR_Word hlds__make_hlds__add_type__DummySpec_44;
          MR_Word hlds__make_hlds__add_type__Var_106;
          MR_Word hlds__make_hlds__add_type__Var_107;
          MR_Word hlds__make_hlds__add_type__Var_108;
          MR_Word hlds__make_hlds__add_type__Var_129;
          MR_Word hlds__make_hlds__add_type__Var_130;
          MR_Word hlds__make_hlds__add_type__Var_137;

          {
            hlds__make_hlds__add_type__Var_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_108, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_108, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
          }
          {
            hlds__make_hlds__add_type__Var_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_107, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_108));
          }
          {
            hlds__make_hlds__add_type__Var_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_106, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_107));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[8])));
          }
          {
            hlds__make_hlds__add_type__DummyMainPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[66])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_106));
          }
          {
            hlds__make_hlds__add_type__Var_130 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_130, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMainPieces_41));
          }
          {
            hlds__make_hlds__add_type__Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_129, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_130));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_129, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[68])));
          }
          {
            hlds__make_hlds__add_type__DummyMsg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_43, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_129));
          }
          {
            hlds__make_hlds__add_type__Var_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_137, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMsg_43));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_type__DummySpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_44, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_137));
          }
          {
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_139_139, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummySpec_44));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_139_139, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_96));
          }
        }
      else
        hlds__make_hlds__add_type__STATE_VARIABLE_Specs_139_139 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_96;
      {
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, &hlds__make_hlds__add_type__TypeTable0_45);
      }
      {
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_type__TypeTable0_45, hlds__make_hlds__add_type__TypeCtor_23, &hlds__make_hlds__add_type__OldDefn0_46);
      }
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
        {
          MR_Word hlds__make_hlds__add_type__OldTypeStatus_47;
          MR_Word hlds__make_hlds__add_type__OldBody0_49;
          MR_Word hlds__make_hlds__add_type__OldBody_50;

          {
            hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn0_46, &hlds__make_hlds__add_type__OldTypeStatus_47);
          }
          {
            hlds__status__type_combine_status_3_p_0(hlds__make_hlds__add_type__TypeStatus1_35, hlds__make_hlds__add_type__OldTypeStatus_47, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48);
          }
          {
            hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn0_46, &hlds__make_hlds__add_type__OldBody0_49);
          }
          {
            hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(hlds__make_hlds__add_type__OldBody0_49, &hlds__make_hlds__add_type__OldBody_50, hlds__make_hlds__add_type__Body0_24, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51);
          }
          {
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(hlds__make_hlds__add_type__OldBody_50, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51);
          }
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
            {
              MR_Word hlds__make_hlds__add_type__SolverPieces_52;
              MR_Word hlds__make_hlds__add_type__SolverMsg_53;
              MR_Word hlds__make_hlds__add_type__SolverSpec_54;
              MR_Word hlds__make_hlds__add_type__Var_142;
              MR_Word hlds__make_hlds__add_type__Var_143;
              MR_Word hlds__make_hlds__add_type__Var_144;
              MR_Word hlds__make_hlds__add_type__Var_165;
              MR_Word hlds__make_hlds__add_type__Var_166;
              MR_Word hlds__make_hlds__add_type__Var_170;

              {
                hlds__make_hlds__add_type__Var_144 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_144, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_144, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
              }
              {
                hlds__make_hlds__add_type__Var_143 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_143, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_143, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_144));
              }
              {
                hlds__make_hlds__add_type__Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_142, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_143));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_142, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[25])));
              }
              {
                hlds__make_hlds__add_type__SolverPieces_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[69])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_142));
              }
              {
                hlds__make_hlds__add_type__Var_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_166, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverPieces_52));
              }
              {
                hlds__make_hlds__add_type__Var_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_165, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_166));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_type__SolverMsg_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_53, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_53, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_165));
              }
              {
                hlds__make_hlds__add_type__Var_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_170, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverMsg_53));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_type__SolverSpec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_54, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_170));
              }
              {
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverSpec_54));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_139_139));
              }
              hlds__make_hlds__add_type__MaybeOldDefn_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              MR_Word hlds__make_hlds__add_type__OldDefn_56;

              {
                hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_type__OldBody_50, hlds__make_hlds__add_type__OldDefn0_46, &hlds__make_hlds__add_type__OldDefn_56);
              }
              {
                hlds__make_hlds__add_type__MaybeOldDefn_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__OldDefn_56));
              }
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_139_139;
            }
        }
      else
        {
          hlds__make_hlds__add_type__MaybeOldDefn_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48 = hlds__make_hlds__add_type__TypeStatus1_35;
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51 = hlds__make_hlds__add_type__Body0_24;
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_139_139;
        }
      {
        mercury__map__init_1_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_315_315, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &hlds__make_hlds__add_type__KindMap_57);
      }
      {
        hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet_12, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14, hlds__make_hlds__add_type__KindMap_57, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, (MR_Integer) 0, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48, hlds__make_hlds__add_type__NeedQual_18, (MR_Integer) 0, hlds__make_hlds__add_type__Context_16, &hlds__make_hlds__add_type__TypeDefn1_58);
      }
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__MaybeOldDefn_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
        {
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51)) == (MR_mktag((MR_Integer) 0)));
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
            hlds__make_hlds__add_type__Var_59 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51), (MR_Integer) 0);
        }
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
        {
          MR_Word hlds__make_hlds__add_type__ForeignDeclPieces_60;
          MR_Word hlds__make_hlds__add_type__ForeignDeclMsg_61;
          MR_Word hlds__make_hlds__add_type__ForeignDeclSpec_62;
          MR_Word hlds__make_hlds__add_type__Var_177;
          MR_Word hlds__make_hlds__add_type__Var_178;
          MR_Word hlds__make_hlds__add_type__Var_179;
          MR_Word hlds__make_hlds__add_type__Var_186;
          MR_Word hlds__make_hlds__add_type__Var_187;
          MR_Word hlds__make_hlds__add_type__Var_191;

          {
            hlds__make_hlds__add_type__Var_179 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_179, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_179, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
          }
          {
            hlds__make_hlds__add_type__Var_178 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_178, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_178, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_179));
          }
          {
            hlds__make_hlds__add_type__Var_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_177, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_178));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[27])));
          }
          {
            hlds__make_hlds__add_type__ForeignDeclPieces_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[70])));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_60, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_177));
          }
          {
            hlds__make_hlds__add_type__Var_187 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_187, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclPieces_60));
          }
          {
            hlds__make_hlds__add_type__Var_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_186, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_187));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_186, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_type__ForeignDeclMsg_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_61, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_61, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_186));
          }
          {
            hlds__make_hlds__add_type__Var_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_191, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclMsg_61));
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
          {
            hlds__make_hlds__add_type__ForeignDeclSpec_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_62, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_191));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclSpec_62));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172));
          }
          *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94;
        }
      else
        {
          MR_Word hlds__make_hlds__add_type__OldDefn1_63;
          MR_Word hlds__make_hlds__add_type__OldTypeStatus1_65;
          MR_Word hlds__make_hlds__add_type__OldBody1_66;
          MR_Word hlds__make_hlds__add_type__Var_194;
          MR_Word hlds__make_hlds__add_type__Var_195;
          MR_Word hlds__make_hlds__add_type__Var_64;
          MR_Word hlds__make_hlds__add_type__Var_67;

          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51)) == (MR_mktag((MR_Integer) 0)));
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
            {
              hlds__make_hlds__add_type__Var_64 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51), (MR_Integer) 0);
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_55)) == (MR_mktag((MR_Integer) 1)));
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                {
                  hlds__make_hlds__add_type__OldDefn1_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_55, (MR_Integer) 0)));
                  {
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn1_63, &hlds__make_hlds__add_type__OldTypeStatus1_65);
                  }
                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn1_63, &hlds__make_hlds__add_type__OldBody1_66);
                  }
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody1_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_66, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                    {
                      hlds__make_hlds__add_type__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_66, (MR_Integer) 1)));
                      {
                        hlds__make_hlds__add_type__Var_194 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldTypeStatus1_65);
                      }
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__Var_194 == (MR_Integer) 0);
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                        {
                          {
                            hlds__make_hlds__add_type__Var_195 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__TypeStatus0_17);
                          }
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__Var_195 == (MR_Integer) 1);
                        }
                    }
                }
            }
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
            {
              MR_Word hlds__make_hlds__add_type__ForeignVisPieces_68;
              MR_Word hlds__make_hlds__add_type__ForeignVisMsg_69;
              MR_Word hlds__make_hlds__add_type__ForeignVisSpec_70;
              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_71;
              MR_Word hlds__make_hlds__add_type__TypeTable_72;
              MR_Word hlds__make_hlds__add_type__Var_198;
              MR_Word hlds__make_hlds__add_type__Var_201;
              MR_Word hlds__make_hlds__add_type__Var_204;
              MR_Word hlds__make_hlds__add_type__Var_205;
              MR_Word hlds__make_hlds__add_type__Var_206;
              MR_Word hlds__make_hlds__add_type__Var_216;
              MR_Word hlds__make_hlds__add_type__Var_217;
              MR_Word hlds__make_hlds__add_type__Var_221;

              {
                hlds__make_hlds__add_type__Var_206 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_206, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_206, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
              }
              {
                hlds__make_hlds__add_type__Var_205 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_205, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_205, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_206));
              }
              {
                hlds__make_hlds__add_type__Var_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_204, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_205));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[31])));
              }
              {
                hlds__make_hlds__add_type__Var_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_201, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[73])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_201, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_204));
              }
              {
                hlds__make_hlds__add_type__Var_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_198, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[72])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_198, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_201));
              }
              {
                hlds__make_hlds__add_type__ForeignVisPieces_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_68, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_198));
              }
              {
                hlds__make_hlds__add_type__Var_217 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_217, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisPieces_68));
              }
              {
                hlds__make_hlds__add_type__Var_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_216, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_217));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_type__ForeignVisMsg_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_69, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_69, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_216));
              }
              {
                hlds__make_hlds__add_type__Var_221 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_221, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisMsg_69));
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_221, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                hlds__make_hlds__add_type__ForeignVisSpec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_70, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_221));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisSpec_70));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172));
              }
              {
                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_58, &hlds__make_hlds__add_type__ErrTypeDefn_71);
              }
              {
                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__ErrTypeDefn_71, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_72);
              }
              {
                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_72, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
              }
            }
          else
            {
              MR_Word hlds__make_hlds__add_type__TVarSet2_74;
              MR_Word hlds__make_hlds__add_type__Params2_75;
              MR_Word hlds__make_hlds__add_type__KindMap2_76;
              MR_Word hlds__make_hlds__add_type__OldDefnBody2_77;
              MR_Word hlds__make_hlds__add_type__OrigContext_78;
              MR_Word hlds__make_hlds__add_type__OrigTypeStatus_79;
              MR_Word hlds__make_hlds__add_type__OrigInExportedEqv_80;
              MR_Word hlds__make_hlds__add_type__OrigNeedQual_81;
              MR_Word hlds__make_hlds__add_type__OldDefn2_73;
              MR_Word hlds__make_hlds__add_type__Var_82;

              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_55)) == (MR_mktag((MR_Integer) 1)));
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                {
                  hlds__make_hlds__add_type__OldDefn2_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_55, (MR_Integer) 0)));
                  {
                    hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__TVarSet2_74);
                  }
                  {
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__Params2_75);
                  }
                  {
                    hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__KindMap2_76);
                  }
                  {
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OldDefnBody2_77);
                  }
                  {
                    hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OrigContext_78);
                  }
                  {
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OrigTypeStatus_79);
                  }
                  {
                    hlds__hlds_data__get_type_defn_in_exported_eqv_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OrigInExportedEqv_80);
                  }
                  {
                    hlds__hlds_data__get_type_defn_ctors_need_qualifier_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OrigNeedQual_81);
                  }
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldDefnBody2_77)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldDefnBody2_77, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                    hlds__make_hlds__add_type__Var_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldDefnBody2_77, (MR_Integer) 1)));
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded);
                }
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                {
                  MR_Word hlds__make_hlds__add_type__Var_83;

                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                    {
                      hlds__make_hlds__add_type__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, (MR_Integer) 1)));
                      {
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__status____Unify____type_status_0_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48, hlds__make_hlds__add_type__OrigTypeStatus_79);
                      }
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94;
                      else
                        {
                          MR_Word hlds__make_hlds__add_type__TypeDefn3_84;
                          MR_Word hlds__make_hlds__add_type__TypeTable_292;

                          {
                            hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_74, hlds__make_hlds__add_type__Params2_75, hlds__make_hlds__add_type__KindMap2_76, hlds__make_hlds__add_type__OldDefnBody2_77, hlds__make_hlds__add_type__OrigInExportedEqv_80, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48, hlds__make_hlds__add_type__OrigNeedQual_81, (MR_Integer) 0, hlds__make_hlds__add_type__OrigContext_78, &hlds__make_hlds__add_type__TypeDefn3_84);
                          }
                          {
                            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__TypeDefn3_84, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_292);
                          }
                          {
                            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_292, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                          }
                        }
                      *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172;
                    }
                  else
                    {
                      MR_Word hlds__make_hlds__add_type__NewBody_85;

                      {
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__make_hlds__add_type__merge_maybe_foreign_type_bodies_4_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__OldDefnBody2_77, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, &hlds__make_hlds__add_type__NewBody_85);
                      }
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                        {
                          {
                            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(hlds__make_hlds__add_type__OrigTypeStatus_79, hlds__make_hlds__add_type__TypeStatus1_35);
                          }
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                            {
                              MR_Word hlds__make_hlds__add_type__TypeTable_295;
                              MR_Word hlds__make_hlds__add_type__TypeDefn3_296;

                              {
                                hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_74, hlds__make_hlds__add_type__Params2_75, hlds__make_hlds__add_type__KindMap2_76, hlds__make_hlds__add_type__NewBody_85, hlds__make_hlds__add_type__OrigInExportedEqv_80, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48, hlds__make_hlds__add_type__NeedQual_18, (MR_Integer) 0, hlds__make_hlds__add_type__Context_16, &hlds__make_hlds__add_type__TypeDefn3_296);
                              }
                              {
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__TypeDefn3_296, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_295);
                              }
                              {
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_295, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                              }
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172;
                            }
                          else
                            {
                              MR_Word hlds__make_hlds__add_type__DiffVisPieces_86;
                              MR_Word hlds__make_hlds__add_type__DiffVisMsg_87;
                              MR_Word hlds__make_hlds__add_type__DiffVisSpec_88;
                              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_230_230;
                              MR_Word hlds__make_hlds__add_type__Var_233;
                              MR_Word hlds__make_hlds__add_type__Var_234;
                              MR_Word hlds__make_hlds__add_type__Var_235;
                              MR_Word hlds__make_hlds__add_type__Var_250;
                              MR_Word hlds__make_hlds__add_type__Var_251;
                              MR_Word hlds__make_hlds__add_type__Var_255;
                              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_297;
                              MR_Word hlds__make_hlds__add_type__TypeTable_298;

                              {
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_230_230);
                              }
                              {
                                hlds__make_hlds__add_type__Var_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_235, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_235, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
                              }
                              {
                                hlds__make_hlds__add_type__Var_234 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_234, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Var_234, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_235));
                              }
                              {
                                hlds__make_hlds__add_type__Var_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_233, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_234));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[37])));
                              }
                              {
                                hlds__make_hlds__add_type__DiffVisPieces_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[69])));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_86, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_233));
                              }
                              {
                                hlds__make_hlds__add_type__Var_251 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Var_251, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisPieces_86));
                              }
                              {
                                hlds__make_hlds__add_type__Var_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_250, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_251));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_250, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                hlds__make_hlds__add_type__DiffVisMsg_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_87, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_87, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_250));
                              }
                              {
                                hlds__make_hlds__add_type__Var_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_255, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisMsg_87));
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                              }
                              {
                                hlds__make_hlds__add_type__DiffVisSpec_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_88, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_255));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = base;
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisSpec_88));
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172));
                              }
                              {
                                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_58, &hlds__make_hlds__add_type__ErrTypeDefn_297);
                              }
                              {
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__ErrTypeDefn_297, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_298);
                              }
                              {
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_298, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_230_230, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                              }
                            }
                        }
                      else
                        {
                          MR_Word hlds__make_hlds__add_type__Var_260 = (MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48;

                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__Var_260 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                            {
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172;
                              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94;
                            }
                          else
                            {
                              {
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                              }
                              {
                                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_type__Name_13, hlds__make_hlds__add_type__Arity_22, (MR_String) "type", hlds__make_hlds__add_type__Context_16, hlds__make_hlds__add_type__OrigContext_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97);
                              }
                            }
                        }
                    }
                }
              else
                {
                  MR_Word hlds__make_hlds__add_type__TypeTable_307;

                  {
                    hlds__hlds_data__add_or_replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__TypeDefn1_58, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_307);
                  }
                  {
                    hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_307, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                  }
                  {
                    hlds__make_hlds__add_type__module_add_type_defn_11_p_0_7(&hlds__make_hlds__add_type__env);
                  }
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
                    {
                      MR_Word hlds__make_hlds__add_type__PolyEqvMsg_92;
                      MR_Word hlds__make_hlds__add_type__PolyEqvSpec_93;
                      MR_Word hlds__make_hlds__add_type__Var_280;
                      MR_Word hlds__make_hlds__add_type__Var_282;
                      MR_Word hlds__make_hlds__add_type__Var_283;
                      MR_Word hlds__make_hlds__add_type__Var_285;
                      MR_Word hlds__make_hlds__add_type__Var_289;

                      {
                        hlds__make_hlds__add_type__Var_285 = hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0();
                      }
                      {
                        hlds__make_hlds__add_type__Var_283 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Var_283, 0) = ((MR_Box) ((MR_Integer) 1));
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Var_283, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_285));
                      }
                      {
                        hlds__make_hlds__add_type__Var_282 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_282, 0) = ((MR_Box) (hlds__make_hlds__add_type__Var_283));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_282, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__add_type__Var_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_280, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0]));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_280, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_282));
                      }
                      {
                        hlds__make_hlds__add_type__PolyEqvMsg_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_92, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_92, 1) = ((MR_Box) (hlds__make_hlds__add_type__Var_280));
                      }
                      {
                        hlds__make_hlds__add_type__Var_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_289, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvMsg_92));
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Var_289, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      {
                        hlds__make_hlds__add_type__PolyEqvSpec_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_93, 2) = ((MR_Box) (hlds__make_hlds__add_type__Var_289));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvSpec_93));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172));
                      }
                    }
                  else
                    *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_172_172;
                }
            }
        }
    }
  }
}

void mercury__hlds__make_hlds__add_type__init(void)
{
}

void mercury__hlds__make_hlds__add_type__init_type_tables(void)
{
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

/* :- end_module hlds.make_hlds.add_type. */
