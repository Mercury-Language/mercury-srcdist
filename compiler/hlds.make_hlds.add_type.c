/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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



#line 715 "add_type.m"
struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
#line 724 "add_type.m"
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
#line 741 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
#line 743 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
#line 743 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98;
#line 743 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118;
#line 743 "add_type.m"
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98;
#line 715 "add_type.m"
};

#line 35 "add_type.m"
struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s {
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13;
#line 81 "add_type.m"
  MR_bool hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_274_274;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47;
#line 81 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50;
#line 269 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0;
#line 269 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_89;
#line 269 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_90;
#line 271 "add_type.m"
  MR_Box hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_90;
#line 272 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1;
#line 272 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_280_280;
#line 272 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_278_278;
#line 35 "add_type.m"
};


#line 196 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 199 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

#line 202 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 205 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 782 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__782__1_1_f_0(
#line 782 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94);

#line 874 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 874 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 874 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 874 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 874 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 874 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);

#line 870 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 870 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 870 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 870 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 870 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 818 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 818 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 818 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41);

#line 796 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 796 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 796 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 796 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11);

#line 787 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 787 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 787 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 787 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 787 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 787 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 787 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15);

#line 782 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 782 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 782 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1);

#line 773 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 773 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 773 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 773 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 773 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 743 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 743 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 743 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 743 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 743 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 743 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 743 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 743 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 715 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);

#line 696 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 696 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 696 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 696 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15);

#line 639 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 639 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 639 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 639 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 639 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4);

#line 514 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 514 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 514 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 514 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6);

#line 483 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 483 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 483 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 483 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 483 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 483 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5);

#line 444 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_8_p_0(
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_10,
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_11,
#line 444 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_12,
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24,
#line 444 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25,
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26,
#line 444 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27);

#line 347 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 347 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 347 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4);

#line 318 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 318 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 318 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4);

#line 311 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 311 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 311 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 311 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 311 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4);

#line 289 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void);

#line 269 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(
#line 269 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 271 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3(
#line 271 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 272 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(
#line 272 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 272 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5(
#line 272 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 272 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(
#line 272 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 269 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(
#line 269 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 269 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(
#line 269 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[79][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[6][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[2][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][8];




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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "must have the same visibility"))
  },
  /* row 25 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[24]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error: all definitions of a type"))
  },
  /* row 27 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[26]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[25])))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[27])))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[22]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[28])))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "exported as abstract type."))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[30]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "with monomorphic definition,"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[32]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[31])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "polymorphic equivalence type,"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[34]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[33])))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 37 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[36]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[35])))
  },
  /* row 38 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "optimize the wrapper away.)"))
  },
  /* row 39 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[38]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "(There\'s no performance penalty for this -- the compiler will"))
  },
  /* row 41 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[40]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[39])))
  },
  /* row 42 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "functor that has just one arg, instead of an equivalence type."))
  },
  /* row 43 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[42]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[41])))
  },
  /* row 44 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A better work-around is to use a \"wrapper\" type, with just one"))
  },
  /* row 45 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[44]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[43])))
  },
  /* row 46 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "type by putting the type definition in the interface section."))
  },
  /* row 47 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[46]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[45])))
  },
  /* row 48 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A quick work-around is to just export the type as a concrete,"))
  },
  /* row 49 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[48]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[47])))
  },
  /* row 50 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "on other back-ends, but none for this back-end."))
  },
  /* row 52 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[51]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])))
  },
  /* row 53 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "There are representations for this type"))
  },
  /* row 54 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[53]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[52])))
  },
  /* row 55 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "multiply defined."))
  },
  /* row 56 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[55]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])))
  },
  /* row 57 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 58 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[57]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])))
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
    ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 73 */
  {
    ((MR_Box) (((MR_Integer) 46 | (((MR_Integer) 1 << (MR_Integer) 10))))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[72])))
  },
  /* row 74 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[73]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: constructor"))
  },
  /* row 76 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "for type"))
  },
  /* row 77 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "Error: field"))
  },
  /* row 78 */
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

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[6][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "solver"))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[37])))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[54])))
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

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_5[1][9] = {
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

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][8] = {
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



#line 1065 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0
  }
};

#line 1073 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_ctor_field_name_0
  }
};

#line 1081 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 1089 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
    (MR_PseudoTypeInfo) &hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0
  }
};

#line 782 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__782__1_1_f_0(
#line 782 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_94)
#line 782 "add_type.m"
{
#line 782 "add_type.m"
  {
#line 782 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 782 "add_type.m"
    MR_Word hlds__make_hlds__add_type__HeadVar__2_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 0)));
#line 782 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 1)));
#line 782 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 2)));
#line 782 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_94, (MR_Integer) 3)));

#line 782 "add_type.m"
    return hlds__make_hlds__add_type__HeadVar__2_95;
#line 782 "add_type.m"
  }
#line 782 "add_type.m"
}

#line 874 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 874 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 874 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 874 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 874 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 874 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11)
#line 874 "add_type.m"
{
#line 877 "add_type.m"
  {
#line 877 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 877 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_12_12;

#line 878 "add_type.m"
    {
#line 878 "add_type.m"
      hlds__make_hlds__add_type__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleName_8));
#line 878 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldName_6));
#line 878 "add_type.m"
    }
#line 878 "add_type.m"
    {
#line 878 "add_type.m"
      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_12_12)), ((MR_Box) (hlds__make_hlds__add_type__FieldNameDefn_7)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);
#line 878 "add_type.m"
      return;
    }
#line 877 "add_type.m"
  }
#line 874 "add_type.m"
}

#line 870 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 870 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 870 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 870 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 870 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 870 "add_type.m"
{
#line 870 "add_type.m"
  {
#line 870 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 870 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11;

#line 870 "add_type.m"
    {
#line 870 "add_type.m"
      hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11);
    }
#line 870 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11));
#line 870 "add_type.m"
  }
#line 870 "add_type.m"
}

#line 818 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 818 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 818 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 818 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41)
#line 818 "add_type.m"
{
#line 824 "add_type.m"
  {
#line 824 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 824 "add_type.m"
    MR_Word hlds__make_hlds__add_type__FieldModule_17;
#line 856 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConflictingDefns_19;
#line 836 "add_type.m"
    MR_Box hlds__make_hlds__add_type__conv0_ConflictingDefns_19;

#line 828 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__FieldName_9)) == (MR_mktag((MR_Integer) 1))))
#line 826 "add_type.m"
      {
#line 826 "add_type.m"
        MR_String hlds__make_hlds__add_type__V_16_16;

#line 826 "add_type.m"
        hlds__make_hlds__add_type__FieldModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 0)));
#line 826 "add_type.m"
        hlds__make_hlds__add_type__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 1)));
#line 826 "add_type.m"
      }
#line 828 "add_type.m"
    else
#line 829 "add_type.m"
      {
#line 830 "add_type.m"
        {
#line 830 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
#line 830 "add_type.m"
          return;
        }
#line 829 "add_type.m"
      }
#line 836 "add_type.m"
    {
#line 836 "add_type.m"
      hlds__make_hlds__add_type__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[3], hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (hlds__make_hlds__add_type__FieldName_9)), &hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
    }
#line 836 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 836 "add_type.m"
      {
#line 836 "add_type.m"
        hlds__make_hlds__add_type__ConflictingDefns_19 = ((MR_Word) hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
#line 836 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 836 "add_type.m"
      }
#line 856 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 841 "add_type.m"
      {
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__OrigContext_21;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Context_26;
#line 841 "add_type.m"
        MR_String hlds__make_hlds__add_type__FieldString_31;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Pieces_32;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__HereMsg_33;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevPieces_34;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevMsg_35;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_36;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_59_59;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_60_60;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_64_64;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_72_72;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_73_73;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_77_77;
#line 841 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_78_78;
#line 839 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConflictingDefn_20;
#line 837 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_45_45;
#line 845 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_27_27;
#line 845 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_28_28;
#line 845 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29;
#line 845 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_30_30;

#line 837 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__ConflictingDefns_19)) == (MR_mktag((MR_Integer) 1)));
#line 837 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 837 "add_type.m"
          {
#line 837 "add_type.m"
            hlds__make_hlds__add_type__ConflictingDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 0)));
#line 837 "add_type.m"
            hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 1)));
#line 837 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 837 "add_type.m"
          }
#line 839 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 838 "add_type.m"
          {
#line 838 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_22_22;
#line 838 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_23_23;
#line 838 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_24_24;
#line 838 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_25_25;

#line 838 "add_type.m"
            hlds__make_hlds__add_type__OrigContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 0)));
#line 838 "add_type.m"
            hlds__make_hlds__add_type__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 1)));
#line 838 "add_type.m"
            hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 2)));
#line 838 "add_type.m"
            hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 3)));
#line 838 "add_type.m"
            hlds__make_hlds__add_type__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 4)));
#line 838 "add_type.m"
          }
#line 839 "add_type.m"
        else
#line 840 "add_type.m"
          {
#line 840 "add_type.m"
            {
#line 840 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
#line 840 "add_type.m"
              return;
            }
#line 840 "add_type.m"
          }
#line 845 "add_type.m"
        hlds__make_hlds__add_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 0)));
#line 845 "add_type.m"
        hlds__make_hlds__add_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 1)));
#line 845 "add_type.m"
        hlds__make_hlds__add_type__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 2)));
#line 845 "add_type.m"
        hlds__make_hlds__add_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 3)));
#line 845 "add_type.m"
        hlds__make_hlds__add_type__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 4)));
#line 846 "add_type.m"
        {
#line 846 "add_type.m"
          hlds__make_hlds__add_type__FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 847 "add_type.m"
        {
#line 847 "add_type.m"
          hlds__make_hlds__add_type__V_52_52 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_52_52, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldString_31));
#line 847 "add_type.m"
        }
#line 847 "add_type.m"
        {
#line 847 "add_type.m"
          hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[56])));
#line 847 "add_type.m"
        }
#line 847 "add_type.m"
        {
#line 847 "add_type.m"
          hlds__make_hlds__add_type__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[77])));
#line 847 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 847 "add_type.m"
        }
#line 849 "add_type.m"
        {
#line 849 "add_type.m"
          hlds__make_hlds__add_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_32));
#line 849 "add_type.m"
        }
#line 849 "add_type.m"
        {
#line 849 "add_type.m"
          hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_60_60));
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 849 "add_type.m"
        }
#line 849 "add_type.m"
        {
#line 849 "add_type.m"
          hlds__make_hlds__add_type__HereMsg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_26));
#line 849 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 849 "add_type.m"
        }
#line 851 "add_type.m"
        {
#line 851 "add_type.m"
          hlds__make_hlds__add_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 851 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[58])));
#line 851 "add_type.m"
        }
#line 850 "add_type.m"
        {
#line 850 "add_type.m"
          hlds__make_hlds__add_type__PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 850 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[78])));
#line 850 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_64_64));
#line 850 "add_type.m"
        }
#line 852 "add_type.m"
        {
#line 852 "add_type.m"
          hlds__make_hlds__add_type__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 852 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevPieces_34));
#line 852 "add_type.m"
        }
#line 852 "add_type.m"
        {
#line 852 "add_type.m"
          hlds__make_hlds__add_type__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 852 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_73_73));
#line 852 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 852 "add_type.m"
        }
#line 852 "add_type.m"
        {
#line 852 "add_type.m"
          hlds__make_hlds__add_type__PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 852 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__OrigContext_21));
#line 852 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_72_72));
#line 852 "add_type.m"
        }
#line 854 "add_type.m"
        {
#line 854 "add_type.m"
          hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevMsg_35));
#line 854 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 854 "add_type.m"
        }
#line 854 "add_type.m"
        {
#line 854 "add_type.m"
          hlds__make_hlds__add_type__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_type__HereMsg_33));
#line 854 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 854 "add_type.m"
        }
#line 853 "add_type.m"
        {
#line 853 "add_type.m"
          hlds__make_hlds__add_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 853 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 853 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 853 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_77_77));
#line 853 "add_type.m"
        }
#line 855 "add_type.m"
        {
#line 855 "add_type.m"
          MR_Word base;
#line 855 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 855 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = base;
#line 855 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_36));
#line 855 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40));
#line 855 "add_type.m"
        }
#line 841 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 841 "add_type.m"
      }
#line 856 "add_type.m"
    else
#line 857 "add_type.m"
      {
#line 857 "add_type.m"
        MR_String hlds__make_hlds__add_type__UnqualFieldName_37;
#line 857 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82;
#line 857 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_83_83;
#line 857 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_84_84;
#line 870 "add_type.m"
        MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39;

#line 857 "add_type.m"
        {
#line 857 "add_type.m"
          hlds__make_hlds__add_type__UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 865 "add_type.m"
        if ((hlds__make_hlds__add_type__NeedQual_11 == (MR_Integer) 1))
#line 862 "add_type.m"
          {
#line 862 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_81_81;

#line 863 "add_type.m"
            {
#line 863 "add_type.m"
              hlds__make_hlds__add_type__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 863 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 863 "add_type.m"
            }
#line 863 "add_type.m"
            {
#line 863 "add_type.m"
              mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_81_81)), ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82);
            }
#line 862 "add_type.m"
          }
#line 865 "add_type.m"
        else
#line 866 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 870 "add_type.m"
        {
#line 870 "add_type.m"
          hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 3) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 870 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10));
#line 870 "add_type.m"
        }
#line 871 "add_type.m"
        {
#line 871 "add_type.m"
          hlds__make_hlds__add_type__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldModule_17));
#line 871 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_type__PartialQuals_12));
#line 871 "add_type.m"
        }
#line 870 "add_type.m"
        {
#line 870 "add_type.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[0], hlds__make_hlds__add_type__V_83_83, hlds__make_hlds__add_type__V_84_84, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        }
#line 870 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
#line 857 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40;
#line 857 "add_type.m"
      }
#line 824 "add_type.m"
  }
#line 818 "add_type.m"
}

#line 796 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_6,
#line 796 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 796 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 796 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 796 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11)
#line 796 "add_type.m"
{
#line 802 "add_type.m"
  while (MR_TRUE)
#line 802 "add_type.m"
    {
#line 802 "add_type.m"
      /* tailcall optimized into a loop */
#line 802 "add_type.m"
      {
#line 802 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 802 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 802 "add_type.m"
          {
#line 802 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 802 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 802 "add_type.m"
          }
#line 802 "add_type.m"
        else
#line 805 "add_type.m"
          {
#line 805 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 805 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 805 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 805 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;
#line 805 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_44_44;

#line 812 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCtorFieldName_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 813 "add_type.m"
              {
#line 813 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 813 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 813 "add_type.m"
              }
#line 812 "add_type.m"
            else
#line 807 "add_type.m"
              {
#line 807 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldName_34;
#line 807 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldNameContext_35;
#line 807 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldDefn_36;
#line 807 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeCtorFieldName_24, (MR_Integer) 0)));

#line 807 "add_type.m"
                hlds__make_hlds__add_type__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 0)));
#line 807 "add_type.m"
                hlds__make_hlds__add_type__FieldNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 1)));
#line 808 "add_type.m"
                {
#line 808 "add_type.m"
                  hlds__make_hlds__add_type__FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 808 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldNameContext_35));
#line 808 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__ImportStatus_6));
#line 808 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_4));
#line 808 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 3) = ((MR_Box) (hlds__make_hlds__add_type__ConsId_5));
#line 808 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldNumber_7));
#line 808 "add_type.m"
                }
#line 810 "add_type.m"
                {
#line 810 "add_type.m"
                  hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(hlds__make_hlds__add_type__FieldName_34, hlds__make_hlds__add_type__FieldDefn_36, hlds__make_hlds__add_type__NeedQual_2, hlds__make_hlds__add_type__PartialQuals_3, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43);
                }
#line 807 "add_type.m"
              }
#line 816 "add_type.m"
            hlds__make_hlds__add_type__V_44_44 = (hlds__make_hlds__add_type__FieldNumber_7 + (MR_Integer) 1);
#line 815 "add_type.m"
            /* direct tailcall eliminated */
#line 815 "add_type.m"
            {
#line 815 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__MaybeCtorFieldNames_25;
#line 815 "add_type.m"
              MR_Integer hlds__make_hlds__add_type__FieldNumber__tmp_copy_7 = hlds__make_hlds__add_type__V_44_44;
#line 815 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 815 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;

#line 815 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 815 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8;
#line 815 "add_type.m"
              hlds__make_hlds__add_type__FieldNumber_7 = hlds__make_hlds__add_type__FieldNumber__tmp_copy_7;
#line 815 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 815 "add_type.m"
            }
#line 815 "add_type.m"
            continue;
#line 805 "add_type.m"
          }
#line 802 "add_type.m"
      }
#line 802 "add_type.m"
      break;
#line 802 "add_type.m"
    }
#line 796 "add_type.m"
}

#line 787 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 787 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 787 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 787 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 787 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 787 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 787 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15)
#line 787 "add_type.m"
{
#line 790 "add_type.m"
  {
#line 790 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 790 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdA_12;
#line 790 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdB_13;
#line 790 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_16_16;
#line 790 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_18_18;
#line 790 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_20_20;

#line 791 "add_type.m"
    {
#line 791 "add_type.m"
      hlds__make_hlds__add_type__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 791 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleQual_10));
#line 791 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_type__ConsName_8));
#line 791 "add_type.m"
    }
#line 791 "add_type.m"
    {
#line 791 "add_type.m"
      hlds__make_hlds__add_type__ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 791 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 791 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 791 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 791 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 3) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_7));
#line 791 "add_type.m"
    }
#line 793 "add_type.m"
    {
#line 793 "add_type.m"
      hlds__make_hlds__add_type__V_18_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 792 "add_type.m"
    {
#line 792 "add_type.m"
      hlds__make_hlds__add_type__ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 792 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 792 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 792 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 792 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_18_18));
#line 792 "add_type.m"
    }
#line 794 "add_type.m"
    {
#line 794 "add_type.m"
      hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdB_13));
#line 794 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14));
#line 794 "add_type.m"
    }
#line 794 "add_type.m"
    {
#line 794 "add_type.m"
      MR_Word base;
#line 794 "add_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 794 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15 = base;
#line 794 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdA_12));
#line 794 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 794 "add_type.m"
    }
#line 790 "add_type.m"
  }
#line 787 "add_type.m"
}

#line 782 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 782 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 782 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1)
#line 782 "add_type.m"
{
#line 782 "add_type.m"
  {
#line 782 "add_type.m"
    MR_Box hlds__make_hlds__add_type__wrapper_arg_2;
#line 782 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 782 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv3_HeadVar__2_95;

#line 782 "add_type.m"
    {
#line 782 "add_type.m"
      hlds__make_hlds__add_type__conv3_HeadVar__2_95 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__782__1_1_f_0(((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1));
    }
#line 782 "add_type.m"
    hlds__make_hlds__add_type__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_type__conv3_HeadVar__2_95));
#line 782 "add_type.m"
    return hlds__make_hlds__add_type__wrapper_arg_2;
#line 782 "add_type.m"
  }
#line 782 "add_type.m"
}

#line 773 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 773 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 773 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 773 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 773 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 773 "add_type.m"
{
#line 773 "add_type.m"
  {
#line 773 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 773 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15;

#line 773 "add_type.m"
    {
#line 773 "add_type.m"
      hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15);
    }
#line 773 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15));
#line 773 "add_type.m"
  }
#line 773 "add_type.m"
}

#line 743 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 743 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 743 "add_type.m"
{
#line 743 "add_type.m"
  {
#line 743 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 743 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
#line 743 "add_type.m"
  }
#line 743 "add_type.m"
}

#line 743 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 743 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 743 "add_type.m"
{
#line 743 "add_type.m"
  {
#line 743 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 743 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98);
#line 743 "add_type.m"
    {
#line 743 "add_type.m"
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 743 "add_type.m"
      return;
    }
#line 743 "add_type.m"
  }
#line 743 "add_type.m"
}

#line 743 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 743 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 743 "add_type.m"
{
#line 743 "add_type.m"
  {
#line 743 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 743 "add_type.m"
    {
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_100_100;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_105_105;
#line 744 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_106_106;

#line 744 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 0)));
#line 744 "add_type.m"
      hlds__make_hlds__add_type__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 1)));
#line 744 "add_type.m"
      hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 2)));
#line 744 "add_type.m"
      hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 3)));
#line 744 "add_type.m"
      hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 4)));
#line 744 "add_type.m"
      hlds__make_hlds__add_type__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 5)));
#line 744 "add_type.m"
      hlds__make_hlds__add_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 6)));
#line 744 "add_type.m"
      hlds__make_hlds__add_type__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 7)));
#line 744 "add_type.m"
      {
#line 744 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118);
      }
#line 744 "add_type.m"
      if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 744 "add_type.m"
        {
#line 744 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 744 "add_type.m"
          return;
        }
#line 743 "add_type.m"
    }
#line 743 "add_type.m"
  }
#line 743 "add_type.m"
}

#line 743 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 743 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 743 "add_type.m"
{
#line 743 "add_type.m"
  {
#line 743 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 743 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
#line 743 "add_type.m"
      {
#line 743 "add_type.m"
        {
#line 743 "add_type.m"
          {
#line 743 "add_type.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, hlds__make_hlds__add_type__env_ptr);
          }
#line 743 "add_type.m"
        }
#line 743 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
#line 743 "add_type.m"
      }
#line 743 "add_type.m"
    else
#line 743 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
#line 743 "add_type.m"
  }
#line 743 "add_type.m"
}

#line 715 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_24,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 715 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 715 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60)
#line 715 "add_type.m"
{
#line 715 "add_type.m"
  {
#line 715 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 715 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = hlds__make_hlds__add_type__TypeCtor_17;
#line 724 "add_type.m"
    {
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 0)));
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 1)));
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 2)));
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 3)));
#line 724 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 4)));
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 5)));
#line 724 "add_type.m"
      MR_String hlds__make_hlds__add_type__BaseName_34;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedName_35;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedName_36;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdA_37;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdB_38;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdA_39;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdB_40;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ConsDefn_41;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__PartialQuals_42;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__FieldNames_52;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_61_61;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_62_62;
#line 724 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85;

#line 726 "add_type.m"
      {
#line 726 "add_type.m"
        hlds__make_hlds__add_type__BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__Name_30);
      }
#line 727 "add_type.m"
      {
#line 727 "add_type.m"
        hlds__make_hlds__add_type__QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 727 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorModuleName_18));
#line 727 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 727 "add_type.m"
      }
#line 728 "add_type.m"
      {
#line 728 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 728 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__UnqualifiedName_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 728 "add_type.m"
      }
#line 729 "add_type.m"
      {
#line 729 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 729 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 729 "add_type.m"
      }
#line 730 "add_type.m"
      {
#line 730 "add_type.m"
        hlds__make_hlds__add_type__V_61_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 730 "add_type.m"
      {
#line 730 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 730 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 730 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 730 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 730 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_61_61));
#line 730 "add_type.m"
      }
#line 731 "add_type.m"
      {
#line 731 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 731 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 731 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 731 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 731 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 731 "add_type.m"
      }
#line 732 "add_type.m"
      {
#line 732 "add_type.m"
        hlds__make_hlds__add_type__V_62_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 732 "add_type.m"
      {
#line 732 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 732 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 732 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 732 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 732 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_62_62));
#line 732 "add_type.m"
      }
#line 734 "add_type.m"
      {
#line 734 "add_type.m"
        hlds__make_hlds__add_type__ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 734 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 0) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 734 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__TVarSet_19));
#line 734 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeParams_20));
#line 734 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 3) = ((MR_Box) (hlds__make_hlds__add_type__KindMap_21));
#line 734 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 4) = ((MR_Box) (hlds__make_hlds__add_type__ExistQVars_28));
#line 734 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 5) = ((MR_Box) (hlds__make_hlds__add_type__Constraints_29));
#line 734 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 6) = ((MR_Box) (hlds__make_hlds__add_type__Args_31));
#line 734 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 7) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 734 "add_type.m"
      }
#line 736 "add_type.m"
      {
#line 736 "add_type.m"
        parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__make_hlds__add_type__TypeCtorModuleName_18, hlds__make_hlds__add_type__PQInfo_23, &hlds__make_hlds__add_type__PartialQuals_42);
      }
#line 741 "add_type.m"
      {
#line 741 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_3_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__QualifiedConsIdA_37, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
      }
#line 741 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 743 "add_type.m"
        {
#line 743 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&hlds__make_hlds__add_type__env);
        }
#line 755 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 747 "add_type.m"
        {
#line 747 "add_type.m"
          MR_String hlds__make_hlds__add_type__QualifiedConsIdStr_45;
#line 747 "add_type.m"
          MR_String hlds__make_hlds__add_type__TypeCtorStr_46;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Pieces_47;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Msg_48;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Spec_49;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_65_65;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_67_67;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_70_70;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_71_71;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_78_78;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_79_79;
#line 747 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_83_83;

#line 747 "add_type.m"
          {
#line 747 "add_type.m"
            hlds__make_hlds__add_type__QualifiedConsIdStr_45 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__make_hlds__add_type__QualifiedConsIdA_37);
          }
#line 748 "add_type.m"
          {
#line 748 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorStr_46 = parse_tree__prog_out__type_ctor_to_string_1_f_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
          }
#line 749 "add_type.m"
          {
#line 749 "add_type.m"
            hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_type.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdStr_45));
#line 749 "add_type.m"
          }
#line 750 "add_type.m"
          {
#line 750 "add_type.m"
            hlds__make_hlds__add_type__V_71_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 750 "add_type.m"
            MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_71_71, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorStr_46));
#line 750 "add_type.m"
          }
#line 750 "add_type.m"
          {
#line 750 "add_type.m"
            hlds__make_hlds__add_type__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_71_71));
#line 750 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[56])));
#line 750 "add_type.m"
          }
#line 750 "add_type.m"
          {
#line 750 "add_type.m"
            hlds__make_hlds__add_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 750 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[76])));
#line 750 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_70_70));
#line 750 "add_type.m"
          }
#line 749 "add_type.m"
          {
#line 749 "add_type.m"
            hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 749 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_67_67));
#line 749 "add_type.m"
          }
#line 749 "add_type.m"
          {
#line 749 "add_type.m"
            hlds__make_hlds__add_type__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 749 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
#line 749 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 749 "add_type.m"
          }
#line 752 "add_type.m"
          {
#line 752 "add_type.m"
            hlds__make_hlds__add_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 752 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_47));
#line 752 "add_type.m"
          }
#line 752 "add_type.m"
          {
#line 752 "add_type.m"
            hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 752 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_79_79));
#line 752 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 752 "add_type.m"
          }
#line 752 "add_type.m"
          {
#line 752 "add_type.m"
            hlds__make_hlds__add_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 752 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 752 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 752 "add_type.m"
          }
#line 753 "add_type.m"
          {
#line 753 "add_type.m"
            hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 753 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_48));
#line 753 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "add_type.m"
          }
#line 753 "add_type.m"
          {
#line 753 "add_type.m"
            hlds__make_hlds__add_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 753 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 753 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 753 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_83_83));
#line 753 "add_type.m"
          }
#line 754 "add_type.m"
          {
#line 754 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 754 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_49));
#line 754 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59));
#line 754 "add_type.m"
          }
#line 747 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57;
#line 747 "add_type.m"
        }
#line 755 "add_type.m"
      else
#line 756 "add_type.m"
        {
#line 756 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 756 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88;
#line 756 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_90_90;
#line 756 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91;
#line 773 "add_type.m"
          MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91;

#line 760 "add_type.m"
          {
#line 760 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 760 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdB_38));
#line 760 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 760 "add_type.m"
          }
#line 768 "add_type.m"
          if ((hlds__make_hlds__add_type__NeedQual_22 == (MR_Integer) 1))
#line 765 "add_type.m"
            {
#line 765 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_89_89;

#line 767 "add_type.m"
              {
#line 767 "add_type.m"
                hlds__make_hlds__add_type__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdB_40));
#line 767 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86));
#line 767 "add_type.m"
              }
#line 767 "add_type.m"
              {
#line 767 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdA_39));
#line 767 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_89_89));
#line 767 "add_type.m"
              }
#line 765 "add_type.m"
            }
#line 768 "add_type.m"
          else
#line 769 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 773 "add_type.m"
          {
#line 773 "add_type.m"
            hlds__make_hlds__add_type__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_5[0]));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 4) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 773 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 5) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 773 "add_type.m"
          }
#line 773 "add_type.m"
          {
#line 773 "add_type.m"
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[1], hlds__make_hlds__add_type__V_90_90, hlds__make_hlds__add_type__PartialQuals_42, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
          }
#line 773 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
#line 777 "add_type.m"
          {
#line 777 "add_type.m"
            hlds__hlds_data__insert_into_cons_table_5_p_0(hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91, hlds__make_hlds__add_type__ConsDefn_41, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58);
          }
#line 756 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59;
#line 756 "add_type.m"
        }
#line 782 "add_type.m"
      {
#line 782 "add_type.m"
        hlds__make_hlds__add_type__FieldNames_52 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[2], (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[1], hlds__make_hlds__add_type__Args_31);
      }
#line 784 "add_type.m"
      {
#line 784 "add_type.m"
        hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(hlds__make_hlds__add_type__FieldNames_52, hlds__make_hlds__add_type__NeedQual_22, hlds__make_hlds__add_type__PartialQuals_42, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__ImportStatus_24, (MR_Integer) 1, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);
#line 784 "add_type.m"
        return;
      }
#line 724 "add_type.m"
    }
#line 715 "add_type.m"
  }
#line 715 "add_type.m"
}

#line 696 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ImportStatus_9,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 696 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 696 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 696 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 696 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15)
#line 696 "add_type.m"
{
#line 703 "add_type.m"
  while (MR_TRUE)
#line 703 "add_type.m"
    {
#line 703 "add_type.m"
      /* tailcall optimized into a loop */
#line 703 "add_type.m"
      {
#line 703 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 703 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 703 "add_type.m"
          {
#line 704 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14;
#line 704 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12;
#line 704 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10;
#line 703 "add_type.m"
          }
#line 703 "add_type.m"
        else
#line 707 "add_type.m"
          {
#line 707 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 707 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 707 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 707 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 707 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 708 "add_type.m"
            {
#line 708 "add_type.m"
              hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(hlds__make_hlds__add_type__Ctor_33, hlds__make_hlds__add_type__TypeCtor_2, hlds__make_hlds__add_type__TypeCtorModuleName_3, hlds__make_hlds__add_type__TVarSet_4, hlds__make_hlds__add_type__TypeParams_5, hlds__make_hlds__add_type__KindMap_6, hlds__make_hlds__add_type__NeedQual_7, hlds__make_hlds__add_type__PQInfo_8, hlds__make_hlds__add_type__ImportStatus_9, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12, &hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54);
            }
#line 711 "add_type.m"
            /* direct tailcall eliminated */
#line 711 "add_type.m"
            {
#line 711 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__Ctors_34;
#line 711 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 711 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 711 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 711 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14;
#line 711 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12;
#line 711 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10;
#line 711 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 711 "add_type.m"
            }
#line 711 "add_type.m"
            continue;
#line 707 "add_type.m"
          }
#line 703 "add_type.m"
      }
#line 703 "add_type.m"
      break;
#line 703 "add_type.m"
    }
#line 696 "add_type.m"
}

#line 639 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 639 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 639 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 639 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 639 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4)
#line 639 "add_type.m"
{
#line 643 "add_type.m"
  {
#line 643 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 643 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 665 "add_type.m"
      {
#line 665 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 666 "add_type.m"
        {
#line 666 "add_type.m"
          MR_Word base;
#line 666 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "add_type.m"
          *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 666 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 666 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Details_24));
#line 666 "add_type.m"
        }
#line 665 "add_type.m"
      }
#line 643 "add_type.m"
    else
#line 643 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 643 "add_type.m"
      {
#line 643 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Body_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 643 "add_type.m"
        MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 643 "add_type.m"
        MR_Word hlds__make_hlds__add_type__MaybeDirectArgCtors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 643 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorTagMap_12;
#line 643 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ReservedAddr_13;
#line 643 "add_type.m"
        MR_Word hlds__make_hlds__add_type__IsEnum_14;
#line 643 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CheaperTagTest_16;

#line 651 "add_type.m"
        {
#line 651 "add_type.m"
          hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_type__Body_5, hlds__make_hlds__add_type__MaybeUserEqComp_6, hlds__make_hlds__add_type__TypeCtor_2, (MR_Integer) 1, hlds__make_hlds__add_type__Globals_3, &hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__ReservedAddr_13, &hlds__make_hlds__add_type__IsEnum_14);
        }
#line 654 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__ReservedAddr_13 == (MR_Integer) 1);
#line 656 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 655 "add_type.m"
          {
#line 655 "add_type.m"
            hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__CheaperTagTest_16);
          }
#line 656 "add_type.m"
        else
#line 657 "add_type.m"
          hlds__make_hlds__add_type__CheaperTagTest_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 659 "add_type.m"
        {
#line 659 "add_type.m"
          MR_Word base;
#line 659 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 659 "add_type.m"
          *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 659 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_5));
#line 659 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorTagMap_12));
#line 659 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__CheaperTagTest_16));
#line 659 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__IsEnum_14));
#line 659 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_6));
#line 659 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__MaybeDirectArgCtors_7));
#line 659 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__make_hlds__add_type__ReservedAddr_13 << (MR_Integer) 1)))));
#line 659 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "add_type.m"
        }
#line 643 "add_type.m"
      }
#line 643 "add_type.m"
    else
#line 643 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 662 "add_type.m"
      {
#line 662 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Body_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 662 "add_type.m"
        {
#line 662 "add_type.m"
          MR_Word base;
#line 662 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 662 "add_type.m"
          *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 662 "add_type.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_17));
#line 662 "add_type.m"
        }
#line 662 "add_type.m"
      }
#line 643 "add_type.m"
    else
#line 643 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 668 "add_type.m"
      {
#line 668 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "add_type.m"
        MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 668 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 3)));
#line 668 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Body_32;

#line 674 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 1))))
#line 675 "add_type.m"
          {
#line 675 "add_type.m"
            MR_Word hlds__make_hlds__add_type__CForeignType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 675 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_55_55;
#line 675 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Data_64;

#line 676 "add_type.m"
            {
#line 676 "add_type.m"
              hlds__make_hlds__add_type__Data_64 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 676 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__CForeignType_35));
#line 676 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 676 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_64, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 676 "add_type.m"
            }
#line 678 "add_type.m"
            {
#line 678 "add_type.m"
              hlds__make_hlds__add_type__V_55_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 678 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_55_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_64));
#line 678 "add_type.m"
            }
#line 678 "add_type.m"
            {
#line 678 "add_type.m"
              hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 678 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_55_55));
#line 678 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "add_type.m"
            }
#line 675 "add_type.m"
          }
#line 674 "add_type.m"
        else
#line 674 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 0))))
#line 670 "add_type.m"
          {
#line 670 "add_type.m"
            MR_Word hlds__make_hlds__add_type__ILForeignType_33 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__ForeignType_27), (MR_Integer) 0);
#line 670 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Data_34;
#line 670 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59;

#line 671 "add_type.m"
            {
#line 671 "add_type.m"
              hlds__make_hlds__add_type__Data_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 671 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__ILForeignType_33));
#line 671 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 671 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 671 "add_type.m"
            }
#line 673 "add_type.m"
            {
#line 673 "add_type.m"
              hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 673 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_34));
#line 673 "add_type.m"
            }
#line 673 "add_type.m"
            {
#line 673 "add_type.m"
              hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 673 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 673 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 673 "add_type.m"
            }
#line 670 "add_type.m"
          }
#line 674 "add_type.m"
        else
#line 674 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 2))))
#line 680 "add_type.m"
          {
#line 680 "add_type.m"
            MR_Word hlds__make_hlds__add_type__JavaForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 680 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_51_51;
#line 680 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Data_65;

#line 681 "add_type.m"
            {
#line 681 "add_type.m"
              hlds__make_hlds__add_type__Data_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 681 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__JavaForeignType_36));
#line 681 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 681 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_65, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 681 "add_type.m"
            }
#line 683 "add_type.m"
            {
#line 683 "add_type.m"
              hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 683 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_65));
#line 683 "add_type.m"
            }
#line 683 "add_type.m"
            {
#line 683 "add_type.m"
              hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 683 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 683 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 683 "add_type.m"
            }
#line 680 "add_type.m"
          }
#line 674 "add_type.m"
        else
#line 674 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 685 "add_type.m"
          {
#line 685 "add_type.m"
            MR_Word hlds__make_hlds__add_type__CSharpForeignType_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 1)));
#line 685 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_47_47;
#line 685 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Data_66;

#line 686 "add_type.m"
            {
#line 686 "add_type.m"
              hlds__make_hlds__add_type__Data_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 686 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__CSharpForeignType_37));
#line 686 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 686 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_66, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 686 "add_type.m"
            }
#line 688 "add_type.m"
            {
#line 688 "add_type.m"
              hlds__make_hlds__add_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 688 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_66));
#line 688 "add_type.m"
            }
#line 688 "add_type.m"
            {
#line 688 "add_type.m"
              hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 688 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_47_47));
#line 688 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 688 "add_type.m"
            }
#line 685 "add_type.m"
          }
#line 674 "add_type.m"
        else
#line 690 "add_type.m"
          {
#line 690 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_43_43;
#line 690 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Data_67;

#line 691 "add_type.m"
            {
#line 691 "add_type.m"
              hlds__make_hlds__add_type__Data_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 691 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 0) = NULL;
#line 691 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 691 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_67, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 691 "add_type.m"
            }
#line 693 "add_type.m"
            {
#line 693 "add_type.m"
              hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 693 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_67));
#line 693 "add_type.m"
            }
#line 693 "add_type.m"
            {
#line 693 "add_type.m"
              hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 693 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 693 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 693 "add_type.m"
            }
#line 690 "add_type.m"
          }
#line 668 "add_type.m"
        *hlds__make_hlds__add_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_32);
#line 668 "add_type.m"
      }
#line 643 "add_type.m"
    else
#line 663 "add_type.m"
      {
#line 663 "add_type.m"
        MR_Word hlds__make_hlds__add_type__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 663 "add_type.m"
        MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));

#line 664 "add_type.m"
        {
#line 664 "add_type.m"
          MR_Word base;
#line 664 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 664 "add_type.m"
          *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 664 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 664 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__SolverTypeDetails_20));
#line 664 "add_type.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_21));
#line 664 "add_type.m"
        }
#line 663 "add_type.m"
      }
#line 643 "add_type.m"
  }
#line 639 "add_type.m"
}

#line 514 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 514 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 514 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 514 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6)
#line 514 "add_type.m"
{
#line 517 "add_type.m"
  {
#line 517 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 0)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 1)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 2)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 3)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 4)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeILB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 0)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 1)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 2)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 3)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 4)));
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeIL_17;
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeC_18;
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJava_19;
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_20;
#line 517 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlang_21;

#line 532 "add_type.m"
    if ((hlds__make_hlds__add_type__MaybeILA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
      {
#line 532 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
        else
#line 534 "add_type.m"
          hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILB_12;
#line 532 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
      }
#line 532 "add_type.m"
    else
#line 533 "add_type.m"
      {
#line 533 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
          {
#line 533 "add_type.m"
            hlds__make_hlds__add_type__MaybeIL_17 = hlds__make_hlds__add_type__MaybeILA_7;
#line 533 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
          }
#line 533 "add_type.m"
      }
#line 517 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 517 "add_type.m"
      {
#line 532 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeCA_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
          {
#line 532 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
            else
#line 534 "add_type.m"
              hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCB_13;
#line 532 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
          }
#line 532 "add_type.m"
        else
#line 533 "add_type.m"
          {
#line 533 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
              {
#line 533 "add_type.m"
                hlds__make_hlds__add_type__MaybeC_18 = hlds__make_hlds__add_type__MaybeCA_8;
#line 533 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
              }
#line 533 "add_type.m"
          }
#line 517 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 517 "add_type.m"
          {
#line 532 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeJavaA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
              {
#line 532 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
                else
#line 534 "add_type.m"
                  hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaB_14;
#line 532 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
              }
#line 532 "add_type.m"
            else
#line 533 "add_type.m"
              {
#line 533 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
                  {
#line 533 "add_type.m"
                    hlds__make_hlds__add_type__MaybeJava_19 = hlds__make_hlds__add_type__MaybeJavaA_9;
#line 533 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
                  }
#line 533 "add_type.m"
              }
#line 517 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 517 "add_type.m"
              {
#line 532 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeCSharpA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                  {
#line 532 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
                    else
#line 534 "add_type.m"
                      hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpB_15;
#line 532 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
                  }
#line 532 "add_type.m"
                else
#line 533 "add_type.m"
                  {
#line 533 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
                      {
#line 533 "add_type.m"
                        hlds__make_hlds__add_type__MaybeCSharp_20 = hlds__make_hlds__add_type__MaybeCSharpA_10;
#line 533 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
                      }
#line 533 "add_type.m"
                  }
#line 517 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 517 "add_type.m"
                  {
#line 532 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeErlangA_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                      {
#line 532 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
                        else
#line 534 "add_type.m"
                          hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangB_16;
#line 532 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
                      }
#line 532 "add_type.m"
                    else
#line 533 "add_type.m"
                      {
#line 533 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
                          {
#line 533 "add_type.m"
                            hlds__make_hlds__add_type__MaybeErlang_21 = hlds__make_hlds__add_type__MaybeErlangA_11;
#line 533 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
                          }
#line 533 "add_type.m"
                      }
#line 517 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 517 "add_type.m"
                      {
#line 527 "add_type.m"
                        {
#line 527 "add_type.m"
                          MR_Word base;
#line 527 "add_type.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 527 "add_type.m"
                          *hlds__make_hlds__add_type__TypeBody_6 = base;
#line 527 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_17));
#line 527 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_18));
#line 527 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_19));
#line 527 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_20));
#line 527 "add_type.m"
                          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_21));
#line 527 "add_type.m"
                        }
#line 527 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 517 "add_type.m"
                      }
#line 517 "add_type.m"
                  }
#line 517 "add_type.m"
              }
#line 517 "add_type.m"
          }
#line 517 "add_type.m"
      }
#line 517 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 517 "add_type.m"
  }
#line 514 "add_type.m"
}

#line 483 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 483 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 483 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 483 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 483 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 483 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5)
#line 483 "add_type.m"
{
#line 488 "add_type.m"
  while (MR_TRUE)
#line 488 "add_type.m"
    {
#line 488 "add_type.m"
      /* tailcall optimized into a loop */
#line 488 "add_type.m"
      {
#line 488 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 488 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 508 "add_type.m"
          {
#line 508 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;

#line 508 "add_type.m"
            hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 508 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 508 "add_type.m"
              {
#line 508 "add_type.m"
                hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 509 "add_type.m"
                /* direct tailcall eliminated */
#line 509 "add_type.m"
                {
#line 509 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3 = hlds__make_hlds__add_type__HeadVar__4_4;
#line 509 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4 = hlds__make_hlds__add_type__HeadVar__3_3;

#line 509 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__4_4 = hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4;
#line 509 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__3_3 = hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3;
#line 509 "add_type.m"
                }
#line 509 "add_type.m"
                continue;
#line 508 "add_type.m"
              }
#line 508 "add_type.m"
          }
#line 488 "add_type.m"
        else
#line 488 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 488 "add_type.m"
          {
#line 488 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3), (MR_Integer) 0);

#line 488 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 488 "add_type.m"
              {
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody1_12;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody_13;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeILA_63;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCA_64;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaA_65;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangA_67;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeILB_68;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCB_69;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaB_70;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangB_72;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeIL_73;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeC_74;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJava_75;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharp_76;
#line 488 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlang_77;
#line 489 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 489 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 489 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 489 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 489 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 489 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 489 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 489 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 499 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_19_19;
#line 499 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_58_58;

#line 492 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_4[0];
#line 492 "add_type.m"
                else
#line 491 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBody1_11, (MR_Integer) 0)));
#line 518 "add_type.m"
                hlds__make_hlds__add_type__MaybeILA_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 0)));
#line 518 "add_type.m"
                hlds__make_hlds__add_type__MaybeCA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 1)));
#line 518 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 2)));
#line 518 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpA_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 3)));
#line 518 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangA_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, (MR_Integer) 4)));
#line 520 "add_type.m"
                hlds__make_hlds__add_type__MaybeILB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 0)));
#line 520 "add_type.m"
                hlds__make_hlds__add_type__MaybeCB_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 1)));
#line 520 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaB_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 2)));
#line 520 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpB_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 3)));
#line 520 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangB_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 4)));
#line 532 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeILA_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                  {
#line 532 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                      hlds__make_hlds__add_type__MaybeIL_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
                    else
#line 534 "add_type.m"
                      hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILB_68;
#line 532 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
                  }
#line 532 "add_type.m"
                else
#line 533 "add_type.m"
                  {
#line 533 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeILB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
                      {
#line 533 "add_type.m"
                        hlds__make_hlds__add_type__MaybeIL_73 = hlds__make_hlds__add_type__MaybeILA_63;
#line 533 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
                      }
#line 533 "add_type.m"
                  }
#line 488 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 488 "add_type.m"
                  {
#line 532 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCA_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                      {
#line 532 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                          hlds__make_hlds__add_type__MaybeC_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
                        else
#line 534 "add_type.m"
                          hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCB_69;
#line 532 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
                      }
#line 532 "add_type.m"
                    else
#line 533 "add_type.m"
                      {
#line 533 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
                          {
#line 533 "add_type.m"
                            hlds__make_hlds__add_type__MaybeC_74 = hlds__make_hlds__add_type__MaybeCA_64;
#line 533 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
                          }
#line 533 "add_type.m"
                      }
#line 488 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 488 "add_type.m"
                      {
#line 532 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeJavaA_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                          {
#line 532 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                              hlds__make_hlds__add_type__MaybeJava_75 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
                            else
#line 534 "add_type.m"
                              hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaB_70;
#line 532 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
                          }
#line 532 "add_type.m"
                        else
#line 533 "add_type.m"
                          {
#line 533 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
                              {
#line 533 "add_type.m"
                                hlds__make_hlds__add_type__MaybeJava_75 = hlds__make_hlds__add_type__MaybeJavaA_65;
#line 533 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
                              }
#line 533 "add_type.m"
                          }
#line 488 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 488 "add_type.m"
                          {
#line 532 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeCSharpA_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                              {
#line 532 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeCSharp_76 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
                                else
#line 534 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpB_71;
#line 532 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
                              }
#line 532 "add_type.m"
                            else
#line 533 "add_type.m"
                              {
#line 533 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_71 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
                                  {
#line 533 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeCSharp_76 = hlds__make_hlds__add_type__MaybeCSharpA_66;
#line 533 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
                                  }
#line 533 "add_type.m"
                              }
#line 488 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 488 "add_type.m"
                              {
#line 532 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeErlangA_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                                  {
#line 532 "add_type.m"
                                    if ((hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeErlang_77 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 532 "add_type.m"
                                    else
#line 534 "add_type.m"
                                      hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangB_72;
#line 532 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 532 "add_type.m"
                                  }
#line 532 "add_type.m"
                                else
#line 533 "add_type.m"
                                  {
#line 533 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_72 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 533 "add_type.m"
                                      {
#line 533 "add_type.m"
                                        hlds__make_hlds__add_type__MaybeErlang_77 = hlds__make_hlds__add_type__MaybeErlangA_67;
#line 533 "add_type.m"
                                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 533 "add_type.m"
                                      }
#line 533 "add_type.m"
                                  }
#line 488 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 488 "add_type.m"
                                  {
#line 527 "add_type.m"
                                    {
#line 527 "add_type.m"
                                      hlds__make_hlds__add_type__ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 527 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeIL_73));
#line 527 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_74));
#line 527 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_75));
#line 527 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_76));
#line 527 "add_type.m"
                                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_77));
#line 527 "add_type.m"
                                    }
#line 499 "add_type.m"
                                    hlds__make_hlds__add_type__V_19_19 = (MR_Integer) 1;
#line 499 "add_type.m"
                                    {
#line 499 "add_type.m"
                                      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_1, hlds__make_hlds__add_type__ForeignTypeBody_13, &hlds__make_hlds__add_type__V_58_58);
                                    }
#line 499 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_19_19 == hlds__make_hlds__add_type__V_58_58);
#line 499 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 500 "add_type.m"
                                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MakeOptInterface_2 == (MR_Integer) 0);
#line 503 "add_type.m"
                                    if (hlds__make_hlds__add_type__succeeded)
#line 502 "add_type.m"
                                      *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_13);
#line 503 "add_type.m"
                                    else
#line 504 "add_type.m"
                                      {
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_20_20;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_49_49;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_50_50;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_53_53;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_54_54;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_55_55;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_56_56;
#line 504 "add_type.m"
                                        MR_Word hlds__make_hlds__add_type__V_57_57;

#line 504 "add_type.m"
                                        {
#line 504 "add_type.m"
                                          hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_13));
#line 504 "add_type.m"
                                        }
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_55_55 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_56_56 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 504 "add_type.m"
                                        hlds__make_hlds__add_type__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 504 "add_type.m"
                                        {
#line 504 "add_type.m"
                                          MR_Word base;
#line 504 "add_type.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 504 "add_type.m"
                                          *hlds__make_hlds__add_type__HeadVar__5_5 = base;
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_49_49));
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_50_50));
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__V_55_55 | ((hlds__make_hlds__add_type__V_56_56 << (MR_Integer) 1)))));
#line 504 "add_type.m"
                                          MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 504 "add_type.m"
                                        }
#line 504 "add_type.m"
                                      }
#line 503 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 488 "add_type.m"
                                  }
#line 488 "add_type.m"
                              }
#line 488 "add_type.m"
                          }
#line 488 "add_type.m"
                      }
#line 488 "add_type.m"
                  }
#line 488 "add_type.m"
              }
#line 488 "add_type.m"
            else
#line 488 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 511 "add_type.m"
              {
#line 511 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body1_39 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 511 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body_40;

#line 512 "add_type.m"
                {
#line 512 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(hlds__make_hlds__add_type__V_59_59, hlds__make_hlds__add_type__Body1_39, &hlds__make_hlds__add_type__Body_40);
                }
#line 511 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 511 "add_type.m"
                  {
#line 511 "add_type.m"
                    *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_40);
#line 511 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 511 "add_type.m"
                  }
#line 511 "add_type.m"
              }
#line 488 "add_type.m"
            else
#line 488 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 488 "add_type.m"
          }
#line 488 "add_type.m"
        else
#line 488 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 488 "add_type.m"
        return hlds__make_hlds__add_type__succeeded;
#line 488 "add_type.m"
      }
#line 488 "add_type.m"
      break;
#line 488 "add_type.m"
    }
#line 483 "add_type.m"
}

#line 444 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_8_p_0(
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_10,
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_11,
#line 444 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_12,
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24,
#line 444 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25,
#line 444 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26,
#line 444 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27)
#line 444 "add_type.m"
{
#line 450 "add_type.m"
  {
#line 450 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 450 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Name_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 450 "add_type.m"
    MR_Integer hlds__make_hlds__add_type__Arity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 450 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_17;
#line 450 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Target_18;
#line 454 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_68_68;

#line 452 "add_type.m"
    {
#line 452 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24, &hlds__make_hlds__add_type__Globals_17);
    }
#line 453 "add_type.m"
    {
#line 453 "add_type.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_17, &hlds__make_hlds__add_type__Target_18);
    }
#line 454 "add_type.m"
    {
#line 454 "add_type.m"
      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_18, hlds__make_hlds__add_type__ForeignTypeBody_10, &hlds__make_hlds__add_type__V_68_68);
    }
#line 454 "add_type.m"
    hlds__make_hlds__add_type__succeeded = ((MR_Integer) 1 == hlds__make_hlds__add_type__V_68_68);
#line 456 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 455 "add_type.m"
      {
#line 455 "add_type.m"
        *hlds__make_hlds__add_type__FoundInvalidType_12 = (MR_Integer) 0;
#line 455 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26;
#line 455 "add_type.m"
      }
#line 456 "add_type.m"
    else
#line 462 "add_type.m"
      {
#line 462 "add_type.m"
        MR_String hlds__make_hlds__add_type__LangStr_19;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__MainPieces_20;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Msg_22;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_23;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_31_31;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_32_32;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_33_33;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_36_36;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_39_39;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_40_40;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_41_41;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_53_53;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_54_54;
#line 462 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_65_65;

#line 458 "add_type.m"
        if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 0))
#line 457 "add_type.m"
          hlds__make_hlds__add_type__LangStr_19 = (MR_String) "C";
#line 458 "add_type.m"
        else
#line 458 "add_type.m"
        if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 2))
#line 459 "add_type.m"
          hlds__make_hlds__add_type__LangStr_19 = (MR_String) "C#";
#line 458 "add_type.m"
        else
#line 458 "add_type.m"
        if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 4))
#line 461 "add_type.m"
          hlds__make_hlds__add_type__LangStr_19 = (MR_String) "Erlang";
#line 458 "add_type.m"
        else
#line 458 "add_type.m"
        if ((hlds__make_hlds__add_type__Target_18 == (MR_Integer) 1))
#line 458 "add_type.m"
          hlds__make_hlds__add_type__LangStr_19 = (MR_String) "IL";
#line 458 "add_type.m"
        else
#line 460 "add_type.m"
          hlds__make_hlds__add_type__LangStr_19 = (MR_String) "Java";
#line 463 "add_type.m"
        {
#line 463 "add_type.m"
          hlds__make_hlds__add_type__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_32_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__LangStr_19));
#line 463 "add_type.m"
        }
#line 465 "add_type.m"
        {
#line 465 "add_type.m"
          hlds__make_hlds__add_type__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_15));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_16));
#line 465 "add_type.m"
        }
#line 465 "add_type.m"
        {
#line 465 "add_type.m"
          hlds__make_hlds__add_type__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_40_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_40_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_41_41));
#line 465 "add_type.m"
        }
#line 465 "add_type.m"
        {
#line 465 "add_type.m"
          hlds__make_hlds__add_type__V_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_39_39, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_40_40));
#line 465 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_39_39, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[50])));
#line 465 "add_type.m"
        }
#line 464 "add_type.m"
        {
#line 464 "add_type.m"
          hlds__make_hlds__add_type__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_36_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 464 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_36_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_39_39));
#line 464 "add_type.m"
        }
#line 464 "add_type.m"
        {
#line 464 "add_type.m"
          hlds__make_hlds__add_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 464 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[70])));
#line 464 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_36_36));
#line 464 "add_type.m"
        }
#line 463 "add_type.m"
        {
#line 463 "add_type.m"
          hlds__make_hlds__add_type__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_31_31, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_32_32));
#line 463 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_31_31, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_33_33));
#line 463 "add_type.m"
        }
#line 463 "add_type.m"
        {
#line 463 "add_type.m"
          hlds__make_hlds__add_type__MainPieces_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 463 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[69])));
#line 463 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_31_31));
#line 463 "add_type.m"
        }
#line 469 "add_type.m"
        {
#line 469 "add_type.m"
          hlds__make_hlds__add_type__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 469 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_54_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__MainPieces_20));
#line 469 "add_type.m"
        }
#line 469 "add_type.m"
        {
#line 469 "add_type.m"
          hlds__make_hlds__add_type__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 469 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_53_53, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_54_54));
#line 469 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[74])));
#line 469 "add_type.m"
        }
#line 468 "add_type.m"
        {
#line 468 "add_type.m"
          hlds__make_hlds__add_type__Msg_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 468 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_22, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_11));
#line 468 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 468 "add_type.m"
        }
#line 472 "add_type.m"
        {
#line 472 "add_type.m"
          hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 472 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_22));
#line 472 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 472 "add_type.m"
        }
#line 471 "add_type.m"
        {
#line 471 "add_type.m"
          hlds__make_hlds__add_type__Spec_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 471 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 471 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 471 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_23, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 471 "add_type.m"
        }
#line 473 "add_type.m"
        {
#line 473 "add_type.m"
          MR_Word base;
#line 473 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_27 = base;
#line 473 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_23));
#line 473 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_26));
#line 473 "add_type.m"
        }
#line 474 "add_type.m"
        *hlds__make_hlds__add_type__FoundInvalidType_12 = (MR_Integer) 1;
#line 462 "add_type.m"
      }
#line 450 "add_type.m"
    *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_25 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_24;
#line 450 "add_type.m"
  }
#line 444 "add_type.m"
}

#line 347 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 347 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 347 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4)
#line 347 "add_type.m"
{
#line 355 "add_type.m"
  {
#line 355 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));

#line 355 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 354 "add_type.m"
      {
#line 354 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 354 "add_type.m"
        {
#line 354 "add_type.m"
          hlds__make_hlds__add_type__V_5_5 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
        }
#line 354 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_5_5 == (MR_Integer) 0);
#line 354 "add_type.m"
      }
#line 355 "add_type.m"
    else
#line 357 "add_type.m"
      {
#line 355 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldStatus_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 357 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 356 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__NewDefnStatus_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 357 "add_type.m"
        else
#line 358 "add_type.m"
          {
#line 358 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_6_6;
#line 358 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_7_7;

#line 358 "add_type.m"
            {
#line 358 "add_type.m"
              hlds__make_hlds__add_type__V_6_6 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus_3);
            }
#line 358 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_6_6 == (MR_Integer) 0);
#line 358 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 358 "add_type.m"
              {
#line 359 "add_type.m"
                {
#line 359 "add_type.m"
                  hlds__make_hlds__add_type__V_7_7 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
                }
#line 359 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_7_7 == (MR_Integer) 0);
#line 358 "add_type.m"
              }
#line 358 "add_type.m"
          }
#line 357 "add_type.m"
      }
#line 355 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 355 "add_type.m"
  }
#line 347 "add_type.m"
}

#line 318 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 318 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 318 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4)
#line 318 "add_type.m"
{
#line 321 "add_type.m"
  {
#line 321 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 321 "add_type.m"
    MR_Word hlds__make_hlds__add_type__OldIsSolverType_5;

#line 329 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 330 "add_type.m"
      {
#line 330 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 1)));

#line 334 "add_type.m"
        if ((hlds__make_hlds__add_type__Details_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 339 "add_type.m"
          hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 334 "add_type.m"
        else
#line 334 "add_type.m"
        if ((hlds__make_hlds__add_type__Details_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "add_type.m"
          hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 334 "add_type.m"
        else
#line 336 "add_type.m"
          hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 330 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 330 "add_type.m"
      }
#line 329 "add_type.m"
    else
#line 329 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 329 "add_type.m"
      {
#line 329 "add_type.m"
        hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 329 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 329 "add_type.m"
      }
#line 329 "add_type.m"
    else
#line 329 "add_type.m"
      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 321 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 329 "add_type.m"
      {
#line 329 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 330 "add_type.m"
          {
#line 330 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 1)));

#line 334 "add_type.m"
            if ((hlds__make_hlds__add_type__Details_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 339 "add_type.m"
              {
#line 324 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 324 "add_type.m"
                hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 339 "add_type.m"
              }
#line 334 "add_type.m"
            else
#line 334 "add_type.m"
            if ((hlds__make_hlds__add_type__Details_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 333 "add_type.m"
              {
#line 324 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 324 "add_type.m"
                hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 333 "add_type.m"
              }
#line 334 "add_type.m"
            else
#line 336 "add_type.m"
              {
#line 324 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 324 "add_type.m"
                hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 336 "add_type.m"
              }
#line 330 "add_type.m"
          }
#line 329 "add_type.m"
        else
#line 329 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 329 "add_type.m"
          {
#line 324 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 324 "add_type.m"
            hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 329 "add_type.m"
          }
#line 329 "add_type.m"
        else
#line 329 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 329 "add_type.m"
      }
#line 321 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 321 "add_type.m"
  }
#line 318 "add_type.m"
}

#line 311 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 311 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 311 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 311 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 311 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4)
#line 311 "add_type.m"
{
#line 314 "add_type.m"
  {
#line 314 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 314 "add_type.m"
    *hlds__make_hlds__add_type__OldBody_2 = hlds__make_hlds__add_type__OldBody_5;
#line 314 "add_type.m"
    *hlds__make_hlds__add_type__Body_4 = hlds__make_hlds__add_type__Body_6;
#line 314 "add_type.m"
  }
#line 311 "add_type.m"
}

#line 289 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void)
#line 289 "add_type.m"
{
#line 291 "add_type.m"
  {
#line 291 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 291 "add_type.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[49]);
#line 291 "add_type.m"
  }
#line 289 "add_type.m"
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
#line 548 "add_type.m"
  {
#line 548 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 548 "add_type.m"
    MR_Word hlds__make_hlds__add_type__CombinedStatus_7;

#line 555 "add_type.m"
    if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 625 "add_type.m"
      {
#line 623 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 625 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 624 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 625 "add_type.m"
        else
#line 626 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 625 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 625 "add_type.m"
      }
#line 555 "add_type.m"
    else
#line 555 "add_type.m"
    if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 635 "add_type.m"
      {
#line 633 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Section_30;

#line 633 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2)));
#line 633 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 633 "add_type.m"
          {
#line 633 "add_type.m"
            hlds__make_hlds__add_type__Section_30 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusB_5, (MR_Integer) 0)));
#line 634 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 633 "add_type.m"
          }
#line 633 "add_type.m"
        else
#line 636 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 635 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 635 "add_type.m"
      }
#line 555 "add_type.m"
    else
#line 555 "add_type.m"
    if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 570 "add_type.m"
      {
#line 570 "add_type.m"
        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 570 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 570 "add_type.m"
      }
#line 555 "add_type.m"
    else
#line 555 "add_type.m"
    if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 571 "add_type.m"
      {
#line 571 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Status3_20;

#line 610 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 617 "add_type.m"
          {
#line 617 "add_type.m"
            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 617 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 617 "add_type.m"
          }
#line 610 "add_type.m"
        else
#line 610 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 616 "add_type.m"
          {
#line 616 "add_type.m"
            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 616 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 616 "add_type.m"
          }
#line 610 "add_type.m"
        else
#line 610 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 614 "add_type.m"
          {
#line 614 "add_type.m"
            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 614 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 614 "add_type.m"
          }
#line 610 "add_type.m"
        else
#line 610 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 611 "add_type.m"
          {
#line 611 "add_type.m"
            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 611 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 611 "add_type.m"
          }
#line 610 "add_type.m"
        else
#line 610 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 613 "add_type.m"
          {
#line 613 "add_type.m"
            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 613 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 613 "add_type.m"
          }
#line 610 "add_type.m"
        else
#line 610 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "add_type.m"
          {
#line 615 "add_type.m"
            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 615 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 615 "add_type.m"
          }
#line 610 "add_type.m"
        else
#line 610 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 612 "add_type.m"
          {
#line 612 "add_type.m"
            hlds__make_hlds__add_type__Status3_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 612 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 612 "add_type.m"
          }
#line 610 "add_type.m"
        else
#line 610 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 571 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 571 "add_type.m"
          {
#line 573 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status3_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
#line 575 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 574 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 575 "add_type.m"
            else
#line 576 "add_type.m"
              hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__Status3_20;
#line 575 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 571 "add_type.m"
          }
#line 571 "add_type.m"
      }
#line 555 "add_type.m"
    else
#line 555 "add_type.m"
    if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 610 "add_type.m"
      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 617 "add_type.m"
        {
#line 617 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 617 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 617 "add_type.m"
        }
#line 610 "add_type.m"
      else
#line 610 "add_type.m"
      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 616 "add_type.m"
        {
#line 616 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 616 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 616 "add_type.m"
        }
#line 610 "add_type.m"
      else
#line 610 "add_type.m"
      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 614 "add_type.m"
        {
#line 614 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 614 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 614 "add_type.m"
        }
#line 610 "add_type.m"
      else
#line 610 "add_type.m"
      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 611 "add_type.m"
        {
#line 611 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
#line 611 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 611 "add_type.m"
        }
#line 610 "add_type.m"
      else
#line 610 "add_type.m"
      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 613 "add_type.m"
        {
#line 613 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 613 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 613 "add_type.m"
        }
#line 610 "add_type.m"
      else
#line 610 "add_type.m"
      if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "add_type.m"
        {
#line 615 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 615 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 615 "add_type.m"
        }
#line 610 "add_type.m"
      else
#line 610 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 612 "add_type.m"
        {
#line 612 "add_type.m"
          hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
#line 612 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 612 "add_type.m"
        }
#line 610 "add_type.m"
      else
#line 610 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 555 "add_type.m"
    else
#line 555 "add_type.m"
    if ((hlds__make_hlds__add_type__StatusA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "add_type.m"
      {
#line 578 "add_type.m"
        hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 578 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 578 "add_type.m"
      }
#line 555 "add_type.m"
    else
#line 555 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusA_4)) == (MR_mktag((MR_Integer) 2))))
#line 555 "add_type.m"
      {
#line 555 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ImportLocn_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__StatusA_4, (MR_Integer) 0)));

#line 563 "add_type.m"
        if ((hlds__make_hlds__add_type__ImportLocn_11 == (MR_Integer) 3))
#line 564 "add_type.m"
          {
#line 566 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[2]);
#line 564 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 564 "add_type.m"
          }
#line 563 "add_type.m"
        else
#line 589 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 605 "add_type.m"
          {
#line 605 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 605 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 605 "add_type.m"
          }
#line 589 "add_type.m"
        else
#line 589 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 601 "add_type.m"
          {
#line 602 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[3]);
#line 601 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 601 "add_type.m"
          }
#line 589 "add_type.m"
        else
#line 589 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 596 "add_type.m"
          {
#line 596 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 596 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 596 "add_type.m"
          }
#line 589 "add_type.m"
        else
#line 589 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 592 "add_type.m"
          {
#line 593 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(2), &hlds__make_hlds__add_type_scalar_common_3[4]);
#line 592 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 592 "add_type.m"
          }
#line 589 "add_type.m"
        else
#line 589 "add_type.m"
        if ((hlds__make_hlds__add_type__StatusB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 599 "add_type.m"
          {
#line 599 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 599 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 599 "add_type.m"
          }
#line 589 "add_type.m"
        else
#line 589 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__StatusB_5)) == (MR_mktag((MR_Integer) 2))))
#line 590 "add_type.m"
          {
#line 590 "add_type.m"
            hlds__make_hlds__add_type__CombinedStatus_7 = hlds__make_hlds__add_type__StatusB_5;
#line 590 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 590 "add_type.m"
          }
#line 589 "add_type.m"
        else
#line 589 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 555 "add_type.m"
      }
#line 555 "add_type.m"
    else
#line 555 "add_type.m"
      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 548 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 547 "add_type.m"
      *hlds__make_hlds__add_type__Status_6 = hlds__make_hlds__add_type__CombinedStatus_7;
#line 548 "add_type.m"
    else
#line 549 "add_type.m"
      {
#line 549 "add_type.m"
        {
#line 549 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.combine_status\'/3", (MR_String) "unexpected status for type definition");
#line 549 "add_type.m"
          return;
        }
#line 549 "add_type.m"
      }
#line 548 "add_type.m"
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
#line 539 "add_type.m"
  {
#line 539 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__Status_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));

#line 539 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 538 "add_type.m"
      *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 539 "add_type.m"
    else
#line 541 "add_type.m"
      {
#line 539 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_5_5;

#line 539 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Status_3)) == (MR_mktag((MR_Integer) 2)));
#line 539 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 539 "add_type.m"
          {
#line 539 "add_type.m"
            hlds__make_hlds__add_type__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__Status_3, (MR_Integer) 0)));
#line 540 "add_type.m"
            *hlds__make_hlds__add_type__AbstractStatus_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 539 "add_type.m"
          }
#line 539 "add_type.m"
        else
#line 542 "add_type.m"
          *hlds__make_hlds__add_type__AbstractStatus_4 = hlds__make_hlds__add_type__Status_3;
#line 541 "add_type.m"
      }
#line 539 "add_type.m"
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
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_58,
#line 42 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59,
#line 42 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60,
#line 42 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_61,
#line 42 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62,
#line 42 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63)
#line 42 "add_type.m"
{
#line 363 "add_type.m"
  {
#line 363 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Context_14;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__TVarSet_15;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Args_16;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__KindMap_17;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Body_18;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Status_19;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NeedQual_20;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_21;
#line 363 "add_type.m"
    MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75;

#line 364 "add_type.m"
    {
#line 364 "add_type.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Context_14);
    }
#line 365 "add_type.m"
    {
#line 365 "add_type.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__TVarSet_15);
    }
#line 366 "add_type.m"
    {
#line 366 "add_type.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Args_16);
    }
#line 367 "add_type.m"
    {
#line 367 "add_type.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__KindMap_17);
    }
#line 368 "add_type.m"
    {
#line 368 "add_type.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Body_18);
    }
#line 369 "add_type.m"
    {
#line 369 "add_type.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Status_19);
    }
#line 370 "add_type.m"
    {
#line 370 "add_type.m"
      hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__NeedQual_20);
    }
#line 371 "add_type.m"
    {
#line 371 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__Globals_21);
    }
#line 412 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) == (MR_mktag((MR_Integer) 1))))
#line 374 "add_type.m"
      {
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConsList_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)));
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__UserEqCmp_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 4)));
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ReservedTag_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Ctors0_31;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PQInfo_32;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorFields0_33;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__TypeCtorSymName_34;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_37;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorFields_39;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Ctors_40;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorAddSpecs_41;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71;
#line 374 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72;
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 1)));
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 2)));
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 3)));
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type___DirectArgCtors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 5)));
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 373 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 7)));
#line 378 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_35_35;
#line 409 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorName_44;
#line 409 "add_type.m"
        MR_Word hlds__make_hlds__add_type__CtorArgType_45;
#line 402 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_46_46;

#line 375 "add_type.m"
        {
#line 375 "add_type.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__Ctors0_31);
        }
#line 376 "add_type.m"
        {
#line 376 "add_type.m"
          hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__PQInfo_32);
        }
#line 377 "add_type.m"
        {
#line 377 "add_type.m"
          hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__CtorFields0_33);
        }
#line 378 "add_type.m"
        hlds__make_hlds__add_type__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 378 "add_type.m"
        hlds__make_hlds__add_type__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 382 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 383 "add_type.m"
          {
#line 383 "add_type.m"
            MR_String hlds__make_hlds__add_type__V_38_38;

#line 383 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 0)));
#line 383 "add_type.m"
            hlds__make_hlds__add_type__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 1)));
#line 383 "add_type.m"
          }
#line 382 "add_type.m"
        else
#line 380 "add_type.m"
          {
#line 381 "add_type.m"
            {
#line 381 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.process_type_defn\'/8", (MR_String) "unqualified TypeCtorSymName");
#line 381 "add_type.m"
              return;
            }
#line 380 "add_type.m"
          }
#line 385 "add_type.m"
        {
#line 385 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__TypeCtorModuleName_37, hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Args_16, hlds__make_hlds__add_type__KindMap_17, hlds__make_hlds__add_type__NeedQual_20, hlds__make_hlds__add_type__PQInfo_32, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__CtorFields0_33, &hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__Ctors0_31, &hlds__make_hlds__add_type__Ctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_type__CtorAddSpecs_41);
        }
#line 388 "add_type.m"
        {
#line 388 "add_type.m"
          hlds__hlds_module__module_info_set_cons_table_3_p_0(hlds__make_hlds__add_type__Ctors_40, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71);
        }
#line 389 "add_type.m"
        {
#line 389 "add_type.m"
          hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_71_71, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72);
        }
#line 393 "add_type.m"
        if ((hlds__make_hlds__add_type__CtorAddSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "add_type.m"
          {
#line 392 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_58;
#line 392 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62;
#line 392 "add_type.m"
          }
#line 393 "add_type.m"
        else
#line 394 "add_type.m"
          {
#line 395 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59 = (MR_Integer) 1;
#line 396 "add_type.m"
            {
#line 396 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_type__CtorAddSpecs_41, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62);
            }
#line 394 "add_type.m"
          }
#line 402 "add_type.m"
        {
#line 402 "add_type.m"
          hlds__make_hlds__add_type__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ReservedTag_28, hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__UserEqCmp_26, &hlds__make_hlds__add_type__CtorName_44, &hlds__make_hlds__add_type__CtorArgType_45, &hlds__make_hlds__add_type__V_46_46);
        }
#line 409 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 405 "add_type.m"
          {
#line 405 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagType_47;
#line 405 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagTypes0_48;
#line 405 "add_type.m"
            MR_Word hlds__make_hlds__add_type__NoTagTypes_49;

#line 405 "add_type.m"
            {
#line 405 "add_type.m"
              hlds__make_hlds__add_type__NoTagType_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 405 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Args_16));
#line 405 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorName_44));
#line 405 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 2) = ((MR_Box) (hlds__make_hlds__add_type__CtorArgType_45));
#line 405 "add_type.m"
            }
#line 406 "add_type.m"
            {
#line 406 "add_type.m"
              hlds__hlds_module__module_info_get_no_tag_types_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72, &hlds__make_hlds__add_type__NoTagTypes0_48);
            }
#line 407 "add_type.m"
            {
#line 407 "add_type.m"
              mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_9)), ((MR_Box) (hlds__make_hlds__add_type__NoTagType_47)), hlds__make_hlds__add_type__NoTagTypes0_48, &hlds__make_hlds__add_type__NoTagTypes_49);
            }
#line 408 "add_type.m"
            {
#line 408 "add_type.m"
              hlds__hlds_module__module_info_set_no_tag_types_3_p_0(hlds__make_hlds__add_type__NoTagTypes_49, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75);
            }
#line 405 "add_type.m"
          }
#line 409 "add_type.m"
        else
#line 409 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72;
#line 374 "add_type.m"
      }
#line 412 "add_type.m"
    else
#line 412 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) == (MR_mktag((MR_Integer) 2))))
#line 425 "add_type.m"
      {
#line 425 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_58;
#line 425 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60;
#line 425 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62;
#line 425 "add_type.m"
      }
#line 412 "add_type.m"
    else
#line 412 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) == (MR_mktag((MR_Integer) 0))))
#line 413 "add_type.m"
      {
#line 413 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ForeignTypeBody_50 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__Body_18), (MR_Integer) 0);
#line 413 "add_type.m"
        MR_Word hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_51;

#line 414 "add_type.m"
        {
#line 414 "add_type.m"
          hlds__make_hlds__add_type__check_foreign_type_8_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ForeignTypeBody_50, hlds__make_hlds__add_type__Context_14, &hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_51, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63);
        }
#line 419 "add_type.m"
        if ((hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_51 == (MR_Integer) 0))
#line 420 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_58;
#line 419 "add_type.m"
        else
#line 418 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59 = (MR_Integer) 1;
#line 413 "add_type.m"
      }
#line 412 "add_type.m"
    else
#line 412 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 423 "add_type.m"
      {
#line 423 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_58;
#line 423 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60;
#line 423 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62;
#line 423 "add_type.m"
      }
#line 412 "add_type.m"
    else
#line 424 "add_type.m"
      {
#line 424 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_58;
#line 424 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_60;
#line 424 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_63 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_62;
#line 424 "add_type.m"
      }
#line 430 "add_type.m"
    if ((*hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_59 == (MR_Integer) 0))
#line 431 "add_type.m"
      {
#line 431 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ArgTypes_56;
#line 431 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Type_57;
#line 431 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_76_76;

#line 435 "add_type.m"
        {
#line 435 "add_type.m"
          hlds__make_hlds__add_type__V_76_76 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
        }
#line 435 "add_type.m"
        {
#line 435 "add_type.m"
          parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_type__V_76_76, hlds__make_hlds__add_type__Args_16, &hlds__make_hlds__add_type__ArgTypes_56);
        }
#line 436 "add_type.m"
        {
#line 436 "add_type.m"
          parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ArgTypes_56, &hlds__make_hlds__add_type__Type_57);
        }
#line 437 "add_type.m"
        {
#line 437 "add_type.m"
          hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Type_57, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__Body_18, hlds__make_hlds__add_type__Context_14, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_61);
#line 437 "add_type.m"
          return;
        }
#line 431 "add_type.m"
      }
#line 430 "add_type.m"
    else
#line 429 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_61 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_75_75;
#line 363 "add_type.m"
  }
#line 42 "add_type.m"
}

#line 269 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(
#line 269 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 269 "add_type.m"
{
#line 269 "add_type.m"
  {
#line 269 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 269 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0, 1);
#line 269 "add_type.m"
  }
#line 269 "add_type.m"
}

#line 271 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3(
#line 271 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 271 "add_type.m"
{
#line 271 "add_type.m"
  {
#line 271 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 271 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_90 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_90);
#line 271 "add_type.m"
    {
#line 271 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(hlds__make_hlds__add_type__env_ptr);
#line 271 "add_type.m"
      return;
    }
#line 271 "add_type.m"
  }
#line 271 "add_type.m"
}

#line 272 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(
#line 272 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 272 "add_type.m"
{
#line 272 "add_type.m"
  {
#line 272 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 272 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1, 1);
#line 272 "add_type.m"
  }
#line 272 "add_type.m"
}

#line 272 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5(
#line 272 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 272 "add_type.m"
{
#line 272 "add_type.m"
  {
#line 272 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 5376 "hlds.make_hlds.add_type.c"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_280_280 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 272 "add_type.m"
    {
#line 272 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_280_280, ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Var_90)), ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_278_278)));
    }
#line 272 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 272 "add_type.m"
      {
#line 272 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_10_p_0_4(hlds__make_hlds__add_type__env_ptr);
#line 272 "add_type.m"
        return;
      }
#line 272 "add_type.m"
  }
#line 272 "add_type.m"
}

#line 272 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(
#line 272 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 272 "add_type.m"
{
#line 272 "add_type.m"
  {
#line 272 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 272 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_1) == 0)
#line 272 "add_type.m"
      {
#line 272 "add_type.m"
        {
#line 272 "add_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_89, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__V_278_278, hlds__make_hlds__add_type__module_add_type_defn_10_p_0_5, hlds__make_hlds__add_type__env_ptr);
        }
#line 272 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 272 "add_type.m"
      }
#line 272 "add_type.m"
    else
#line 272 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 272 "add_type.m"
  }
#line 272 "add_type.m"
}

#line 269 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_2(
#line 269 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 269 "add_type.m"
{
#line 269 "add_type.m"
  {
#line 269 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 272 "add_type.m"
    {
#line 272 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_10_p_0_6(hlds__make_hlds__add_type__env_ptr);
    }
#line 272 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded);
#line 272 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 272 "add_type.m"
      {
#line 272 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_10_p_0_1(hlds__make_hlds__add_type__env_ptr);
#line 272 "add_type.m"
        return;
      }
#line 269 "add_type.m"
  }
#line 269 "add_type.m"
}

#line 269 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(
#line 269 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 269 "add_type.m"
{
#line 269 "add_type.m"
  {
#line 269 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 269 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__commit_0) == 0)
#line 269 "add_type.m"
      {
#line 270 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 269 "add_type.m"
        if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 269 "add_type.m"
          {
#line 269 "add_type.m"
            (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 2)));
#line 269 "add_type.m"
            if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 269 "add_type.m"
              {
#line 269 "add_type.m"
                (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__EqvType_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 0)));
#line 271 "add_type.m"
                {
#line 271 "add_type.m"
                  mercury__list__member_2_p_1((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_274_274, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__conv0_Var_90, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, hlds__make_hlds__add_type__module_add_type_defn_10_p_0_3, hlds__make_hlds__add_type__env_ptr);
                }
#line 269 "add_type.m"
              }
#line 269 "add_type.m"
          }
#line 269 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_FALSE;
#line 269 "add_type.m"
      }
#line 269 "add_type.m"
    else
#line 269 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = MR_TRUE;
#line 269 "add_type.m"
  }
#line 269 "add_type.m"
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
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94,
#line 35 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95,
#line 35 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_96,
#line 35 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97)
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
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_135_135;
#line 81 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_275_275;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Ctors_35;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeUserUC_36;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constructor_38;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_100_100;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 106 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_102_102;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 106 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_277_277;
#line 106 "add_type.m"
      MR_Word hlds__make_hlds__add_type___MaybeDirectArg_37;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_269_269;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_270_270;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_271_271;
#line 108 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_272_272;
#line 108 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_273_273;
#line 109 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_39_39;
#line 155 "add_type.m"
      MR_Word hlds__make_hlds__add_type__OldDefn0_45;
#line 168 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_58_58;

#line 82 "add_type.m"
      {
#line 82 "add_type.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, &hlds__make_hlds__add_type__Globals_20);
      }
#line 5618 "hlds.make_hlds.add_type.c"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_274_274 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 83 "add_type.m"
      {
#line 83 "add_type.m"
        mercury__list__length_2_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_274_274, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, &hlds__make_hlds__add_type__Arity_21);
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
          MR_String hlds__make_hlds__add_type__V_98_98;

#line 91 "add_type.m"
          {
#line 91 "add_type.m"
            hlds__make_hlds__add_type__V_98_98 = mercury__term__context_file_1_f_0(hlds__make_hlds__add_type__Context_15);
          }
#line 91 "add_type.m"
          {
#line 91 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = mercury__string__suffix_2_p_0(hlds__make_hlds__add_type__V_98_98, (MR_String) ".int2");
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
#line 98 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 97 "add_type.m"
        {
#line 97 "add_type.m"
          hlds__make_hlds__add_type__make_status_abstract_2_p_0(hlds__make_hlds__add_type__Status0_16, &hlds__make_hlds__add_type__Status1_34);
        }
#line 98 "add_type.m"
      else
#line 99 "add_type.m"
        hlds__make_hlds__add_type__Status1_34 = hlds__make_hlds__add_type__Status0_16;
#line 106 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeDefn_14)) == (MR_mktag((MR_Integer) 0)));
#line 106 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 106 "add_type.m"
        {
#line 106 "add_type.m"
          hlds__make_hlds__add_type__Ctors_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 0)));
#line 106 "add_type.m"
          hlds__make_hlds__add_type__MaybeUserUC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 1)));
#line 106 "add_type.m"
          hlds__make_hlds__add_type___MaybeDirectArg_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_14, (MR_Integer) 2)));
#line 107 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Ctors_35)) == (MR_mktag((MR_Integer) 1)));
#line 107 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 107 "add_type.m"
            {
#line 107 "add_type.m"
              hlds__make_hlds__add_type__Constructor_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_35, (MR_Integer) 0)));
#line 107 "add_type.m"
              hlds__make_hlds__add_type__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_35, (MR_Integer) 1)));
#line 107 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_100_100 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 106 "add_type.m"
                {
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_269_269 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 0)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_270_270 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 1)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_271_271 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 2)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 3)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_272_272 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 4)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_273_273 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_38, (MR_Integer) 5)));
#line 108 "add_type.m"
                  hlds__make_hlds__add_type__V_102_102 = (MR_Integer) 0;
#line 5722 "hlds.make_hlds.add_type.c"
                  hlds__make_hlds__add_type__TypeCtorInfo_275_275 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 108 "add_type.m"
                  {
#line 108 "add_type.m"
                    mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_275_275, hlds__make_hlds__add_type__V_101_101, &hlds__make_hlds__add_type__V_277_277);
                  }
#line 108 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_102_102 == hlds__make_hlds__add_type__V_277_277);
#line 106 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 106 "add_type.m"
                    {
#line 109 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeUserUC_36)) == (MR_mktag((MR_Integer) 1)));
#line 109 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 109 "add_type.m"
                        {
#line 109 "add_type.m"
                          hlds__make_hlds__add_type__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeUserUC_36, (MR_Integer) 0)));
#line 111 "add_type.m"
                          {
#line 111 "add_type.m"
                            hlds__make_hlds__add_type__V_103_103 = hlds__hlds_pred__status_defined_in_this_module_1_f_0(hlds__make_hlds__add_type__Status0_16);
                          }
#line 111 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_103_103 == (MR_Integer) 1);
#line 109 "add_type.m"
                        }
#line 106 "add_type.m"
                    }
#line 106 "add_type.m"
                }
#line 107 "add_type.m"
            }
#line 106 "add_type.m"
        }
#line 126 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 116 "add_type.m"
        {
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMainPieces_40;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMsg_42;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummySpec_43;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_106_106;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_107_107;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_108_108;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_125_125;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_126_126;
#line 116 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_133_133;

#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_108_108, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 114 "add_type.m"
          }
#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_107_107 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_107_107, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_107_107, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_108_108));
#line 114 "add_type.m"
          }
#line 114 "add_type.m"
          {
#line 114 "add_type.m"
            hlds__make_hlds__add_type__V_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_106_106, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_107_107));
#line 114 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_106_106, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
#line 114 "add_type.m"
          }
#line 113 "add_type.m"
          {
#line 113 "add_type.m"
            hlds__make_hlds__add_type__DummyMainPieces_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 113 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_40, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 113 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_106_106));
#line 113 "add_type.m"
          }
#line 121 "add_type.m"
          {
#line 121 "add_type.m"
            hlds__make_hlds__add_type__V_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_126_126, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMainPieces_40));
#line 121 "add_type.m"
          }
#line 121 "add_type.m"
          {
#line 121 "add_type.m"
            hlds__make_hlds__add_type__V_125_125 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_125_125, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_126_126));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_125_125, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[61])));
#line 121 "add_type.m"
          }
#line 120 "add_type.m"
          {
#line 120 "add_type.m"
            hlds__make_hlds__add_type__DummyMsg_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 120 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_42, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 120 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_125_125));
#line 120 "add_type.m"
          }
#line 124 "add_type.m"
          {
#line 124 "add_type.m"
            hlds__make_hlds__add_type__V_133_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_133_133, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMsg_42));
#line 124 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_133_133, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 124 "add_type.m"
          }
#line 123 "add_type.m"
          {
#line 123 "add_type.m"
            hlds__make_hlds__add_type__DummySpec_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 123 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_43, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_133_133));
#line 123 "add_type.m"
          }
#line 125 "add_type.m"
          {
#line 125 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 125 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummySpec_43));
#line 125 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_135_135, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_96));
#line 125 "add_type.m"
          }
#line 116 "add_type.m"
        }
#line 126 "add_type.m"
      else
#line 126 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_Specs_135_135 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_96;
#line 129 "add_type.m"
      {
#line 129 "add_type.m"
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, &hlds__make_hlds__add_type__TypeTable0_44);
      }
#line 133 "add_type.m"
      {
#line 133 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_type__TypeTable0_44, hlds__make_hlds__add_type__TypeCtor_22, &hlds__make_hlds__add_type__OldDefn0_45);
      }
#line 155 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 135 "add_type.m"
        {
#line 135 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus_46;
#line 135 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody0_48;
#line 135 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody_49;

#line 135 "add_type.m"
          {
#line 135 "add_type.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldStatus_46);
          }
#line 136 "add_type.m"
          {
#line 136 "add_type.m"
            hlds__make_hlds__add_type__combine_status_3_p_0(hlds__make_hlds__add_type__Status1_34, hlds__make_hlds__add_type__OldStatus_46, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47);
          }
#line 137 "add_type.m"
          {
#line 137 "add_type.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldBody0_48);
          }
#line 138 "add_type.m"
          {
#line 138 "add_type.m"
            hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(hlds__make_hlds__add_type__OldBody0_48, &hlds__make_hlds__add_type__OldBody_49, hlds__make_hlds__add_type__Body0_23, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50);
          }
#line 139 "add_type.m"
          {
#line 139 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(hlds__make_hlds__add_type__OldBody_49, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50);
          }
#line 151 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 145 "add_type.m"
            {
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverPieces_51;
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverMsg_52;
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverSpec_53;
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_138_138;
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_139_139;
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_140_140;
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_159_159;
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_160_160;
#line 145 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_164_164;

#line 143 "add_type.m"
              {
#line 143 "add_type.m"
                hlds__make_hlds__add_type__V_140_140 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_140_140, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 143 "add_type.m"
              }
#line 143 "add_type.m"
              {
#line 143 "add_type.m"
                hlds__make_hlds__add_type__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_139_139, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_140_140));
#line 143 "add_type.m"
              }
#line 143 "add_type.m"
              {
#line 143 "add_type.m"
                hlds__make_hlds__add_type__V_138_138 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_138_138, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_139_139));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_138_138, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[23])));
#line 143 "add_type.m"
              }
#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__SolverPieces_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_51, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[62])));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_51, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_138_138));
#line 142 "add_type.m"
              }
#line 146 "add_type.m"
              {
#line 146 "add_type.m"
                hlds__make_hlds__add_type__V_160_160 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_160_160, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverPieces_51));
#line 146 "add_type.m"
              }
#line 146 "add_type.m"
              {
#line 146 "add_type.m"
                hlds__make_hlds__add_type__V_159_159 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_159_159, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_160_160));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_159_159, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 146 "add_type.m"
              }
#line 146 "add_type.m"
              {
#line 146 "add_type.m"
                hlds__make_hlds__add_type__SolverMsg_52 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_52, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 146 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_159_159));
#line 146 "add_type.m"
              }
#line 148 "add_type.m"
              {
#line 148 "add_type.m"
                hlds__make_hlds__add_type__V_164_164 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_164_164, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverMsg_52));
#line 148 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_164_164, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 148 "add_type.m"
              }
#line 147 "add_type.m"
              {
#line 147 "add_type.m"
                hlds__make_hlds__add_type__SolverSpec_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 147 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_53, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_164_164));
#line 147 "add_type.m"
              }
#line 149 "add_type.m"
              {
#line 149 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverSpec_53));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_135_135));
#line 149 "add_type.m"
              }
#line 150 "add_type.m"
              hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 145 "add_type.m"
            }
#line 151 "add_type.m"
          else
#line 152 "add_type.m"
            {
#line 152 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn_55;

#line 152 "add_type.m"
              {
#line 152 "add_type.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_type__OldBody_49, hlds__make_hlds__add_type__OldDefn0_45, &hlds__make_hlds__add_type__OldDefn_55);
              }
#line 153 "add_type.m"
              {
#line 153 "add_type.m"
                hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 153 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__OldDefn_55));
#line 153 "add_type.m"
              }
#line 152 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_135_135;
#line 152 "add_type.m"
            }
#line 135 "add_type.m"
        }
#line 155 "add_type.m"
      else
#line 156 "add_type.m"
        {
#line 156 "add_type.m"
          hlds__make_hlds__add_type__MaybeOldDefn_54 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 157 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 = hlds__make_hlds__add_type__Status1_34;
#line 158 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50 = hlds__make_hlds__add_type__Body0_23;
#line 156 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_135_135;
#line 156 "add_type.m"
        }
#line 163 "add_type.m"
      {
#line 163 "add_type.m"
        mercury__map__init_1_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__TypeInfo_274_274, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &hlds__make_hlds__add_type__KindMap_56);
      }
#line 164 "add_type.m"
      {
#line 164 "add_type.m"
        hlds__hlds_data__set_type_defn_9_p_0(hlds__make_hlds__add_type__TVarSet_11, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Args_13, hlds__make_hlds__add_type__KindMap_56, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, (MR_Integer) 0, hlds__make_hlds__add_type__NeedQual_17, hlds__make_hlds__add_type__Context_15, &hlds__make_hlds__add_type__TypeDefn1_57);
      }
#line 167 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__MaybeOldDefn_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 167 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 167 "add_type.m"
        {
#line 168 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 0)));
#line 168 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 168 "add_type.m"
            hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50), (MR_Integer) 0);
#line 167 "add_type.m"
        }
#line 177 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 172 "add_type.m"
        {
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclPieces_59;
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclMsg_60;
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclSpec_61;
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_170_170;
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_171_171;
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_172_172;
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_177_177;
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_178_178;
#line 172 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_182_182;

#line 171 "add_type.m"
          {
#line 171 "add_type.m"
            hlds__make_hlds__add_type__V_172_172 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_172_172, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_172_172, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 171 "add_type.m"
          }
#line 171 "add_type.m"
          {
#line 171 "add_type.m"
            hlds__make_hlds__add_type__V_171_171 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_171_171, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_171_171, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_172_172));
#line 171 "add_type.m"
          }
#line 171 "add_type.m"
          {
#line 171 "add_type.m"
            hlds__make_hlds__add_type__V_170_170 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_170_170, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_171_171));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_170_170, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[65])));
#line 171 "add_type.m"
          }
#line 170 "add_type.m"
          {
#line 170 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclPieces_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_59, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_59, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_170_170));
#line 170 "add_type.m"
          }
#line 173 "add_type.m"
          {
#line 173 "add_type.m"
            hlds__make_hlds__add_type__V_178_178 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_178_178, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclPieces_59));
#line 173 "add_type.m"
          }
#line 173 "add_type.m"
          {
#line 173 "add_type.m"
            hlds__make_hlds__add_type__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_177_177, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_178_178));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 173 "add_type.m"
          }
#line 173 "add_type.m"
          {
#line 173 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclMsg_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 173 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_60, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_177_177));
#line 173 "add_type.m"
          }
#line 175 "add_type.m"
          {
#line 175 "add_type.m"
            hlds__make_hlds__add_type__V_182_182 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_182_182, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclMsg_60));
#line 175 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_182_182, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 175 "add_type.m"
          }
#line 174 "add_type.m"
          {
#line 174 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclSpec_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 174 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_61, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_182_182));
#line 174 "add_type.m"
          }
#line 176 "add_type.m"
          {
#line 176 "add_type.m"
            MR_Word base;
#line 176 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 176 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = base;
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclSpec_61));
#line 176 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166));
#line 176 "add_type.m"
          }
#line 172 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94;
#line 172 "add_type.m"
        }
#line 177 "add_type.m"
      else
#line 193 "add_type.m"
        {
#line 178 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldDefn1_62;
#line 178 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldStatus1_64;
#line 178 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody1_65;
#line 178 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_185_185;
#line 178 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_186_186;
#line 179 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_63_63;
#line 182 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;

#line 179 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 0)));
#line 179 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 179 "add_type.m"
            {
#line 179 "add_type.m"
              hlds__make_hlds__add_type__V_63_63 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50), (MR_Integer) 0);
#line 178 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_54)) == (MR_mktag((MR_Integer) 1)));
#line 178 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 178 "add_type.m"
                {
#line 178 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn1_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, (MR_Integer) 0)));
#line 180 "add_type.m"
                  {
#line 180 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn1_62, &hlds__make_hlds__add_type__OldStatus1_64);
                  }
#line 181 "add_type.m"
                  {
#line 181 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn1_62, &hlds__make_hlds__add_type__OldBody1_65);
                  }
#line 182 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody1_65)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_65, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 182 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 182 "add_type.m"
                    {
#line 182 "add_type.m"
                      hlds__make_hlds__add_type__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_65, (MR_Integer) 1)));
#line 183 "add_type.m"
                      {
#line 183 "add_type.m"
                        hlds__make_hlds__add_type__V_185_185 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus1_64);
                      }
#line 183 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_185_185 == (MR_Integer) 0);
#line 178 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 178 "add_type.m"
                        {
#line 184 "add_type.m"
                          {
#line 184 "add_type.m"
                            hlds__make_hlds__add_type__V_186_186 = hlds__hlds_pred__status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__Status0_16);
                          }
#line 184 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_186_186 == (MR_Integer) 1);
#line 178 "add_type.m"
                        }
#line 182 "add_type.m"
                    }
#line 178 "add_type.m"
                }
#line 179 "add_type.m"
            }
#line 193 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 188 "add_type.m"
            {
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisPieces_67;
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisMsg_68;
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisSpec_69;
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_189_189;
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_190_190;
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_191_191;
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_196_196;
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_197_197;
#line 188 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_201_201;

#line 187 "add_type.m"
              {
#line 187 "add_type.m"
                hlds__make_hlds__add_type__V_191_191 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_191_191, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_191_191, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 187 "add_type.m"
              }
#line 187 "add_type.m"
              {
#line 187 "add_type.m"
                hlds__make_hlds__add_type__V_190_190 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_190_190, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_190_190, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_191_191));
#line 187 "add_type.m"
              }
#line 187 "add_type.m"
              {
#line 187 "add_type.m"
                hlds__make_hlds__add_type__V_189_189 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_189_189, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_190_190));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_189_189, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[68])));
#line 187 "add_type.m"
              }
#line 186 "add_type.m"
              {
#line 186 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisPieces_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[66])));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_189_189));
#line 186 "add_type.m"
              }
#line 189 "add_type.m"
              {
#line 189 "add_type.m"
                hlds__make_hlds__add_type__V_197_197 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_197_197, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisPieces_67));
#line 189 "add_type.m"
              }
#line 189 "add_type.m"
              {
#line 189 "add_type.m"
                hlds__make_hlds__add_type__V_196_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_196_196, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_197_197));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_196_196, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 189 "add_type.m"
              }
#line 189 "add_type.m"
              {
#line 189 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisMsg_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_68, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 189 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_68, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_196_196));
#line 189 "add_type.m"
              }
#line 191 "add_type.m"
              {
#line 191 "add_type.m"
                hlds__make_hlds__add_type__V_201_201 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_201_201, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisMsg_68));
#line 191 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_201_201, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 191 "add_type.m"
              }
#line 190 "add_type.m"
              {
#line 190 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisSpec_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 190 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_69, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_201_201));
#line 190 "add_type.m"
              }
#line 192 "add_type.m"
              {
#line 192 "add_type.m"
                MR_Word base;
#line 192 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = base;
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisSpec_69));
#line 192 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166));
#line 192 "add_type.m"
              }
#line 188 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94;
#line 188 "add_type.m"
            }
#line 193 "add_type.m"
          else
#line 260 "add_type.m"
            {
#line 260 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TVarSet_2_71;
#line 260 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Params_2_72;
#line 260 "add_type.m"
              MR_Word hlds__make_hlds__add_type__KindMap_2_73;
#line 260 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_2_74;
#line 260 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigContext_75;
#line 260 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigStatus_76;
#line 260 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigInExportedEqv_77;
#line 260 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigNeedQual_78;
#line 195 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn2_70;
#line 204 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_79_79;

#line 195 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_54)) == (MR_mktag((MR_Integer) 1)));
#line 195 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 195 "add_type.m"
                {
#line 195 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn2_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_54, (MR_Integer) 0)));
#line 196 "add_type.m"
                  {
#line 196 "add_type.m"
                    hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__OldDefn2_70, &hlds__make_hlds__add_type__TVarSet_2_71);
                  }
#line 197 "add_type.m"
                  {
#line 197 "add_type.m"
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__OldDefn2_70, &hlds__make_hlds__add_type__Params_2_72);
                  }
#line 198 "add_type.m"
                  {
#line 198 "add_type.m"
                    hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__OldDefn2_70, &hlds__make_hlds__add_type__KindMap_2_73);
                  }
#line 199 "add_type.m"
                  {
#line 199 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn2_70, &hlds__make_hlds__add_type__Body_2_74);
                  }
#line 200 "add_type.m"
                  {
#line 200 "add_type.m"
                    hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__OldDefn2_70, &hlds__make_hlds__add_type__OrigContext_75);
                  }
#line 201 "add_type.m"
                  {
#line 201 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn2_70, &hlds__make_hlds__add_type__OrigStatus_76);
                  }
#line 202 "add_type.m"
                  {
#line 202 "add_type.m"
                    hlds__hlds_data__get_type_defn_in_exported_eqv_2_p_0(hlds__make_hlds__add_type__OldDefn2_70, &hlds__make_hlds__add_type__OrigInExportedEqv_77);
                  }
#line 203 "add_type.m"
                  {
#line 203 "add_type.m"
                    hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__OldDefn2_70, &hlds__make_hlds__add_type__OrigNeedQual_78);
                  }
#line 204 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_2_74)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_2_74, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 204 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 204 "add_type.m"
                    hlds__make_hlds__add_type__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_2_74, (MR_Integer) 1)));
#line 204 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded);
#line 195 "add_type.m"
                }
#line 260 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 206 "add_type.m"
                {
#line 206 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Target_80;
#line 206 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MakeOptInt_81;
#line 215 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_82_82;

#line 206 "add_type.m"
                  {
#line 206 "add_type.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_20, &hlds__make_hlds__add_type__Target_80);
                  }
#line 207 "add_type.m"
                  {
#line 207 "add_type.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_type__Globals_20, (MR_Integer) 87, &hlds__make_hlds__add_type__MakeOptInt_81);
                  }
#line 215 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 215 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 215 "add_type.m"
                    {
#line 215 "add_type.m"
                      hlds__make_hlds__add_type__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, (MR_Integer) 1)));
#line 217 "add_type.m"
                      {
#line 217 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__hlds_pred____Unify____import_status_0_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigStatus_76);
                      }
#line 219 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 219 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94;
#line 219 "add_type.m"
                      else
#line 222 "add_type.m"
                        {
#line 222 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeDefn3_83;
#line 222 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeTable_84;

#line 220 "add_type.m"
                          {
#line 220 "add_type.m"
                            hlds__hlds_data__set_type_defn_9_p_0(hlds__make_hlds__add_type__TVarSet_2_71, hlds__make_hlds__add_type__Params_2_72, hlds__make_hlds__add_type__KindMap_2_73, hlds__make_hlds__add_type__Body_2_74, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigInExportedEqv_77, hlds__make_hlds__add_type__OrigNeedQual_78, hlds__make_hlds__add_type__OrigContext_75, &hlds__make_hlds__add_type__TypeDefn3_83);
                          }
#line 223 "add_type.m"
                          {
#line 223 "add_type.m"
                            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn3_83, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_84);
                          }
#line 225 "add_type.m"
                          {
#line 225 "add_type.m"
                            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_84, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                          }
#line 222 "add_type.m"
                        }
#line 219 "add_type.m"
                      *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166;
#line 215 "add_type.m"
                    }
#line 215 "add_type.m"
                  else
#line 249 "add_type.m"
                    {
#line 249 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__NewBody_85;

#line 228 "add_type.m"
                      {
#line 228 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(hlds__make_hlds__add_type__Target_80, hlds__make_hlds__add_type__MakeOptInt_81, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Body_50, hlds__make_hlds__add_type__Body_2_74, &hlds__make_hlds__add_type__NewBody_85);
                      }
#line 249 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 238 "add_type.m"
                        {
#line 231 "add_type.m"
                          {
#line 231 "add_type.m"
                            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(hlds__make_hlds__add_type__OrigStatus_76, hlds__make_hlds__add_type__Status1_34);
                          }
#line 238 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 234 "add_type.m"
                            {
#line 234 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeDefn3_262;
#line 234 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_263;

#line 232 "add_type.m"
                              {
#line 232 "add_type.m"
                                hlds__hlds_data__set_type_defn_9_p_0(hlds__make_hlds__add_type__TVarSet_2_71, hlds__make_hlds__add_type__Params_2_72, hlds__make_hlds__add_type__KindMap_2_73, hlds__make_hlds__add_type__NewBody_85, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__OrigInExportedEqv_77, hlds__make_hlds__add_type__NeedQual_17, hlds__make_hlds__add_type__Context_15, &hlds__make_hlds__add_type__TypeDefn3_262);
                              }
#line 235 "add_type.m"
                              {
#line 235 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn3_262, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_263);
                              }
#line 237 "add_type.m"
                              {
#line 237 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_263, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                              }
#line 234 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166;
#line 234 "add_type.m"
                            }
#line 238 "add_type.m"
                          else
#line 239 "add_type.m"
                            {
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisPieces_86;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisMsg_87;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisSpec_88;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_210_210;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_211_211;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_212_212;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_225_225;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_226_226;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_230_230;

#line 239 "add_type.m"
                              {
#line 239 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                              }
#line 241 "add_type.m"
                              {
#line 241 "add_type.m"
                                hlds__make_hlds__add_type__V_212_212 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_212_212, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_12));
#line 241 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_212_212, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_21));
#line 241 "add_type.m"
                              }
#line 241 "add_type.m"
                              {
#line 241 "add_type.m"
                                hlds__make_hlds__add_type__V_211_211 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_211_211, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 241 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_211_211, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_212_212));
#line 241 "add_type.m"
                              }
#line 241 "add_type.m"
                              {
#line 241 "add_type.m"
                                hlds__make_hlds__add_type__V_210_210 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 241 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_210_210, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_211_211));
#line 241 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_210_210, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[29])));
#line 241 "add_type.m"
                              }
#line 240 "add_type.m"
                              {
#line 240 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisPieces_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_86, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[62])));
#line 240 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_86, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_210_210));
#line 240 "add_type.m"
                              }
#line 244 "add_type.m"
                              {
#line 244 "add_type.m"
                                hlds__make_hlds__add_type__V_226_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 244 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_226_226, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisPieces_86));
#line 244 "add_type.m"
                              }
#line 244 "add_type.m"
                              {
#line 244 "add_type.m"
                                hlds__make_hlds__add_type__V_225_225 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 244 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_225_225, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_226_226));
#line 244 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_225_225, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 244 "add_type.m"
                              }
#line 244 "add_type.m"
                              {
#line 244 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisMsg_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 244 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_87, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 244 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_87, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_225_225));
#line 244 "add_type.m"
                              }
#line 246 "add_type.m"
                              {
#line 246 "add_type.m"
                                hlds__make_hlds__add_type__V_230_230 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_230_230, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisMsg_87));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_230_230, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 246 "add_type.m"
                              }
#line 245 "add_type.m"
                              {
#line 245 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisSpec_88 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_88, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_88, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_230_230));
#line 245 "add_type.m"
                              }
#line 247 "add_type.m"
                              {
#line 247 "add_type.m"
                                MR_Word base;
#line 247 "add_type.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 247 "add_type.m"
                                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = base;
#line 247 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisSpec_88));
#line 247 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166));
#line 247 "add_type.m"
                              }
#line 239 "add_type.m"
                            }
#line 238 "add_type.m"
                        }
#line 249 "add_type.m"
                      else
#line 255 "add_type.m"
                        {
#line 252 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded = ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 255 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 254 "add_type.m"
                            {
#line 254 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166;
#line 254 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94;
#line 254 "add_type.m"
                            }
#line 255 "add_type.m"
                          else
#line 256 "add_type.m"
                            {
#line 256 "add_type.m"
                              {
#line 256 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                              }
#line 257 "add_type.m"
                              {
#line 257 "add_type.m"
                                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__Status_47, hlds__make_hlds__add_type__Name_12, hlds__make_hlds__add_type__Arity_21, (MR_String) "type", hlds__make_hlds__add_type__Context_15, hlds__make_hlds__add_type__OrigContext_75, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97);
#line 257 "add_type.m"
                                return;
                              }
#line 256 "add_type.m"
                            }
#line 255 "add_type.m"
                        }
#line 249 "add_type.m"
                    }
#line 206 "add_type.m"
                }
#line 260 "add_type.m"
              else
#line 262 "add_type.m"
                {
#line 262 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__TypeTable_268;

#line 261 "add_type.m"
                  {
#line 261 "add_type.m"
                    hlds__hlds_data__add_or_replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_22, hlds__make_hlds__add_type__TypeDefn1_57, hlds__make_hlds__add_type__TypeTable0_44, &hlds__make_hlds__add_type__TypeTable_268);
                  }
#line 263 "add_type.m"
                  {
#line 263 "add_type.m"
                    hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_268, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_94, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_95);
                  }
#line 269 "add_type.m"
                  {
#line 269 "add_type.m"
                    hlds__make_hlds__add_type__module_add_type_defn_10_p_0_7(&hlds__make_hlds__add_type__env);
                  }
#line 284 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_10_p_0_env_0__succeeded)
#line 277 "add_type.m"
                    {
#line 277 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvMsg_92;
#line 277 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvSpec_93;
#line 277 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_250_250;
#line 277 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_252_252;
#line 277 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_253_253;
#line 277 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_255_255;
#line 277 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_259_259;

#line 280 "add_type.m"
                      {
#line 280 "add_type.m"
                        hlds__make_hlds__add_type__V_255_255 = hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0();
                      }
#line 280 "add_type.m"
                      {
#line 280 "add_type.m"
                        hlds__make_hlds__add_type__V_253_253 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_253_253, 0) = ((MR_Box) ((MR_Integer) 1));
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_253_253, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_255_255));
#line 280 "add_type.m"
                      }
#line 280 "add_type.m"
                      {
#line 280 "add_type.m"
                        hlds__make_hlds__add_type__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_252_252, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_253_253));
#line 280 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_252_252, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 280 "add_type.m"
                      }
#line 279 "add_type.m"
                      {
#line 279 "add_type.m"
                        hlds__make_hlds__add_type__V_250_250 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 279 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_250_250, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_3[1]));
#line 279 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_250_250, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_252_252));
#line 279 "add_type.m"
                      }
#line 278 "add_type.m"
                      {
#line 278 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvMsg_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 278 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_92, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_15));
#line 278 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_92, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_250_250));
#line 278 "add_type.m"
                      }
#line 282 "add_type.m"
                      {
#line 282 "add_type.m"
                        hlds__make_hlds__add_type__V_259_259 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 282 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_259_259, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvMsg_92));
#line 282 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_259_259, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 282 "add_type.m"
                      }
#line 281 "add_type.m"
                      {
#line 281 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvSpec_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 281 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_93, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 281 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_93, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 281 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_93, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_259_259));
#line 281 "add_type.m"
                      }
#line 283 "add_type.m"
                      {
#line 283 "add_type.m"
                        MR_Word base;
#line 283 "add_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 283 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = base;
#line 283 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvSpec_93));
#line 283 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166));
#line 283 "add_type.m"
                      }
#line 277 "add_type.m"
                    }
#line 284 "add_type.m"
                  else
#line 284 "add_type.m"
                    *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_97 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_166_166;
#line 262 "add_type.m"
                }
#line 260 "add_type.m"
            }
#line 193 "add_type.m"
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
