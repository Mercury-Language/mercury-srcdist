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



#line 734 "add_type.m"
struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
#line 743 "add_type.m"
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
#line 760 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
#line 762 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
#line 762 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98;
#line 762 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118;
#line 762 "add_type.m"
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98;
#line 734 "add_type.m"
};

#line 35 "add_type.m"
struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s {
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13;
#line 81 "add_type.m"
  MR_bool hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50;
#line 283 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0;
#line 283 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90;
#line 283 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91;
#line 285 "add_type.m"
  MR_Box hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91;
#line 286 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1;
#line 286 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303;
#line 286 "add_type.m"
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

#line 801 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__801__1_1_f_0(
#line 801 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94);

#line 893 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 893 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 893 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 893 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 893 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 893 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);

#line 889 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 889 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 889 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 889 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 889 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 837 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 837 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 837 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41);

#line 815 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 815 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 815 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 815 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11);

#line 806 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 806 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 806 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 806 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 806 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 806 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 806 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15);

#line 801 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 801 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 801 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1);

#line 792 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 792 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 792 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 792 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 792 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 762 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 762 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 762 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 762 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 762 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 762 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 762 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 762 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 734 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 734 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 734 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 734 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);

#line 715 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15);

#line 658 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 658 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 658 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 658 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 658 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4);

#line 533 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 533 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 533 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 533 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6);

#line 502 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 502 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 502 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 502 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 502 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 502 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5);

#line 459 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_13,
#line 459 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
#line 459 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
#line 459 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29);

#line 361 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 361 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 361 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4);

#line 332 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 332 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 332 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4);

#line 325 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 325 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 325 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 325 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 325 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4);

#line 303 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void);

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 285 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3(
#line 285 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 286 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(
#line 286 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 286 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5(
#line 286 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 286 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(
#line 286 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[79][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[4][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][8];


#line 478 "add_type.m"
/* sealed */ struct hlds__make_hlds__add_type__vector_common_type_5_0_s {
#line 478 "add_type.m"
  const MR_String hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
#line 478 "add_type.m"
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

#line 801 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__801__1_1_f_0(
#line 801 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94)
#line 801 "add_type.m"
{
#line 801 "add_type.m"
  {
#line 801 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 801 "add_type.m"
    MR_Word hlds__make_hlds__add_type__HeadVar__2_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 0)));
#line 801 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 1)));
#line 801 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 2)));
#line 801 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 3)));

#line 801 "add_type.m"
    return hlds__make_hlds__add_type__HeadVar__2_95;
#line 801 "add_type.m"
  }
#line 801 "add_type.m"
}

#line 893 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 893 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 893 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 893 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 893 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 893 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11)
#line 893 "add_type.m"
{
#line 896 "add_type.m"
  {
#line 896 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 896 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_12_12;

#line 897 "add_type.m"
    {
#line 897 "add_type.m"
      hlds__make_hlds__add_type__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleName_8));
#line 897 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldName_6));
#line 897 "add_type.m"
    }
#line 897 "add_type.m"
    {
#line 897 "add_type.m"
      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_12_12)), ((MR_Box) (hlds__make_hlds__add_type__FieldNameDefn_7)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);
#line 897 "add_type.m"
      return;
    }
#line 896 "add_type.m"
  }
#line 893 "add_type.m"
}

#line 889 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 889 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 889 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 889 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 889 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 889 "add_type.m"
{
#line 889 "add_type.m"
  {
#line 889 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 889 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11;

#line 889 "add_type.m"
    {
#line 889 "add_type.m"
      hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11);
    }
#line 889 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11));
#line 889 "add_type.m"
  }
#line 889 "add_type.m"
}

#line 837 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 837 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 837 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 837 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41)
#line 837 "add_type.m"
{
#line 843 "add_type.m"
  {
#line 843 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 843 "add_type.m"
    MR_Word hlds__make_hlds__add_type__FieldModule_17;
#line 875 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConflictingDefns_19;
#line 855 "add_type.m"
    MR_Box hlds__make_hlds__add_type__conv0_ConflictingDefns_19;

#line 847 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__FieldName_9)) == (MR_mktag((MR_Integer) 1))))
#line 845 "add_type.m"
      {
#line 845 "add_type.m"
        MR_String hlds__make_hlds__add_type__V_16_16;

#line 845 "add_type.m"
        hlds__make_hlds__add_type__FieldModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 0)));
#line 845 "add_type.m"
        hlds__make_hlds__add_type__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 1)));
#line 845 "add_type.m"
      }
#line 847 "add_type.m"
    else
#line 848 "add_type.m"
      {
#line 849 "add_type.m"
        {
#line 849 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
#line 849 "add_type.m"
          return;
        }
#line 848 "add_type.m"
      }
#line 855 "add_type.m"
    {
#line 855 "add_type.m"
      hlds__make_hlds__add_type__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[3], hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (hlds__make_hlds__add_type__FieldName_9)), &hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
    }
#line 855 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 855 "add_type.m"
      {
#line 855 "add_type.m"
        hlds__make_hlds__add_type__ConflictingDefns_19 = ((MR_Word) hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
#line 855 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 855 "add_type.m"
      }
#line 875 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 860 "add_type.m"
      {
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__OrigContext_21;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Context_26;
#line 860 "add_type.m"
        MR_String hlds__make_hlds__add_type__FieldString_31;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Pieces_32;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__HereMsg_33;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevPieces_34;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevMsg_35;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_36;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_59_59;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_60_60;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_64_64;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_72_72;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_73_73;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_77_77;
#line 860 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_78_78;
#line 858 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConflictingDefn_20;
#line 856 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_45_45;
#line 864 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_27_27;
#line 864 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_28_28;
#line 864 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29;
#line 864 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_30_30;

#line 856 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__ConflictingDefns_19)) == (MR_mktag((MR_Integer) 1)));
#line 856 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 856 "add_type.m"
          {
#line 856 "add_type.m"
            hlds__make_hlds__add_type__ConflictingDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 0)));
#line 856 "add_type.m"
            hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 1)));
#line 856 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "add_type.m"
          }
#line 858 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 857 "add_type.m"
          {
#line 857 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_22_22;
#line 857 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_23_23;
#line 857 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_24_24;
#line 857 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_25_25;

#line 857 "add_type.m"
            hlds__make_hlds__add_type__OrigContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 0)));
#line 857 "add_type.m"
            hlds__make_hlds__add_type__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 1)));
#line 857 "add_type.m"
            hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 2)));
#line 857 "add_type.m"
            hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 3)));
#line 857 "add_type.m"
            hlds__make_hlds__add_type__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 4)));
#line 857 "add_type.m"
          }
#line 858 "add_type.m"
        else
#line 859 "add_type.m"
          {
#line 859 "add_type.m"
            {
#line 859 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
#line 859 "add_type.m"
              return;
            }
#line 859 "add_type.m"
          }
#line 864 "add_type.m"
        hlds__make_hlds__add_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 0)));
#line 864 "add_type.m"
        hlds__make_hlds__add_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 1)));
#line 864 "add_type.m"
        hlds__make_hlds__add_type__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 2)));
#line 864 "add_type.m"
        hlds__make_hlds__add_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 3)));
#line 864 "add_type.m"
        hlds__make_hlds__add_type__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 4)));
#line 865 "add_type.m"
        {
#line 865 "add_type.m"
          hlds__make_hlds__add_type__FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 866 "add_type.m"
        {
#line 866 "add_type.m"
          hlds__make_hlds__add_type__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 866 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldString_31));
#line 866 "add_type.m"
        }
#line 866 "add_type.m"
        {
#line 866 "add_type.m"
          hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 866 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 866 "add_type.m"
        }
#line 866 "add_type.m"
        {
#line 866 "add_type.m"
          hlds__make_hlds__add_type__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[77])));
#line 866 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 866 "add_type.m"
        }
#line 868 "add_type.m"
        {
#line 868 "add_type.m"
          hlds__make_hlds__add_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 868 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_32));
#line 868 "add_type.m"
        }
#line 868 "add_type.m"
        {
#line 868 "add_type.m"
          hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 868 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_60_60));
#line 868 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 868 "add_type.m"
        }
#line 868 "add_type.m"
        {
#line 868 "add_type.m"
          hlds__make_hlds__add_type__HereMsg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 868 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_26));
#line 868 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 868 "add_type.m"
        }
#line 870 "add_type.m"
        {
#line 870 "add_type.m"
          hlds__make_hlds__add_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[53])));
#line 870 "add_type.m"
        }
#line 869 "add_type.m"
        {
#line 869 "add_type.m"
          hlds__make_hlds__add_type__PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[78])));
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_64_64));
#line 869 "add_type.m"
        }
#line 871 "add_type.m"
        {
#line 871 "add_type.m"
          hlds__make_hlds__add_type__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevPieces_34));
#line 871 "add_type.m"
        }
#line 871 "add_type.m"
        {
#line 871 "add_type.m"
          hlds__make_hlds__add_type__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_73_73));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 871 "add_type.m"
        }
#line 871 "add_type.m"
        {
#line 871 "add_type.m"
          hlds__make_hlds__add_type__PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__OrigContext_21));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_72_72));
#line 871 "add_type.m"
        }
#line 873 "add_type.m"
        {
#line 873 "add_type.m"
          hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevMsg_35));
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "add_type.m"
        }
#line 873 "add_type.m"
        {
#line 873 "add_type.m"
          hlds__make_hlds__add_type__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_type__HereMsg_33));
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 873 "add_type.m"
        }
#line 872 "add_type.m"
        {
#line 872 "add_type.m"
          hlds__make_hlds__add_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_77_77));
#line 872 "add_type.m"
        }
#line 874 "add_type.m"
        {
#line 874 "add_type.m"
          MR_Word base;
#line 874 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = base;
#line 874 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_36));
#line 874 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40));
#line 874 "add_type.m"
        }
#line 860 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 860 "add_type.m"
      }
#line 875 "add_type.m"
    else
#line 876 "add_type.m"
      {
#line 876 "add_type.m"
        MR_String hlds__make_hlds__add_type__UnqualFieldName_37;
#line 876 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82;
#line 876 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_83_83;
#line 876 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_84_84;
#line 889 "add_type.m"
        MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39;

#line 876 "add_type.m"
        {
#line 876 "add_type.m"
          hlds__make_hlds__add_type__UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 884 "add_type.m"
#line 884 "add_type.m"
        switch (hlds__make_hlds__add_type__NeedQual_11) {
#line 884 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 884 "add_type.m"
          case (MR_Integer) 1:
#line 881 "add_type.m"
            {
#line 881 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_81_81;

#line 882 "add_type.m"
              {
#line 882 "add_type.m"
                hlds__make_hlds__add_type__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 882 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 882 "add_type.m"
              }
#line 882 "add_type.m"
              {
#line 882 "add_type.m"
                mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_81_81)), ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82);
              }
#line 881 "add_type.m"
            }
#line 884 "add_type.m"
            break;
#line 884 "add_type.m"
          case (MR_Integer) 0:
#line 885 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 884 "add_type.m"
            break;
#line 884 "add_type.m"
        }
#line 889 "add_type.m"
        {
#line 889 "add_type.m"
          hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 889 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[0]));
#line 889 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
#line 889 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 889 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 3) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 889 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10));
#line 889 "add_type.m"
        }
#line 890 "add_type.m"
        {
#line 890 "add_type.m"
          hlds__make_hlds__add_type__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 890 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldModule_17));
#line 890 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_type__PartialQuals_12));
#line 890 "add_type.m"
        }
#line 889 "add_type.m"
        {
#line 889 "add_type.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[0], hlds__make_hlds__add_type__V_83_83, hlds__make_hlds__add_type__V_84_84, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        }
#line 889 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
#line 876 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40;
#line 876 "add_type.m"
      }
#line 843 "add_type.m"
  }
#line 837 "add_type.m"
}

#line 815 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 815 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 815 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 815 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 815 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11)
#line 815 "add_type.m"
{
#line 821 "add_type.m"
  while (MR_TRUE)
#line 821 "add_type.m"
    {
#line 821 "add_type.m"
      /* tailcall optimized into a loop */
#line 821 "add_type.m"
      {
#line 821 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 821 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 821 "add_type.m"
          {
#line 821 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 821 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 821 "add_type.m"
          }
#line 821 "add_type.m"
        else
#line 824 "add_type.m"
          {
#line 824 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 824 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 824 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 824 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;
#line 824 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_44_44;

#line 831 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCtorFieldName_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 832 "add_type.m"
              {
#line 832 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 832 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 832 "add_type.m"
              }
#line 831 "add_type.m"
            else
#line 826 "add_type.m"
              {
#line 826 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldName_34;
#line 826 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldNameContext_35;
#line 826 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldDefn_36;
#line 826 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeCtorFieldName_24, (MR_Integer) 0)));

#line 826 "add_type.m"
                hlds__make_hlds__add_type__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 0)));
#line 826 "add_type.m"
                hlds__make_hlds__add_type__FieldNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 1)));
#line 827 "add_type.m"
                {
#line 827 "add_type.m"
                  hlds__make_hlds__add_type__FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 827 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldNameContext_35));
#line 827 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__ImportStatus_6));
#line 827 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_4));
#line 827 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 3) = ((MR_Box) (hlds__make_hlds__add_type__ConsId_5));
#line 827 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldNumber_7));
#line 827 "add_type.m"
                }
#line 829 "add_type.m"
                {
#line 829 "add_type.m"
                  hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(hlds__make_hlds__add_type__FieldName_34, hlds__make_hlds__add_type__FieldDefn_36, hlds__make_hlds__add_type__NeedQual_2, hlds__make_hlds__add_type__PartialQuals_3, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43);
                }
#line 826 "add_type.m"
              }
#line 835 "add_type.m"
            hlds__make_hlds__add_type__V_44_44 = (hlds__make_hlds__add_type__FieldNumber_7 + (MR_Integer) 1);
#line 834 "add_type.m"
            /* direct tailcall eliminated */
#line 834 "add_type.m"
            {
#line 834 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__MaybeCtorFieldNames_25;
#line 834 "add_type.m"
              MR_Integer hlds__make_hlds__add_type__FieldNumber__tmp_copy_7 = hlds__make_hlds__add_type__V_44_44;
#line 834 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 834 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;

#line 834 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 834 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8;
#line 834 "add_type.m"
              hlds__make_hlds__add_type__FieldNumber_7 = hlds__make_hlds__add_type__FieldNumber__tmp_copy_7;
#line 834 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 834 "add_type.m"
            }
#line 834 "add_type.m"
            continue;
#line 824 "add_type.m"
          }
#line 821 "add_type.m"
      }
#line 821 "add_type.m"
      break;
#line 821 "add_type.m"
    }
#line 815 "add_type.m"
}

#line 806 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 806 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 806 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 806 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 806 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 806 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 806 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15)
#line 806 "add_type.m"
{
#line 809 "add_type.m"
  {
#line 809 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 809 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdA_12;
#line 809 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdB_13;
#line 809 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_16_16;
#line 809 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_18_18;
#line 809 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_20_20;

#line 810 "add_type.m"
    {
#line 810 "add_type.m"
      hlds__make_hlds__add_type__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleQual_10));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_type__ConsName_8));
#line 810 "add_type.m"
    }
#line 810 "add_type.m"
    {
#line 810 "add_type.m"
      hlds__make_hlds__add_type__ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 810 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 3) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_7));
#line 810 "add_type.m"
    }
#line 812 "add_type.m"
    {
#line 812 "add_type.m"
      hlds__make_hlds__add_type__V_18_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 811 "add_type.m"
    {
#line 811 "add_type.m"
      hlds__make_hlds__add_type__ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_18_18));
#line 811 "add_type.m"
    }
#line 813 "add_type.m"
    {
#line 813 "add_type.m"
      hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdB_13));
#line 813 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14));
#line 813 "add_type.m"
    }
#line 813 "add_type.m"
    {
#line 813 "add_type.m"
      MR_Word base;
#line 813 "add_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 813 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15 = base;
#line 813 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdA_12));
#line 813 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 813 "add_type.m"
    }
#line 809 "add_type.m"
  }
#line 806 "add_type.m"
}

#line 801 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 801 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 801 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1)
#line 801 "add_type.m"
{
#line 801 "add_type.m"
  {
#line 801 "add_type.m"
    MR_Box hlds__make_hlds__add_type__wrapper_arg_2;
#line 801 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 801 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv3_HeadVar__2_95;

#line 801 "add_type.m"
    {
#line 801 "add_type.m"
      hlds__make_hlds__add_type__conv3_HeadVar__2_95 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__801__1_1_f_0(((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1));
    }
#line 801 "add_type.m"
    hlds__make_hlds__add_type__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_type__conv3_HeadVar__2_95));
#line 801 "add_type.m"
    return hlds__make_hlds__add_type__wrapper_arg_2;
#line 801 "add_type.m"
  }
#line 801 "add_type.m"
}

#line 792 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 792 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 792 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 792 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 792 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 792 "add_type.m"
{
#line 792 "add_type.m"
  {
#line 792 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 792 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15;

#line 792 "add_type.m"
    {
#line 792 "add_type.m"
      hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15);
    }
#line 792 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15));
#line 792 "add_type.m"
  }
#line 792 "add_type.m"
}

#line 762 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 762 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 762 "add_type.m"
{
#line 762 "add_type.m"
  {
#line 762 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 762 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
#line 762 "add_type.m"
  }
#line 762 "add_type.m"
}

#line 762 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 762 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 762 "add_type.m"
{
#line 762 "add_type.m"
  {
#line 762 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 762 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98);
#line 762 "add_type.m"
    {
#line 762 "add_type.m"
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 762 "add_type.m"
      return;
    }
#line 762 "add_type.m"
  }
#line 762 "add_type.m"
}

#line 762 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 762 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 762 "add_type.m"
{
#line 762 "add_type.m"
  {
#line 762 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 762 "add_type.m"
    {
#line 763 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_100_100;
#line 763 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 763 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 763 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 763 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 763 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_105_105;
#line 763 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_106_106;

#line 763 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 0)));
#line 763 "add_type.m"
      hlds__make_hlds__add_type__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 1)));
#line 763 "add_type.m"
      hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 2)));
#line 763 "add_type.m"
      hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 3)));
#line 763 "add_type.m"
      hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 4)));
#line 763 "add_type.m"
      hlds__make_hlds__add_type__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 5)));
#line 763 "add_type.m"
      hlds__make_hlds__add_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 6)));
#line 763 "add_type.m"
      hlds__make_hlds__add_type__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 7)));
#line 763 "add_type.m"
      {
#line 763 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118);
      }
#line 763 "add_type.m"
      if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 763 "add_type.m"
        {
#line 763 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 763 "add_type.m"
          return;
        }
#line 762 "add_type.m"
    }
#line 762 "add_type.m"
  }
#line 762 "add_type.m"
}

#line 762 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 762 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 762 "add_type.m"
{
#line 762 "add_type.m"
  {
#line 762 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 762 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
#line 762 "add_type.m"
      {
#line 762 "add_type.m"
        {
#line 762 "add_type.m"
          {
#line 762 "add_type.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, hlds__make_hlds__add_type__env_ptr);
          }
#line 762 "add_type.m"
        }
#line 762 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
#line 762 "add_type.m"
      }
#line 762 "add_type.m"
    else
#line 762 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
#line 762 "add_type.m"
  }
#line 762 "add_type.m"
}

#line 734 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 734 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 734 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 734 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 734 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60)
#line 734 "add_type.m"
{
#line 734 "add_type.m"
  {
#line 734 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 734 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = hlds__make_hlds__add_type__TypeCtor_17;
#line 743 "add_type.m"
    {
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 0)));
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 1)));
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 2)));
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 3)));
#line 743 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 4)));
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 5)));
#line 743 "add_type.m"
      MR_String hlds__make_hlds__add_type__BaseName_34;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedName_35;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedName_36;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdA_37;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdB_38;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdA_39;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdB_40;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ConsDefn_41;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__PartialQuals_42;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__FieldNames_52;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_61_61;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_62_62;
#line 743 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85;

#line 745 "add_type.m"
      {
#line 745 "add_type.m"
        hlds__make_hlds__add_type__BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__Name_30);
      }
#line 746 "add_type.m"
      {
#line 746 "add_type.m"
        hlds__make_hlds__add_type__QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 746 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorModuleName_18));
#line 746 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 746 "add_type.m"
      }
#line 747 "add_type.m"
      {
#line 747 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 747 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__UnqualifiedName_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 747 "add_type.m"
      }
#line 748 "add_type.m"
      {
#line 748 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 748 "add_type.m"
      }
#line 749 "add_type.m"
      {
#line 749 "add_type.m"
        hlds__make_hlds__add_type__V_61_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 749 "add_type.m"
      {
#line 749 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_61_61));
#line 749 "add_type.m"
      }
#line 750 "add_type.m"
      {
#line 750 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 750 "add_type.m"
      }
#line 751 "add_type.m"
      {
#line 751 "add_type.m"
        hlds__make_hlds__add_type__V_62_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 751 "add_type.m"
      {
#line 751 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 751 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 751 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 751 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 751 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_62_62));
#line 751 "add_type.m"
      }
#line 753 "add_type.m"
      {
#line 753 "add_type.m"
        hlds__make_hlds__add_type__ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 753 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 0) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 753 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__TVarSet_19));
#line 753 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeParams_20));
#line 753 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 3) = ((MR_Box) (hlds__make_hlds__add_type__KindMap_21));
#line 753 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 4) = ((MR_Box) (hlds__make_hlds__add_type__ExistQVars_28));
#line 753 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 5) = ((MR_Box) (hlds__make_hlds__add_type__Constraints_29));
#line 753 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 6) = ((MR_Box) (hlds__make_hlds__add_type__Args_31));
#line 753 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 7) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 753 "add_type.m"
      }
#line 755 "add_type.m"
      {
#line 755 "add_type.m"
        parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__make_hlds__add_type__TypeCtorModuleName_18, hlds__make_hlds__add_type__PQInfo_23, &hlds__make_hlds__add_type__PartialQuals_42);
      }
#line 760 "add_type.m"
      {
#line 760 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_3_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__QualifiedConsIdA_37, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
      }
#line 760 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 762 "add_type.m"
        {
#line 762 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&hlds__make_hlds__add_type__env);
        }
#line 774 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 766 "add_type.m"
        {
#line 766 "add_type.m"
          MR_String hlds__make_hlds__add_type__QualifiedConsIdStr_45;
#line 766 "add_type.m"
          MR_String hlds__make_hlds__add_type__TypeCtorStr_46;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Pieces_47;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Msg_48;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Spec_49;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_65_65;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_67_67;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_70_70;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_71_71;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_78_78;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_79_79;
#line 766 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_83_83;

#line 766 "add_type.m"
          {
#line 766 "add_type.m"
            hlds__make_hlds__add_type__QualifiedConsIdStr_45 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__make_hlds__add_type__QualifiedConsIdA_37);
          }
#line 767 "add_type.m"
          {
#line 767 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorStr_46 = parse_tree__prog_out__type_ctor_to_string_1_f_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
          }
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdStr_45));
#line 768 "add_type.m"
          }
#line 769 "add_type.m"
          {
#line 769 "add_type.m"
            hlds__make_hlds__add_type__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorStr_46));
#line 769 "add_type.m"
          }
#line 769 "add_type.m"
          {
#line 769 "add_type.m"
            hlds__make_hlds__add_type__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_71_71));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 769 "add_type.m"
          }
#line 769 "add_type.m"
          {
#line 769 "add_type.m"
            hlds__make_hlds__add_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[76])));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_70_70));
#line 769 "add_type.m"
          }
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_67_67));
#line 768 "add_type.m"
          }
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            hlds__make_hlds__add_type__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
#line 768 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 768 "add_type.m"
          }
#line 771 "add_type.m"
          {
#line 771 "add_type.m"
            hlds__make_hlds__add_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_47));
#line 771 "add_type.m"
          }
#line 771 "add_type.m"
          {
#line 771 "add_type.m"
            hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_79_79));
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "add_type.m"
          }
#line 771 "add_type.m"
          {
#line 771 "add_type.m"
            hlds__make_hlds__add_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 771 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 771 "add_type.m"
          }
#line 772 "add_type.m"
          {
#line 772 "add_type.m"
            hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_48));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "add_type.m"
          }
#line 772 "add_type.m"
          {
#line 772 "add_type.m"
            hlds__make_hlds__add_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_83_83));
#line 772 "add_type.m"
          }
#line 773 "add_type.m"
          {
#line 773 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_49));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59));
#line 773 "add_type.m"
          }
#line 766 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57;
#line 766 "add_type.m"
        }
#line 774 "add_type.m"
      else
#line 775 "add_type.m"
        {
#line 775 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 775 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88;
#line 775 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_90_90;
#line 775 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91;
#line 792 "add_type.m"
          MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91;

#line 779 "add_type.m"
          {
#line 779 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 779 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdB_38));
#line 779 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 779 "add_type.m"
          }
#line 787 "add_type.m"
#line 787 "add_type.m"
          switch (hlds__make_hlds__add_type__NeedQual_22) {
#line 787 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 787 "add_type.m"
            case (MR_Integer) 1:
#line 784 "add_type.m"
              {
#line 784 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_89_89;

#line 786 "add_type.m"
                {
#line 786 "add_type.m"
                  hlds__make_hlds__add_type__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdB_40));
#line 786 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86));
#line 786 "add_type.m"
                }
#line 786 "add_type.m"
                {
#line 786 "add_type.m"
                  hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 786 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdA_39));
#line 786 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_89_89));
#line 786 "add_type.m"
                }
#line 784 "add_type.m"
              }
#line 787 "add_type.m"
              break;
#line 787 "add_type.m"
            case (MR_Integer) 0:
#line 788 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 787 "add_type.m"
              break;
#line 787 "add_type.m"
          }
#line 792 "add_type.m"
          {
#line 792 "add_type.m"
            hlds__make_hlds__add_type__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 792 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
#line 792 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
#line 792 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 792 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 792 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 4) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 792 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 5) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 792 "add_type.m"
          }
#line 792 "add_type.m"
          {
#line 792 "add_type.m"
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[1], hlds__make_hlds__add_type__V_90_90, hlds__make_hlds__add_type__PartialQuals_42, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
          }
#line 792 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
#line 796 "add_type.m"
          {
#line 796 "add_type.m"
            hlds__hlds_data__insert_into_cons_table_5_p_0(hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91, hlds__make_hlds__add_type__ConsDefn_41, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58);
          }
#line 775 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59;
#line 775 "add_type.m"
        }
#line 801 "add_type.m"
      {
#line 801 "add_type.m"
        hlds__make_hlds__add_type__FieldNames_52 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[2], (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[1], hlds__make_hlds__add_type__Args_31);
      }
#line 803 "add_type.m"
      {
#line 803 "add_type.m"
        hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(hlds__make_hlds__add_type__FieldNames_52, hlds__make_hlds__add_type__NeedQual_22, hlds__make_hlds__add_type__PartialQuals_42, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__ImportStatus_24, (MR_Integer) 1, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);
#line 803 "add_type.m"
        return;
      }
#line 743 "add_type.m"
    }
#line 734 "add_type.m"
  }
#line 734 "add_type.m"
}

#line 715 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15)
#line 715 "add_type.m"
{
#line 722 "add_type.m"
  while (MR_TRUE)
#line 722 "add_type.m"
    {
#line 722 "add_type.m"
      /* tailcall optimized into a loop */
#line 722 "add_type.m"
      {
#line 722 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 722 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 722 "add_type.m"
          {
#line 723 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14;
#line 723 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12;
#line 723 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10;
#line 722 "add_type.m"
          }
#line 722 "add_type.m"
        else
#line 726 "add_type.m"
          {
#line 726 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 726 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 726 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 726 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 726 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 727 "add_type.m"
            {
#line 727 "add_type.m"
              hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(hlds__make_hlds__add_type__Ctor_33, hlds__make_hlds__add_type__TypeCtor_2, hlds__make_hlds__add_type__TypeCtorModuleName_3, hlds__make_hlds__add_type__TVarSet_4, hlds__make_hlds__add_type__TypeParams_5, hlds__make_hlds__add_type__KindMap_6, hlds__make_hlds__add_type__NeedQual_7, hlds__make_hlds__add_type__PQInfo_8, hlds__make_hlds__add_type__ImportStatus_9, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12, &hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54);
            }
#line 730 "add_type.m"
            /* direct tailcall eliminated */
#line 730 "add_type.m"
            {
#line 730 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__Ctors_34;
#line 730 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 730 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 730 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 730 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14;
#line 730 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12;
#line 730 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10;
#line 730 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 730 "add_type.m"
            }
#line 730 "add_type.m"
            continue;
#line 726 "add_type.m"
          }
#line 722 "add_type.m"
      }
#line 722 "add_type.m"
      break;
#line 722 "add_type.m"
    }
#line 715 "add_type.m"
}

#line 658 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 658 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 658 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 658 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 658 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4)
#line 658 "add_type.m"
{
#line 662 "add_type.m"
  {
#line 662 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 662 "add_type.m"
#line 662 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) {
#line 662 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 662 "add_type.m"
      case (MR_Integer) 0:
#line 662 "add_type.m"
        {
#line 662 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 662 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 662 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeDirectArgCtors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 662 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorTagMap_12;
#line 662 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedAddr_13;
#line 662 "add_type.m"
          MR_Word hlds__make_hlds__add_type__IsEnum_14;
#line 662 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CheaperTagTest_16;

#line 670 "add_type.m"
          {
#line 670 "add_type.m"
            hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_type__Body_5, hlds__make_hlds__add_type__MaybeUserEqComp_6, hlds__make_hlds__add_type__TypeCtor_2, (MR_Integer) 1, hlds__make_hlds__add_type__Globals_3, &hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__ReservedAddr_13, &hlds__make_hlds__add_type__IsEnum_14);
          }
#line 673 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__ReservedAddr_13 == (MR_Integer) 1);
#line 675 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 674 "add_type.m"
            {
#line 674 "add_type.m"
              hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__CheaperTagTest_16);
            }
#line 675 "add_type.m"
          else
#line 676 "add_type.m"
            hlds__make_hlds__add_type__CheaperTagTest_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 678 "add_type.m"
          {
#line 678 "add_type.m"
            MR_Word base;
#line 678 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 678 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 678 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_5));
#line 678 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorTagMap_12));
#line 678 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__CheaperTagTest_16));
#line 678 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__IsEnum_14));
#line 678 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_6));
#line 678 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__MaybeDirectArgCtors_7));
#line 678 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__make_hlds__add_type__ReservedAddr_13 << (MR_Integer) 1)))));
#line 678 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "add_type.m"
          }
#line 662 "add_type.m"
        }
#line 662 "add_type.m"
        break;
#line 662 "add_type.m"
      case (MR_Integer) 1:
#line 681 "add_type.m"
        {
#line 681 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 681 "add_type.m"
          {
#line 681 "add_type.m"
            MR_Word base;
#line 681 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 681 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 681 "add_type.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_17));
#line 681 "add_type.m"
          }
#line 681 "add_type.m"
        }
#line 662 "add_type.m"
        break;
#line 662 "add_type.m"
      case (MR_Integer) 2:
#line 684 "add_type.m"
        {
#line 684 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Details_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 685 "add_type.m"
          {
#line 685 "add_type.m"
            MR_Word base;
#line 685 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 685 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 685 "add_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 685 "add_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Details_24));
#line 685 "add_type.m"
          }
#line 684 "add_type.m"
        }
#line 662 "add_type.m"
        break;
#line 662 "add_type.m"
      case (MR_Integer) 3:
#line 662 "add_type.m"
#line 662 "add_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 662 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 662 "add_type.m"
          case (MR_Integer) 0:
#line 682 "add_type.m"
            {
#line 682 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 682 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));

#line 683 "add_type.m"
              {
#line 683 "add_type.m"
                MR_Word base;
#line 683 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 683 "add_type.m"
                *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 683 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 683 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__SolverTypeDetails_20));
#line 683 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_21));
#line 683 "add_type.m"
              }
#line 682 "add_type.m"
            }
#line 662 "add_type.m"
            break;
#line 662 "add_type.m"
          case (MR_Integer) 1:
#line 687 "add_type.m"
            {
#line 687 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 687 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 687 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 3)));
#line 687 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_32;

#line 693 "add_type.m"
#line 693 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) {
#line 693 "add_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 693 "add_type.m"
                case (MR_Integer) 0:
#line 689 "add_type.m"
                  {
#line 689 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__ILForeignType_33 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__ForeignType_27), (MR_Integer) 0);
#line 689 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_34;
#line 689 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_59_59;

#line 690 "add_type.m"
                    {
#line 690 "add_type.m"
                      hlds__make_hlds__add_type__Data_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 690 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__ILForeignType_33));
#line 690 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 690 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 690 "add_type.m"
                    }
#line 692 "add_type.m"
                    {
#line 692 "add_type.m"
                      hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 692 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_34));
#line 692 "add_type.m"
                    }
#line 692 "add_type.m"
                    {
#line 692 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 692 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 692 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 692 "add_type.m"
                    }
#line 689 "add_type.m"
                  }
#line 693 "add_type.m"
                  break;
#line 693 "add_type.m"
                case (MR_Integer) 1:
#line 694 "add_type.m"
                  {
#line 694 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__CForeignType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 694 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_55_55;
#line 694 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_64;

#line 695 "add_type.m"
                    {
#line 695 "add_type.m"
                      hlds__make_hlds__add_type__Data_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 695 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__CForeignType_35));
#line 695 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 695 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 695 "add_type.m"
                    }
#line 697 "add_type.m"
                    {
#line 697 "add_type.m"
                      hlds__make_hlds__add_type__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 697 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_64));
#line 697 "add_type.m"
                    }
#line 697 "add_type.m"
                    {
#line 697 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 697 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_55_55));
#line 697 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 697 "add_type.m"
                    }
#line 694 "add_type.m"
                  }
#line 693 "add_type.m"
                  break;
#line 693 "add_type.m"
                case (MR_Integer) 2:
#line 699 "add_type.m"
                  {
#line 699 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__JavaForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 699 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_51_51;
#line 699 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_65;

#line 700 "add_type.m"
                    {
#line 700 "add_type.m"
                      hlds__make_hlds__add_type__Data_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 700 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__JavaForeignType_36));
#line 700 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 700 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 700 "add_type.m"
                    }
#line 702 "add_type.m"
                    {
#line 702 "add_type.m"
                      hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 702 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_65));
#line 702 "add_type.m"
                    }
#line 702 "add_type.m"
                    {
#line 702 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 702 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 702 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "add_type.m"
                    }
#line 699 "add_type.m"
                  }
#line 693 "add_type.m"
                  break;
#line 693 "add_type.m"
                case (MR_Integer) 3:
#line 693 "add_type.m"
#line 693 "add_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)))) {
#line 693 "add_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 693 "add_type.m"
                    case (MR_Integer) 0:
#line 704 "add_type.m"
                      {
#line 704 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__CSharpForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 1)));
#line 704 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_47_47;
#line 704 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_66;

#line 705 "add_type.m"
                        {
#line 705 "add_type.m"
                          hlds__make_hlds__add_type__Data_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 705 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__CSharpForeignType_37));
#line 705 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 705 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 705 "add_type.m"
                        }
#line 707 "add_type.m"
                        {
#line 707 "add_type.m"
                          hlds__make_hlds__add_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 707 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_66));
#line 707 "add_type.m"
                        }
#line 707 "add_type.m"
                        {
#line 707 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 707 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_47_47));
#line 707 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 707 "add_type.m"
                        }
#line 704 "add_type.m"
                      }
#line 693 "add_type.m"
                      break;
#line 693 "add_type.m"
                    case (MR_Integer) 1:
#line 709 "add_type.m"
                      {
#line 709 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_43_43;
#line 709 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_67;

#line 710 "add_type.m"
                        {
#line 710 "add_type.m"
                          hlds__make_hlds__add_type__Data_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 710 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 0) = NULL;
#line 710 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 710 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 710 "add_type.m"
                        }
#line 712 "add_type.m"
                        {
#line 712 "add_type.m"
                          hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 712 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_67));
#line 712 "add_type.m"
                        }
#line 712 "add_type.m"
                        {
#line 712 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 712 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 712 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 712 "add_type.m"
                        }
#line 709 "add_type.m"
                      }
#line 693 "add_type.m"
                      break;
#line 693 "add_type.m"
                  }
#line 693 "add_type.m"
                  break;
#line 693 "add_type.m"
              }
#line 687 "add_type.m"
              *hlds__make_hlds__add_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_32);
#line 687 "add_type.m"
            }
#line 662 "add_type.m"
            break;
#line 662 "add_type.m"
        }
#line 662 "add_type.m"
        break;
#line 662 "add_type.m"
    }
#line 662 "add_type.m"
  }
#line 658 "add_type.m"
}

#line 533 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 533 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 533 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 533 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6)
#line 533 "add_type.m"
{
#line 536 "add_type.m"
  {
#line 536 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 0)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 1)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 2)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 3)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 4)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 0)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 1)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 2)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 3)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 4)));
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeIL_17;
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeC_18;
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJava_19;
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_20;
#line 536 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlang_21;

#line 551 "add_type.m"
    if ((hlds__make_hlds__add_type__MaybeILA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
      {
#line 551 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
        else
#line 553 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILB_12;
#line 551 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
      }
#line 551 "add_type.m"
    else
#line 552 "add_type.m"
      {
#line 552 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
          {
#line 552 "add_type.m"
            hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILA_7;
#line 552 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
          }
#line 552 "add_type.m"
      }
#line 536 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 536 "add_type.m"
      {
#line 551 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeCA_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
          {
#line 551 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
            else
#line 553 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCB_13;
#line 551 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
          }
#line 551 "add_type.m"
        else
#line 552 "add_type.m"
          {
#line 552 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
              {
#line 552 "add_type.m"
                hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCA_8;
#line 552 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
              }
#line 552 "add_type.m"
          }
#line 536 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 536 "add_type.m"
          {
#line 551 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeJavaA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
              {
#line 551 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
                else
#line 553 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaB_14;
#line 551 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
              }
#line 551 "add_type.m"
            else
#line 552 "add_type.m"
              {
#line 552 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
                  {
#line 552 "add_type.m"
                    hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaA_9;
#line 552 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                  }
#line 552 "add_type.m"
              }
#line 536 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 536 "add_type.m"
              {
#line 551 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeCSharpA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                  {
#line 551 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
                    else
#line 553 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpB_15;
#line 551 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                  }
#line 551 "add_type.m"
                else
#line 552 "add_type.m"
                  {
#line 552 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
                      {
#line 552 "add_type.m"
                        hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpA_10;
#line 552 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                      }
#line 552 "add_type.m"
                  }
#line 536 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 536 "add_type.m"
                  {
#line 551 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeErlangA_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                      {
#line 551 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
                        else
#line 553 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangB_16;
#line 551 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                      }
#line 551 "add_type.m"
                    else
#line 552 "add_type.m"
                      {
#line 552 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
                          {
#line 552 "add_type.m"
                            hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangA_11;
#line 552 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                          }
#line 552 "add_type.m"
                      }
#line 536 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 536 "add_type.m"
                      {
#line 546 "add_type.m"
                        {
#line 546 "add_type.m"
                          MR_Word base;
#line 546 "add_type.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 546 "add_type.m"
                          *hlds__make_hlds__add_type__TypeBody_6 = base;
#line 546 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_17));
#line 546 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_18));
#line 546 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_19));
#line 546 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_20));
#line 546 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_21));
#line 546 "add_type.m"
                        }
#line 546 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 536 "add_type.m"
                      }
#line 536 "add_type.m"
                  }
#line 536 "add_type.m"
              }
#line 536 "add_type.m"
          }
#line 536 "add_type.m"
      }
#line 536 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 536 "add_type.m"
  }
#line 533 "add_type.m"
}

#line 502 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 502 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 502 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 502 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 502 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 502 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5)
#line 502 "add_type.m"
{
#line 507 "add_type.m"
  while (MR_TRUE)
#line 507 "add_type.m"
    {
#line 507 "add_type.m"
      /* tailcall optimized into a loop */
#line 507 "add_type.m"
      {
#line 507 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 507 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 527 "add_type.m"
          {
#line 527 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;

#line 527 "add_type.m"
            hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 527 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 527 "add_type.m"
              {
#line 527 "add_type.m"
                hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 528 "add_type.m"
                /* direct tailcall eliminated */
#line 528 "add_type.m"
                {
#line 528 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3 = hlds__make_hlds__add_type__HeadVar__4_4;
#line 528 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4 = hlds__make_hlds__add_type__HeadVar__3_3;

#line 528 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__4_4 = hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4;
#line 528 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__3_3 = hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3;
#line 528 "add_type.m"
                }
#line 528 "add_type.m"
                continue;
#line 527 "add_type.m"
              }
#line 527 "add_type.m"
          }
#line 507 "add_type.m"
        else
#line 507 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 507 "add_type.m"
          {
#line 507 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3), (MR_Integer) 0);

#line 507 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 507 "add_type.m"
              {
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody1_12;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody_13;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeILA_63;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCA_64;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaA_65;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangA_67;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeILB_68;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCB_69;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaB_70;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangB_72;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeIL_73;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeC_74;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJava_75;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharp_76;
#line 507 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlang_77;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 518 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_19_19;
#line 518 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_58_58;

#line 511 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 512 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_3[0];
#line 511 "add_type.m"
                else
#line 510 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBody1_11, (MR_Integer) 0)));
#line 537 "add_type.m"
                hlds__make_hlds__add_type__MaybeILA_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 0)));
#line 537 "add_type.m"
                hlds__make_hlds__add_type__MaybeCA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 1)));
#line 537 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 2)));
#line 537 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 3)));
#line 537 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangA_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 4)));
#line 539 "add_type.m"
                hlds__make_hlds__add_type__MaybeILB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 0)));
#line 539 "add_type.m"
                hlds__make_hlds__add_type__MaybeCB_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 1)));
#line 539 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaB_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 2)));
#line 539 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 3)));
#line 539 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 4)));
#line 551 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeILA_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                  {
#line 551 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                      hlds__make_hlds__add_type__MaybeIL_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
                    else
#line 553 "add_type.m"
                      hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILB_68;
#line 551 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                  }
#line 551 "add_type.m"
                else
#line 552 "add_type.m"
                  {
#line 552 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
                      {
#line 552 "add_type.m"
                        hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILA_63;
#line 552 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                      }
#line 552 "add_type.m"
                  }
#line 507 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 507 "add_type.m"
                  {
#line 551 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCA_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                      {
#line 551 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                          hlds__make_hlds__add_type__MaybeC_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
                        else
#line 553 "add_type.m"
                          hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCB_69;
#line 551 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                      }
#line 551 "add_type.m"
                    else
#line 552 "add_type.m"
                      {
#line 552 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
                          {
#line 552 "add_type.m"
                            hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCA_64;
#line 552 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                          }
#line 552 "add_type.m"
                      }
#line 507 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 507 "add_type.m"
                      {
#line 551 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeJavaA_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                          {
#line 551 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                              hlds__make_hlds__add_type__MaybeJava_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
                            else
#line 553 "add_type.m"
                              hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaB_70;
#line 551 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                          }
#line 551 "add_type.m"
                        else
#line 552 "add_type.m"
                          {
#line 552 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
                              {
#line 552 "add_type.m"
                                hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaA_65;
#line 552 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                              }
#line 552 "add_type.m"
                          }
#line 507 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 507 "add_type.m"
                          {
#line 551 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeCSharpA_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                              {
#line 551 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeCSharp_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
                                else
#line 553 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 551 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                              }
#line 551 "add_type.m"
                            else
#line 552 "add_type.m"
                              {
#line 552 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
                                  {
#line 552 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 552 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                                  }
#line 552 "add_type.m"
                              }
#line 507 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 507 "add_type.m"
                              {
#line 551 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeErlangA_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                                  {
#line 551 "add_type.m"
                                    if ((hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 551 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeErlang_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 551 "add_type.m"
                                    else
#line 553 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangB_72;
#line 551 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 551 "add_type.m"
                                  }
#line 551 "add_type.m"
                                else
#line 552 "add_type.m"
                                  {
#line 552 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 552 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 552 "add_type.m"
                                      {
#line 552 "add_type.m"
                                        hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangA_67;
#line 552 "add_type.m"
                                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                                      }
#line 552 "add_type.m"
                                  }
#line 507 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 507 "add_type.m"
                                  {
#line 546 "add_type.m"
                                    {
#line 546 "add_type.m"
                                      hlds__make_hlds__add_type__ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 546 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_73));
#line 546 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_74));
#line 546 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_75));
#line 546 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_76));
#line 546 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_77));
#line 546 "add_type.m"
                                    }
#line 518 "add_type.m"
                                    hlds__make_hlds__add_type__V_19_19 = (MR_Integer) 1;
#line 518 "add_type.m"
                                    {
#line 518 "add_type.m"
                                      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_1, hlds__make_hlds__add_type__ForeignTypeBody_13, &hlds__make_hlds__add_type__V_58_58);
                                    }
#line 518 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_19_19 == hlds__make_hlds__add_type__V_58_58);
#line 518 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 519 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MakeOptInterface_2 == (MR_Integer) 0);
#line 522 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 521 "add_type.m"
                                      *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_13);
#line 522 "add_type.m"
                                    else
#line 523 "add_type.m"
                                      {
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_20_20;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_49_49;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_50_50;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_53_53;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_54_54;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_55_55;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_56_56;
#line 523 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_57_57;

#line 523 "add_type.m"
                                        {
#line 523 "add_type.m"
                                          hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_13));
#line 523 "add_type.m"
                                        }
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 523 "add_type.m"
                                        hlds__make_hlds__add_type__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 523 "add_type.m"
                                        {
#line 523 "add_type.m"
                                          MR_Word base;
#line 523 "add_type.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 523 "add_type.m"
                                          *hlds__make_hlds__add_type__HeadVar__5_5 = base;
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_49_49));
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_50_50));
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__V_55_55 | ((hlds__make_hlds__add_type__V_56_56 << (MR_Integer) 1)))));
#line 523 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 523 "add_type.m"
                                        }
#line 523 "add_type.m"
                                      }
#line 522 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 507 "add_type.m"
                                  }
#line 507 "add_type.m"
                              }
#line 507 "add_type.m"
                          }
#line 507 "add_type.m"
                      }
#line 507 "add_type.m"
                  }
#line 507 "add_type.m"
              }
#line 507 "add_type.m"
            else
#line 507 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 530 "add_type.m"
              {
#line 530 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body1_39 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 530 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body_40;

#line 531 "add_type.m"
                {
#line 531 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(hlds__make_hlds__add_type__V_59_59, hlds__make_hlds__add_type__Body1_39, &hlds__make_hlds__add_type__Body_40);
                }
#line 530 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 530 "add_type.m"
                  {
#line 530 "add_type.m"
                    *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_40);
#line 530 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 530 "add_type.m"
                  }
#line 530 "add_type.m"
              }
#line 507 "add_type.m"
            else
#line 507 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 507 "add_type.m"
          }
#line 507 "add_type.m"
        else
#line 507 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 507 "add_type.m"
        return hlds__make_hlds__add_type__succeeded;
#line 507 "add_type.m"
      }
#line 507 "add_type.m"
      break;
#line 507 "add_type.m"
    }
#line 502 "add_type.m"
}

#line 459 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_13,
#line 459 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
#line 459 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
#line 459 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
#line 459 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29)
#line 459 "add_type.m"
{
#line 465 "add_type.m"
  {
#line 465 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 465 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 0)));
#line 465 "add_type.m"
    MR_Integer hlds__make_hlds__add_type__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 1)));
#line 465 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_19;
#line 465 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Target_20;
#line 469 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_69_69;

#line 467 "add_type.m"
    {
#line 467 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_type__Globals_19);
    }
#line 468 "add_type.m"
    {
#line 468 "add_type.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_19, &hlds__make_hlds__add_type__Target_20);
    }
#line 469 "add_type.m"
    {
#line 469 "add_type.m"
      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_20, hlds__make_hlds__add_type__ForeignTypeBody_11, &hlds__make_hlds__add_type__V_69_69);
    }
#line 469 "add_type.m"
    hlds__make_hlds__add_type__succeeded = ((MR_Integer) 1 == hlds__make_hlds__add_type__V_69_69);
#line 471 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 470 "add_type.m"
      {
#line 470 "add_type.m"
        *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 0;
#line 470 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
#line 470 "add_type.m"
      }
#line 471 "add_type.m"
    else
#line 476 "add_type.m"
      {
#line 471 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__PrevErrors_12 == (MR_Integer) 1);
#line 476 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 475 "add_type.m"
          {
#line 475 "add_type.m"
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
#line 475 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
#line 475 "add_type.m"
          }
#line 476 "add_type.m"
        else
#line 482 "add_type.m"
          {
#line 482 "add_type.m"
            MR_String hlds__make_hlds__add_type__LangStr_21 = ((&hlds__make_hlds__add_type_vector_common_5[0 + hlds__make_hlds__add_type__Target_20]))->hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MainPieces_22;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Msg_24;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Spec_25;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_33_33;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_35_35;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_38_38;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_41_41;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_42_42;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_43_43;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_58_58;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59;
#line 482 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_66_66;

#line 483 "add_type.m"
            {
#line 483 "add_type.m"
              hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__LangStr_21));
#line 483 "add_type.m"
            }
#line 485 "add_type.m"
            {
#line 485 "add_type.m"
              hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_17));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_18));
#line 485 "add_type.m"
            }
#line 485 "add_type.m"
            {
#line 485 "add_type.m"
              hlds__make_hlds__add_type__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 485 "add_type.m"
            }
#line 485 "add_type.m"
            {
#line 485 "add_type.m"
              hlds__make_hlds__add_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_42_42));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[53])));
#line 485 "add_type.m"
            }
#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              hlds__make_hlds__add_type__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[72])));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_41_41));
#line 484 "add_type.m"
            }
#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              hlds__make_hlds__add_type__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_38_38));
#line 484 "add_type.m"
            }
#line 483 "add_type.m"
            {
#line 483 "add_type.m"
              hlds__make_hlds__add_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_34_34));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_35_35));
#line 483 "add_type.m"
            }
#line 483 "add_type.m"
            {
#line 483 "add_type.m"
              hlds__make_hlds__add_type__MainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[70])));
#line 483 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_33_33));
#line 483 "add_type.m"
            }
#line 489 "add_type.m"
            {
#line 489 "add_type.m"
              hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 489 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__MainPieces_22));
#line 489 "add_type.m"
            }
#line 489 "add_type.m"
            {
#line 489 "add_type.m"
              hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 489 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[74])));
#line 489 "add_type.m"
            }
#line 488 "add_type.m"
            {
#line 488 "add_type.m"
              hlds__make_hlds__add_type__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 488 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_13));
#line 488 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_58_58));
#line 488 "add_type.m"
            }
#line 491 "add_type.m"
            {
#line 491 "add_type.m"
              hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_24));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "add_type.m"
            }
#line 490 "add_type.m"
            {
#line 490 "add_type.m"
              hlds__make_hlds__add_type__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 490 "add_type.m"
            }
#line 492 "add_type.m"
            {
#line 492 "add_type.m"
              MR_Word base;
#line 492 "add_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = base;
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_25));
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28));
#line 492 "add_type.m"
            }
#line 493 "add_type.m"
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
#line 482 "add_type.m"
          }
#line 476 "add_type.m"
      }
#line 465 "add_type.m"
    *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26;
#line 465 "add_type.m"
  }
#line 459 "add_type.m"
}

#line 361 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 361 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 361 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4)
#line 361 "add_type.m"
{
#line 369 "add_type.m"
  {
#line 369 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));

#line 369 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 368 "add_type.m"
      {
#line 368 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 368 "add_type.m"
        {
#line 368 "add_type.m"
          hlds__make_hlds__add_type__V_5_5 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
        }
#line 368 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_5_5 == (MR_Integer) 0);
#line 368 "add_type.m"
      }
#line 369 "add_type.m"
    else
#line 371 "add_type.m"
      {
#line 369 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 371 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 370 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__NewDefnStatus_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 371 "add_type.m"
        else
#line 372 "add_type.m"
          {
#line 372 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_6_6;
#line 372 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_7_7;

#line 372 "add_type.m"
            {
#line 372 "add_type.m"
              hlds__make_hlds__add_type__V_6_6 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus_3);
            }
#line 372 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_6_6 == (MR_Integer) 0);
#line 372 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 372 "add_type.m"
              {
#line 373 "add_type.m"
                {
#line 373 "add_type.m"
                  hlds__make_hlds__add_type__V_7_7 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
                }
#line 373 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_7_7 == (MR_Integer) 0);
#line 372 "add_type.m"
              }
#line 372 "add_type.m"
          }
#line 371 "add_type.m"
      }
#line 369 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 369 "add_type.m"
  }
#line 361 "add_type.m"
}

#line 332 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 332 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 332 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4)
#line 332 "add_type.m"
{
#line 335 "add_type.m"
  {
#line 335 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 335 "add_type.m"
    MR_Word hlds__make_hlds__add_type__OldIsSolverType_5;

#line 343 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 344 "add_type.m"
      {
#line 344 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 1)));

#line 348 "add_type.m"
#line 348 "add_type.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_9)) {
#line 348 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 348 "add_type.m"
          case (MR_Integer) 0:
#line 348 "add_type.m"
#line 348 "add_type.m"
            switch (MR_unmkbody(hlds__make_hlds__add_type__Details_9)) {
#line 348 "add_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 348 "add_type.m"
              case (MR_Integer) 0:
#line 347 "add_type.m"
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 348 "add_type.m"
                break;
#line 348 "add_type.m"
              case (MR_Integer) 1:
#line 353 "add_type.m"
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 348 "add_type.m"
                break;
#line 348 "add_type.m"
            }
#line 348 "add_type.m"
            break;
#line 348 "add_type.m"
          case (MR_Integer) 1:
#line 350 "add_type.m"
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 348 "add_type.m"
            break;
#line 348 "add_type.m"
        }
#line 344 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 344 "add_type.m"
      }
#line 343 "add_type.m"
    else
#line 343 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 343 "add_type.m"
      {
#line 343 "add_type.m"
        hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 343 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 343 "add_type.m"
      }
#line 343 "add_type.m"
    else
#line 343 "add_type.m"
      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 335 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 343 "add_type.m"
      {
#line 343 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 344 "add_type.m"
          {
#line 344 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 1)));

#line 348 "add_type.m"
#line 348 "add_type.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_14)) {
#line 348 "add_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 348 "add_type.m"
              case (MR_Integer) 0:
#line 348 "add_type.m"
#line 348 "add_type.m"
                switch (MR_unmkbody(hlds__make_hlds__add_type__Details_14)) {
#line 348 "add_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 348 "add_type.m"
                  case (MR_Integer) 0:
#line 347 "add_type.m"
                    {
#line 338 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 338 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 347 "add_type.m"
                    }
#line 348 "add_type.m"
                    break;
#line 348 "add_type.m"
                  case (MR_Integer) 1:
#line 353 "add_type.m"
                    {
#line 338 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 338 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 353 "add_type.m"
                    }
#line 348 "add_type.m"
                    break;
#line 348 "add_type.m"
                }
#line 348 "add_type.m"
                break;
#line 348 "add_type.m"
              case (MR_Integer) 1:
#line 350 "add_type.m"
                {
#line 338 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 338 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 350 "add_type.m"
                }
#line 348 "add_type.m"
                break;
#line 348 "add_type.m"
            }
#line 344 "add_type.m"
          }
#line 343 "add_type.m"
        else
#line 343 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 343 "add_type.m"
          {
#line 338 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 338 "add_type.m"
            hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 343 "add_type.m"
          }
#line 343 "add_type.m"
        else
#line 343 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 343 "add_type.m"
      }
#line 335 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 335 "add_type.m"
  }
#line 332 "add_type.m"
}

#line 325 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 325 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 325 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 325 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 325 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4)
#line 325 "add_type.m"
{
#line 328 "add_type.m"
  {
#line 328 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 328 "add_type.m"
    *hlds__make_hlds__add_type__OldBody_2 = hlds__make_hlds__add_type__OldBody_5;
#line 328 "add_type.m"
    *hlds__make_hlds__add_type__Body_4 = hlds__make_hlds__add_type__Body_6;
#line 328 "add_type.m"
  }
#line 325 "add_type.m"
}

#line 303 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void)
#line 303 "add_type.m"
{
#line 305 "add_type.m"
  {
#line 305 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 305 "add_type.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[51]);
#line 305 "add_type.m"
  }
#line 303 "add_type.m"
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
#line 567 "add_type.m"
  {
#line 567 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 567 "add_type.m"
    MR_Word hlds__make_hlds__add_type__CombinedStatus_7;

#line 574 "add_type.m"
#line 574 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusA_4)) {
#line 574 "add_type.m"
      default:
#line 574 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 574 "add_type.m"
        break;
#line 574 "add_type.m"
      case (MR_Integer) 0:
#line 574 "add_type.m"
#line 574 "add_type.m"
        switch (MR_unmkbody(hlds__make_hlds__add_type__StatusA_4)) {
#line 574 "add_type.m"
          default:
#line 574 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 574 "add_type.m"
            break;
#line 574 "add_type.m"
          case (MR_Integer) 0:
#line 597 "add_type.m"
            {
#line 597 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 597 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 597 "add_type.m"
            }
#line 574 "add_type.m"
            break;
#line 574 "add_type.m"
          case (MR_Integer) 1:
#line 654 "add_type.m"
            {
#line 652 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Section_30;

#line 652 "add_type.m"
              hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 652 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 652 "add_type.m"
                {
#line 652 "add_type.m"
                  hlds__make_hlds__add_type__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusB_5, (MR_Integer) 0)));
#line 653 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 652 "add_type.m"
                }
#line 652 "add_type.m"
              else
#line 655 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 654 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 654 "add_type.m"
            }
#line 574 "add_type.m"
            break;
#line 574 "add_type.m"
          case (MR_Integer) 3:
#line 589 "add_type.m"
            {
#line 589 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 589 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 589 "add_type.m"
            }
#line 574 "add_type.m"
            break;
#line 574 "add_type.m"
          case (MR_Integer) 5:
#line 644 "add_type.m"
            {
#line 642 "add_type.m"
              hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 644 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 643 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 644 "add_type.m"
              else
#line 645 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 644 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 644 "add_type.m"
            }
#line 574 "add_type.m"
            break;
#line 574 "add_type.m"
          case (MR_Integer) 7:
#line 590 "add_type.m"
            {
#line 590 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Status3_20;

#line 629 "add_type.m"
#line 629 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 629 "add_type.m"
                default:
#line 629 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 629 "add_type.m"
                  break;
#line 629 "add_type.m"
                case (MR_Integer) 0:
#line 629 "add_type.m"
#line 629 "add_type.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 629 "add_type.m"
                    default:
#line 629 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 629 "add_type.m"
                      break;
#line 629 "add_type.m"
                    case (MR_Integer) 0:
#line 634 "add_type.m"
                      {
#line 634 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 634 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 634 "add_type.m"
                      }
#line 629 "add_type.m"
                      break;
#line 629 "add_type.m"
                    case (MR_Integer) 1:
#line 635 "add_type.m"
                      {
#line 635 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 635 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 635 "add_type.m"
                      }
#line 629 "add_type.m"
                      break;
#line 629 "add_type.m"
                    case (MR_Integer) 3:
#line 633 "add_type.m"
                      {
#line 633 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 633 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 633 "add_type.m"
                      }
#line 629 "add_type.m"
                      break;
#line 629 "add_type.m"
                    case (MR_Integer) 5:
#line 636 "add_type.m"
                      {
#line 636 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 636 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 636 "add_type.m"
                      }
#line 629 "add_type.m"
                      break;
#line 629 "add_type.m"
                    case (MR_Integer) 7:
#line 630 "add_type.m"
                      {
#line 630 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 630 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 630 "add_type.m"
                      }
#line 629 "add_type.m"
                      break;
#line 629 "add_type.m"
                    case (MR_Integer) 8:
#line 632 "add_type.m"
                      {
#line 632 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 632 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 632 "add_type.m"
                      }
#line 629 "add_type.m"
                      break;
#line 629 "add_type.m"
                  }
#line 629 "add_type.m"
                  break;
#line 629 "add_type.m"
                case (MR_Integer) 2:
#line 631 "add_type.m"
                  {
#line 631 "add_type.m"
                    hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 631 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 631 "add_type.m"
                  }
#line 629 "add_type.m"
                  break;
#line 629 "add_type.m"
              }
#line 590 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 590 "add_type.m"
                {
#line 592 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 594 "add_type.m"
                  if (hlds__make_hlds__add_type__succeeded)
#line 593 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 594 "add_type.m"
                  else
#line 595 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__Status3_20;
#line 594 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 590 "add_type.m"
                }
#line 590 "add_type.m"
            }
#line 574 "add_type.m"
            break;
#line 574 "add_type.m"
          case (MR_Integer) 8:
#line 629 "add_type.m"
#line 629 "add_type.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 629 "add_type.m"
              default:
#line 629 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 629 "add_type.m"
                break;
#line 629 "add_type.m"
              case (MR_Integer) 0:
#line 629 "add_type.m"
#line 629 "add_type.m"
                switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 629 "add_type.m"
                  default:
#line 629 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 629 "add_type.m"
                    break;
#line 629 "add_type.m"
                  case (MR_Integer) 0:
#line 634 "add_type.m"
                    {
#line 634 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 634 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 634 "add_type.m"
                    }
#line 629 "add_type.m"
                    break;
#line 629 "add_type.m"
                  case (MR_Integer) 1:
#line 635 "add_type.m"
                    {
#line 635 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 635 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 635 "add_type.m"
                    }
#line 629 "add_type.m"
                    break;
#line 629 "add_type.m"
                  case (MR_Integer) 3:
#line 633 "add_type.m"
                    {
#line 633 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 633 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 633 "add_type.m"
                    }
#line 629 "add_type.m"
                    break;
#line 629 "add_type.m"
                  case (MR_Integer) 5:
#line 636 "add_type.m"
                    {
#line 636 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 636 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 636 "add_type.m"
                    }
#line 629 "add_type.m"
                    break;
#line 629 "add_type.m"
                  case (MR_Integer) 7:
#line 630 "add_type.m"
                    {
#line 630 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 630 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 630 "add_type.m"
                    }
#line 629 "add_type.m"
                    break;
#line 629 "add_type.m"
                  case (MR_Integer) 8:
#line 632 "add_type.m"
                    {
#line 632 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 632 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 632 "add_type.m"
                    }
#line 629 "add_type.m"
                    break;
#line 629 "add_type.m"
                }
#line 629 "add_type.m"
                break;
#line 629 "add_type.m"
              case (MR_Integer) 2:
#line 631 "add_type.m"
                {
#line 631 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 631 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 631 "add_type.m"
                }
#line 629 "add_type.m"
                break;
#line 629 "add_type.m"
            }
#line 574 "add_type.m"
            break;
#line 574 "add_type.m"
        }
#line 574 "add_type.m"
        break;
#line 574 "add_type.m"
      case (MR_Integer) 2:
#line 574 "add_type.m"
        {
#line 574 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusA_4, (MR_Integer) 0)));

#line 582 "add_type.m"
#line 582 "add_type.m"
          switch (hlds__make_hlds__add_type__ImportLocn_11) {
#line 582 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 582 "add_type.m"
            case (MR_Integer) 2:
#line 582 "add_type.m"
            case (MR_Integer) 0:
#line 582 "add_type.m"
            case (MR_Integer) 1:
#line 608 "add_type.m"
#line 608 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 608 "add_type.m"
                default:
#line 608 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 608 "add_type.m"
                  break;
#line 608 "add_type.m"
                case (MR_Integer) 0:
#line 608 "add_type.m"
#line 608 "add_type.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 608 "add_type.m"
                    default:
#line 608 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 608 "add_type.m"
                      break;
#line 608 "add_type.m"
                    case (MR_Integer) 0:
#line 618 "add_type.m"
                      {
#line 618 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 618 "add_type.m"
                      }
#line 608 "add_type.m"
                      break;
#line 608 "add_type.m"
                    case (MR_Integer) 1:
#line 620 "add_type.m"
                      {
#line 621 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_4[1]);
#line 620 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 620 "add_type.m"
                      }
#line 608 "add_type.m"
                      break;
#line 608 "add_type.m"
                    case (MR_Integer) 3:
#line 615 "add_type.m"
                      {
#line 615 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 615 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 615 "add_type.m"
                      }
#line 608 "add_type.m"
                      break;
#line 608 "add_type.m"
                    case (MR_Integer) 5:
#line 624 "add_type.m"
                      {
#line 624 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 624 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 624 "add_type.m"
                      }
#line 608 "add_type.m"
                      break;
#line 608 "add_type.m"
                    case (MR_Integer) 8:
#line 611 "add_type.m"
                      {
#line 612 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_4[2]);
#line 611 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 611 "add_type.m"
                      }
#line 608 "add_type.m"
                      break;
#line 608 "add_type.m"
                  }
#line 608 "add_type.m"
                  break;
#line 608 "add_type.m"
                case (MR_Integer) 2:
#line 609 "add_type.m"
                  {
#line 609 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 609 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 609 "add_type.m"
                  }
#line 608 "add_type.m"
                  break;
#line 608 "add_type.m"
              }
#line 582 "add_type.m"
              break;
#line 582 "add_type.m"
            case (MR_Integer) 3:
#line 583 "add_type.m"
              {
#line 585 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_4[3]);
#line 583 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 583 "add_type.m"
              }
#line 582 "add_type.m"
              break;
#line 582 "add_type.m"
          }
#line 574 "add_type.m"
        }
#line 574 "add_type.m"
        break;
#line 574 "add_type.m"
    }
#line 567 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 566 "add_type.m"
      *hlds__make_hlds__add_type__Status_6 = hlds__make_hlds__add_type__CombinedStatus_7;
#line 567 "add_type.m"
    else
#line 568 "add_type.m"
      {
#line 568 "add_type.m"
        {
#line 568 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 568 "add_type.m"
          return;
        }
#line 568 "add_type.m"
      }
#line 567 "add_type.m"
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
#line 558 "add_type.m"
  {
#line 558 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));

#line 558 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 557 "add_type.m"
      *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 558 "add_type.m"
    else
#line 560 "add_type.m"
      {
#line 558 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 558 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 558 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
          {
#line 558 "add_type.m"
            hlds__make_hlds__add_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Status_3, (MR_Integer) 0)));
#line 559 "add_type.m"
            *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 558 "add_type.m"
          }
#line 558 "add_type.m"
        else
#line 561 "add_type.m"
          *hlds__make_hlds__add_type__AbstractStatus_4 = hlds__make_hlds__add_type__Status_3;
#line 560 "add_type.m"
      }
#line 558 "add_type.m"
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
#line 377 "add_type.m"
  {
#line 377 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Context_14;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__TVarSet_15;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Args_16;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__KindMap_17;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Body_18;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Status_19;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NeedQual_20;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_21;
#line 377 "add_type.m"
    MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;

#line 378 "add_type.m"
    {
#line 378 "add_type.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Context_14);
    }
#line 379 "add_type.m"
    {
#line 379 "add_type.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__TVarSet_15);
    }
#line 380 "add_type.m"
    {
#line 380 "add_type.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Args_16);
    }
#line 381 "add_type.m"
    {
#line 381 "add_type.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__KindMap_17);
    }
#line 382 "add_type.m"
    {
#line 382 "add_type.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Body_18);
    }
#line 383 "add_type.m"
    {
#line 383 "add_type.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Status_19);
    }
#line 384 "add_type.m"
    {
#line 384 "add_type.m"
      hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__NeedQual_20);
    }
#line 385 "add_type.m"
    {
#line 385 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Globals_21);
    }
#line 426 "add_type.m"
#line 426 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) {
#line 426 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 426 "add_type.m"
      case (MR_Integer) 0:
#line 427 "add_type.m"
        {
#line 427 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignTypeBody_50 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__Body_18), (MR_Integer) 0);
#line 427 "add_type.m"
          MR_Word hlds__make_hlds__add_type__PrevErrors_51;
#line 427 "add_type.m"
          MR_Word hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52;

#line 428 "add_type.m"
          {
#line 428 "add_type.m"
            hlds__hlds_data__get_type_defn_prev_errors_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__PrevErrors_51);
          }
#line 429 "add_type.m"
          {
#line 429 "add_type.m"
            hlds__make_hlds__add_type__check_foreign_type_9_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ForeignTypeBody_50, hlds__make_hlds__add_type__PrevErrors_51, hlds__make_hlds__add_type__Context_14, &hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64);
          }
#line 434 "add_type.m"
#line 434 "add_type.m"
          switch (hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52) {
#line 434 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 434 "add_type.m"
            case (MR_Integer) 0:
#line 435 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 434 "add_type.m"
              break;
#line 434 "add_type.m"
            case (MR_Integer) 1:
#line 433 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
#line 434 "add_type.m"
              break;
#line 434 "add_type.m"
          }
#line 427 "add_type.m"
        }
#line 426 "add_type.m"
        break;
#line 426 "add_type.m"
      case (MR_Integer) 1:
#line 388 "add_type.m"
        {
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ConsList_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)));
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__UserEqCmp_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 4)));
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedTag_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Ctors0_31;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__PQInfo_32;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorFields0_33;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__TypeCtorSymName_34;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_37;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorFields_39;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Ctors_40;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorAddSpecs_41;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 1)));
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 2)));
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 3)));
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type___DirectArgCtors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 5)));
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 387 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 7)));
#line 392 "add_type.m"
          MR_Integer hlds__make_hlds__add_type__V_35_35;
#line 423 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorName_44;
#line 423 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorArgType_45;
#line 416 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_46_46;

#line 389 "add_type.m"
          {
#line 389 "add_type.m"
            hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Ctors0_31);
          }
#line 390 "add_type.m"
          {
#line 390 "add_type.m"
            hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__PQInfo_32);
          }
#line 391 "add_type.m"
          {
#line 391 "add_type.m"
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__CtorFields0_33);
          }
#line 392 "add_type.m"
          hlds__make_hlds__add_type__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 392 "add_type.m"
          hlds__make_hlds__add_type__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 396 "add_type.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 397 "add_type.m"
            {
#line 397 "add_type.m"
              MR_String hlds__make_hlds__add_type__V_38_38;

#line 397 "add_type.m"
              hlds__make_hlds__add_type__TypeCtorModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 0)));
#line 397 "add_type.m"
              hlds__make_hlds__add_type__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 1)));
#line 397 "add_type.m"
            }
#line 396 "add_type.m"
          else
#line 394 "add_type.m"
            {
#line 395 "add_type.m"
              {
#line 395 "add_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.process_type_defn\'/8", (MR_String) "unqualified TypeCtorSymName");
#line 395 "add_type.m"
                return;
              }
#line 394 "add_type.m"
            }
#line 399 "add_type.m"
          {
#line 399 "add_type.m"
            hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__TypeCtorModuleName_37, hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Args_16, hlds__make_hlds__add_type__KindMap_17, hlds__make_hlds__add_type__NeedQual_20, hlds__make_hlds__add_type__PQInfo_32, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__CtorFields0_33, &hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__Ctors0_31, &hlds__make_hlds__add_type__Ctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_type__CtorAddSpecs_41);
          }
#line 402 "add_type.m"
          {
#line 402 "add_type.m"
            hlds__hlds_module__module_info_set_cons_table_3_p_0(hlds__make_hlds__add_type__Ctors_40, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72);
          }
#line 403 "add_type.m"
          {
#line 403 "add_type.m"
            hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73);
          }
#line 407 "add_type.m"
          if ((hlds__make_hlds__add_type__CtorAddSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 406 "add_type.m"
            {
#line 406 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 406 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 406 "add_type.m"
            }
#line 407 "add_type.m"
          else
#line 408 "add_type.m"
            {
#line 409 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
#line 410 "add_type.m"
              {
#line 410 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_type__CtorAddSpecs_41, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63);
              }
#line 408 "add_type.m"
            }
#line 416 "add_type.m"
          {
#line 416 "add_type.m"
            hlds__make_hlds__add_type__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ReservedTag_28, hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__UserEqCmp_26, &hlds__make_hlds__add_type__CtorName_44, &hlds__make_hlds__add_type__CtorArgType_45, &hlds__make_hlds__add_type__V_46_46);
          }
#line 423 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 419 "add_type.m"
            {
#line 419 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagType_47;
#line 419 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagTypes0_48;
#line 419 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagTypes_49;

#line 419 "add_type.m"
              {
#line 419 "add_type.m"
                hlds__make_hlds__add_type__NoTagType_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 419 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Args_16));
#line 419 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorName_44));
#line 419 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 2) = ((MR_Box) (hlds__make_hlds__add_type__CtorArgType_45));
#line 419 "add_type.m"
              }
#line 420 "add_type.m"
              {
#line 420 "add_type.m"
                hlds__hlds_module__module_info_get_no_tag_types_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__NoTagTypes0_48);
              }
#line 421 "add_type.m"
              {
#line 421 "add_type.m"
                mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_9)), ((MR_Box) (hlds__make_hlds__add_type__NoTagType_47)), hlds__make_hlds__add_type__NoTagTypes0_48, &hlds__make_hlds__add_type__NoTagTypes_49);
              }
#line 422 "add_type.m"
              {
#line 422 "add_type.m"
                hlds__hlds_module__module_info_set_no_tag_types_3_p_0(hlds__make_hlds__add_type__NoTagTypes_49, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76);
              }
#line 419 "add_type.m"
            }
#line 423 "add_type.m"
          else
#line 423 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 388 "add_type.m"
        }
#line 426 "add_type.m"
        break;
#line 426 "add_type.m"
      case (MR_Integer) 2:
#line 440 "add_type.m"
        {
#line 440 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 440 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
#line 440 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 440 "add_type.m"
        }
#line 426 "add_type.m"
        break;
#line 426 "add_type.m"
      case (MR_Integer) 3:
#line 426 "add_type.m"
#line 426 "add_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)))) {
#line 426 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 426 "add_type.m"
          case (MR_Integer) 0:
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
#line 426 "add_type.m"
            break;
#line 426 "add_type.m"
          case (MR_Integer) 1:
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
#line 426 "add_type.m"
            break;
#line 426 "add_type.m"
        }
#line 426 "add_type.m"
        break;
#line 426 "add_type.m"
    }
#line 445 "add_type.m"
#line 445 "add_type.m"
    switch (*hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60) {
#line 445 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 445 "add_type.m"
      case (MR_Integer) 0:
#line 446 "add_type.m"
        {
#line 446 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ArgTypes_57;
#line 446 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Type_58;
#line 446 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_77_77;

#line 450 "add_type.m"
          {
#line 450 "add_type.m"
            hlds__make_hlds__add_type__V_77_77 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
          }
#line 450 "add_type.m"
          {
#line 450 "add_type.m"
            parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_type__V_77_77, hlds__make_hlds__add_type__Args_16, &hlds__make_hlds__add_type__ArgTypes_57);
          }
#line 451 "add_type.m"
          {
#line 451 "add_type.m"
            parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ArgTypes_57, &hlds__make_hlds__add_type__Type_58);
          }
#line 452 "add_type.m"
          {
#line 452 "add_type.m"
            hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Type_58, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__Body_18, hlds__make_hlds__add_type__Context_14, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62);
#line 452 "add_type.m"
            return;
          }
#line 446 "add_type.m"
        }
#line 445 "add_type.m"
        break;
#line 445 "add_type.m"
      case (MR_Integer) 1:
#line 444 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;
#line 445 "add_type.m"
        break;
#line 445 "add_type.m"
    }
#line 377 "add_type.m"
  }
#line 42 "add_type.m"
}

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 283 "add_type.m"
{
#line 283 "add_type.m"
  {
#line 283 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 283 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0, 1);
#line 283 "add_type.m"
  }
#line 283 "add_type.m"
}

#line 285 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3(
#line 285 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 285 "add_type.m"
{
#line 285 "add_type.m"
  {
#line 285 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 285 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91);
#line 285 "add_type.m"
    {
#line 285 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 285 "add_type.m"
      return;
    }
#line 285 "add_type.m"
  }
#line 285 "add_type.m"
}

#line 286 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(
#line 286 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 286 "add_type.m"
{
#line 286 "add_type.m"
  {
#line 286 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 286 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1, 1);
#line 286 "add_type.m"
  }
#line 286 "add_type.m"
}

#line 286 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5(
#line 286 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 286 "add_type.m"
{
#line 286 "add_type.m"
  {
#line 286 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 5655 "hlds.make_hlds.add_type.c"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 286 "add_type.m"
    {
#line 286 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303, ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91)), ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_301_301)));
    }
#line 286 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 286 "add_type.m"
      {
#line 286 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(hlds__make_hlds__add_type__env_ptr);
#line 286 "add_type.m"
        return;
      }
#line 286 "add_type.m"
  }
#line 286 "add_type.m"
}

#line 286 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(
#line 286 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 286 "add_type.m"
{
#line 286 "add_type.m"
  {
#line 286 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 286 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1) == 0)
#line 286 "add_type.m"
      {
#line 286 "add_type.m"
        {
#line 286 "add_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_301_301, hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5, hlds__make_hlds__add_type__env_ptr);
        }
#line 286 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 286 "add_type.m"
      }
#line 286 "add_type.m"
    else
#line 286 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 286 "add_type.m"
  }
#line 286 "add_type.m"
}

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 283 "add_type.m"
{
#line 283 "add_type.m"
  {
#line 283 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 286 "add_type.m"
    {
#line 286 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(hlds__make_hlds__add_type__env_ptr);
    }
#line 286 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded);
#line 286 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 286 "add_type.m"
      {
#line 286 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 286 "add_type.m"
        return;
      }
#line 283 "add_type.m"
  }
#line 283 "add_type.m"
}

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 283 "add_type.m"
{
#line 283 "add_type.m"
  {
#line 283 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 283 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0) == 0)
#line 283 "add_type.m"
      {
#line 284 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 283 "add_type.m"
        if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 283 "add_type.m"
          {
#line 283 "add_type.m"
            (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 2)));
#line 283 "add_type.m"
            if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 283 "add_type.m"
              {
#line 283 "add_type.m"
                (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 0)));
#line 285 "add_type.m"
                {
#line 285 "add_type.m"
                  mercury__list__member_2_p_1((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3, hlds__make_hlds__add_type__env_ptr);
                }
#line 283 "add_type.m"
              }
#line 283 "add_type.m"
          }
#line 283 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 283 "add_type.m"
      }
#line 283 "add_type.m"
    else
#line 283 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 283 "add_type.m"
  }
#line 283 "add_type.m"
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
#line 81 "add_type.m"
    {
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Status0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__6_6, (MR_Integer) 0)));
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__NeedQual_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__6_6, (MR_Integer) 1)));
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Globals_20;
#line 81 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_21;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtor_22;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Body0_23;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Status1_34;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeTable0_44;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeOldDefn_54;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__KindMap_56;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeDefn1_57;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_298_298;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Ctors_35;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeUserUC_36;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constructor_38;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 108 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_103_103;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 108 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_300_300;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type___MaybeDirectArg_37;
#line 110 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_292_292;
#line 110 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_293_293;
#line 110 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_294_294;
#line 110 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_295_295;
#line 110 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_296_296;
#line 111 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_39_39;
#line 157 "add_type.m"
      MR_Word hlds__make_hlds__add_type__OldDefn0_45;
#line 170 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_58_58;

#line 82 "add_type.m"
      {
#line 82 "add_type.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__Globals_20);
      }
#line 5897 "hlds.make_hlds.add_type.c"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 83 "add_type.m"
      {
#line 83 "add_type.m"
        mercury__list__length_2_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, &hlds__make_hlds__add_type__Arity_21);
      }
#line 84 "add_type.m"
      {
#line 84 "add_type.m"
        hlds__make_hlds__add_type__TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 84 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_22, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 84 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 84 "add_type.m"
      }
#line 85 "add_type.m"
      {
#line 85 "add_type.m"
        hlds__make_hlds__add_type__convert_type_defn_4_p_0(hlds__make_hlds__add_type__TypeDefn_14, hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__Globals_20, &hlds__make_hlds__add_type__Body0_23);
      }
#line 89 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_23)) == (MR_mktag((MR_Integer) 1))))
#line 90 "add_type.m"
        {
#line 90 "add_type.m"
          MR_String hlds__make_hlds__add_type__V_99_99;

#line 91 "add_type.m"
          {
#line 91 "add_type.m"
            hlds__make_hlds__add_type__V_99_99 = mercury__term__context_file_1_f_0(hlds__make_hlds__add_type__Context_15);
          }
#line 91 "add_type.m"
          {
#line 91 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = mercury__string__suffix_2_p_0(hlds__make_hlds__add_type__V_99_99, (MR_String) ".int2");
          }
#line 90 "add_type.m"
        }
#line 89 "add_type.m"
      else
#line 89 "add_type.m"
      if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body0_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 88 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 89 "add_type.m"
      else
#line 89 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 100 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 99 "add_type.m"
        {
#line 99 "add_type.m"
          hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__add_type__Status0_16, &hlds__make_hlds__add_type__Status1_34);
        }
#line 100 "add_type.m"
      else
#line 101 "add_type.m"
        hlds__make_hlds__add_type__Status1_34 = hlds__make_hlds__add_type__Status0_16;
#line 108 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeDefn_14)) == (MR_mktag((MR_Integer) 0)));
#line 108 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 108 "add_type.m"
        {
#line 108 "add_type.m"
          hlds__make_hlds__add_type__Ctors_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 0)));
#line 108 "add_type.m"
          hlds__make_hlds__add_type__MaybeUserUC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 1)));
#line 108 "add_type.m"
          hlds__make_hlds__add_type___MaybeDirectArg_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 2)));
#line 109 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Ctors_35)) == (MR_mktag((MR_Integer) 1)));
#line 109 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 109 "add_type.m"
            {
#line 109 "add_type.m"
              hlds__make_hlds__add_type__Constructor_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_35, (MR_Integer) 0)));
#line 109 "add_type.m"
              hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_35, (MR_Integer) 1)));
#line 109 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 108 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 108 "add_type.m"
                {
#line 110 "add_type.m"
                  hlds__make_hlds__add_type__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 0)));
#line 110 "add_type.m"
                  hlds__make_hlds__add_type__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 1)));
#line 110 "add_type.m"
                  hlds__make_hlds__add_type__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 2)));
#line 110 "add_type.m"
                  hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 3)));
#line 110 "add_type.m"
                  hlds__make_hlds__add_type__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 4)));
#line 110 "add_type.m"
                  hlds__make_hlds__add_type__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 5)));
#line 110 "add_type.m"
                  hlds__make_hlds__add_type__V_103_103 = (MR_Integer) 0;
#line 6001 "hlds.make_hlds.add_type.c"
                  hlds__make_hlds__add_type__TypeCtorInfo_298_298 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 110 "add_type.m"
                  {
#line 110 "add_type.m"
                    mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_298_298, hlds__make_hlds__add_type__V_102_102, &hlds__make_hlds__add_type__V_300_300);
                  }
#line 110 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_103_103 == hlds__make_hlds__add_type__V_300_300);
#line 108 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 108 "add_type.m"
                    {
#line 111 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeUserUC_36)) == (MR_mktag((MR_Integer) 1)));
#line 111 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 111 "add_type.m"
                        {
#line 111 "add_type.m"
                          hlds__make_hlds__add_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeUserUC_36, (MR_Integer) 0)));
#line 113 "add_type.m"
                          {
#line 113 "add_type.m"
                            hlds__make_hlds__add_type__V_104_104 = parse_tree__status__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_type__Status0_16);
                          }
#line 113 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_104_104 == (MR_Integer) 1);
#line 111 "add_type.m"
                        }
#line 108 "add_type.m"
                    }
#line 108 "add_type.m"
                }
#line 109 "add_type.m"
            }
#line 108 "add_type.m"
        }
#line 128 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 118 "add_type.m"
        {
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMainPieces_40;
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMsg_42;
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummySpec_43;
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_107_107;
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_108_108;
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_109_109;
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_126_126;
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_127_127;
#line 118 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_134_134;

#line 116 "add_type.m"
          {
#line 116 "add_type.m"
            hlds__make_hlds__add_type__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 116 "add_type.m"
          }
#line 116 "add_type.m"
          {
#line 116 "add_type.m"
            hlds__make_hlds__add_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_109_109));
#line 116 "add_type.m"
          }
#line 116 "add_type.m"
          {
#line 116 "add_type.m"
            hlds__make_hlds__add_type__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_108_108));
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
#line 116 "add_type.m"
          }
#line 115 "add_type.m"
          {
#line 115 "add_type.m"
            hlds__make_hlds__add_type__DummyMainPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 115 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[60])));
#line 115 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_107_107));
#line 115 "add_type.m"
          }
#line 123 "add_type.m"
          {
#line 123 "add_type.m"
            hlds__make_hlds__add_type__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMainPieces_40));
#line 123 "add_type.m"
          }
#line 123 "add_type.m"
          {
#line 123 "add_type.m"
            hlds__make_hlds__add_type__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_127_127));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[62])));
#line 123 "add_type.m"
          }
#line 122 "add_type.m"
          {
#line 122 "add_type.m"
            hlds__make_hlds__add_type__DummyMsg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 122 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_42, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 122 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_126_126));
#line 122 "add_type.m"
          }
#line 126 "add_type.m"
          {
#line 126 "add_type.m"
            hlds__make_hlds__add_type__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 126 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMsg_42));
#line 126 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 126 "add_type.m"
          }
#line 125 "add_type.m"
          {
#line 125 "add_type.m"
            hlds__make_hlds__add_type__DummySpec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 125 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 125 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 125 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_134_134));
#line 125 "add_type.m"
          }
#line 127 "add_type.m"
          {
#line 127 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummySpec_43));
#line 127 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_97));
#line 127 "add_type.m"
          }
#line 118 "add_type.m"
        }
#line 128 "add_type.m"
      else
#line 128 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_97;
#line 131 "add_type.m"
      {
#line 131 "add_type.m"
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__TypeTable0_44);
      }
#line 135 "add_type.m"
      {
#line 135 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_type__TypeTable0_44, hlds__make_hlds__add_type__TypeCtor_22, &hlds__make_hlds__add_type__OldDefn0_45);
      }
#line 157 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 137 "add_type.m"
        {
#line 137 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus_46;
#line 137 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody0_48;
#line 137 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody_49;

#line 137 "add_type.m"
          {
#line 137 "add_type.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldStatus_46);
          }
#line 138 "add_type.m"
          {
#line 138 "add_type.m"
            hlds__make_hlds__add_type__combine_status_3_p_0(hlds__make_hlds__add_type__Status1_34, hlds__make_hlds__add_type__OldStatus_46, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47);
          }
#line 139 "add_type.m"
          {
#line 139 "add_type.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldBody0_48);
          }
#line 140 "add_type.m"
          {
#line 140 "add_type.m"
            hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(hlds__make_hlds__add_type__OldBody0_48, &hlds__make_hlds__add_type__OldBody_49, hlds__make_hlds__add_type__Body0_23, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50);
          }
#line 141 "add_type.m"
          {
#line 141 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(hlds__make_hlds__add_type__OldBody_49, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50);
          }
#line 153 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 147 "add_type.m"
            {
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverPieces_51;
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverMsg_52;
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverSpec_53;
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_139_139;
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_140_140;
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_141_141;
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_160_160;
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_161_161;
#line 147 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_165_165;

#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_141_141, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 145 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_141_141));
#line 145 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_140_140));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])));
#line 145 "add_type.m"
              }
#line 144 "add_type.m"
              {
#line 144 "add_type.m"
                hlds__make_hlds__add_type__SolverPieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_51, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_139_139));
#line 144 "add_type.m"
              }
#line 148 "add_type.m"
              {
#line 148 "add_type.m"
                hlds__make_hlds__add_type__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverPieces_51));
#line 148 "add_type.m"
              }
#line 148 "add_type.m"
              {
#line 148 "add_type.m"
                hlds__make_hlds__add_type__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_161_161));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_type.m"
              }
#line 148 "add_type.m"
              {
#line 148 "add_type.m"
                hlds__make_hlds__add_type__SolverMsg_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_52, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_160_160));
#line 148 "add_type.m"
              }
#line 150 "add_type.m"
              {
#line 150 "add_type.m"
                hlds__make_hlds__add_type__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 150 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverMsg_52));
#line 150 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "add_type.m"
              }
#line 149 "add_type.m"
              {
#line 149 "add_type.m"
                hlds__make_hlds__add_type__SolverSpec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_165_165));
#line 149 "add_type.m"
              }
#line 151 "add_type.m"
              {
#line 151 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverSpec_53));
#line 151 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136));
#line 151 "add_type.m"
              }
#line 152 "add_type.m"
              hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 147 "add_type.m"
            }
#line 153 "add_type.m"
          else
#line 154 "add_type.m"
            {
#line 154 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn_55;

#line 154 "add_type.m"
              {
#line 154 "add_type.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_type__OldBody_49, hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldDefn_55);
              }
#line 155 "add_type.m"
              {
#line 155 "add_type.m"
                hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 155 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__OldDefn_55));
#line 155 "add_type.m"
              }
#line 154 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 154 "add_type.m"
            }
#line 137 "add_type.m"
        }
#line 157 "add_type.m"
      else
#line 158 "add_type.m"
        {
#line 158 "add_type.m"
          hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 159 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 = hlds__make_hlds__add_type__Status1_34;
#line 160 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50 = hlds__make_hlds__add_type__Body0_23;
#line 158 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 158 "add_type.m"
        }
#line 165 "add_type.m"
      {
#line 165 "add_type.m"
        mercury__map__init_1_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &hlds__make_hlds__add_type__KindMap_56);
      }
#line 166 "add_type.m"
      {
#line 166 "add_type.m"
        hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet_11, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, hlds__make_hlds__add_type__KindMap_56, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, (MR_Integer) 0, hlds__make_hlds__add_type__NeedQual_17, (MR_Integer) 0, hlds__make_hlds__add_type__Context_15, &hlds__make_hlds__add_type__TypeDefn1_57);
      }
#line 169 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__MaybeOldDefn_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 169 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 169 "add_type.m"
        {
#line 170 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 0)));
#line 170 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 170 "add_type.m"
            hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50), (MR_Integer) 0);
#line 169 "add_type.m"
        }
#line 179 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 174 "add_type.m"
        {
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclPieces_59;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclMsg_60;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclSpec_61;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_172_172;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_173_173;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_174_174;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_179_179;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_180_180;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_184_184;

#line 173 "add_type.m"
          {
#line 173 "add_type.m"
            hlds__make_hlds__add_type__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_174_174, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_174_174, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 173 "add_type.m"
          }
#line 173 "add_type.m"
          {
#line 173 "add_type.m"
            hlds__make_hlds__add_type__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_173_173, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_174_174));
#line 173 "add_type.m"
          }
#line 173 "add_type.m"
          {
#line 173 "add_type.m"
            hlds__make_hlds__add_type__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_172_172, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_173_173));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[66])));
#line 173 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclPieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[64])));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_59, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_172_172));
#line 172 "add_type.m"
          }
#line 175 "add_type.m"
          {
#line 175 "add_type.m"
            hlds__make_hlds__add_type__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclPieces_59));
#line 175 "add_type.m"
          }
#line 175 "add_type.m"
          {
#line 175 "add_type.m"
            hlds__make_hlds__add_type__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_180_180));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "add_type.m"
          }
#line 175 "add_type.m"
          {
#line 175 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclMsg_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_60, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_179_179));
#line 175 "add_type.m"
          }
#line 177 "add_type.m"
          {
#line 177 "add_type.m"
            hlds__make_hlds__add_type__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 177 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclMsg_60));
#line 177 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 177 "add_type.m"
          }
#line 176 "add_type.m"
          {
#line 176 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclSpec_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_184_184));
#line 176 "add_type.m"
          }
#line 178 "add_type.m"
          {
#line 178 "add_type.m"
            MR_Word base;
#line 178 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 178 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclSpec_61));
#line 178 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 178 "add_type.m"
          }
#line 174 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 174 "add_type.m"
        }
#line 179 "add_type.m"
      else
#line 202 "add_type.m"
        {
#line 180 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldDefn1_62;
#line 180 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus1_64;
#line 180 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody1_65;
#line 180 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_187_187;
#line 180 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_188_188;
#line 181 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_63_63;
#line 184 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;

#line 181 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 0)));
#line 181 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 181 "add_type.m"
            {
#line 181 "add_type.m"
              hlds__make_hlds__add_type__V_63_63 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50), (MR_Integer) 0);
#line 180 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_54)) == (MR_mktag((MR_Integer) 1)));
#line 180 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 180 "add_type.m"
                {
#line 180 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn1_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, (MR_Integer) 0)));
#line 182 "add_type.m"
                  {
#line 182 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn1_62, &hlds__make_hlds__add_type__OldStatus1_64);
                  }
#line 183 "add_type.m"
                  {
#line 183 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn1_62, &hlds__make_hlds__add_type__OldBody1_65);
                  }
#line 184 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody1_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_65, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 184 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 184 "add_type.m"
                    {
#line 184 "add_type.m"
                      hlds__make_hlds__add_type__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_65, (MR_Integer) 1)));
#line 185 "add_type.m"
                      {
#line 185 "add_type.m"
                        hlds__make_hlds__add_type__V_187_187 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus1_64);
                      }
#line 185 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_187_187 == (MR_Integer) 0);
#line 180 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 180 "add_type.m"
                        {
#line 186 "add_type.m"
                          {
#line 186 "add_type.m"
                            hlds__make_hlds__add_type__V_188_188 = parse_tree__status__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__Status0_16);
                          }
#line 186 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_188_188 == (MR_Integer) 1);
#line 180 "add_type.m"
                        }
#line 184 "add_type.m"
                    }
#line 180 "add_type.m"
                }
#line 181 "add_type.m"
            }
#line 202 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 190 "add_type.m"
            {
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisPieces_67;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisMsg_68;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisSpec_69;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_70;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TypeTable_71;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_191_191;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_192_192;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_193_193;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_198_198;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_199_199;
#line 190 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_203_203;

#line 189 "add_type.m"
              {
#line 189 "add_type.m"
                hlds__make_hlds__add_type__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_193_193, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_193_193, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 189 "add_type.m"
              }
#line 189 "add_type.m"
              {
#line 189 "add_type.m"
                hlds__make_hlds__add_type__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_192_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_192_192, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_193_193));
#line 189 "add_type.m"
              }
#line 189 "add_type.m"
              {
#line 189 "add_type.m"
                hlds__make_hlds__add_type__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_191_191, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_192_192));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[69])));
#line 189 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisPieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67])));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_191_191));
#line 188 "add_type.m"
              }
#line 191 "add_type.m"
              {
#line 191 "add_type.m"
                hlds__make_hlds__add_type__V_199_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisPieces_67));
#line 191 "add_type.m"
              }
#line 191 "add_type.m"
              {
#line 191 "add_type.m"
                hlds__make_hlds__add_type__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_199_199));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_198_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "add_type.m"
              }
#line 191 "add_type.m"
              {
#line 191 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisMsg_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_68, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_68, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_198_198));
#line 191 "add_type.m"
              }
#line 193 "add_type.m"
              {
#line 193 "add_type.m"
                hlds__make_hlds__add_type__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_203_203, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisMsg_68));
#line 193 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "add_type.m"
              }
#line 192 "add_type.m"
              {
#line 192 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisSpec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_203_203));
#line 192 "add_type.m"
              }
#line 194 "add_type.m"
              {
#line 194 "add_type.m"
                MR_Word base;
#line 194 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 194 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisSpec_69));
#line 194 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 194 "add_type.m"
              }
#line 197 "add_type.m"
              {
#line 197 "add_type.m"
                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_57, &hlds__make_hlds__add_type__ErrTypeDefn_70);
              }
#line 199 "add_type.m"
              {
#line 199 "add_type.m"
                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__ErrTypeDefn_70, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_71);
              }
#line 201 "add_type.m"
              {
#line 201 "add_type.m"
                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_71, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
#line 201 "add_type.m"
                return;
              }
#line 190 "add_type.m"
            }
#line 202 "add_type.m"
          else
#line 274 "add_type.m"
            {
#line 274 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TVarSet2_73;
#line 274 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Params2_74;
#line 274 "add_type.m"
              MR_Word hlds__make_hlds__add_type__KindMap2_75;
#line 274 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body2_76;
#line 274 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigContext_77;
#line 274 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigStatus_78;
#line 274 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigInExportedEqv_79;
#line 274 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigNeedQual_80;
#line 204 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn2_72;
#line 213 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_81_81;

#line 204 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_54)) == (MR_mktag((MR_Integer) 1)));
#line 204 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 204 "add_type.m"
                {
#line 204 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn2_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, (MR_Integer) 0)));
#line 205 "add_type.m"
                  {
#line 205 "add_type.m"
                    hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__TVarSet2_73);
                  }
#line 206 "add_type.m"
                  {
#line 206 "add_type.m"
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__Params2_74);
                  }
#line 207 "add_type.m"
                  {
#line 207 "add_type.m"
                    hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__KindMap2_75);
                  }
#line 208 "add_type.m"
                  {
#line 208 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__Body2_76);
                  }
#line 209 "add_type.m"
                  {
#line 209 "add_type.m"
                    hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigContext_77);
                  }
#line 210 "add_type.m"
                  {
#line 210 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigStatus_78);
                  }
#line 211 "add_type.m"
                  {
#line 211 "add_type.m"
                    hlds__hlds_data__get_type_defn_in_exported_eqv_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigInExportedEqv_79);
                  }
#line 212 "add_type.m"
                  {
#line 212 "add_type.m"
                    hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigNeedQual_80);
                  }
#line 213 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body2_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body2_76, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 213 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 213 "add_type.m"
                    hlds__make_hlds__add_type__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body2_76, (MR_Integer) 1)));
#line 213 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded);
#line 204 "add_type.m"
                }
#line 274 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 215 "add_type.m"
                {
#line 215 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Target_82;
#line 215 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MakeOptInt_83;
#line 224 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_84_84;

#line 215 "add_type.m"
                  {
#line 215 "add_type.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_20, &hlds__make_hlds__add_type__Target_82);
                  }
#line 216 "add_type.m"
                  {
#line 216 "add_type.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_type__Globals_20, (MR_Integer) 87, &hlds__make_hlds__add_type__MakeOptInt_83);
                  }
#line 224 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 224 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 224 "add_type.m"
                    {
#line 224 "add_type.m"
                      hlds__make_hlds__add_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 1)));
#line 226 "add_type.m"
                      {
#line 226 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = parse_tree__status____Unify____import_status_0_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigStatus_78);
                      }
#line 228 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 228 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 228 "add_type.m"
                      else
#line 231 "add_type.m"
                        {
#line 231 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeDefn3_85;
#line 231 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeTable_272;

#line 229 "add_type.m"
                          {
#line 229 "add_type.m"
                            hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_73, hlds__make_hlds__add_type__Params2_74, hlds__make_hlds__add_type__KindMap2_75, hlds__make_hlds__add_type__Body2_76, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__OrigNeedQual_80, (MR_Integer) 0, hlds__make_hlds__add_type__OrigContext_77, &hlds__make_hlds__add_type__TypeDefn3_85);
                          }
#line 232 "add_type.m"
                          {
#line 232 "add_type.m"
                            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn3_85, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_272);
                          }
#line 234 "add_type.m"
                          {
#line 234 "add_type.m"
                            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_272, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                          }
#line 231 "add_type.m"
                        }
#line 228 "add_type.m"
                      *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 224 "add_type.m"
                    }
#line 224 "add_type.m"
                  else
#line 263 "add_type.m"
                    {
#line 263 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__NewBody_86;

#line 237 "add_type.m"
                      {
#line 237 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(hlds__make_hlds__add_type__Target_82, hlds__make_hlds__add_type__MakeOptInt_83, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, hlds__make_hlds__add_type__Body2_76, &hlds__make_hlds__add_type__NewBody_86);
                      }
#line 263 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 247 "add_type.m"
                        {
#line 240 "add_type.m"
                          {
#line 240 "add_type.m"
                            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(hlds__make_hlds__add_type__OrigStatus_78, hlds__make_hlds__add_type__Status1_34);
                          }
#line 247 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 243 "add_type.m"
                            {
#line 243 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_275;
#line 243 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeDefn3_276;

#line 241 "add_type.m"
                              {
#line 241 "add_type.m"
                                hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_73, hlds__make_hlds__add_type__Params2_74, hlds__make_hlds__add_type__KindMap2_75, hlds__make_hlds__add_type__NewBody_86, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__NeedQual_17, (MR_Integer) 0, hlds__make_hlds__add_type__Context_15, &hlds__make_hlds__add_type__TypeDefn3_276);
                              }
#line 244 "add_type.m"
                              {
#line 244 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn3_276, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_275);
                              }
#line 246 "add_type.m"
                              {
#line 246 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_275, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                              }
#line 243 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 243 "add_type.m"
                            }
#line 247 "add_type.m"
                          else
#line 248 "add_type.m"
                            {
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisPieces_87;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisMsg_88;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisSpec_89;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_216_216;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_217_217;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_218_218;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_233_233;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_234_234;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_238_238;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_277;
#line 248 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_278;

#line 248 "add_type.m"
                              {
#line 248 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213);
                              }
#line 250 "add_type.m"
                              {
#line 250 "add_type.m"
                                hlds__make_hlds__add_type__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_218_218, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_218_218, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 250 "add_type.m"
                              }
#line 250 "add_type.m"
                              {
#line 250 "add_type.m"
                                hlds__make_hlds__add_type__V_217_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_217_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_217_217, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_218_218));
#line 250 "add_type.m"
                              }
#line 250 "add_type.m"
                              {
#line 250 "add_type.m"
                                hlds__make_hlds__add_type__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_216_216, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_217_217));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[31])));
#line 250 "add_type.m"
                              }
#line 249 "add_type.m"
                              {
#line 249 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisPieces_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_87, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_216_216));
#line 249 "add_type.m"
                              }
#line 253 "add_type.m"
                              {
#line 253 "add_type.m"
                                hlds__make_hlds__add_type__V_234_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 253 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisPieces_87));
#line 253 "add_type.m"
                              }
#line 253 "add_type.m"
                              {
#line 253 "add_type.m"
                                hlds__make_hlds__add_type__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 253 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_233_233, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_234_234));
#line 253 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_233_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 253 "add_type.m"
                              }
#line 253 "add_type.m"
                              {
#line 253 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisMsg_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 253 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 253 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_233_233));
#line 253 "add_type.m"
                              }
#line 255 "add_type.m"
                              {
#line 255 "add_type.m"
                                hlds__make_hlds__add_type__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 255 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_238_238, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisMsg_88));
#line 255 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_238_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "add_type.m"
                              }
#line 254 "add_type.m"
                              {
#line 254 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisSpec_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_238_238));
#line 254 "add_type.m"
                              }
#line 256 "add_type.m"
                              {
#line 256 "add_type.m"
                                MR_Word base;
#line 256 "add_type.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "add_type.m"
                                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 256 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisSpec_89));
#line 256 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 256 "add_type.m"
                              }
#line 257 "add_type.m"
                              {
#line 257 "add_type.m"
                                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_57, &hlds__make_hlds__add_type__ErrTypeDefn_277);
                              }
#line 259 "add_type.m"
                              {
#line 259 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__ErrTypeDefn_277, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_278);
                              }
#line 261 "add_type.m"
                              {
#line 261 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_278, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
#line 261 "add_type.m"
                                return;
                              }
#line 248 "add_type.m"
                            }
#line 247 "add_type.m"
                        }
#line 263 "add_type.m"
                      else
#line 269 "add_type.m"
                        {
#line 266 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 269 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 268 "add_type.m"
                            {
#line 268 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 268 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 268 "add_type.m"
                            }
#line 269 "add_type.m"
                          else
#line 270 "add_type.m"
                            {
#line 270 "add_type.m"
                              {
#line 270 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                              }
#line 271 "add_type.m"
                              {
#line 271 "add_type.m"
                                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__Name_12, hlds__make_hlds__add_type__Arity_21, (MR_String) "type", hlds__make_hlds__add_type__Context_15, hlds__make_hlds__add_type__OrigContext_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98);
#line 271 "add_type.m"
                                return;
                              }
#line 270 "add_type.m"
                            }
#line 269 "add_type.m"
                        }
#line 263 "add_type.m"
                    }
#line 215 "add_type.m"
                }
#line 274 "add_type.m"
              else
#line 276 "add_type.m"
                {
#line 276 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__TypeTable_289;

#line 275 "add_type.m"
                  {
#line 275 "add_type.m"
                    hlds__hlds_data__add_or_replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn1_57, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_289);
                  }
#line 277 "add_type.m"
                  {
#line 277 "add_type.m"
                    hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_289, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                  }
#line 283 "add_type.m"
                  {
#line 283 "add_type.m"
                    hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(&hlds__make_hlds__add_type__env);
                  }
#line 298 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 291 "add_type.m"
                    {
#line 291 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvMsg_93;
#line 291 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvSpec_94;
#line 291 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_260_260;
#line 291 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_262_262;
#line 291 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_263_263;
#line 291 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_265_265;
#line 291 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_269_269;

#line 294 "add_type.m"
                      {
#line 294 "add_type.m"
                        hlds__make_hlds__add_type__V_265_265 = hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0();
                      }
#line 294 "add_type.m"
                      {
#line 294 "add_type.m"
                        hlds__make_hlds__add_type__V_263_263 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_263_263, 0) = ((MR_Box) ((MR_Integer) 1));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_263_263, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_265_265));
#line 294 "add_type.m"
                      }
#line 294 "add_type.m"
                      {
#line 294 "add_type.m"
                        hlds__make_hlds__add_type__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_262_262, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_263_263));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_262_262, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 294 "add_type.m"
                      }
#line 293 "add_type.m"
                      {
#line 293 "add_type.m"
                        hlds__make_hlds__add_type__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_260_260, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0]));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_260_260, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_262_262));
#line 293 "add_type.m"
                      }
#line 292 "add_type.m"
                      {
#line 292 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvMsg_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 292 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_93, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 292 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_93, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_260_260));
#line 292 "add_type.m"
                      }
#line 296 "add_type.m"
                      {
#line 296 "add_type.m"
                        hlds__make_hlds__add_type__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 296 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_269_269, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvMsg_93));
#line 296 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_269_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "add_type.m"
                      }
#line 295 "add_type.m"
                      {
#line 295 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvSpec_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_269_269));
#line 295 "add_type.m"
                      }
#line 297 "add_type.m"
                      {
#line 297 "add_type.m"
                        MR_Word base;
#line 297 "add_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 297 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvSpec_94));
#line 297 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 297 "add_type.m"
                      }
#line 291 "add_type.m"
                    }
#line 298 "add_type.m"
                  else
#line 298 "add_type.m"
                    *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 276 "add_type.m"
                }
#line 274 "add_type.m"
            }
#line 202 "add_type.m"
        }
#line 81 "add_type.m"
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
