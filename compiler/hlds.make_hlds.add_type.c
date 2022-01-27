/*
** Automatically generated from `add_type.m'
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


/* :- module hlds.make_hlds.add_type. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__add_type__init
ENDINIT
*/

#include "hlds.make_hlds.add_type.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
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
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "hlds.vartypes.mih"
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
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
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



#line 733 "add_type.m"
struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
#line 742 "add_type.m"
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
#line 759 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
#line 761 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
#line 761 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98;
#line 761 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118;
#line 761 "add_type.m"
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98;
#line 733 "add_type.m"
};

#line 35 "add_type.m"
struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s {
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13;
#line 80 "add_type.m"
  MR_bool hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded;
#line 80 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297;
#line 80 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47;
#line 80 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50;
#line 282 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0;
#line 282 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90;
#line 282 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91;
#line 284 "add_type.m"
  MR_Box hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91;
#line 285 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1;
#line 285 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303;
#line 285 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_301_301;
#line 35 "add_type.m"
};


#line 200 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 203 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

#line 206 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 209 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 800 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__800__1_1_f_0(
#line 800 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94);

#line 892 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 892 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 892 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 892 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 892 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 892 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);

#line 888 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 888 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 888 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 888 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 888 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 836 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 836 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 836 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41);

#line 814 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 814 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 814 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 814 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11);

#line 805 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 805 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 805 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 805 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 805 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 805 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 805 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15);

#line 800 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 800 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 800 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1);

#line 791 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 791 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 791 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 791 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 791 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 761 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 761 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 761 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 761 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 761 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 761 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 761 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 761 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 733 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 733 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 733 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 733 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);

#line 714 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 714 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 714 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 714 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15);

#line 657 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 657 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 657 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 657 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 657 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4);

#line 532 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 532 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 532 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 532 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6);

#line 501 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 501 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 501 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 501 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 501 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 501 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5);

#line 458 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_13,
#line 458 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
#line 458 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
#line 458 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29);

#line 360 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 360 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 360 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4);

#line 331 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 331 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 331 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4);

#line 324 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 324 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 324 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 324 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 324 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4);

#line 302 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void);

#line 282 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(
#line 282 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 284 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3(
#line 284 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 285 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(
#line 285 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 285 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5(
#line 285 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 285 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(
#line 285 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 282 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(
#line 282 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 282 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(
#line 282 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[79][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][8];


#line 477 "add_type.m"
/* sealed */ struct hlds__make_hlds__add_type__vector_common_type_5_0_s {
#line 477 "add_type.m"
  const MR_String hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
#line 477 "add_type.m"
};

static /* final */ const struct hlds__make_hlds__add_type__vector_common_type_5_0_s hlds__make_hlds__add_type_vector_common_5[5];



static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[79][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "or comparison."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "is not allowed to have user-defined equality"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "cannot have user-defined equality or comparison."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "consists of a single zero-arity constructor"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Discriminated unions whose body"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "annotations"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[16]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "consistent"))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[18]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[17])))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: all definitions of a type must have"))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[20]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[19])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[21])))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[22])))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must have the same visibility."))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error: all definitions of a type"))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[28]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[27])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[23]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[30])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "exported as abstract type."))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "with monomorphic definition,"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "polymorphic equivalence type,"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[37])))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(There\'s no performance penalty for this -- the compiler will"))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A better work-around is to use a \"wrapper\" type, with just one"))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "type by putting the type definition in the interface section."))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A quick work-around is to just export the type as a concrete,"))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[50]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[49])))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[52]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[25])))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[54]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[25])))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[56]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[55])))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[58]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[25])))
  },
  /* row 60 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[13])))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[61]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In definition of type"))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: type "))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "defined as foreign_type without being declared."))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[65]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: pragma foreign_type "))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "must have the same visibility as the type declaration."))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[68]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: no"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 14)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 72 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 73 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[57])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Error: field"))
  },
  /* row 78 */
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
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[1])),
    ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[39])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
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

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][8] = {
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


static /* final */ const struct hlds__make_hlds__add_type__vector_common_type_5_0_s hlds__make_hlds__add_type_vector_common_5[5] = {
  /* row 0 */   {     (MR_String) "C" },
  /* row 1 */   {     (MR_String) "IL" },
  /* row 2 */   {     (MR_String) "C#" },
  /* row 3 */   {     (MR_String) "Java" },
  /* row 4 */   {     (MR_String) "Erlang" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1072 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1080 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0
  }
};

#line 1088 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 1096 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 800 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__800__1_1_f_0(
#line 800 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94)
#line 800 "add_type.m"
{
#line 800 "add_type.m"
  {
#line 800 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 800 "add_type.m"
    MR_Word hlds__make_hlds__add_type__HeadVar__2_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 0)));
#line 800 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 1)));
#line 800 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 2)));
#line 800 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 3)));

#line 800 "add_type.m"
    return hlds__make_hlds__add_type__HeadVar__2_95;
#line 800 "add_type.m"
  }
#line 800 "add_type.m"
}

#line 892 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 892 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 892 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 892 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 892 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 892 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11)
#line 892 "add_type.m"
{
#line 895 "add_type.m"
  {
#line 895 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 895 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_12_12;

#line 896 "add_type.m"
    {
#line 896 "add_type.m"
      hlds__make_hlds__add_type__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleName_8));
#line 896 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldName_6));
#line 896 "add_type.m"
    }
#line 896 "add_type.m"
    {
#line 896 "add_type.m"
      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_12_12)), ((MR_Box) (hlds__make_hlds__add_type__FieldNameDefn_7)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);
#line 896 "add_type.m"
      return;
    }
#line 895 "add_type.m"
  }
#line 892 "add_type.m"
}

#line 888 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 888 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 888 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 888 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 888 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 888 "add_type.m"
{
#line 888 "add_type.m"
  {
#line 888 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 888 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11;

#line 888 "add_type.m"
    {
#line 888 "add_type.m"
      hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11);
    }
#line 888 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11));
#line 888 "add_type.m"
  }
#line 888 "add_type.m"
}

#line 836 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 836 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 836 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 836 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41)
#line 836 "add_type.m"
{
#line 842 "add_type.m"
  {
#line 842 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 842 "add_type.m"
    MR_Word hlds__make_hlds__add_type__FieldModule_17;
#line 874 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConflictingDefns_19;
#line 854 "add_type.m"
    MR_Box hlds__make_hlds__add_type__conv0_ConflictingDefns_19;

#line 846 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__FieldName_9)) == (MR_mktag((MR_Integer) 1))))
#line 844 "add_type.m"
      {
#line 844 "add_type.m"
        MR_String hlds__make_hlds__add_type__V_16_16;

#line 844 "add_type.m"
        hlds__make_hlds__add_type__FieldModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 0)));
#line 844 "add_type.m"
        hlds__make_hlds__add_type__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 1)));
#line 844 "add_type.m"
      }
#line 846 "add_type.m"
    else
#line 847 "add_type.m"
      {
#line 848 "add_type.m"
        {
#line 848 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
#line 848 "add_type.m"
          return;
        }
#line 847 "add_type.m"
      }
#line 854 "add_type.m"
    {
#line 854 "add_type.m"
      hlds__make_hlds__add_type__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[3], hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (hlds__make_hlds__add_type__FieldName_9)), &hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
    }
#line 854 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 854 "add_type.m"
      {
#line 854 "add_type.m"
        hlds__make_hlds__add_type__ConflictingDefns_19 = ((MR_Word) hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
#line 854 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 854 "add_type.m"
      }
#line 874 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 859 "add_type.m"
      {
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__OrigContext_21;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Context_26;
#line 859 "add_type.m"
        MR_String hlds__make_hlds__add_type__FieldString_31;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Pieces_32;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__HereMsg_33;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevPieces_34;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevMsg_35;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_36;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_59_59;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_60_60;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_64_64;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_72_72;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_73_73;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_77_77;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_78_78;
#line 857 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConflictingDefn_20;
#line 855 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_45_45;
#line 863 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_27_27;
#line 863 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_28_28;
#line 863 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29;
#line 863 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_30_30;

#line 855 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__ConflictingDefns_19)) == (MR_mktag((MR_Integer) 1)));
#line 855 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 855 "add_type.m"
          {
#line 855 "add_type.m"
            hlds__make_hlds__add_type__ConflictingDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 0)));
#line 855 "add_type.m"
            hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 1)));
#line 855 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 855 "add_type.m"
          }
#line 857 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 856 "add_type.m"
          {
#line 856 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_22_22;
#line 856 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_23_23;
#line 856 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_24_24;
#line 856 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_25_25;

#line 856 "add_type.m"
            hlds__make_hlds__add_type__OrigContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 0)));
#line 856 "add_type.m"
            hlds__make_hlds__add_type__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 1)));
#line 856 "add_type.m"
            hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 2)));
#line 856 "add_type.m"
            hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 3)));
#line 856 "add_type.m"
            hlds__make_hlds__add_type__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 4)));
#line 856 "add_type.m"
          }
#line 857 "add_type.m"
        else
#line 858 "add_type.m"
          {
#line 858 "add_type.m"
            {
#line 858 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
#line 858 "add_type.m"
              return;
            }
#line 858 "add_type.m"
          }
#line 863 "add_type.m"
        hlds__make_hlds__add_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 0)));
#line 863 "add_type.m"
        hlds__make_hlds__add_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 1)));
#line 863 "add_type.m"
        hlds__make_hlds__add_type__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 2)));
#line 863 "add_type.m"
        hlds__make_hlds__add_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 3)));
#line 863 "add_type.m"
        hlds__make_hlds__add_type__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 4)));
#line 864 "add_type.m"
        {
#line 864 "add_type.m"
          hlds__make_hlds__add_type__FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 865 "add_type.m"
        {
#line 865 "add_type.m"
          hlds__make_hlds__add_type__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldString_31));
#line 865 "add_type.m"
        }
#line 865 "add_type.m"
        {
#line 865 "add_type.m"
          hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 865 "add_type.m"
        }
#line 865 "add_type.m"
        {
#line 865 "add_type.m"
          hlds__make_hlds__add_type__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[77])));
#line 865 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 865 "add_type.m"
        }
#line 867 "add_type.m"
        {
#line 867 "add_type.m"
          hlds__make_hlds__add_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_32));
#line 867 "add_type.m"
        }
#line 867 "add_type.m"
        {
#line 867 "add_type.m"
          hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_60_60));
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 867 "add_type.m"
        }
#line 867 "add_type.m"
        {
#line 867 "add_type.m"
          hlds__make_hlds__add_type__HereMsg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_26));
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 867 "add_type.m"
        }
#line 869 "add_type.m"
        {
#line 869 "add_type.m"
          hlds__make_hlds__add_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[53])));
#line 869 "add_type.m"
        }
#line 868 "add_type.m"
        {
#line 868 "add_type.m"
          hlds__make_hlds__add_type__PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[78])));
#line 868 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_64_64));
#line 868 "add_type.m"
        }
#line 870 "add_type.m"
        {
#line 870 "add_type.m"
          hlds__make_hlds__add_type__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevPieces_34));
#line 870 "add_type.m"
        }
#line 870 "add_type.m"
        {
#line 870 "add_type.m"
          hlds__make_hlds__add_type__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_73_73));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 870 "add_type.m"
        }
#line 870 "add_type.m"
        {
#line 870 "add_type.m"
          hlds__make_hlds__add_type__PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__OrigContext_21));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_72_72));
#line 870 "add_type.m"
        }
#line 872 "add_type.m"
        {
#line 872 "add_type.m"
          hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevMsg_35));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "add_type.m"
        }
#line 872 "add_type.m"
        {
#line 872 "add_type.m"
          hlds__make_hlds__add_type__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_type__HereMsg_33));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 872 "add_type.m"
        }
#line 871 "add_type.m"
        {
#line 871 "add_type.m"
          hlds__make_hlds__add_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_77_77));
#line 871 "add_type.m"
        }
#line 873 "add_type.m"
        {
#line 873 "add_type.m"
          MR_Word base;
#line 873 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = base;
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_36));
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40));
#line 873 "add_type.m"
        }
#line 859 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 859 "add_type.m"
      }
#line 874 "add_type.m"
    else
#line 875 "add_type.m"
      {
#line 875 "add_type.m"
        MR_String hlds__make_hlds__add_type__UnqualFieldName_37;
#line 875 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82;
#line 875 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_83_83;
#line 875 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_84_84;
#line 888 "add_type.m"
        MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39;

#line 875 "add_type.m"
        {
#line 875 "add_type.m"
          hlds__make_hlds__add_type__UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 883 "add_type.m"
#line 883 "add_type.m"
        switch (hlds__make_hlds__add_type__NeedQual_11) {
#line 883 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 883 "add_type.m"
          case (MR_Integer) 1:
#line 880 "add_type.m"
            {
#line 880 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_81_81;

#line 881 "add_type.m"
              {
#line 881 "add_type.m"
                hlds__make_hlds__add_type__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 881 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 881 "add_type.m"
              }
#line 881 "add_type.m"
              {
#line 881 "add_type.m"
                mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_81_81)), ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82);
              }
#line 880 "add_type.m"
            }
#line 883 "add_type.m"
            break;
#line 883 "add_type.m"
          case (MR_Integer) 0:
#line 884 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 883 "add_type.m"
            break;
#line 883 "add_type.m"
        }
#line 888 "add_type.m"
        {
#line 888 "add_type.m"
          hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 888 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[0]));
#line 888 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
#line 888 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 888 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 3) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 888 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10));
#line 888 "add_type.m"
        }
#line 889 "add_type.m"
        {
#line 889 "add_type.m"
          hlds__make_hlds__add_type__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 889 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldModule_17));
#line 889 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_type__PartialQuals_12));
#line 889 "add_type.m"
        }
#line 888 "add_type.m"
        {
#line 888 "add_type.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[0], hlds__make_hlds__add_type__V_83_83, hlds__make_hlds__add_type__V_84_84, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        }
#line 888 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
#line 875 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40;
#line 875 "add_type.m"
      }
#line 842 "add_type.m"
  }
#line 836 "add_type.m"
}

#line 814 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 814 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 814 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 814 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 814 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11)
#line 814 "add_type.m"
{
#line 820 "add_type.m"
  while (MR_TRUE)
#line 820 "add_type.m"
    {
#line 820 "add_type.m"
      /* tailcall optimized into a loop */
#line 820 "add_type.m"
      {
#line 820 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 820 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 820 "add_type.m"
          {
#line 820 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 820 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 820 "add_type.m"
          }
#line 820 "add_type.m"
        else
#line 823 "add_type.m"
          {
#line 823 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 823 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 823 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 823 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;
#line 823 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_44_44;

#line 830 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCtorFieldName_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 831 "add_type.m"
              {
#line 831 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 831 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 831 "add_type.m"
              }
#line 830 "add_type.m"
            else
#line 825 "add_type.m"
              {
#line 825 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldName_34;
#line 825 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldNameContext_35;
#line 825 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldDefn_36;
#line 825 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeCtorFieldName_24, (MR_Integer) 0)));

#line 825 "add_type.m"
                hlds__make_hlds__add_type__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 0)));
#line 825 "add_type.m"
                hlds__make_hlds__add_type__FieldNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 1)));
#line 826 "add_type.m"
                {
#line 826 "add_type.m"
                  hlds__make_hlds__add_type__FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 826 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldNameContext_35));
#line 826 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__ImportStatus_6));
#line 826 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_4));
#line 826 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 3) = ((MR_Box) (hlds__make_hlds__add_type__ConsId_5));
#line 826 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldNumber_7));
#line 826 "add_type.m"
                }
#line 828 "add_type.m"
                {
#line 828 "add_type.m"
                  hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(hlds__make_hlds__add_type__FieldName_34, hlds__make_hlds__add_type__FieldDefn_36, hlds__make_hlds__add_type__NeedQual_2, hlds__make_hlds__add_type__PartialQuals_3, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43);
                }
#line 825 "add_type.m"
              }
#line 834 "add_type.m"
            hlds__make_hlds__add_type__V_44_44 = (hlds__make_hlds__add_type__FieldNumber_7 + (MR_Integer) 1);
#line 833 "add_type.m"
            /* direct tailcall eliminated */
#line 833 "add_type.m"
            {
#line 833 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__MaybeCtorFieldNames_25;
#line 833 "add_type.m"
              MR_Integer hlds__make_hlds__add_type__FieldNumber__tmp_copy_7 = hlds__make_hlds__add_type__V_44_44;
#line 833 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 833 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;

#line 833 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 833 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8;
#line 833 "add_type.m"
              hlds__make_hlds__add_type__FieldNumber_7 = hlds__make_hlds__add_type__FieldNumber__tmp_copy_7;
#line 833 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 833 "add_type.m"
            }
#line 833 "add_type.m"
            continue;
#line 823 "add_type.m"
          }
#line 820 "add_type.m"
      }
#line 820 "add_type.m"
      break;
#line 820 "add_type.m"
    }
#line 814 "add_type.m"
}

#line 805 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 805 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 805 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 805 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 805 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 805 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 805 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15)
#line 805 "add_type.m"
{
#line 808 "add_type.m"
  {
#line 808 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 808 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdA_12;
#line 808 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdB_13;
#line 808 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_16_16;
#line 808 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_18_18;
#line 808 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_20_20;

#line 809 "add_type.m"
    {
#line 809 "add_type.m"
      hlds__make_hlds__add_type__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 809 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleQual_10));
#line 809 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_type__ConsName_8));
#line 809 "add_type.m"
    }
#line 809 "add_type.m"
    {
#line 809 "add_type.m"
      hlds__make_hlds__add_type__ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 809 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 809 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 809 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 809 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 3) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_7));
#line 809 "add_type.m"
    }
#line 811 "add_type.m"
    {
#line 811 "add_type.m"
      hlds__make_hlds__add_type__V_18_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 810 "add_type.m"
    {
#line 810 "add_type.m"
      hlds__make_hlds__add_type__ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_18_18));
#line 810 "add_type.m"
    }
#line 812 "add_type.m"
    {
#line 812 "add_type.m"
      hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdB_13));
#line 812 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14));
#line 812 "add_type.m"
    }
#line 812 "add_type.m"
    {
#line 812 "add_type.m"
      MR_Word base;
#line 812 "add_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 812 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15 = base;
#line 812 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdA_12));
#line 812 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 812 "add_type.m"
    }
#line 808 "add_type.m"
  }
#line 805 "add_type.m"
}

#line 800 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 800 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 800 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1)
#line 800 "add_type.m"
{
#line 800 "add_type.m"
  {
#line 800 "add_type.m"
    MR_Box hlds__make_hlds__add_type__wrapper_arg_2;
#line 800 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 800 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv3_HeadVar__2_95;

#line 800 "add_type.m"
    {
#line 800 "add_type.m"
      hlds__make_hlds__add_type__conv3_HeadVar__2_95 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__800__1_1_f_0(((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1));
    }
#line 800 "add_type.m"
    hlds__make_hlds__add_type__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_type__conv3_HeadVar__2_95));
#line 800 "add_type.m"
    return hlds__make_hlds__add_type__wrapper_arg_2;
#line 800 "add_type.m"
  }
#line 800 "add_type.m"
}

#line 791 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 791 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 791 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 791 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 791 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 791 "add_type.m"
{
#line 791 "add_type.m"
  {
#line 791 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 791 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15;

#line 791 "add_type.m"
    {
#line 791 "add_type.m"
      hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15);
    }
#line 791 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15));
#line 791 "add_type.m"
  }
#line 791 "add_type.m"
}

#line 761 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 761 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 761 "add_type.m"
{
#line 761 "add_type.m"
  {
#line 761 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 761 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
#line 761 "add_type.m"
  }
#line 761 "add_type.m"
}

#line 761 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 761 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 761 "add_type.m"
{
#line 761 "add_type.m"
  {
#line 761 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 761 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98);
#line 761 "add_type.m"
    {
#line 761 "add_type.m"
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 761 "add_type.m"
      return;
    }
#line 761 "add_type.m"
  }
#line 761 "add_type.m"
}

#line 761 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 761 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 761 "add_type.m"
{
#line 761 "add_type.m"
  {
#line 761 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 761 "add_type.m"
    {
#line 762 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_100_100;
#line 762 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 762 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 762 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 762 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 762 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_105_105;
#line 762 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_106_106;

#line 762 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 0)));
#line 762 "add_type.m"
      hlds__make_hlds__add_type__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 1)));
#line 762 "add_type.m"
      hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 2)));
#line 762 "add_type.m"
      hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 3)));
#line 762 "add_type.m"
      hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 4)));
#line 762 "add_type.m"
      hlds__make_hlds__add_type__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 5)));
#line 762 "add_type.m"
      hlds__make_hlds__add_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 6)));
#line 762 "add_type.m"
      hlds__make_hlds__add_type__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 7)));
#line 762 "add_type.m"
      {
#line 762 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118);
      }
#line 762 "add_type.m"
      if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 762 "add_type.m"
        {
#line 762 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 762 "add_type.m"
          return;
        }
#line 761 "add_type.m"
    }
#line 761 "add_type.m"
  }
#line 761 "add_type.m"
}

#line 761 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 761 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 761 "add_type.m"
{
#line 761 "add_type.m"
  {
#line 761 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 761 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
#line 761 "add_type.m"
      {
#line 761 "add_type.m"
        {
#line 761 "add_type.m"
          {
#line 761 "add_type.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, hlds__make_hlds__add_type__env_ptr);
          }
#line 761 "add_type.m"
        }
#line 761 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
#line 761 "add_type.m"
      }
#line 761 "add_type.m"
    else
#line 761 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
#line 761 "add_type.m"
  }
#line 761 "add_type.m"
}

#line 733 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 733 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 733 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 733 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 733 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60)
#line 733 "add_type.m"
{
#line 733 "add_type.m"
  {
#line 733 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 733 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = hlds__make_hlds__add_type__TypeCtor_17;
#line 742 "add_type.m"
    {
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 0)));
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 1)));
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 2)));
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 3)));
#line 742 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 4)));
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 5)));
#line 742 "add_type.m"
      MR_String hlds__make_hlds__add_type__BaseName_34;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedName_35;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedName_36;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdA_37;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdB_38;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdA_39;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdB_40;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ConsDefn_41;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__PartialQuals_42;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__FieldNames_52;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_61_61;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_62_62;
#line 742 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85;

#line 744 "add_type.m"
      {
#line 744 "add_type.m"
        hlds__make_hlds__add_type__BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__Name_30);
      }
#line 745 "add_type.m"
      {
#line 745 "add_type.m"
        hlds__make_hlds__add_type__QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 745 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorModuleName_18));
#line 745 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 745 "add_type.m"
      }
#line 746 "add_type.m"
      {
#line 746 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 746 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__UnqualifiedName_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 746 "add_type.m"
      }
#line 747 "add_type.m"
      {
#line 747 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 747 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 747 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 747 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 747 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 747 "add_type.m"
      }
#line 748 "add_type.m"
      {
#line 748 "add_type.m"
        hlds__make_hlds__add_type__V_61_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 748 "add_type.m"
      {
#line 748 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_61_61));
#line 748 "add_type.m"
      }
#line 749 "add_type.m"
      {
#line 749 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 749 "add_type.m"
      }
#line 750 "add_type.m"
      {
#line 750 "add_type.m"
        hlds__make_hlds__add_type__V_62_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 750 "add_type.m"
      {
#line 750 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_62_62));
#line 750 "add_type.m"
      }
#line 752 "add_type.m"
      {
#line 752 "add_type.m"
        hlds__make_hlds__add_type__ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 0) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__TVarSet_19));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeParams_20));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 3) = ((MR_Box) (hlds__make_hlds__add_type__KindMap_21));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 4) = ((MR_Box) (hlds__make_hlds__add_type__ExistQVars_28));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 5) = ((MR_Box) (hlds__make_hlds__add_type__Constraints_29));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 6) = ((MR_Box) (hlds__make_hlds__add_type__Args_31));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 7) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 752 "add_type.m"
      }
#line 754 "add_type.m"
      {
#line 754 "add_type.m"
        parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__make_hlds__add_type__TypeCtorModuleName_18, hlds__make_hlds__add_type__PQInfo_23, &hlds__make_hlds__add_type__PartialQuals_42);
      }
#line 759 "add_type.m"
      {
#line 759 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_3_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__QualifiedConsIdA_37, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
      }
#line 759 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 761 "add_type.m"
        {
#line 761 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&hlds__make_hlds__add_type__env);
        }
#line 773 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 765 "add_type.m"
        {
#line 765 "add_type.m"
          MR_String hlds__make_hlds__add_type__QualifiedConsIdStr_45;
#line 765 "add_type.m"
          MR_String hlds__make_hlds__add_type__TypeCtorStr_46;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Pieces_47;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Msg_48;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Spec_49;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_65_65;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_67_67;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_70_70;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_71_71;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_78_78;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_79_79;
#line 765 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_83_83;

#line 765 "add_type.m"
          {
#line 765 "add_type.m"
            hlds__make_hlds__add_type__QualifiedConsIdStr_45 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__make_hlds__add_type__QualifiedConsIdA_37);
          }
#line 766 "add_type.m"
          {
#line 766 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorStr_46 = parse_tree__prog_out__type_ctor_to_string_1_f_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
          }
#line 767 "add_type.m"
          {
#line 767 "add_type.m"
            hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 767 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdStr_45));
#line 767 "add_type.m"
          }
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            hlds__make_hlds__add_type__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorStr_46));
#line 768 "add_type.m"
          }
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            hlds__make_hlds__add_type__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_71_71));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 768 "add_type.m"
          }
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            hlds__make_hlds__add_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[76])));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_70_70));
#line 768 "add_type.m"
          }
#line 767 "add_type.m"
          {
#line 767 "add_type.m"
            hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 767 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_67_67));
#line 767 "add_type.m"
          }
#line 767 "add_type.m"
          {
#line 767 "add_type.m"
            hlds__make_hlds__add_type__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
#line 767 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 767 "add_type.m"
          }
#line 770 "add_type.m"
          {
#line 770 "add_type.m"
            hlds__make_hlds__add_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_47));
#line 770 "add_type.m"
          }
#line 770 "add_type.m"
          {
#line 770 "add_type.m"
            hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_79_79));
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "add_type.m"
          }
#line 770 "add_type.m"
          {
#line 770 "add_type.m"
            hlds__make_hlds__add_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 770 "add_type.m"
          }
#line 771 "add_type.m"
          {
#line 771 "add_type.m"
            hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_48));
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "add_type.m"
          }
#line 771 "add_type.m"
          {
#line 771 "add_type.m"
            hlds__make_hlds__add_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_83_83));
#line 771 "add_type.m"
          }
#line 772 "add_type.m"
          {
#line 772 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_49));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59));
#line 772 "add_type.m"
          }
#line 765 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57;
#line 765 "add_type.m"
        }
#line 773 "add_type.m"
      else
#line 774 "add_type.m"
        {
#line 774 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 774 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88;
#line 774 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_90_90;
#line 774 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91;
#line 791 "add_type.m"
          MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91;

#line 778 "add_type.m"
          {
#line 778 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 778 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdB_38));
#line 778 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 778 "add_type.m"
          }
#line 786 "add_type.m"
#line 786 "add_type.m"
          switch (hlds__make_hlds__add_type__NeedQual_22) {
#line 786 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 786 "add_type.m"
            case (MR_Integer) 1:
#line 783 "add_type.m"
              {
#line 783 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_89_89;

#line 785 "add_type.m"
                {
#line 785 "add_type.m"
                  hlds__make_hlds__add_type__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdB_40));
#line 785 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86));
#line 785 "add_type.m"
                }
#line 785 "add_type.m"
                {
#line 785 "add_type.m"
                  hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 785 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdA_39));
#line 785 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_89_89));
#line 785 "add_type.m"
                }
#line 783 "add_type.m"
              }
#line 786 "add_type.m"
              break;
#line 786 "add_type.m"
            case (MR_Integer) 0:
#line 787 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 786 "add_type.m"
              break;
#line 786 "add_type.m"
          }
#line 791 "add_type.m"
          {
#line 791 "add_type.m"
            hlds__make_hlds__add_type__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 791 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
#line 791 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
#line 791 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 791 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 791 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 4) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 791 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 5) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 791 "add_type.m"
          }
#line 791 "add_type.m"
          {
#line 791 "add_type.m"
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[1], hlds__make_hlds__add_type__V_90_90, hlds__make_hlds__add_type__PartialQuals_42, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
          }
#line 791 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
#line 795 "add_type.m"
          {
#line 795 "add_type.m"
            hlds__hlds_data__insert_into_cons_table_5_p_0(hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91, hlds__make_hlds__add_type__ConsDefn_41, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58);
          }
#line 774 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59;
#line 774 "add_type.m"
        }
#line 800 "add_type.m"
      {
#line 800 "add_type.m"
        hlds__make_hlds__add_type__FieldNames_52 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[2], (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[1], hlds__make_hlds__add_type__Args_31);
      }
#line 802 "add_type.m"
      {
#line 802 "add_type.m"
        hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(hlds__make_hlds__add_type__FieldNames_52, hlds__make_hlds__add_type__NeedQual_22, hlds__make_hlds__add_type__PartialQuals_42, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__ImportStatus_24, (MR_Integer) 1, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);
#line 802 "add_type.m"
        return;
      }
#line 742 "add_type.m"
    }
#line 733 "add_type.m"
  }
#line 733 "add_type.m"
}

#line 714 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 714 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 714 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 714 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 714 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15)
#line 714 "add_type.m"
{
#line 721 "add_type.m"
  while (MR_TRUE)
#line 721 "add_type.m"
    {
#line 721 "add_type.m"
      /* tailcall optimized into a loop */
#line 721 "add_type.m"
      {
#line 721 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 721 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "add_type.m"
          {
#line 722 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14;
#line 722 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12;
#line 722 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10;
#line 721 "add_type.m"
          }
#line 721 "add_type.m"
        else
#line 725 "add_type.m"
          {
#line 725 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 725 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 725 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 725 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 725 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 726 "add_type.m"
            {
#line 726 "add_type.m"
              hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(hlds__make_hlds__add_type__Ctor_33, hlds__make_hlds__add_type__TypeCtor_2, hlds__make_hlds__add_type__TypeCtorModuleName_3, hlds__make_hlds__add_type__TVarSet_4, hlds__make_hlds__add_type__TypeParams_5, hlds__make_hlds__add_type__KindMap_6, hlds__make_hlds__add_type__NeedQual_7, hlds__make_hlds__add_type__PQInfo_8, hlds__make_hlds__add_type__ImportStatus_9, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12, &hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54);
            }
#line 729 "add_type.m"
            /* direct tailcall eliminated */
#line 729 "add_type.m"
            {
#line 729 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__Ctors_34;
#line 729 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 729 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 729 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 729 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14;
#line 729 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12;
#line 729 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10;
#line 729 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 729 "add_type.m"
            }
#line 729 "add_type.m"
            continue;
#line 725 "add_type.m"
          }
#line 721 "add_type.m"
      }
#line 721 "add_type.m"
      break;
#line 721 "add_type.m"
    }
#line 714 "add_type.m"
}

#line 657 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 657 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 657 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 657 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 657 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4)
#line 657 "add_type.m"
{
#line 661 "add_type.m"
  {
#line 661 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 661 "add_type.m"
#line 661 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) {
#line 661 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 661 "add_type.m"
      case (MR_Integer) 0:
#line 661 "add_type.m"
        {
#line 661 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 661 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 661 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeDirectArgCtors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 661 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorTagMap_12;
#line 661 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedAddr_13;
#line 661 "add_type.m"
          MR_Word hlds__make_hlds__add_type__IsEnum_14;
#line 661 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CheaperTagTest_16;

#line 669 "add_type.m"
          {
#line 669 "add_type.m"
            hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_type__Body_5, hlds__make_hlds__add_type__MaybeUserEqComp_6, hlds__make_hlds__add_type__TypeCtor_2, (MR_Integer) 1, hlds__make_hlds__add_type__Globals_3, &hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__ReservedAddr_13, &hlds__make_hlds__add_type__IsEnum_14);
          }
#line 672 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__ReservedAddr_13 == (MR_Integer) 1);
#line 674 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 673 "add_type.m"
            {
#line 673 "add_type.m"
              hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__CheaperTagTest_16);
            }
#line 674 "add_type.m"
          else
#line 675 "add_type.m"
            hlds__make_hlds__add_type__CheaperTagTest_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 677 "add_type.m"
          {
#line 677 "add_type.m"
            MR_Word base;
#line 677 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 677 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_5));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorTagMap_12));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__CheaperTagTest_16));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__IsEnum_14));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_6));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__MaybeDirectArgCtors_7));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__make_hlds__add_type__ReservedAddr_13 << (MR_Integer) 1)))));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "add_type.m"
          }
#line 661 "add_type.m"
        }
#line 661 "add_type.m"
        break;
#line 661 "add_type.m"
      case (MR_Integer) 1:
#line 680 "add_type.m"
        {
#line 680 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 680 "add_type.m"
          {
#line 680 "add_type.m"
            MR_Word base;
#line 680 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 680 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 680 "add_type.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_17));
#line 680 "add_type.m"
          }
#line 680 "add_type.m"
        }
#line 661 "add_type.m"
        break;
#line 661 "add_type.m"
      case (MR_Integer) 2:
#line 683 "add_type.m"
        {
#line 683 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Details_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 684 "add_type.m"
          {
#line 684 "add_type.m"
            MR_Word base;
#line 684 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 684 "add_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 684 "add_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Details_24));
#line 684 "add_type.m"
          }
#line 683 "add_type.m"
        }
#line 661 "add_type.m"
        break;
#line 661 "add_type.m"
      case (MR_Integer) 3:
#line 661 "add_type.m"
#line 661 "add_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 661 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 661 "add_type.m"
          case (MR_Integer) 0:
#line 681 "add_type.m"
            {
#line 681 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 681 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));

#line 682 "add_type.m"
              {
#line 682 "add_type.m"
                MR_Word base;
#line 682 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 682 "add_type.m"
                *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 682 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 682 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__SolverTypeDetails_20));
#line 682 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_21));
#line 682 "add_type.m"
              }
#line 681 "add_type.m"
            }
#line 661 "add_type.m"
            break;
#line 661 "add_type.m"
          case (MR_Integer) 1:
#line 686 "add_type.m"
            {
#line 686 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 686 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 686 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 3)));
#line 686 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_32;

#line 692 "add_type.m"
#line 692 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) {
#line 692 "add_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 692 "add_type.m"
                case (MR_Integer) 0:
#line 688 "add_type.m"
                  {
#line 688 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__ILForeignType_33 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__ForeignType_27), (MR_Integer) 0);
#line 688 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_34;
#line 688 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_59_59;

#line 689 "add_type.m"
                    {
#line 689 "add_type.m"
                      hlds__make_hlds__add_type__Data_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 689 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__ILForeignType_33));
#line 689 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 689 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 689 "add_type.m"
                    }
#line 691 "add_type.m"
                    {
#line 691 "add_type.m"
                      hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_34));
#line 691 "add_type.m"
                    }
#line 691 "add_type.m"
                    {
#line 691 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 691 "add_type.m"
                    }
#line 688 "add_type.m"
                  }
#line 692 "add_type.m"
                  break;
#line 692 "add_type.m"
                case (MR_Integer) 1:
#line 693 "add_type.m"
                  {
#line 693 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__CForeignType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 693 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_55_55;
#line 693 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_64;

#line 694 "add_type.m"
                    {
#line 694 "add_type.m"
                      hlds__make_hlds__add_type__Data_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 694 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__CForeignType_35));
#line 694 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 694 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 694 "add_type.m"
                    }
#line 696 "add_type.m"
                    {
#line 696 "add_type.m"
                      hlds__make_hlds__add_type__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_64));
#line 696 "add_type.m"
                    }
#line 696 "add_type.m"
                    {
#line 696 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_55_55));
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 696 "add_type.m"
                    }
#line 693 "add_type.m"
                  }
#line 692 "add_type.m"
                  break;
#line 692 "add_type.m"
                case (MR_Integer) 2:
#line 698 "add_type.m"
                  {
#line 698 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__JavaForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 698 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_51_51;
#line 698 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_65;

#line 699 "add_type.m"
                    {
#line 699 "add_type.m"
                      hlds__make_hlds__add_type__Data_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 699 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__JavaForeignType_36));
#line 699 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 699 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 699 "add_type.m"
                    }
#line 701 "add_type.m"
                    {
#line 701 "add_type.m"
                      hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_65));
#line 701 "add_type.m"
                    }
#line 701 "add_type.m"
                    {
#line 701 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "add_type.m"
                    }
#line 698 "add_type.m"
                  }
#line 692 "add_type.m"
                  break;
#line 692 "add_type.m"
                case (MR_Integer) 3:
#line 692 "add_type.m"
#line 692 "add_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)))) {
#line 692 "add_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 692 "add_type.m"
                    case (MR_Integer) 0:
#line 703 "add_type.m"
                      {
#line 703 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__CSharpForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 1)));
#line 703 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_47_47;
#line 703 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_66;

#line 704 "add_type.m"
                        {
#line 704 "add_type.m"
                          hlds__make_hlds__add_type__Data_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 704 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__CSharpForeignType_37));
#line 704 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 704 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 704 "add_type.m"
                        }
#line 706 "add_type.m"
                        {
#line 706 "add_type.m"
                          hlds__make_hlds__add_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_66));
#line 706 "add_type.m"
                        }
#line 706 "add_type.m"
                        {
#line 706 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_47_47));
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 706 "add_type.m"
                        }
#line 703 "add_type.m"
                      }
#line 692 "add_type.m"
                      break;
#line 692 "add_type.m"
                    case (MR_Integer) 1:
#line 708 "add_type.m"
                      {
#line 708 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_43_43;
#line 708 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_67;

#line 709 "add_type.m"
                        {
#line 709 "add_type.m"
                          hlds__make_hlds__add_type__Data_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 709 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 0) = NULL;
#line 709 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 709 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 709 "add_type.m"
                        }
#line 711 "add_type.m"
                        {
#line 711 "add_type.m"
                          hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_67));
#line 711 "add_type.m"
                        }
#line 711 "add_type.m"
                        {
#line 711 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 711 "add_type.m"
                        }
#line 708 "add_type.m"
                      }
#line 692 "add_type.m"
                      break;
#line 692 "add_type.m"
                  }
#line 692 "add_type.m"
                  break;
#line 692 "add_type.m"
              }
#line 686 "add_type.m"
              *hlds__make_hlds__add_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_32);
#line 686 "add_type.m"
            }
#line 661 "add_type.m"
            break;
#line 661 "add_type.m"
        }
#line 661 "add_type.m"
        break;
#line 661 "add_type.m"
    }
#line 661 "add_type.m"
  }
#line 657 "add_type.m"
}

#line 532 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 532 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 532 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 532 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6)
#line 532 "add_type.m"
{
#line 535 "add_type.m"
  {
#line 535 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 0)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 1)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 2)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 3)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 4)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 0)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 1)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 2)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 3)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 4)));
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeIL_17;
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeC_18;
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJava_19;
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_20;
#line 535 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlang_21;

#line 550 "add_type.m"
    if ((hlds__make_hlds__add_type__MaybeILA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
      {
#line 550 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
        else
#line 552 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILB_12;
#line 550 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
      }
#line 550 "add_type.m"
    else
#line 551 "add_type.m"
      {
#line 551 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
          {
#line 551 "add_type.m"
            hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILA_7;
#line 551 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
          }
#line 551 "add_type.m"
      }
#line 535 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 535 "add_type.m"
      {
#line 550 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeCA_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
          {
#line 550 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
            else
#line 552 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCB_13;
#line 550 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
          }
#line 550 "add_type.m"
        else
#line 551 "add_type.m"
          {
#line 551 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
              {
#line 551 "add_type.m"
                hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCA_8;
#line 551 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
              }
#line 551 "add_type.m"
          }
#line 535 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 535 "add_type.m"
          {
#line 550 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeJavaA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
              {
#line 550 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
                else
#line 552 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaB_14;
#line 550 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
              }
#line 550 "add_type.m"
            else
#line 551 "add_type.m"
              {
#line 551 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
                  {
#line 551 "add_type.m"
                    hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaA_9;
#line 551 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                  }
#line 551 "add_type.m"
              }
#line 535 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 535 "add_type.m"
              {
#line 550 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeCSharpA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                  {
#line 550 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
                    else
#line 552 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpB_15;
#line 550 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
                  }
#line 550 "add_type.m"
                else
#line 551 "add_type.m"
                  {
#line 551 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
                      {
#line 551 "add_type.m"
                        hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpA_10;
#line 551 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                      }
#line 551 "add_type.m"
                  }
#line 535 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 535 "add_type.m"
                  {
#line 550 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeErlangA_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                      {
#line 550 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
                        else
#line 552 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangB_16;
#line 550 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
                      }
#line 550 "add_type.m"
                    else
#line 551 "add_type.m"
                      {
#line 551 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
                          {
#line 551 "add_type.m"
                            hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangA_11;
#line 551 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                          }
#line 551 "add_type.m"
                      }
#line 535 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 535 "add_type.m"
                      {
#line 545 "add_type.m"
                        {
#line 545 "add_type.m"
                          MR_Word base;
#line 545 "add_type.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 545 "add_type.m"
                          *hlds__make_hlds__add_type__TypeBody_6 = base;
#line 545 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_17));
#line 545 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_18));
#line 545 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_19));
#line 545 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_20));
#line 545 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_21));
#line 545 "add_type.m"
                        }
#line 545 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 535 "add_type.m"
                      }
#line 535 "add_type.m"
                  }
#line 535 "add_type.m"
              }
#line 535 "add_type.m"
          }
#line 535 "add_type.m"
      }
#line 535 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 535 "add_type.m"
  }
#line 532 "add_type.m"
}

#line 501 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 501 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 501 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 501 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 501 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 501 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5)
#line 501 "add_type.m"
{
#line 506 "add_type.m"
  while (MR_TRUE)
#line 506 "add_type.m"
    {
#line 506 "add_type.m"
      /* tailcall optimized into a loop */
#line 506 "add_type.m"
      {
#line 506 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 506 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 526 "add_type.m"
          {
#line 526 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;

#line 526 "add_type.m"
            hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 526 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 526 "add_type.m"
              {
#line 526 "add_type.m"
                hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 527 "add_type.m"
                /* direct tailcall eliminated */
#line 527 "add_type.m"
                {
#line 527 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3 = hlds__make_hlds__add_type__HeadVar__4_4;
#line 527 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4 = hlds__make_hlds__add_type__HeadVar__3_3;

#line 527 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__4_4 = hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4;
#line 527 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__3_3 = hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3;
#line 527 "add_type.m"
                }
#line 527 "add_type.m"
                continue;
#line 526 "add_type.m"
              }
#line 526 "add_type.m"
          }
#line 506 "add_type.m"
        else
#line 506 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 506 "add_type.m"
          {
#line 506 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3), (MR_Integer) 0);

#line 506 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 506 "add_type.m"
              {
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody1_12;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody_13;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeILA_63;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCA_64;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaA_65;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangA_67;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeILB_68;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCB_69;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaB_70;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangB_72;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeIL_73;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeC_74;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJava_75;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharp_76;
#line 506 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlang_77;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 517 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_19_19;
#line 517 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_58_58;

#line 510 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_3[0];
#line 510 "add_type.m"
                else
#line 509 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBody1_11, (MR_Integer) 0)));
#line 536 "add_type.m"
                hlds__make_hlds__add_type__MaybeILA_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 0)));
#line 536 "add_type.m"
                hlds__make_hlds__add_type__MaybeCA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 1)));
#line 536 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 2)));
#line 536 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 3)));
#line 536 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangA_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 4)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeILB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 0)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeCB_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 1)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaB_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 2)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 3)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 4)));
#line 550 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeILA_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                  {
#line 550 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                      hlds__make_hlds__add_type__MaybeIL_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
                    else
#line 552 "add_type.m"
                      hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILB_68;
#line 550 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
                  }
#line 550 "add_type.m"
                else
#line 551 "add_type.m"
                  {
#line 551 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
                      {
#line 551 "add_type.m"
                        hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILA_63;
#line 551 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                      }
#line 551 "add_type.m"
                  }
#line 506 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 506 "add_type.m"
                  {
#line 550 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCA_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                      {
#line 550 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                          hlds__make_hlds__add_type__MaybeC_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
                        else
#line 552 "add_type.m"
                          hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCB_69;
#line 550 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
                      }
#line 550 "add_type.m"
                    else
#line 551 "add_type.m"
                      {
#line 551 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
                          {
#line 551 "add_type.m"
                            hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCA_64;
#line 551 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                          }
#line 551 "add_type.m"
                      }
#line 506 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 506 "add_type.m"
                      {
#line 550 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeJavaA_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                          {
#line 550 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                              hlds__make_hlds__add_type__MaybeJava_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
                            else
#line 552 "add_type.m"
                              hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaB_70;
#line 550 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
                          }
#line 550 "add_type.m"
                        else
#line 551 "add_type.m"
                          {
#line 551 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
                              {
#line 551 "add_type.m"
                                hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaA_65;
#line 551 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                              }
#line 551 "add_type.m"
                          }
#line 506 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 506 "add_type.m"
                          {
#line 550 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeCSharpA_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                              {
#line 550 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeCSharp_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
                                else
#line 552 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 550 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
                              }
#line 550 "add_type.m"
                            else
#line 551 "add_type.m"
                              {
#line 551 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
                                  {
#line 551 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 551 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                                  }
#line 551 "add_type.m"
                              }
#line 506 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 506 "add_type.m"
                              {
#line 550 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeErlangA_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                                  {
#line 550 "add_type.m"
                                    if ((hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 550 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeErlang_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "add_type.m"
                                    else
#line 552 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangB_72;
#line 550 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 550 "add_type.m"
                                  }
#line 550 "add_type.m"
                                else
#line 551 "add_type.m"
                                  {
#line 551 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 551 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 551 "add_type.m"
                                      {
#line 551 "add_type.m"
                                        hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangA_67;
#line 551 "add_type.m"
                                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                                      }
#line 551 "add_type.m"
                                  }
#line 506 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 506 "add_type.m"
                                  {
#line 545 "add_type.m"
                                    {
#line 545 "add_type.m"
                                      hlds__make_hlds__add_type__ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 545 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_73));
#line 545 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_74));
#line 545 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_75));
#line 545 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_76));
#line 545 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_77));
#line 545 "add_type.m"
                                    }
#line 517 "add_type.m"
                                    hlds__make_hlds__add_type__V_19_19 = (MR_Integer) 1;
#line 517 "add_type.m"
                                    {
#line 517 "add_type.m"
                                      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_1, hlds__make_hlds__add_type__ForeignTypeBody_13, &hlds__make_hlds__add_type__V_58_58);
                                    }
#line 517 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_19_19 == hlds__make_hlds__add_type__V_58_58);
#line 517 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 518 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MakeOptInterface_2 == (MR_Integer) 0);
#line 521 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 520 "add_type.m"
                                      *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_13);
#line 521 "add_type.m"
                                    else
#line 522 "add_type.m"
                                      {
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_20_20;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_49_49;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_50_50;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_53_53;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_54_54;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_55_55;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_56_56;
#line 522 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_57_57;

#line 522 "add_type.m"
                                        {
#line 522 "add_type.m"
                                          hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_13));
#line 522 "add_type.m"
                                        }
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 522 "add_type.m"
                                        hlds__make_hlds__add_type__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 522 "add_type.m"
                                        {
#line 522 "add_type.m"
                                          MR_Word base;
#line 522 "add_type.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 522 "add_type.m"
                                          *hlds__make_hlds__add_type__HeadVar__5_5 = base;
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_49_49));
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_50_50));
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__V_55_55 | ((hlds__make_hlds__add_type__V_56_56 << (MR_Integer) 1)))));
#line 522 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 522 "add_type.m"
                                        }
#line 522 "add_type.m"
                                      }
#line 521 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 506 "add_type.m"
                                  }
#line 506 "add_type.m"
                              }
#line 506 "add_type.m"
                          }
#line 506 "add_type.m"
                      }
#line 506 "add_type.m"
                  }
#line 506 "add_type.m"
              }
#line 506 "add_type.m"
            else
#line 506 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 529 "add_type.m"
              {
#line 529 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body1_39 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 529 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body_40;

#line 530 "add_type.m"
                {
#line 530 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(hlds__make_hlds__add_type__V_59_59, hlds__make_hlds__add_type__Body1_39, &hlds__make_hlds__add_type__Body_40);
                }
#line 529 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 529 "add_type.m"
                  {
#line 529 "add_type.m"
                    *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_40);
#line 529 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 529 "add_type.m"
                  }
#line 529 "add_type.m"
              }
#line 506 "add_type.m"
            else
#line 506 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 506 "add_type.m"
          }
#line 506 "add_type.m"
        else
#line 506 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 506 "add_type.m"
        return hlds__make_hlds__add_type__succeeded;
#line 506 "add_type.m"
      }
#line 506 "add_type.m"
      break;
#line 506 "add_type.m"
    }
#line 501 "add_type.m"
}

#line 458 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_13,
#line 458 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
#line 458 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
#line 458 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
#line 458 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29)
#line 458 "add_type.m"
{
#line 464 "add_type.m"
  {
#line 464 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 464 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 0)));
#line 464 "add_type.m"
    MR_Integer hlds__make_hlds__add_type__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 1)));
#line 464 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_19;
#line 464 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Target_20;
#line 468 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_69_69;

#line 466 "add_type.m"
    {
#line 466 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_type__Globals_19);
    }
#line 467 "add_type.m"
    {
#line 467 "add_type.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_19, &hlds__make_hlds__add_type__Target_20);
    }
#line 468 "add_type.m"
    {
#line 468 "add_type.m"
      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_20, hlds__make_hlds__add_type__ForeignTypeBody_11, &hlds__make_hlds__add_type__V_69_69);
    }
#line 468 "add_type.m"
    hlds__make_hlds__add_type__succeeded = ((MR_Integer) 1 == hlds__make_hlds__add_type__V_69_69);
#line 470 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 469 "add_type.m"
      {
#line 469 "add_type.m"
        *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 0;
#line 469 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
#line 469 "add_type.m"
      }
#line 470 "add_type.m"
    else
#line 475 "add_type.m"
      {
#line 470 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__PrevErrors_12 == (MR_Integer) 1);
#line 475 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 474 "add_type.m"
          {
#line 474 "add_type.m"
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
#line 474 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
#line 474 "add_type.m"
          }
#line 475 "add_type.m"
        else
#line 481 "add_type.m"
          {
#line 481 "add_type.m"
            MR_String hlds__make_hlds__add_type__LangStr_21 = ((&hlds__make_hlds__add_type_vector_common_5[0 + hlds__make_hlds__add_type__Target_20]))->hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MainPieces_22;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Msg_24;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Spec_25;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_33_33;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_35_35;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_38_38;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_41_41;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_42_42;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_43_43;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_58_58;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59;
#line 481 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_66_66;

#line 482 "add_type.m"
            {
#line 482 "add_type.m"
              hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "add_type.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__LangStr_21));
#line 482 "add_type.m"
            }
#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_17));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_18));
#line 484 "add_type.m"
            }
#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              hlds__make_hlds__add_type__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 484 "add_type.m"
            }
#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              hlds__make_hlds__add_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_42_42));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[53])));
#line 484 "add_type.m"
            }
#line 483 "add_type.m"
            {
#line 483 "add_type.m"
              hlds__make_hlds__add_type__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[72])));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_41_41));
#line 483 "add_type.m"
            }
#line 483 "add_type.m"
            {
#line 483 "add_type.m"
              hlds__make_hlds__add_type__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_38_38));
#line 483 "add_type.m"
            }
#line 482 "add_type.m"
            {
#line 482 "add_type.m"
              hlds__make_hlds__add_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_34_34));
#line 482 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_35_35));
#line 482 "add_type.m"
            }
#line 482 "add_type.m"
            {
#line 482 "add_type.m"
              hlds__make_hlds__add_type__MainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 482 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[70])));
#line 482 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_33_33));
#line 482 "add_type.m"
            }
#line 488 "add_type.m"
            {
#line 488 "add_type.m"
              hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 488 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__MainPieces_22));
#line 488 "add_type.m"
            }
#line 488 "add_type.m"
            {
#line 488 "add_type.m"
              hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 488 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 488 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[74])));
#line 488 "add_type.m"
            }
#line 487 "add_type.m"
            {
#line 487 "add_type.m"
              hlds__make_hlds__add_type__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 487 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_13));
#line 487 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_58_58));
#line 487 "add_type.m"
            }
#line 490 "add_type.m"
            {
#line 490 "add_type.m"
              hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_24));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "add_type.m"
            }
#line 489 "add_type.m"
            {
#line 489 "add_type.m"
              hlds__make_hlds__add_type__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 489 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 489 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 489 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 489 "add_type.m"
            }
#line 491 "add_type.m"
            {
#line 491 "add_type.m"
              MR_Word base;
#line 491 "add_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = base;
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_25));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28));
#line 491 "add_type.m"
            }
#line 492 "add_type.m"
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
#line 481 "add_type.m"
          }
#line 475 "add_type.m"
      }
#line 464 "add_type.m"
    *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26;
#line 464 "add_type.m"
  }
#line 458 "add_type.m"
}

#line 360 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 360 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 360 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4)
#line 360 "add_type.m"
{
#line 368 "add_type.m"
  {
#line 368 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));

#line 368 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 367 "add_type.m"
      {
#line 367 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 367 "add_type.m"
        {
#line 367 "add_type.m"
          hlds__make_hlds__add_type__V_5_5 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
        }
#line 367 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_5_5 == (MR_Integer) 0);
#line 367 "add_type.m"
      }
#line 368 "add_type.m"
    else
#line 370 "add_type.m"
      {
#line 368 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 370 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 369 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__NewDefnStatus_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 370 "add_type.m"
        else
#line 371 "add_type.m"
          {
#line 371 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_6_6;
#line 371 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_7_7;

#line 371 "add_type.m"
            {
#line 371 "add_type.m"
              hlds__make_hlds__add_type__V_6_6 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus_3);
            }
#line 371 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_6_6 == (MR_Integer) 0);
#line 371 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 371 "add_type.m"
              {
#line 372 "add_type.m"
                {
#line 372 "add_type.m"
                  hlds__make_hlds__add_type__V_7_7 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
                }
#line 372 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_7_7 == (MR_Integer) 0);
#line 371 "add_type.m"
              }
#line 371 "add_type.m"
          }
#line 370 "add_type.m"
      }
#line 368 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 368 "add_type.m"
  }
#line 360 "add_type.m"
}

#line 331 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 331 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 331 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4)
#line 331 "add_type.m"
{
#line 334 "add_type.m"
  {
#line 334 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 334 "add_type.m"
    MR_Word hlds__make_hlds__add_type__OldIsSolverType_5;

#line 342 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 343 "add_type.m"
      {
#line 343 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 1)));

#line 347 "add_type.m"
#line 347 "add_type.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_9)) {
#line 347 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 347 "add_type.m"
          case (MR_Integer) 0:
#line 347 "add_type.m"
#line 347 "add_type.m"
            switch (MR_unmkbody(hlds__make_hlds__add_type__Details_9)) {
#line 347 "add_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 347 "add_type.m"
              case (MR_Integer) 0:
#line 346 "add_type.m"
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 347 "add_type.m"
                break;
#line 347 "add_type.m"
              case (MR_Integer) 1:
#line 352 "add_type.m"
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 347 "add_type.m"
                break;
#line 347 "add_type.m"
            }
#line 347 "add_type.m"
            break;
#line 347 "add_type.m"
          case (MR_Integer) 1:
#line 349 "add_type.m"
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 347 "add_type.m"
            break;
#line 347 "add_type.m"
        }
#line 343 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 343 "add_type.m"
      }
#line 342 "add_type.m"
    else
#line 342 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 342 "add_type.m"
      {
#line 342 "add_type.m"
        hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 342 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 342 "add_type.m"
      }
#line 342 "add_type.m"
    else
#line 342 "add_type.m"
      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 334 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 342 "add_type.m"
      {
#line 342 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 343 "add_type.m"
          {
#line 343 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 1)));

#line 347 "add_type.m"
#line 347 "add_type.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_14)) {
#line 347 "add_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 347 "add_type.m"
              case (MR_Integer) 0:
#line 347 "add_type.m"
#line 347 "add_type.m"
                switch (MR_unmkbody(hlds__make_hlds__add_type__Details_14)) {
#line 347 "add_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 347 "add_type.m"
                  case (MR_Integer) 0:
#line 346 "add_type.m"
                    {
#line 337 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 337 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 346 "add_type.m"
                    }
#line 347 "add_type.m"
                    break;
#line 347 "add_type.m"
                  case (MR_Integer) 1:
#line 352 "add_type.m"
                    {
#line 337 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 337 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 352 "add_type.m"
                    }
#line 347 "add_type.m"
                    break;
#line 347 "add_type.m"
                }
#line 347 "add_type.m"
                break;
#line 347 "add_type.m"
              case (MR_Integer) 1:
#line 349 "add_type.m"
                {
#line 337 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 337 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 349 "add_type.m"
                }
#line 347 "add_type.m"
                break;
#line 347 "add_type.m"
            }
#line 343 "add_type.m"
          }
#line 342 "add_type.m"
        else
#line 342 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 342 "add_type.m"
          {
#line 337 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 337 "add_type.m"
            hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 342 "add_type.m"
          }
#line 342 "add_type.m"
        else
#line 342 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 342 "add_type.m"
      }
#line 334 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 334 "add_type.m"
  }
#line 331 "add_type.m"
}

#line 324 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 324 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 324 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 324 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 324 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4)
#line 324 "add_type.m"
{
#line 327 "add_type.m"
  {
#line 327 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 327 "add_type.m"
    *hlds__make_hlds__add_type__OldBody_2 = hlds__make_hlds__add_type__OldBody_5;
#line 327 "add_type.m"
    *hlds__make_hlds__add_type__Body_4 = hlds__make_hlds__add_type__Body_6;
#line 327 "add_type.m"
  }
#line 324 "add_type.m"
}

#line 302 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void)
#line 302 "add_type.m"
{
#line 304 "add_type.m"
  {
#line 304 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 304 "add_type.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[51]);
#line 304 "add_type.m"
  }
#line 302 "add_type.m"
}

#line 49 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__combine_status_3_p_0(
#line 49 "add_type.m"
  MR_Word hlds__make_hlds__add_type__StatusA_4,
#line 49 "add_type.m"
  MR_Word hlds__make_hlds__add_type__StatusB_5,
#line 49 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Status_6)
#line 49 "add_type.m"
{
#line 566 "add_type.m"
  {
#line 566 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 566 "add_type.m"
    MR_Word hlds__make_hlds__add_type__CombinedStatus_7;

#line 573 "add_type.m"
#line 573 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusA_4)) {
#line 573 "add_type.m"
      default:
#line 573 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 573 "add_type.m"
        break;
#line 573 "add_type.m"
      case (MR_Integer) 0:
#line 573 "add_type.m"
#line 573 "add_type.m"
        switch (MR_unmkbody(hlds__make_hlds__add_type__StatusA_4)) {
#line 573 "add_type.m"
          default:
#line 573 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 573 "add_type.m"
            break;
#line 573 "add_type.m"
          case (MR_Integer) 0:
#line 596 "add_type.m"
            {
#line 596 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 596 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 596 "add_type.m"
            }
#line 573 "add_type.m"
            break;
#line 573 "add_type.m"
          case (MR_Integer) 1:
#line 653 "add_type.m"
            {
#line 651 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Section_30;

#line 651 "add_type.m"
              hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 651 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 651 "add_type.m"
                {
#line 651 "add_type.m"
                  hlds__make_hlds__add_type__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusB_5, (MR_Integer) 0)));
#line 652 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 651 "add_type.m"
                }
#line 651 "add_type.m"
              else
#line 654 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 653 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 653 "add_type.m"
            }
#line 573 "add_type.m"
            break;
#line 573 "add_type.m"
          case (MR_Integer) 3:
#line 588 "add_type.m"
            {
#line 588 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 588 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 588 "add_type.m"
            }
#line 573 "add_type.m"
            break;
#line 573 "add_type.m"
          case (MR_Integer) 5:
#line 643 "add_type.m"
            {
#line 641 "add_type.m"
              hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 643 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 642 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 643 "add_type.m"
              else
#line 644 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 643 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 643 "add_type.m"
            }
#line 573 "add_type.m"
            break;
#line 573 "add_type.m"
          case (MR_Integer) 7:
#line 589 "add_type.m"
            {
#line 589 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Status3_20;

#line 628 "add_type.m"
#line 628 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 628 "add_type.m"
                default:
#line 628 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 628 "add_type.m"
                  break;
#line 628 "add_type.m"
                case (MR_Integer) 0:
#line 628 "add_type.m"
#line 628 "add_type.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 628 "add_type.m"
                    default:
#line 628 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 628 "add_type.m"
                      break;
#line 628 "add_type.m"
                    case (MR_Integer) 0:
#line 633 "add_type.m"
                      {
#line 633 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 633 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 633 "add_type.m"
                      }
#line 628 "add_type.m"
                      break;
#line 628 "add_type.m"
                    case (MR_Integer) 1:
#line 634 "add_type.m"
                      {
#line 634 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 634 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 634 "add_type.m"
                      }
#line 628 "add_type.m"
                      break;
#line 628 "add_type.m"
                    case (MR_Integer) 3:
#line 632 "add_type.m"
                      {
#line 632 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 632 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 632 "add_type.m"
                      }
#line 628 "add_type.m"
                      break;
#line 628 "add_type.m"
                    case (MR_Integer) 5:
#line 635 "add_type.m"
                      {
#line 635 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 635 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 635 "add_type.m"
                      }
#line 628 "add_type.m"
                      break;
#line 628 "add_type.m"
                    case (MR_Integer) 7:
#line 629 "add_type.m"
                      {
#line 629 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 629 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 629 "add_type.m"
                      }
#line 628 "add_type.m"
                      break;
#line 628 "add_type.m"
                    case (MR_Integer) 8:
#line 631 "add_type.m"
                      {
#line 631 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 631 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 631 "add_type.m"
                      }
#line 628 "add_type.m"
                      break;
#line 628 "add_type.m"
                  }
#line 628 "add_type.m"
                  break;
#line 628 "add_type.m"
                case (MR_Integer) 2:
#line 630 "add_type.m"
                  {
#line 630 "add_type.m"
                    hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 630 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 630 "add_type.m"
                  }
#line 628 "add_type.m"
                  break;
#line 628 "add_type.m"
              }
#line 589 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 589 "add_type.m"
                {
#line 591 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 593 "add_type.m"
                  if (hlds__make_hlds__add_type__succeeded)
#line 592 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 593 "add_type.m"
                  else
#line 594 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__Status3_20;
#line 593 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 589 "add_type.m"
                }
#line 589 "add_type.m"
            }
#line 573 "add_type.m"
            break;
#line 573 "add_type.m"
          case (MR_Integer) 8:
#line 628 "add_type.m"
#line 628 "add_type.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 628 "add_type.m"
              default:
#line 628 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 628 "add_type.m"
                break;
#line 628 "add_type.m"
              case (MR_Integer) 0:
#line 628 "add_type.m"
#line 628 "add_type.m"
                switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 628 "add_type.m"
                  default:
#line 628 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 628 "add_type.m"
                    break;
#line 628 "add_type.m"
                  case (MR_Integer) 0:
#line 633 "add_type.m"
                    {
#line 633 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 633 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 633 "add_type.m"
                    }
#line 628 "add_type.m"
                    break;
#line 628 "add_type.m"
                  case (MR_Integer) 1:
#line 634 "add_type.m"
                    {
#line 634 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 634 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 634 "add_type.m"
                    }
#line 628 "add_type.m"
                    break;
#line 628 "add_type.m"
                  case (MR_Integer) 3:
#line 632 "add_type.m"
                    {
#line 632 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 632 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 632 "add_type.m"
                    }
#line 628 "add_type.m"
                    break;
#line 628 "add_type.m"
                  case (MR_Integer) 5:
#line 635 "add_type.m"
                    {
#line 635 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 635 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 635 "add_type.m"
                    }
#line 628 "add_type.m"
                    break;
#line 628 "add_type.m"
                  case (MR_Integer) 7:
#line 629 "add_type.m"
                    {
#line 629 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 629 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 629 "add_type.m"
                    }
#line 628 "add_type.m"
                    break;
#line 628 "add_type.m"
                  case (MR_Integer) 8:
#line 631 "add_type.m"
                    {
#line 631 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 631 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 631 "add_type.m"
                    }
#line 628 "add_type.m"
                    break;
#line 628 "add_type.m"
                }
#line 628 "add_type.m"
                break;
#line 628 "add_type.m"
              case (MR_Integer) 2:
#line 630 "add_type.m"
                {
#line 630 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 630 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 630 "add_type.m"
                }
#line 628 "add_type.m"
                break;
#line 628 "add_type.m"
            }
#line 573 "add_type.m"
            break;
#line 573 "add_type.m"
        }
#line 573 "add_type.m"
        break;
#line 573 "add_type.m"
      case (MR_Integer) 2:
#line 573 "add_type.m"
        {
#line 573 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusA_4, (MR_Integer) 0)));

#line 581 "add_type.m"
#line 581 "add_type.m"
          switch (hlds__make_hlds__add_type__ImportLocn_11) {
#line 581 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 581 "add_type.m"
            case (MR_Integer) 2:
#line 581 "add_type.m"
            case (MR_Integer) 0:
#line 581 "add_type.m"
            case (MR_Integer) 1:
#line 607 "add_type.m"
#line 607 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 607 "add_type.m"
                default:
#line 607 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 607 "add_type.m"
                  break;
#line 607 "add_type.m"
                case (MR_Integer) 0:
#line 607 "add_type.m"
#line 607 "add_type.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 607 "add_type.m"
                    default:
#line 607 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 607 "add_type.m"
                      break;
#line 607 "add_type.m"
                    case (MR_Integer) 0:
#line 617 "add_type.m"
                      {
#line 617 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 617 "add_type.m"
                      }
#line 607 "add_type.m"
                      break;
#line 607 "add_type.m"
                    case (MR_Integer) 1:
#line 619 "add_type.m"
                      {
#line 620 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_4[1]);
#line 619 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 619 "add_type.m"
                      }
#line 607 "add_type.m"
                      break;
#line 607 "add_type.m"
                    case (MR_Integer) 3:
#line 614 "add_type.m"
                      {
#line 614 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 614 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 614 "add_type.m"
                      }
#line 607 "add_type.m"
                      break;
#line 607 "add_type.m"
                    case (MR_Integer) 5:
#line 623 "add_type.m"
                      {
#line 623 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 623 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 623 "add_type.m"
                      }
#line 607 "add_type.m"
                      break;
#line 607 "add_type.m"
                    case (MR_Integer) 8:
#line 610 "add_type.m"
                      {
#line 611 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_4[2]);
#line 610 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 610 "add_type.m"
                      }
#line 607 "add_type.m"
                      break;
#line 607 "add_type.m"
                  }
#line 607 "add_type.m"
                  break;
#line 607 "add_type.m"
                case (MR_Integer) 2:
#line 608 "add_type.m"
                  {
#line 608 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 608 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 608 "add_type.m"
                  }
#line 607 "add_type.m"
                  break;
#line 607 "add_type.m"
              }
#line 581 "add_type.m"
              break;
#line 581 "add_type.m"
            case (MR_Integer) 3:
#line 582 "add_type.m"
              {
#line 584 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_4[3]);
#line 582 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 582 "add_type.m"
              }
#line 581 "add_type.m"
              break;
#line 581 "add_type.m"
          }
#line 573 "add_type.m"
        }
#line 573 "add_type.m"
        break;
#line 573 "add_type.m"
    }
#line 566 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 565 "add_type.m"
      *hlds__make_hlds__add_type__Status_6 = hlds__make_hlds__add_type__CombinedStatus_7;
#line 566 "add_type.m"
    else
#line 567 "add_type.m"
      {
#line 567 "add_type.m"
        {
#line 567 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 567 "add_type.m"
          return;
        }
#line 567 "add_type.m"
      }
#line 566 "add_type.m"
  }
#line 49 "add_type.m"
}

#line 47 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__make_status_abstract_2_p_0(
#line 47 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Status_3,
#line 47 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__AbstractStatus_4)
#line 47 "add_type.m"
{
#line 557 "add_type.m"
  {
#line 557 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));

#line 557 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 556 "add_type.m"
      *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 557 "add_type.m"
    else
#line 559 "add_type.m"
      {
#line 557 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 557 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 557 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 557 "add_type.m"
          {
#line 557 "add_type.m"
            hlds__make_hlds__add_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Status_3, (MR_Integer) 0)));
#line 558 "add_type.m"
            *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 557 "add_type.m"
          }
#line 557 "add_type.m"
        else
#line 560 "add_type.m"
          *hlds__make_hlds__add_type__AbstractStatus_4 = hlds__make_hlds__add_type__Status_3;
#line 559 "add_type.m"
      }
#line 557 "add_type.m"
  }
#line 47 "add_type.m"
}

#line 42 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__process_type_defn_8_p_0(
#line 42 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 42 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_10,
#line 42 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59,
#line 42 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60,
#line 42 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61,
#line 42 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62,
#line 42 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63,
#line 42 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64)
#line 42 "add_type.m"
{
#line 376 "add_type.m"
  {
#line 376 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Context_14;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__TVarSet_15;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Args_16;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__KindMap_17;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Body_18;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Status_19;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NeedQual_20;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_21;
#line 376 "add_type.m"
    MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;

#line 377 "add_type.m"
    {
#line 377 "add_type.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Context_14);
    }
#line 378 "add_type.m"
    {
#line 378 "add_type.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__TVarSet_15);
    }
#line 379 "add_type.m"
    {
#line 379 "add_type.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Args_16);
    }
#line 380 "add_type.m"
    {
#line 380 "add_type.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__KindMap_17);
    }
#line 381 "add_type.m"
    {
#line 381 "add_type.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Body_18);
    }
#line 382 "add_type.m"
    {
#line 382 "add_type.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Status_19);
    }
#line 383 "add_type.m"
    {
#line 383 "add_type.m"
      hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__NeedQual_20);
    }
#line 384 "add_type.m"
    {
#line 384 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Globals_21);
    }
#line 425 "add_type.m"
#line 425 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) {
#line 425 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 425 "add_type.m"
      case (MR_Integer) 0:
#line 426 "add_type.m"
        {
#line 426 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignTypeBody_50 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__Body_18), (MR_Integer) 0);
#line 426 "add_type.m"
          MR_Word hlds__make_hlds__add_type__PrevErrors_51;
#line 426 "add_type.m"
          MR_Word hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52;

#line 427 "add_type.m"
          {
#line 427 "add_type.m"
            hlds__hlds_data__get_type_defn_prev_errors_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__PrevErrors_51);
          }
#line 428 "add_type.m"
          {
#line 428 "add_type.m"
            hlds__make_hlds__add_type__check_foreign_type_9_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ForeignTypeBody_50, hlds__make_hlds__add_type__PrevErrors_51, hlds__make_hlds__add_type__Context_14, &hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64);
          }
#line 433 "add_type.m"
#line 433 "add_type.m"
          switch (hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52) {
#line 433 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 433 "add_type.m"
            case (MR_Integer) 0:
#line 434 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 433 "add_type.m"
              break;
#line 433 "add_type.m"
            case (MR_Integer) 1:
#line 432 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
#line 433 "add_type.m"
              break;
#line 433 "add_type.m"
          }
#line 426 "add_type.m"
        }
#line 425 "add_type.m"
        break;
#line 425 "add_type.m"
      case (MR_Integer) 1:
#line 387 "add_type.m"
        {
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ConsList_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)));
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__UserEqCmp_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 4)));
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedTag_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Ctors0_31;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__PQInfo_32;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorFields0_33;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__TypeCtorSymName_34;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_37;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorFields_39;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Ctors_40;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorAddSpecs_41;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 386 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 1)));
#line 386 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 2)));
#line 386 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 3)));
#line 386 "add_type.m"
          MR_Word hlds__make_hlds__add_type___DirectArgCtors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 5)));
#line 386 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 386 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 7)));
#line 391 "add_type.m"
          MR_Integer hlds__make_hlds__add_type__V_35_35;
#line 422 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorName_44;
#line 422 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorArgType_45;
#line 415 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_46_46;

#line 388 "add_type.m"
          {
#line 388 "add_type.m"
            hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Ctors0_31);
          }
#line 389 "add_type.m"
          {
#line 389 "add_type.m"
            hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__PQInfo_32);
          }
#line 390 "add_type.m"
          {
#line 390 "add_type.m"
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__CtorFields0_33);
          }
#line 391 "add_type.m"
          hlds__make_hlds__add_type__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 391 "add_type.m"
          hlds__make_hlds__add_type__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 395 "add_type.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 396 "add_type.m"
            {
#line 396 "add_type.m"
              MR_String hlds__make_hlds__add_type__V_38_38;

#line 396 "add_type.m"
              hlds__make_hlds__add_type__TypeCtorModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 0)));
#line 396 "add_type.m"
              hlds__make_hlds__add_type__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 1)));
#line 396 "add_type.m"
            }
#line 395 "add_type.m"
          else
#line 393 "add_type.m"
            {
#line 394 "add_type.m"
              {
#line 394 "add_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.process_type_defn\'/8", (MR_String) "unqualified TypeCtorSymName");
#line 394 "add_type.m"
                return;
              }
#line 393 "add_type.m"
            }
#line 398 "add_type.m"
          {
#line 398 "add_type.m"
            hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__TypeCtorModuleName_37, hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Args_16, hlds__make_hlds__add_type__KindMap_17, hlds__make_hlds__add_type__NeedQual_20, hlds__make_hlds__add_type__PQInfo_32, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__CtorFields0_33, &hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__Ctors0_31, &hlds__make_hlds__add_type__Ctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_type__CtorAddSpecs_41);
          }
#line 401 "add_type.m"
          {
#line 401 "add_type.m"
            hlds__hlds_module__module_info_set_cons_table_3_p_0(hlds__make_hlds__add_type__Ctors_40, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72);
          }
#line 402 "add_type.m"
          {
#line 402 "add_type.m"
            hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73);
          }
#line 406 "add_type.m"
          if ((hlds__make_hlds__add_type__CtorAddSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 405 "add_type.m"
            {
#line 405 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 405 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 405 "add_type.m"
            }
#line 406 "add_type.m"
          else
#line 407 "add_type.m"
            {
#line 408 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
#line 409 "add_type.m"
              {
#line 409 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_type__CtorAddSpecs_41, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63);
              }
#line 407 "add_type.m"
            }
#line 415 "add_type.m"
          {
#line 415 "add_type.m"
            hlds__make_hlds__add_type__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ReservedTag_28, hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__UserEqCmp_26, &hlds__make_hlds__add_type__CtorName_44, &hlds__make_hlds__add_type__CtorArgType_45, &hlds__make_hlds__add_type__V_46_46);
          }
#line 422 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 418 "add_type.m"
            {
#line 418 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagType_47;
#line 418 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagTypes0_48;
#line 418 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagTypes_49;

#line 418 "add_type.m"
              {
#line 418 "add_type.m"
                hlds__make_hlds__add_type__NoTagType_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 418 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Args_16));
#line 418 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorName_44));
#line 418 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 2) = ((MR_Box) (hlds__make_hlds__add_type__CtorArgType_45));
#line 418 "add_type.m"
              }
#line 419 "add_type.m"
              {
#line 419 "add_type.m"
                hlds__hlds_module__module_info_get_no_tag_types_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__NoTagTypes0_48);
              }
#line 420 "add_type.m"
              {
#line 420 "add_type.m"
                mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_9)), ((MR_Box) (hlds__make_hlds__add_type__NoTagType_47)), hlds__make_hlds__add_type__NoTagTypes0_48, &hlds__make_hlds__add_type__NoTagTypes_49);
              }
#line 421 "add_type.m"
              {
#line 421 "add_type.m"
                hlds__hlds_module__module_info_set_no_tag_types_3_p_0(hlds__make_hlds__add_type__NoTagTypes_49, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76);
              }
#line 418 "add_type.m"
            }
#line 422 "add_type.m"
          else
#line 422 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 387 "add_type.m"
        }
#line 425 "add_type.m"
        break;
#line 425 "add_type.m"
      case (MR_Integer) 2:
#line 439 "add_type.m"
        {
#line 439 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 439 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
#line 439 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 439 "add_type.m"
        }
#line 425 "add_type.m"
        break;
#line 425 "add_type.m"
      case (MR_Integer) 3:
#line 425 "add_type.m"
#line 425 "add_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)))) {
#line 425 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 425 "add_type.m"
          case (MR_Integer) 0:
#line 438 "add_type.m"
            {
#line 438 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 438 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
#line 438 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 438 "add_type.m"
            }
#line 425 "add_type.m"
            break;
#line 425 "add_type.m"
          case (MR_Integer) 1:
#line 437 "add_type.m"
            {
#line 437 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 437 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
#line 437 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 437 "add_type.m"
            }
#line 425 "add_type.m"
            break;
#line 425 "add_type.m"
        }
#line 425 "add_type.m"
        break;
#line 425 "add_type.m"
    }
#line 444 "add_type.m"
#line 444 "add_type.m"
    switch (*hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60) {
#line 444 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 444 "add_type.m"
      case (MR_Integer) 0:
#line 445 "add_type.m"
        {
#line 445 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ArgTypes_57;
#line 445 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Type_58;
#line 445 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_77_77;

#line 449 "add_type.m"
          {
#line 449 "add_type.m"
            hlds__make_hlds__add_type__V_77_77 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
          }
#line 449 "add_type.m"
          {
#line 449 "add_type.m"
            parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_type__V_77_77, hlds__make_hlds__add_type__Args_16, &hlds__make_hlds__add_type__ArgTypes_57);
          }
#line 450 "add_type.m"
          {
#line 450 "add_type.m"
            parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ArgTypes_57, &hlds__make_hlds__add_type__Type_58);
          }
#line 451 "add_type.m"
          {
#line 451 "add_type.m"
            hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Type_58, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__Body_18, hlds__make_hlds__add_type__Context_14, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62);
#line 451 "add_type.m"
            return;
          }
#line 445 "add_type.m"
        }
#line 444 "add_type.m"
        break;
#line 444 "add_type.m"
      case (MR_Integer) 1:
#line 443 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;
#line 444 "add_type.m"
        break;
#line 444 "add_type.m"
    }
#line 376 "add_type.m"
  }
#line 42 "add_type.m"
}

#line 282 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(
#line 282 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 282 "add_type.m"
{
#line 282 "add_type.m"
  {
#line 282 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 282 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0, 1);
#line 282 "add_type.m"
  }
#line 282 "add_type.m"
}

#line 284 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3(
#line 284 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 284 "add_type.m"
{
#line 284 "add_type.m"
  {
#line 284 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 284 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91);
#line 284 "add_type.m"
    {
#line 284 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 284 "add_type.m"
      return;
    }
#line 284 "add_type.m"
  }
#line 284 "add_type.m"
}

#line 285 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(
#line 285 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 285 "add_type.m"
{
#line 285 "add_type.m"
  {
#line 285 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 285 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1, 1);
#line 285 "add_type.m"
  }
#line 285 "add_type.m"
}

#line 285 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5(
#line 285 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 285 "add_type.m"
{
#line 285 "add_type.m"
  {
#line 285 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 5655 "hlds.make_hlds.add_type.c"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 285 "add_type.m"
    {
#line 285 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303, ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91)), ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_301_301)));
    }
#line 285 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 285 "add_type.m"
      {
#line 285 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(hlds__make_hlds__add_type__env_ptr);
#line 285 "add_type.m"
        return;
      }
#line 285 "add_type.m"
  }
#line 285 "add_type.m"
}

#line 285 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(
#line 285 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 285 "add_type.m"
{
#line 285 "add_type.m"
  {
#line 285 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 285 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1) == 0)
#line 285 "add_type.m"
      {
#line 285 "add_type.m"
        {
#line 285 "add_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_301_301, hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5, hlds__make_hlds__add_type__env_ptr);
        }
#line 285 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 285 "add_type.m"
      }
#line 285 "add_type.m"
    else
#line 285 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 285 "add_type.m"
  }
#line 285 "add_type.m"
}

#line 282 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(
#line 282 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 282 "add_type.m"
{
#line 282 "add_type.m"
  {
#line 282 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 285 "add_type.m"
    {
#line 285 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(hlds__make_hlds__add_type__env_ptr);
    }
#line 285 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded);
#line 285 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 285 "add_type.m"
      {
#line 285 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 285 "add_type.m"
        return;
      }
#line 282 "add_type.m"
  }
#line 282 "add_type.m"
}

#line 282 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(
#line 282 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 282 "add_type.m"
{
#line 282 "add_type.m"
  {
#line 282 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 282 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0) == 0)
#line 282 "add_type.m"
      {
#line 283 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 282 "add_type.m"
        if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 282 "add_type.m"
          {
#line 282 "add_type.m"
            (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 2)));
#line 282 "add_type.m"
            if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 282 "add_type.m"
              {
#line 282 "add_type.m"
                (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 0)));
#line 284 "add_type.m"
                {
#line 284 "add_type.m"
                  mercury__list__member_2_p_1((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3, hlds__make_hlds__add_type__env_ptr);
                }
#line 282 "add_type.m"
              }
#line 282 "add_type.m"
          }
#line 282 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 282 "add_type.m"
      }
#line 282 "add_type.m"
    else
#line 282 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 282 "add_type.m"
  }
#line 282 "add_type.m"
}

#line 35 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0(
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_11,
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Name_12,
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Args_13,
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_14,
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_15,
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__6_6,
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95,
#line 35 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96,
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_97,
#line 35 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98)
#line 35 "add_type.m"
{
#line 35 "add_type.m"
  {
#line 35 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 35 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13 = hlds__make_hlds__add_type__Args_13;
#line 80 "add_type.m"
    {
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Status0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__6_6, (MR_Integer) 0)));
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__NeedQual_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__6_6, (MR_Integer) 1)));
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Globals_20;
#line 80 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_21;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtor_22;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Body0_23;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Status1_34;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeTable0_44;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeOldDefn_54;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__KindMap_56;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeDefn1_57;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 80 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 107 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_298_298;
#line 107 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Ctors_35;
#line 107 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeUserUC_36;
#line 107 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constructor_38;
#line 107 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 107 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 107 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_103_103;
#line 107 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 107 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_300_300;
#line 107 "add_type.m"
      MR_Word hlds__make_hlds__add_type___MaybeDirectArg_37;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_292_292;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_293_293;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_294_294;
#line 109 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_295_295;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_296_296;
#line 110 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_39_39;
#line 156 "add_type.m"
      MR_Word hlds__make_hlds__add_type__OldDefn0_45;
#line 169 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_58_58;

#line 81 "add_type.m"
      {
#line 81 "add_type.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__Globals_20);
      }
#line 5897 "hlds.make_hlds.add_type.c"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 82 "add_type.m"
      {
#line 82 "add_type.m"
        mercury__list__length_2_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, &hlds__make_hlds__add_type__Arity_21);
      }
#line 83 "add_type.m"
      {
#line 83 "add_type.m"
        hlds__make_hlds__add_type__TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 83 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_22, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 83 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 83 "add_type.m"
      }
#line 84 "add_type.m"
      {
#line 84 "add_type.m"
        hlds__make_hlds__add_type__convert_type_defn_4_p_0(hlds__make_hlds__add_type__TypeDefn_14, hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__Globals_20, &hlds__make_hlds__add_type__Body0_23);
      }
#line 88 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_23)) == (MR_mktag((MR_Integer) 1))))
#line 89 "add_type.m"
        {
#line 89 "add_type.m"
          MR_String hlds__make_hlds__add_type__V_99_99;

#line 90 "add_type.m"
          {
#line 90 "add_type.m"
            hlds__make_hlds__add_type__V_99_99 = mercury__term__context_file_1_f_0(hlds__make_hlds__add_type__Context_15);
          }
#line 90 "add_type.m"
          {
#line 90 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = mercury__string__suffix_2_p_0(hlds__make_hlds__add_type__V_99_99, (MR_String) ".int2");
          }
#line 89 "add_type.m"
        }
#line 88 "add_type.m"
      else
#line 88 "add_type.m"
      if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body0_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 87 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 88 "add_type.m"
      else
#line 88 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 99 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 98 "add_type.m"
        {
#line 98 "add_type.m"
          hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__add_type__Status0_16, &hlds__make_hlds__add_type__Status1_34);
        }
#line 99 "add_type.m"
      else
#line 100 "add_type.m"
        hlds__make_hlds__add_type__Status1_34 = hlds__make_hlds__add_type__Status0_16;
#line 107 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeDefn_14)) == (MR_mktag((MR_Integer) 0)));
#line 107 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 107 "add_type.m"
        {
#line 107 "add_type.m"
          hlds__make_hlds__add_type__Ctors_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 0)));
#line 107 "add_type.m"
          hlds__make_hlds__add_type__MaybeUserUC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 1)));
#line 107 "add_type.m"
          hlds__make_hlds__add_type___MaybeDirectArg_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 2)));
#line 108 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Ctors_35)) == (MR_mktag((MR_Integer) 1)));
#line 108 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 108 "add_type.m"
            {
#line 108 "add_type.m"
              hlds__make_hlds__add_type__Constructor_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_35, (MR_Integer) 0)));
#line 108 "add_type.m"
              hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_35, (MR_Integer) 1)));
#line 108 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 107 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 107 "add_type.m"
                {
#line 109 "add_type.m"
                  hlds__make_hlds__add_type__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 0)));
#line 109 "add_type.m"
                  hlds__make_hlds__add_type__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 1)));
#line 109 "add_type.m"
                  hlds__make_hlds__add_type__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 2)));
#line 109 "add_type.m"
                  hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 3)));
#line 109 "add_type.m"
                  hlds__make_hlds__add_type__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 4)));
#line 109 "add_type.m"
                  hlds__make_hlds__add_type__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 5)));
#line 109 "add_type.m"
                  hlds__make_hlds__add_type__V_103_103 = (MR_Integer) 0;
#line 6001 "hlds.make_hlds.add_type.c"
                  hlds__make_hlds__add_type__TypeCtorInfo_298_298 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 109 "add_type.m"
                  {
#line 109 "add_type.m"
                    mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_298_298, hlds__make_hlds__add_type__V_102_102, &hlds__make_hlds__add_type__V_300_300);
                  }
#line 109 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_103_103 == hlds__make_hlds__add_type__V_300_300);
#line 107 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 107 "add_type.m"
                    {
#line 110 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeUserUC_36)) == (MR_mktag((MR_Integer) 1)));
#line 110 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 110 "add_type.m"
                        {
#line 110 "add_type.m"
                          hlds__make_hlds__add_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeUserUC_36, (MR_Integer) 0)));
#line 112 "add_type.m"
                          {
#line 112 "add_type.m"
                            hlds__make_hlds__add_type__V_104_104 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_type__Status0_16);
                          }
#line 112 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_104_104 == (MR_Integer) 1);
#line 110 "add_type.m"
                        }
#line 107 "add_type.m"
                    }
#line 107 "add_type.m"
                }
#line 108 "add_type.m"
            }
#line 107 "add_type.m"
        }
#line 127 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 117 "add_type.m"
        {
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMainPieces_40;
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMsg_42;
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummySpec_43;
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_107_107;
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_108_108;
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_109_109;
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_126_126;
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_127_127;
#line 117 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_134_134;

#line 115 "add_type.m"
          {
#line 115 "add_type.m"
            hlds__make_hlds__add_type__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 115 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 115 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 115 "add_type.m"
          }
#line 115 "add_type.m"
          {
#line 115 "add_type.m"
            hlds__make_hlds__add_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 115 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_109_109));
#line 115 "add_type.m"
          }
#line 115 "add_type.m"
          {
#line 115 "add_type.m"
            hlds__make_hlds__add_type__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_108_108));
#line 115 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
#line 115 "add_type.m"
          }
#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__DummyMainPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[60])));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_107_107));
#line 114 "add_type.m"
          }
#line 122 "add_type.m"
          {
#line 122 "add_type.m"
            hlds__make_hlds__add_type__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 122 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMainPieces_40));
#line 122 "add_type.m"
          }
#line 122 "add_type.m"
          {
#line 122 "add_type.m"
            hlds__make_hlds__add_type__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 122 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_127_127));
#line 122 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[62])));
#line 122 "add_type.m"
          }
#line 121 "add_type.m"
          {
#line 121 "add_type.m"
            hlds__make_hlds__add_type__DummyMsg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_42, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_126_126));
#line 121 "add_type.m"
          }
#line 125 "add_type.m"
          {
#line 125 "add_type.m"
            hlds__make_hlds__add_type__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMsg_42));
#line 125 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 125 "add_type.m"
          }
#line 124 "add_type.m"
          {
#line 124 "add_type.m"
            hlds__make_hlds__add_type__DummySpec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_134_134));
#line 124 "add_type.m"
          }
#line 126 "add_type.m"
          {
#line 126 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummySpec_43));
#line 126 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_97));
#line 126 "add_type.m"
          }
#line 117 "add_type.m"
        }
#line 127 "add_type.m"
      else
#line 127 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_97;
#line 130 "add_type.m"
      {
#line 130 "add_type.m"
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__TypeTable0_44);
      }
#line 134 "add_type.m"
      {
#line 134 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_type__TypeTable0_44, hlds__make_hlds__add_type__TypeCtor_22, &hlds__make_hlds__add_type__OldDefn0_45);
      }
#line 156 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 136 "add_type.m"
        {
#line 136 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus_46;
#line 136 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody0_48;
#line 136 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody_49;

#line 136 "add_type.m"
          {
#line 136 "add_type.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldStatus_46);
          }
#line 137 "add_type.m"
          {
#line 137 "add_type.m"
            hlds__make_hlds__add_type__combine_status_3_p_0(hlds__make_hlds__add_type__Status1_34, hlds__make_hlds__add_type__OldStatus_46, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47);
          }
#line 138 "add_type.m"
          {
#line 138 "add_type.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldBody0_48);
          }
#line 139 "add_type.m"
          {
#line 139 "add_type.m"
            hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(hlds__make_hlds__add_type__OldBody0_48, &hlds__make_hlds__add_type__OldBody_49, hlds__make_hlds__add_type__Body0_23, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50);
          }
#line 140 "add_type.m"
          {
#line 140 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(hlds__make_hlds__add_type__OldBody_49, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50);
          }
#line 152 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 146 "add_type.m"
            {
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverPieces_51;
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverMsg_52;
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverSpec_53;
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_139_139;
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_140_140;
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_141_141;
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_160_160;
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_161_161;
#line 146 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_165_165;

#line 144 "add_type.m"
              {
#line 144 "add_type.m"
                hlds__make_hlds__add_type__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_141_141, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 144 "add_type.m"
              }
#line 144 "add_type.m"
              {
#line 144 "add_type.m"
                hlds__make_hlds__add_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_141_141));
#line 144 "add_type.m"
              }
#line 144 "add_type.m"
              {
#line 144 "add_type.m"
                hlds__make_hlds__add_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_140_140));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])));
#line 144 "add_type.m"
              }
#line 143 "add_type.m"
              {
#line 143 "add_type.m"
                hlds__make_hlds__add_type__SolverPieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_51, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_139_139));
#line 143 "add_type.m"
              }
#line 147 "add_type.m"
              {
#line 147 "add_type.m"
                hlds__make_hlds__add_type__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverPieces_51));
#line 147 "add_type.m"
              }
#line 147 "add_type.m"
              {
#line 147 "add_type.m"
                hlds__make_hlds__add_type__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_161_161));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_type.m"
              }
#line 147 "add_type.m"
              {
#line 147 "add_type.m"
                hlds__make_hlds__add_type__SolverMsg_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_52, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_160_160));
#line 147 "add_type.m"
              }
#line 149 "add_type.m"
              {
#line 149 "add_type.m"
                hlds__make_hlds__add_type__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverMsg_52));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_type.m"
              }
#line 148 "add_type.m"
              {
#line 148 "add_type.m"
                hlds__make_hlds__add_type__SolverSpec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_165_165));
#line 148 "add_type.m"
              }
#line 150 "add_type.m"
              {
#line 150 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverSpec_53));
#line 150 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136));
#line 150 "add_type.m"
              }
#line 151 "add_type.m"
              hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 146 "add_type.m"
            }
#line 152 "add_type.m"
          else
#line 153 "add_type.m"
            {
#line 153 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn_55;

#line 153 "add_type.m"
              {
#line 153 "add_type.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_type__OldBody_49, hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldDefn_55);
              }
#line 154 "add_type.m"
              {
#line 154 "add_type.m"
                hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 154 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__OldDefn_55));
#line 154 "add_type.m"
              }
#line 153 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 153 "add_type.m"
            }
#line 136 "add_type.m"
        }
#line 156 "add_type.m"
      else
#line 157 "add_type.m"
        {
#line 157 "add_type.m"
          hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 158 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 = hlds__make_hlds__add_type__Status1_34;
#line 159 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50 = hlds__make_hlds__add_type__Body0_23;
#line 157 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 157 "add_type.m"
        }
#line 164 "add_type.m"
      {
#line 164 "add_type.m"
        mercury__map__init_1_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &hlds__make_hlds__add_type__KindMap_56);
      }
#line 165 "add_type.m"
      {
#line 165 "add_type.m"
        hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet_11, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, hlds__make_hlds__add_type__KindMap_56, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, (MR_Integer) 0, hlds__make_hlds__add_type__NeedQual_17, (MR_Integer) 0, hlds__make_hlds__add_type__Context_15, &hlds__make_hlds__add_type__TypeDefn1_57);
      }
#line 168 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__MaybeOldDefn_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 168 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 168 "add_type.m"
        {
#line 169 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 0)));
#line 169 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 169 "add_type.m"
            hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50), (MR_Integer) 0);
#line 168 "add_type.m"
        }
#line 178 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 173 "add_type.m"
        {
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclPieces_59;
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclMsg_60;
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclSpec_61;
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_172_172;
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_173_173;
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_174_174;
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_179_179;
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_180_180;
#line 173 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_184_184;

#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_174_174, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_174_174, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 172 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_173_173, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_174_174));
#line 172 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_172_172, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_173_173));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[66])));
#line 172 "add_type.m"
          }
#line 171 "add_type.m"
          {
#line 171 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclPieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[64])));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_59, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_172_172));
#line 171 "add_type.m"
          }
#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclPieces_59));
#line 174 "add_type.m"
          }
#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_180_180));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "add_type.m"
          }
#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclMsg_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_60, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_179_179));
#line 174 "add_type.m"
          }
#line 176 "add_type.m"
          {
#line 176 "add_type.m"
            hlds__make_hlds__add_type__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclMsg_60));
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "add_type.m"
          }
#line 175 "add_type.m"
          {
#line 175 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclSpec_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_184_184));
#line 175 "add_type.m"
          }
#line 177 "add_type.m"
          {
#line 177 "add_type.m"
            MR_Word base;
#line 177 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 177 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclSpec_61));
#line 177 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 177 "add_type.m"
          }
#line 173 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 173 "add_type.m"
        }
#line 178 "add_type.m"
      else
#line 201 "add_type.m"
        {
#line 179 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldDefn1_62;
#line 179 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus1_64;
#line 179 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody1_65;
#line 179 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_187_187;
#line 179 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_188_188;
#line 180 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_63_63;
#line 183 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;

#line 180 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 0)));
#line 180 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 180 "add_type.m"
            {
#line 180 "add_type.m"
              hlds__make_hlds__add_type__V_63_63 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50), (MR_Integer) 0);
#line 179 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_54)) == (MR_mktag((MR_Integer) 1)));
#line 179 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 179 "add_type.m"
                {
#line 179 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn1_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, (MR_Integer) 0)));
#line 181 "add_type.m"
                  {
#line 181 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn1_62, &hlds__make_hlds__add_type__OldStatus1_64);
                  }
#line 182 "add_type.m"
                  {
#line 182 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn1_62, &hlds__make_hlds__add_type__OldBody1_65);
                  }
#line 183 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody1_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_65, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 183 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 183 "add_type.m"
                    {
#line 183 "add_type.m"
                      hlds__make_hlds__add_type__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_65, (MR_Integer) 1)));
#line 184 "add_type.m"
                      {
#line 184 "add_type.m"
                        hlds__make_hlds__add_type__V_187_187 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus1_64);
                      }
#line 184 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_187_187 == (MR_Integer) 0);
#line 179 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 179 "add_type.m"
                        {
#line 185 "add_type.m"
                          {
#line 185 "add_type.m"
                            hlds__make_hlds__add_type__V_188_188 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__Status0_16);
                          }
#line 185 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_188_188 == (MR_Integer) 1);
#line 179 "add_type.m"
                        }
#line 183 "add_type.m"
                    }
#line 179 "add_type.m"
                }
#line 180 "add_type.m"
            }
#line 201 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 189 "add_type.m"
            {
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisPieces_67;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisMsg_68;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisSpec_69;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_70;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TypeTable_71;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_191_191;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_192_192;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_193_193;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_198_198;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_199_199;
#line 189 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_203_203;

#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_193_193, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_193_193, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 188 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_192_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_192_192, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_193_193));
#line 188 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_191_191, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_192_192));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[69])));
#line 188 "add_type.m"
              }
#line 187 "add_type.m"
              {
#line 187 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisPieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67])));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_191_191));
#line 187 "add_type.m"
              }
#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__V_199_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisPieces_67));
#line 190 "add_type.m"
              }
#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_199_199));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_198_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "add_type.m"
              }
#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisMsg_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_68, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_68, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_198_198));
#line 190 "add_type.m"
              }
#line 192 "add_type.m"
              {
#line 192 "add_type.m"
                hlds__make_hlds__add_type__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_203_203, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisMsg_68));
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "add_type.m"
              }
#line 191 "add_type.m"
              {
#line 191 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisSpec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_203_203));
#line 191 "add_type.m"
              }
#line 193 "add_type.m"
              {
#line 193 "add_type.m"
                MR_Word base;
#line 193 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 193 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisSpec_69));
#line 193 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 193 "add_type.m"
              }
#line 196 "add_type.m"
              {
#line 196 "add_type.m"
                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_57, &hlds__make_hlds__add_type__ErrTypeDefn_70);
              }
#line 198 "add_type.m"
              {
#line 198 "add_type.m"
                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__ErrTypeDefn_70, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_71);
              }
#line 200 "add_type.m"
              {
#line 200 "add_type.m"
                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_71, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
#line 200 "add_type.m"
                return;
              }
#line 189 "add_type.m"
            }
#line 201 "add_type.m"
          else
#line 273 "add_type.m"
            {
#line 273 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TVarSet2_73;
#line 273 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Params2_74;
#line 273 "add_type.m"
              MR_Word hlds__make_hlds__add_type__KindMap2_75;
#line 273 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body2_76;
#line 273 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigContext_77;
#line 273 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigStatus_78;
#line 273 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigInExportedEqv_79;
#line 273 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigNeedQual_80;
#line 203 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn2_72;
#line 212 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_81_81;

#line 203 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_54)) == (MR_mktag((MR_Integer) 1)));
#line 203 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 203 "add_type.m"
                {
#line 203 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn2_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, (MR_Integer) 0)));
#line 204 "add_type.m"
                  {
#line 204 "add_type.m"
                    hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__TVarSet2_73);
                  }
#line 205 "add_type.m"
                  {
#line 205 "add_type.m"
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__Params2_74);
                  }
#line 206 "add_type.m"
                  {
#line 206 "add_type.m"
                    hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__KindMap2_75);
                  }
#line 207 "add_type.m"
                  {
#line 207 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__Body2_76);
                  }
#line 208 "add_type.m"
                  {
#line 208 "add_type.m"
                    hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigContext_77);
                  }
#line 209 "add_type.m"
                  {
#line 209 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigStatus_78);
                  }
#line 210 "add_type.m"
                  {
#line 210 "add_type.m"
                    hlds__hlds_data__get_type_defn_in_exported_eqv_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigInExportedEqv_79);
                  }
#line 211 "add_type.m"
                  {
#line 211 "add_type.m"
                    hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigNeedQual_80);
                  }
#line 212 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body2_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body2_76, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 212 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 212 "add_type.m"
                    hlds__make_hlds__add_type__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body2_76, (MR_Integer) 1)));
#line 212 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded);
#line 203 "add_type.m"
                }
#line 273 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 214 "add_type.m"
                {
#line 214 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Target_82;
#line 214 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MakeOptInt_83;
#line 223 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_84_84;

#line 214 "add_type.m"
                  {
#line 214 "add_type.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_20, &hlds__make_hlds__add_type__Target_82);
                  }
#line 215 "add_type.m"
                  {
#line 215 "add_type.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_type__Globals_20, (MR_Integer) 87, &hlds__make_hlds__add_type__MakeOptInt_83);
                  }
#line 223 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 223 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 223 "add_type.m"
                    {
#line 223 "add_type.m"
                      hlds__make_hlds__add_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 1)));
#line 225 "add_type.m"
                      {
#line 225 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = parse_tree__status____Unify____import_status_0_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigStatus_78);
                      }
#line 227 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 227 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 227 "add_type.m"
                      else
#line 230 "add_type.m"
                        {
#line 230 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeDefn3_85;
#line 230 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeTable_272;

#line 228 "add_type.m"
                          {
#line 228 "add_type.m"
                            hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_73, hlds__make_hlds__add_type__Params2_74, hlds__make_hlds__add_type__KindMap2_75, hlds__make_hlds__add_type__Body2_76, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__OrigNeedQual_80, (MR_Integer) 0, hlds__make_hlds__add_type__OrigContext_77, &hlds__make_hlds__add_type__TypeDefn3_85);
                          }
#line 231 "add_type.m"
                          {
#line 231 "add_type.m"
                            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn3_85, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_272);
                          }
#line 233 "add_type.m"
                          {
#line 233 "add_type.m"
                            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_272, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                          }
#line 230 "add_type.m"
                        }
#line 227 "add_type.m"
                      *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 223 "add_type.m"
                    }
#line 223 "add_type.m"
                  else
#line 262 "add_type.m"
                    {
#line 262 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__NewBody_86;

#line 236 "add_type.m"
                      {
#line 236 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(hlds__make_hlds__add_type__Target_82, hlds__make_hlds__add_type__MakeOptInt_83, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, hlds__make_hlds__add_type__Body2_76, &hlds__make_hlds__add_type__NewBody_86);
                      }
#line 262 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 246 "add_type.m"
                        {
#line 239 "add_type.m"
                          {
#line 239 "add_type.m"
                            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(hlds__make_hlds__add_type__OrigStatus_78, hlds__make_hlds__add_type__Status1_34);
                          }
#line 246 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 242 "add_type.m"
                            {
#line 242 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_275;
#line 242 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeDefn3_276;

#line 240 "add_type.m"
                              {
#line 240 "add_type.m"
                                hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_73, hlds__make_hlds__add_type__Params2_74, hlds__make_hlds__add_type__KindMap2_75, hlds__make_hlds__add_type__NewBody_86, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__NeedQual_17, (MR_Integer) 0, hlds__make_hlds__add_type__Context_15, &hlds__make_hlds__add_type__TypeDefn3_276);
                              }
#line 243 "add_type.m"
                              {
#line 243 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn3_276, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_275);
                              }
#line 245 "add_type.m"
                              {
#line 245 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_275, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                              }
#line 242 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 242 "add_type.m"
                            }
#line 246 "add_type.m"
                          else
#line 247 "add_type.m"
                            {
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisPieces_87;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisMsg_88;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisSpec_89;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_216_216;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_217_217;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_218_218;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_233_233;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_234_234;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_238_238;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_277;
#line 247 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_278;

#line 247 "add_type.m"
                              {
#line 247 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213);
                              }
#line 249 "add_type.m"
                              {
#line 249 "add_type.m"
                                hlds__make_hlds__add_type__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_218_218, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_218_218, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 249 "add_type.m"
                              }
#line 249 "add_type.m"
                              {
#line 249 "add_type.m"
                                hlds__make_hlds__add_type__V_217_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_217_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_217_217, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_218_218));
#line 249 "add_type.m"
                              }
#line 249 "add_type.m"
                              {
#line 249 "add_type.m"
                                hlds__make_hlds__add_type__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_216_216, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_217_217));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[31])));
#line 249 "add_type.m"
                              }
#line 248 "add_type.m"
                              {
#line 248 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisPieces_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 248 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_87, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_216_216));
#line 248 "add_type.m"
                              }
#line 252 "add_type.m"
                              {
#line 252 "add_type.m"
                                hlds__make_hlds__add_type__V_234_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 252 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisPieces_87));
#line 252 "add_type.m"
                              }
#line 252 "add_type.m"
                              {
#line 252 "add_type.m"
                                hlds__make_hlds__add_type__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_233_233, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_234_234));
#line 252 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_233_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 252 "add_type.m"
                              }
#line 252 "add_type.m"
                              {
#line 252 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisMsg_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 252 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 252 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_233_233));
#line 252 "add_type.m"
                              }
#line 254 "add_type.m"
                              {
#line 254 "add_type.m"
                                hlds__make_hlds__add_type__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_238_238, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisMsg_88));
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_238_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "add_type.m"
                              }
#line 253 "add_type.m"
                              {
#line 253 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisSpec_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 253 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 253 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_238_238));
#line 253 "add_type.m"
                              }
#line 255 "add_type.m"
                              {
#line 255 "add_type.m"
                                MR_Word base;
#line 255 "add_type.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_type.m"
                                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 255 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisSpec_89));
#line 255 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 255 "add_type.m"
                              }
#line 256 "add_type.m"
                              {
#line 256 "add_type.m"
                                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_57, &hlds__make_hlds__add_type__ErrTypeDefn_277);
                              }
#line 258 "add_type.m"
                              {
#line 258 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__ErrTypeDefn_277, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_278);
                              }
#line 260 "add_type.m"
                              {
#line 260 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_278, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
#line 260 "add_type.m"
                                return;
                              }
#line 247 "add_type.m"
                            }
#line 246 "add_type.m"
                        }
#line 262 "add_type.m"
                      else
#line 268 "add_type.m"
                        {
#line 265 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 268 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 267 "add_type.m"
                            {
#line 267 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 267 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 267 "add_type.m"
                            }
#line 268 "add_type.m"
                          else
#line 269 "add_type.m"
                            {
#line 269 "add_type.m"
                              {
#line 269 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                              }
#line 270 "add_type.m"
                              {
#line 270 "add_type.m"
                                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__Name_12, hlds__make_hlds__add_type__Arity_21, (MR_String) "type", hlds__make_hlds__add_type__Context_15, hlds__make_hlds__add_type__OrigContext_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98);
#line 270 "add_type.m"
                                return;
                              }
#line 269 "add_type.m"
                            }
#line 268 "add_type.m"
                        }
#line 262 "add_type.m"
                    }
#line 214 "add_type.m"
                }
#line 273 "add_type.m"
              else
#line 275 "add_type.m"
                {
#line 275 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__TypeTable_289;

#line 274 "add_type.m"
                  {
#line 274 "add_type.m"
                    hlds__hlds_data__add_or_replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn1_57, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_289);
                  }
#line 276 "add_type.m"
                  {
#line 276 "add_type.m"
                    hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_289, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                  }
#line 282 "add_type.m"
                  {
#line 282 "add_type.m"
                    hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(&hlds__make_hlds__add_type__env);
                  }
#line 297 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 290 "add_type.m"
                    {
#line 290 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvMsg_93;
#line 290 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvSpec_94;
#line 290 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_260_260;
#line 290 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_262_262;
#line 290 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_263_263;
#line 290 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_265_265;
#line 290 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_269_269;

#line 293 "add_type.m"
                      {
#line 293 "add_type.m"
                        hlds__make_hlds__add_type__V_265_265 = hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0();
                      }
#line 293 "add_type.m"
                      {
#line 293 "add_type.m"
                        hlds__make_hlds__add_type__V_263_263 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_263_263, 0) = ((MR_Box) ((MR_Integer) 1));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_263_263, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_265_265));
#line 293 "add_type.m"
                      }
#line 293 "add_type.m"
                      {
#line 293 "add_type.m"
                        hlds__make_hlds__add_type__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_262_262, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_263_263));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_262_262, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "add_type.m"
                      }
#line 292 "add_type.m"
                      {
#line 292 "add_type.m"
                        hlds__make_hlds__add_type__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 292 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_260_260, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0]));
#line 292 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_260_260, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_262_262));
#line 292 "add_type.m"
                      }
#line 291 "add_type.m"
                      {
#line 291 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvMsg_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 291 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_93, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 291 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_93, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_260_260));
#line 291 "add_type.m"
                      }
#line 295 "add_type.m"
                      {
#line 295 "add_type.m"
                        hlds__make_hlds__add_type__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_269_269, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvMsg_93));
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_269_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "add_type.m"
                      }
#line 294 "add_type.m"
                      {
#line 294 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvSpec_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_269_269));
#line 294 "add_type.m"
                      }
#line 296 "add_type.m"
                      {
#line 296 "add_type.m"
                        MR_Word base;
#line 296 "add_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 296 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvSpec_94));
#line 296 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 296 "add_type.m"
                      }
#line 290 "add_type.m"
                    }
#line 297 "add_type.m"
                  else
#line 297 "add_type.m"
                    *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 275 "add_type.m"
                }
#line 273 "add_type.m"
            }
#line 201 "add_type.m"
        }
#line 80 "add_type.m"
    }
#line 35 "add_type.m"
  }
#line 35 "add_type.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds.add_type. */
