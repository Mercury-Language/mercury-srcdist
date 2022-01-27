/*
** Automatically generated from `add_type.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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



#line 632 "add_type.m"
struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s {
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17;
#line 641 "add_type.m"
  MR_bool hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded;
#line 658 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43;
#line 660 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0;
#line 660 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98;
#line 660 "add_type.m"
  MR_Word hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118;
#line 660 "add_type.m"
  MR_Box hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98;
#line 632 "add_type.m"
};

#line 34 "add_type.m"
struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s {
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14;
#line 74 "add_type.m"
  MR_bool hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded;
#line 74 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_301_301;
#line 74 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48;
#line 74 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51;
#line 280 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_0;
#line 280 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__EqvType_91;
#line 280 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_92;
#line 282 "add_type.m"
  MR_Box hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__conv0_Var_92;
#line 283 "add_type.m"
  jmp_buf hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_1;
#line 283 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_307_307;
#line 283 "add_type.m"
  MR_Word hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__V_305_305;
#line 34 "add_type.m"
};


#line 202 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_cons_id_0;

#line 205 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__add_type__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_ctor_field_name_0;

#line 208 "hlds.make_hlds.add_type.c"
static const MR_FA_TypeInfo_Struct1 hlds__make_hlds__add_type__list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 211 "hlds.make_hlds.add_type.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__make_hlds__add_type__tree234__pti_tree234_2__plain_mdbcomp__sym_name__type_ctor_info_sym_name_0__plain_list__ti_list_1hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0;

#line 699 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__699__1_1_f_0(
#line 699 "add_type.m"
  MR_Word hlds__make_hlds__add_type__LambdaHeadVar__1_94);

#line 791 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 791 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 791 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);

#line 787 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 787 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 787 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 787 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 787 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 735 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41);

#line 713 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeStatus_6,
#line 713 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 713 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 713 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11);

#line 704 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 704 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 704 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 704 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 704 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 704 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 704 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15);

#line 699 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 699 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 699 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1);

#line 690 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 690 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 690 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 690 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 690 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3);

#line 660 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 660 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 660 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 660 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 660 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 660 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 660 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 660 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 632 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeStatus_24,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 632 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 632 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 632 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);

#line 613 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeStatus_9,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 613 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 613 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 613 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15);

#line 561 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 561 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 561 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 561 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 561 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4);

#line 540 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 540 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 540 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 540 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6);

#line 509 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 509 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 509 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 509 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 509 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 509 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5);

#line 467 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_13,
#line 467 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
#line 467 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
#line 467 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29);

#line 358 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 358 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 358 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4);

#line 329 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 329 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 329 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4);

#line 322 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 322 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 322 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 322 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 322 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4);

#line 300 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void);

#line 280 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_1(
#line 280 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 282 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_3(
#line 282 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_4(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_5(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_6(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 280 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_2(
#line 280 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);

#line 280 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_7(
#line 280 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg);


static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_1[79][2];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_2[2][3];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_6[1][9];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_7[1][5];

static /* final */ const MR_Box hlds__make_hlds__add_type_scalar_common_8[1][8];


#line 486 "add_type.m"
/* sealed */ struct hlds__make_hlds__add_type__vector_common_type_5_0_s {
#line 486 "add_type.m"
  const MR_String hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
#line 486 "add_type.m"
};

static /* final */ const struct hlds__make_hlds__add_type__vector_common_type_5_0_s hlds__make_hlds__add_type_vector_common_5[4];



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
    ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[39])))
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

#line 699 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__699__1_1_f_0(
#line 699 "add_type.m"
  MR_Word hlds__make_hlds__add_type__LambdaHeadVar__1_94)
#line 699 "add_type.m"
{
#line 699 "add_type.m"
  {
#line 699 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 699 "add_type.m"
    MR_Word hlds__make_hlds__add_type__LambdaHeadVar__2_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__LambdaHeadVar__1_94, (MR_Integer) 0)));
#line 699 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__LambdaHeadVar__1_94, (MR_Integer) 1)));
#line 699 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__LambdaHeadVar__1_94, (MR_Integer) 2)));
#line 699 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__LambdaHeadVar__1_94, (MR_Integer) 3)));

#line 699 "add_type.m"
    return hlds__make_hlds__add_type__LambdaHeadVar__2_95;
#line 699 "add_type.m"
  }
#line 699 "add_type.m"
}

#line 791 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(
#line 791 "add_type.m"
  MR_String hlds__make_hlds__add_type__FieldName_6,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldNameDefn_7,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleName_8,
#line 791 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 791 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11)
#line 791 "add_type.m"
{
#line 794 "add_type.m"
  {
#line 794 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 794 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_12_12;

#line 795 "add_type.m"
    {
#line 795 "add_type.m"
      hlds__make_hlds__add_type__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 795 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleName_8));
#line 795 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_12_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldName_6));
#line 795 "add_type.m"
    }
#line 795 "add_type.m"
    {
#line 795 "add_type.m"
      mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_12_12)), ((MR_Box) (hlds__make_hlds__add_type__FieldNameDefn_7)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11);
    }
#line 794 "add_type.m"
  }
#line 791 "add_type.m"
}

#line 787 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1(
#line 787 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 787 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 787 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 787 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 787 "add_type.m"
{
#line 787 "add_type.m"
  {
#line 787 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 787 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11;

#line 787 "add_type.m"
    {
#line 787 "add_type.m"
      hlds__make_hlds__add_type__do_add_ctor_field_5_p_0(((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11);
    }
#line 787 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_FieldNameTable_11));
#line 787 "add_type.m"
  }
#line 787 "add_type.m"
}

#line 735 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldName_9,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__FieldDefn_10,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_11,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_12,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39,
#line 735 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40,
#line 735 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41)
#line 735 "add_type.m"
{
#line 741 "add_type.m"
  {
#line 741 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 741 "add_type.m"
    MR_Word hlds__make_hlds__add_type__FieldModule_17;
#line 753 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConflictingDefns_19;
#line 753 "add_type.m"
    MR_Box hlds__make_hlds__add_type__conv0_ConflictingDefns_19;

#line 745 "add_type.m"
    if (((MR_tag((MR_Word) hlds__make_hlds__add_type__FieldName_9)) == (MR_mktag((MR_Integer) 1))))
#line 743 "add_type.m"
      {
#line 743 "add_type.m"
        MR_String hlds__make_hlds__add_type__V_16_16;

#line 743 "add_type.m"
        hlds__make_hlds__add_type__FieldModule_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 0)));
#line 743 "add_type.m"
        hlds__make_hlds__add_type__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__FieldName_9, (MR_Integer) 1)));
#line 743 "add_type.m"
      }
#line 745 "add_type.m"
    else
#line 746 "add_type.m"
      {
#line 747 "add_type.m"
        {
#line 747 "add_type.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "unqualified field name");
#line 747 "add_type.m"
          return;
        }
#line 746 "add_type.m"
      }
#line 753 "add_type.m"
    {
#line 753 "add_type.m"
      hlds__make_hlds__add_type__succeeded = mercury__map__search_3_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[3], hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, ((MR_Box) (hlds__make_hlds__add_type__FieldName_9)), &hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
    }
#line 753 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 753 "add_type.m"
      {
#line 753 "add_type.m"
        hlds__make_hlds__add_type__ConflictingDefns_19 = ((MR_Word) hlds__make_hlds__add_type__conv0_ConflictingDefns_19);
#line 753 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 753 "add_type.m"
      }
#line 753 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 758 "add_type.m"
      {
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__OrigContext_21;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Context_26;
#line 758 "add_type.m"
        MR_String hlds__make_hlds__add_type__FieldString_31;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Pieces_32;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__HereMsg_33;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevPieces_34;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__PrevMsg_35;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Spec_36;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_51_51;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_52_52;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_59_59;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_60_60;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_64_64;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_72_72;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_73_73;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_77_77;
#line 758 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_78_78;
#line 754 "add_type.m"
        MR_Word hlds__make_hlds__add_type__ConflictingDefn_20;
#line 754 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_45_45;
#line 762 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_27_27;
#line 762 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_28_28;
#line 762 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_29_29;
#line 762 "add_type.m"
        MR_Integer hlds__make_hlds__add_type__V_30_30;

#line 754 "add_type.m"
        hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__ConflictingDefns_19)) == (MR_mktag((MR_Integer) 1)));
#line 754 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 754 "add_type.m"
          {
#line 754 "add_type.m"
            hlds__make_hlds__add_type__ConflictingDefn_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 0)));
#line 754 "add_type.m"
            hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ConflictingDefns_19, (MR_Integer) 1)));
#line 754 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_45_45 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 754 "add_type.m"
          }
#line 754 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 755 "add_type.m"
          {
#line 755 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_22_22;
#line 755 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_23_23;
#line 755 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_24_24;
#line 755 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_25_25;

#line 755 "add_type.m"
            hlds__make_hlds__add_type__OrigContext_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 0)));
#line 755 "add_type.m"
            hlds__make_hlds__add_type__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 1)));
#line 755 "add_type.m"
            hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 2)));
#line 755 "add_type.m"
            hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 3)));
#line 755 "add_type.m"
            hlds__make_hlds__add_type__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConflictingDefn_20, (MR_Integer) 4)));
#line 755 "add_type.m"
          }
#line 754 "add_type.m"
        else
#line 757 "add_type.m"
          {
#line 757 "add_type.m"
            {
#line 757 "add_type.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.add_ctor_field_name\'/8", (MR_String) "multiple conflicting fields");
#line 757 "add_type.m"
              return;
            }
#line 757 "add_type.m"
          }
#line 762 "add_type.m"
        hlds__make_hlds__add_type__Context_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 0)));
#line 762 "add_type.m"
        hlds__make_hlds__add_type__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 1)));
#line 762 "add_type.m"
        hlds__make_hlds__add_type__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 2)));
#line 762 "add_type.m"
        hlds__make_hlds__add_type__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 3)));
#line 762 "add_type.m"
        hlds__make_hlds__add_type__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_10, (MR_Integer) 4)));
#line 763 "add_type.m"
        {
#line 763 "add_type.m"
          hlds__make_hlds__add_type__FieldString_31 = mdbcomp__sym_name__sym_name_to_string_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 764 "add_type.m"
        {
#line 764 "add_type.m"
          hlds__make_hlds__add_type__V_52_52 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_52_52, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 764 "add_type.m"
          MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_52_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__FieldString_31));
#line 764 "add_type.m"
        }
#line 764 "add_type.m"
        {
#line 764 "add_type.m"
          hlds__make_hlds__add_type__V_51_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 764 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_51_51, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 764 "add_type.m"
        }
#line 764 "add_type.m"
        {
#line 764 "add_type.m"
          hlds__make_hlds__add_type__Pieces_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 764 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[77])));
#line 764 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 764 "add_type.m"
        }
#line 766 "add_type.m"
        {
#line 766 "add_type.m"
          hlds__make_hlds__add_type__V_60_60 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 766 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_60_60, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_32));
#line 766 "add_type.m"
        }
#line 766 "add_type.m"
        {
#line 766 "add_type.m"
          hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_60_60));
#line 766 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 766 "add_type.m"
        }
#line 766 "add_type.m"
        {
#line 766 "add_type.m"
          hlds__make_hlds__add_type__HereMsg_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_26));
#line 766 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HereMsg_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 766 "add_type.m"
        }
#line 768 "add_type.m"
        {
#line 768 "add_type.m"
          hlds__make_hlds__add_type__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 768 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 768 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[53])));
#line 768 "add_type.m"
        }
#line 767 "add_type.m"
        {
#line 767 "add_type.m"
          hlds__make_hlds__add_type__PrevPieces_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[78])));
#line 767 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__PrevPieces_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_64_64));
#line 767 "add_type.m"
        }
#line 769 "add_type.m"
        {
#line 769 "add_type.m"
          hlds__make_hlds__add_type__V_73_73 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 769 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_73_73, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevPieces_34));
#line 769 "add_type.m"
        }
#line 769 "add_type.m"
        {
#line 769 "add_type.m"
          hlds__make_hlds__add_type__V_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_73_73));
#line 769 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_72_72, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 769 "add_type.m"
        }
#line 769 "add_type.m"
        {
#line 769 "add_type.m"
          hlds__make_hlds__add_type__PrevMsg_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__OrigContext_21));
#line 769 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PrevMsg_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_72_72));
#line 769 "add_type.m"
        }
#line 771 "add_type.m"
        {
#line 771 "add_type.m"
          hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__PrevMsg_35));
#line 771 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 771 "add_type.m"
        }
#line 771 "add_type.m"
        {
#line 771 "add_type.m"
          hlds__make_hlds__add_type__V_77_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 771 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 0) = ((MR_Box) (hlds__make_hlds__add_type__HereMsg_33));
#line 771 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_77_77, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 771 "add_type.m"
        }
#line 770 "add_type.m"
        {
#line 770 "add_type.m"
          hlds__make_hlds__add_type__Spec_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 770 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 770 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 770 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_77_77));
#line 770 "add_type.m"
        }
#line 772 "add_type.m"
        {
#line 772 "add_type.m"
          MR_Word base;
#line 772 "add_type.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 772 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = base;
#line 772 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_36));
#line 772 "add_type.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40));
#line 772 "add_type.m"
        }
#line 758 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 758 "add_type.m"
      }
#line 753 "add_type.m"
    else
#line 774 "add_type.m"
      {
#line 774 "add_type.m"
        MR_String hlds__make_hlds__add_type__UnqualFieldName_37;
#line 774 "add_type.m"
        MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82;
#line 774 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_83_83;
#line 774 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_84_84;
#line 787 "add_type.m"
        MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39;

#line 774 "add_type.m"
        {
#line 774 "add_type.m"
          hlds__make_hlds__add_type__UnqualFieldName_37 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__FieldName_9);
        }
#line 782 "add_type.m"
#line 782 "add_type.m"
        switch (hlds__make_hlds__add_type__NeedQual_11) {
#line 782 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 782 "add_type.m"
          case (MR_Integer) 1:
#line 779 "add_type.m"
            {
#line 779 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_81_81;

#line 780 "add_type.m"
              {
#line 780 "add_type.m"
                hlds__make_hlds__add_type__V_81_81 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 780 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_81_81, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 780 "add_type.m"
              }
#line 780 "add_type.m"
              {
#line 780 "add_type.m"
                mercury__multi_map__set_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_ctor_field_defn_0, ((MR_Box) (hlds__make_hlds__add_type__V_81_81)), ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10)), hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82);
              }
#line 779 "add_type.m"
            }
#line 782 "add_type.m"
            break;
#line 782 "add_type.m"
          case (MR_Integer) 0:
#line 783 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_38;
#line 782 "add_type.m"
            break;
#line 782 "add_type.m"
        }
#line 787 "add_type.m"
        {
#line 787 "add_type.m"
          hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 787 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_8[0]));
#line 787 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_ctor_field_name_8_p_0_1));
#line 787 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 787 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 3) = ((MR_Box) (hlds__make_hlds__add_type__UnqualFieldName_37));
#line 787 "add_type.m"
          MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_83_83, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldDefn_10));
#line 787 "add_type.m"
        }
#line 788 "add_type.m"
        {
#line 788 "add_type.m"
          hlds__make_hlds__add_type__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 788 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldModule_17));
#line 788 "add_type.m"
          MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_84_84, 1) = ((MR_Box) (hlds__make_hlds__add_type__PartialQuals_12));
#line 788 "add_type.m"
        }
#line 787 "add_type.m"
        {
#line 787 "add_type.m"
          mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[0], hlds__make_hlds__add_type__V_83_83, hlds__make_hlds__add_type__V_84_84, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_82_82)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
        }
#line 787 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_39 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_FieldNameTable_39);
#line 774 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_41 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_40;
#line 774 "add_type.m"
      }
#line 741 "add_type.m"
  }
#line 735 "add_type.m"
}

#line 713 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_2,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PartialQuals_3,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_4,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ConsId_5,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeStatus_6,
#line 713 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__FieldNumber_7,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8,
#line 713 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9,
#line 713 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10,
#line 713 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11)
#line 713 "add_type.m"
{
#line 719 "add_type.m"
  while (MR_TRUE)
#line 719 "add_type.m"
    {
#line 719 "add_type.m"
      /* tailcall optimized into a loop */
#line 719 "add_type.m"
      {
#line 719 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 719 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 719 "add_type.m"
          {
#line 719 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_11 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 719 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_9 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 719 "add_type.m"
          }
#line 719 "add_type.m"
        else
#line 722 "add_type.m"
          {
#line 722 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldName_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 722 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MaybeCtorFieldNames_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 722 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 722 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;
#line 722 "add_type.m"
            MR_Integer hlds__make_hlds__add_type__V_44_44;

#line 729 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCtorFieldName_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 730 "add_type.m"
              {
#line 730 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8;
#line 730 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10;
#line 730 "add_type.m"
              }
#line 729 "add_type.m"
            else
#line 724 "add_type.m"
              {
#line 724 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldName_34;
#line 724 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldNameContext_35;
#line 724 "add_type.m"
                MR_Word hlds__make_hlds__add_type__FieldDefn_36;
#line 724 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeCtorFieldName_24, (MR_Integer) 0)));

#line 724 "add_type.m"
                hlds__make_hlds__add_type__FieldName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 0)));
#line 724 "add_type.m"
                hlds__make_hlds__add_type__FieldNameContext_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_41_41, (MR_Integer) 1)));
#line 725 "add_type.m"
                {
#line 725 "add_type.m"
                  hlds__make_hlds__add_type__FieldDefn_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 725 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__FieldNameContext_35));
#line 725 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 1) = ((MR_Box) (hlds__make_hlds__add_type__TypeStatus_6));
#line 725 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_4));
#line 725 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 3) = ((MR_Box) (hlds__make_hlds__add_type__ConsId_5));
#line 725 "add_type.m"
                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__FieldDefn_36, 4) = ((MR_Box) (hlds__make_hlds__add_type__FieldNumber_7));
#line 725 "add_type.m"
                }
#line 727 "add_type.m"
                {
#line 727 "add_type.m"
                  hlds__make_hlds__add_type__add_ctor_field_name_8_p_0(hlds__make_hlds__add_type__FieldName_34, hlds__make_hlds__add_type__FieldDefn_36, hlds__make_hlds__add_type__NeedQual_2, hlds__make_hlds__add_type__PartialQuals_3, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43);
                }
#line 724 "add_type.m"
              }
#line 733 "add_type.m"
            hlds__make_hlds__add_type__V_44_44 = (hlds__make_hlds__add_type__FieldNumber_7 + (MR_Integer) 1);
#line 732 "add_type.m"
            /* direct tailcall eliminated */
#line 732 "add_type.m"
            {
#line 732 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__MaybeCtorFieldNames_25;
#line 732 "add_type.m"
              MR_Integer hlds__make_hlds__add_type__FieldNumber__tmp_copy_7 = hlds__make_hlds__add_type__V_44_44;
#line 732 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_42_42;
#line 732 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_43_43;

#line 732 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_10;
#line 732 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_8 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_8;
#line 732 "add_type.m"
              hlds__make_hlds__add_type__FieldNumber_7 = hlds__make_hlds__add_type__FieldNumber__tmp_copy_7;
#line 732 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 732 "add_type.m"
            }
#line 732 "add_type.m"
            continue;
#line 722 "add_type.m"
          }
#line 719 "add_type.m"
      }
#line 719 "add_type.m"
      break;
#line 719 "add_type.m"
    }
#line 713 "add_type.m"
}

#line 704 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(
#line 704 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_7,
#line 704 "add_type.m"
  MR_String hlds__make_hlds__add_type__ConsName_8,
#line 704 "add_type.m"
  MR_Integer hlds__make_hlds__add_type__Arity_9,
#line 704 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ModuleQual_10,
#line 704 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14,
#line 704 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15)
#line 704 "add_type.m"
{
#line 707 "add_type.m"
  {
#line 707 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 707 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdA_12;
#line 707 "add_type.m"
    MR_Word hlds__make_hlds__add_type__ConsIdB_13;
#line 707 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_16_16;
#line 707 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_18_18;
#line 707 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_20_20;

#line 708 "add_type.m"
    {
#line 708 "add_type.m"
      hlds__make_hlds__add_type__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 0) = ((MR_Box) (hlds__make_hlds__add_type__ModuleQual_10));
#line 708 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_16_16, 1) = ((MR_Box) (hlds__make_hlds__add_type__ConsName_8));
#line 708 "add_type.m"
    }
#line 708 "add_type.m"
    {
#line 708 "add_type.m"
      hlds__make_hlds__add_type__ConsIdA_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 708 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 708 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 708 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 708 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdA_12, 3) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_7));
#line 708 "add_type.m"
    }
#line 710 "add_type.m"
    {
#line 710 "add_type.m"
      hlds__make_hlds__add_type__V_18_18 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
    }
#line 709 "add_type.m"
    {
#line 709 "add_type.m"
      hlds__make_hlds__add_type__ConsIdB_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 709 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 709 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_16_16));
#line 709 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_9));
#line 709 "add_type.m"
      MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__ConsIdB_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_18_18));
#line 709 "add_type.m"
    }
#line 711 "add_type.m"
    {
#line 711 "add_type.m"
      hlds__make_hlds__add_type__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdB_13));
#line 711 "add_type.m"
      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_20_20, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_0_14));
#line 711 "add_type.m"
    }
#line 711 "add_type.m"
    {
#line 711 "add_type.m"
      MR_Word base;
#line 711 "add_type.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 711 "add_type.m"
      *hlds__make_hlds__add_type__STATE_VARIABLE_ConsIds_15 = base;
#line 711 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ConsIdA_12));
#line 711 "add_type.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_20_20));
#line 711 "add_type.m"
    }
#line 707 "add_type.m"
  }
#line 704 "add_type.m"
}

#line 699 "add_type.m"
static MR_Box MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_6(
#line 699 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 699 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1)
#line 699 "add_type.m"
{
#line 699 "add_type.m"
  {
#line 699 "add_type.m"
    MR_Box hlds__make_hlds__add_type__wrapper_arg_2;
#line 699 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 699 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv3_LambdaHeadVar__2_95;

#line 699 "add_type.m"
    {
#line 699 "add_type.m"
      hlds__make_hlds__add_type__conv3_LambdaHeadVar__2_95 = hlds__make_hlds__add_type__IntroducedFrom__func__add_type_defn_ctor__699__1_1_f_0(((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1));
    }
#line 699 "add_type.m"
    hlds__make_hlds__add_type__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__add_type__conv3_LambdaHeadVar__2_95));
#line 699 "add_type.m"
    return hlds__make_hlds__add_type__wrapper_arg_2;
#line 699 "add_type.m"
  }
#line 699 "add_type.m"
}

#line 690 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5(
#line 690 "add_type.m"
  MR_Box hlds__make_hlds__add_type__closure_arg,
#line 690 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_1,
#line 690 "add_type.m"
  MR_Box hlds__make_hlds__add_type__wrapper_arg_2,
#line 690 "add_type.m"
  MR_Box * hlds__make_hlds__add_type__wrapper_arg_3)
#line 690 "add_type.m"
{
#line 690 "add_type.m"
  {
#line 690 "add_type.m"
    MR_Box hlds__make_hlds__add_type__closure = hlds__make_hlds__add_type__closure_arg;
#line 690 "add_type.m"
    MR_Word hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15;

#line 690 "add_type.m"
    {
#line 690 "add_type.m"
      hlds__make_hlds__add_type__add_ctor_to_list_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 3))), ((MR_String) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 4))), ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__closure, (MR_Integer) 5))), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_1), ((MR_Word) hlds__make_hlds__add_type__wrapper_arg_2), &hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15);
    }
#line 690 "add_type.m"
    *hlds__make_hlds__add_type__wrapper_arg_3 = ((MR_Box) (hlds__make_hlds__add_type__conv1_STATE_VARIABLE_ConsIds_15));
#line 690 "add_type.m"
  }
#line 690 "add_type.m"
}

#line 660 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(
#line 660 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 660 "add_type.m"
{
#line 660 "add_type.m"
  {
#line 660 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 660 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0, 1);
#line 660 "add_type.m"
  }
#line 660 "add_type.m"
}

#line 660 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3(
#line 660 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 660 "add_type.m"
{
#line 660 "add_type.m"
  {
#line 660 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 660 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98);
#line 660 "add_type.m"
    {
#line 660 "add_type.m"
      hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(hlds__make_hlds__add_type__env_ptr);
    }
#line 660 "add_type.m"
  }
#line 660 "add_type.m"
}

#line 660 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_2(
#line 660 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 660 "add_type.m"
{
#line 660 "add_type.m"
  {
#line 660 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 660 "add_type.m"
    {
#line 661 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_100_100;
#line 661 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_101_101;
#line 661 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 661 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 661 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_104_104;
#line 661 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_105_105;
#line 661 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_106_106;

#line 661 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 0)));
#line 661 "add_type.m"
      hlds__make_hlds__add_type__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 1)));
#line 661 "add_type.m"
      hlds__make_hlds__add_type__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 2)));
#line 661 "add_type.m"
      hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 3)));
#line 661 "add_type.m"
      hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 4)));
#line 661 "add_type.m"
      hlds__make_hlds__add_type__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 5)));
#line 661 "add_type.m"
      hlds__make_hlds__add_type__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 6)));
#line 661 "add_type.m"
      hlds__make_hlds__add_type__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__OtherConsDefn_98, (MR_Integer) 7)));
#line 661 "add_type.m"
      {
#line 661 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = parse_tree__prog_data____Unify____type_ctor_0_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__V_118_118);
      }
#line 661 "add_type.m"
      if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 661 "add_type.m"
        {
#line 661 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_1(hlds__make_hlds__add_type__env_ptr);
        }
#line 660 "add_type.m"
    }
#line 660 "add_type.m"
  }
#line 660 "add_type.m"
}

#line 660 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(
#line 660 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 660 "add_type.m"
{
#line 660 "add_type.m"
  {
#line 660 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 660 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__commit_0) == 0)
#line 660 "add_type.m"
      {
#line 660 "add_type.m"
        {
#line 660 "add_type.m"
          {
#line 660 "add_type.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_cons_defn_0, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__conv0_OtherConsDefn_98, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43, hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_3, hlds__make_hlds__add_type__env_ptr);
          }
#line 660 "add_type.m"
        }
#line 660 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_FALSE;
#line 660 "add_type.m"
      }
#line 660 "add_type.m"
    else
#line 660 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = MR_TRUE;
#line 660 "add_type.m"
  }
#line 660 "add_type.m"
}

#line 632 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Ctor_16,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_17,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_18,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_19,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_20,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_21,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_22,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_23,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeStatus_24,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55,
#line 632 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57,
#line 632 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58,
#line 632 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59,
#line 632 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60)
#line 632 "add_type.m"
{
#line 632 "add_type.m"
  {
#line 632 "add_type.m"
    struct hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 632 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17 = hlds__make_hlds__add_type__TypeCtor_17;
#line 641 "add_type.m"
    {
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ExistQVars_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 0)));
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constraints_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 1)));
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Name_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 2)));
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Args_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 3)));
#line 641 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 4)));
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Context_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Ctor_16, (MR_Integer) 5)));
#line 641 "add_type.m"
      MR_String hlds__make_hlds__add_type__BaseName_34;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedName_35;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedName_36;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdA_37;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__QualifiedConsIdB_38;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdA_39;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__UnqualifiedConsIdB_40;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__ConsDefn_41;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__PartialQuals_42;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__FieldNames_52;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_61_61;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_62_62;
#line 641 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85;

#line 643 "add_type.m"
      {
#line 643 "add_type.m"
        hlds__make_hlds__add_type__BaseName_34 = mdbcomp__sym_name__unqualify_name_1_f_0(hlds__make_hlds__add_type__Name_30);
      }
#line 644 "add_type.m"
      {
#line 644 "add_type.m"
        hlds__make_hlds__add_type__QualifiedName_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 0) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorModuleName_18));
#line 644 "add_type.m"
        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__QualifiedName_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 644 "add_type.m"
      }
#line 645 "add_type.m"
      {
#line 645 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedName_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 645 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__UnqualifiedName_36, 0) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 645 "add_type.m"
      }
#line 646 "add_type.m"
      {
#line 646 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdA_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 646 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 646 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 646 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 646 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdA_37, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 646 "add_type.m"
      }
#line 647 "add_type.m"
      {
#line 647 "add_type.m"
        hlds__make_hlds__add_type__V_61_61 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 647 "add_type.m"
      {
#line 647 "add_type.m"
        hlds__make_hlds__add_type__QualifiedConsIdB_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 647 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 647 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedName_35));
#line 647 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 647 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__QualifiedConsIdB_38, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_61_61));
#line 647 "add_type.m"
      }
#line 648 "add_type.m"
      {
#line 648 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdA_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 648 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 648 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 648 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 648 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdA_39, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 648 "add_type.m"
      }
#line 649 "add_type.m"
      {
#line 649 "add_type.m"
        hlds__make_hlds__add_type__V_62_62 = parse_tree__prog_data__cons_id_dummy_type_ctor_0_f_0();
      }
#line 649 "add_type.m"
      {
#line 649 "add_type.m"
        hlds__make_hlds__add_type__UnqualifiedConsIdB_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 649 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 649 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 1) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedName_36));
#line 649 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 2) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 649 "add_type.m"
        MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__UnqualifiedConsIdB_40, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_62_62));
#line 649 "add_type.m"
      }
#line 651 "add_type.m"
      {
#line 651 "add_type.m"
        hlds__make_hlds__add_type__ConsDefn_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 651 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 0) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 651 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__TVarSet_19));
#line 651 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 2) = ((MR_Box) (hlds__make_hlds__add_type__TypeParams_20));
#line 651 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 3) = ((MR_Box) (hlds__make_hlds__add_type__KindMap_21));
#line 651 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 4) = ((MR_Box) (hlds__make_hlds__add_type__ExistQVars_28));
#line 651 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 5) = ((MR_Box) (hlds__make_hlds__add_type__Constraints_29));
#line 651 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 6) = ((MR_Box) (hlds__make_hlds__add_type__Args_31));
#line 651 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ConsDefn_41, 7) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 651 "add_type.m"
      }
#line 653 "add_type.m"
      {
#line 653 "add_type.m"
        parse_tree__module_qual__get_partial_qualifiers_3_p_0(hlds__make_hlds__add_type__TypeCtorModuleName_18, hlds__make_hlds__add_type__PQInfo_23, &hlds__make_hlds__add_type__PartialQuals_42);
      }
#line 658 "add_type.m"
      {
#line 658 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_3_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__QualifiedConsIdA_37, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__QualifiedConsDefnsA_43);
      }
#line 658 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 660 "add_type.m"
        {
#line 660 "add_type.m"
          hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_4(&hlds__make_hlds__add_type__env);
        }
#line 657 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__succeeded)
#line 664 "add_type.m"
        {
#line 664 "add_type.m"
          MR_String hlds__make_hlds__add_type__QualifiedConsIdStr_45;
#line 664 "add_type.m"
          MR_String hlds__make_hlds__add_type__TypeCtorStr_46;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Pieces_47;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Msg_48;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Spec_49;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_65_65;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_66_66;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_67_67;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_70_70;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_71_71;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_78_78;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_79_79;
#line 664 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_83_83;

#line 664 "add_type.m"
          {
#line 664 "add_type.m"
            hlds__make_hlds__add_type__QualifiedConsIdStr_45 = parse_tree__prog_out__cons_id_and_arity_to_string_1_f_0(hlds__make_hlds__add_type__QualifiedConsIdA_37);
          }
#line 665 "add_type.m"
          {
#line 665 "add_type.m"
            hlds__make_hlds__add_type__TypeCtorStr_46 = parse_tree__prog_out__type_ctor_to_string_1_f_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17);
          }
#line 666 "add_type.m"
          {
#line 666 "add_type.m"
            hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 666 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_66_66, 1) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdStr_45));
#line 666 "add_type.m"
          }
#line 667 "add_type.m"
          {
#line 667 "add_type.m"
            hlds__make_hlds__add_type__V_71_71 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_71_71, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 667 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_71_71, 1) = ((MR_Box) (hlds__make_hlds__add_type__TypeCtorStr_46));
#line 667 "add_type.m"
          }
#line 667 "add_type.m"
          {
#line 667 "add_type.m"
            hlds__make_hlds__add_type__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_71_71));
#line 667 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[59])));
#line 667 "add_type.m"
          }
#line 667 "add_type.m"
          {
#line 667 "add_type.m"
            hlds__make_hlds__add_type__V_67_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 667 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[76])));
#line 667 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_67_67, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_70_70));
#line 667 "add_type.m"
          }
#line 666 "add_type.m"
          {
#line 666 "add_type.m"
            hlds__make_hlds__add_type__V_65_65 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 666 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_65_65, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_67_67));
#line 666 "add_type.m"
          }
#line 666 "add_type.m"
          {
#line 666 "add_type.m"
            hlds__make_hlds__add_type__Pieces_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[75])));
#line 666 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Pieces_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_65_65));
#line 666 "add_type.m"
          }
#line 669 "add_type.m"
          {
#line 669 "add_type.m"
            hlds__make_hlds__add_type__V_79_79 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 669 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_79_79, 0) = ((MR_Box) (hlds__make_hlds__add_type__Pieces_47));
#line 669 "add_type.m"
          }
#line 669 "add_type.m"
          {
#line 669 "add_type.m"
            hlds__make_hlds__add_type__V_78_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_79_79));
#line 669 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_78_78, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 669 "add_type.m"
          }
#line 669 "add_type.m"
          {
#line 669 "add_type.m"
            hlds__make_hlds__add_type__Msg_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 669 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_33));
#line 669 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_48, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_78_78));
#line 669 "add_type.m"
          }
#line 670 "add_type.m"
          {
#line 670 "add_type.m"
            hlds__make_hlds__add_type__V_83_83 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_48));
#line 670 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_83_83, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "add_type.m"
          }
#line 670 "add_type.m"
          {
#line 670 "add_type.m"
            hlds__make_hlds__add_type__Spec_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 670 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 670 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_49, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_83_83));
#line 670 "add_type.m"
          }
#line 671 "add_type.m"
          {
#line 671 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_49));
#line 671 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59));
#line 671 "add_type.m"
          }
#line 664 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57;
#line 664 "add_type.m"
        }
#line 657 "add_type.m"
      else
#line 673 "add_type.m"
        {
#line 673 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 673 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88;
#line 673 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_90_90;
#line 673 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91;
#line 690 "add_type.m"
          MR_Box hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91;

#line 677 "add_type.m"
          {
#line 677 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 0) = ((MR_Box) (hlds__make_hlds__add_type__QualifiedConsIdB_38));
#line 677 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 677 "add_type.m"
          }
#line 685 "add_type.m"
#line 685 "add_type.m"
          switch (hlds__make_hlds__add_type__NeedQual_22) {
#line 685 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 685 "add_type.m"
            case (MR_Integer) 1:
#line 682 "add_type.m"
              {
#line 682 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_89_89;

#line 684 "add_type.m"
                {
#line 684 "add_type.m"
                  hlds__make_hlds__add_type__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdB_40));
#line 684 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_89_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86));
#line 684 "add_type.m"
                }
#line 684 "add_type.m"
                {
#line 684 "add_type.m"
                  hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 684 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 0) = ((MR_Box) (hlds__make_hlds__add_type__UnqualifiedConsIdA_39));
#line 684 "add_type.m"
                  MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_89_89));
#line 684 "add_type.m"
                }
#line 682 "add_type.m"
              }
#line 685 "add_type.m"
              break;
#line 685 "add_type.m"
            case (MR_Integer) 0:
#line 686 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88 = hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_86_86;
#line 685 "add_type.m"
              break;
#line 685 "add_type.m"
          }
#line 690 "add_type.m"
          {
#line 690 "add_type.m"
            hlds__make_hlds__add_type__V_90_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 690 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_6[0]));
#line 690 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 1) = ((MR_Box) (hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_5));
#line 690 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 690 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 3) = ((MR_Box) ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17));
#line 690 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 4) = ((MR_Box) (hlds__make_hlds__add_type__BaseName_34));
#line 690 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_90_90, 5) = ((MR_Box) (hlds__make_hlds__add_type__Arity_32));
#line 690 "add_type.m"
          }
#line 690 "add_type.m"
          {
#line 690 "add_type.m"
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[1], hlds__make_hlds__add_type__V_90_90, hlds__make_hlds__add_type__PartialQuals_42, ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_88_88)), &hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
          }
#line 690 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91 = ((MR_Word) hlds__make_hlds__add_type__conv2_STATE_VARIABLE_OtherConsIds_91_91);
#line 694 "add_type.m"
          {
#line 694 "add_type.m"
            hlds__hlds_data__insert_into_cons_table_5_p_0(hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__STATE_VARIABLE_OtherConsIds_91_91, hlds__make_hlds__add_type__ConsDefn_41, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_57, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_58);
          }
#line 673 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_59;
#line 673 "add_type.m"
        }
#line 699 "add_type.m"
      {
#line 699 "add_type.m"
        hlds__make_hlds__add_type__FieldNames_52 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[2], (MR_Word) &hlds__make_hlds__add_type_scalar_common_2[1], hlds__make_hlds__add_type__Args_31);
      }
#line 701 "add_type.m"
      {
#line 701 "add_type.m"
        hlds__make_hlds__add_type__add_ctor_field_names_11_p_0(hlds__make_hlds__add_type__FieldNames_52, hlds__make_hlds__add_type__NeedQual_22, hlds__make_hlds__add_type__PartialQuals_42, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0_env_0__TypeCtor_17, hlds__make_hlds__add_type__QualifiedConsIdA_37, hlds__make_hlds__add_type__TypeStatus_24, (MR_Integer) 1, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_55, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_56, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_85_85, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_60);
      }
#line 641 "add_type.m"
    }
#line 632 "add_type.m"
  }
#line 632 "add_type.m"
}

#line 613 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_3,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_4,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeParams_5,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__KindMap_6,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_7,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PQInfo_8,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeStatus_9,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10,
#line 613 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12,
#line 613 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13,
#line 613 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14,
#line 613 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15)
#line 613 "add_type.m"
{
#line 620 "add_type.m"
  while (MR_TRUE)
#line 620 "add_type.m"
    {
#line 620 "add_type.m"
      /* tailcall optimized into a loop */
#line 620 "add_type.m"
      {
#line 620 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 620 "add_type.m"
        if ((hlds__make_hlds__add_type__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 620 "add_type.m"
          {
#line 621 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_15 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14;
#line 621 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_13 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12;
#line 621 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_11 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10;
#line 620 "add_type.m"
          }
#line 620 "add_type.m"
        else
#line 624 "add_type.m"
          {
#line 624 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctor_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 624 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Ctors_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 624 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 624 "add_type.m"
            MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 625 "add_type.m"
            {
#line 625 "add_type.m"
              hlds__make_hlds__add_type__add_type_defn_ctor_15_p_0(hlds__make_hlds__add_type__Ctor_33, hlds__make_hlds__add_type__TypeCtor_2, hlds__make_hlds__add_type__TypeCtorModuleName_3, hlds__make_hlds__add_type__TVarSet_4, hlds__make_hlds__add_type__TypeParams_5, hlds__make_hlds__add_type__KindMap_6, hlds__make_hlds__add_type__NeedQual_7, hlds__make_hlds__add_type__PQInfo_8, hlds__make_hlds__add_type__TypeStatus_9, hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10, &hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52, hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12, &hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14, &hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54);
            }
#line 628 "add_type.m"
            /* direct tailcall eliminated */
#line 628 "add_type.m"
            {
#line 628 "add_type.m"
              MR_Word hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1 = hlds__make_hlds__add_type__Ctors_34;
#line 628 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_52_52;
#line 628 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_53_53;
#line 628 "add_type.m"
              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_54_54;

#line 628 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_14 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0__tmp_copy_14;
#line 628 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0_12 = hlds__make_hlds__add_type__STATE_VARIABLE_ConsTable_0__tmp_copy_12;
#line 628 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0_10 = hlds__make_hlds__add_type__STATE_VARIABLE_FieldNameTable_0__tmp_copy_10;
#line 628 "add_type.m"
              hlds__make_hlds__add_type__HeadVar__1_1 = hlds__make_hlds__add_type__HeadVar__1__tmp_copy_1;
#line 628 "add_type.m"
            }
#line 628 "add_type.m"
            continue;
#line 624 "add_type.m"
          }
#line 620 "add_type.m"
      }
#line 620 "add_type.m"
      break;
#line 620 "add_type.m"
    }
#line 613 "add_type.m"
}

#line 561 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__convert_type_defn_4_p_0(
#line 561 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__1_1,
#line 561 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_2,
#line 561 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Globals_3,
#line 561 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__4_4)
#line 561 "add_type.m"
{
#line 565 "add_type.m"
  {
#line 565 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 565 "add_type.m"
#line 565 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__1_1)) {
#line 565 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 565 "add_type.m"
      case (MR_Integer) 0:
#line 565 "add_type.m"
        {
#line 565 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));
#line 565 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 565 "add_type.m"
          MR_Word hlds__make_hlds__add_type__MaybeDirectArgCtors_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 565 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorTagMap_12;
#line 565 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedAddr_13;
#line 565 "add_type.m"
          MR_Word hlds__make_hlds__add_type__IsEnum_14;
#line 565 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CheaperTagTest_16;

#line 573 "add_type.m"
          {
#line 573 "add_type.m"
            hlds__make_tags__assign_constructor_tags_8_p_0(hlds__make_hlds__add_type__Body_5, hlds__make_hlds__add_type__MaybeUserEqComp_6, hlds__make_hlds__add_type__TypeCtor_2, (MR_Integer) 1, hlds__make_hlds__add_type__Globals_3, &hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__ReservedAddr_13, &hlds__make_hlds__add_type__IsEnum_14);
          }
#line 576 "add_type.m"
          hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__ReservedAddr_13 == (MR_Integer) 1);
#line 576 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 577 "add_type.m"
            {
#line 577 "add_type.m"
              hlds__make_tags__compute_cheaper_tag_test_2_p_0(hlds__make_hlds__add_type__CtorTagMap_12, &hlds__make_hlds__add_type__CheaperTagTest_16);
            }
#line 576 "add_type.m"
          else
#line 579 "add_type.m"
            hlds__make_hlds__add_type__CheaperTagTest_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 581 "add_type.m"
          {
#line 581 "add_type.m"
            MR_Word base;
#line 581 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 581 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 581 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_5));
#line 581 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorTagMap_12));
#line 581 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__CheaperTagTest_16));
#line 581 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__IsEnum_14));
#line 581 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_6));
#line 581 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__MaybeDirectArgCtors_7));
#line 581 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) (((MR_Integer) 1 | ((hlds__make_hlds__add_type__ReservedAddr_13 << (MR_Integer) 1)))));
#line 581 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 581 "add_type.m"
          }
#line 565 "add_type.m"
        }
#line 565 "add_type.m"
        break;
#line 565 "add_type.m"
      case (MR_Integer) 1:
#line 584 "add_type.m"
        {
#line 584 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Body_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 584 "add_type.m"
          {
#line 584 "add_type.m"
            MR_Word base;
#line 584 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 584 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 584 "add_type.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Body_17));
#line 584 "add_type.m"
          }
#line 584 "add_type.m"
        }
#line 565 "add_type.m"
        break;
#line 565 "add_type.m"
      case (MR_Integer) 2:
#line 587 "add_type.m"
        {
#line 587 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Details_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)));

#line 588 "add_type.m"
          {
#line 588 "add_type.m"
            MR_Word base;
#line 588 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 588 "add_type.m"
            *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 588 "add_type.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 588 "add_type.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__Details_24));
#line 588 "add_type.m"
          }
#line 587 "add_type.m"
        }
#line 565 "add_type.m"
        break;
#line 565 "add_type.m"
      case (MR_Integer) 3:
#line 565 "add_type.m"
#line 565 "add_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 0)))) {
#line 565 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 565 "add_type.m"
          case (MR_Integer) 0:
#line 585 "add_type.m"
            {
#line 585 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverTypeDetails_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 585 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));

#line 586 "add_type.m"
              {
#line 586 "add_type.m"
                MR_Word base;
#line 586 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 586 "add_type.m"
                *hlds__make_hlds__add_type__HeadVar__4_4 = base;
#line 586 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 586 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__SolverTypeDetails_20));
#line 586 "add_type.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_21));
#line 586 "add_type.m"
              }
#line 585 "add_type.m"
            }
#line 565 "add_type.m"
            break;
#line 565 "add_type.m"
          case (MR_Integer) 1:
#line 590 "add_type.m"
            {
#line 590 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignType_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 1)));
#line 590 "add_type.m"
              MR_Word hlds__make_hlds__add_type__MaybeUserEqComp_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 2)));
#line 590 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Assertions_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__HeadVar__1_1, (MR_Integer) 3)));
#line 590 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body_32;

#line 596 "add_type.m"
#line 596 "add_type.m"
              switch (MR_tag((MR_Word) hlds__make_hlds__add_type__ForeignType_27)) {
#line 596 "add_type.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 596 "add_type.m"
                case (MR_Integer) 0:
#line 592 "add_type.m"
                  {
#line 592 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__CForeignType_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 592 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_34;
#line 592 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_50_50;

#line 593 "add_type.m"
                    {
#line 593 "add_type.m"
                      hlds__make_hlds__add_type__Data_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 593 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__CForeignType_33));
#line 593 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 593 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_34, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 593 "add_type.m"
                    }
#line 595 "add_type.m"
                    {
#line 595 "add_type.m"
                      hlds__make_hlds__add_type__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 595 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_50_50, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_34));
#line 595 "add_type.m"
                    }
#line 595 "add_type.m"
                    {
#line 595 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 595 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_50_50));
#line 595 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 595 "add_type.m"
                    }
#line 592 "add_type.m"
                  }
#line 596 "add_type.m"
                  break;
#line 596 "add_type.m"
                case (MR_Integer) 1:
#line 597 "add_type.m"
                  {
#line 597 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__JavaForeignType_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 597 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_47_47;
#line 597 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_54;

#line 598 "add_type.m"
                    {
#line 598 "add_type.m"
                      hlds__make_hlds__add_type__Data_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 598 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_54, 0) = ((MR_Box) (hlds__make_hlds__add_type__JavaForeignType_35));
#line 598 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_54, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 598 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_54, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 598 "add_type.m"
                    }
#line 600 "add_type.m"
                    {
#line 600 "add_type.m"
                      hlds__make_hlds__add_type__V_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 600 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_47_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_54));
#line 600 "add_type.m"
                    }
#line 600 "add_type.m"
                    {
#line 600 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 600 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_47_47));
#line 600 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 600 "add_type.m"
                    }
#line 597 "add_type.m"
                  }
#line 596 "add_type.m"
                  break;
#line 596 "add_type.m"
                case (MR_Integer) 2:
#line 602 "add_type.m"
                  {
#line 602 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__CSharpForeignType_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__ForeignType_27, (MR_Integer) 0)));
#line 602 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_44_44;
#line 602 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_55;

#line 603 "add_type.m"
                    {
#line 603 "add_type.m"
                      hlds__make_hlds__add_type__Data_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 603 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__CSharpForeignType_36));
#line 603 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_55, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 603 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_55, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 603 "add_type.m"
                    }
#line 605 "add_type.m"
                    {
#line 605 "add_type.m"
                      hlds__make_hlds__add_type__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_44_44, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_55));
#line 605 "add_type.m"
                    }
#line 605 "add_type.m"
                    {
#line 605 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 605 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_44_44));
#line 605 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 605 "add_type.m"
                    }
#line 602 "add_type.m"
                  }
#line 596 "add_type.m"
                  break;
#line 596 "add_type.m"
                case (MR_Integer) 3:
#line 607 "add_type.m"
                  {
#line 607 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__V_41_41;
#line 607 "add_type.m"
                    MR_Word hlds__make_hlds__add_type__Data_56;

#line 608 "add_type.m"
                    {
#line 608 "add_type.m"
                      hlds__make_hlds__add_type__Data_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 608 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_56, 0) = NULL;
#line 608 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_56, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeUserEqComp_28));
#line 608 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Data_56, 2) = ((MR_Box) (hlds__make_hlds__add_type__Assertions_29));
#line 608 "add_type.m"
                    }
#line 610 "add_type.m"
                    {
#line 610 "add_type.m"
                      hlds__make_hlds__add_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 610 "add_type.m"
                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__Data_56));
#line 610 "add_type.m"
                    }
#line 610 "add_type.m"
                    {
#line 610 "add_type.m"
                      hlds__make_hlds__add_type__Body_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 610 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 610 "add_type.m"
                      MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Body_32, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_41_41));
#line 610 "add_type.m"
                    }
#line 607 "add_type.m"
                  }
#line 596 "add_type.m"
                  break;
#line 596 "add_type.m"
              }
#line 590 "add_type.m"
              *hlds__make_hlds__add_type__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_32);
#line 590 "add_type.m"
            }
#line 565 "add_type.m"
            break;
#line 565 "add_type.m"
        }
#line 565 "add_type.m"
        break;
#line 565 "add_type.m"
    }
#line 565 "add_type.m"
  }
#line 561 "add_type.m"
}

#line 540 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(
#line 540 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyA_4,
#line 540 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeBodyB_5,
#line 540 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__TypeBody_6)
#line 540 "add_type.m"
{
#line 543 "add_type.m"
  {
#line 543 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCA_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 0)));
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaA_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 1)));
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 2)));
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyA_4, (MR_Integer) 3)));
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCB_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 0)));
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJavaB_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 1)));
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharpB_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 2)));
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlangB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeBodyB_5, (MR_Integer) 3)));
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeC_15;
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeJava_16;
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeCSharp_17;
#line 543 "add_type.m"
    MR_Word hlds__make_hlds__add_type__MaybeErlang_18;

#line 557 "add_type.m"
    if ((hlds__make_hlds__add_type__MaybeCA_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
      {
#line 557 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeCB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
          hlds__make_hlds__add_type__MaybeC_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "add_type.m"
        else
#line 559 "add_type.m"
          hlds__make_hlds__add_type__MaybeC_15 = hlds__make_hlds__add_type__MaybeCB_11;
#line 557 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 557 "add_type.m"
      }
#line 557 "add_type.m"
    else
#line 558 "add_type.m"
      {
#line 558 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
          {
#line 558 "add_type.m"
            hlds__make_hlds__add_type__MaybeC_15 = hlds__make_hlds__add_type__MaybeCA_7;
#line 558 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
          }
#line 558 "add_type.m"
      }
#line 543 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 543 "add_type.m"
      {
#line 557 "add_type.m"
        if ((hlds__make_hlds__add_type__MaybeJavaA_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
          {
#line 557 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeJavaB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
              hlds__make_hlds__add_type__MaybeJava_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "add_type.m"
            else
#line 559 "add_type.m"
              hlds__make_hlds__add_type__MaybeJava_16 = hlds__make_hlds__add_type__MaybeJavaB_12;
#line 557 "add_type.m"
            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 557 "add_type.m"
          }
#line 557 "add_type.m"
        else
#line 558 "add_type.m"
          {
#line 558 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
              {
#line 558 "add_type.m"
                hlds__make_hlds__add_type__MaybeJava_16 = hlds__make_hlds__add_type__MaybeJavaA_8;
#line 558 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
              }
#line 558 "add_type.m"
          }
#line 543 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 543 "add_type.m"
          {
#line 557 "add_type.m"
            if ((hlds__make_hlds__add_type__MaybeCSharpA_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
              {
#line 557 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeCSharpB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCSharp_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "add_type.m"
                else
#line 559 "add_type.m"
                  hlds__make_hlds__add_type__MaybeCSharp_17 = hlds__make_hlds__add_type__MaybeCSharpB_13;
#line 557 "add_type.m"
                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 557 "add_type.m"
              }
#line 557 "add_type.m"
            else
#line 558 "add_type.m"
              {
#line 558 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
                  {
#line 558 "add_type.m"
                    hlds__make_hlds__add_type__MaybeCSharp_17 = hlds__make_hlds__add_type__MaybeCSharpA_9;
#line 558 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
                  }
#line 558 "add_type.m"
              }
#line 543 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 543 "add_type.m"
              {
#line 557 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeErlangA_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                  {
#line 557 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeErlangB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                      hlds__make_hlds__add_type__MaybeErlang_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "add_type.m"
                    else
#line 559 "add_type.m"
                      hlds__make_hlds__add_type__MaybeErlang_18 = hlds__make_hlds__add_type__MaybeErlangB_14;
#line 557 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 557 "add_type.m"
                  }
#line 557 "add_type.m"
                else
#line 558 "add_type.m"
                  {
#line 558 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
                      {
#line 558 "add_type.m"
                        hlds__make_hlds__add_type__MaybeErlang_18 = hlds__make_hlds__add_type__MaybeErlangA_10;
#line 558 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
                      }
#line 558 "add_type.m"
                  }
#line 543 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 543 "add_type.m"
                  {
#line 552 "add_type.m"
                    {
#line 552 "add_type.m"
                      MR_Word base;
#line 552 "add_type.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 552 "add_type.m"
                      *hlds__make_hlds__add_type__TypeBody_6 = base;
#line 552 "add_type.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_15));
#line 552 "add_type.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_16));
#line 552 "add_type.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_17));
#line 552 "add_type.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_18));
#line 552 "add_type.m"
                    }
#line 552 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 543 "add_type.m"
                  }
#line 543 "add_type.m"
              }
#line 543 "add_type.m"
          }
#line 543 "add_type.m"
      }
#line 543 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 543 "add_type.m"
  }
#line 540 "add_type.m"
}

#line 509 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(
#line 509 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Target_1,
#line 509 "add_type.m"
  MR_Word hlds__make_hlds__add_type__MakeOptInterface_2,
#line 509 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__3_3,
#line 509 "add_type.m"
  MR_Word hlds__make_hlds__add_type__HeadVar__4_4,
#line 509 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__HeadVar__5_5)
#line 509 "add_type.m"
{
#line 514 "add_type.m"
  while (MR_TRUE)
#line 514 "add_type.m"
    {
#line 514 "add_type.m"
      /* tailcall optimized into a loop */
#line 514 "add_type.m"
      {
#line 514 "add_type.m"
        MR_bool hlds__make_hlds__add_type__succeeded;

#line 514 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 534 "add_type.m"
          {
#line 534 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_33_33;

#line 534 "add_type.m"
            hlds__make_hlds__add_type__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0)));
#line 534 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 534 "add_type.m"
              {
#line 534 "add_type.m"
                hlds__make_hlds__add_type__V_33_33 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 535 "add_type.m"
                /* direct tailcall eliminated */
#line 535 "add_type.m"
                {
#line 535 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3 = hlds__make_hlds__add_type__HeadVar__4_4;
#line 535 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4 = hlds__make_hlds__add_type__HeadVar__3_3;

#line 535 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__4_4 = hlds__make_hlds__add_type__HeadVar__4__tmp_copy_4;
#line 535 "add_type.m"
                  hlds__make_hlds__add_type__HeadVar__3_3 = hlds__make_hlds__add_type__HeadVar__3__tmp_copy_3;
#line 535 "add_type.m"
                }
#line 535 "add_type.m"
                continue;
#line 534 "add_type.m"
              }
#line 534 "add_type.m"
          }
#line 514 "add_type.m"
        else
#line 514 "add_type.m"
        if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 514 "add_type.m"
          {
#line 514 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__3_3), (MR_Integer) 0);

#line 514 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1))))
#line 514 "add_type.m"
              {
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody1_12;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__ForeignTypeBody_13;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCA_62;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaA_63;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpA_64;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangA_65;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCB_66;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJavaB_67;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharpB_68;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlangB_69;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeC_70;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeJava_71;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeCSharp_72;
#line 514 "add_type.m"
                MR_Word hlds__make_hlds__add_type__MaybeErlang_73;
#line 515 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 515 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 515 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 515 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 515 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 515 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 515 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_46_46 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 515 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 525 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_18_18;
#line 525 "add_type.m"
                MR_Word hlds__make_hlds__add_type__V_57_57;

#line 518 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeForeignTypeBody1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_3[0];
#line 518 "add_type.m"
                else
#line 517 "add_type.m"
                  hlds__make_hlds__add_type__ForeignTypeBody1_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeForeignTypeBody1_11, (MR_Integer) 0)));
#line 544 "add_type.m"
                hlds__make_hlds__add_type__MaybeCA_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_58_58, (MR_Integer) 0)));
#line 544 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaA_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_58_58, (MR_Integer) 1)));
#line 544 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpA_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_58_58, (MR_Integer) 2)));
#line 544 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangA_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_58_58, (MR_Integer) 3)));
#line 546 "add_type.m"
                hlds__make_hlds__add_type__MaybeCB_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 0)));
#line 546 "add_type.m"
                hlds__make_hlds__add_type__MaybeJavaB_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 1)));
#line 546 "add_type.m"
                hlds__make_hlds__add_type__MaybeCSharpB_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 2)));
#line 546 "add_type.m"
                hlds__make_hlds__add_type__MaybeErlangB_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody1_12, (MR_Integer) 3)));
#line 557 "add_type.m"
                if ((hlds__make_hlds__add_type__MaybeCA_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                  {
#line 557 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeCB_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                      hlds__make_hlds__add_type__MaybeC_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "add_type.m"
                    else
#line 559 "add_type.m"
                      hlds__make_hlds__add_type__MaybeC_70 = hlds__make_hlds__add_type__MaybeCB_66;
#line 557 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 557 "add_type.m"
                  }
#line 557 "add_type.m"
                else
#line 558 "add_type.m"
                  {
#line 558 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCB_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
                      {
#line 558 "add_type.m"
                        hlds__make_hlds__add_type__MaybeC_70 = hlds__make_hlds__add_type__MaybeCA_62;
#line 558 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
                      }
#line 558 "add_type.m"
                  }
#line 514 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 514 "add_type.m"
                  {
#line 557 "add_type.m"
                    if ((hlds__make_hlds__add_type__MaybeJavaA_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                      {
#line 557 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeJavaB_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                          hlds__make_hlds__add_type__MaybeJava_71 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "add_type.m"
                        else
#line 559 "add_type.m"
                          hlds__make_hlds__add_type__MaybeJava_71 = hlds__make_hlds__add_type__MaybeJavaB_67;
#line 557 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 557 "add_type.m"
                      }
#line 557 "add_type.m"
                    else
#line 558 "add_type.m"
                      {
#line 558 "add_type.m"
                        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeJavaB_67 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
                          {
#line 558 "add_type.m"
                            hlds__make_hlds__add_type__MaybeJava_71 = hlds__make_hlds__add_type__MaybeJavaA_63;
#line 558 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
                          }
#line 558 "add_type.m"
                      }
#line 514 "add_type.m"
                    if (hlds__make_hlds__add_type__succeeded)
#line 514 "add_type.m"
                      {
#line 557 "add_type.m"
                        if ((hlds__make_hlds__add_type__MaybeCSharpA_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                          {
#line 557 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeCSharpB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                              hlds__make_hlds__add_type__MaybeCSharp_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "add_type.m"
                            else
#line 559 "add_type.m"
                              hlds__make_hlds__add_type__MaybeCSharp_72 = hlds__make_hlds__add_type__MaybeCSharpB_68;
#line 557 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 557 "add_type.m"
                          }
#line 557 "add_type.m"
                        else
#line 558 "add_type.m"
                          {
#line 558 "add_type.m"
                            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeCSharpB_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
                              {
#line 558 "add_type.m"
                                hlds__make_hlds__add_type__MaybeCSharp_72 = hlds__make_hlds__add_type__MaybeCSharpA_64;
#line 558 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
                              }
#line 558 "add_type.m"
                          }
#line 514 "add_type.m"
                        if (hlds__make_hlds__add_type__succeeded)
#line 514 "add_type.m"
                          {
#line 557 "add_type.m"
                            if ((hlds__make_hlds__add_type__MaybeErlangA_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                              {
#line 557 "add_type.m"
                                if ((hlds__make_hlds__add_type__MaybeErlangB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeErlang_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "add_type.m"
                                else
#line 559 "add_type.m"
                                  hlds__make_hlds__add_type__MaybeErlang_73 = hlds__make_hlds__add_type__MaybeErlangB_69;
#line 557 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 557 "add_type.m"
                              }
#line 557 "add_type.m"
                            else
#line 558 "add_type.m"
                              {
#line 558 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MaybeErlangB_69 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 558 "add_type.m"
                                  {
#line 558 "add_type.m"
                                    hlds__make_hlds__add_type__MaybeErlang_73 = hlds__make_hlds__add_type__MaybeErlangA_65;
#line 558 "add_type.m"
                                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 558 "add_type.m"
                                  }
#line 558 "add_type.m"
                              }
#line 514 "add_type.m"
                            if (hlds__make_hlds__add_type__succeeded)
#line 514 "add_type.m"
                              {
#line 552 "add_type.m"
                                {
#line 552 "add_type.m"
                                  hlds__make_hlds__add_type__ForeignTypeBody_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 552 "add_type.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 0) = ((MR_Box) (hlds__make_hlds__add_type__MaybeC_70));
#line 552 "add_type.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 1) = ((MR_Box) (hlds__make_hlds__add_type__MaybeJava_71));
#line 552 "add_type.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 2) = ((MR_Box) (hlds__make_hlds__add_type__MaybeCSharp_72));
#line 552 "add_type.m"
                                  MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignTypeBody_13, 3) = ((MR_Box) (hlds__make_hlds__add_type__MaybeErlang_73));
#line 552 "add_type.m"
                                }
#line 525 "add_type.m"
                                hlds__make_hlds__add_type__V_18_18 = (MR_Integer) 1;
#line 525 "add_type.m"
                                {
#line 525 "add_type.m"
                                  backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_1, hlds__make_hlds__add_type__ForeignTypeBody_13, &hlds__make_hlds__add_type__V_57_57);
                                }
#line 525 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_18_18 == hlds__make_hlds__add_type__V_57_57);
#line 525 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 526 "add_type.m"
                                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__MakeOptInterface_2 == (MR_Integer) 0);
#line 524 "add_type.m"
                                if (hlds__make_hlds__add_type__succeeded)
#line 528 "add_type.m"
                                  *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__ForeignTypeBody_13);
#line 524 "add_type.m"
                                else
#line 530 "add_type.m"
                                  {
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_19_19;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_48_48;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_49_49;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_50_50;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_51_51;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_52_52;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_53_53;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_54_54;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_55_55;
#line 530 "add_type.m"
                                    MR_Word hlds__make_hlds__add_type__V_56_56;

#line 530 "add_type.m"
                                    {
#line 530 "add_type.m"
                                      hlds__make_hlds__add_type__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_19_19, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignTypeBody_13));
#line 530 "add_type.m"
                                    }
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 0)));
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 1)));
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 2)));
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 3)));
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 4)));
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 5)));
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_54_54 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 530 "add_type.m"
                                    hlds__make_hlds__add_type__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__HeadVar__4_4, (MR_Integer) 7)));
#line 530 "add_type.m"
                                    {
#line 530 "add_type.m"
                                      MR_Word base;
#line 530 "add_type.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 530 "add_type.m"
                                      *hlds__make_hlds__add_type__HeadVar__5_5 = base;
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_48_48));
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_49_49));
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_50_50));
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (hlds__make_hlds__add_type__V_51_51));
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (hlds__make_hlds__add_type__V_52_52));
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), base, 5) = ((MR_Box) (hlds__make_hlds__add_type__V_53_53));
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), base, 6) = ((MR_Box) ((hlds__make_hlds__add_type__V_54_54 | ((hlds__make_hlds__add_type__V_55_55 << (MR_Integer) 1)))));
#line 530 "add_type.m"
                                      MR_hl_field(MR_mktag(1), base, 7) = ((MR_Box) (hlds__make_hlds__add_type__V_19_19));
#line 530 "add_type.m"
                                    }
#line 530 "add_type.m"
                                  }
#line 524 "add_type.m"
                                hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 514 "add_type.m"
                              }
#line 514 "add_type.m"
                          }
#line 514 "add_type.m"
                      }
#line 514 "add_type.m"
                  }
#line 514 "add_type.m"
              }
#line 514 "add_type.m"
            else
#line 514 "add_type.m"
            if (((MR_tag((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4)) == (MR_mktag((MR_Integer) 0))))
#line 537 "add_type.m"
              {
#line 537 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body1_38 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__HeadVar__4_4), (MR_Integer) 0);
#line 537 "add_type.m"
                MR_Word hlds__make_hlds__add_type__Body_39;

#line 538 "add_type.m"
                {
#line 538 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_2_3_p_0(hlds__make_hlds__add_type__V_58_58, hlds__make_hlds__add_type__Body1_38, &hlds__make_hlds__add_type__Body_39);
                }
#line 537 "add_type.m"
                if (hlds__make_hlds__add_type__succeeded)
#line 537 "add_type.m"
                  {
#line 537 "add_type.m"
                    *hlds__make_hlds__add_type__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) hlds__make_hlds__add_type__Body_39);
#line 537 "add_type.m"
                    hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 537 "add_type.m"
                  }
#line 537 "add_type.m"
              }
#line 514 "add_type.m"
            else
#line 514 "add_type.m"
              hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 514 "add_type.m"
          }
#line 514 "add_type.m"
        else
#line 514 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 514 "add_type.m"
        return hlds__make_hlds__add_type__succeeded;
#line 514 "add_type.m"
      }
#line 514 "add_type.m"
      break;
#line 514 "add_type.m"
    }
#line 509 "add_type.m"
}

#line 467 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_9_p_0(
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_10,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__ForeignTypeBody_11,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__PrevErrors_12,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_13,
#line 467 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__FoundInvalidType_14,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26,
#line 467 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27,
#line 467 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28,
#line 467 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29)
#line 467 "add_type.m"
{
#line 473 "add_type.m"
  {
#line 473 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 473 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Name_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 0)));
#line 473 "add_type.m"
    MR_Integer hlds__make_hlds__add_type__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_10, (MR_Integer) 1)));
#line 473 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_19;
#line 473 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Target_20;
#line 477 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_69_69;

#line 475 "add_type.m"
    {
#line 475 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26, &hlds__make_hlds__add_type__Globals_19);
    }
#line 476 "add_type.m"
    {
#line 476 "add_type.m"
      libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_19, &hlds__make_hlds__add_type__Target_20);
    }
#line 477 "add_type.m"
    {
#line 477 "add_type.m"
      backend_libs__foreign__have_foreign_type_for_backend_3_p_0(hlds__make_hlds__add_type__Target_20, hlds__make_hlds__add_type__ForeignTypeBody_11, &hlds__make_hlds__add_type__V_69_69);
    }
#line 477 "add_type.m"
    hlds__make_hlds__add_type__succeeded = ((MR_Integer) 1 == hlds__make_hlds__add_type__V_69_69);
#line 477 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 478 "add_type.m"
      {
#line 478 "add_type.m"
        *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 0;
#line 478 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
#line 478 "add_type.m"
      }
#line 477 "add_type.m"
    else
#line 479 "add_type.m"
      {
#line 479 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__PrevErrors_12 == (MR_Integer) 1);
#line 479 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 483 "add_type.m"
          {
#line 483 "add_type.m"
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
#line 483 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28;
#line 483 "add_type.m"
          }
#line 479 "add_type.m"
        else
#line 489 "add_type.m"
          {
#line 489 "add_type.m"
            MR_String hlds__make_hlds__add_type__LangStr_21 = ((&hlds__make_hlds__add_type_vector_common_5[0 + hlds__make_hlds__add_type__Target_20]))->hlds__make_hlds__add_type__vector_common_type_5_0__vct_5_f_0;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__MainPieces_22;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Msg_24;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Spec_25;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_33_33;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_34_34;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_35_35;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_38_38;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_41_41;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_42_42;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_43_43;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_58_58;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_59_59;
#line 489 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_66_66;

#line 490 "add_type.m"
            {
#line 490 "add_type.m"
              hlds__make_hlds__add_type__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_34_34, 0) = ((MR_Box) (hlds__make_hlds__add_type__LangStr_21));
#line 490 "add_type.m"
            }
#line 492 "add_type.m"
            {
#line 492 "add_type.m"
              hlds__make_hlds__add_type__V_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_43_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_17));
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_43_43, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_18));
#line 492 "add_type.m"
            }
#line 492 "add_type.m"
            {
#line 492 "add_type.m"
              hlds__make_hlds__add_type__V_42_42 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_42_42, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_42_42, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_43_43));
#line 492 "add_type.m"
            }
#line 492 "add_type.m"
            {
#line 492 "add_type.m"
              hlds__make_hlds__add_type__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_42_42));
#line 492 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_41_41, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[53])));
#line 492 "add_type.m"
            }
#line 491 "add_type.m"
            {
#line 491 "add_type.m"
              hlds__make_hlds__add_type__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_38_38, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[72])));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_38_38, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_41_41));
#line 491 "add_type.m"
            }
#line 491 "add_type.m"
            {
#line 491 "add_type.m"
              hlds__make_hlds__add_type__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[71])));
#line 491 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_35_35, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_38_38));
#line 491 "add_type.m"
            }
#line 490 "add_type.m"
            {
#line 490 "add_type.m"
              hlds__make_hlds__add_type__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_34_34));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_33_33, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_35_35));
#line 490 "add_type.m"
            }
#line 490 "add_type.m"
            {
#line 490 "add_type.m"
              hlds__make_hlds__add_type__MainPieces_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[70])));
#line 490 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MainPieces_22, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_33_33));
#line 490 "add_type.m"
            }
#line 496 "add_type.m"
            {
#line 496 "add_type.m"
              hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 496 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_59_59, 0) = ((MR_Box) (hlds__make_hlds__add_type__MainPieces_22));
#line 496 "add_type.m"
            }
#line 496 "add_type.m"
            {
#line 496 "add_type.m"
              hlds__make_hlds__add_type__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 496 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_58_58, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_59_59));
#line 496 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_58_58, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[74])));
#line 496 "add_type.m"
            }
#line 495 "add_type.m"
            {
#line 495 "add_type.m"
              hlds__make_hlds__add_type__Msg_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 495 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_13));
#line 495 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Msg_24, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_58_58));
#line 495 "add_type.m"
            }
#line 498 "add_type.m"
            {
#line 498 "add_type.m"
              hlds__make_hlds__add_type__V_66_66 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 498 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_66_66, 0) = ((MR_Box) (hlds__make_hlds__add_type__Msg_24));
#line 498 "add_type.m"
              MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_66_66, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 498 "add_type.m"
            }
#line 497 "add_type.m"
            {
#line 497 "add_type.m"
              hlds__make_hlds__add_type__Spec_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 497 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 497 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 497 "add_type.m"
              MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Spec_25, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_66_66));
#line 497 "add_type.m"
            }
#line 499 "add_type.m"
            {
#line 499 "add_type.m"
              MR_Word base;
#line 499 "add_type.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 499 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_29 = base;
#line 499 "add_type.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__Spec_25));
#line 499 "add_type.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_28));
#line 499 "add_type.m"
            }
#line 500 "add_type.m"
            *hlds__make_hlds__add_type__FoundInvalidType_14 = (MR_Integer) 1;
#line 489 "add_type.m"
          }
#line 479 "add_type.m"
      }
#line 473 "add_type.m"
    *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_27 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_26;
#line 473 "add_type.m"
  }
#line 467 "add_type.m"
}

#line 358 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(
#line 358 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldStatus_3,
#line 358 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NewDefnStatus_4)
#line 358 "add_type.m"
{
#line 362 "add_type.m"
  {
#line 362 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 362 "add_type.m"
    MR_Word hlds__make_hlds__add_type__V_5_5 = (MR_Word) hlds__make_hlds__add_type__OldStatus_3;

#line 362 "add_type.m"
    hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 362 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 365 "add_type.m"
      {
#line 365 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_6_6;

#line 365 "add_type.m"
        {
#line 365 "add_type.m"
          hlds__make_hlds__add_type__V_6_6 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
        }
#line 365 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_6_6 == (MR_Integer) 0);
#line 365 "add_type.m"
      }
#line 362 "add_type.m"
    else
#line 366 "add_type.m"
      {
#line 366 "add_type.m"
        MR_Word hlds__make_hlds__add_type__V_7_7 = (MR_Word) hlds__make_hlds__add_type__OldStatus_3;

#line 366 "add_type.m"
        hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 366 "add_type.m"
        if (hlds__make_hlds__add_type__succeeded)
#line 367 "add_type.m"
          {
#line 367 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_8_8 = (MR_Word) hlds__make_hlds__add_type__NewDefnStatus_4;

#line 367 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 367 "add_type.m"
          }
#line 366 "add_type.m"
        else
#line 369 "add_type.m"
          {
#line 369 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_9_9;
#line 369 "add_type.m"
            MR_Word hlds__make_hlds__add_type__V_10_10;

#line 369 "add_type.m"
            {
#line 369 "add_type.m"
              hlds__make_hlds__add_type__V_9_9 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldStatus_3);
            }
#line 369 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_9_9 == (MR_Integer) 0);
#line 369 "add_type.m"
            if (hlds__make_hlds__add_type__succeeded)
#line 369 "add_type.m"
              {
#line 370 "add_type.m"
                {
#line 370 "add_type.m"
                  hlds__make_hlds__add_type__V_10_10 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__NewDefnStatus_4);
                }
#line 370 "add_type.m"
                hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__V_10_10 == (MR_Integer) 0);
#line 369 "add_type.m"
              }
#line 369 "add_type.m"
          }
#line 366 "add_type.m"
      }
#line 362 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 362 "add_type.m"
  }
#line 358 "add_type.m"
}

#line 329 "add_type.m"
static MR_bool MR_CALL 
hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(
#line 329 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_3,
#line 329 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_4)
#line 329 "add_type.m"
{
#line 332 "add_type.m"
  {
#line 332 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 332 "add_type.m"
    MR_Word hlds__make_hlds__add_type__OldIsSolverType_5;

#line 340 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 341 "add_type.m"
      {
#line 341 "add_type.m"
        MR_Word hlds__make_hlds__add_type__Details_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 1)));

#line 345 "add_type.m"
#line 345 "add_type.m"
        switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_9)) {
#line 345 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 345 "add_type.m"
          case (MR_Integer) 0:
#line 345 "add_type.m"
#line 345 "add_type.m"
            switch (MR_unmkbody(hlds__make_hlds__add_type__Details_9)) {
#line 345 "add_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 345 "add_type.m"
              case (MR_Integer) 0:
#line 344 "add_type.m"
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 345 "add_type.m"
                break;
#line 345 "add_type.m"
              case (MR_Integer) 1:
#line 350 "add_type.m"
                hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 345 "add_type.m"
                break;
#line 345 "add_type.m"
            }
#line 345 "add_type.m"
            break;
#line 345 "add_type.m"
          case (MR_Integer) 1:
#line 347 "add_type.m"
            hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 0;
#line 345 "add_type.m"
            break;
#line 345 "add_type.m"
        }
#line 341 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 341 "add_type.m"
      }
#line 340 "add_type.m"
    else
#line 340 "add_type.m"
    if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 340 "add_type.m"
      {
#line 340 "add_type.m"
        hlds__make_hlds__add_type__OldIsSolverType_5 = (MR_Integer) 1;
#line 340 "add_type.m"
        hlds__make_hlds__add_type__succeeded = MR_TRUE;
#line 340 "add_type.m"
      }
#line 340 "add_type.m"
    else
#line 340 "add_type.m"
      hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 332 "add_type.m"
    if (hlds__make_hlds__add_type__succeeded)
#line 340 "add_type.m"
      {
#line 340 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 341 "add_type.m"
          {
#line 341 "add_type.m"
            MR_Word hlds__make_hlds__add_type__Details_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 1)));

#line 345 "add_type.m"
#line 345 "add_type.m"
            switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Details_14)) {
#line 345 "add_type.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 345 "add_type.m"
              case (MR_Integer) 0:
#line 345 "add_type.m"
#line 345 "add_type.m"
                switch (MR_unmkbody(hlds__make_hlds__add_type__Details_14)) {
#line 345 "add_type.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 345 "add_type.m"
                  case (MR_Integer) 0:
#line 344 "add_type.m"
                    {
#line 335 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 335 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 344 "add_type.m"
                    }
#line 345 "add_type.m"
                    break;
#line 345 "add_type.m"
                  case (MR_Integer) 1:
#line 350 "add_type.m"
                    {
#line 335 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 335 "add_type.m"
                      hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 350 "add_type.m"
                    }
#line 345 "add_type.m"
                    break;
#line 345 "add_type.m"
                }
#line 345 "add_type.m"
                break;
#line 345 "add_type.m"
              case (MR_Integer) 1:
#line 347 "add_type.m"
                {
#line 335 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 0);
#line 335 "add_type.m"
                  hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 347 "add_type.m"
                }
#line 345 "add_type.m"
                break;
#line 345 "add_type.m"
            }
#line 341 "add_type.m"
          }
#line 340 "add_type.m"
        else
#line 340 "add_type.m"
        if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 340 "add_type.m"
          {
#line 335 "add_type.m"
            hlds__make_hlds__add_type__succeeded = (hlds__make_hlds__add_type__OldIsSolverType_5 == (MR_Integer) 1);
#line 335 "add_type.m"
            hlds__make_hlds__add_type__succeeded = !(hlds__make_hlds__add_type__succeeded);
#line 340 "add_type.m"
          }
#line 340 "add_type.m"
        else
#line 340 "add_type.m"
          hlds__make_hlds__add_type__succeeded = MR_FALSE;
#line 340 "add_type.m"
      }
#line 332 "add_type.m"
    return hlds__make_hlds__add_type__succeeded;
#line 332 "add_type.m"
  }
#line 329 "add_type.m"
}

#line 322 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(
#line 322 "add_type.m"
  MR_Word hlds__make_hlds__add_type__OldBody_5,
#line 322 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__OldBody_2,
#line 322 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Body_6,
#line 322 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__Body_4)
#line 322 "add_type.m"
{
#line 325 "add_type.m"
  {
#line 325 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 325 "add_type.m"
    *hlds__make_hlds__add_type__OldBody_2 = hlds__make_hlds__add_type__OldBody_5;
#line 325 "add_type.m"
    *hlds__make_hlds__add_type__Body_4 = hlds__make_hlds__add_type__Body_6;
#line 325 "add_type.m"
  }
#line 322 "add_type.m"
}

#line 300 "add_type.m"
static MR_Word MR_CALL 
hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0(void)
#line 300 "add_type.m"
{
#line 302 "add_type.m"
  {
#line 302 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;

#line 302 "add_type.m"
    return (MR_Word) MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[51]);
#line 302 "add_type.m"
  }
#line 300 "add_type.m"
}

#line 41 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__process_type_defn_8_p_0(
#line 41 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeCtor_9,
#line 41 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_10,
#line 41 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59,
#line 41 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60,
#line 41 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61,
#line 41 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62,
#line 41 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63,
#line 41 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64)
#line 41 "add_type.m"
{
#line 374 "add_type.m"
  {
#line 374 "add_type.m"
    MR_bool hlds__make_hlds__add_type__succeeded;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Context_14;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__TVarSet_15;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Args_16;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__KindMap_17;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Body_18;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Status_19;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__NeedQual_20;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__Globals_21;
#line 374 "add_type.m"
    MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;

#line 375 "add_type.m"
    {
#line 375 "add_type.m"
      hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Context_14);
    }
#line 376 "add_type.m"
    {
#line 376 "add_type.m"
      hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__TVarSet_15);
    }
#line 377 "add_type.m"
    {
#line 377 "add_type.m"
      hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Args_16);
    }
#line 378 "add_type.m"
    {
#line 378 "add_type.m"
      hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__KindMap_17);
    }
#line 379 "add_type.m"
    {
#line 379 "add_type.m"
      hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Body_18);
    }
#line 380 "add_type.m"
    {
#line 380 "add_type.m"
      hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__Status_19);
    }
#line 381 "add_type.m"
    {
#line 381 "add_type.m"
      hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__NeedQual_20);
    }
#line 382 "add_type.m"
    {
#line 382 "add_type.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Globals_21);
    }
#line 423 "add_type.m"
#line 423 "add_type.m"
    switch (MR_tag((MR_Word) hlds__make_hlds__add_type__Body_18)) {
#line 423 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 423 "add_type.m"
      case (MR_Integer) 0:
#line 424 "add_type.m"
        {
#line 424 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignTypeBody_50 = (MR_Word) MR_body(((MR_Word) hlds__make_hlds__add_type__Body_18), (MR_Integer) 0);
#line 424 "add_type.m"
          MR_Word hlds__make_hlds__add_type__PrevErrors_51;
#line 424 "add_type.m"
          MR_Word hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52;

#line 425 "add_type.m"
          {
#line 425 "add_type.m"
            hlds__hlds_data__get_type_defn_prev_errors_2_p_0(hlds__make_hlds__add_type__TypeDefn_10, &hlds__make_hlds__add_type__PrevErrors_51);
          }
#line 426 "add_type.m"
          {
#line 426 "add_type.m"
            hlds__make_hlds__add_type__check_foreign_type_9_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ForeignTypeBody_50, hlds__make_hlds__add_type__PrevErrors_51, hlds__make_hlds__add_type__Context_14, &hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64);
          }
#line 431 "add_type.m"
#line 431 "add_type.m"
          switch (hlds__make_hlds__add_type__FoundInvalidTypeInForeignBody_52) {
#line 431 "add_type.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 431 "add_type.m"
            case (MR_Integer) 0:
#line 432 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 431 "add_type.m"
              break;
#line 431 "add_type.m"
            case (MR_Integer) 1:
#line 430 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
#line 431 "add_type.m"
              break;
#line 431 "add_type.m"
          }
#line 424 "add_type.m"
        }
#line 423 "add_type.m"
        break;
#line 423 "add_type.m"
      case (MR_Integer) 1:
#line 385 "add_type.m"
        {
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ConsList_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)));
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__UserEqCmp_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 4)));
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ReservedTag_28 = ((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Ctors0_31;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__PQInfo_32;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorFields0_33;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__TypeCtorSymName_34;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__TypeCtorModuleName_37;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorFields_39;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Ctors_40;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorAddSpecs_41;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72;
#line 385 "add_type.m"
          MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 384 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 1)));
#line 384 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 2)));
#line 384 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 3)));
#line 384 "add_type.m"
          MR_Word hlds__make_hlds__add_type___DirectArgCtors_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 5)));
#line 384 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 384 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Body_18, (MR_Integer) 7)));
#line 389 "add_type.m"
          MR_Integer hlds__make_hlds__add_type__V_35_35;
#line 412 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorName_44;
#line 412 "add_type.m"
          MR_Word hlds__make_hlds__add_type__CtorArgType_45;
#line 413 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_46_46;

#line 386 "add_type.m"
          {
#line 386 "add_type.m"
            hlds__hlds_module__module_info_get_cons_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__Ctors0_31);
          }
#line 387 "add_type.m"
          {
#line 387 "add_type.m"
            hlds__hlds_module__module_info_get_partial_qualifier_info_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__PQInfo_32);
          }
#line 388 "add_type.m"
          {
#line 388 "add_type.m"
            hlds__hlds_module__module_info_get_ctor_field_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__CtorFields0_33);
          }
#line 389 "add_type.m"
          hlds__make_hlds__add_type__TypeCtorSymName_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 0)));
#line 389 "add_type.m"
          hlds__make_hlds__add_type__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_9, (MR_Integer) 1)));
#line 393 "add_type.m"
          if (((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeCtorSymName_34)) == (MR_mktag((MR_Integer) 1))))
#line 394 "add_type.m"
            {
#line 394 "add_type.m"
              MR_String hlds__make_hlds__add_type__V_38_38;

#line 394 "add_type.m"
              hlds__make_hlds__add_type__TypeCtorModuleName_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 0)));
#line 394 "add_type.m"
              hlds__make_hlds__add_type__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__TypeCtorSymName_34, (MR_Integer) 1)));
#line 394 "add_type.m"
            }
#line 393 "add_type.m"
          else
#line 391 "add_type.m"
            {
#line 392 "add_type.m"
              {
#line 392 "add_type.m"
                mercury__require__unexpected_3_p_0((MR_String) "hlds.make_hlds.add_type", (MR_String) "predicate \140hlds.make_hlds.add_type.process_type_defn\'/8", (MR_String) "unqualified TypeCtorSymName");
#line 392 "add_type.m"
                return;
              }
#line 391 "add_type.m"
            }
#line 396 "add_type.m"
          {
#line 396 "add_type.m"
            hlds__make_hlds__add_type__add_type_defn_ctors_15_p_0(hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__TypeCtorModuleName_37, hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Args_16, hlds__make_hlds__add_type__KindMap_17, hlds__make_hlds__add_type__NeedQual_20, hlds__make_hlds__add_type__PQInfo_32, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__CtorFields0_33, &hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__Ctors0_31, &hlds__make_hlds__add_type__Ctors_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__make_hlds__add_type__CtorAddSpecs_41);
          }
#line 399 "add_type.m"
          {
#line 399 "add_type.m"
            hlds__hlds_module__module_info_set_cons_table_3_p_0(hlds__make_hlds__add_type__Ctors_40, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72);
          }
#line 400 "add_type.m"
          {
#line 400 "add_type.m"
            hlds__hlds_module__module_info_set_ctor_field_table_3_p_0(hlds__make_hlds__add_type__CtorFields_39, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_72_72, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73);
          }
#line 404 "add_type.m"
          if ((hlds__make_hlds__add_type__CtorAddSpecs_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "add_type.m"
            {
#line 403 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 403 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 403 "add_type.m"
            }
#line 404 "add_type.m"
          else
#line 405 "add_type.m"
            {
#line 406 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = (MR_Integer) 1;
#line 407 "add_type.m"
              {
#line 407 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0, hlds__make_hlds__add_type__CtorAddSpecs_41, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63);
              }
#line 405 "add_type.m"
            }
#line 413 "add_type.m"
          {
#line 413 "add_type.m"
            hlds__make_hlds__add_type__succeeded = parse_tree__prog_type__type_ctor_should_be_notag_8_p_0(hlds__make_hlds__add_type__Globals_21, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ReservedTag_28, hlds__make_hlds__add_type__ConsList_22, hlds__make_hlds__add_type__UserEqCmp_26, &hlds__make_hlds__add_type__CtorName_44, &hlds__make_hlds__add_type__CtorArgType_45, &hlds__make_hlds__add_type__V_46_46);
          }
#line 412 "add_type.m"
          if (hlds__make_hlds__add_type__succeeded)
#line 416 "add_type.m"
            {
#line 416 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagType_47;
#line 416 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagTypes0_48;
#line 416 "add_type.m"
              MR_Word hlds__make_hlds__add_type__NoTagTypes_49;

#line 416 "add_type.m"
              {
#line 416 "add_type.m"
                hlds__make_hlds__add_type__NoTagType_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 416 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 0) = ((MR_Box) (hlds__make_hlds__add_type__Args_16));
#line 416 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 1) = ((MR_Box) (hlds__make_hlds__add_type__CtorName_44));
#line 416 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__NoTagType_47, 2) = ((MR_Box) (hlds__make_hlds__add_type__CtorArgType_45));
#line 416 "add_type.m"
              }
#line 417 "add_type.m"
              {
#line 417 "add_type.m"
                hlds__hlds_module__module_info_get_no_tag_types_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__NoTagTypes0_48);
              }
#line 418 "add_type.m"
              {
#line 418 "add_type.m"
                mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0, ((MR_Box) (hlds__make_hlds__add_type__TypeCtor_9)), ((MR_Box) (hlds__make_hlds__add_type__NoTagType_47)), hlds__make_hlds__add_type__NoTagTypes0_48, &hlds__make_hlds__add_type__NoTagTypes_49);
              }
#line 419 "add_type.m"
              {
#line 419 "add_type.m"
                hlds__hlds_module__module_info_set_no_tag_types_3_p_0(hlds__make_hlds__add_type__NoTagTypes_49, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76);
              }
#line 416 "add_type.m"
            }
#line 412 "add_type.m"
          else
#line 412 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_73_73;
#line 385 "add_type.m"
        }
#line 423 "add_type.m"
        break;
#line 423 "add_type.m"
      case (MR_Integer) 2:
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
#line 423 "add_type.m"
        break;
#line 423 "add_type.m"
      case (MR_Integer) 3:
#line 423 "add_type.m"
#line 423 "add_type.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body_18, (MR_Integer) 0)))) {
#line 423 "add_type.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 423 "add_type.m"
          case (MR_Integer) 0:
#line 436 "add_type.m"
            {
#line 436 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 436 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
#line 436 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 436 "add_type.m"
            }
#line 423 "add_type.m"
            break;
#line 423 "add_type.m"
          case (MR_Integer) 1:
#line 435 "add_type.m"
            {
#line 435 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60 = hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_0_59;
#line 435 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_61;
#line 435 "add_type.m"
              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_64 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_63;
#line 435 "add_type.m"
            }
#line 423 "add_type.m"
            break;
#line 423 "add_type.m"
        }
#line 423 "add_type.m"
        break;
#line 423 "add_type.m"
    }
#line 453 "add_type.m"
#line 453 "add_type.m"
    switch (*hlds__make_hlds__add_type__STATE_VARIABLE_FoundInvalidType_60) {
#line 453 "add_type.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 453 "add_type.m"
      case (MR_Integer) 0:
#line 454 "add_type.m"
        {
#line 454 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ArgTypes_57;
#line 454 "add_type.m"
          MR_Word hlds__make_hlds__add_type__Type_58;
#line 454 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_77_77;

#line 458 "add_type.m"
          {
#line 458 "add_type.m"
            hlds__make_hlds__add_type__V_77_77 = mercury__map__init_0_f_0((MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0);
          }
#line 458 "add_type.m"
          {
#line 458 "add_type.m"
            parse_tree__prog_type__var_list_to_type_list_3_p_0(hlds__make_hlds__add_type__V_77_77, hlds__make_hlds__add_type__Args_16, &hlds__make_hlds__add_type__ArgTypes_57);
          }
#line 459 "add_type.m"
          {
#line 459 "add_type.m"
            parse_tree__prog_type__construct_type_3_p_0(hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__ArgTypes_57, &hlds__make_hlds__add_type__Type_58);
          }
#line 460 "add_type.m"
          {
#line 460 "add_type.m"
            hlds__make_hlds__add_special_pred__add_special_preds_8_p_0(hlds__make_hlds__add_type__TVarSet_15, hlds__make_hlds__add_type__Type_58, hlds__make_hlds__add_type__TypeCtor_9, hlds__make_hlds__add_type__Body_18, hlds__make_hlds__add_type__Context_14, hlds__make_hlds__add_type__Status_19, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62);
          }
#line 454 "add_type.m"
        }
#line 453 "add_type.m"
        break;
#line 453 "add_type.m"
      case (MR_Integer) 1:
#line 441 "add_type.m"
        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_62 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_76_76;
#line 453 "add_type.m"
        break;
#line 453 "add_type.m"
    }
#line 374 "add_type.m"
  }
#line 41 "add_type.m"
}

#line 280 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_1(
#line 280 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 280 "add_type.m"
{
#line 280 "add_type.m"
  {
#line 280 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 280 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_0, 1);
#line 280 "add_type.m"
  }
#line 280 "add_type.m"
}

#line 282 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_3(
#line 282 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 282 "add_type.m"
{
#line 282 "add_type.m"
  {
#line 282 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 282 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_92 = ((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__conv0_Var_92);
#line 282 "add_type.m"
    {
#line 282 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_11_p_0_2(hlds__make_hlds__add_type__env_ptr);
    }
#line 282 "add_type.m"
  }
#line 282 "add_type.m"
}

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_4(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 283 "add_type.m"
{
#line 283 "add_type.m"
  {
#line 283 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 283 "add_type.m"
    MR_builtin_longjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_1, 1);
#line 283 "add_type.m"
  }
#line 283 "add_type.m"
}

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_5(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 283 "add_type.m"
{
#line 283 "add_type.m"
  {
#line 283 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 4904 "hlds.make_hlds.add_type.c"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_307_307 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 283 "add_type.m"
    {
#line 283 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = mercury__builtin__unify_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_307_307, ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Var_92)), ((MR_Box) ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__V_305_305)));
    }
#line 283 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 283 "add_type.m"
      {
#line 283 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_11_p_0_4(hlds__make_hlds__add_type__env_ptr);
      }
#line 283 "add_type.m"
  }
#line 283 "add_type.m"
}

#line 283 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_6(
#line 283 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 283 "add_type.m"
{
#line 283 "add_type.m"
  {
#line 283 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 283 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_1) == 0)
#line 283 "add_type.m"
      {
#line 283 "add_type.m"
        {
#line 283 "add_type.m"
          parse_tree__prog_type__type_contains_var_2_p_0((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__EqvType_91, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__V_305_305, hlds__make_hlds__add_type__module_add_type_defn_11_p_0_5, hlds__make_hlds__add_type__env_ptr);
        }
#line 283 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_FALSE;
#line 283 "add_type.m"
      }
#line 283 "add_type.m"
    else
#line 283 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_TRUE;
#line 283 "add_type.m"
  }
#line 283 "add_type.m"
}

#line 280 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_2(
#line 280 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 280 "add_type.m"
{
#line 280 "add_type.m"
  {
#line 280 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 283 "add_type.m"
    {
#line 283 "add_type.m"
      hlds__make_hlds__add_type__module_add_type_defn_11_p_0_6(hlds__make_hlds__add_type__env_ptr);
    }
#line 283 "add_type.m"
    (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded);
#line 283 "add_type.m"
    if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 283 "add_type.m"
      {
#line 283 "add_type.m"
        hlds__make_hlds__add_type__module_add_type_defn_11_p_0_1(hlds__make_hlds__add_type__env_ptr);
      }
#line 280 "add_type.m"
  }
#line 280 "add_type.m"
}

#line 280 "add_type.m"
static void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0_7(
#line 280 "add_type.m"
  void * hlds__make_hlds__add_type__env_ptr_arg)
#line 280 "add_type.m"
{
#line 280 "add_type.m"
  {
#line 280 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s * hlds__make_hlds__add_type__env_ptr = (struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s *) hlds__make_hlds__add_type__env_ptr_arg;

#line 280 "add_type.m"
    if (MR_builtin_setjmp((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__commit_0) == 0)
#line 280 "add_type.m"
      {
#line 280 "add_type.m"
        {
#line 280 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_251_251;

#line 280 "add_type.m"
          (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51)) == (MR_mktag((MR_Integer) 2)));
#line 280 "add_type.m"
          if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 280 "add_type.m"
            {
#line 280 "add_type.m"
              (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__EqvType_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, (MR_Integer) 0)));
#line 280 "add_type.m"
              {
#line 281 "add_type.m"
                hlds__make_hlds__add_type__V_251_251 = (MR_Word) (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48;
#line 281 "add_type.m"
                (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_251_251 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 280 "add_type.m"
                if ((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 282 "add_type.m"
                  {
#line 282 "add_type.m"
                    mercury__list__member_2_p_1((hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_301_301, &(hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__conv0_Var_92, (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14, hlds__make_hlds__add_type__module_add_type_defn_11_p_0_3, hlds__make_hlds__add_type__env_ptr);
                  }
#line 280 "add_type.m"
              }
#line 280 "add_type.m"
            }
#line 280 "add_type.m"
        }
#line 280 "add_type.m"
        (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_FALSE;
#line 280 "add_type.m"
      }
#line 280 "add_type.m"
    else
#line 280 "add_type.m"
      (hlds__make_hlds__add_type__env_ptr)->hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_TRUE;
#line 280 "add_type.m"
  }
#line 280 "add_type.m"
}

#line 34 "add_type.m"
void MR_CALL 
hlds__make_hlds__add_type__module_add_type_defn_11_p_0(
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TVarSet_12,
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Name_13,
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Args_14,
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeDefn_15,
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__Context_16,
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__TypeStatus0_17,
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__NeedQual_18,
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96,
#line 34 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97,
#line 34 "add_type.m"
  MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_98,
#line 34 "add_type.m"
  MR_Word * hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99)
#line 34 "add_type.m"
{
#line 34 "add_type.m"
  {
#line 34 "add_type.m"
    struct hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0_s hlds__make_hlds__add_type__env;

#line 34 "add_type.m"
    (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14 = hlds__make_hlds__add_type__Args_14;
#line 74 "add_type.m"
    {
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Globals_21;
#line 74 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__Arity_22;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtor_23;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Body0_24;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeStatus1_35;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeTable0_45;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeOldDefn_55;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__KindMap_57;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeDefn1_58;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137;
#line 74 "add_type.m"
      MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 102 "add_type.m"
      MR_Word hlds__make_hlds__add_type__TypeCtorInfo_302_302;
#line 102 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Ctors_36;
#line 102 "add_type.m"
      MR_Word hlds__make_hlds__add_type__MaybeUserUC_37;
#line 102 "add_type.m"
      MR_Word hlds__make_hlds__add_type__Constructor_39;
#line 102 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_102_102;
#line 102 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_103_103;
#line 102 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_104_104;
#line 102 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_105_105;
#line 102 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_304_304;
#line 102 "add_type.m"
      MR_Word hlds__make_hlds__add_type___MaybeDirectArg_38;
#line 104 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_296_296;
#line 104 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_297_297;
#line 104 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_298_298;
#line 104 "add_type.m"
      MR_Integer hlds__make_hlds__add_type__V_299_299;
#line 104 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_300_300;
#line 105 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_40_40;
#line 126 "add_type.m"
      MR_Word hlds__make_hlds__add_type__OldDefn0_46;
#line 164 "add_type.m"
      MR_Word hlds__make_hlds__add_type__V_59_59;

#line 75 "add_type.m"
      {
#line 75 "add_type.m"
        hlds__hlds_module__module_info_get_globals_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, &hlds__make_hlds__add_type__Globals_21);
      }
#line 5149 "hlds.make_hlds.add_type.c"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_301_301 = (MR_Word) &hlds__make_hlds__add_type_scalar_common_1[0];
#line 76 "add_type.m"
      {
#line 76 "add_type.m"
        mercury__list__length_2_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_301_301, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14, &hlds__make_hlds__add_type__Arity_22);
      }
#line 77 "add_type.m"
      {
#line 77 "add_type.m"
        hlds__make_hlds__add_type__TypeCtor_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 77 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_23, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 77 "add_type.m"
        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeCtor_23, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
#line 77 "add_type.m"
      }
#line 78 "add_type.m"
      {
#line 78 "add_type.m"
        hlds__make_hlds__add_type__convert_type_defn_4_p_0(hlds__make_hlds__add_type__TypeDefn_15, hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__Globals_21, &hlds__make_hlds__add_type__Body0_24);
      }
#line 82 "add_type.m"
      if (((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_24)) == (MR_mktag((MR_Integer) 1))))
#line 83 "add_type.m"
        {
#line 83 "add_type.m"
          MR_String hlds__make_hlds__add_type__V_100_100;

#line 84 "add_type.m"
          {
#line 84 "add_type.m"
            hlds__make_hlds__add_type__V_100_100 = mercury__term__context_file_1_f_0(hlds__make_hlds__add_type__Context_16);
          }
#line 84 "add_type.m"
          {
#line 84 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = mercury__string__suffix_2_p_0(hlds__make_hlds__add_type__V_100_100, (MR_String) ".int2");
          }
#line 83 "add_type.m"
        }
#line 82 "add_type.m"
      else
#line 82 "add_type.m"
      if (((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body0_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body0_24, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 81 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_TRUE;
#line 82 "add_type.m"
      else
#line 82 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = MR_FALSE;
#line 79 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 93 "add_type.m"
        {
#line 93 "add_type.m"
          hlds__status__type_make_status_abstract_2_p_0(hlds__make_hlds__add_type__TypeStatus0_17, &hlds__make_hlds__add_type__TypeStatus1_35);
        }
#line 79 "add_type.m"
      else
#line 95 "add_type.m"
        hlds__make_hlds__add_type__TypeStatus1_35 = hlds__make_hlds__add_type__TypeStatus0_17;
#line 102 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__TypeDefn_15)) == (MR_mktag((MR_Integer) 0)));
#line 102 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 102 "add_type.m"
        {
#line 102 "add_type.m"
          hlds__make_hlds__add_type__Ctors_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 0)));
#line 102 "add_type.m"
          hlds__make_hlds__add_type__MaybeUserUC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 1)));
#line 102 "add_type.m"
          hlds__make_hlds__add_type___MaybeDirectArg_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__TypeDefn_15, (MR_Integer) 2)));
#line 103 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__Ctors_36)) == (MR_mktag((MR_Integer) 1)));
#line 103 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 103 "add_type.m"
            {
#line 103 "add_type.m"
              hlds__make_hlds__add_type__Constructor_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_36, (MR_Integer) 0)));
#line 103 "add_type.m"
              hlds__make_hlds__add_type__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__Ctors_36, (MR_Integer) 1)));
#line 103 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_102_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 102 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 102 "add_type.m"
                {
#line 104 "add_type.m"
                  hlds__make_hlds__add_type__V_296_296 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 0)));
#line 104 "add_type.m"
                  hlds__make_hlds__add_type__V_297_297 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 1)));
#line 104 "add_type.m"
                  hlds__make_hlds__add_type__V_298_298 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 2)));
#line 104 "add_type.m"
                  hlds__make_hlds__add_type__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 3)));
#line 104 "add_type.m"
                  hlds__make_hlds__add_type__V_299_299 = ((MR_Integer) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 4)));
#line 104 "add_type.m"
                  hlds__make_hlds__add_type__V_300_300 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__Constructor_39, (MR_Integer) 5)));
#line 104 "add_type.m"
                  hlds__make_hlds__add_type__V_104_104 = (MR_Integer) 0;
#line 5253 "hlds.make_hlds.add_type.c"
                  hlds__make_hlds__add_type__TypeCtorInfo_302_302 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 104 "add_type.m"
                  {
#line 104 "add_type.m"
                    mercury__list__length_2_p_0(hlds__make_hlds__add_type__TypeCtorInfo_302_302, hlds__make_hlds__add_type__V_103_103, &hlds__make_hlds__add_type__V_304_304);
                  }
#line 104 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_104_104 == hlds__make_hlds__add_type__V_304_304);
#line 102 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 102 "add_type.m"
                    {
#line 105 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeUserUC_37)) == (MR_mktag((MR_Integer) 1)));
#line 105 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 105 "add_type.m"
                        {
#line 105 "add_type.m"
                          hlds__make_hlds__add_type__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeUserUC_37, (MR_Integer) 0)));
#line 107 "add_type.m"
                          {
#line 107 "add_type.m"
                            hlds__make_hlds__add_type__V_105_105 = hlds__status__type_status_defined_in_this_module_1_f_0(hlds__make_hlds__add_type__TypeStatus0_17);
                          }
#line 107 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_105_105 == (MR_Integer) 1);
#line 105 "add_type.m"
                        }
#line 102 "add_type.m"
                    }
#line 102 "add_type.m"
                }
#line 103 "add_type.m"
            }
#line 102 "add_type.m"
        }
#line 97 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 112 "add_type.m"
        {
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMainPieces_41;
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummyMsg_43;
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__DummySpec_44;
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_108_108;
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_109_109;
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_110_110;
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_127_127;
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_128_128;
#line 112 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_135_135;

#line 110 "add_type.m"
          {
#line 110 "add_type.m"
            hlds__make_hlds__add_type__V_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_110_110, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 110 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_110_110, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
#line 110 "add_type.m"
          }
#line 110 "add_type.m"
          {
#line 110 "add_type.m"
            hlds__make_hlds__add_type__V_109_109 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_109_109, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 110 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_109_109, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_110_110));
#line 110 "add_type.m"
          }
#line 110 "add_type.m"
          {
#line 110 "add_type.m"
            hlds__make_hlds__add_type__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_108_108, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_109_109));
#line 110 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_108_108, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[7])));
#line 110 "add_type.m"
          }
#line 109 "add_type.m"
          {
#line 109 "add_type.m"
            hlds__make_hlds__add_type__DummyMainPieces_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 109 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_41, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[60])));
#line 109 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DummyMainPieces_41, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_108_108));
#line 109 "add_type.m"
          }
#line 117 "add_type.m"
          {
#line 117 "add_type.m"
            hlds__make_hlds__add_type__V_128_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_128_128, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMainPieces_41));
#line 117 "add_type.m"
          }
#line 117 "add_type.m"
          {
#line 117 "add_type.m"
            hlds__make_hlds__add_type__V_127_127 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_127_127, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_128_128));
#line 117 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_127_127, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[62])));
#line 117 "add_type.m"
          }
#line 116 "add_type.m"
          {
#line 116 "add_type.m"
            hlds__make_hlds__add_type__DummyMsg_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_43, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
#line 116 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummyMsg_43, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_127_127));
#line 116 "add_type.m"
          }
#line 120 "add_type.m"
          {
#line 120 "add_type.m"
            hlds__make_hlds__add_type__V_135_135 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 120 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_135_135, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummyMsg_43));
#line 120 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_135_135, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 120 "add_type.m"
          }
#line 119 "add_type.m"
          {
#line 119 "add_type.m"
            hlds__make_hlds__add_type__DummySpec_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 119 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_44, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 119 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 119 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DummySpec_44, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_135_135));
#line 119 "add_type.m"
          }
#line 121 "add_type.m"
          {
#line 121 "add_type.m"
            hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137, 0) = ((MR_Box) (hlds__make_hlds__add_type__DummySpec_44));
#line 121 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_98));
#line 121 "add_type.m"
          }
#line 112 "add_type.m"
        }
#line 97 "add_type.m"
      else
#line 97 "add_type.m"
        hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_0_98;
#line 125 "add_type.m"
      {
#line 125 "add_type.m"
        hlds__hlds_module__module_info_get_type_table_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, &hlds__make_hlds__add_type__TypeTable0_45);
      }
#line 129 "add_type.m"
      {
#line 129 "add_type.m"
        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(hlds__make_hlds__add_type__TypeTable0_45, hlds__make_hlds__add_type__TypeCtor_23, &hlds__make_hlds__add_type__OldDefn0_46);
      }
#line 126 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 131 "add_type.m"
        {
#line 131 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldTypeStatus_47;
#line 131 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody0_49;
#line 131 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody_50;

#line 131 "add_type.m"
          {
#line 131 "add_type.m"
            hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn0_46, &hlds__make_hlds__add_type__OldTypeStatus_47);
          }
#line 132 "add_type.m"
          {
#line 132 "add_type.m"
            hlds__status__type_combine_status_3_p_0(hlds__make_hlds__add_type__TypeStatus1_35, hlds__make_hlds__add_type__OldTypeStatus_47, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48);
          }
#line 133 "add_type.m"
          {
#line 133 "add_type.m"
            hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn0_46, &hlds__make_hlds__add_type__OldBody0_49);
          }
#line 134 "add_type.m"
          {
#line 134 "add_type.m"
            hlds__make_hlds__add_type__combine_is_solver_type_4_p_0(hlds__make_hlds__add_type__OldBody0_49, &hlds__make_hlds__add_type__OldBody_50, hlds__make_hlds__add_type__Body0_24, &(hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51);
          }
#line 135 "add_type.m"
          {
#line 135 "add_type.m"
            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__make_hlds__add_type__is_solver_type_is_inconsistent_2_p_0(hlds__make_hlds__add_type__OldBody_50, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51);
          }
#line 135 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 141 "add_type.m"
            {
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverPieces_52;
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverMsg_53;
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__SolverSpec_54;
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_140_140;
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_141_141;
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_142_142;
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_161_161;
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_162_162;
#line 141 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_166_166;

#line 139 "add_type.m"
              {
#line 139 "add_type.m"
                hlds__make_hlds__add_type__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 139 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_142_142, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 139 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_142_142, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
#line 139 "add_type.m"
              }
#line 139 "add_type.m"
              {
#line 139 "add_type.m"
                hlds__make_hlds__add_type__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_141_141, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 139 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_141_141, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_142_142));
#line 139 "add_type.m"
              }
#line 139 "add_type.m"
              {
#line 139 "add_type.m"
                hlds__make_hlds__add_type__V_140_140 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 139 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_140_140, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_141_141));
#line 139 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_140_140, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[24])));
#line 139 "add_type.m"
              }
#line 138 "add_type.m"
              {
#line 138 "add_type.m"
                hlds__make_hlds__add_type__SolverPieces_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 138 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_52, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 138 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__SolverPieces_52, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_140_140));
#line 138 "add_type.m"
              }
#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__V_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_162_162, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverPieces_52));
#line 142 "add_type.m"
              }
#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__V_161_161 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_161_161, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_162_162));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_161_161, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 142 "add_type.m"
              }
#line 142 "add_type.m"
              {
#line 142 "add_type.m"
                hlds__make_hlds__add_type__SolverMsg_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_53, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
#line 142 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverMsg_53, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_161_161));
#line 142 "add_type.m"
              }
#line 144 "add_type.m"
              {
#line 144 "add_type.m"
                hlds__make_hlds__add_type__V_166_166 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_166_166, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverMsg_53));
#line 144 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_166_166, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 144 "add_type.m"
              }
#line 143 "add_type.m"
              {
#line 143 "add_type.m"
                hlds__make_hlds__add_type__SolverSpec_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_54, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 143 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__SolverSpec_54, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_166_166));
#line 143 "add_type.m"
              }
#line 145 "add_type.m"
              {
#line 145 "add_type.m"
                hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168, 0) = ((MR_Box) (hlds__make_hlds__add_type__SolverSpec_54));
#line 145 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137));
#line 145 "add_type.m"
              }
#line 146 "add_type.m"
              hlds__make_hlds__add_type__MaybeOldDefn_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 141 "add_type.m"
            }
#line 135 "add_type.m"
          else
#line 148 "add_type.m"
            {
#line 148 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn_56;

#line 148 "add_type.m"
              {
#line 148 "add_type.m"
                hlds__hlds_data__set_type_defn_body_3_p_0(hlds__make_hlds__add_type__OldBody_50, hlds__make_hlds__add_type__OldDefn0_46, &hlds__make_hlds__add_type__OldDefn_56);
              }
#line 149 "add_type.m"
              {
#line 149 "add_type.m"
                hlds__make_hlds__add_type__MaybeOldDefn_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 149 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_55, 0) = ((MR_Box) (hlds__make_hlds__add_type__OldDefn_56));
#line 149 "add_type.m"
              }
#line 148 "add_type.m"
              hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137;
#line 148 "add_type.m"
            }
#line 131 "add_type.m"
        }
#line 126 "add_type.m"
      else
#line 152 "add_type.m"
        {
#line 152 "add_type.m"
          hlds__make_hlds__add_type__MaybeOldDefn_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 153 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48 = hlds__make_hlds__add_type__TypeStatus1_35;
#line 154 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51 = hlds__make_hlds__add_type__Body0_24;
#line 152 "add_type.m"
          hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_137_137;
#line 152 "add_type.m"
        }
#line 159 "add_type.m"
      {
#line 159 "add_type.m"
        mercury__map__init_1_p_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeInfo_301_301, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_kind_0, &hlds__make_hlds__add_type__KindMap_57);
      }
#line 160 "add_type.m"
      {
#line 160 "add_type.m"
        hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet_12, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Args_14, hlds__make_hlds__add_type__KindMap_57, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, (MR_Integer) 0, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48, hlds__make_hlds__add_type__NeedQual_18, (MR_Integer) 0, hlds__make_hlds__add_type__Context_16, &hlds__make_hlds__add_type__TypeDefn1_58);
      }
#line 163 "add_type.m"
      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__MaybeOldDefn_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 163 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 163 "add_type.m"
        {
#line 164 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51)) == (MR_mktag((MR_Integer) 0)));
#line 164 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 164 "add_type.m"
            hlds__make_hlds__add_type__V_59_59 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51), (MR_Integer) 0);
#line 163 "add_type.m"
        }
#line 162 "add_type.m"
      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 168 "add_type.m"
        {
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclPieces_60;
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclMsg_61;
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__ForeignDeclSpec_62;
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_173_173;
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_174_174;
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_175_175;
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_180_180;
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_181_181;
#line 168 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_185_185;

#line 167 "add_type.m"
          {
#line 167 "add_type.m"
            hlds__make_hlds__add_type__V_175_175 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 167 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_175_175, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 167 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_175_175, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
#line 167 "add_type.m"
          }
#line 167 "add_type.m"
          {
#line 167 "add_type.m"
            hlds__make_hlds__add_type__V_174_174 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_174_174, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 167 "add_type.m"
            MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_174_174, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_175_175));
#line 167 "add_type.m"
          }
#line 167 "add_type.m"
          {
#line 167 "add_type.m"
            hlds__make_hlds__add_type__V_173_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_173_173, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_174_174));
#line 167 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_173_173, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[66])));
#line 167 "add_type.m"
          }
#line 166 "add_type.m"
          {
#line 166 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclPieces_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_60, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[64])));
#line 166 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignDeclPieces_60, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_173_173));
#line 166 "add_type.m"
          }
#line 169 "add_type.m"
          {
#line 169 "add_type.m"
            hlds__make_hlds__add_type__V_181_181 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_181_181, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclPieces_60));
#line 169 "add_type.m"
          }
#line 169 "add_type.m"
          {
#line 169 "add_type.m"
            hlds__make_hlds__add_type__V_180_180 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_180_180, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_181_181));
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_180_180, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 169 "add_type.m"
          }
#line 169 "add_type.m"
          {
#line 169 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclMsg_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_61, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
#line 169 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclMsg_61, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_180_180));
#line 169 "add_type.m"
          }
#line 171 "add_type.m"
          {
#line 171 "add_type.m"
            hlds__make_hlds__add_type__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_185_185, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclMsg_61));
#line 171 "add_type.m"
            MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_185_185, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 171 "add_type.m"
          }
#line 170 "add_type.m"
          {
#line 170 "add_type.m"
            hlds__make_hlds__add_type__ForeignDeclSpec_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_62, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 170 "add_type.m"
            MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignDeclSpec_62, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_185_185));
#line 170 "add_type.m"
          }
#line 172 "add_type.m"
          {
#line 172 "add_type.m"
            MR_Word base;
#line 172 "add_type.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 172 "add_type.m"
            *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = base;
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignDeclSpec_62));
#line 172 "add_type.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168));
#line 172 "add_type.m"
          }
#line 168 "add_type.m"
          *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96;
#line 168 "add_type.m"
        }
#line 162 "add_type.m"
      else
#line 173 "add_type.m"
        {
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldDefn1_63;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldTypeStatus1_65;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__OldBody1_66;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_188_188;
#line 174 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_189_189;
#line 175 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_64_64;
#line 178 "add_type.m"
          MR_Word hlds__make_hlds__add_type__V_67_67;

#line 175 "add_type.m"
          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51)) == (MR_mktag((MR_Integer) 0)));
#line 175 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 175 "add_type.m"
            {
#line 175 "add_type.m"
              hlds__make_hlds__add_type__V_64_64 = (MR_Word) MR_body(((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51), (MR_Integer) 0);
#line 174 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_55)) == (MR_mktag((MR_Integer) 1)));
#line 174 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 174 "add_type.m"
                {
#line 174 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn1_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_55, (MR_Integer) 0)));
#line 176 "add_type.m"
                  {
#line 176 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn1_63, &hlds__make_hlds__add_type__OldTypeStatus1_65);
                  }
#line 177 "add_type.m"
                  {
#line 177 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn1_63, &hlds__make_hlds__add_type__OldBody1_66);
                  }
#line 178 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__OldBody1_66)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_66, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 178 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 178 "add_type.m"
                    {
#line 178 "add_type.m"
                      hlds__make_hlds__add_type__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__OldBody1_66, (MR_Integer) 1)));
#line 179 "add_type.m"
                      {
#line 179 "add_type.m"
                        hlds__make_hlds__add_type__V_188_188 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__OldTypeStatus1_65);
                      }
#line 179 "add_type.m"
                      (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_188_188 == (MR_Integer) 0);
#line 174 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 174 "add_type.m"
                        {
#line 180 "add_type.m"
                          {
#line 180 "add_type.m"
                            hlds__make_hlds__add_type__V_189_189 = hlds__status__type_status_is_exported_to_non_submodules_1_f_0(hlds__make_hlds__add_type__TypeStatus0_17);
                          }
#line 180 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_189_189 == (MR_Integer) 1);
#line 174 "add_type.m"
                        }
#line 178 "add_type.m"
                    }
#line 174 "add_type.m"
                }
#line 175 "add_type.m"
            }
#line 173 "add_type.m"
          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 184 "add_type.m"
            {
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisPieces_68;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisMsg_69;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ForeignVisSpec_70;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_71;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TypeTable_72;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_192_192;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_193_193;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_194_194;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_199_199;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_200_200;
#line 184 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_204_204;

#line 183 "add_type.m"
              {
#line 183 "add_type.m"
                hlds__make_hlds__add_type__V_194_194 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 183 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_194_194, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 183 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_194_194, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
#line 183 "add_type.m"
              }
#line 183 "add_type.m"
              {
#line 183 "add_type.m"
                hlds__make_hlds__add_type__V_193_193 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_193_193, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 183 "add_type.m"
                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_193_193, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_194_194));
#line 183 "add_type.m"
              }
#line 183 "add_type.m"
              {
#line 183 "add_type.m"
                hlds__make_hlds__add_type__V_192_192 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 183 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_192_192, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_193_193));
#line 183 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_192_192, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[69])));
#line 183 "add_type.m"
              }
#line 182 "add_type.m"
              {
#line 182 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisPieces_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 182 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_68, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[67])));
#line 182 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__ForeignVisPieces_68, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_192_192));
#line 182 "add_type.m"
              }
#line 185 "add_type.m"
              {
#line 185 "add_type.m"
                hlds__make_hlds__add_type__V_200_200 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_200_200, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisPieces_68));
#line 185 "add_type.m"
              }
#line 185 "add_type.m"
              {
#line 185 "add_type.m"
                hlds__make_hlds__add_type__V_199_199 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_199_199, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_200_200));
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_199_199, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 185 "add_type.m"
              }
#line 185 "add_type.m"
              {
#line 185 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisMsg_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_69, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
#line 185 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisMsg_69, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_199_199));
#line 185 "add_type.m"
              }
#line 187 "add_type.m"
              {
#line 187 "add_type.m"
                hlds__make_hlds__add_type__V_204_204 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_204_204, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisMsg_69));
#line 187 "add_type.m"
                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_204_204, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 187 "add_type.m"
              }
#line 186 "add_type.m"
              {
#line 186 "add_type.m"
                hlds__make_hlds__add_type__ForeignVisSpec_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_70, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 186 "add_type.m"
                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__ForeignVisSpec_70, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_204_204));
#line 186 "add_type.m"
              }
#line 188 "add_type.m"
              {
#line 188 "add_type.m"
                MR_Word base;
#line 188 "add_type.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 188 "add_type.m"
                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = base;
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__ForeignVisSpec_70));
#line 188 "add_type.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168));
#line 188 "add_type.m"
              }
#line 191 "add_type.m"
              {
#line 191 "add_type.m"
                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_58, &hlds__make_hlds__add_type__ErrTypeDefn_71);
              }
#line 193 "add_type.m"
              {
#line 193 "add_type.m"
                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__ErrTypeDefn_71, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_72);
              }
#line 195 "add_type.m"
              {
#line 195 "add_type.m"
                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_72, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
              }
#line 184 "add_type.m"
            }
#line 173 "add_type.m"
          else
#line 196 "add_type.m"
            {
#line 196 "add_type.m"
              MR_Word hlds__make_hlds__add_type__TVarSet2_74;
#line 196 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Params2_75;
#line 196 "add_type.m"
              MR_Word hlds__make_hlds__add_type__KindMap2_76;
#line 196 "add_type.m"
              MR_Word hlds__make_hlds__add_type__Body2_77;
#line 196 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigContext_78;
#line 196 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigTypeStatus_79;
#line 196 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigInExportedEqv_80;
#line 196 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OrigNeedQual_81;
#line 198 "add_type.m"
              MR_Word hlds__make_hlds__add_type__OldDefn2_73;
#line 207 "add_type.m"
              MR_Word hlds__make_hlds__add_type__V_82_82;

#line 198 "add_type.m"
              (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__make_hlds__add_type__MaybeOldDefn_55)) == (MR_mktag((MR_Integer) 1)));
#line 198 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 198 "add_type.m"
                {
#line 198 "add_type.m"
                  hlds__make_hlds__add_type__OldDefn2_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__MaybeOldDefn_55, (MR_Integer) 0)));
#line 199 "add_type.m"
                  {
#line 199 "add_type.m"
                    hlds__hlds_data__get_type_defn_tvarset_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__TVarSet2_74);
                  }
#line 200 "add_type.m"
                  {
#line 200 "add_type.m"
                    hlds__hlds_data__get_type_defn_tparams_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__Params2_75);
                  }
#line 201 "add_type.m"
                  {
#line 201 "add_type.m"
                    hlds__hlds_data__get_type_defn_kind_map_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__KindMap2_76);
                  }
#line 202 "add_type.m"
                  {
#line 202 "add_type.m"
                    hlds__hlds_data__get_type_defn_body_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__Body2_77);
                  }
#line 203 "add_type.m"
                  {
#line 203 "add_type.m"
                    hlds__hlds_data__get_type_defn_context_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OrigContext_78);
                  }
#line 204 "add_type.m"
                  {
#line 204 "add_type.m"
                    hlds__hlds_data__get_type_defn_status_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OrigTypeStatus_79);
                  }
#line 205 "add_type.m"
                  {
#line 205 "add_type.m"
                    hlds__hlds_data__get_type_defn_in_exported_eqv_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OrigInExportedEqv_80);
                  }
#line 206 "add_type.m"
                  {
#line 206 "add_type.m"
                    hlds__hlds_data__get_type_defn_need_qualifier_2_p_0(hlds__make_hlds__add_type__OldDefn2_73, &hlds__make_hlds__add_type__OrigNeedQual_81);
                  }
#line 207 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) hlds__make_hlds__add_type__Body2_77)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body2_77, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 207 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 207 "add_type.m"
                    hlds__make_hlds__add_type__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__Body2_77, (MR_Integer) 1)));
#line 207 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = !((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded);
#line 198 "add_type.m"
                }
#line 196 "add_type.m"
              if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 209 "add_type.m"
                {
#line 209 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__Target_83;
#line 209 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__MakeOptInt_84;
#line 218 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__V_85_85;

#line 209 "add_type.m"
                  {
#line 209 "add_type.m"
                    libs__globals__get_target_2_p_0(hlds__make_hlds__add_type__Globals_21, &hlds__make_hlds__add_type__Target_83);
                  }
#line 210 "add_type.m"
                  {
#line 210 "add_type.m"
                    libs__globals__lookup_bool_option_3_p_0(hlds__make_hlds__add_type__Globals_21, (MR_Integer) 87, &hlds__make_hlds__add_type__MakeOptInt_84);
                  }
#line 218 "add_type.m"
                  (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = ((((MR_tag((MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 218 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 218 "add_type.m"
                    {
#line 218 "add_type.m"
                      hlds__make_hlds__add_type__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, (MR_Integer) 1)));
#line 220 "add_type.m"
                      {
#line 220 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__status____Unify____type_status_0_0((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48, hlds__make_hlds__add_type__OrigTypeStatus_79);
                      }
#line 220 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 220 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96;
#line 220 "add_type.m"
                      else
#line 225 "add_type.m"
                        {
#line 225 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeDefn3_86;
#line 225 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__TypeTable_276;

#line 223 "add_type.m"
                          {
#line 223 "add_type.m"
                            hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_74, hlds__make_hlds__add_type__Params2_75, hlds__make_hlds__add_type__KindMap2_76, hlds__make_hlds__add_type__Body2_77, hlds__make_hlds__add_type__OrigInExportedEqv_80, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48, hlds__make_hlds__add_type__OrigNeedQual_81, (MR_Integer) 0, hlds__make_hlds__add_type__OrigContext_78, &hlds__make_hlds__add_type__TypeDefn3_86);
                          }
#line 226 "add_type.m"
                          {
#line 226 "add_type.m"
                            hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__TypeDefn3_86, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_276);
                          }
#line 228 "add_type.m"
                          {
#line 228 "add_type.m"
                            hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_276, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                          }
#line 225 "add_type.m"
                        }
#line 220 "add_type.m"
                      *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 218 "add_type.m"
                    }
#line 218 "add_type.m"
                  else
#line 230 "add_type.m"
                    {
#line 230 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__NewBody_87;

#line 231 "add_type.m"
                      {
#line 231 "add_type.m"
                        (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__make_hlds__add_type__merge_foreign_type_bodies_5_p_0(hlds__make_hlds__add_type__Target_83, hlds__make_hlds__add_type__MakeOptInt_84, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__Body_51, hlds__make_hlds__add_type__Body2_77, &hlds__make_hlds__add_type__NewBody_87);
                      }
#line 230 "add_type.m"
                      if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 234 "add_type.m"
                        {
#line 235 "add_type.m"
                          {
#line 235 "add_type.m"
                            (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = hlds__make_hlds__add_type__check_foreign_type_visibility_2_p_0(hlds__make_hlds__add_type__OrigTypeStatus_79, hlds__make_hlds__add_type__TypeStatus1_35);
                          }
#line 234 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 239 "add_type.m"
                            {
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_279;
#line 239 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeDefn3_280;

#line 237 "add_type.m"
                              {
#line 237 "add_type.m"
                                hlds__hlds_data__set_type_defn_10_p_0(hlds__make_hlds__add_type__TVarSet2_74, hlds__make_hlds__add_type__Params2_75, hlds__make_hlds__add_type__KindMap2_76, hlds__make_hlds__add_type__NewBody_87, hlds__make_hlds__add_type__OrigInExportedEqv_80, (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48, hlds__make_hlds__add_type__NeedQual_18, (MR_Integer) 0, hlds__make_hlds__add_type__Context_16, &hlds__make_hlds__add_type__TypeDefn3_280);
                              }
#line 240 "add_type.m"
                              {
#line 240 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__TypeDefn3_280, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_279);
                              }
#line 242 "add_type.m"
                              {
#line 242 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_279, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                              }
#line 239 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 239 "add_type.m"
                            }
#line 234 "add_type.m"
                          else
#line 244 "add_type.m"
                            {
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisPieces_88;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisMsg_89;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__DiffVisSpec_90;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_214_214;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_217_217;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_218_218;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_219_219;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_234_234;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_235_235;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__V_239_239;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__ErrTypeDefn_281;
#line 244 "add_type.m"
                              MR_Word hlds__make_hlds__add_type__TypeTable_282;

#line 244 "add_type.m"
                              {
#line 244 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, &hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_214_214);
                              }
#line 246 "add_type.m"
                              {
#line 246 "add_type.m"
                                hlds__make_hlds__add_type__V_219_219 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_219_219, 0) = ((MR_Box) (hlds__make_hlds__add_type__Name_13));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_219_219, 1) = ((MR_Box) (hlds__make_hlds__add_type__Arity_22));
#line 246 "add_type.m"
                              }
#line 246 "add_type.m"
                              {
#line 246 "add_type.m"
                                hlds__make_hlds__add_type__V_218_218 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_218_218, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(3), hlds__make_hlds__add_type__V_218_218, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_219_219));
#line 246 "add_type.m"
                              }
#line 246 "add_type.m"
                              {
#line 246 "add_type.m"
                                hlds__make_hlds__add_type__V_217_217 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_217_217, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_218_218));
#line 246 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_217_217, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &hlds__make_hlds__add_type_scalar_common_1[31])));
#line 246 "add_type.m"
                              }
#line 245 "add_type.m"
                              {
#line 245 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisPieces_88 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_88, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &hlds__make_hlds__add_type_scalar_common_1[63])));
#line 245 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__DiffVisPieces_88, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_217_217));
#line 245 "add_type.m"
                              }
#line 249 "add_type.m"
                              {
#line 249 "add_type.m"
                                hlds__make_hlds__add_type__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__V_235_235, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisPieces_88));
#line 249 "add_type.m"
                              }
#line 249 "add_type.m"
                              {
#line 249 "add_type.m"
                                hlds__make_hlds__add_type__V_234_234 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_234_234, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_235_235));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_234_234, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 249 "add_type.m"
                              }
#line 249 "add_type.m"
                              {
#line 249 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisMsg_89 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_89, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
#line 249 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisMsg_89, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_234_234));
#line 249 "add_type.m"
                              }
#line 251 "add_type.m"
                              {
#line 251 "add_type.m"
                                hlds__make_hlds__add_type__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 251 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_239_239, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisMsg_89));
#line 251 "add_type.m"
                                MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_239_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 251 "add_type.m"
                              }
#line 250 "add_type.m"
                              {
#line 250 "add_type.m"
                                hlds__make_hlds__add_type__DiffVisSpec_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_90, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_90, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 250 "add_type.m"
                                MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__DiffVisSpec_90, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_239_239));
#line 250 "add_type.m"
                              }
#line 252 "add_type.m"
                              {
#line 252 "add_type.m"
                                MR_Word base;
#line 252 "add_type.m"
                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 252 "add_type.m"
                                *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = base;
#line 252 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__DiffVisSpec_90));
#line 252 "add_type.m"
                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168));
#line 252 "add_type.m"
                              }
#line 253 "add_type.m"
                              {
#line 253 "add_type.m"
                                hlds__hlds_data__set_type_defn_prev_errors_3_p_0((MR_Integer) 1, hlds__make_hlds__add_type__TypeDefn1_58, &hlds__make_hlds__add_type__ErrTypeDefn_281);
                              }
#line 255 "add_type.m"
                              {
#line 255 "add_type.m"
                                hlds__hlds_data__replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__ErrTypeDefn_281, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_282);
                              }
#line 257 "add_type.m"
                              {
#line 257 "add_type.m"
                                hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_282, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_214_214, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                              }
#line 244 "add_type.m"
                            }
#line 234 "add_type.m"
                        }
#line 230 "add_type.m"
                      else
#line 259 "add_type.m"
                        {
#line 262 "add_type.m"
                          MR_Word hlds__make_hlds__add_type__V_244_244 = (MR_Word) (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__TypeStatus_48;

#line 262 "add_type.m"
                          (hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded = (hlds__make_hlds__add_type__V_244_244 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 259 "add_type.m"
                          if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 264 "add_type.m"
                            {
#line 264 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 264 "add_type.m"
                              *hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97 = hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96;
#line 264 "add_type.m"
                            }
#line 259 "add_type.m"
                          else
#line 267 "add_type.m"
                            {
#line 267 "add_type.m"
                              {
#line 267 "add_type.m"
                                hlds__hlds_module__module_info_incr_errors_2_p_0(hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                              }
#line 268 "add_type.m"
                              {
#line 268 "add_type.m"
                                hlds__make_hlds__make_hlds_error__multiple_def_error_9_p_0((MR_Integer) 0, hlds__make_hlds__add_type__Name_13, hlds__make_hlds__add_type__Arity_22, (MR_String) "type", hlds__make_hlds__add_type__Context_16, hlds__make_hlds__add_type__OrigContext_78, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168, hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99);
                              }
#line 267 "add_type.m"
                            }
#line 259 "add_type.m"
                        }
#line 230 "add_type.m"
                    }
#line 209 "add_type.m"
                }
#line 196 "add_type.m"
              else
#line 273 "add_type.m"
                {
#line 273 "add_type.m"
                  MR_Word hlds__make_hlds__add_type__TypeTable_293;

#line 272 "add_type.m"
                  {
#line 272 "add_type.m"
                    hlds__hlds_data__add_or_replace_type_ctor_defn_4_p_0(hlds__make_hlds__add_type__TypeCtor_23, hlds__make_hlds__add_type__TypeDefn1_58, hlds__make_hlds__add_type__TypeTable0_45, &hlds__make_hlds__add_type__TypeTable_293);
                  }
#line 274 "add_type.m"
                  {
#line 274 "add_type.m"
                    hlds__hlds_module__module_info_set_type_table_3_p_0(hlds__make_hlds__add_type__TypeTable_293, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_0_96, hlds__make_hlds__add_type__STATE_VARIABLE_ModuleInfo_97);
                  }
#line 280 "add_type.m"
                  {
#line 280 "add_type.m"
                    hlds__make_hlds__add_type__module_add_type_defn_11_p_0_7(&hlds__make_hlds__add_type__env);
                  }
#line 275 "add_type.m"
                  if ((hlds__make_hlds__add_type__env).hlds__make_hlds__add_type__module_add_type_defn_11_p_0_env_0__succeeded)
#line 288 "add_type.m"
                    {
#line 288 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvMsg_94;
#line 288 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__PolyEqvSpec_95;
#line 288 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_264_264;
#line 288 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_266_266;
#line 288 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_267_267;
#line 288 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_269_269;
#line 288 "add_type.m"
                      MR_Word hlds__make_hlds__add_type__V_273_273;

#line 291 "add_type.m"
                      {
#line 291 "add_type.m"
                        hlds__make_hlds__add_type__V_269_269 = hlds__make_hlds__add_type__abstract_monotype_workaround_0_f_0();
                      }
#line 291 "add_type.m"
                      {
#line 291 "add_type.m"
                        hlds__make_hlds__add_type__V_267_267 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_267_267, 0) = ((MR_Box) ((MR_Integer) 1));
#line 291 "add_type.m"
                        MR_hl_field(MR_mktag(2), hlds__make_hlds__add_type__V_267_267, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_269_269));
#line 291 "add_type.m"
                      }
#line 291 "add_type.m"
                      {
#line 291 "add_type.m"
                        hlds__make_hlds__add_type__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 291 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_266_266, 0) = ((MR_Box) (hlds__make_hlds__add_type__V_267_267));
#line 291 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_266_266, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "add_type.m"
                      }
#line 290 "add_type.m"
                      {
#line 290 "add_type.m"
                        hlds__make_hlds__add_type__V_264_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 290 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_264_264, 0) = ((MR_Box) (&hlds__make_hlds__add_type_scalar_common_4[0]));
#line 290 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_264_264, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_266_266));
#line 290 "add_type.m"
                      }
#line 289 "add_type.m"
                      {
#line 289 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvMsg_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 289 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_94, 0) = ((MR_Box) (hlds__make_hlds__add_type__Context_16));
#line 289 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvMsg_94, 1) = ((MR_Box) (hlds__make_hlds__add_type__V_264_264));
#line 289 "add_type.m"
                      }
#line 293 "add_type.m"
                      {
#line 293 "add_type.m"
                        hlds__make_hlds__add_type__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_273_273, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvMsg_94));
#line 293 "add_type.m"
                        MR_hl_field(MR_mktag(1), hlds__make_hlds__add_type__V_273_273, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 293 "add_type.m"
                      }
#line 292 "add_type.m"
                      {
#line 292 "add_type.m"
                        hlds__make_hlds__add_type__PolyEqvSpec_95 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 292 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_95, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 292 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 292 "add_type.m"
                        MR_hl_field(MR_mktag(0), hlds__make_hlds__add_type__PolyEqvSpec_95, 2) = ((MR_Box) (hlds__make_hlds__add_type__V_273_273));
#line 292 "add_type.m"
                      }
#line 294 "add_type.m"
                      {
#line 294 "add_type.m"
                        MR_Word base;
#line 294 "add_type.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 294 "add_type.m"
                        *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = base;
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (hlds__make_hlds__add_type__PolyEqvSpec_95));
#line 294 "add_type.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168));
#line 294 "add_type.m"
                      }
#line 288 "add_type.m"
                    }
#line 275 "add_type.m"
                  else
#line 275 "add_type.m"
                    *hlds__make_hlds__add_type__STATE_VARIABLE_Specs_99 = hlds__make_hlds__add_type__STATE_VARIABLE_Specs_168_168;
#line 273 "add_type.m"
                }
#line 196 "add_type.m"
            }
#line 173 "add_type.m"
        }
#line 74 "add_type.m"
    }
#line 34 "add_type.m"
  }
#line 34 "add_type.m"
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
