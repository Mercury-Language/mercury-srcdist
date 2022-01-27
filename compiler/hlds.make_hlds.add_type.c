/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2015-06-22
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
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



#line 735 "add_type.m"
struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
#line 744 "add_type.m"
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
#line 761 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
#line 763 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
#line 763 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98;
#line 763 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118;
#line 763 "add_type.m"
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98;
#line 735 "add_type.m"
};

#line 36 "add_type.m"
struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s {
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13;
#line 82 "add_type.m"
  MR_bool hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded;
#line 82 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297;
#line 82 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47;
#line 82 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50;
#line 284 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0;
#line 284 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90;
#line 284 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91;
#line 286 "add_type.m"
  MR_Box hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91;
#line 287 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1;
#line 287 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303;
#line 287 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_301_301;
#line 36 "add_type.m"
};


#line 196 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 199 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

#line 202 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 205 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 802 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__802__1_1_f_0(
#line 802 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94);

#line 894 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 894 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 894 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 894 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 894 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 894 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);

#line 890 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 890 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 890 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 890 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 890 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 838 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 838 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 838 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41);

#line 816 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 816 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 816 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 816 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11);

#line 807 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 807 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 807 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 807 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 807 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 807 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 807 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15);

#line 802 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 802 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 802 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1);

#line 793 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 793 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 793 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 793 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 793 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 763 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 763 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 763 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 763 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 763 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 763 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 763 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 763 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 735 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);

#line 716 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 716 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 716 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 716 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15);

#line 659 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 659 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 659 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 659 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 659 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4);

#line 534 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 534 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 534 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 534 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6);

#line 503 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 503 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 503 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 503 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 503 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 503 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5);

#line 460 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_13,
#line 460 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
#line 460 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
#line 460 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29);

#line 362 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 362 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 362 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4);

#line 333 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 333 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 333 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4);

#line 326 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 326 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 326 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 326 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 326 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4);

#line 304 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void);

#line 284 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(
#line 284 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 286 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3(
#line 286 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 287 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(
#line 287 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 287 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5(
#line 287 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 287 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(
#line 287 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 284 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(
#line 284 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 284 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(
#line 284 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[78][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[5][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][8];


#line 479 "add_type.m"
/* sealed */ struct hlds__make_hlds__add_type__vector_common_type_5_0_s {
#line 479 "add_type.m"
  const MR_String hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
#line 479 "add_type.m"
};

static /* final */ const struct hlds__make_hlds__add_type__vector_common_type_5_0_s hlds__make_hlds__add_type_vector_common_5[5];



static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[78][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "or comparison."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "is not allowed to have user-defined equality"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "cannot have user-defined equality or comparison."))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "consists of a single zero-arity constructor"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Discriminated unions whose body"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[11])))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "annotations"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[14]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[15])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "consistent"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: all definitions of a type must have"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[20])))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 23 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[21])))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must have the same visibility."))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[25]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: all definitions of a type"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[27]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[26])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[29])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "exported as abstract type."))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[31]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with monomorphic definition,"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[33]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[32])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "polymorphic equivalence type,"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[35]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[34])))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[37]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[36])))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[39]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(There\'s no performance penalty for this -- the compiler will"))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[41]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[40])))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[43]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[42])))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A better work-around is to use a \"wrapper\" type, with just one"))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[45]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[44])))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "type by putting the type definition in the interface section."))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[47]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[46])))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A quick work-around is to just export the type as a concrete,"))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[49]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[48])))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[54])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])))
  },
  /* row 59 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: the type"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[13])))
  },
  /* row 61 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[60]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In definition of type"))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: type "))
  },
  /* row 64 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "defined as foreign_type without being declared."))
  },
  /* row 65 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[64]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: pragma foreign_type "))
  },
  /* row 67 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must have the same visibility as the type declaration."))
  },
  /* row 68 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: no"))
  },
  /* row 70 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 13)),
    ((MR_Box) ((MR_String) "foreign_type"))
  },
  /* row 71 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "declaration for"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[56])))
  },
  /* row 73 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_1[72]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: field"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[1])),
    ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[5][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[38])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
};

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[2][5] = {
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1075 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1083 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0
  }
};

#line 1091 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 1099 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 802 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__802__1_1_f_0(
#line 802 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94)
#line 802 "add_type.m"
{
#line 802 "add_type.m"
  {
#line 802 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 802 "add_type.m"
    MR_Word hlds__make_hlds__add_type__HeadVar__2_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 0)));
#line 802 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 1)));
#line 802 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 2)));
#line 802 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 3)));

#line 802 "add_type.m"
    return hlds__make_hlds__add_type__HeadVar__2_95;
#line 802 "add_type.m"
  }
#line 802 "add_type.m"
}

#line 894 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 894 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 894 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 894 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 894 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 894 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11)
#line 894 "add_type.m"
{
#line 897 "add_type.m"
  {
#line 897 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 897 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_12_12;

#line 898 "add_type.m"
    {
#line 898 "add_type.m"
      hlds__make_hlds__add_type__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleName_8));
#line 898 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldName_6));
#line 898 "add_type.m"
    }
#line 898 "add_type.m"
    {
#line 898 "add_type.m"
      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_12_12)), ((MR_Box) (hlds__make_hlds__add_type__FieldNameDefn_7)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);
#line 898 "add_type.m"
      return;
    }
#line 897 "add_type.m"
  }
#line 894 "add_type.m"
}

#line 890 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 890 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 890 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 890 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 890 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 890 "add_type.m"
{
#line 890 "add_type.m"
  {
#line 890 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 890 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11;

#line 890 "add_type.m"
    {
#line 890 "add_type.m"
      hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11);
    }
#line 890 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11));
#line 890 "add_type.m"
  }
#line 890 "add_type.m"
}

#line 838 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 838 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 838 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 838 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41)
#line 838 "add_type.m"
{
#line 844 "add_type.m"
  {
#line 844 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 844 "add_type.m"
    MR_Word hlds__make_hlds__add_type__FieldModule_17;
#line 876 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConflictingDefns_19;
#line 856 "add_type.m"
    MR_Box hlds__make_hlds__add_type__conv0_ConflictingDefns_19;

#line 848 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__FieldName_9)) == (MR_mktag((MR_Integer) 1))))
#line 846 "add_type.m"
      {
#line 846 "add_type.m"
        MR_String hlds__make_hlds__add_type__V_16_16;

#line 846 "add_type.m"
        hlds__make_hlds__add_type__FieldModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 0)));
#line 846 "add_type.m"
        hlds__make_hlds__add_type__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 1)));
#line 846 "add_type.m"
      }
#line 848 "add_type.m"
    else
#line 849 "add_type.m"
      {
#line 850 "add_type.m"
        {
#line 850 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
#line 850 "add_type.m"
          return;
        }
#line 849 "add_type.m"
      }
#line 856 "add_type.m"
    {
#line 856 "add_type.m"
      hlds__make_hlds__add_type__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[3], hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (hlds__make_hlds__add_type__FieldName_9)), &hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
    }
#line 856 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 856 "add_type.m"
      {
#line 856 "add_type.m"
        hlds__make_hlds__add_type__ConflictingDefns_19 = ((MR_Word) hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
#line 856 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 856 "add_type.m"
      }
#line 876 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 861 "add_type.m"
      {
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__OrigContext_21;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Context_26;
#line 861 "add_type.m"
        MR_String hlds__make_hlds__add_type__FieldString_31;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Pieces_32;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__HereMsg_33;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevPieces_34;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevMsg_35;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_36;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_59_59;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_60_60;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_64_64;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_72_72;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_73_73;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_77_77;
#line 861 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_78_78;
#line 859 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConflictingDefn_20;
#line 857 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_45_45;
#line 865 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_27_27;
#line 865 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_28_28;
#line 865 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29;
#line 865 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_30_30;

#line 857 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__ConflictingDefns_19)) == (MR_mktag((MR_Integer) 1)));
#line 857 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 857 "add_type.m"
          {
#line 857 "add_type.m"
            hlds__make_hlds__add_type__ConflictingDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 0)));
#line 857 "add_type.m"
            hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 1)));
#line 857 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 857 "add_type.m"
          }
#line 859 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 858 "add_type.m"
          {
#line 858 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_22_22;
#line 858 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_23_23;
#line 858 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_24_24;
#line 858 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_25_25;

#line 858 "add_type.m"
            hlds__make_hlds__add_type__OrigContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 0)));
#line 858 "add_type.m"
            hlds__make_hlds__add_type__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 1)));
#line 858 "add_type.m"
            hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 2)));
#line 858 "add_type.m"
            hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 3)));
#line 858 "add_type.m"
            hlds__make_hlds__add_type__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 4)));
#line 858 "add_type.m"
          }
#line 859 "add_type.m"
        else
#line 860 "add_type.m"
          {
#line 860 "add_type.m"
            {
#line 860 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
#line 860 "add_type.m"
              return;
            }
#line 860 "add_type.m"
          }
#line 865 "add_type.m"
        hlds__make_hlds__add_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 0)));
#line 865 "add_type.m"
        hlds__make_hlds__add_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 1)));
#line 865 "add_type.m"
        hlds__make_hlds__add_type__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 2)));
#line 865 "add_type.m"
        hlds__make_hlds__add_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 3)));
#line 865 "add_type.m"
        hlds__make_hlds__add_type__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 4)));
#line 866 "add_type.m"
        {
#line 866 "add_type.m"
          hlds__make_hlds__add_type__FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 867 "add_type.m"
        {
#line 867 "add_type.m"
          hlds__make_hlds__add_type__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldString_31));
#line 867 "add_type.m"
        }
#line 867 "add_type.m"
        {
#line 867 "add_type.m"
          hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[58])));
#line 867 "add_type.m"
        }
#line 867 "add_type.m"
        {
#line 867 "add_type.m"
          hlds__make_hlds__add_type__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[76])));
#line 867 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 867 "add_type.m"
        }
#line 869 "add_type.m"
        {
#line 869 "add_type.m"
          hlds__make_hlds__add_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_32));
#line 869 "add_type.m"
        }
#line 869 "add_type.m"
        {
#line 869 "add_type.m"
          hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_60_60));
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "add_type.m"
        }
#line 869 "add_type.m"
        {
#line 869 "add_type.m"
          hlds__make_hlds__add_type__HereMsg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_26));
#line 869 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 869 "add_type.m"
        }
#line 871 "add_type.m"
        {
#line 871 "add_type.m"
          hlds__make_hlds__add_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[52])));
#line 871 "add_type.m"
        }
#line 870 "add_type.m"
        {
#line 870 "add_type.m"
          hlds__make_hlds__add_type__PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[77])));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_64_64));
#line 870 "add_type.m"
        }
#line 872 "add_type.m"
        {
#line 872 "add_type.m"
          hlds__make_hlds__add_type__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevPieces_34));
#line 872 "add_type.m"
        }
#line 872 "add_type.m"
        {
#line 872 "add_type.m"
          hlds__make_hlds__add_type__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_73_73));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "add_type.m"
        }
#line 872 "add_type.m"
        {
#line 872 "add_type.m"
          hlds__make_hlds__add_type__PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__OrigContext_21));
#line 872 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_72_72));
#line 872 "add_type.m"
        }
#line 874 "add_type.m"
        {
#line 874 "add_type.m"
          hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevMsg_35));
#line 874 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 874 "add_type.m"
        }
#line 874 "add_type.m"
        {
#line 874 "add_type.m"
          hlds__make_hlds__add_type__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 874 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_type__HereMsg_33));
#line 874 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 874 "add_type.m"
        }
#line 873 "add_type.m"
        {
#line 873 "add_type.m"
          hlds__make_hlds__add_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 873 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_77_77));
#line 873 "add_type.m"
        }
#line 875 "add_type.m"
        {
#line 875 "add_type.m"
          MR_Word base;
#line 875 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 875 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = base;
#line 875 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_36));
#line 875 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40));
#line 875 "add_type.m"
        }
#line 861 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 861 "add_type.m"
      }
#line 876 "add_type.m"
    else
#line 877 "add_type.m"
      {
#line 877 "add_type.m"
        MR_String hlds__make_hlds__add_type__UnqualFieldName_37;
#line 877 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82;
#line 877 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_83_83;
#line 877 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_84_84;
#line 890 "add_type.m"
        MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39;

#line 877 "add_type.m"
        {
#line 877 "add_type.m"
          hlds__make_hlds__add_type__UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 885 "add_type.m"
#line 885 "add_type.m"
        switch (hlds__make_hlds__add_type__NeedQual_11) {
#line 885 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 885 "add_type.m"
          case (MR_Integer) 1:
#line 882 "add_type.m"
            {
#line 882 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_81_81;

#line 883 "add_type.m"
              {
#line 883 "add_type.m"
                hlds__make_hlds__add_type__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 883 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 883 "add_type.m"
              }
#line 883 "add_type.m"
              {
#line 883 "add_type.m"
                mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_81_81)), ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82);
              }
#line 882 "add_type.m"
            }
#line 885 "add_type.m"
            break;
#line 885 "add_type.m"
          case (MR_Integer) 0:
#line 886 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 885 "add_type.m"
            break;
#line 885 "add_type.m"
        }
#line 890 "add_type.m"
        {
#line 890 "add_type.m"
          hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 890 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_7[0]));
#line 890 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
#line 890 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 890 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 3) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 890 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10));
#line 890 "add_type.m"
        }
#line 891 "add_type.m"
        {
#line 891 "add_type.m"
          hlds__make_hlds__add_type__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 891 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldModule_17));
#line 891 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_type__PartialQuals_12));
#line 891 "add_type.m"
        }
#line 890 "add_type.m"
        {
#line 890 "add_type.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[0], hlds__make_hlds__add_type__V_83_83, hlds__make_hlds__add_type__V_84_84, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        }
#line 890 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
#line 877 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40;
#line 877 "add_type.m"
      }
#line 844 "add_type.m"
  }
#line 838 "add_type.m"
}

#line 816 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 816 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 816 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 816 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 816 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11)
#line 816 "add_type.m"
{
#line 822 "add_type.m"
  while (MR_TRUE)
#line 822 "add_type.m"
    {
#line 822 "add_type.m"
      /* tailcall optimized into a loop */
#line 822 "add_type.m"
      {
#line 822 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 822 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 822 "add_type.m"
          {
#line 822 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 822 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 822 "add_type.m"
          }
#line 822 "add_type.m"
        else
#line 825 "add_type.m"
          {
#line 825 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 825 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 825 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 825 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;
#line 825 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_44_44;

#line 832 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCtorFieldName_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 833 "add_type.m"
              {
#line 833 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 833 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 833 "add_type.m"
              }
#line 832 "add_type.m"
            else
#line 827 "add_type.m"
              {
#line 827 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldName_34;
#line 827 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldNameContext_35;
#line 827 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldDefn_36;
#line 827 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeCtorFieldName_24, (MR_Integer) 0)));

#line 827 "add_type.m"
                hlds__make_hlds__add_type__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 0)));
#line 827 "add_type.m"
                hlds__make_hlds__add_type__FieldNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 1)));
#line 828 "add_type.m"
                {
#line 828 "add_type.m"
                  hlds__make_hlds__add_type__FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 828 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldNameContext_35));
#line 828 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__ImportStatus_6));
#line 828 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_4));
#line 828 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 3) = ((MR_Box) (hlds__make_hlds__add_type__ConsId_5));
#line 828 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldNumber_7));
#line 828 "add_type.m"
                }
#line 830 "add_type.m"
                {
#line 830 "add_type.m"
                  hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(hlds__make_hlds__add_type__FieldName_34, hlds__make_hlds__add_type__FieldDefn_36, hlds__make_hlds__add_type__NeedQual_2, hlds__make_hlds__add_type__PartialQuals_3, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43);
                }
#line 827 "add_type.m"
              }
#line 836 "add_type.m"
            hlds__make_hlds__add_type__V_44_44 = (hlds__make_hlds__add_type__FieldNumber_7 + (MR_Integer) 1);
#line 835 "add_type.m"
            /* direct tailcall eliminated */
#line 835 "add_type.m"
            {
#line 835 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__MaybeCtorFieldNames_25;
#line 835 "add_type.m"
              MR_Integer hlds__make_hlds__add_type__FieldNumber__tmp_copy_7 = hlds__make_hlds__add_type__V_44_44;
#line 835 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 835 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;

#line 835 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 835 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8;
#line 835 "add_type.m"
              hlds__make_hlds__add_type__FieldNumber_7 = hlds__make_hlds__add_type__FieldNumber__tmp_copy_7;
#line 835 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 835 "add_type.m"
            }
#line 835 "add_type.m"
            continue;
#line 825 "add_type.m"
          }
#line 822 "add_type.m"
      }
#line 822 "add_type.m"
      break;
#line 822 "add_type.m"
    }
#line 816 "add_type.m"
}

#line 807 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 807 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 807 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 807 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 807 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 807 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 807 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15)
#line 807 "add_type.m"
{
#line 810 "add_type.m"
  {
#line 810 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 810 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdA_12;
#line 810 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdB_13;
#line 810 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_16_16;
#line 810 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_18_18;
#line 810 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_20_20;

#line 811 "add_type.m"
    {
#line 811 "add_type.m"
      hlds__make_hlds__add_type__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleQual_10));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_type__ConsName_8));
#line 811 "add_type.m"
    }
#line 811 "add_type.m"
    {
#line 811 "add_type.m"
      hlds__make_hlds__add_type__ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 811 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 3) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_7));
#line 811 "add_type.m"
    }
#line 813 "add_type.m"
    {
#line 813 "add_type.m"
      hlds__make_hlds__add_type__V_18_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 812 "add_type.m"
    {
#line 812 "add_type.m"
      hlds__make_hlds__add_type__ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 812 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 812 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 812 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 812 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_18_18));
#line 812 "add_type.m"
    }
#line 814 "add_type.m"
    {
#line 814 "add_type.m"
      hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdB_13));
#line 814 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14));
#line 814 "add_type.m"
    }
#line 814 "add_type.m"
    {
#line 814 "add_type.m"
      MR_Word base;
#line 814 "add_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 814 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15 = base;
#line 814 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdA_12));
#line 814 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 814 "add_type.m"
    }
#line 810 "add_type.m"
  }
#line 807 "add_type.m"
}

#line 802 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 802 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 802 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1)
#line 802 "add_type.m"
{
#line 802 "add_type.m"
  {
#line 802 "add_type.m"
    MR_Box hlds__make_hlds__add_type__wrapper_arg_2;
#line 802 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 802 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv3_HeadVar__2_95;

#line 802 "add_type.m"
    {
#line 802 "add_type.m"
      hlds__make_hlds__add_type__conv3_HeadVar__2_95 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__802__1_1_f_0(((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1));
    }
#line 802 "add_type.m"
    hlds__make_hlds__add_type__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_type__conv3_HeadVar__2_95));
#line 802 "add_type.m"
    return hlds__make_hlds__add_type__wrapper_arg_2;
#line 802 "add_type.m"
  }
#line 802 "add_type.m"
}

#line 793 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 793 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 793 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 793 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 793 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 793 "add_type.m"
{
#line 793 "add_type.m"
  {
#line 793 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 793 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15;

#line 793 "add_type.m"
    {
#line 793 "add_type.m"
      hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15);
    }
#line 793 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15));
#line 793 "add_type.m"
  }
#line 793 "add_type.m"
}

#line 763 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 763 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 763 "add_type.m"
{
#line 763 "add_type.m"
  {
#line 763 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 763 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
#line 763 "add_type.m"
  }
#line 763 "add_type.m"
}

#line 763 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 763 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 763 "add_type.m"
{
#line 763 "add_type.m"
  {
#line 763 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 763 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98);
#line 763 "add_type.m"
    {
#line 763 "add_type.m"
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 763 "add_type.m"
      return;
    }
#line 763 "add_type.m"
  }
#line 763 "add_type.m"
}

#line 763 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 763 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 763 "add_type.m"
{
#line 763 "add_type.m"
  {
#line 763 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 763 "add_type.m"
    {
#line 764 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_100_100;
#line 764 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 764 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 764 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 764 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 764 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_105_105;
#line 764 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_106_106;

#line 764 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 0)));
#line 764 "add_type.m"
      hlds__make_hlds__add_type__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 1)));
#line 764 "add_type.m"
      hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 2)));
#line 764 "add_type.m"
      hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 3)));
#line 764 "add_type.m"
      hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 4)));
#line 764 "add_type.m"
      hlds__make_hlds__add_type__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 5)));
#line 764 "add_type.m"
      hlds__make_hlds__add_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 6)));
#line 764 "add_type.m"
      hlds__make_hlds__add_type__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 7)));
#line 764 "add_type.m"
      {
#line 764 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118);
      }
#line 764 "add_type.m"
      if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 764 "add_type.m"
        {
#line 764 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 764 "add_type.m"
          return;
        }
#line 763 "add_type.m"
    }
#line 763 "add_type.m"
  }
#line 763 "add_type.m"
}

#line 763 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 763 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 763 "add_type.m"
{
#line 763 "add_type.m"
  {
#line 763 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 763 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
#line 763 "add_type.m"
      {
#line 763 "add_type.m"
        {
#line 763 "add_type.m"
          {
#line 763 "add_type.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, hlds__make_hlds__add_type__env_ptr);
          }
#line 763 "add_type.m"
        }
#line 763 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
#line 763 "add_type.m"
      }
#line 763 "add_type.m"
    else
#line 763 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
#line 763 "add_type.m"
  }
#line 763 "add_type.m"
}

#line 735 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60)
#line 735 "add_type.m"
{
#line 735 "add_type.m"
  {
#line 735 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 735 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = hlds__make_hlds__add_type__TypeCtor_17;
#line 744 "add_type.m"
    {
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 0)));
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 1)));
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 2)));
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 3)));
#line 744 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 4)));
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 5)));
#line 744 "add_type.m"
      MR_String hlds__make_hlds__add_type__BaseName_34;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedName_35;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedName_36;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdA_37;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdB_38;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdA_39;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdB_40;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ConsDefn_41;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__PartialQuals_42;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__FieldNames_52;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_61_61;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_62_62;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85;

#line 746 "add_type.m"
      {
#line 746 "add_type.m"
        hlds__make_hlds__add_type__BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__Name_30);
      }
#line 747 "add_type.m"
      {
#line 747 "add_type.m"
        hlds__make_hlds__add_type__QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 747 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorModuleName_18));
#line 747 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 747 "add_type.m"
      }
#line 748 "add_type.m"
      {
#line 748 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 748 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__UnqualifiedName_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 748 "add_type.m"
      }
#line 749 "add_type.m"
      {
#line 749 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 749 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 749 "add_type.m"
      }
#line 750 "add_type.m"
      {
#line 750 "add_type.m"
        hlds__make_hlds__add_type__V_61_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 750 "add_type.m"
      {
#line 750 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 750 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_61_61));
#line 750 "add_type.m"
      }
#line 751 "add_type.m"
      {
#line 751 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 751 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 751 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 751 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 751 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 751 "add_type.m"
      }
#line 752 "add_type.m"
      {
#line 752 "add_type.m"
        hlds__make_hlds__add_type__V_62_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 752 "add_type.m"
      {
#line 752 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 752 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_62_62));
#line 752 "add_type.m"
      }
#line 754 "add_type.m"
      {
#line 754 "add_type.m"
        hlds__make_hlds__add_type__ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 754 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 0) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 754 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__TVarSet_19));
#line 754 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeParams_20));
#line 754 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 3) = ((MR_Box) (hlds__make_hlds__add_type__KindMap_21));
#line 754 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 4) = ((MR_Box) (hlds__make_hlds__add_type__ExistQVars_28));
#line 754 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 5) = ((MR_Box) (hlds__make_hlds__add_type__Constraints_29));
#line 754 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 6) = ((MR_Box) (hlds__make_hlds__add_type__Args_31));
#line 754 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 7) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 754 "add_type.m"
      }
#line 756 "add_type.m"
      {
#line 756 "add_type.m"
        parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__make_hlds__add_type__TypeCtorModuleName_18, hlds__make_hlds__add_type__PQInfo_23, &hlds__make_hlds__add_type__PartialQuals_42);
      }
#line 761 "add_type.m"
      {
#line 761 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_3_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__QualifiedConsIdA_37, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
      }
#line 761 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 763 "add_type.m"
        {
#line 763 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&hlds__make_hlds__add_type__env);
        }
#line 775 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 767 "add_type.m"
        {
#line 767 "add_type.m"
          MR_String hlds__make_hlds__add_type__QualifiedConsIdStr_45;
#line 767 "add_type.m"
          MR_String hlds__make_hlds__add_type__TypeCtorStr_46;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Pieces_47;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Msg_48;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Spec_49;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_65_65;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_67_67;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_70_70;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_71_71;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_78_78;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_79_79;
#line 767 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_83_83;

#line 767 "add_type.m"
          {
#line 767 "add_type.m"
            hlds__make_hlds__add_type__QualifiedConsIdStr_45 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__make_hlds__add_type__QualifiedConsIdA_37);
          }
#line 768 "add_type.m"
          {
#line 768 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorStr_46 = parse_tree__prog_out__type_ctor_to_string_1_f_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
          }
#line 769 "add_type.m"
          {
#line 769 "add_type.m"
            hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdStr_45));
#line 769 "add_type.m"
          }
#line 770 "add_type.m"
          {
#line 770 "add_type.m"
            hlds__make_hlds__add_type__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorStr_46));
#line 770 "add_type.m"
          }
#line 770 "add_type.m"
          {
#line 770 "add_type.m"
            hlds__make_hlds__add_type__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_71_71));
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[58])));
#line 770 "add_type.m"
          }
#line 770 "add_type.m"
          {
#line 770 "add_type.m"
            hlds__make_hlds__add_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
#line 770 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_70_70));
#line 770 "add_type.m"
          }
#line 769 "add_type.m"
          {
#line 769 "add_type.m"
            hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_67_67));
#line 769 "add_type.m"
          }
#line 769 "add_type.m"
          {
#line 769 "add_type.m"
            hlds__make_hlds__add_type__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[74])));
#line 769 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 769 "add_type.m"
          }
#line 772 "add_type.m"
          {
#line 772 "add_type.m"
            hlds__make_hlds__add_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_47));
#line 772 "add_type.m"
          }
#line 772 "add_type.m"
          {
#line 772 "add_type.m"
            hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_79_79));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 772 "add_type.m"
          }
#line 772 "add_type.m"
          {
#line 772 "add_type.m"
            hlds__make_hlds__add_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 772 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 772 "add_type.m"
          }
#line 773 "add_type.m"
          {
#line 773 "add_type.m"
            hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_48));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "add_type.m"
          }
#line 773 "add_type.m"
          {
#line 773 "add_type.m"
            hlds__make_hlds__add_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_83_83));
#line 773 "add_type.m"
          }
#line 774 "add_type.m"
          {
#line 774 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 774 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_49));
#line 774 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59));
#line 774 "add_type.m"
          }
#line 767 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57;
#line 767 "add_type.m"
        }
#line 775 "add_type.m"
      else
#line 776 "add_type.m"
        {
#line 776 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 776 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88;
#line 776 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_90_90;
#line 776 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91;
#line 793 "add_type.m"
          MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91;

#line 780 "add_type.m"
          {
#line 780 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 780 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdB_38));
#line 780 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 780 "add_type.m"
          }
#line 788 "add_type.m"
#line 788 "add_type.m"
          switch (hlds__make_hlds__add_type__NeedQual_22) {
#line 788 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 788 "add_type.m"
            case (MR_Integer) 1:
#line 785 "add_type.m"
              {
#line 785 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_89_89;

#line 787 "add_type.m"
                {
#line 787 "add_type.m"
                  hlds__make_hlds__add_type__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdB_40));
#line 787 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86));
#line 787 "add_type.m"
                }
#line 787 "add_type.m"
                {
#line 787 "add_type.m"
                  hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 787 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdA_39));
#line 787 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_89_89));
#line 787 "add_type.m"
                }
#line 785 "add_type.m"
              }
#line 788 "add_type.m"
              break;
#line 788 "add_type.m"
            case (MR_Integer) 0:
#line 789 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 788 "add_type.m"
              break;
#line 788 "add_type.m"
          }
#line 793 "add_type.m"
          {
#line 793 "add_type.m"
            hlds__make_hlds__add_type__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 793 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
#line 793 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
#line 793 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 793 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 793 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 4) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 793 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 5) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 793 "add_type.m"
          }
#line 793 "add_type.m"
          {
#line 793 "add_type.m"
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[1], hlds__make_hlds__add_type__V_90_90, hlds__make_hlds__add_type__PartialQuals_42, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
          }
#line 793 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
#line 797 "add_type.m"
          {
#line 797 "add_type.m"
            hlds__hlds_data__insert_into_cons_table_5_p_0(hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91, hlds__make_hlds__add_type__ConsDefn_41, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58);
          }
#line 776 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59;
#line 776 "add_type.m"
        }
#line 802 "add_type.m"
      {
#line 802 "add_type.m"
        hlds__make_hlds__add_type__FieldNames_52 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[2], (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[1], hlds__make_hlds__add_type__Args_31);
      }
#line 804 "add_type.m"
      {
#line 804 "add_type.m"
        hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(hlds__make_hlds__add_type__FieldNames_52, hlds__make_hlds__add_type__NeedQual_22, hlds__make_hlds__add_type__PartialQuals_42, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__ImportStatus_24, (MR_Integer) 1, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);
#line 804 "add_type.m"
        return;
      }
#line 744 "add_type.m"
    }
#line 735 "add_type.m"
  }
#line 735 "add_type.m"
}

#line 716 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 716 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 716 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 716 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 716 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15)
#line 716 "add_type.m"
{
#line 723 "add_type.m"
  while (MR_TRUE)
#line 723 "add_type.m"
    {
#line 723 "add_type.m"
      /* tailcall optimized into a loop */
#line 723 "add_type.m"
      {
#line 723 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 723 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 723 "add_type.m"
          {
#line 724 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14;
#line 724 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12;
#line 724 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10;
#line 723 "add_type.m"
          }
#line 723 "add_type.m"
        else
#line 727 "add_type.m"
          {
#line 727 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 727 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 727 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 727 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 727 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 728 "add_type.m"
            {
#line 728 "add_type.m"
              hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(hlds__make_hlds__add_type__Ctor_33, hlds__make_hlds__add_type__TypeCtor_2, hlds__make_hlds__add_type__TypeCtorModuleName_3, hlds__make_hlds__add_type__TVarSet_4, hlds__make_hlds__add_type__TypeParams_5, hlds__make_hlds__add_type__KindMap_6, hlds__make_hlds__add_type__NeedQual_7, hlds__make_hlds__add_type__PQInfo_8, hlds__make_hlds__add_type__ImportStatus_9, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12, &hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54);
            }
#line 731 "add_type.m"
            /* direct tailcall eliminated */
#line 731 "add_type.m"
            {
#line 731 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__Ctors_34;
#line 731 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 731 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 731 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 731 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14;
#line 731 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12;
#line 731 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10;
#line 731 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 731 "add_type.m"
            }
#line 731 "add_type.m"
            continue;
#line 727 "add_type.m"
          }
#line 723 "add_type.m"
      }
#line 723 "add_type.m"
      break;
#line 723 "add_type.m"
    }
#line 716 "add_type.m"
}

#line 659 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 659 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 659 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 659 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 659 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4)
#line 659 "add_type.m"
{
#line 663 "add_type.m"
  {
#line 663 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 663 "add_type.m"
#line 663 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) {
#line 663 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 663 "add_type.m"
      case (MR_Integer) 0:
#line 663 "add_type.m"
        {
#line 663 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 663 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeDirectArgCtors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 663 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorTagMap_12;
#line 663 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedAddr_13;
#line 663 "add_type.m"
          MR_Word hlds__make_hlds__add_type__IsEnum_14;
#line 663 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CheaperTagTest_16;

#line 671 "add_type.m"
          {
#line 671 "add_type.m"
            hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_type__Body_5, hlds__make_hlds__add_type__MaybeUserEqComp_6, hlds__make_hlds__add_type__TypeCtor_2, (MR_Integer) 1, hlds__make_hlds__add_type__Globals_3, &hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__ReservedAddr_13, &hlds__make_hlds__add_type__IsEnum_14);
          }
#line 674 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__ReservedAddr_13 == (MR_Integer) 1);
#line 676 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 675 "add_type.m"
            {
#line 675 "add_type.m"
              hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__CheaperTagTest_16);
            }
#line 676 "add_type.m"
          else
#line 677 "add_type.m"
            hlds__make_hlds__add_type__CheaperTagTest_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "add_type.m"
          {
#line 679 "add_type.m"
            MR_Word base;
#line 679 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 679 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 679 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_5));
#line 679 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorTagMap_12));
#line 679 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__CheaperTagTest_16));
#line 679 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__IsEnum_14));
#line 679 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_6));
#line 679 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__MaybeDirectArgCtors_7));
#line 679 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__make_hlds__add_type__ReservedAddr_13 << (MR_Integer) 1)))));
#line 679 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 679 "add_type.m"
          }
#line 663 "add_type.m"
        }
#line 663 "add_type.m"
        break;
#line 663 "add_type.m"
      case (MR_Integer) 1:
#line 682 "add_type.m"
        {
#line 682 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 682 "add_type.m"
          {
#line 682 "add_type.m"
            MR_Word base;
#line 682 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 682 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 682 "add_type.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_17));
#line 682 "add_type.m"
          }
#line 682 "add_type.m"
        }
#line 663 "add_type.m"
        break;
#line 663 "add_type.m"
      case (MR_Integer) 2:
#line 685 "add_type.m"
        {
#line 685 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Details_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 686 "add_type.m"
          {
#line 686 "add_type.m"
            MR_Word base;
#line 686 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 686 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 686 "add_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 686 "add_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Details_24));
#line 686 "add_type.m"
          }
#line 685 "add_type.m"
        }
#line 663 "add_type.m"
        break;
#line 663 "add_type.m"
      case (MR_Integer) 3:
#line 663 "add_type.m"
#line 663 "add_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 663 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 663 "add_type.m"
          case (MR_Integer) 0:
#line 683 "add_type.m"
            {
#line 683 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 683 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));

#line 684 "add_type.m"
              {
#line 684 "add_type.m"
                MR_Word base;
#line 684 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 684 "add_type.m"
                *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 684 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 684 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__SolverTypeDetails_20));
#line 684 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_21));
#line 684 "add_type.m"
              }
#line 683 "add_type.m"
            }
#line 663 "add_type.m"
            break;
#line 663 "add_type.m"
          case (MR_Integer) 1:
#line 688 "add_type.m"
            {
#line 688 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 688 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 688 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 3)));
#line 688 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_32;

#line 694 "add_type.m"
#line 694 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) {
#line 694 "add_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 694 "add_type.m"
                case (MR_Integer) 0:
#line 690 "add_type.m"
                  {
#line 690 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__ILForeignType_33 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__ForeignType_27), (MR_Integer) 0);
#line 690 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_34;
#line 690 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_59_59;

#line 691 "add_type.m"
                    {
#line 691 "add_type.m"
                      hlds__make_hlds__add_type__Data_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__ILForeignType_33));
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 691 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 691 "add_type.m"
                    }
#line 693 "add_type.m"
                    {
#line 693 "add_type.m"
                      hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 693 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_34));
#line 693 "add_type.m"
                    }
#line 693 "add_type.m"
                    {
#line 693 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 693 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 693 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_type.m"
                    }
#line 690 "add_type.m"
                  }
#line 694 "add_type.m"
                  break;
#line 694 "add_type.m"
                case (MR_Integer) 1:
#line 695 "add_type.m"
                  {
#line 695 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__CForeignType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 695 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_55_55;
#line 695 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_64;

#line 696 "add_type.m"
                    {
#line 696 "add_type.m"
                      hlds__make_hlds__add_type__Data_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__CForeignType_35));
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 696 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 696 "add_type.m"
                    }
#line 698 "add_type.m"
                    {
#line 698 "add_type.m"
                      hlds__make_hlds__add_type__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 698 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_64));
#line 698 "add_type.m"
                    }
#line 698 "add_type.m"
                    {
#line 698 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 698 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_55_55));
#line 698 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 698 "add_type.m"
                    }
#line 695 "add_type.m"
                  }
#line 694 "add_type.m"
                  break;
#line 694 "add_type.m"
                case (MR_Integer) 2:
#line 700 "add_type.m"
                  {
#line 700 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__JavaForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 700 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_51_51;
#line 700 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_65;

#line 701 "add_type.m"
                    {
#line 701 "add_type.m"
                      hlds__make_hlds__add_type__Data_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__JavaForeignType_36));
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 701 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 701 "add_type.m"
                    }
#line 703 "add_type.m"
                    {
#line 703 "add_type.m"
                      hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 703 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_65));
#line 703 "add_type.m"
                    }
#line 703 "add_type.m"
                    {
#line 703 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 703 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 703 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "add_type.m"
                    }
#line 700 "add_type.m"
                  }
#line 694 "add_type.m"
                  break;
#line 694 "add_type.m"
                case (MR_Integer) 3:
#line 694 "add_type.m"
#line 694 "add_type.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)))) {
#line 694 "add_type.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 694 "add_type.m"
                    case (MR_Integer) 0:
#line 705 "add_type.m"
                      {
#line 705 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__CSharpForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 1)));
#line 705 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_47_47;
#line 705 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_66;

#line 706 "add_type.m"
                        {
#line 706 "add_type.m"
                          hlds__make_hlds__add_type__Data_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__CSharpForeignType_37));
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 706 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 706 "add_type.m"
                        }
#line 708 "add_type.m"
                        {
#line 708 "add_type.m"
                          hlds__make_hlds__add_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 708 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_66));
#line 708 "add_type.m"
                        }
#line 708 "add_type.m"
                        {
#line 708 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 708 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_47_47));
#line 708 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 708 "add_type.m"
                        }
#line 705 "add_type.m"
                      }
#line 694 "add_type.m"
                      break;
#line 694 "add_type.m"
                    case (MR_Integer) 1:
#line 710 "add_type.m"
                      {
#line 710 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__V_43_43;
#line 710 "add_type.m"
                        MR_Word hlds__make_hlds__add_type__Data_67;

#line 711 "add_type.m"
                        {
#line 711 "add_type.m"
                          hlds__make_hlds__add_type__Data_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 0) = NULL;
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 711 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 711 "add_type.m"
                        }
#line 713 "add_type.m"
                        {
#line 713 "add_type.m"
                          hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 713 "add_type.m"
                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_67));
#line 713 "add_type.m"
                        }
#line 713 "add_type.m"
                        {
#line 713 "add_type.m"
                          hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 713 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "add_type.m"
                          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 713 "add_type.m"
                        }
#line 710 "add_type.m"
                      }
#line 694 "add_type.m"
                      break;
#line 694 "add_type.m"
                  }
#line 694 "add_type.m"
                  break;
#line 694 "add_type.m"
              }
#line 688 "add_type.m"
              *hlds__make_hlds__add_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_32);
#line 688 "add_type.m"
            }
#line 663 "add_type.m"
            break;
#line 663 "add_type.m"
        }
#line 663 "add_type.m"
        break;
#line 663 "add_type.m"
    }
#line 663 "add_type.m"
  }
#line 659 "add_type.m"
}

#line 534 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 534 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 534 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 534 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6)
#line 534 "add_type.m"
{
#line 537 "add_type.m"
  {
#line 537 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 0)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 1)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 2)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 3)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 4)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 0)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 1)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 2)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 3)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 4)));
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeIL_17;
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeC_18;
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJava_19;
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_20;
#line 537 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlang_21;

#line 552 "add_type.m"
    if ((hlds__make_hlds__add_type__MaybeILA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
      {
#line 552 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
        else
#line 554 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILB_12;
#line 552 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
      }
#line 552 "add_type.m"
    else
#line 553 "add_type.m"
      {
#line 553 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
          {
#line 553 "add_type.m"
            hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILA_7;
#line 553 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
          }
#line 553 "add_type.m"
      }
#line 537 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 537 "add_type.m"
      {
#line 552 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeCA_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
          {
#line 552 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
            else
#line 554 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCB_13;
#line 552 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
          }
#line 552 "add_type.m"
        else
#line 553 "add_type.m"
          {
#line 553 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
              {
#line 553 "add_type.m"
                hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCA_8;
#line 553 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
              }
#line 553 "add_type.m"
          }
#line 537 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 537 "add_type.m"
          {
#line 552 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeJavaA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
              {
#line 552 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
                else
#line 554 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaB_14;
#line 552 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
              }
#line 552 "add_type.m"
            else
#line 553 "add_type.m"
              {
#line 553 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
                  {
#line 553 "add_type.m"
                    hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaA_9;
#line 553 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
                  }
#line 553 "add_type.m"
              }
#line 537 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 537 "add_type.m"
              {
#line 552 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeCSharpA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                  {
#line 552 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
                    else
#line 554 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpB_15;
#line 552 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                  }
#line 552 "add_type.m"
                else
#line 553 "add_type.m"
                  {
#line 553 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
                      {
#line 553 "add_type.m"
                        hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpA_10;
#line 553 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
                      }
#line 553 "add_type.m"
                  }
#line 537 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 537 "add_type.m"
                  {
#line 552 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeErlangA_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                      {
#line 552 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
                        else
#line 554 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangB_16;
#line 552 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                      }
#line 552 "add_type.m"
                    else
#line 553 "add_type.m"
                      {
#line 553 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
                          {
#line 553 "add_type.m"
                            hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangA_11;
#line 553 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
                          }
#line 553 "add_type.m"
                      }
#line 537 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 537 "add_type.m"
                      {
#line 547 "add_type.m"
                        {
#line 547 "add_type.m"
                          MR_Word base;
#line 547 "add_type.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 547 "add_type.m"
                          *hlds__make_hlds__add_type__TypeBody_6 = base;
#line 547 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_17));
#line 547 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_18));
#line 547 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_19));
#line 547 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_20));
#line 547 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_21));
#line 547 "add_type.m"
                        }
#line 547 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 537 "add_type.m"
                      }
#line 537 "add_type.m"
                  }
#line 537 "add_type.m"
              }
#line 537 "add_type.m"
          }
#line 537 "add_type.m"
      }
#line 537 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 537 "add_type.m"
  }
#line 534 "add_type.m"
}

#line 503 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 503 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 503 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 503 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 503 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 503 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5)
#line 503 "add_type.m"
{
#line 508 "add_type.m"
  while (MR_TRUE)
#line 508 "add_type.m"
    {
#line 508 "add_type.m"
      /* tailcall optimized into a loop */
#line 508 "add_type.m"
      {
#line 508 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 508 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 528 "add_type.m"
          {
#line 528 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;

#line 528 "add_type.m"
            hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 528 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 528 "add_type.m"
              {
#line 528 "add_type.m"
                hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 529 "add_type.m"
                /* direct tailcall eliminated */
#line 529 "add_type.m"
                {
#line 529 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3 = hlds__make_hlds__add_type__HeadVar__4_4;
#line 529 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4 = hlds__make_hlds__add_type__HeadVar__3_3;

#line 529 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__4_4 = hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4;
#line 529 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__3_3 = hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3;
#line 529 "add_type.m"
                }
#line 529 "add_type.m"
                continue;
#line 528 "add_type.m"
              }
#line 528 "add_type.m"
          }
#line 508 "add_type.m"
        else
#line 508 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 508 "add_type.m"
          {
#line 508 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3), (MR_Integer) 0);

#line 508 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 508 "add_type.m"
              {
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody1_12;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody_13;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeILA_63;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCA_64;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaA_65;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangA_67;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeILB_68;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCB_69;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaB_70;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangB_72;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeIL_73;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeC_74;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJava_75;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharp_76;
#line 508 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlang_77;
#line 509 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 509 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 509 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 509 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 509 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 509 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 509 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 509 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 519 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_19_19;
#line 519 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_58_58;

#line 512 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 513 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_4[0];
#line 512 "add_type.m"
                else
#line 511 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBody1_11, (MR_Integer) 0)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeILA_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 0)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeCA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 1)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 2)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 3)));
#line 538 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangA_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 4)));
#line 540 "add_type.m"
                hlds__make_hlds__add_type__MaybeILB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 0)));
#line 540 "add_type.m"
                hlds__make_hlds__add_type__MaybeCB_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 1)));
#line 540 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaB_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 2)));
#line 540 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 3)));
#line 540 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 4)));
#line 552 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeILA_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                  {
#line 552 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                      hlds__make_hlds__add_type__MaybeIL_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
                    else
#line 554 "add_type.m"
                      hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILB_68;
#line 552 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                  }
#line 552 "add_type.m"
                else
#line 553 "add_type.m"
                  {
#line 553 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
                      {
#line 553 "add_type.m"
                        hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILA_63;
#line 553 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
                      }
#line 553 "add_type.m"
                  }
#line 508 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 508 "add_type.m"
                  {
#line 552 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCA_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                      {
#line 552 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                          hlds__make_hlds__add_type__MaybeC_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
                        else
#line 554 "add_type.m"
                          hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCB_69;
#line 552 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                      }
#line 552 "add_type.m"
                    else
#line 553 "add_type.m"
                      {
#line 553 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
                          {
#line 553 "add_type.m"
                            hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCA_64;
#line 553 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
                          }
#line 553 "add_type.m"
                      }
#line 508 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 508 "add_type.m"
                      {
#line 552 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeJavaA_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                          {
#line 552 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                              hlds__make_hlds__add_type__MaybeJava_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
                            else
#line 554 "add_type.m"
                              hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaB_70;
#line 552 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                          }
#line 552 "add_type.m"
                        else
#line 553 "add_type.m"
                          {
#line 553 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
                              {
#line 553 "add_type.m"
                                hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaA_65;
#line 553 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
                              }
#line 553 "add_type.m"
                          }
#line 508 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 508 "add_type.m"
                          {
#line 552 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeCSharpA_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                              {
#line 552 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeCSharp_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
                                else
#line 554 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 552 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                              }
#line 552 "add_type.m"
                            else
#line 553 "add_type.m"
                              {
#line 553 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
                                  {
#line 553 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 553 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
                                  }
#line 553 "add_type.m"
                              }
#line 508 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 508 "add_type.m"
                              {
#line 552 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeErlangA_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                                  {
#line 552 "add_type.m"
                                    if ((hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 552 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeErlang_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 552 "add_type.m"
                                    else
#line 554 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangB_72;
#line 552 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 552 "add_type.m"
                                  }
#line 552 "add_type.m"
                                else
#line 553 "add_type.m"
                                  {
#line 553 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 553 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 553 "add_type.m"
                                      {
#line 553 "add_type.m"
                                        hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangA_67;
#line 553 "add_type.m"
                                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 553 "add_type.m"
                                      }
#line 553 "add_type.m"
                                  }
#line 508 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 508 "add_type.m"
                                  {
#line 547 "add_type.m"
                                    {
#line 547 "add_type.m"
                                      hlds__make_hlds__add_type__ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 547 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_73));
#line 547 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_74));
#line 547 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_75));
#line 547 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_76));
#line 547 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_77));
#line 547 "add_type.m"
                                    }
#line 519 "add_type.m"
                                    hlds__make_hlds__add_type__V_19_19 = (MR_Integer) 1;
#line 519 "add_type.m"
                                    {
#line 519 "add_type.m"
                                      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_1, hlds__make_hlds__add_type__ForeignTypeBody_13, &hlds__make_hlds__add_type__V_58_58);
                                    }
#line 519 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_19_19 == hlds__make_hlds__add_type__V_58_58);
#line 519 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 520 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MakeOptInterface_2 == (MR_Integer) 0);
#line 523 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 522 "add_type.m"
                                      *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_13);
#line 523 "add_type.m"
                                    else
#line 524 "add_type.m"
                                      {
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_20_20;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_49_49;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_50_50;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_53_53;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_54_54;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_55_55;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_56_56;
#line 524 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_57_57;

#line 524 "add_type.m"
                                        {
#line 524 "add_type.m"
                                          hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_13));
#line 524 "add_type.m"
                                        }
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 524 "add_type.m"
                                        hlds__make_hlds__add_type__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 524 "add_type.m"
                                        {
#line 524 "add_type.m"
                                          MR_Word base;
#line 524 "add_type.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 524 "add_type.m"
                                          *hlds__make_hlds__add_type__HeadVar__5_5 = base;
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_49_49));
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_50_50));
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__V_55_55 | ((hlds__make_hlds__add_type__V_56_56 << (MR_Integer) 1)))));
#line 524 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 524 "add_type.m"
                                        }
#line 524 "add_type.m"
                                      }
#line 523 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 508 "add_type.m"
                                  }
#line 508 "add_type.m"
                              }
#line 508 "add_type.m"
                          }
#line 508 "add_type.m"
                      }
#line 508 "add_type.m"
                  }
#line 508 "add_type.m"
              }
#line 508 "add_type.m"
            else
#line 508 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 531 "add_type.m"
              {
#line 531 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body1_39 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 531 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body_40;

#line 532 "add_type.m"
                {
#line 532 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(hlds__make_hlds__add_type__V_59_59, hlds__make_hlds__add_type__Body1_39, &hlds__make_hlds__add_type__Body_40);
                }
#line 531 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 531 "add_type.m"
                  {
#line 531 "add_type.m"
                    *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_40);
#line 531 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 531 "add_type.m"
                  }
#line 531 "add_type.m"
              }
#line 508 "add_type.m"
            else
#line 508 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 508 "add_type.m"
          }
#line 508 "add_type.m"
        else
#line 508 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 508 "add_type.m"
        return hlds__make_hlds__add_type__succeeded;
#line 508 "add_type.m"
      }
#line 508 "add_type.m"
      break;
#line 508 "add_type.m"
    }
#line 503 "add_type.m"
}

#line 460 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_13,
#line 460 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
#line 460 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
#line 460 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
#line 460 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29)
#line 460 "add_type.m"
{
#line 466 "add_type.m"
  {
#line 466 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 466 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 0)));
#line 466 "add_type.m"
    MR_Integer hlds__make_hlds__add_type__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 1)));
#line 466 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_19;
#line 466 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Target_20;
#line 470 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_69_69;

#line 468 "add_type.m"
    {
#line 468 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_type__Globals_19);
    }
#line 469 "add_type.m"
    {
#line 469 "add_type.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_19, &hlds__make_hlds__add_type__Target_20);
    }
#line 470 "add_type.m"
    {
#line 470 "add_type.m"
      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_20, hlds__make_hlds__add_type__ForeignTypeBody_11, &hlds__make_hlds__add_type__V_69_69);
    }
#line 470 "add_type.m"
    hlds__make_hlds__add_type__succeeded = ((MR_Integer) 1 == hlds__make_hlds__add_type__V_69_69);
#line 472 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 471 "add_type.m"
      {
#line 471 "add_type.m"
        *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 0;
#line 471 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
#line 471 "add_type.m"
      }
#line 472 "add_type.m"
    else
#line 477 "add_type.m"
      {
#line 472 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__PrevErrors_12 == (MR_Integer) 1);
#line 477 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 476 "add_type.m"
          {
#line 476 "add_type.m"
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
#line 476 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
#line 476 "add_type.m"
          }
#line 477 "add_type.m"
        else
#line 483 "add_type.m"
          {
#line 483 "add_type.m"
            MR_String hlds__make_hlds__add_type__LangStr_21 = ((&hlds__make_hlds__add_type_vector_common_5[0 + hlds__make_hlds__add_type__Target_20]))->hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MainPieces_22;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Msg_24;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Spec_25;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_33_33;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_35_35;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_38_38;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_41_41;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_42_42;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_43_43;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_58_58;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59;
#line 483 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_66_66;

#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__LangStr_21));
#line 484 "add_type.m"
            }
#line 486 "add_type.m"
            {
#line 486 "add_type.m"
              hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 486 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_17));
#line 486 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_18));
#line 486 "add_type.m"
            }
#line 486 "add_type.m"
            {
#line 486 "add_type.m"
              hlds__make_hlds__add_type__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 486 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 486 "add_type.m"
            }
#line 486 "add_type.m"
            {
#line 486 "add_type.m"
              hlds__make_hlds__add_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 486 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_42_42));
#line 486 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[52])));
#line 486 "add_type.m"
            }
#line 485 "add_type.m"
            {
#line 485 "add_type.m"
              hlds__make_hlds__add_type__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_41_41));
#line 485 "add_type.m"
            }
#line 485 "add_type.m"
            {
#line 485 "add_type.m"
              hlds__make_hlds__add_type__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[70])));
#line 485 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_38_38));
#line 485 "add_type.m"
            }
#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              hlds__make_hlds__add_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_34_34));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_35_35));
#line 484 "add_type.m"
            }
#line 484 "add_type.m"
            {
#line 484 "add_type.m"
              hlds__make_hlds__add_type__MainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[69])));
#line 484 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_33_33));
#line 484 "add_type.m"
            }
#line 490 "add_type.m"
            {
#line 490 "add_type.m"
              hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__MainPieces_22));
#line 490 "add_type.m"
            }
#line 490 "add_type.m"
            {
#line 490 "add_type.m"
              hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[73])));
#line 490 "add_type.m"
            }
#line 489 "add_type.m"
            {
#line 489 "add_type.m"
              hlds__make_hlds__add_type__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 489 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_13));
#line 489 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_58_58));
#line 489 "add_type.m"
            }
#line 492 "add_type.m"
            {
#line 492 "add_type.m"
              hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_24));
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 492 "add_type.m"
            }
#line 491 "add_type.m"
            {
#line 491 "add_type.m"
              hlds__make_hlds__add_type__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 491 "add_type.m"
            }
#line 493 "add_type.m"
            {
#line 493 "add_type.m"
              MR_Word base;
#line 493 "add_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = base;
#line 493 "add_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_25));
#line 493 "add_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28));
#line 493 "add_type.m"
            }
#line 494 "add_type.m"
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
#line 483 "add_type.m"
          }
#line 477 "add_type.m"
      }
#line 466 "add_type.m"
    *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26;
#line 466 "add_type.m"
  }
#line 460 "add_type.m"
}

#line 362 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 362 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 362 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4)
#line 362 "add_type.m"
{
#line 370 "add_type.m"
  {
#line 370 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));

#line 370 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 369 "add_type.m"
      {
#line 369 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 369 "add_type.m"
        {
#line 369 "add_type.m"
          hlds__make_hlds__add_type__V_5_5 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
        }
#line 369 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_5_5 == (MR_Integer) 0);
#line 369 "add_type.m"
      }
#line 370 "add_type.m"
    else
#line 372 "add_type.m"
      {
#line 370 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 372 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 371 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__NewDefnStatus_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 372 "add_type.m"
        else
#line 373 "add_type.m"
          {
#line 373 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_6_6;
#line 373 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_7_7;

#line 373 "add_type.m"
            {
#line 373 "add_type.m"
              hlds__make_hlds__add_type__V_6_6 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus_3);
            }
#line 373 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_6_6 == (MR_Integer) 0);
#line 373 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 373 "add_type.m"
              {
#line 374 "add_type.m"
                {
#line 374 "add_type.m"
                  hlds__make_hlds__add_type__V_7_7 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
                }
#line 374 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_7_7 == (MR_Integer) 0);
#line 373 "add_type.m"
              }
#line 373 "add_type.m"
          }
#line 372 "add_type.m"
      }
#line 370 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 370 "add_type.m"
  }
#line 362 "add_type.m"
}

#line 333 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 333 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 333 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4)
#line 333 "add_type.m"
{
#line 336 "add_type.m"
  {
#line 336 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 336 "add_type.m"
    MR_Word hlds__make_hlds__add_type__OldIsSolverType_5;

#line 344 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 345 "add_type.m"
      {
#line 345 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 1)));

#line 349 "add_type.m"
#line 349 "add_type.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_9)) {
#line 349 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 349 "add_type.m"
          case (MR_Integer) 0:
#line 349 "add_type.m"
#line 349 "add_type.m"
            switch (MR_unmkbody(hlds__make_hlds__add_type__Details_9)) {
#line 349 "add_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 349 "add_type.m"
              case (MR_Integer) 0:
#line 348 "add_type.m"
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 349 "add_type.m"
                break;
#line 349 "add_type.m"
              case (MR_Integer) 1:
#line 354 "add_type.m"
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 349 "add_type.m"
                break;
#line 349 "add_type.m"
            }
#line 349 "add_type.m"
            break;
#line 349 "add_type.m"
          case (MR_Integer) 1:
#line 351 "add_type.m"
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 349 "add_type.m"
            break;
#line 349 "add_type.m"
        }
#line 345 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 345 "add_type.m"
      }
#line 344 "add_type.m"
    else
#line 344 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 344 "add_type.m"
      {
#line 344 "add_type.m"
        hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 344 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 344 "add_type.m"
      }
#line 344 "add_type.m"
    else
#line 344 "add_type.m"
      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 336 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 344 "add_type.m"
      {
#line 344 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 345 "add_type.m"
          {
#line 345 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 1)));

#line 349 "add_type.m"
#line 349 "add_type.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_14)) {
#line 349 "add_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 349 "add_type.m"
              case (MR_Integer) 0:
#line 349 "add_type.m"
#line 349 "add_type.m"
                switch (MR_unmkbody(hlds__make_hlds__add_type__Details_14)) {
#line 349 "add_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 349 "add_type.m"
                  case (MR_Integer) 0:
#line 348 "add_type.m"
                    {
#line 339 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 339 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 348 "add_type.m"
                    }
#line 349 "add_type.m"
                    break;
#line 349 "add_type.m"
                  case (MR_Integer) 1:
#line 354 "add_type.m"
                    {
#line 339 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 339 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 354 "add_type.m"
                    }
#line 349 "add_type.m"
                    break;
#line 349 "add_type.m"
                }
#line 349 "add_type.m"
                break;
#line 349 "add_type.m"
              case (MR_Integer) 1:
#line 351 "add_type.m"
                {
#line 339 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 339 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 351 "add_type.m"
                }
#line 349 "add_type.m"
                break;
#line 349 "add_type.m"
            }
#line 345 "add_type.m"
          }
#line 344 "add_type.m"
        else
#line 344 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 344 "add_type.m"
          {
#line 339 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 339 "add_type.m"
            hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 344 "add_type.m"
          }
#line 344 "add_type.m"
        else
#line 344 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 344 "add_type.m"
      }
#line 336 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 336 "add_type.m"
  }
#line 333 "add_type.m"
}

#line 326 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 326 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 326 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 326 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 326 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4)
#line 326 "add_type.m"
{
#line 329 "add_type.m"
  {
#line 329 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 329 "add_type.m"
    *hlds__make_hlds__add_type__OldBody_2 = hlds__make_hlds__add_type__OldBody_5;
#line 329 "add_type.m"
    *hlds__make_hlds__add_type__Body_4 = hlds__make_hlds__add_type__Body_6;
#line 329 "add_type.m"
  }
#line 326 "add_type.m"
}

#line 304 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void)
#line 304 "add_type.m"
{
#line 306 "add_type.m"
  {
#line 306 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 306 "add_type.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50]);
#line 306 "add_type.m"
  }
#line 304 "add_type.m"
}

#line 50 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__combine_status_3_p_0(
#line 50 "add_type.m"
  MR_Word hlds__make_hlds__add_type__StatusA_4,
#line 50 "add_type.m"
  MR_Word hlds__make_hlds__add_type__StatusB_5,
#line 50 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Status_6)
#line 50 "add_type.m"
{
#line 568 "add_type.m"
  {
#line 568 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 568 "add_type.m"
    MR_Word hlds__make_hlds__add_type__CombinedStatus_7;

#line 575 "add_type.m"
#line 575 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusA_4)) {
#line 575 "add_type.m"
      default:
#line 575 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 575 "add_type.m"
        break;
#line 575 "add_type.m"
      case (MR_Integer) 0:
#line 575 "add_type.m"
#line 575 "add_type.m"
        switch (MR_unmkbody(hlds__make_hlds__add_type__StatusA_4)) {
#line 575 "add_type.m"
          default:
#line 575 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 575 "add_type.m"
            break;
#line 575 "add_type.m"
          case (MR_Integer) 0:
#line 598 "add_type.m"
            {
#line 598 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 598 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 598 "add_type.m"
            }
#line 575 "add_type.m"
            break;
#line 575 "add_type.m"
          case (MR_Integer) 1:
#line 655 "add_type.m"
            {
#line 653 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Section_30;

#line 653 "add_type.m"
              hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 653 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 653 "add_type.m"
                {
#line 653 "add_type.m"
                  hlds__make_hlds__add_type__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusB_5, (MR_Integer) 0)));
#line 654 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 653 "add_type.m"
                }
#line 653 "add_type.m"
              else
#line 656 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 655 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 655 "add_type.m"
            }
#line 575 "add_type.m"
            break;
#line 575 "add_type.m"
          case (MR_Integer) 3:
#line 590 "add_type.m"
            {
#line 590 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 590 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 590 "add_type.m"
            }
#line 575 "add_type.m"
            break;
#line 575 "add_type.m"
          case (MR_Integer) 5:
#line 645 "add_type.m"
            {
#line 643 "add_type.m"
              hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 645 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 644 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 645 "add_type.m"
              else
#line 646 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 645 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 645 "add_type.m"
            }
#line 575 "add_type.m"
            break;
#line 575 "add_type.m"
          case (MR_Integer) 7:
#line 591 "add_type.m"
            {
#line 591 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Status3_20;

#line 630 "add_type.m"
#line 630 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 630 "add_type.m"
                default:
#line 630 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 630 "add_type.m"
                  break;
#line 630 "add_type.m"
                case (MR_Integer) 0:
#line 630 "add_type.m"
#line 630 "add_type.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 630 "add_type.m"
                    default:
#line 630 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 630 "add_type.m"
                      break;
#line 630 "add_type.m"
                    case (MR_Integer) 0:
#line 635 "add_type.m"
                      {
#line 635 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 635 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 635 "add_type.m"
                      }
#line 630 "add_type.m"
                      break;
#line 630 "add_type.m"
                    case (MR_Integer) 1:
#line 636 "add_type.m"
                      {
#line 636 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 636 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 636 "add_type.m"
                      }
#line 630 "add_type.m"
                      break;
#line 630 "add_type.m"
                    case (MR_Integer) 3:
#line 634 "add_type.m"
                      {
#line 634 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 634 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 634 "add_type.m"
                      }
#line 630 "add_type.m"
                      break;
#line 630 "add_type.m"
                    case (MR_Integer) 5:
#line 637 "add_type.m"
                      {
#line 637 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 637 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 637 "add_type.m"
                      }
#line 630 "add_type.m"
                      break;
#line 630 "add_type.m"
                    case (MR_Integer) 7:
#line 631 "add_type.m"
                      {
#line 631 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 631 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 631 "add_type.m"
                      }
#line 630 "add_type.m"
                      break;
#line 630 "add_type.m"
                    case (MR_Integer) 8:
#line 633 "add_type.m"
                      {
#line 633 "add_type.m"
                        hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 633 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 633 "add_type.m"
                      }
#line 630 "add_type.m"
                      break;
#line 630 "add_type.m"
                  }
#line 630 "add_type.m"
                  break;
#line 630 "add_type.m"
                case (MR_Integer) 2:
#line 632 "add_type.m"
                  {
#line 632 "add_type.m"
                    hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 632 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 632 "add_type.m"
                  }
#line 630 "add_type.m"
                  break;
#line 630 "add_type.m"
              }
#line 591 "add_type.m"
              if (hlds__make_hlds__add_type__succeeded)
#line 591 "add_type.m"
                {
#line 593 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 595 "add_type.m"
                  if (hlds__make_hlds__add_type__succeeded)
#line 594 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 595 "add_type.m"
                  else
#line 596 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__Status3_20;
#line 595 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 591 "add_type.m"
                }
#line 591 "add_type.m"
            }
#line 575 "add_type.m"
            break;
#line 575 "add_type.m"
          case (MR_Integer) 8:
#line 630 "add_type.m"
#line 630 "add_type.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 630 "add_type.m"
              default:
#line 630 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 630 "add_type.m"
                break;
#line 630 "add_type.m"
              case (MR_Integer) 0:
#line 630 "add_type.m"
#line 630 "add_type.m"
                switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 630 "add_type.m"
                  default:
#line 630 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 630 "add_type.m"
                    break;
#line 630 "add_type.m"
                  case (MR_Integer) 0:
#line 635 "add_type.m"
                    {
#line 635 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 635 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 635 "add_type.m"
                    }
#line 630 "add_type.m"
                    break;
#line 630 "add_type.m"
                  case (MR_Integer) 1:
#line 636 "add_type.m"
                    {
#line 636 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 636 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 636 "add_type.m"
                    }
#line 630 "add_type.m"
                    break;
#line 630 "add_type.m"
                  case (MR_Integer) 3:
#line 634 "add_type.m"
                    {
#line 634 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 634 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 634 "add_type.m"
                    }
#line 630 "add_type.m"
                    break;
#line 630 "add_type.m"
                  case (MR_Integer) 5:
#line 637 "add_type.m"
                    {
#line 637 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 637 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 637 "add_type.m"
                    }
#line 630 "add_type.m"
                    break;
#line 630 "add_type.m"
                  case (MR_Integer) 7:
#line 631 "add_type.m"
                    {
#line 631 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 631 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 631 "add_type.m"
                    }
#line 630 "add_type.m"
                    break;
#line 630 "add_type.m"
                  case (MR_Integer) 8:
#line 633 "add_type.m"
                    {
#line 633 "add_type.m"
                      hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 633 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 633 "add_type.m"
                    }
#line 630 "add_type.m"
                    break;
#line 630 "add_type.m"
                }
#line 630 "add_type.m"
                break;
#line 630 "add_type.m"
              case (MR_Integer) 2:
#line 632 "add_type.m"
                {
#line 632 "add_type.m"
                  hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 632 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 632 "add_type.m"
                }
#line 630 "add_type.m"
                break;
#line 630 "add_type.m"
            }
#line 575 "add_type.m"
            break;
#line 575 "add_type.m"
        }
#line 575 "add_type.m"
        break;
#line 575 "add_type.m"
      case (MR_Integer) 2:
#line 575 "add_type.m"
        {
#line 575 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusA_4, (MR_Integer) 0)));

#line 583 "add_type.m"
#line 583 "add_type.m"
          switch (hlds__make_hlds__add_type__ImportLocn_11) {
#line 583 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 583 "add_type.m"
            case (MR_Integer) 2:
#line 583 "add_type.m"
            case (MR_Integer) 0:
#line 583 "add_type.m"
            case (MR_Integer) 1:
#line 609 "add_type.m"
#line 609 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) {
#line 609 "add_type.m"
                default:
#line 609 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 609 "add_type.m"
                  break;
#line 609 "add_type.m"
                case (MR_Integer) 0:
#line 609 "add_type.m"
#line 609 "add_type.m"
                  switch (MR_unmkbody(hlds__make_hlds__add_type__StatusB_5)) {
#line 609 "add_type.m"
                    default:
#line 609 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 609 "add_type.m"
                      break;
#line 609 "add_type.m"
                    case (MR_Integer) 0:
#line 619 "add_type.m"
                      {
#line 619 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 619 "add_type.m"
                      }
#line 609 "add_type.m"
                      break;
#line 609 "add_type.m"
                    case (MR_Integer) 1:
#line 621 "add_type.m"
                      {
#line 622 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[2]);
#line 621 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 621 "add_type.m"
                      }
#line 609 "add_type.m"
                      break;
#line 609 "add_type.m"
                    case (MR_Integer) 3:
#line 616 "add_type.m"
                      {
#line 616 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 616 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 616 "add_type.m"
                      }
#line 609 "add_type.m"
                      break;
#line 609 "add_type.m"
                    case (MR_Integer) 5:
#line 625 "add_type.m"
                      {
#line 625 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 625 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 625 "add_type.m"
                      }
#line 609 "add_type.m"
                      break;
#line 609 "add_type.m"
                    case (MR_Integer) 8:
#line 612 "add_type.m"
                      {
#line 613 "add_type.m"
                        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[3]);
#line 612 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 612 "add_type.m"
                      }
#line 609 "add_type.m"
                      break;
#line 609 "add_type.m"
                  }
#line 609 "add_type.m"
                  break;
#line 609 "add_type.m"
                case (MR_Integer) 2:
#line 610 "add_type.m"
                  {
#line 610 "add_type.m"
                    hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 610 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 610 "add_type.m"
                  }
#line 609 "add_type.m"
                  break;
#line 609 "add_type.m"
              }
#line 583 "add_type.m"
              break;
#line 583 "add_type.m"
            case (MR_Integer) 3:
#line 584 "add_type.m"
              {
#line 586 "add_type.m"
                hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[4]);
#line 584 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 584 "add_type.m"
              }
#line 583 "add_type.m"
              break;
#line 583 "add_type.m"
          }
#line 575 "add_type.m"
        }
#line 575 "add_type.m"
        break;
#line 575 "add_type.m"
    }
#line 568 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 567 "add_type.m"
      *hlds__make_hlds__add_type__Status_6 = hlds__make_hlds__add_type__CombinedStatus_7;
#line 568 "add_type.m"
    else
#line 569 "add_type.m"
      {
#line 569 "add_type.m"
        {
#line 569 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 569 "add_type.m"
          return;
        }
#line 569 "add_type.m"
      }
#line 568 "add_type.m"
  }
#line 50 "add_type.m"
}

#line 48 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__make_status_abstract_2_p_0(
#line 48 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Status_3,
#line 48 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__AbstractStatus_4)
#line 48 "add_type.m"
{
#line 559 "add_type.m"
  {
#line 559 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));

#line 559 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
      *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 559 "add_type.m"
    else
#line 561 "add_type.m"
      {
#line 559 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 559 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 559 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 559 "add_type.m"
          {
#line 559 "add_type.m"
            hlds__make_hlds__add_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Status_3, (MR_Integer) 0)));
#line 560 "add_type.m"
            *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 559 "add_type.m"
          }
#line 559 "add_type.m"
        else
#line 562 "add_type.m"
          *hlds__make_hlds__add_type__AbstractStatus_4 = hlds__make_hlds__add_type__Status_3;
#line 561 "add_type.m"
      }
#line 559 "add_type.m"
  }
#line 48 "add_type.m"
}

#line 43 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__process_type_defn_8_p_0(
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_10,
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59,
#line 43 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60,
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61,
#line 43 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62,
#line 43 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63,
#line 43 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64)
#line 43 "add_type.m"
{
#line 378 "add_type.m"
  {
#line 378 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Context_14;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__TVarSet_15;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Args_16;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__KindMap_17;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Body_18;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Status_19;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NeedQual_20;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_21;
#line 378 "add_type.m"
    MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;

#line 379 "add_type.m"
    {
#line 379 "add_type.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Context_14);
    }
#line 380 "add_type.m"
    {
#line 380 "add_type.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__TVarSet_15);
    }
#line 381 "add_type.m"
    {
#line 381 "add_type.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Args_16);
    }
#line 382 "add_type.m"
    {
#line 382 "add_type.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__KindMap_17);
    }
#line 383 "add_type.m"
    {
#line 383 "add_type.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Body_18);
    }
#line 384 "add_type.m"
    {
#line 384 "add_type.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Status_19);
    }
#line 385 "add_type.m"
    {
#line 385 "add_type.m"
      hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__NeedQual_20);
    }
#line 386 "add_type.m"
    {
#line 386 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Globals_21);
    }
#line 427 "add_type.m"
#line 427 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) {
#line 427 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 427 "add_type.m"
      case (MR_Integer) 0:
#line 428 "add_type.m"
        {
#line 428 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignTypeBody_50 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__Body_18), (MR_Integer) 0);
#line 428 "add_type.m"
          MR_Word hlds__make_hlds__add_type__PrevErrors_51;
#line 428 "add_type.m"
          MR_Word hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52;

#line 429 "add_type.m"
          {
#line 429 "add_type.m"
            hlds__hlds_data__get_type_defn_prev_errors_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__PrevErrors_51);
          }
#line 430 "add_type.m"
          {
#line 430 "add_type.m"
            hlds__make_hlds__add_type__check_foreign_type_9_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ForeignTypeBody_50, hlds__make_hlds__add_type__PrevErrors_51, hlds__make_hlds__add_type__Context_14, &hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64);
          }
#line 435 "add_type.m"
#line 435 "add_type.m"
          switch (hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52) {
#line 435 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 435 "add_type.m"
            case (MR_Integer) 0:
#line 436 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 435 "add_type.m"
              break;
#line 435 "add_type.m"
            case (MR_Integer) 1:
#line 434 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
#line 435 "add_type.m"
              break;
#line 435 "add_type.m"
          }
#line 428 "add_type.m"
        }
#line 427 "add_type.m"
        break;
#line 427 "add_type.m"
      case (MR_Integer) 1:
#line 389 "add_type.m"
        {
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ConsList_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)));
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__UserEqCmp_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 4)));
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedTag_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Ctors0_31;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__PQInfo_32;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorFields0_33;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__TypeCtorSymName_34;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_37;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorFields_39;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Ctors_40;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorAddSpecs_41;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72;
#line 389 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 1)));
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 2)));
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 3)));
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type___DirectArgCtors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 5)));
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 388 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 7)));
#line 393 "add_type.m"
          MR_Integer hlds__make_hlds__add_type__V_35_35;
#line 424 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorName_44;
#line 424 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorArgType_45;
#line 417 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_46_46;

#line 390 "add_type.m"
          {
#line 390 "add_type.m"
            hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Ctors0_31);
          }
#line 391 "add_type.m"
          {
#line 391 "add_type.m"
            hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__PQInfo_32);
          }
#line 392 "add_type.m"
          {
#line 392 "add_type.m"
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__CtorFields0_33);
          }
#line 393 "add_type.m"
          hlds__make_hlds__add_type__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 393 "add_type.m"
          hlds__make_hlds__add_type__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 397 "add_type.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 398 "add_type.m"
            {
#line 398 "add_type.m"
              MR_String hlds__make_hlds__add_type__V_38_38;

#line 398 "add_type.m"
              hlds__make_hlds__add_type__TypeCtorModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 0)));
#line 398 "add_type.m"
              hlds__make_hlds__add_type__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 1)));
#line 398 "add_type.m"
            }
#line 397 "add_type.m"
          else
#line 395 "add_type.m"
            {
#line 396 "add_type.m"
              {
#line 396 "add_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.process_type_defn\'/8", (MR_String) "unqualified TypeCtorSymName");
#line 396 "add_type.m"
                return;
              }
#line 395 "add_type.m"
            }
#line 400 "add_type.m"
          {
#line 400 "add_type.m"
            hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__TypeCtorModuleName_37, hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Args_16, hlds__make_hlds__add_type__KindMap_17, hlds__make_hlds__add_type__NeedQual_20, hlds__make_hlds__add_type__PQInfo_32, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__CtorFields0_33, &hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__Ctors0_31, &hlds__make_hlds__add_type__Ctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_type__CtorAddSpecs_41);
          }
#line 403 "add_type.m"
          {
#line 403 "add_type.m"
            hlds__hlds_module__module_info_set_cons_table_3_p_0(hlds__make_hlds__add_type__Ctors_40, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72);
          }
#line 404 "add_type.m"
          {
#line 404 "add_type.m"
            hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73);
          }
#line 408 "add_type.m"
          if ((hlds__make_hlds__add_type__CtorAddSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "add_type.m"
            {
#line 407 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 407 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 407 "add_type.m"
            }
#line 408 "add_type.m"
          else
#line 409 "add_type.m"
            {
#line 410 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
#line 411 "add_type.m"
              {
#line 411 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_type__CtorAddSpecs_41, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63);
              }
#line 409 "add_type.m"
            }
#line 417 "add_type.m"
          {
#line 417 "add_type.m"
            hlds__make_hlds__add_type__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ReservedTag_28, hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__UserEqCmp_26, &hlds__make_hlds__add_type__CtorName_44, &hlds__make_hlds__add_type__CtorArgType_45, &hlds__make_hlds__add_type__V_46_46);
          }
#line 424 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 420 "add_type.m"
            {
#line 420 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagType_47;
#line 420 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagTypes0_48;
#line 420 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagTypes_49;

#line 420 "add_type.m"
              {
#line 420 "add_type.m"
                hlds__make_hlds__add_type__NoTagType_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 420 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Args_16));
#line 420 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorName_44));
#line 420 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 2) = ((MR_Box) (hlds__make_hlds__add_type__CtorArgType_45));
#line 420 "add_type.m"
              }
#line 421 "add_type.m"
              {
#line 421 "add_type.m"
                hlds__hlds_module__module_info_get_no_tag_types_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__NoTagTypes0_48);
              }
#line 422 "add_type.m"
              {
#line 422 "add_type.m"
                mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_9)), ((MR_Box) (hlds__make_hlds__add_type__NoTagType_47)), hlds__make_hlds__add_type__NoTagTypes0_48, &hlds__make_hlds__add_type__NoTagTypes_49);
              }
#line 423 "add_type.m"
              {
#line 423 "add_type.m"
                hlds__hlds_module__module_info_set_no_tag_types_3_p_0(hlds__make_hlds__add_type__NoTagTypes_49, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76);
              }
#line 420 "add_type.m"
            }
#line 424 "add_type.m"
          else
#line 424 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 389 "add_type.m"
        }
#line 427 "add_type.m"
        break;
#line 427 "add_type.m"
      case (MR_Integer) 2:
#line 441 "add_type.m"
        {
#line 441 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 441 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
#line 441 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 441 "add_type.m"
        }
#line 427 "add_type.m"
        break;
#line 427 "add_type.m"
      case (MR_Integer) 3:
#line 427 "add_type.m"
#line 427 "add_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)))) {
#line 427 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 427 "add_type.m"
          case (MR_Integer) 0:
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
#line 427 "add_type.m"
            break;
#line 427 "add_type.m"
          case (MR_Integer) 1:
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
#line 427 "add_type.m"
            break;
#line 427 "add_type.m"
        }
#line 427 "add_type.m"
        break;
#line 427 "add_type.m"
    }
#line 446 "add_type.m"
#line 446 "add_type.m"
    switch (*hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60) {
#line 446 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 446 "add_type.m"
      case (MR_Integer) 0:
#line 447 "add_type.m"
        {
#line 447 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ArgTypes_57;
#line 447 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Type_58;
#line 447 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_77_77;

#line 451 "add_type.m"
          {
#line 451 "add_type.m"
            hlds__make_hlds__add_type__V_77_77 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
          }
#line 451 "add_type.m"
          {
#line 451 "add_type.m"
            parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_type__V_77_77, hlds__make_hlds__add_type__Args_16, &hlds__make_hlds__add_type__ArgTypes_57);
          }
#line 452 "add_type.m"
          {
#line 452 "add_type.m"
            parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ArgTypes_57, &hlds__make_hlds__add_type__Type_58);
          }
#line 453 "add_type.m"
          {
#line 453 "add_type.m"
            hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Type_58, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__Body_18, hlds__make_hlds__add_type__Context_14, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62);
#line 453 "add_type.m"
            return;
          }
#line 447 "add_type.m"
        }
#line 446 "add_type.m"
        break;
#line 446 "add_type.m"
      case (MR_Integer) 1:
#line 445 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;
#line 446 "add_type.m"
        break;
#line 446 "add_type.m"
    }
#line 378 "add_type.m"
  }
#line 43 "add_type.m"
}

#line 284 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(
#line 284 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 284 "add_type.m"
{
#line 284 "add_type.m"
  {
#line 284 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 284 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0, 1);
#line 284 "add_type.m"
  }
#line 284 "add_type.m"
}

#line 286 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3(
#line 286 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 286 "add_type.m"
{
#line 286 "add_type.m"
  {
#line 286 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 286 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91);
#line 286 "add_type.m"
    {
#line 286 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 286 "add_type.m"
      return;
    }
#line 286 "add_type.m"
  }
#line 286 "add_type.m"
}

#line 287 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(
#line 287 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 287 "add_type.m"
{
#line 287 "add_type.m"
  {
#line 287 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 287 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1, 1);
#line 287 "add_type.m"
  }
#line 287 "add_type.m"
}

#line 287 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5(
#line 287 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 287 "add_type.m"
{
#line 287 "add_type.m"
  {
#line 287 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 5652 "hlds.make_hlds.add_type.c"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 287 "add_type.m"
    {
#line 287 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_303_303, ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_91)), ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_301_301)));
    }
#line 287 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 287 "add_type.m"
      {
#line 287 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(hlds__make_hlds__add_type__env_ptr);
#line 287 "add_type.m"
        return;
      }
#line 287 "add_type.m"
  }
#line 287 "add_type.m"
}

#line 287 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(
#line 287 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 287 "add_type.m"
{
#line 287 "add_type.m"
  {
#line 287 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 287 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1) == 0)
#line 287 "add_type.m"
      {
#line 287 "add_type.m"
        {
#line 287 "add_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_301_301, hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5, hlds__make_hlds__add_type__env_ptr);
        }
#line 287 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 287 "add_type.m"
      }
#line 287 "add_type.m"
    else
#line 287 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 287 "add_type.m"
  }
#line 287 "add_type.m"
}

#line 284 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(
#line 284 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 284 "add_type.m"
{
#line 284 "add_type.m"
  {
#line 284 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 287 "add_type.m"
    {
#line 287 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(hlds__make_hlds__add_type__env_ptr);
    }
#line 287 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded);
#line 287 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 287 "add_type.m"
      {
#line 287 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 287 "add_type.m"
        return;
      }
#line 284 "add_type.m"
  }
#line 284 "add_type.m"
}

#line 284 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(
#line 284 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 284 "add_type.m"
{
#line 284 "add_type.m"
  {
#line 284 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 284 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0) == 0)
#line 284 "add_type.m"
      {
#line 285 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 284 "add_type.m"
        if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 284 "add_type.m"
          {
#line 284 "add_type.m"
            (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 2)));
#line 284 "add_type.m"
            if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 284 "add_type.m"
              {
#line 284 "add_type.m"
                (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_90 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 0)));
#line 286 "add_type.m"
                {
#line 286 "add_type.m"
                  mercury__list__member_2_p_1((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_91, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3, hlds__make_hlds__add_type__env_ptr);
                }
#line 284 "add_type.m"
              }
#line 284 "add_type.m"
          }
#line 284 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 284 "add_type.m"
      }
#line 284 "add_type.m"
    else
#line 284 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 284 "add_type.m"
  }
#line 284 "add_type.m"
}

#line 36 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0(
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_11,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Name_12,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Args_13,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_14,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_15,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__6_6,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96,
#line 36 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_97,
#line 36 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98)
#line 36 "add_type.m"
{
#line 36 "add_type.m"
  {
#line 36 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 36 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13 = hlds__make_hlds__add_type__Args_13;
#line 82 "add_type.m"
    {
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Status0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__6_6, (MR_Integer) 0)));
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__NeedQual_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__6_6, (MR_Integer) 1)));
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Globals_20;
#line 82 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_21;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtor_22;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Body0_23;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Status1_34;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeTable0_44;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeOldDefn_54;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__KindMap_56;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeDefn1_57;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 82 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_298_298;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Ctors_35;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeUserUC_36;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constructor_38;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 109 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_103_103;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 109 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_300_300;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type___MaybeDirectArg_37;
#line 111 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_292_292;
#line 111 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_293_293;
#line 111 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_294_294;
#line 111 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_295_295;
#line 111 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_296_296;
#line 112 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_39_39;
#line 158 "add_type.m"
      MR_Word hlds__make_hlds__add_type__OldDefn0_45;
#line 171 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_58_58;

#line 83 "add_type.m"
      {
#line 83 "add_type.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__Globals_20);
      }
#line 5894 "hlds.make_hlds.add_type.c"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 84 "add_type.m"
      {
#line 84 "add_type.m"
        mercury__list__length_2_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, &hlds__make_hlds__add_type__Arity_21);
      }
#line 85 "add_type.m"
      {
#line 85 "add_type.m"
        hlds__make_hlds__add_type__TypeCtor_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 85 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_22, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 85 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 85 "add_type.m"
      }
#line 86 "add_type.m"
      {
#line 86 "add_type.m"
        hlds__make_hlds__add_type__convert_type_defn_4_p_0(hlds__make_hlds__add_type__TypeDefn_14, hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__Globals_20, &hlds__make_hlds__add_type__Body0_23);
      }
#line 90 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_23)) == (MR_mktag((MR_Integer) 1))))
#line 91 "add_type.m"
        {
#line 91 "add_type.m"
          MR_String hlds__make_hlds__add_type__V_99_99;

#line 92 "add_type.m"
          {
#line 92 "add_type.m"
            hlds__make_hlds__add_type__V_99_99 = mercury__term__context_file_1_f_0(hlds__make_hlds__add_type__Context_15);
          }
#line 92 "add_type.m"
          {
#line 92 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = mercury__string__suffix_2_p_0(hlds__make_hlds__add_type__V_99_99, (MR_String) ".int2");
          }
#line 91 "add_type.m"
        }
#line 90 "add_type.m"
      else
#line 90 "add_type.m"
      if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body0_23, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 89 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 90 "add_type.m"
      else
#line 90 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 101 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 100 "add_type.m"
        {
#line 100 "add_type.m"
          hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__add_type__Status0_16, &hlds__make_hlds__add_type__Status1_34);
        }
#line 101 "add_type.m"
      else
#line 102 "add_type.m"
        hlds__make_hlds__add_type__Status1_34 = hlds__make_hlds__add_type__Status0_16;
#line 109 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeDefn_14)) == (MR_mktag((MR_Integer) 0)));
#line 109 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 109 "add_type.m"
        {
#line 109 "add_type.m"
          hlds__make_hlds__add_type__Ctors_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 0)));
#line 109 "add_type.m"
          hlds__make_hlds__add_type__MaybeUserUC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 1)));
#line 109 "add_type.m"
          hlds__make_hlds__add_type___MaybeDirectArg_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 2)));
#line 110 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Ctors_35)) == (MR_mktag((MR_Integer) 1)));
#line 110 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 110 "add_type.m"
            {
#line 110 "add_type.m"
              hlds__make_hlds__add_type__Constructor_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_35, (MR_Integer) 0)));
#line 110 "add_type.m"
              hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_35, (MR_Integer) 1)));
#line 110 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_101_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 109 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 109 "add_type.m"
                {
#line 111 "add_type.m"
                  hlds__make_hlds__add_type__V_292_292 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 0)));
#line 111 "add_type.m"
                  hlds__make_hlds__add_type__V_293_293 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 1)));
#line 111 "add_type.m"
                  hlds__make_hlds__add_type__V_294_294 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 2)));
#line 111 "add_type.m"
                  hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 3)));
#line 111 "add_type.m"
                  hlds__make_hlds__add_type__V_295_295 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 4)));
#line 111 "add_type.m"
                  hlds__make_hlds__add_type__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 5)));
#line 111 "add_type.m"
                  hlds__make_hlds__add_type__V_103_103 = (MR_Integer) 0;
#line 5998 "hlds.make_hlds.add_type.c"
                  hlds__make_hlds__add_type__TypeCtorInfo_298_298 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 111 "add_type.m"
                  {
#line 111 "add_type.m"
                    mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_298_298, hlds__make_hlds__add_type__V_102_102, &hlds__make_hlds__add_type__V_300_300);
                  }
#line 111 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_103_103 == hlds__make_hlds__add_type__V_300_300);
#line 109 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 109 "add_type.m"
                    {
#line 112 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeUserUC_36)) == (MR_mktag((MR_Integer) 1)));
#line 112 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 112 "add_type.m"
                        {
#line 112 "add_type.m"
                          hlds__make_hlds__add_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeUserUC_36, (MR_Integer) 0)));
#line 114 "add_type.m"
                          {
#line 114 "add_type.m"
                            hlds__make_hlds__add_type__V_104_104 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_type__Status0_16);
                          }
#line 114 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_104_104 == (MR_Integer) 1);
#line 112 "add_type.m"
                        }
#line 109 "add_type.m"
                    }
#line 109 "add_type.m"
                }
#line 110 "add_type.m"
            }
#line 109 "add_type.m"
        }
#line 129 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 119 "add_type.m"
        {
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMainPieces_40;
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMsg_42;
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummySpec_43;
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_107_107;
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_108_108;
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_109_109;
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_126_126;
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_127_127;
#line 119 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_134_134;

#line 117 "add_type.m"
          {
#line 117 "add_type.m"
            hlds__make_hlds__add_type__V_109_109 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_109_109, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 117 "add_type.m"
          }
#line 117 "add_type.m"
          {
#line 117 "add_type.m"
            hlds__make_hlds__add_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_108_108, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_109_109));
#line 117 "add_type.m"
          }
#line 117 "add_type.m"
          {
#line 117 "add_type.m"
            hlds__make_hlds__add_type__V_107_107 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_107_107, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_108_108));
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_107_107, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
#line 117 "add_type.m"
          }
#line 116 "add_type.m"
          {
#line 116 "add_type.m"
            hlds__make_hlds__add_type__DummyMainPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_107_107));
#line 116 "add_type.m"
          }
#line 124 "add_type.m"
          {
#line 124 "add_type.m"
            hlds__make_hlds__add_type__V_127_127 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMainPieces_40));
#line 124 "add_type.m"
          }
#line 124 "add_type.m"
          {
#line 124 "add_type.m"
            hlds__make_hlds__add_type__V_126_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_127_127));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_126_126, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[61])));
#line 124 "add_type.m"
          }
#line 123 "add_type.m"
          {
#line 123 "add_type.m"
            hlds__make_hlds__add_type__DummyMsg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_42, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_126_126));
#line 123 "add_type.m"
          }
#line 127 "add_type.m"
          {
#line 127 "add_type.m"
            hlds__make_hlds__add_type__V_134_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 127 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_134_134, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMsg_42));
#line 127 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_134_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 127 "add_type.m"
          }
#line 126 "add_type.m"
          {
#line 126 "add_type.m"
            hlds__make_hlds__add_type__DummySpec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 126 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 126 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 126 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_134_134));
#line 126 "add_type.m"
          }
#line 128 "add_type.m"
          {
#line 128 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 128 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummySpec_43));
#line 128 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_97));
#line 128 "add_type.m"
          }
#line 119 "add_type.m"
        }
#line 129 "add_type.m"
      else
#line 129 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_97;
#line 132 "add_type.m"
      {
#line 132 "add_type.m"
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__TypeTable0_44);
      }
#line 136 "add_type.m"
      {
#line 136 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_type__TypeTable0_44, hlds__make_hlds__add_type__TypeCtor_22, &hlds__make_hlds__add_type__OldDefn0_45);
      }
#line 158 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 138 "add_type.m"
        {
#line 138 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus_46;
#line 138 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody0_48;
#line 138 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody_49;

#line 138 "add_type.m"
          {
#line 138 "add_type.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldStatus_46);
          }
#line 139 "add_type.m"
          {
#line 139 "add_type.m"
            hlds__make_hlds__add_type__combine_status_3_p_0(hlds__make_hlds__add_type__Status1_34, hlds__make_hlds__add_type__OldStatus_46, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47);
          }
#line 140 "add_type.m"
          {
#line 140 "add_type.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldBody0_48);
          }
#line 141 "add_type.m"
          {
#line 141 "add_type.m"
            hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(hlds__make_hlds__add_type__OldBody0_48, &hlds__make_hlds__add_type__OldBody_49, hlds__make_hlds__add_type__Body0_23, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50);
          }
#line 142 "add_type.m"
          {
#line 142 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(hlds__make_hlds__add_type__OldBody_49, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50);
          }
#line 154 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 148 "add_type.m"
            {
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverPieces_51;
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverMsg_52;
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverSpec_53;
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_139_139;
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_140_140;
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_141_141;
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_160_160;
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_161_161;
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_165_165;

#line 146 "add_type.m"
              {
#line 146 "add_type.m"
                hlds__make_hlds__add_type__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_141_141, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_141_141, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 146 "add_type.m"
              }
#line 146 "add_type.m"
              {
#line 146 "add_type.m"
                hlds__make_hlds__add_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_140_140, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_141_141));
#line 146 "add_type.m"
              }
#line 146 "add_type.m"
              {
#line 146 "add_type.m"
                hlds__make_hlds__add_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_139_139, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_140_140));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_139_139, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[23])));
#line 146 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__SolverPieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[62])));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_51, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_139_139));
#line 145 "add_type.m"
              }
#line 149 "add_type.m"
              {
#line 149 "add_type.m"
                hlds__make_hlds__add_type__V_161_161 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverPieces_51));
#line 149 "add_type.m"
              }
#line 149 "add_type.m"
              {
#line 149 "add_type.m"
                hlds__make_hlds__add_type__V_160_160 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_161_161));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_160_160, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 149 "add_type.m"
              }
#line 149 "add_type.m"
              {
#line 149 "add_type.m"
                hlds__make_hlds__add_type__SolverMsg_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_52, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_160_160));
#line 149 "add_type.m"
              }
#line 151 "add_type.m"
              {
#line 151 "add_type.m"
                hlds__make_hlds__add_type__V_165_165 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 151 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_165_165, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverMsg_52));
#line 151 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_165_165, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 151 "add_type.m"
              }
#line 150 "add_type.m"
              {
#line 150 "add_type.m"
                hlds__make_hlds__add_type__SolverSpec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 150 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 150 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 150 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_165_165));
#line 150 "add_type.m"
              }
#line 152 "add_type.m"
              {
#line 152 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 152 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverSpec_53));
#line 152 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136));
#line 152 "add_type.m"
              }
#line 153 "add_type.m"
              hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "add_type.m"
            }
#line 154 "add_type.m"
          else
#line 155 "add_type.m"
            {
#line 155 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn_55;

#line 155 "add_type.m"
              {
#line 155 "add_type.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_type__OldBody_49, hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldDefn_55);
              }
#line 156 "add_type.m"
              {
#line 156 "add_type.m"
                hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 156 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__OldDefn_55));
#line 156 "add_type.m"
              }
#line 155 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 155 "add_type.m"
            }
#line 138 "add_type.m"
        }
#line 158 "add_type.m"
      else
#line 159 "add_type.m"
        {
#line 159 "add_type.m"
          hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 160 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 = hlds__make_hlds__add_type__Status1_34;
#line 161 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50 = hlds__make_hlds__add_type__Body0_23;
#line 159 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_136_136;
#line 159 "add_type.m"
        }
#line 166 "add_type.m"
      {
#line 166 "add_type.m"
        mercury__map__init_1_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_297_297, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &hlds__make_hlds__add_type__KindMap_56);
      }
#line 167 "add_type.m"
      {
#line 167 "add_type.m"
        hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet_11, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, hlds__make_hlds__add_type__KindMap_56, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, (MR_Integer) 0, hlds__make_hlds__add_type__NeedQual_17, (MR_Integer) 0, hlds__make_hlds__add_type__Context_15, &hlds__make_hlds__add_type__TypeDefn1_57);
      }
#line 170 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__MaybeOldDefn_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 170 "add_type.m"
        {
#line 171 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 0)));
#line 171 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 171 "add_type.m"
            hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50), (MR_Integer) 0);
#line 170 "add_type.m"
        }
#line 180 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 175 "add_type.m"
        {
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclPieces_59;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclMsg_60;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclSpec_61;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_172_172;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_173_173;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_174_174;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_179_179;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_180_180;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_184_184;

#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__V_174_174 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_174_174, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_174_174, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 174 "add_type.m"
          }
#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_173_173, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_174_174));
#line 174 "add_type.m"
          }
#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__V_172_172 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_172_172, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_173_173));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_172_172, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[65])));
#line 174 "add_type.m"
          }
#line 173 "add_type.m"
          {
#line 173 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclPieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_59, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_172_172));
#line 173 "add_type.m"
          }
#line 176 "add_type.m"
          {
#line 176 "add_type.m"
            hlds__make_hlds__add_type__V_180_180 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclPieces_59));
#line 176 "add_type.m"
          }
#line 176 "add_type.m"
          {
#line 176 "add_type.m"
            hlds__make_hlds__add_type__V_179_179 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_179_179, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_180_180));
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_179_179, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 176 "add_type.m"
          }
#line 176 "add_type.m"
          {
#line 176 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclMsg_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_60, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_179_179));
#line 176 "add_type.m"
          }
#line 178 "add_type.m"
          {
#line 178 "add_type.m"
            hlds__make_hlds__add_type__V_184_184 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 178 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_184_184, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclMsg_60));
#line 178 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_184_184, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 178 "add_type.m"
          }
#line 177 "add_type.m"
          {
#line 177 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclSpec_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 177 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 177 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 177 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_184_184));
#line 177 "add_type.m"
          }
#line 179 "add_type.m"
          {
#line 179 "add_type.m"
            MR_Word base;
#line 179 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 179 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclSpec_61));
#line 179 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 179 "add_type.m"
          }
#line 175 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 175 "add_type.m"
        }
#line 180 "add_type.m"
      else
#line 203 "add_type.m"
        {
#line 181 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldDefn1_62;
#line 181 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus1_64;
#line 181 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody1_65;
#line 181 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_187_187;
#line 181 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_188_188;
#line 182 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_63_63;
#line 185 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;

#line 182 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 0)));
#line 182 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 182 "add_type.m"
            {
#line 182 "add_type.m"
              hlds__make_hlds__add_type__V_63_63 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50), (MR_Integer) 0);
#line 181 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_54)) == (MR_mktag((MR_Integer) 1)));
#line 181 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 181 "add_type.m"
                {
#line 181 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn1_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, (MR_Integer) 0)));
#line 183 "add_type.m"
                  {
#line 183 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn1_62, &hlds__make_hlds__add_type__OldStatus1_64);
                  }
#line 184 "add_type.m"
                  {
#line 184 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn1_62, &hlds__make_hlds__add_type__OldBody1_65);
                  }
#line 185 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody1_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_65, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 185 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 185 "add_type.m"
                    {
#line 185 "add_type.m"
                      hlds__make_hlds__add_type__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_65, (MR_Integer) 1)));
#line 186 "add_type.m"
                      {
#line 186 "add_type.m"
                        hlds__make_hlds__add_type__V_187_187 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus1_64);
                      }
#line 186 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_187_187 == (MR_Integer) 0);
#line 181 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 181 "add_type.m"
                        {
#line 187 "add_type.m"
                          {
#line 187 "add_type.m"
                            hlds__make_hlds__add_type__V_188_188 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__Status0_16);
                          }
#line 187 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_188_188 == (MR_Integer) 1);
#line 181 "add_type.m"
                        }
#line 185 "add_type.m"
                    }
#line 181 "add_type.m"
                }
#line 182 "add_type.m"
            }
#line 203 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 191 "add_type.m"
            {
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisPieces_67;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisMsg_68;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisSpec_69;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_70;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TypeTable_71;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_191_191;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_192_192;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_193_193;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_198_198;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_199_199;
#line 191 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_203_203;

#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__V_193_193 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_193_193, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_193_193, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 190 "add_type.m"
              }
#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_192_192, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_192_192, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_193_193));
#line 190 "add_type.m"
              }
#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__V_191_191 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_191_191, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_192_192));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_191_191, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[68])));
#line 190 "add_type.m"
              }
#line 189 "add_type.m"
              {
#line 189 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisPieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[66])));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_191_191));
#line 189 "add_type.m"
              }
#line 192 "add_type.m"
              {
#line 192 "add_type.m"
                hlds__make_hlds__add_type__V_199_199 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisPieces_67));
#line 192 "add_type.m"
              }
#line 192 "add_type.m"
              {
#line 192 "add_type.m"
                hlds__make_hlds__add_type__V_198_198 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_198_198, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_199_199));
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_198_198, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 192 "add_type.m"
              }
#line 192 "add_type.m"
              {
#line 192 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisMsg_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_68, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_68, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_198_198));
#line 192 "add_type.m"
              }
#line 194 "add_type.m"
              {
#line 194 "add_type.m"
                hlds__make_hlds__add_type__V_203_203 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 194 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_203_203, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisMsg_68));
#line 194 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_203_203, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 194 "add_type.m"
              }
#line 193 "add_type.m"
              {
#line 193 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisSpec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 193 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 193 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 193 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_203_203));
#line 193 "add_type.m"
              }
#line 195 "add_type.m"
              {
#line 195 "add_type.m"
                MR_Word base;
#line 195 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 195 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisSpec_69));
#line 195 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 195 "add_type.m"
              }
#line 198 "add_type.m"
              {
#line 198 "add_type.m"
                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_57, &hlds__make_hlds__add_type__ErrTypeDefn_70);
              }
#line 200 "add_type.m"
              {
#line 200 "add_type.m"
                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__ErrTypeDefn_70, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_71);
              }
#line 202 "add_type.m"
              {
#line 202 "add_type.m"
                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_71, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
#line 202 "add_type.m"
                return;
              }
#line 191 "add_type.m"
            }
#line 203 "add_type.m"
          else
#line 275 "add_type.m"
            {
#line 275 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TVarSet2_73;
#line 275 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Params2_74;
#line 275 "add_type.m"
              MR_Word hlds__make_hlds__add_type__KindMap2_75;
#line 275 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body2_76;
#line 275 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigContext_77;
#line 275 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigStatus_78;
#line 275 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigInExportedEqv_79;
#line 275 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigNeedQual_80;
#line 205 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn2_72;
#line 214 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_81_81;

#line 205 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_54)) == (MR_mktag((MR_Integer) 1)));
#line 205 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 205 "add_type.m"
                {
#line 205 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn2_72 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, (MR_Integer) 0)));
#line 206 "add_type.m"
                  {
#line 206 "add_type.m"
                    hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__TVarSet2_73);
                  }
#line 207 "add_type.m"
                  {
#line 207 "add_type.m"
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__Params2_74);
                  }
#line 208 "add_type.m"
                  {
#line 208 "add_type.m"
                    hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__KindMap2_75);
                  }
#line 209 "add_type.m"
                  {
#line 209 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__Body2_76);
                  }
#line 210 "add_type.m"
                  {
#line 210 "add_type.m"
                    hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigContext_77);
                  }
#line 211 "add_type.m"
                  {
#line 211 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigStatus_78);
                  }
#line 212 "add_type.m"
                  {
#line 212 "add_type.m"
                    hlds__hlds_data__get_type_defn_in_exported_eqv_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigInExportedEqv_79);
                  }
#line 213 "add_type.m"
                  {
#line 213 "add_type.m"
                    hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__OldDefn2_72, &hlds__make_hlds__add_type__OrigNeedQual_80);
                  }
#line 214 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body2_76)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body2_76, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 214 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 214 "add_type.m"
                    hlds__make_hlds__add_type__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body2_76, (MR_Integer) 1)));
#line 214 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded);
#line 205 "add_type.m"
                }
#line 275 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 216 "add_type.m"
                {
#line 216 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Target_82;
#line 216 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MakeOptInt_83;
#line 225 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_84_84;

#line 216 "add_type.m"
                  {
#line 216 "add_type.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_20, &hlds__make_hlds__add_type__Target_82);
                  }
#line 217 "add_type.m"
                  {
#line 217 "add_type.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_type__Globals_20, (MR_Integer) 87, &hlds__make_hlds__add_type__MakeOptInt_83);
                  }
#line 225 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 225 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 225 "add_type.m"
                    {
#line 225 "add_type.m"
                      hlds__make_hlds__add_type__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 1)));
#line 227 "add_type.m"
                      {
#line 227 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__hlds_pred____Unify____import_status_0_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigStatus_78);
                      }
#line 229 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 229 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 229 "add_type.m"
                      else
#line 232 "add_type.m"
                        {
#line 232 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeDefn3_85;
#line 232 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeTable_272;

#line 230 "add_type.m"
                          {
#line 230 "add_type.m"
                            hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_73, hlds__make_hlds__add_type__Params2_74, hlds__make_hlds__add_type__KindMap2_75, hlds__make_hlds__add_type__Body2_76, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__OrigNeedQual_80, (MR_Integer) 0, hlds__make_hlds__add_type__OrigContext_77, &hlds__make_hlds__add_type__TypeDefn3_85);
                          }
#line 233 "add_type.m"
                          {
#line 233 "add_type.m"
                            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn3_85, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_272);
                          }
#line 235 "add_type.m"
                          {
#line 235 "add_type.m"
                            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_272, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                          }
#line 232 "add_type.m"
                        }
#line 229 "add_type.m"
                      *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 225 "add_type.m"
                    }
#line 225 "add_type.m"
                  else
#line 264 "add_type.m"
                    {
#line 264 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__NewBody_86;

#line 238 "add_type.m"
                      {
#line 238 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(hlds__make_hlds__add_type__Target_82, hlds__make_hlds__add_type__MakeOptInt_83, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, hlds__make_hlds__add_type__Body2_76, &hlds__make_hlds__add_type__NewBody_86);
                      }
#line 264 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 248 "add_type.m"
                        {
#line 241 "add_type.m"
                          {
#line 241 "add_type.m"
                            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(hlds__make_hlds__add_type__OrigStatus_78, hlds__make_hlds__add_type__Status1_34);
                          }
#line 248 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 244 "add_type.m"
                            {
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_275;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeDefn3_276;

#line 242 "add_type.m"
                              {
#line 242 "add_type.m"
                                hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_73, hlds__make_hlds__add_type__Params2_74, hlds__make_hlds__add_type__KindMap2_75, hlds__make_hlds__add_type__NewBody_86, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigInExportedEqv_79, hlds__make_hlds__add_type__NeedQual_17, (MR_Integer) 0, hlds__make_hlds__add_type__Context_15, &hlds__make_hlds__add_type__TypeDefn3_276);
                              }
#line 245 "add_type.m"
                              {
#line 245 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn3_276, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_275);
                              }
#line 247 "add_type.m"
                              {
#line 247 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_275, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                              }
#line 244 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 244 "add_type.m"
                            }
#line 248 "add_type.m"
                          else
#line 249 "add_type.m"
                            {
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisPieces_87;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisMsg_88;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisSpec_89;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_216_216;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_217_217;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_218_218;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_233_233;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_234_234;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_238_238;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_277;
#line 249 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_278;

#line 249 "add_type.m"
                              {
#line 249 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213);
                              }
#line 251 "add_type.m"
                              {
#line 251 "add_type.m"
                                hlds__make_hlds__add_type__V_218_218 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 251 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_218_218, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 251 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_218_218, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 251 "add_type.m"
                              }
#line 251 "add_type.m"
                              {
#line 251 "add_type.m"
                                hlds__make_hlds__add_type__V_217_217 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_217_217, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 251 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_217_217, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_218_218));
#line 251 "add_type.m"
                              }
#line 251 "add_type.m"
                              {
#line 251 "add_type.m"
                                hlds__make_hlds__add_type__V_216_216 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_216_216, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_217_217));
#line 251 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_216_216, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[30])));
#line 251 "add_type.m"
                              }
#line 250 "add_type.m"
                              {
#line 250 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisPieces_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_87, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[62])));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_87, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_216_216));
#line 250 "add_type.m"
                              }
#line 254 "add_type.m"
                              {
#line 254 "add_type.m"
                                hlds__make_hlds__add_type__V_234_234 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisPieces_87));
#line 254 "add_type.m"
                              }
#line 254 "add_type.m"
                              {
#line 254 "add_type.m"
                                hlds__make_hlds__add_type__V_233_233 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_233_233, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_234_234));
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_233_233, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 254 "add_type.m"
                              }
#line 254 "add_type.m"
                              {
#line 254 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisMsg_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 254 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_233_233));
#line 254 "add_type.m"
                              }
#line 256 "add_type.m"
                              {
#line 256 "add_type.m"
                                hlds__make_hlds__add_type__V_238_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 256 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_238_238, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisMsg_88));
#line 256 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_238_238, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 256 "add_type.m"
                              }
#line 255 "add_type.m"
                              {
#line 255 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisSpec_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 255 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 255 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_89, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_238_238));
#line 255 "add_type.m"
                              }
#line 257 "add_type.m"
                              {
#line 257 "add_type.m"
                                MR_Word base;
#line 257 "add_type.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 257 "add_type.m"
                                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 257 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisSpec_89));
#line 257 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 257 "add_type.m"
                              }
#line 258 "add_type.m"
                              {
#line 258 "add_type.m"
                                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_57, &hlds__make_hlds__add_type__ErrTypeDefn_277);
                              }
#line 260 "add_type.m"
                              {
#line 260 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__ErrTypeDefn_277, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_278);
                              }
#line 262 "add_type.m"
                              {
#line 262 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_278, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_213_213, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
#line 262 "add_type.m"
                                return;
                              }
#line 249 "add_type.m"
                            }
#line 248 "add_type.m"
                        }
#line 264 "add_type.m"
                      else
#line 270 "add_type.m"
                        {
#line 267 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 270 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 269 "add_type.m"
                            {
#line 269 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 269 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95;
#line 269 "add_type.m"
                            }
#line 270 "add_type.m"
                          else
#line 271 "add_type.m"
                            {
#line 271 "add_type.m"
                              {
#line 271 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                              }
#line 272 "add_type.m"
                              {
#line 272 "add_type.m"
                                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__Name_12, hlds__make_hlds__add_type__Arity_21, (MR_String) "type", hlds__make_hlds__add_type__Context_15, hlds__make_hlds__add_type__OrigContext_77, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98);
#line 272 "add_type.m"
                                return;
                              }
#line 271 "add_type.m"
                            }
#line 270 "add_type.m"
                        }
#line 264 "add_type.m"
                    }
#line 216 "add_type.m"
                }
#line 275 "add_type.m"
              else
#line 277 "add_type.m"
                {
#line 277 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__TypeTable_289;

#line 276 "add_type.m"
                  {
#line 276 "add_type.m"
                    hlds__hlds_data__add_or_replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn1_57, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_289);
                  }
#line 278 "add_type.m"
                  {
#line 278 "add_type.m"
                    hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_289, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_95, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_96);
                  }
#line 284 "add_type.m"
                  {
#line 284 "add_type.m"
                    hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(&hlds__make_hlds__add_type__env);
                  }
#line 299 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 292 "add_type.m"
                    {
#line 292 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvMsg_93;
#line 292 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvSpec_94;
#line 292 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_260_260;
#line 292 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_262_262;
#line 292 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_263_263;
#line 292 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_265_265;
#line 292 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_269_269;

#line 295 "add_type.m"
                      {
#line 295 "add_type.m"
                        hlds__make_hlds__add_type__V_265_265 = hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0();
                      }
#line 295 "add_type.m"
                      {
#line 295 "add_type.m"
                        hlds__make_hlds__add_type__V_263_263 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_263_263, 0) = ((MR_Box) ((MR_Integer) 1));
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_263_263, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_265_265));
#line 295 "add_type.m"
                      }
#line 295 "add_type.m"
                      {
#line 295 "add_type.m"
                        hlds__make_hlds__add_type__V_262_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_262_262, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_263_263));
#line 295 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_262_262, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 295 "add_type.m"
                      }
#line 294 "add_type.m"
                      {
#line 294 "add_type.m"
                        hlds__make_hlds__add_type__V_260_260 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_260_260, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[1]));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_260_260, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_262_262));
#line 294 "add_type.m"
                      }
#line 293 "add_type.m"
                      {
#line 293 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvMsg_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_93, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_93, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_260_260));
#line 293 "add_type.m"
                      }
#line 297 "add_type.m"
                      {
#line 297 "add_type.m"
                        hlds__make_hlds__add_type__V_269_269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 297 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_269_269, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvMsg_93));
#line 297 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_269_269, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 297 "add_type.m"
                      }
#line 296 "add_type.m"
                      {
#line 296 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvSpec_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 296 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 296 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 296 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_94, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_269_269));
#line 296 "add_type.m"
                      }
#line 298 "add_type.m"
                      {
#line 298 "add_type.m"
                        MR_Word base;
#line 298 "add_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 298 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = base;
#line 298 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvSpec_94));
#line 298 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167));
#line 298 "add_type.m"
                      }
#line 292 "add_type.m"
                    }
#line 299 "add_type.m"
                  else
#line 299 "add_type.m"
                    *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_98 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_167_167;
#line 277 "add_type.m"
                }
#line 275 "add_type.m"
            }
#line 203 "add_type.m"
        }
#line 82 "add_type.m"
    }
#line 36 "add_type.m"
  }
#line 36 "add_type.m"
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
