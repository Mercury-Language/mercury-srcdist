/*
** Automatically generated from `type_util.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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


/* :- module check_hlds.type_util. */
/* :- implementation. */

/*
INIT mercury__check_hlds__type_util__init
ENDINIT
*/

#include "check_hlds.type_util.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.builtin_lib_types.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 233 "type_util.m"
struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s {
#line 233 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5;
#line 233 "type_util.m"
  MR_Word * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7;
#line 233 "type_util.m"
  MR_Word * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8;
#line 233 "type_util.m"
  MR_Cont check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont;
#line 233 "type_util.m"
  void * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr;
#line 1056 "type_util.m"
  MR_bool check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26;
#line 1056 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29;
#line 1061 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_14_14;
#line 1061 "type_util.m"
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7;
#line 1061 "type_util.m"
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14;
#line 233 "type_util.m"
};

#line 133 "type_util.m"
struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s {
#line 656 "type_util.m"
  MR_bool check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
#line 656 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5;
#line 659 "type_util.m"
  jmp_buf check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0;
#line 659 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9;
#line 659 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10;
#line 659 "type_util.m"
  MR_Box check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10;
#line 133 "type_util.m"
};


#line 202 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 205 "check_hlds.type_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 208 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 211 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 214 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 217 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 220 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 223 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 226 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0;

#line 229 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1;

#line 232 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[2];

#line 235 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[2];

#line 238 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0[2];

#line 241 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0;

#line 244 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1;

#line 247 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0[2];

#line 250 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0[2];

#line 253 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0[2];

#line 256 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
#line 259 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 261 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2);

#line 264 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
#line 267 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 269 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 271 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3);

#line 274 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
#line 277 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 279 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2);

#line 282 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
#line 285 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 287 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 289 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3);

#line 1047 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1047__2_1_f_0(
#line 1047 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_33);

#line 1047 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1047__1_1_f_0(
#line 1047 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_33);

#line 559 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__559__1_1_f_0(
#line 559 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_18);

#line 1233 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1304__1_3_p_0_1(
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1233 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1304 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1304__1_3_p_0(
#line 1304 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1304 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1304 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26);

#line 1230 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1285__1_3_p_0_1(
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1230 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1285 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1285__1_3_p_0(
#line 1285 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1285 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1285 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26);

#line 1227 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1257__1_3_p_0_1(
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1227 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1257 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1257__1_3_p_0(
#line 1257 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 1257 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1257 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26);

#line 1201 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1201__1_1_f_0(
#line 1201 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_14);

#line 1188 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1188__1_1_f_0(
#line 1188 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_19);

#line 1104 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1104__1_1_f_0(
#line 1104 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_24);

#line 1072 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1072__1_1_f_0(
#line 1072 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_30);

#line 923 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__923__1_2_f_0(
#line 923 "type_util.m"
  MR_Word check_hlds__type_util__Context_11,
#line 923 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_19);

#line 1007 "type_util.m"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0(
#line 1007 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__1_1,
#line 1007 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 1007 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__3_3);

#line 1007 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0(
#line 1007 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_1,
#line 1007 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2);

#line 1368 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_p_0(
#line 1368 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1368 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1368 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1368 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Map_0_15,
#line 1368 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Map_16);

#line 1348 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_p_0(
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Map_0_15,
#line 1348 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Map_16);

#line 1335 "type_util.m"
static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
#line 1335 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1,
#line 1335 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 1335 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3);

#line 968 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
#line 968 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 968 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 968 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3);

#line 953 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
#line 953 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 953 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 953 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3);

#line 666 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
#line 666 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 666 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 666 "type_util.m"
  MR_Word check_hlds__type_util__CoveredTypes_7);

#line 560 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
#line 560 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 560 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 560 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 560 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 559 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 551 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
#line 551 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 551 "type_util.m"
  MR_Word check_hlds__type_util__Ctor_6,
#line 551 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_14,
#line 551 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_15);

#line 534 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
#line 534 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 534 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 534 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 534 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 514 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
#line 514 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_6,
#line 514 "type_util.m"
  MR_Word check_hlds__type_util__Type_7,
#line 514 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_8,
#line 514 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28,
#line 514 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_29);

#line 511 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
#line 511 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 511 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 511 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 511 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 507 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
#line 507 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 507 "type_util.m"
  MR_Word check_hlds__type_util__Types_6,
#line 507 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8,
#line 507 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_9);

#line 477 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
#line 477 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 477 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 477 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25,
#line 477 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);

#line 1394 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
#line 1394 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1394 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1394 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1391 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
#line 1391 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1391 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1391 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1387 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
#line 1387 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1387 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1387 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1365 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_p_0_1(
#line 1365 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1365 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1365 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1365 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1365 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4);

#line 1345 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proofs_3_p_0_1(
#line 1345 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1345 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1345 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1345 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1345 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4);

#line 1329 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_p_0_1(
#line 1329 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1329 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1329 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1314 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
#line 1314 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1314 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1314 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1304 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
#line 1304 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1304 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1304 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1233 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1233 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1294 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
#line 1294 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1294 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1294 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1285 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
#line 1285 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1285 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1285 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1230 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1230 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1271 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
#line 1271 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1271 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1271 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1257 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
#line 1257 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1257 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1257 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1227 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1227 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1233 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1233 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1230 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1230 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1227 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1227 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1201 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1(
#line 1201 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1201 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1188 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1(
#line 1188 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1188 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1104 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
#line 1104 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1104 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1072 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_3(
#line 1072 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1072 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1061 "type_util.m"
static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
#line 1061 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 1056 "type_util.m"
static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_1(
#line 1056 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 1047 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1(
#line 1047 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1047 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1047 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0_1(
#line 1047 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1047 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 923 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
#line 923 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 923 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 659 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
#line 659 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 659 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
#line 659 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 659 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
#line 659 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 659 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
#line 659 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);


static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[12][2];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[8][1];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_4[10][6];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_5[2][5];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_6[1][8];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_7[2][7];




static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[12][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[8][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_5[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_5[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_5[0])),
    ((MR_Box) (check_hlds__type_util__cons_id_arg_types_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_5[0])),
    ((MR_Box) (check_hlds__type_util__get_existq_cons_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_5[1])),
    ((MR_Box) (check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_5[1])),
    ((MR_Box) (check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_5[0])),
    ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[8][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ""))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_4[10][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__term__term__type_ctor_info_context_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_5[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_7[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1195 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1203 "check_hlds.type_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1211 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1220 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1229 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1237 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1245 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 1254 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1262 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0 = {
  (MR_String) "fail_on_exist_qvar",
  (MR_Integer) 0
};

#line 1268 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1 = {
  (MR_String) "abort_on_exist_qvar",
  (MR_Integer) 1
};

#line 1274 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1
};

#line 1280 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0
};

#line 1286 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1292 "check_hlds.type_util.c"
const MR_TypeCtorInfo_Struct check_hlds__type_util__check_hlds__type_util__type_ctor_info_exist_qvar_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_util____Unify____exist_qvar_action_0_0_10001)),
  ((MR_Box) (check_hlds__type_util____Compare____exist_qvar_action_0_0_10001)),
  (MR_String) "check_hlds.type_util",
  (MR_String) "exist_qvar_action",
  {
    check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0
  },
  {
    check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0
};

#line 1313 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0 = {
  (MR_String) "is_dummy_type",
  (MR_Integer) 0
};

#line 1319 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1 = {
  (MR_String) "is_not_dummy_type",
  (MR_Integer) 1
};

#line 1325 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1
};

#line 1331 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1
};

#line 1337 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1343 "check_hlds.type_util.c"
const MR_TypeCtorInfo_Struct check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_util____Unify____is_dummy_type_0_0_10001)),
  ((MR_Box) (check_hlds__type_util____Compare____is_dummy_type_0_0_10001)),
  (MR_String) "check_hlds.type_util",
  (MR_String) "is_dummy_type",
  {
    check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0
  },
  {
    check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0
};

#line 1364 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
#line 1367 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1369 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2)
#line 1371 "check_hlds.type_util.c"
{
#line 1373 "check_hlds.type_util.c"
  {
#line 1375 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded;

#line 1378 "check_hlds.type_util.c"
    {
#line 1380 "check_hlds.type_util.c"
      check_hlds__type_util__succeeded = check_hlds__type_util____Unify____exist_qvar_action_0_0(((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2));
    }
#line 1383 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 1385 "check_hlds.type_util.c"
  }
#line 1387 "check_hlds.type_util.c"
}

#line 1390 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
#line 1393 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 1395 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1397 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3)
#line 1399 "check_hlds.type_util.c"
{
#line 1401 "check_hlds.type_util.c"
  {
#line 1403 "check_hlds.type_util.c"
    MR_Word check_hlds__type_util__conv0_HeadVar__1_1;

#line 1406 "check_hlds.type_util.c"
    {
#line 1408 "check_hlds.type_util.c"
      check_hlds__type_util____Compare____exist_qvar_action_0_0(&check_hlds__type_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3));
    }
#line 1411 "check_hlds.type_util.c"
    *check_hlds__type_util__wrapper_arg_1 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__1_1));
#line 1413 "check_hlds.type_util.c"
  }
#line 1415 "check_hlds.type_util.c"
}

#line 1418 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
#line 1421 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1423 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2)
#line 1425 "check_hlds.type_util.c"
{
#line 1427 "check_hlds.type_util.c"
  {
#line 1429 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded;

#line 1432 "check_hlds.type_util.c"
    {
#line 1434 "check_hlds.type_util.c"
      check_hlds__type_util__succeeded = check_hlds__type_util____Unify____is_dummy_type_0_0(((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2));
    }
#line 1437 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 1439 "check_hlds.type_util.c"
  }
#line 1441 "check_hlds.type_util.c"
}

#line 1444 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
#line 1447 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 1449 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1451 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3)
#line 1453 "check_hlds.type_util.c"
{
#line 1455 "check_hlds.type_util.c"
  {
#line 1457 "check_hlds.type_util.c"
    MR_Word check_hlds__type_util__conv0_HeadVar__1_1;

#line 1460 "check_hlds.type_util.c"
    {
#line 1462 "check_hlds.type_util.c"
      check_hlds__type_util____Compare____is_dummy_type_0_0(&check_hlds__type_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3));
    }
#line 1465 "check_hlds.type_util.c"
    *check_hlds__type_util__wrapper_arg_1 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__1_1));
#line 1467 "check_hlds.type_util.c"
  }
#line 1469 "check_hlds.type_util.c"
}

#line 1047 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1047__2_1_f_0(
#line 1047 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_33)
#line 1047 "type_util.m"
{
#line 1047 "type_util.m"
  {
#line 1047 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 1)));
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 0)));
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 2)));
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 3)));

#line 1047 "type_util.m"
    return check_hlds__type_util__HeadVar__2_34;
#line 1047 "type_util.m"
  }
#line 1047 "type_util.m"
}

#line 1047 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1047__1_1_f_0(
#line 1047 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_33)
#line 1047 "type_util.m"
{
#line 1047 "type_util.m"
  {
#line 1047 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 1)));
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 0)));
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 2)));
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 3)));

#line 1047 "type_util.m"
    return check_hlds__type_util__HeadVar__2_34;
#line 1047 "type_util.m"
  }
#line 1047 "type_util.m"
}

#line 559 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__559__1_1_f_0(
#line 559 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_18)
#line 559 "type_util.m"
{
#line 559 "type_util.m"
  {
#line 559 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 559 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_18, (MR_Integer) 1)));
#line 559 "type_util.m"
    MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_18, (MR_Integer) 0)));
#line 559 "type_util.m"
    MR_Word check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_18, (MR_Integer) 2)));
#line 559 "type_util.m"
    MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_18, (MR_Integer) 3)));

#line 559 "type_util.m"
    return check_hlds__type_util__HeadVar__2_19;
#line 559 "type_util.m"
  }
#line 559 "type_util.m"
}

#line 1233 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1304__1_3_p_0_1(
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1233 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1233 "type_util.m"
{
#line 1233 "type_util.m"
  {
#line 1233 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1233 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1233 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1233 "type_util.m"
  }
#line 1233 "type_util.m"
}

#line 1304 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1304__1_3_p_0(
#line 1304 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1304 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1304 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1304 "type_util.m"
{
#line 1304 "type_util.m"
  {
#line 1304 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1304 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1304 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1304 "type_util.m"
    MR_Word check_hlds__type_util__L0_15;
#line 1304 "type_util.m"
    MR_Word check_hlds__type_util__L_16;
#line 1304 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1305 "type_util.m"
    {
#line 1305 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_15);
    }
#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1304__1_3_p_0_1));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1233 "type_util.m"
    }
#line 1628 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__L0_15, &check_hlds__type_util__L_16);
    }
#line 1307 "type_util.m"
    {
#line 1307 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__L_16, check_hlds__type_util__HeadVar__3_26);
#line 1307 "type_util.m"
      return;
    }
#line 1304 "type_util.m"
  }
#line 1304 "type_util.m"
}

#line 1230 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1285__1_3_p_0_1(
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1230 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1230 "type_util.m"
{
#line 1230 "type_util.m"
  {
#line 1230 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1230 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1230 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1230 "type_util.m"
  }
#line 1230 "type_util.m"
}

#line 1285 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1285__1_3_p_0(
#line 1285 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1285 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1285 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1285 "type_util.m"
{
#line 1285 "type_util.m"
  {
#line 1285 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1285 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1285 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1285 "type_util.m"
    MR_Word check_hlds__type_util__L0_15;
#line 1285 "type_util.m"
    MR_Word check_hlds__type_util__L_16;
#line 1285 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1286 "type_util.m"
    {
#line 1286 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_15);
    }
#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1285__1_3_p_0_1));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1230 "type_util.m"
    }
#line 1722 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__L0_15, &check_hlds__type_util__L_16);
    }
#line 1288 "type_util.m"
    {
#line 1288 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__L_16, check_hlds__type_util__HeadVar__3_26);
#line 1288 "type_util.m"
      return;
    }
#line 1285 "type_util.m"
  }
#line 1285 "type_util.m"
}

#line 1227 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1257__1_3_p_0_1(
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1227 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1227 "type_util.m"
{
#line 1227 "type_util.m"
  {
#line 1227 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1227 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1227 "type_util.m"
    {
#line 1227 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1227 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1227 "type_util.m"
  }
#line 1227 "type_util.m"
}

#line 1257 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1257__1_3_p_0(
#line 1257 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 1257 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1257 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1257 "type_util.m"
{
#line 1257 "type_util.m"
  {
#line 1257 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1257 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1257 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_54;
#line 1257 "type_util.m"
    MR_Word check_hlds__type_util__L0_16;
#line 1257 "type_util.m"
    MR_Word check_hlds__type_util__L_17;
#line 1257 "type_util.m"
    MR_Word check_hlds__type_util__V_50_50;

#line 1258 "type_util.m"
    {
#line 1258 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_37_37, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_16);
    }
#line 1227 "type_util.m"
    {
#line 1227 "type_util.m"
      check_hlds__type_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[1]));
#line 1227 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1257__1_3_p_0_1));
#line 1227 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1227 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1227 "type_util.m"
    }
#line 1816 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1227 "type_util.m"
    {
#line 1227 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__V_50_50, check_hlds__type_util__L0_16, &check_hlds__type_util__L_17);
    }
#line 1260 "type_util.m"
    {
#line 1260 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_37_37, check_hlds__type_util__L_17, check_hlds__type_util__HeadVar__3_26);
#line 1260 "type_util.m"
      return;
    }
#line 1257 "type_util.m"
  }
#line 1257 "type_util.m"
}

#line 1201 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1201__1_1_f_0(
#line 1201 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_14)
#line 1201 "type_util.m"
{
#line 1201 "type_util.m"
  {
#line 1201 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1201 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_15;

#line 1201 "type_util.m"
    {
#line 1201 "type_util.m"
      check_hlds__type_util__HeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "type_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_15, 0) = ((MR_Box) (check_hlds__type_util__HeadVar__1_14));
#line 1201 "type_util.m"
    }
#line 1201 "type_util.m"
    return check_hlds__type_util__HeadVar__2_15;
#line 1201 "type_util.m"
  }
#line 1201 "type_util.m"
}

#line 1188 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1188__1_1_f_0(
#line 1188 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_19)
#line 1188 "type_util.m"
{
#line 1188 "type_util.m"
  {
#line 1188 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1188 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_20;

#line 1188 "type_util.m"
    {
#line 1188 "type_util.m"
      check_hlds__type_util__HeadVar__2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1188 "type_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_20, 0) = ((MR_Box) (check_hlds__type_util__HeadVar__1_19));
#line 1188 "type_util.m"
    }
#line 1188 "type_util.m"
    return check_hlds__type_util__HeadVar__2_20;
#line 1188 "type_util.m"
  }
#line 1188 "type_util.m"
}

#line 1104 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1104__1_1_f_0(
#line 1104 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_24)
#line 1104 "type_util.m"
{
#line 1104 "type_util.m"
  {
#line 1104 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_24, (MR_Integer) 1)));
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_24, (MR_Integer) 0)));
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_24, (MR_Integer) 2)));
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_24, (MR_Integer) 3)));

#line 1104 "type_util.m"
    return check_hlds__type_util__HeadVar__2_25;
#line 1104 "type_util.m"
  }
#line 1104 "type_util.m"
}

#line 1072 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1072__1_1_f_0(
#line 1072 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_30)
#line 1072 "type_util.m"
{
#line 1072 "type_util.m"
  {
#line 1072 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1072 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_30, (MR_Integer) 1)));
#line 1072 "type_util.m"
    MR_Word check_hlds__type_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_30, (MR_Integer) 0)));
#line 1072 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_30, (MR_Integer) 2)));
#line 1072 "type_util.m"
    MR_Word check_hlds__type_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_30, (MR_Integer) 3)));

#line 1072 "type_util.m"
    return check_hlds__type_util__HeadVar__2_31;
#line 1072 "type_util.m"
  }
#line 1072 "type_util.m"
}

#line 923 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__923__1_2_f_0(
#line 923 "type_util.m"
  MR_Word check_hlds__type_util__Context_11,
#line 923 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_19)
#line 923 "type_util.m"
{
#line 923 "type_util.m"
  {
#line 923 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 923 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__3_20;

#line 923 "type_util.m"
    {
#line 923 "type_util.m"
      check_hlds__type_util__HeadVar__3_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 923 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 1) = ((MR_Box) (check_hlds__type_util__HeadVar__2_19));
#line 923 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 3) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 923 "type_util.m"
    }
#line 923 "type_util.m"
    return check_hlds__type_util__HeadVar__3_20;
#line 923 "type_util.m"
  }
#line 923 "type_util.m"
}

#line 135 "type_util.m"
void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0(
#line 135 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__1_1,
#line 135 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 135 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__3_3)
#line 135 "type_util.m"
{
#line 135 "type_util.m"
  {
#line 135 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 135 "type_util.m"
    MR_Integer check_hlds__type_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__type_util__HeadVar__2_2;
#line 135 "type_util.m"
    MR_Integer check_hlds__type_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__type_util__HeadVar__3_3;

#line 135 "type_util.m"
    {
#line 135 "type_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__type_util__HeadVar__1_1, check_hlds__type_util__Cast_HeadVar1_4, check_hlds__type_util__Cast_HeadVar2_5);
#line 135 "type_util.m"
      return;
    }
#line 135 "type_util.m"
  }
#line 135 "type_util.m"
}

#line 135 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0(
#line 135 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_1,
#line 135 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2)
#line 135 "type_util.m"
{
#line 2025 "check_hlds.type_util.c"
  {
#line 2027 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded = (check_hlds__type_util__HeadVar__2_1 == check_hlds__type_util__HeadVar__2_2);

#line 2030 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 2032 "check_hlds.type_util.c"
  }
#line 135 "type_util.m"
}

#line 1007 "type_util.m"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0(
#line 1007 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__1_1,
#line 1007 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 1007 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__3_3)
#line 1007 "type_util.m"
{
#line 1007 "type_util.m"
  {
#line 1007 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1007 "type_util.m"
    MR_Integer check_hlds__type_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__type_util__HeadVar__2_2;
#line 1007 "type_util.m"
    MR_Integer check_hlds__type_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__type_util__HeadVar__3_3;

#line 1007 "type_util.m"
    {
#line 1007 "type_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__type_util__HeadVar__1_1, check_hlds__type_util__Cast_HeadVar1_4, check_hlds__type_util__Cast_HeadVar2_5);
#line 1007 "type_util.m"
      return;
    }
#line 1007 "type_util.m"
  }
#line 1007 "type_util.m"
}

#line 1007 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0(
#line 1007 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_1,
#line 1007 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2)
#line 1007 "type_util.m"
{
#line 2078 "check_hlds.type_util.c"
  {
#line 2080 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded = (check_hlds__type_util__HeadVar__2_1 == check_hlds__type_util__HeadVar__2_2);

#line 2083 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 2085 "check_hlds.type_util.c"
  }
#line 1007 "type_util.m"
}

#line 1368 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_p_0(
#line 1368 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1368 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1368 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1368 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Map_0_15,
#line 1368 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Map_16)
#line 1368 "type_util.m"
{
#line 1372 "type_util.m"
  {
#line 1372 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1372 "type_util.m"
    MR_Word check_hlds__type_util__Constraint_10;
#line 1372 "type_util.m"
    MR_Word check_hlds__type_util__Proof_12;

#line 1373 "type_util.m"
    {
#line 1373 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Constraint0_7, &check_hlds__type_util__Constraint_10);
    }
#line 1377 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1376 "type_util.m"
      check_hlds__type_util__Proof_12 = check_hlds__type_util__Proof0_8;
#line 1377 "type_util.m"
    else
#line 1378 "type_util.m"
      {
#line 1378 "type_util.m"
        MR_Word check_hlds__type_util__Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_8, (MR_Integer) 0)));
#line 1378 "type_util.m"
        MR_Word check_hlds__type_util__Super_14;

#line 1379 "type_util.m"
        {
#line 1379 "type_util.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Super0_13, &check_hlds__type_util__Super_14);
        }
#line 1380 "type_util.m"
        {
#line 1380 "type_util.m"
          check_hlds__type_util__Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1380 "type_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof_12, 0) = ((MR_Box) (check_hlds__type_util__Super_14));
#line 1380 "type_util.m"
        }
#line 1378 "type_util.m"
      }
#line 1382 "type_util.m"
    {
#line 1382 "type_util.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__type_util__Constraint_10)), ((MR_Box) (check_hlds__type_util__Proof_12)), check_hlds__type_util__STATE_VARIABLE_Map_0_15, check_hlds__type_util__STATE_VARIABLE_Map_16);
#line 1382 "type_util.m"
      return;
    }
#line 1372 "type_util.m"
  }
#line 1368 "type_util.m"
}

#line 1348 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_p_0(
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Map_0_15,
#line 1348 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Map_16)
#line 1348 "type_util.m"
{
#line 1352 "type_util.m"
  {
#line 1352 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1352 "type_util.m"
    MR_Word check_hlds__type_util__Constraint_10;
#line 1352 "type_util.m"
    MR_Word check_hlds__type_util__Proof_12;

#line 1353 "type_util.m"
    {
#line 1353 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Constraint0_7, &check_hlds__type_util__Constraint_10);
    }
#line 1357 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1356 "type_util.m"
      check_hlds__type_util__Proof_12 = check_hlds__type_util__Proof0_8;
#line 1357 "type_util.m"
    else
#line 1358 "type_util.m"
      {
#line 1358 "type_util.m"
        MR_Word check_hlds__type_util__Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_8, (MR_Integer) 0)));
#line 1358 "type_util.m"
        MR_Word check_hlds__type_util__Super_14;

#line 1359 "type_util.m"
        {
#line 1359 "type_util.m"
          parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Super0_13, &check_hlds__type_util__Super_14);
        }
#line 1360 "type_util.m"
        {
#line 1360 "type_util.m"
          check_hlds__type_util__Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1360 "type_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof_12, 0) = ((MR_Box) (check_hlds__type_util__Super_14));
#line 1360 "type_util.m"
        }
#line 1358 "type_util.m"
      }
#line 1362 "type_util.m"
    {
#line 1362 "type_util.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__type_util__Constraint_10)), ((MR_Box) (check_hlds__type_util__Proof_12)), check_hlds__type_util__STATE_VARIABLE_Map_0_15, check_hlds__type_util__STATE_VARIABLE_Map_16);
#line 1362 "type_util.m"
      return;
    }
#line 1352 "type_util.m"
  }
#line 1348 "type_util.m"
}

#line 1335 "type_util.m"
static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
#line 1335 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1,
#line 1335 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 1335 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3)
#line 1335 "type_util.m"
{
#line 1338 "type_util.m"
  {
#line 1338 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 1338 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 1338 "type_util.m"
      *check_hlds__type_util__HeadVar__3_3 = check_hlds__type_util__HeadVar__2_2;
#line 1338 "type_util.m"
    else
#line 1340 "type_util.m"
      {
#line 1340 "type_util.m"
        MR_Word check_hlds__type_util__ClassConstraint0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1340 "type_util.m"
        MR_Word check_hlds__type_util__ClassConstraint_8;

#line 1341 "type_util.m"
        {
#line 1341 "type_util.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(check_hlds__type_util__HeadVar__1_1, check_hlds__type_util__ClassConstraint0_7, &check_hlds__type_util__ClassConstraint_8);
        }
#line 1340 "type_util.m"
        {
#line 1340 "type_util.m"
          MR_Word base;
#line 1340 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "type_util.m"
          *check_hlds__type_util__HeadVar__3_3 = base;
#line 1340 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__ClassConstraint_8));
#line 1340 "type_util.m"
        }
#line 1340 "type_util.m"
      }
#line 1338 "type_util.m"
  }
#line 1335 "type_util.m"
}

#line 968 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
#line 968 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 968 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 968 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3)
#line 968 "type_util.m"
{
#line 971 "type_util.m"
  {
#line 971 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 971 "type_util.m"
    if ((check_hlds__type_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "type_util.m"
      *check_hlds__type_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 971 "type_util.m"
    else
#line 972 "type_util.m"
      {
#line 972 "type_util.m"
        MR_Word check_hlds__type_util__Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
#line 972 "type_util.m"
        MR_Word check_hlds__type_util__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 1)));
#line 972 "type_util.m"
        MR_Word check_hlds__type_util__Arg_8;
#line 972 "type_util.m"
        MR_Word check_hlds__type_util__Args_9;
#line 972 "type_util.m"
        MR_Word check_hlds__type_util__ArgType_10;
#line 972 "type_util.m"
        MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 1)));
#line 973 "type_util.m"
        MR_Word check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 0)));
#line 973 "type_util.m"
        MR_Word check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 2)));
#line 973 "type_util.m"
        MR_Word check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 3)));
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__V_15_15;
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__V_17_17;
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__V_18_18;
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__V_16_16;

#line 973 "type_util.m"
        {
#line 973 "type_util.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__V_11_11, &check_hlds__type_util__ArgType_10);
        }
#line 974 "type_util.m"
        check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 0)));
#line 974 "type_util.m"
        check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 1)));
#line 974 "type_util.m"
        check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 2)));
#line 974 "type_util.m"
        check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 3)));
#line 974 "type_util.m"
        {
#line 974 "type_util.m"
          check_hlds__type_util__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 974 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 0) = ((MR_Box) (check_hlds__type_util__V_15_15));
#line 974 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 1) = ((MR_Box) (check_hlds__type_util__ArgType_10));
#line 974 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 2) = ((MR_Box) (check_hlds__type_util__V_17_17));
#line 974 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 3) = ((MR_Box) (check_hlds__type_util__V_18_18));
#line 974 "type_util.m"
        }
#line 975 "type_util.m"
        {
#line 975 "type_util.m"
          check_hlds__type_util__substitute_type_args_3_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Args0_7, &check_hlds__type_util__Args_9);
        }
#line 972 "type_util.m"
        {
#line 972 "type_util.m"
          MR_Word base;
#line 972 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 972 "type_util.m"
          *check_hlds__type_util__HeadVar__3_3 = base;
#line 972 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__Arg_8));
#line 972 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__type_util__Args_9));
#line 972 "type_util.m"
        }
#line 972 "type_util.m"
      }
#line 971 "type_util.m"
  }
#line 968 "type_util.m"
}

#line 953 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
#line 953 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 953 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 953 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3)
#line 953 "type_util.m"
{
#line 956 "type_util.m"
  {
#line 956 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 956 "type_util.m"
    if ((check_hlds__type_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 956 "type_util.m"
      *check_hlds__type_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 956 "type_util.m"
    else
#line 957 "type_util.m"
      {
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Ctor0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Ctors0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 1)));
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Ctor_8;
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Ctors_9;
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__ExistQVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 0)));
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 1)));
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 2)));
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 3)));
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Ctxt_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 4)));
#line 957 "type_util.m"
        MR_Word check_hlds__type_util__Args_15;

#line 964 "type_util.m"
        {
#line 964 "type_util.m"
          check_hlds__type_util__substitute_type_args_3_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Args0_13, &check_hlds__type_util__Args_15);
        }
#line 965 "type_util.m"
        {
#line 965 "type_util.m"
          check_hlds__type_util__substitute_type_args_2_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Ctors0_7, &check_hlds__type_util__Ctors_9);
        }
#line 966 "type_util.m"
        {
#line 966 "type_util.m"
          check_hlds__type_util__Ctor_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 966 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 0) = ((MR_Box) (check_hlds__type_util__ExistQVars_10));
#line 966 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 1) = ((MR_Box) (check_hlds__type_util__Constraints_11));
#line 966 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 2) = ((MR_Box) (check_hlds__type_util__Name_12));
#line 966 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 3) = ((MR_Box) (check_hlds__type_util__Args_15));
#line 966 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 4) = ((MR_Box) (check_hlds__type_util__Ctxt_14));
#line 966 "type_util.m"
        }
#line 957 "type_util.m"
        {
#line 957 "type_util.m"
          MR_Word base;
#line 957 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 957 "type_util.m"
          *check_hlds__type_util__HeadVar__3_3 = base;
#line 957 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__Ctor_8));
#line 957 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__type_util__Ctors_9));
#line 957 "type_util.m"
        }
#line 957 "type_util.m"
      }
#line 956 "type_util.m"
  }
#line 953 "type_util.m"
}

#line 666 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
#line 666 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 666 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 666 "type_util.m"
  MR_Word check_hlds__type_util__CoveredTypes_7)
#line 666 "type_util.m"
{
#line 675 "type_util.m"
  while (MR_TRUE)
#line 675 "type_util.m"
    {
#line 675 "type_util.m"
      /* tailcall optimized into a loop */
#line 675 "type_util.m"
      {
#line 675 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;
#line 675 "type_util.m"
        MR_Word check_hlds__type_util__IsDummy_8;

#line 672 "type_util.m"
        {
#line 672 "type_util.m"
          check_hlds__type_util__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__type_util__Type_6)), check_hlds__type_util__CoveredTypes_7);
        }
#line 675 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 674 "type_util.m"
          check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 675 "type_util.m"
        else
#line 724 "type_util.m"
          {
#line 724 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_9;
#line 724 "type_util.m"
            MR_Word check_hlds__type_util__ArgTypes_10;

#line 675 "type_util.m"
            {
#line 675 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__ArgTypes_10);
            }
#line 724 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 678 "type_util.m"
              {
#line 678 "type_util.m"
                MR_Word check_hlds__type_util__IsBuiltinDummy_11;

#line 678 "type_util.m"
                {
#line 678 "type_util.m"
                  check_hlds__type_util__IsBuiltinDummy_11 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__type_util__TypeCtor_9);
                }
#line 682 "type_util.m"
                if ((check_hlds__type_util__IsBuiltinDummy_11 == (MR_Integer) 0))
#line 681 "type_util.m"
                  check_hlds__type_util__IsDummy_8 = (MR_Integer) 0;
#line 682 "type_util.m"
                else
#line 683 "type_util.m"
                  {
#line 683 "type_util.m"
                    MR_Word check_hlds__type_util__TypeTable_12;
#line 720 "type_util.m"
                    MR_Word check_hlds__type_util__TypeDefn_13;

#line 684 "type_util.m"
                    {
#line 684 "type_util.m"
                      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_12);
                    }
#line 687 "type_util.m"
                    {
#line 687 "type_util.m"
                      check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_12, check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__TypeDefn_13);
                    }
#line 720 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 688 "type_util.m"
                      {
#line 688 "type_util.m"
                        MR_Word check_hlds__type_util__TypeBody_14;

#line 688 "type_util.m"
                        {
#line 688 "type_util.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_14);
                        }
#line 712 "type_util.m"
                        if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_14)) == (MR_mktag((MR_Integer) 1))))
#line 691 "type_util.m"
                          {
#line 691 "type_util.m"
                            MR_Word check_hlds__type_util__DuTypeKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 3)));
#line 690 "type_util.m"
                            MR_Word check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 0)));
#line 690 "type_util.m"
                            MR_Word check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 1)));
#line 690 "type_util.m"
                            MR_Word check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 2)));
#line 690 "type_util.m"
                            MR_Word check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 4)));
#line 690 "type_util.m"
                            MR_Word check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 5)));
#line 690 "type_util.m"
                            MR_Word check_hlds__type_util__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 690 "type_util.m"
                            MR_Word check_hlds__type_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 690 "type_util.m"
                            MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 7)));

#line 695 "type_util.m"
                            if ((check_hlds__type_util__DuTypeKind_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 694 "type_util.m"
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 0;
#line 695 "type_util.m"
                            else
#line 695 "type_util.m"
                              if (((MR_tag((MR_Word) check_hlds__type_util__DuTypeKind_18)) == (MR_mktag((MR_Integer) 2))))
#line 703 "type_util.m"
                                {
#line 703 "type_util.m"
                                  MR_Word check_hlds__type_util__SingleArgTypeInDefn_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 1)));
#line 703 "type_util.m"
                                  MR_Word check_hlds__type_util__TypeParams_28;
#line 703 "type_util.m"
                                  MR_Word check_hlds__type_util__Subst_29;
#line 703 "type_util.m"
                                  MR_Word check_hlds__type_util__SingleArgType_30;
#line 703 "type_util.m"
                                  MR_Word check_hlds__type_util__V_36_36;
#line 702 "type_util.m"
                                  MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 0)));
#line 702 "type_util.m"
                                  MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 2)));

#line 704 "type_util.m"
                                  {
#line 704 "type_util.m"
                                    hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeParams_28);
                                  }
#line 705 "type_util.m"
                                  {
#line 705 "type_util.m"
                                    mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_28, check_hlds__type_util__ArgTypes_10, &check_hlds__type_util__Subst_29);
                                  }
#line 707 "type_util.m"
                                  {
#line 707 "type_util.m"
                                    parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subst_29, check_hlds__type_util__SingleArgTypeInDefn_26, &check_hlds__type_util__SingleArgType_30);
                                  }
#line 709 "type_util.m"
                                  {
#line 709 "type_util.m"
                                    check_hlds__type_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 709 "type_util.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__type_util__V_36_36, 0) = ((MR_Box) (check_hlds__type_util__Type_6));
#line 709 "type_util.m"
                                    MR_hl_field(MR_mktag(1), check_hlds__type_util__V_36_36, 1) = ((MR_Box) (check_hlds__type_util__CoveredTypes_7));
#line 709 "type_util.m"
                                  }
#line 709 "type_util.m"
                                  /* direct tailcall eliminated */
#line 709 "type_util.m"
                                  {
#line 709 "type_util.m"
                                    MR_Word check_hlds__type_util__Type__tmp_copy_6 = check_hlds__type_util__SingleArgType_30;
#line 709 "type_util.m"
                                    MR_Word check_hlds__type_util__CoveredTypes__tmp_copy_7 = check_hlds__type_util__V_36_36;

#line 709 "type_util.m"
                                    check_hlds__type_util__CoveredTypes_7 = check_hlds__type_util__CoveredTypes__tmp_copy_7;
#line 709 "type_util.m"
                                    check_hlds__type_util__Type_6 = check_hlds__type_util__Type__tmp_copy_6;
#line 709 "type_util.m"
                                  }
#line 709 "type_util.m"
                                  continue;
#line 703 "type_util.m"
                                }
#line 695 "type_util.m"
                              else
#line 700 "type_util.m"
                                check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 691 "type_util.m"
                          }
#line 712 "type_util.m"
                        else
#line 718 "type_util.m"
                          check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 688 "type_util.m"
                      }
#line 720 "type_util.m"
                    else
#line 721 "type_util.m"
                      check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 683 "type_util.m"
                  }
#line 678 "type_util.m"
              }
#line 724 "type_util.m"
            else
#line 725 "type_util.m"
              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 724 "type_util.m"
          }
#line 675 "type_util.m"
        return check_hlds__type_util__IsDummy_8;
#line 675 "type_util.m"
      }
#line 675 "type_util.m"
      break;
#line 675 "type_util.m"
    }
#line 666 "type_util.m"
}

#line 560 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
#line 560 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 560 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 560 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 560 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3)
#line 560 "type_util.m"
{
#line 560 "type_util.m"
  {
#line 560 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 560 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 560 "type_util.m"
    MR_Word check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26;

#line 560 "type_util.m"
    {
#line 560 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26);
    }
#line 560 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 560 "type_util.m"
      {
#line 560 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26));
#line 560 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 560 "type_util.m"
      }
#line 560 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 560 "type_util.m"
  }
#line 560 "type_util.m"
}

#line 559 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 559 "type_util.m"
{
#line 559 "type_util.m"
  {
#line 559 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 559 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 559 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_19;

#line 559 "type_util.m"
    {
#line 559 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_19 = check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__559__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 559 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_19));
#line 559 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 559 "type_util.m"
  }
#line 559 "type_util.m"
}

#line 551 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
#line 551 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 551 "type_util.m"
  MR_Word check_hlds__type_util__Ctor_6,
#line 551 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_14,
#line 551 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_15)
#line 551 "type_util.m"
{
#line 554 "type_util.m"
  {
#line 554 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 554 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_26_26;
#line 554 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_27_27;
#line 554 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_31_31;
#line 554 "type_util.m"
    MR_Word check_hlds__type_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 3)));
#line 554 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_12;
#line 554 "type_util.m"
    MR_Word check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 0)));
#line 554 "type_util.m"
    MR_Word check_hlds__type_util__V_17_17;
#line 554 "type_util.m"
    MR_Word check_hlds__type_util__V_20_20;
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 1)));
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 2)));
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 4)));
#line 560 "type_util.m"
    MR_Box check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_15;

#line 556 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__V_16_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 554 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 554 "type_util.m"
      {
#line 2824 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_26_26 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 2826 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 559 "type_util.m"
        check_hlds__type_util__V_17_17 = (MR_Word) &check_hlds__type_util_scalar_common_2[7];
#line 559 "type_util.m"
        {
#line 559 "type_util.m"
          check_hlds__type_util__ArgTypes_12 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_26_26, check_hlds__type_util__TypeCtorInfo_27_27, check_hlds__type_util__V_17_17, check_hlds__type_util__Args_10);
        }
#line 2835 "check_hlds.type_util.c"
        check_hlds__type_util__TypeInfo_31_31 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
#line 560 "type_util.m"
        {
#line 560 "type_util.m"
          check_hlds__type_util__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 560 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_20_20, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[0]));
#line 560 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_20_20, 1) = ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2));
#line 560 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 560 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_20_20, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_5));
#line 560 "type_util.m"
        }
#line 560 "type_util.m"
        {
#line 560 "type_util.m"
          check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3(check_hlds__type_util__TypeCtorInfo_27_27, check_hlds__type_util__TypeInfo_31_31, check_hlds__type_util__V_20_20, check_hlds__type_util__ArgTypes_12, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_14)), &check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_15);
        }
#line 560 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 560 "type_util.m"
          {
#line 560 "type_util.m"
            *check_hlds__type_util__STATE_VARIABLE_SeenTypes_15 = ((MR_Word) check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_15);
#line 560 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 560 "type_util.m"
          }
#line 554 "type_util.m"
      }
#line 554 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 554 "type_util.m"
  }
#line 551 "type_util.m"
}

#line 534 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
#line 534 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 534 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 534 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 534 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3)
#line 534 "type_util.m"
{
#line 534 "type_util.m"
  {
#line 534 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 534 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 534 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_15;

#line 534 "type_util.m"
    {
#line 534 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_15);
    }
#line 534 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 534 "type_util.m"
      {
#line 534 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_15));
#line 534 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 534 "type_util.m"
      }
#line 534 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 534 "type_util.m"
  }
#line 534 "type_util.m"
}

#line 514 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
#line 514 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_6,
#line 514 "type_util.m"
  MR_Word check_hlds__type_util__Type_7,
#line 514 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_8,
#line 514 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28,
#line 514 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_29)
#line 514 "type_util.m"
{
#line 519 "type_util.m"
  {
#line 519 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 519 "type_util.m"
    MR_Word check_hlds__type_util__Globals_10;
#line 519 "type_util.m"
    MR_Word check_hlds__type_util__Target_11;

#line 520 "type_util.m"
    {
#line 520 "type_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_6, &check_hlds__type_util__Globals_10);
    }
#line 521 "type_util.m"
    {
#line 521 "type_util.m"
      libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_10, &check_hlds__type_util__Target_11);
    }
#line 537 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_8)) == (MR_mktag((MR_Integer) 1))))
#line 530 "type_util.m"
      {
#line 530 "type_util.m"
        MR_Word check_hlds__type_util__ForeignTypeBody_21;
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 7)));
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_32_32;
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_58_58;
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 3)));
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 4)));
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 5)));
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 525 "type_util.m"
        MR_Word check_hlds__type_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 525 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 525 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 525 "type_util.m"
          {
#line 525 "type_util.m"
            check_hlds__type_util__ForeignTypeBody_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_31_31, (MR_Integer) 0)));
#line 526 "type_util.m"
            check_hlds__type_util__V_32_32 = (MR_Integer) 1;
#line 526 "type_util.m"
            {
#line 526 "type_util.m"
              backend_libs__foreign__have_foreign_type_for_backend_3_p_0(check_hlds__type_util__Target_11, check_hlds__type_util__ForeignTypeBody_21, &check_hlds__type_util__V_58_58);
            }
#line 526 "type_util.m"
            check_hlds__type_util__succeeded = (check_hlds__type_util__V_32_32 == check_hlds__type_util__V_58_58);
#line 525 "type_util.m"
          }
#line 530 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 528 "type_util.m"
          {
#line 528 "type_util.m"
            MR_Word check_hlds__type_util__V_22_22;

#line 528 "type_util.m"
            {
#line 528 "type_util.m"
              check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__ForeignTypeBody_21, &check_hlds__type_util__V_22_22);
            }
#line 528 "type_util.m"
            check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 528 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 528 "type_util.m"
              {
#line 528 "type_util.m"
                *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 528 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 528 "type_util.m"
              }
#line 528 "type_util.m"
          }
#line 530 "type_util.m"
        else
#line 531 "type_util.m"
          {
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtorInfo_56_56;
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__TypeInfo_57_57;
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__Ctors_23;
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 4)));
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_34_34;
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 3)));
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 5)));
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 531 "type_util.m"
            MR_Word check_hlds__type_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 7)));
#line 534 "type_util.m"
            MR_Box check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29;

#line 531 "type_util.m"
            check_hlds__type_util__succeeded = (check_hlds__type_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 531 "type_util.m"
              {
#line 533 "type_util.m"
                {
#line 533 "type_util.m"
                  check_hlds__type_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__Type_7, &check_hlds__type_util__Ctors_23);
                }
#line 531 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 531 "type_util.m"
                  {
#line 3075 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 3077 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeInfo_57_57 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
#line 534 "type_util.m"
                    {
#line 534 "type_util.m"
                      check_hlds__type_util__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "type_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
#line 534 "type_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 1) = ((MR_Box) (check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1));
#line 534 "type_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "type_util.m"
                      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_6));
#line 534 "type_util.m"
                    }
#line 534 "type_util.m"
                    {
#line 534 "type_util.m"
                      check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3(check_hlds__type_util__TypeCtorInfo_56_56, check_hlds__type_util__TypeInfo_57_57, check_hlds__type_util__V_34_34, check_hlds__type_util__Ctors_23, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28)), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29);
                    }
#line 534 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 534 "type_util.m"
                      {
#line 534 "type_util.m"
                        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = ((MR_Word) check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29);
#line 534 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 534 "type_util.m"
                      }
#line 531 "type_util.m"
                  }
#line 531 "type_util.m"
              }
#line 531 "type_util.m"
          }
#line 530 "type_util.m"
      }
#line 537 "type_util.m"
    else
#line 537 "type_util.m"
      if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_8)) == (MR_mktag((MR_Integer) 2))))
#line 538 "type_util.m"
        {
#line 538 "type_util.m"
          MR_Word check_hlds__type_util__EqvType_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 538 "type_util.m"
          MR_Word check_hlds__type_util__V_62_62;
#line 474 "type_util.m"
          MR_Word check_hlds__type_util__V_61_61;

#line 474 "type_util.m"
          {
#line 474 "type_util.m"
            check_hlds__type_util__V_62_62 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
#line 474 "type_util.m"
          {
#line 474 "type_util.m"
            check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__EqvType_24, check_hlds__type_util__V_62_62, &check_hlds__type_util__V_61_61);
          }
#line 538 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 538 "type_util.m"
            {
#line 539 "type_util.m"
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 539 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 538 "type_util.m"
            }
#line 538 "type_util.m"
        }
#line 537 "type_util.m"
      else
#line 537 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_8)) == (MR_mktag((MR_Integer) 0))))
#line 541 "type_util.m"
          {
#line 541 "type_util.m"
            MR_Word check_hlds__type_util__ForeignTypeBody_36 = (MR_Word) MR_body(((MR_Word) check_hlds__type_util__TypeBody_8), (MR_Integer) 0);
#line 542 "type_util.m"
            MR_Word check_hlds__type_util__V_25_25;

#line 542 "type_util.m"
            {
#line 542 "type_util.m"
              check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__ForeignTypeBody_36, &check_hlds__type_util__V_25_25);
            }
#line 542 "type_util.m"
            check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 541 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 541 "type_util.m"
              {
#line 542 "type_util.m"
                *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 542 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 541 "type_util.m"
              }
#line 541 "type_util.m"
          }
#line 537 "type_util.m"
        else
#line 537 "type_util.m"
          if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 545 "type_util.m"
            {
#line 545 "type_util.m"
              MR_Word check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 545 "type_util.m"
              MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));

#line 545 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 545 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 545 "type_util.m"
                {
#line 545 "type_util.m"
                  *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 545 "type_util.m"
                  check_hlds__type_util__succeeded = MR_TRUE;
#line 545 "type_util.m"
                }
#line 545 "type_util.m"
            }
#line 537 "type_util.m"
          else
#line 537 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 519 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 519 "type_util.m"
  }
#line 514 "type_util.m"
}

#line 511 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
#line 511 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 511 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 511 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 511 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3)
#line 511 "type_util.m"
{
#line 511 "type_util.m"
  {
#line 511 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 511 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 511 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26;

#line 511 "type_util.m"
    {
#line 511 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26);
    }
#line 511 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 511 "type_util.m"
      {
#line 511 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26));
#line 511 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 511 "type_util.m"
      }
#line 511 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 511 "type_util.m"
  }
#line 511 "type_util.m"
}

#line 507 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
#line 507 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 507 "type_util.m"
  MR_Word check_hlds__type_util__Types_6,
#line 507 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8,
#line 507 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_9)
#line 507 "type_util.m"
{
#line 510 "type_util.m"
  {
#line 510 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 510 "type_util.m"
    MR_Word check_hlds__type_util__V_10_10;
#line 511 "type_util.m"
    MR_Box check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9;

#line 511 "type_util.m"
    {
#line 511 "type_util.m"
      check_hlds__type_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 511 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[0]));
#line 511 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 1) = ((MR_Box) (check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1));
#line 511 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 511 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_5));
#line 511 "type_util.m"
    }
#line 511 "type_util.m"
    {
#line 511 "type_util.m"
      check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[4], check_hlds__type_util__V_10_10, check_hlds__type_util__Types_6, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8)), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9);
    }
#line 511 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 511 "type_util.m"
      {
#line 511 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_9 = ((MR_Word) check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9);
#line 511 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 511 "type_util.m"
      }
#line 510 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 510 "type_util.m"
  }
#line 507 "type_util.m"
}

#line 477 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
#line 477 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 477 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 477 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25,
#line 477 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_26)
#line 477 "type_util.m"
{
#line 484 "type_util.m"
  {
#line 484 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 481 "type_util.m"
    {
#line 481 "type_util.m"
      check_hlds__type_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25, ((MR_Box) (check_hlds__type_util__Type_6)));
    }
#line 484 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 481 "type_util.m"
      {
#line 481 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_26 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25;
#line 481 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 481 "type_util.m"
      }
#line 484 "type_util.m"
    else
#line 485 "type_util.m"
      {
#line 485 "type_util.m"
        MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27;

#line 485 "type_util.m"
        {
#line 485 "type_util.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__type_util__Type_6)), check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27);
        }
#line 488 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__Type_6)) == (MR_mktag((MR_Integer) 2))))
#line 487 "type_util.m"
          {
#line 487 "type_util.m"
            *check_hlds__type_util__STATE_VARIABLE_SeenTypes_26 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27;
#line 487 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 487 "type_util.m"
          }
#line 488 "type_util.m"
        else
#line 488 "type_util.m"
          if (((((MR_tag((MR_Word) check_hlds__type_util__Type_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 489 "type_util.m"
            {
#line 489 "type_util.m"
              MR_Word check_hlds__type_util__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 1)));
#line 489 "type_util.m"
              MR_Word check_hlds__type_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 2)));

#line 490 "type_util.m"
              {
#line 490 "type_util.m"
                return check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_9, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
              }
#line 489 "type_util.m"
            }
#line 488 "type_util.m"
          else
#line 488 "type_util.m"
            if (((((((((((MR_tag((MR_Word) check_hlds__type_util__Type_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 0)))) == (MR_Integer) 2)))) || (((MR_tag((MR_Word) check_hlds__type_util__Type_6)) == (MR_mktag((MR_Integer) 1)))))) || (((((MR_tag((MR_Word) check_hlds__type_util__Type_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 0)))) == (MR_Integer) 1)))))) || (((((MR_tag((MR_Word) check_hlds__type_util__Type_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 0)))) == (MR_Integer) 3))))))
#line 497 "type_util.m"
              {
#line 497 "type_util.m"
                MR_Word check_hlds__type_util__TypeBody_23;
#line 497 "type_util.m"
                MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28;
#line 497 "type_util.m"
                MR_Word check_hlds__type_util__Args_31;
#line 497 "type_util.m"
                MR_Word check_hlds__type_util__TypeDefn_37;
#line 497 "type_util.m"
                MR_Word check_hlds__type_util__TypeTable_41;
#line 497 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtor_42;
#line 501 "type_util.m"
                MR_Word check_hlds__type_util__V_24_24;

#line 431 "type_util.m"
                {
#line 431 "type_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_41);
                }
#line 432 "type_util.m"
                {
#line 432 "type_util.m"
                  check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_42);
                }
#line 497 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 497 "type_util.m"
                  {
#line 433 "type_util.m"
                    {
#line 433 "type_util.m"
                      check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_41, check_hlds__type_util__TypeCtor_42, &check_hlds__type_util__TypeDefn_37);
                    }
#line 497 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 497 "type_util.m"
                      {
#line 441 "type_util.m"
                        {
#line 441 "type_util.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_37, &check_hlds__type_util__TypeBody_23);
                        }
#line 499 "type_util.m"
                        {
#line 499 "type_util.m"
                          check_hlds__type_util__succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__TypeBody_23, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28);
                        }
#line 497 "type_util.m"
                        if (check_hlds__type_util__succeeded)
#line 497 "type_util.m"
                          {
#line 501 "type_util.m"
                            {
#line 501 "type_util.m"
                              parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__V_24_24, &check_hlds__type_util__Args_31);
                            }
#line 502 "type_util.m"
                            {
#line 502 "type_util.m"
                              return check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_31, check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                            }
#line 497 "type_util.m"
                          }
#line 497 "type_util.m"
                      }
#line 497 "type_util.m"
                  }
#line 497 "type_util.m"
              }
#line 488 "type_util.m"
            else
#line 488 "type_util.m"
              check_hlds__type_util__succeeded = MR_FALSE;
#line 485 "type_util.m"
      }
#line 484 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 484 "type_util.m"
  }
#line 477 "type_util.m"
}

#line 1394 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
#line 1394 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1394 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1394 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1394 "type_util.m"
{
#line 1394 "type_util.m"
  {
#line 1394 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1394 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1394 "type_util.m"
    {
#line 1394 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1394 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1394 "type_util.m"
  }
#line 1394 "type_util.m"
}

#line 357 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(
#line 357 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 357 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
#line 357 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
#line 357 "type_util.m"
{
#line 1393 "type_util.m"
  {
#line 1393 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1393 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1393 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1394 "type_util.m"
    {
#line 1394 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1394 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[9]));
#line 1394 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1));
#line 1394 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1394 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1394 "type_util.m"
    }
#line 3545 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1394 "type_util.m"
    {
#line 1394 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1394 "type_util.m"
      return;
    }
#line 1393 "type_util.m"
  }
#line 357 "type_util.m"
}

#line 1391 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
#line 1391 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1391 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1391 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1391 "type_util.m"
{
#line 1391 "type_util.m"
  {
#line 1391 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1391 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1391 "type_util.m"
    {
#line 1391 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1391 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1391 "type_util.m"
  }
#line 1391 "type_util.m"
}

#line 354 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(
#line 354 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 354 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
#line 354 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
#line 354 "type_util.m"
{
#line 1390 "type_util.m"
  {
#line 1390 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1390 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1390 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1391 "type_util.m"
    {
#line 1391 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1391 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[9]));
#line 1391 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1));
#line 1391 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1391 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1391 "type_util.m"
    }
#line 3623 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1391 "type_util.m"
    {
#line 1391 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1391 "type_util.m"
      return;
    }
#line 1390 "type_util.m"
  }
#line 354 "type_util.m"
}

#line 1387 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
#line 1387 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1387 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1387 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1387 "type_util.m"
{
#line 1387 "type_util.m"
  {
#line 1387 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1387 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1387 "type_util.m"
    {
#line 1387 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1387 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1387 "type_util.m"
  }
#line 1387 "type_util.m"
}

#line 351 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(
#line 351 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 351 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
#line 351 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
#line 351 "type_util.m"
{
#line 1386 "type_util.m"
  {
#line 1386 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1386 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1386 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1387 "type_util.m"
    {
#line 1387 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1387 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[8]));
#line 1387 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1));
#line 1387 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1387 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1387 "type_util.m"
    }
#line 3701 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1387 "type_util.m"
    {
#line 1387 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1387 "type_util.m"
      return;
    }
#line 1386 "type_util.m"
  }
#line 351 "type_util.m"
}

#line 1365 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_p_0_1(
#line 1365 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1365 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1365 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1365 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1365 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4)
#line 1365 "type_util.m"
{
#line 1365 "type_util.m"
  {
#line 1365 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1365 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Map_16;

#line 1365 "type_util.m"
    {
#line 1365 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_proofs_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3), &check_hlds__type_util__conv0_STATE_VARIABLE_Map_16);
    }
#line 1365 "type_util.m"
    *check_hlds__type_util__wrapper_arg_4 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Map_16));
#line 1365 "type_util.m"
  }
#line 1365 "type_util.m"
}

#line 346 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_p_0(
#line 346 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 346 "type_util.m"
  MR_Word check_hlds__type_util__Proofs0_5,
#line 346 "type_util.m"
  MR_Word * check_hlds__type_util__Proofs_6)
#line 346 "type_util.m"
{
#line 1364 "type_util.m"
  {
#line 1364 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1364 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_13_13;
#line 1364 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_14_14;
#line 1364 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;
#line 1364 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;
#line 1365 "type_util.m"
    MR_Box check_hlds__type_util__conv1_Proofs_6;

#line 1365 "type_util.m"
    {
#line 1365 "type_util.m"
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1365 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_6[0]));
#line 1365 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_proofs_3_p_0_1));
#line 1365 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1365 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1365 "type_util.m"
    }
#line 3789 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 3791 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
#line 1365 "type_util.m"
    {
#line 1365 "type_util.m"
      check_hlds__type_util__V_8_8 = mercury__map__init_0_f_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14);
    }
#line 1365 "type_util.m"
    {
#line 1365 "type_util.m"
      mercury__map__foldl_4_p_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], check_hlds__type_util__V_7_7, check_hlds__type_util__Proofs0_5, ((MR_Box) (check_hlds__type_util__V_8_8)), &check_hlds__type_util__conv1_Proofs_6);
    }
#line 1365 "type_util.m"
    *check_hlds__type_util__Proofs_6 = ((MR_Word) check_hlds__type_util__conv1_Proofs_6);
#line 1364 "type_util.m"
  }
#line 346 "type_util.m"
}

#line 1345 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proofs_3_p_0_1(
#line 1345 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1345 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1345 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1345 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1345 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4)
#line 1345 "type_util.m"
{
#line 1345 "type_util.m"
  {
#line 1345 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1345 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Map_16;

#line 1345 "type_util.m"
    {
#line 1345 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_proofs_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3), &check_hlds__type_util__conv0_STATE_VARIABLE_Map_16);
    }
#line 1345 "type_util.m"
    *check_hlds__type_util__wrapper_arg_4 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Map_16));
#line 1345 "type_util.m"
  }
#line 1345 "type_util.m"
}

#line 343 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proofs_3_p_0(
#line 343 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 343 "type_util.m"
  MR_Word check_hlds__type_util__Proofs0_5,
#line 343 "type_util.m"
  MR_Word * check_hlds__type_util__Proofs_6)
#line 343 "type_util.m"
{
#line 1344 "type_util.m"
  {
#line 1344 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1344 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_13_13;
#line 1344 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_14_14;
#line 1344 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;
#line 1344 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;
#line 1345 "type_util.m"
    MR_Box check_hlds__type_util__conv1_Proofs_6;

#line 1345 "type_util.m"
    {
#line 1345 "type_util.m"
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1345 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_6[0]));
#line 1345 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_proofs_3_p_0_1));
#line 1345 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1345 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1345 "type_util.m"
    }
#line 3884 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 3886 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
#line 1345 "type_util.m"
    {
#line 1345 "type_util.m"
      check_hlds__type_util__V_8_8 = mercury__map__init_0_f_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14);
    }
#line 1345 "type_util.m"
    {
#line 1345 "type_util.m"
      mercury__map__foldl_4_p_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], check_hlds__type_util__V_7_7, check_hlds__type_util__Proofs0_5, ((MR_Box) (check_hlds__type_util__V_8_8)), &check_hlds__type_util__conv1_Proofs_6);
    }
#line 1345 "type_util.m"
    *check_hlds__type_util__Proofs_6 = ((MR_Word) check_hlds__type_util__conv1_Proofs_6);
#line 1344 "type_util.m"
  }
#line 343 "type_util.m"
}

#line 1329 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_p_0_1(
#line 1329 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1329 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1329 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1329 "type_util.m"
{
#line 1329 "type_util.m"
  {
#line 1329 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1329 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1329 "type_util.m"
    {
#line 1329 "type_util.m"
      check_hlds__type_util__rename_constraint_proof_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1329 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1329 "type_util.m"
  }
#line 1329 "type_util.m"
}

#line 340 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_p_0(
#line 340 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 340 "type_util.m"
  MR_Word check_hlds__type_util__Proofs0_5,
#line 340 "type_util.m"
  MR_Word * check_hlds__type_util__Proofs_6)
#line 340 "type_util.m"
{
#line 1325 "type_util.m"
  {
#line 1325 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 1322 "type_util.m"
    {
#line 1322 "type_util.m"
      check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, check_hlds__type_util__Proofs0_5);
    }
#line 1325 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1324 "type_util.m"
      *check_hlds__type_util__Proofs_6 = check_hlds__type_util__Proofs0_5;
#line 1325 "type_util.m"
    else
#line 1326 "type_util.m"
      {
#line 1326 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1326 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
#line 1326 "type_util.m"
        MR_Word check_hlds__type_util__Keys0_7;
#line 1326 "type_util.m"
        MR_Word check_hlds__type_util__Values0_8;
#line 1326 "type_util.m"
        MR_Word check_hlds__type_util__Keys_9;
#line 1326 "type_util.m"
        MR_Word check_hlds__type_util__Values_10;
#line 1326 "type_util.m"
        MR_Word check_hlds__type_util__V_11_11;

#line 1326 "type_util.m"
        {
#line 1326 "type_util.m"
          mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__Proofs0_5, &check_hlds__type_util__Keys0_7);
        }
#line 1327 "type_util.m"
        {
#line 1327 "type_util.m"
          mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__Proofs0_5, &check_hlds__type_util__Values0_8);
        }
#line 1328 "type_util.m"
        {
#line 1328 "type_util.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__Keys0_7, &check_hlds__type_util__Keys_9);
        }
#line 1329 "type_util.m"
        {
#line 1329 "type_util.m"
          check_hlds__type_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1329 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[7]));
#line 1329 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_proofs_3_p_0_1));
#line 1329 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1329 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1329 "type_util.m"
        }
#line 1329 "type_util.m"
        {
#line 1329 "type_util.m"
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__V_11_11, check_hlds__type_util__Values0_8, &check_hlds__type_util__Values_10);
        }
#line 1330 "type_util.m"
        {
#line 1330 "type_util.m"
          mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__Keys_9, check_hlds__type_util__Values_10, check_hlds__type_util__Proofs_6);
#line 1330 "type_util.m"
          return;
        }
#line 1326 "type_util.m"
      }
#line 1325 "type_util.m"
  }
#line 340 "type_util.m"
}

#line 1314 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
#line 1314 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1314 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1314 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1314 "type_util.m"
{
#line 1314 "type_util.m"
  {
#line 1314 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1314 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1314 "type_util.m"
    {
#line 1314 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1314 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1314 "type_util.m"
  }
#line 1314 "type_util.m"
}

#line 1304 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
#line 1304 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1304 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1304 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1304 "type_util.m"
{
#line 1304 "type_util.m"
  {
#line 1304 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1304 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1304 "type_util.m"
    {
#line 1304 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1304__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1304 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1304 "type_util.m"
  }
#line 1304 "type_util.m"
}

#line 1233 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1233 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1233 "type_util.m"
{
#line 1233 "type_util.m"
  {
#line 1233 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1233 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1233 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1233 "type_util.m"
  }
#line 1233 "type_util.m"
}

#line 335 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(
#line 335 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 335 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
#line 335 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
#line 335 "type_util.m"
{
#line 1299 "type_util.m"
  {
#line 1299 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_34_34;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_35_35;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_55;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Unproven_10;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Assumed_11;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Pred_12;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Redundant_17;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys0_18;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues0_19;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys_20;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues_21;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors_22;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__V_27_27;
#line 1299 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1233 "type_util.m"
    }
#line 4187 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
    }
#line 4194 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__V_42_42, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
    }
#line 1304 "type_util.m"
    {
#line 1304 "type_util.m"
      check_hlds__type_util__Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1304 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[5]));
#line 1304 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2));
#line 1304 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1304 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1304 "type_util.m"
    }
#line 4215 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1309 "type_util.m"
    {
#line 1309 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_12, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_17);
    }
#line 4222 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4224 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1310 "type_util.m"
    {
#line 1310 "type_util.m"
      mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_18);
    }
#line 1311 "type_util.m"
    {
#line 1311 "type_util.m"
      mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_19);
    }
#line 1312 "type_util.m"
    {
#line 1312 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__AncestorsKeys0_18, &check_hlds__type_util__AncestorsKeys_20);
    }
#line 1314 "type_util.m"
    {
#line 1314 "type_util.m"
      check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1314 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[6]));
#line 1314 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3));
#line 1314 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1314 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1314 "type_util.m"
    }
#line 1314 "type_util.m"
    {
#line 1314 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_19, &check_hlds__type_util__AncestorsValues_21);
    }
#line 1316 "type_util.m"
    {
#line 1316 "type_util.m"
      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__AncestorsKeys_20, check_hlds__type_util__AncestorsValues_21, &check_hlds__type_util__Ancestors_22);
    }
#line 1317 "type_util.m"
    {
#line 1317 "type_util.m"
      MR_Word base;
#line 1317 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1317 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1317 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1317 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1317 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_17));
#line 1317 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_22));
#line 1317 "type_util.m"
    }
#line 1299 "type_util.m"
  }
#line 335 "type_util.m"
}

#line 1294 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
#line 1294 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1294 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1294 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1294 "type_util.m"
{
#line 1294 "type_util.m"
  {
#line 1294 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1294 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1294 "type_util.m"
    {
#line 1294 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1294 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1294 "type_util.m"
  }
#line 1294 "type_util.m"
}

#line 1285 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
#line 1285 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1285 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1285 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1285 "type_util.m"
{
#line 1285 "type_util.m"
  {
#line 1285 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1285 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1285 "type_util.m"
    {
#line 1285 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1285__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1285 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1285 "type_util.m"
  }
#line 1285 "type_util.m"
}

#line 1230 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1230 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1230 "type_util.m"
{
#line 1230 "type_util.m"
  {
#line 1230 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1230 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1230 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1230 "type_util.m"
  }
#line 1230 "type_util.m"
}

#line 332 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0(
#line 332 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 332 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
#line 332 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
#line 332 "type_util.m"
{
#line 1280 "type_util.m"
  {
#line 1280 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_34_34;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_35_35;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_55;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Unproven_10;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Assumed_11;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Pred_12;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Redundant_17;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys0_18;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues0_19;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys_20;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues_21;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors_22;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__V_27_27;
#line 1280 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_1));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1230 "type_util.m"
    }
#line 4448 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
    }
#line 4455 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__V_42_42, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
    }
#line 1285 "type_util.m"
    {
#line 1285 "type_util.m"
      check_hlds__type_util__Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1285 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[5]));
#line 1285 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_2));
#line 1285 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1285 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1285 "type_util.m"
    }
#line 4476 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_12, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_17);
    }
#line 4483 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4485 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1291 "type_util.m"
    {
#line 1291 "type_util.m"
      mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_18);
    }
#line 1292 "type_util.m"
    {
#line 1292 "type_util.m"
      mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_19);
    }
#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__AncestorsKeys0_18, &check_hlds__type_util__AncestorsKeys_20);
    }
#line 1294 "type_util.m"
    {
#line 1294 "type_util.m"
      check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1294 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[6]));
#line 1294 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_3));
#line 1294 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1294 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1294 "type_util.m"
    }
#line 1294 "type_util.m"
    {
#line 1294 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_19, &check_hlds__type_util__AncestorsValues_21);
    }
#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__AncestorsKeys_20, check_hlds__type_util__AncestorsValues_21, &check_hlds__type_util__Ancestors_22);
    }
#line 1297 "type_util.m"
    {
#line 1297 "type_util.m"
      MR_Word base;
#line 1297 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1297 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1297 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1297 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1297 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_17));
#line 1297 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_22));
#line 1297 "type_util.m"
    }
#line 1280 "type_util.m"
  }
#line 332 "type_util.m"
}

#line 1271 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
#line 1271 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1271 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1271 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1271 "type_util.m"
{
#line 1271 "type_util.m"
  {
#line 1271 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1271 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1271 "type_util.m"
    {
#line 1271 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1271 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1271 "type_util.m"
  }
#line 1271 "type_util.m"
}

#line 1257 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
#line 1257 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1257 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1257 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1257 "type_util.m"
{
#line 1257 "type_util.m"
  {
#line 1257 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1257 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1257 "type_util.m"
    {
#line 1257 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1257__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1257 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1257 "type_util.m"
  }
#line 1257 "type_util.m"
}

#line 1227 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1227 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1227 "type_util.m"
{
#line 1227 "type_util.m"
  {
#line 1227 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1227 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1227 "type_util.m"
    {
#line 1227 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1227 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1227 "type_util.m"
  }
#line 1227 "type_util.m"
}

#line 329 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(
#line 329 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 329 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
#line 329 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
#line 329 "type_util.m"
{
#line 1237 "type_util.m"
  {
#line 1237 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1237 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1237 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1237 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1237 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1243 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31;
#line 1243 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1243 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_33_33;
#line 1243 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_34_34;

#line 1243 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__Unproven0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1243 "type_util.m"
      {
#line 1244 "type_util.m"
        check_hlds__type_util__succeeded = (check_hlds__type_util__Assumed0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1243 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1243 "type_util.m"
          {
#line 4683 "check_hlds.type_util.c"
            check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 4685 "check_hlds.type_util.c"
            check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1245 "type_util.m"
            {
#line 1245 "type_util.m"
              check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__Redundant0_8);
            }
#line 1243 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1243 "type_util.m"
              {
#line 4696 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4698 "check_hlds.type_util.c"
                check_hlds__type_util__TypeInfo_34_34 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1246 "type_util.m"
                {
#line 1246 "type_util.m"
                  check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_util__TypeCtorInfo_33_33, check_hlds__type_util__TypeInfo_34_34, check_hlds__type_util__Ancestors0_9);
                }
#line 1243 "type_util.m"
              }
#line 1243 "type_util.m"
          }
#line 1243 "type_util.m"
      }
#line 1249 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1246 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = check_hlds__type_util__STATE_VARIABLE_Constraints_0_23;
#line 1249 "type_util.m"
    else
#line 1251 "type_util.m"
      {
#line 1251 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_12_54;
#line 1251 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_12_63;
#line 1251 "type_util.m"
        MR_Word check_hlds__type_util__Unproven_10;
#line 1251 "type_util.m"
        MR_Word check_hlds__type_util__Assumed_11;
#line 1251 "type_util.m"
        MR_Word check_hlds__type_util__Redundant_12;
#line 1251 "type_util.m"
        MR_Word check_hlds__type_util__Ancestors_18;
#line 1251 "type_util.m"
        MR_Word check_hlds__type_util__V_50_50;

#line 1227 "type_util.m"
        {
#line 1227 "type_util.m"
          check_hlds__type_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[1]));
#line 1227 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1));
#line 1227 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1227 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1227 "type_util.m"
        }
#line 4748 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1227 "type_util.m"
        {
#line 1227 "type_util.m"
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__V_50_50, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
        }
#line 4755 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_12_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1227 "type_util.m"
        {
#line 1227 "type_util.m"
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_63, check_hlds__type_util__TypeCtorInfo_12_63, check_hlds__type_util__V_50_50, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
        }
#line 1254 "type_util.m"
        {
#line 1254 "type_util.m"
          check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__Redundant0_8);
        }
#line 1256 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1255 "type_util.m"
          check_hlds__type_util__Redundant_12 = check_hlds__type_util__Redundant0_8;
#line 1256 "type_util.m"
        else
#line 1261 "type_util.m"
          {
#line 1261 "type_util.m"
            MR_Word check_hlds__type_util__TypeInfo_38_38;
#line 1261 "type_util.m"
            MR_Word check_hlds__type_util__Pred_13;

#line 1257 "type_util.m"
            {
#line 1257 "type_util.m"
              check_hlds__type_util__Pred_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1257 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[3]));
#line 1257 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2));
#line 1257 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1257 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1257 "type_util.m"
            }
#line 4794 "check_hlds.type_util.c"
            check_hlds__type_util__TypeInfo_38_38 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1262 "type_util.m"
            {
#line 1262 "type_util.m"
              mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_38_38, check_hlds__type_util__TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_13, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_12);
            }
#line 1261 "type_util.m"
          }
#line 1264 "type_util.m"
        {
#line 1264 "type_util.m"
          check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__type_util_scalar_common_1[3], check_hlds__type_util__Ancestors0_9);
        }
#line 1266 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1265 "type_util.m"
          check_hlds__type_util__Ancestors_18 = check_hlds__type_util__Ancestors0_9;
#line 1266 "type_util.m"
        else
#line 1267 "type_util.m"
          {
#line 1267 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1267 "type_util.m"
            MR_Word check_hlds__type_util__TypeInfo_43_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1267 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsKeys0_19;
#line 1267 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsValues0_20;
#line 1267 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsKeys_21;
#line 1267 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsValues_22;
#line 1267 "type_util.m"
            MR_Word check_hlds__type_util__V_27_27;

#line 1267 "type_util.m"
            {
#line 1267 "type_util.m"
              mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_19);
            }
#line 1268 "type_util.m"
            {
#line 1268 "type_util.m"
              mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_20);
            }
#line 1269 "type_util.m"
            {
#line 1269 "type_util.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__AncestorsKeys0_19, &check_hlds__type_util__AncestorsKeys_21);
            }
#line 1271 "type_util.m"
            {
#line 1271 "type_util.m"
              check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1271 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[4]));
#line 1271 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3));
#line 1271 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1271 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1271 "type_util.m"
            }
#line 1271 "type_util.m"
            {
#line 1271 "type_util.m"
              mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_20, &check_hlds__type_util__AncestorsValues_22);
            }
#line 1273 "type_util.m"
            {
#line 1273 "type_util.m"
              mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__AncestorsKeys_21, check_hlds__type_util__AncestorsValues_22, &check_hlds__type_util__Ancestors_18);
            }
#line 1267 "type_util.m"
          }
#line 1276 "type_util.m"
        {
#line 1276 "type_util.m"
          MR_Word base;
#line 1276 "type_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1276 "type_util.m"
          *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1276 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1276 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1276 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_12));
#line 1276 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_18));
#line 1276 "type_util.m"
        }
#line 1251 "type_util.m"
      }
#line 1237 "type_util.m"
  }
#line 329 "type_util.m"
}

#line 1233 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1233 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1233 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1233 "type_util.m"
{
#line 1233 "type_util.m"
  {
#line 1233 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1233 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1233 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1233 "type_util.m"
  }
#line 1233 "type_util.m"
}

#line 324 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0(
#line 324 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 324 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
#line 324 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
#line 324 "type_util.m"
{
#line 1232 "type_util.m"
  {
#line 1232 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1232 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1232 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1233 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1233 "type_util.m"
    }
#line 4961 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1233 "type_util.m"
    {
#line 1233 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1233 "type_util.m"
      return;
    }
#line 1232 "type_util.m"
  }
#line 324 "type_util.m"
}

#line 1230 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1230 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1230 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1230 "type_util.m"
{
#line 1230 "type_util.m"
  {
#line 1230 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1230 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1230 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1230 "type_util.m"
  }
#line 1230 "type_util.m"
}

#line 321 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0(
#line 321 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 321 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
#line 321 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
#line 321 "type_util.m"
{
#line 1229 "type_util.m"
  {
#line 1229 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1229 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1229 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[2]));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1230 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1230 "type_util.m"
    }
#line 5039 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1230 "type_util.m"
    {
#line 1230 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1230 "type_util.m"
      return;
    }
#line 1229 "type_util.m"
  }
#line 321 "type_util.m"
}

#line 1227 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1227 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1227 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1227 "type_util.m"
{
#line 1227 "type_util.m"
  {
#line 1227 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1227 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1227 "type_util.m"
    {
#line 1227 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1227 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1227 "type_util.m"
  }
#line 1227 "type_util.m"
}

#line 318 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0(
#line 318 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 318 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
#line 318 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
#line 318 "type_util.m"
{
#line 1226 "type_util.m"
  {
#line 1226 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1226 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1226 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1227 "type_util.m"
    {
#line 1227 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1227 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[1]));
#line 1227 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1));
#line 1227 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1227 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1227 "type_util.m"
    }
#line 5117 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1227 "type_util.m"
    {
#line 1227 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1227 "type_util.m"
      return;
    }
#line 1226 "type_util.m"
  }
#line 318 "type_util.m"
}

#line 313 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(
#line 313 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 313 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
#line 313 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
#line 313 "type_util.m"
{
#line 1219 "type_util.m"
  {
#line 1219 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1219 "type_util.m"
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
#line 1219 "type_util.m"
    MR_Word check_hlds__type_util__Name_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
#line 1219 "type_util.m"
    MR_Word check_hlds__type_util__Types0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1219 "type_util.m"
    MR_Word check_hlds__type_util__Types_9;

#line 1221 "type_util.m"
    {
#line 1221 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__Types0_8, &check_hlds__type_util__Types_9);
    }
#line 1222 "type_util.m"
    {
#line 1222 "type_util.m"
      MR_Word base;
#line 1222 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1222 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1222 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1222 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Name_7));
#line 1222 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Types_9));
#line 1222 "type_util.m"
    }
#line 1219 "type_util.m"
  }
#line 313 "type_util.m"
}

#line 310 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_3_p_0(
#line 310 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 310 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
#line 310 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
#line 310 "type_util.m"
{
#line 1214 "type_util.m"
  {
#line 1214 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1214 "type_util.m"
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
#line 1214 "type_util.m"
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
#line 1214 "type_util.m"
    MR_Word check_hlds__type_util__Types0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1214 "type_util.m"
    MR_Word check_hlds__type_util__Types_9;

#line 1216 "type_util.m"
    {
#line 1216 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__Types0_8, &check_hlds__type_util__Types_9);
    }
#line 1217 "type_util.m"
    {
#line 1217 "type_util.m"
      MR_Word base;
#line 1217 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1217 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1217 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1217 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
#line 1217 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Types_9));
#line 1217 "type_util.m"
    }
#line 1214 "type_util.m"
  }
#line 310 "type_util.m"
}

#line 307 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(
#line 307 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 307 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
#line 307 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
#line 307 "type_util.m"
{
#line 1208 "type_util.m"
  {
#line 1208 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1208 "type_util.m"
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
#line 1208 "type_util.m"
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
#line 1208 "type_util.m"
    MR_Word check_hlds__type_util__ClassArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1208 "type_util.m"
    MR_Word check_hlds__type_util__ClassArgTypes_9;

#line 1210 "type_util.m"
    {
#line 1210 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__ClassArgTypes0_8, &check_hlds__type_util__ClassArgTypes_9);
    }
#line 1212 "type_util.m"
    {
#line 1212 "type_util.m"
      MR_Word base;
#line 1212 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1212 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1212 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1212 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
#line 1212 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ClassArgTypes_9));
#line 1212 "type_util.m"
    }
#line 1208 "type_util.m"
  }
#line 307 "type_util.m"
}

#line 1201 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1(
#line 1201 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1201 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1201 "type_util.m"
{
#line 1201 "type_util.m"
  {
#line 1201 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1201 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1201 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_15;

#line 1201 "type_util.m"
    {
#line 1201 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_15 = check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1201__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1201 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_15));
#line 1201 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1201 "type_util.m"
  }
#line 1201 "type_util.m"
}

#line 299 "type_util.m"
void MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(
#line 299 "type_util.m"
  MR_Word check_hlds__type_util__MaybeType_4,
#line 299 "type_util.m"
  MR_Integer check_hlds__type_util__Arity_5,
#line 299 "type_util.m"
  MR_Word * check_hlds__type_util__MaybeTypes_6)
#line 299 "type_util.m"
{
#line 1202 "type_util.m"
  {
#line 1202 "type_util.m"
    MR_bool check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__MaybeType_4)) == (MR_mktag((MR_Integer) 1)));
#line 1202 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_11;
#line 1198 "type_util.m"
    MR_Word check_hlds__type_util__Type_7;
#line 1199 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;
#line 1199 "type_util.m"
    MR_Word check_hlds__type_util__V_9_9;

#line 1198 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1198 "type_util.m"
      {
#line 1198 "type_util.m"
        check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__MaybeType_4, (MR_Integer) 0)));
#line 1199 "type_util.m"
        {
#line 1199 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__V_8_8, &check_hlds__type_util__V_9_9, &check_hlds__type_util__ArgTypes_11);
        }
#line 1198 "type_util.m"
      }
#line 1202 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1201 "type_util.m"
      {
#line 1201 "type_util.m"
        {
#line 1201 "type_util.m"
          *check_hlds__type_util__MaybeTypes_6 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[1], (MR_Word) &check_hlds__type_util_scalar_common_2[6], check_hlds__type_util__ArgTypes_11);
        }
#line 1201 "type_util.m"
      }
#line 1202 "type_util.m"
    else
#line 1203 "type_util.m"
      {
#line 1203 "type_util.m"
        {
#line 1203 "type_util.m"
          mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[1], check_hlds__type_util__Arity_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__type_util__MaybeTypes_6);
#line 1203 "type_util.m"
          return;
        }
#line 1203 "type_util.m"
      }
#line 1202 "type_util.m"
  }
#line 299 "type_util.m"
}

#line 1188 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1(
#line 1188 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1188 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1188 "type_util.m"
{
#line 1188 "type_util.m"
  {
#line 1188 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1188 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1188 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_20;

#line 1188 "type_util.m"
    {
#line 1188 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1188__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1188 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_20));
#line 1188 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1188 "type_util.m"
  }
#line 1188 "type_util.m"
}

#line 296 "type_util.m"
void MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(
#line 296 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_6,
#line 296 "type_util.m"
  MR_Word check_hlds__type_util__MaybeType_7,
#line 296 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_8,
#line 296 "type_util.m"
  MR_Integer check_hlds__type_util__Arity_9,
#line 296 "type_util.m"
  MR_Word * check_hlds__type_util__MaybeTypes_10)
#line 296 "type_util.m"
{
#line 1192 "type_util.m"
  {
#line 1192 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 1176 "type_util.m"
    if (((((MR_tag((MR_Word) check_hlds__type_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1175 "type_util.m"
      check_hlds__type_util__succeeded = MR_TRUE;
#line 1176 "type_util.m"
    else
#line 1176 "type_util.m"
      if (((((MR_tag((MR_Word) check_hlds__type_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1176 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 1176 "type_util.m"
      else
#line 1176 "type_util.m"
        check_hlds__type_util__succeeded = MR_FALSE;
#line 1192 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1189 "type_util.m"
      {
#line 1189 "type_util.m"
        MR_Word check_hlds__type_util__Types_16;
#line 1180 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_23_23;
#line 1180 "type_util.m"
        MR_Word check_hlds__type_util__Type_15;
#line 1180 "type_util.m"
        MR_Integer check_hlds__type_util__V_27_27;

#line 1180 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__MaybeType_7)) == (MR_mktag((MR_Integer) 1)));
#line 1180 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1180 "type_util.m"
          {
#line 1180 "type_util.m"
            check_hlds__type_util__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__MaybeType_7, (MR_Integer) 0)));
#line 1184 "type_util.m"
            {
#line 1184 "type_util.m"
              check_hlds__type_util__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__Type_15, check_hlds__type_util__ConsId_8, &check_hlds__type_util__Types_16);
            }
#line 1180 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1180 "type_util.m"
              {
#line 5475 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1186 "type_util.m"
                {
#line 1186 "type_util.m"
                  mercury__list__length_2_p_0(check_hlds__type_util__TypeCtorInfo_23_23, check_hlds__type_util__Types_16, &check_hlds__type_util__V_27_27);
                }
#line 1186 "type_util.m"
                check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_9 == check_hlds__type_util__V_27_27);
#line 1180 "type_util.m"
              }
#line 1180 "type_util.m"
          }
#line 1189 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1188 "type_util.m"
          {
#line 1188 "type_util.m"
            {
#line 1188 "type_util.m"
              *check_hlds__type_util__MaybeTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[1], (MR_Word) &check_hlds__type_util_scalar_common_2[5], check_hlds__type_util__Types_16);
            }
#line 1188 "type_util.m"
          }
#line 1189 "type_util.m"
        else
#line 1190 "type_util.m"
          {
#line 1190 "type_util.m"
            {
#line 1190 "type_util.m"
              mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[1], check_hlds__type_util__Arity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__type_util__MaybeTypes_10);
#line 1190 "type_util.m"
              return;
            }
#line 1190 "type_util.m"
          }
#line 1189 "type_util.m"
      }
#line 1192 "type_util.m"
    else
#line 1193 "type_util.m"
      *check_hlds__type_util__MaybeTypes_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1192 "type_util.m"
  }
#line 296 "type_util.m"
}

#line 287 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_not_stored_in_region_2_p_0(
#line 287 "type_util.m"
  MR_Word check_hlds__type_util__Type_3,
#line 287 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4)
#line 287 "type_util.m"
{
#line 1163 "type_util.m"
  {
#line 1163 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 400 "type_util.m"
    {
#line 400 "type_util.m"
      MR_Word check_hlds__type_util__TypeCtor_12;

#line 401 "type_util.m"
      {
#line 401 "type_util.m"
        check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_3, &check_hlds__type_util__TypeCtor_12);
      }
#line 400 "type_util.m"
      if (check_hlds__type_util__succeeded)
#line 402 "type_util.m"
        {
#line 402 "type_util.m"
          check_hlds__type_util__succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_12);
        }
#line 400 "type_util.m"
    }
#line 1163 "type_util.m"
    if (!(check_hlds__type_util__succeeded))
#line 1163 "type_util.m"
      {
#line 1164 "type_util.m"
        {
#line 1164 "type_util.m"
          MR_Word check_hlds__type_util__V_5_5;

#line 663 "type_util.m"
          {
#line 663 "type_util.m"
            check_hlds__type_util__V_5_5 = check_hlds__type_util__check_dummy_type_2_3_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1164 "type_util.m"
          check_hlds__type_util__succeeded = (check_hlds__type_util__V_5_5 == (MR_Integer) 0);
#line 1164 "type_util.m"
        }
#line 1163 "type_util.m"
        if (!(check_hlds__type_util__succeeded))
#line 1163 "type_util.m"
          {
#line 1165 "type_util.m"
            {
#line 1165 "type_util.m"
              MR_Word check_hlds__type_util__V_6_6;

#line 1165 "type_util.m"
              {
#line 1165 "type_util.m"
                check_hlds__type_util__V_6_6 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
              }
#line 1165 "type_util.m"
              {
#line 1165 "type_util.m"
                check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_3, check_hlds__type_util__V_6_6);
              }
#line 1165 "type_util.m"
            }
#line 1163 "type_util.m"
            if (!(check_hlds__type_util__succeeded))
#line 1163 "type_util.m"
              {
#line 1166 "type_util.m"
                {
#line 1166 "type_util.m"
                  MR_Word check_hlds__type_util__V_7_7;

#line 1166 "type_util.m"
                  {
#line 1166 "type_util.m"
                    check_hlds__type_util__V_7_7 = parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0();
                  }
#line 1166 "type_util.m"
                  {
#line 1166 "type_util.m"
                    check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_3, check_hlds__type_util__V_7_7);
                  }
#line 1166 "type_util.m"
                }
#line 1163 "type_util.m"
                if (!(check_hlds__type_util__succeeded))
#line 1167 "type_util.m"
                  {
#line 1167 "type_util.m"
                    return check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_var_1_p_0(check_hlds__type_util__Type_3);
                  }
#line 1163 "type_util.m"
              }
#line 1163 "type_util.m"
          }
#line 1163 "type_util.m"
      }
#line 1163 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1163 "type_util.m"
  }
#line 287 "type_util.m"
}

#line 282 "type_util.m"
MR_Integer MR_CALL 
check_hlds__type_util__cons_id_adjusted_arity_3_f_0(
#line 282 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 282 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 282 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7)
#line 282 "type_util.m"
{
#line 1143 "type_util.m"
  {
#line 1143 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1143 "type_util.m"
    MR_Integer check_hlds__type_util__AdjustedArity_8;
#line 1143 "type_util.m"
    MR_Integer check_hlds__type_util__ConsArity_9;
#line 1156 "type_util.m"
    MR_Word check_hlds__type_util__ConsDefn_10;

#line 1146 "type_util.m"
    {
#line 1146 "type_util.m"
      check_hlds__type_util__ConsArity_9 = parse_tree__prog_util__cons_id_arity_1_f_0(check_hlds__type_util__ConsId_7);
    }
#line 1147 "type_util.m"
    {
#line 1147 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_10);
    }
#line 1156 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1149 "type_util.m"
      {
#line 1149 "type_util.m"
        MR_Word check_hlds__type_util__TypeInfo_23_23;
#line 1149 "type_util.m"
        MR_Word check_hlds__type_util__ExistQTVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 1)));
#line 1149 "type_util.m"
        MR_Word check_hlds__type_util__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 3)));
#line 1149 "type_util.m"
        MR_Integer check_hlds__type_util__NumTypeClassInfos_17;
#line 1149 "type_util.m"
        MR_Word check_hlds__type_util__ConstrainedTVars_18;
#line 1149 "type_util.m"
        MR_Word check_hlds__type_util__UnconstrainedExistQTVars_19;
#line 1149 "type_util.m"
        MR_Integer check_hlds__type_util__NumTypeInfos_20;
#line 1149 "type_util.m"
        MR_Integer check_hlds__type_util__V_21_21;
#line 1148 "type_util.m"
        MR_Word check_hlds__type_util___TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 0)));
#line 1148 "type_util.m"
        MR_Word check_hlds__type_util___KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 2)));
#line 1148 "type_util.m"
        MR_Word check_hlds__type_util___ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 4)));
#line 1148 "type_util.m"
        MR_Word check_hlds__type_util___ResultType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 5)));

#line 1150 "type_util.m"
        {
#line 1150 "type_util.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__type_util__Constraints_14, &check_hlds__type_util__NumTypeClassInfos_17);
        }
#line 1151 "type_util.m"
        {
#line 1151 "type_util.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__type_util__Constraints_14, &check_hlds__type_util__ConstrainedTVars_18);
        }
#line 5707 "check_hlds.type_util.c"
        check_hlds__type_util__TypeInfo_23_23 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
#line 1152 "type_util.m"
        {
#line 1152 "type_util.m"
          mercury__list__delete_elems_3_p_0(check_hlds__type_util__TypeInfo_23_23, check_hlds__type_util__ExistQTVars_12, check_hlds__type_util__ConstrainedTVars_18, &check_hlds__type_util__UnconstrainedExistQTVars_19);
        }
#line 1154 "type_util.m"
        {
#line 1154 "type_util.m"
          mercury__list__length_2_p_0(check_hlds__type_util__TypeInfo_23_23, check_hlds__type_util__UnconstrainedExistQTVars_19, &check_hlds__type_util__NumTypeInfos_20);
        }
#line 1155 "type_util.m"
        check_hlds__type_util__V_21_21 = (check_hlds__type_util__ConsArity_9 + check_hlds__type_util__NumTypeClassInfos_17);
#line 1155 "type_util.m"
        check_hlds__type_util__AdjustedArity_8 = (check_hlds__type_util__V_21_21 + check_hlds__type_util__NumTypeInfos_20);
#line 1149 "type_util.m"
      }
#line 1156 "type_util.m"
    else
#line 1157 "type_util.m"
      check_hlds__type_util__AdjustedArity_8 = check_hlds__type_util__ConsArity_9;
#line 1143 "type_util.m"
    return check_hlds__type_util__AdjustedArity_8;
#line 1143 "type_util.m"
  }
#line 282 "type_util.m"
}

#line 274 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_float_eqv_2_p_0(
#line 274 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 274 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 274 "type_util.m"
{
#line 1134 "type_util.m"
  while (MR_TRUE)
#line 1134 "type_util.m"
    {
#line 1134 "type_util.m"
      /* tailcall optimized into a loop */
#line 1134 "type_util.m"
      {
#line 1134 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 1134 "type_util.m"
        {
#line 1134 "type_util.m"
          MR_Word check_hlds__type_util__V_7_7;

#line 1134 "type_util.m"
          {
#line 1134 "type_util.m"
            check_hlds__type_util__V_7_7 = parse_tree__builtin_lib_types__float_type_0_f_0();
          }
#line 1134 "type_util.m"
          {
#line 1134 "type_util.m"
            check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_4, check_hlds__type_util__V_7_7);
          }
#line 1134 "type_util.m"
        }
#line 1134 "type_util.m"
        if (!(check_hlds__type_util__succeeded))
#line 1136 "type_util.m"
          {
#line 1136 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_5;
#line 1136 "type_util.m"
            MR_Word check_hlds__type_util__EqvType_6;
#line 1136 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_12;
#line 1136 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_16;
#line 1136 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_17;

#line 431 "type_util.m"
            {
#line 431 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_16);
            }
#line 432 "type_util.m"
            {
#line 432 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_17);
            }
#line 1136 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1136 "type_util.m"
              {
#line 433 "type_util.m"
                {
#line 433 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_16, check_hlds__type_util__TypeCtor_17, &check_hlds__type_util__TypeDefn_12);
                }
#line 1136 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1136 "type_util.m"
                  {
#line 441 "type_util.m"
                    {
#line 441 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_12, &check_hlds__type_util__TypeBody_5);
                    }
#line 1137 "type_util.m"
                    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 2)));
#line 1137 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 1137 "type_util.m"
                      {
#line 1137 "type_util.m"
                        check_hlds__type_util__EqvType_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 1138 "type_util.m"
                        /* direct tailcall eliminated */
#line 1138 "type_util.m"
                        {
#line 1138 "type_util.m"
                          MR_Word check_hlds__type_util__Type__tmp_copy_4 = check_hlds__type_util__EqvType_6;

#line 1138 "type_util.m"
                          check_hlds__type_util__Type_4 = check_hlds__type_util__Type__tmp_copy_4;
#line 1138 "type_util.m"
                        }
#line 1138 "type_util.m"
                        continue;
#line 1137 "type_util.m"
                      }
#line 1136 "type_util.m"
                  }
#line 1136 "type_util.m"
              }
#line 1136 "type_util.m"
          }
#line 1134 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 1134 "type_util.m"
      }
#line 1134 "type_util.m"
      break;
#line 1134 "type_util.m"
    }
#line 274 "type_util.m"
}

#line 269 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_no_tag_type_4_p_0(
#line 269 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 269 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 269 "type_util.m"
  MR_Word * check_hlds__type_util__Ctor_7,
#line 269 "type_util.m"
  MR_Word * check_hlds__type_util__ArgType_8)
#line 269 "type_util.m"
{
#line 1116 "type_util.m"
  {
#line 1116 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1116 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_18_18;
#line 1116 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_19_19;
#line 1116 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_9;
#line 1116 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_10;
#line 1116 "type_util.m"
    MR_Word check_hlds__type_util__NoTagTypes_11;
#line 1116 "type_util.m"
    MR_Word check_hlds__type_util__NoTagType_12;
#line 1116 "type_util.m"
    MR_Word check_hlds__type_util__TypeParams_13;
#line 1116 "type_util.m"
    MR_Word check_hlds__type_util__ArgType0_14;
#line 1119 "type_util.m"
    MR_Box check_hlds__type_util__conv0_NoTagType_12;

#line 1117 "type_util.m"
    {
#line 1117 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__TypeArgs_10);
    }
#line 1116 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1116 "type_util.m"
      {
#line 1118 "type_util.m"
        {
#line 1118 "type_util.m"
          hlds__hlds_module__module_info_get_no_tag_types_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__NoTagTypes_11);
        }
#line 5906 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 5908 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0;
#line 1119 "type_util.m"
        {
#line 1119 "type_util.m"
          check_hlds__type_util__succeeded = mercury__map__search_3_p_0(check_hlds__type_util__TypeCtorInfo_18_18, check_hlds__type_util__TypeCtorInfo_19_19, check_hlds__type_util__NoTagTypes_11, ((MR_Box) (check_hlds__type_util__TypeCtor_9)), &check_hlds__type_util__conv0_NoTagType_12);
        }
#line 1119 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1119 "type_util.m"
          {
#line 1119 "type_util.m"
            check_hlds__type_util__NoTagType_12 = ((MR_Word) check_hlds__type_util__conv0_NoTagType_12);
#line 1119 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 1119 "type_util.m"
          }
#line 1116 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1116 "type_util.m"
          {
#line 1120 "type_util.m"
            check_hlds__type_util__TypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 0)));
#line 1120 "type_util.m"
            *check_hlds__type_util__Ctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 1)));
#line 1120 "type_util.m"
            check_hlds__type_util__ArgType0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 2)));
#line 1124 "type_util.m"
            if ((check_hlds__type_util__TypeParams_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1123 "type_util.m"
              *check_hlds__type_util__ArgType_8 = check_hlds__type_util__ArgType0_14;
#line 1124 "type_util.m"
            else
#line 1125 "type_util.m"
              {
#line 1125 "type_util.m"
                MR_Word check_hlds__type_util__Subn_17;

#line 1126 "type_util.m"
                {
#line 1126 "type_util.m"
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_13, check_hlds__type_util__TypeArgs_10, &check_hlds__type_util__Subn_17);
                }
#line 1127 "type_util.m"
                {
#line 1127 "type_util.m"
                  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subn_17, check_hlds__type_util__ArgType0_14, check_hlds__type_util__ArgType_8);
                }
#line 1125 "type_util.m"
              }
#line 1124 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 1116 "type_util.m"
          }
#line 1116 "type_util.m"
      }
#line 1116 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1116 "type_util.m"
  }
#line 269 "type_util.m"
}

#line 264 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_no_tag_type_2_p_0(
#line 264 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 264 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 264 "type_util.m"
{
#line 1114 "type_util.m"
  {
#line 1114 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1114 "type_util.m"
    MR_Word check_hlds__type_util___Ctor_5;
#line 1114 "type_util.m"
    MR_Word check_hlds__type_util___ArgType_6;

#line 1114 "type_util.m"
    {
#line 1114 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, &check_hlds__type_util___Ctor_5, &check_hlds__type_util___ArgType_6);
    }
#line 1114 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1114 "type_util.m"
  }
#line 264 "type_util.m"
}

#line 258 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__cons_id_is_existq_cons_3_p_0(
#line 258 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 258 "type_util.m"
  MR_Word check_hlds__type_util__VarType_5,
#line 258 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_6)
#line 258 "type_util.m"
{
#line 1081 "type_util.m"
  {
#line 1081 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1081 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;
#line 1081 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_12;
#line 1081 "type_util.m"
    MR_Word check_hlds__type_util__V_15_15;
#line 1081 "type_util.m"
    MR_Word check_hlds__type_util__Ctors_27;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_16_16;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_17_17;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_18_18;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_19_19;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_20_20;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_21_21;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_22_22;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_14_14;

#line 1082 "type_util.m"
    {
#line 1082 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_5, &check_hlds__type_util__TypeCtor_12);
    }
#line 1081 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1081 "type_util.m"
      {
#line 1088 "type_util.m"
        {
#line 1088 "type_util.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Ctors_27);
        }
#line 1091 "type_util.m"
        {
#line 1091 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_27, check_hlds__type_util__TypeCtor_12, check_hlds__type_util__ConsId_6, &check_hlds__type_util__V_7_7);
        }
#line 1081 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1081 "type_util.m"
          {
#line 1084 "type_util.m"
            check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 0)));
#line 1084 "type_util.m"
            check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 1)));
#line 1084 "type_util.m"
            check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 2)));
#line 1084 "type_util.m"
            check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 3)));
#line 1084 "type_util.m"
            check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 4)));
#line 1084 "type_util.m"
            check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 5)));
#line 1084 "type_util.m"
            check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 6)));
#line 1084 "type_util.m"
            check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 7)));
#line 1084 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1084 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1084 "type_util.m"
              {
#line 1084 "type_util.m"
                check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_15_15, (MR_Integer) 0)));
#line 1084 "type_util.m"
                check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_15_15, (MR_Integer) 1)));
#line 1084 "type_util.m"
              }
#line 1081 "type_util.m"
          }
#line 1081 "type_util.m"
      }
#line 1081 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1081 "type_util.m"
  }
#line 258 "type_util.m"
}

#line 1104 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
#line 1104 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1104 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1104 "type_util.m"
{
#line 1104 "type_util.m"
  {
#line 1104 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1104 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_25;

#line 1104 "type_util.m"
    {
#line 1104 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_25 = check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1104__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1104 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_25));
#line 1104 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1104 "type_util.m"
  }
#line 1104 "type_util.m"
}

#line 255 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0(
#line 255 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 255 "type_util.m"
  MR_Word check_hlds__type_util__VarType_6,
#line 255 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 255 "type_util.m"
  MR_Word * check_hlds__type_util__CtorDefn_8)
#line 255 "type_util.m"
{
#line 1100 "type_util.m"
  {
#line 1100 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_30_30;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__ConsDefn_9;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__TypeVarSet_11;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__TypeParams_12;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__KindMap_13;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__ExistQVars_14;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__Constraints_15;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__Args_16;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_18;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorArgs_20;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_21;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__RetType_22;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__V_23_23;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_36;
#line 1100 "type_util.m"
    MR_Word check_hlds__type_util__Ctors_51;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util___TypeCtor_10;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util___Context_17;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_37_37;
#line 1084 "type_util.m"
    MR_Word check_hlds__type_util__V_38_38;

#line 1082 "type_util.m"
    {
#line 1082 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_6, &check_hlds__type_util__TypeCtor_36);
    }
#line 1100 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1100 "type_util.m"
      {
#line 1088 "type_util.m"
        {
#line 1088 "type_util.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_51);
        }
#line 1091 "type_util.m"
        {
#line 1091 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_51, check_hlds__type_util__TypeCtor_36, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_9);
        }
#line 1100 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1100 "type_util.m"
          {
#line 1084 "type_util.m"
            check_hlds__type_util___TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 0)));
#line 1084 "type_util.m"
            check_hlds__type_util__TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 1)));
#line 1084 "type_util.m"
            check_hlds__type_util__TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 2)));
#line 1084 "type_util.m"
            check_hlds__type_util__KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 3)));
#line 1084 "type_util.m"
            check_hlds__type_util__ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 4)));
#line 1084 "type_util.m"
            check_hlds__type_util__Constraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 5)));
#line 1084 "type_util.m"
            check_hlds__type_util__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 6)));
#line 1084 "type_util.m"
            check_hlds__type_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 7)));
#line 1084 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__ExistQVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 1084 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1084 "type_util.m"
              {
#line 1084 "type_util.m"
                check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__ExistQVars_14, (MR_Integer) 0)));
#line 1084 "type_util.m"
                check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__ExistQVars_14, (MR_Integer) 1)));
#line 6244 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 6246 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1104 "type_util.m"
                check_hlds__type_util__V_23_23 = (MR_Word) &check_hlds__type_util_scalar_common_2[4];
#line 1104 "type_util.m"
                {
#line 1104 "type_util.m"
                  check_hlds__type_util__ArgTypes_18 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_30_30, check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__V_23_23, check_hlds__type_util__Args_16);
                }
#line 1105 "type_util.m"
                {
#line 1105 "type_util.m"
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__type_util__KindMap_13, check_hlds__type_util__TypeParams_12, &check_hlds__type_util__TypeCtorArgs_20);
                }
#line 1106 "type_util.m"
                {
#line 1106 "type_util.m"
                  check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_6, &check_hlds__type_util__TypeCtor_21);
                }
#line 1100 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1100 "type_util.m"
                  {
#line 1107 "type_util.m"
                    {
#line 1107 "type_util.m"
                      parse_tree__prog_type__construct_type_3_p_0(check_hlds__type_util__TypeCtor_21, check_hlds__type_util__TypeCtorArgs_20, &check_hlds__type_util__RetType_22);
                    }
#line 1108 "type_util.m"
                    {
#line 1108 "type_util.m"
                      MR_Word base;
#line 1108 "type_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1108 "type_util.m"
                      *check_hlds__type_util__CtorDefn_8 = base;
#line 1108 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__TypeVarSet_11));
#line 1108 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ExistQVars_14));
#line 1108 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__KindMap_13));
#line 1108 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Constraints_15));
#line 1108 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_util__ArgTypes_18));
#line 1108 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_util__RetType_22));
#line 1108 "type_util.m"
                    }
#line 1108 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 1100 "type_util.m"
                  }
#line 1084 "type_util.m"
              }
#line 1100 "type_util.m"
          }
#line 1100 "type_util.m"
      }
#line 1100 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1100 "type_util.m"
  }
#line 255 "type_util.m"
}

#line 245 "type_util.m"
void MR_CALL 
check_hlds__type_util__get_cons_defn_det_4_p_0(
#line 245 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 245 "type_util.m"
  MR_Word check_hlds__type_util__TypeCtor_6,
#line 245 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 245 "type_util.m"
  MR_Word * check_hlds__type_util__ConsDefn_8)
#line 245 "type_util.m"
{
#line 1096 "type_util.m"
  {
#line 1096 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1096 "type_util.m"
    MR_Word check_hlds__type_util__ConsDefnPrime_9;
#line 1086 "type_util.m"
    MR_Word check_hlds__type_util__Ctors_17;

#line 1088 "type_util.m"
    {
#line 1088 "type_util.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_17);
    }
#line 1091 "type_util.m"
    {
#line 1091 "type_util.m"
      check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_17, check_hlds__type_util__TypeCtor_6, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefnPrime_9);
    }
#line 1096 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1095 "type_util.m"
      *check_hlds__type_util__ConsDefn_8 = check_hlds__type_util__ConsDefnPrime_9;
#line 1096 "type_util.m"
    else
#line 1097 "type_util.m"
      {
#line 1097 "type_util.m"
        {
#line 1097 "type_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_util", (MR_String) "predicate \140check_hlds.type_util.get_cons_defn_det\'/4", (MR_String) "get_cons_defn failed");
#line 1097 "type_util.m"
          return;
        }
#line 1097 "type_util.m"
      }
#line 1096 "type_util.m"
  }
#line 245 "type_util.m"
}

#line 243 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__get_cons_defn_4_p_0(
#line 243 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 243 "type_util.m"
  MR_Word check_hlds__type_util__TypeCtor_6,
#line 243 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 243 "type_util.m"
  MR_Word * check_hlds__type_util__ConsDefn_8)
#line 243 "type_util.m"
{
#line 1086 "type_util.m"
  {
#line 1086 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1086 "type_util.m"
    MR_Word check_hlds__type_util__Ctors_9;

#line 1088 "type_util.m"
    {
#line 1088 "type_util.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_9);
    }
#line 1091 "type_util.m"
    {
#line 1091 "type_util.m"
      return check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_9, check_hlds__type_util__TypeCtor_6, check_hlds__type_util__ConsId_7, check_hlds__type_util__ConsDefn_8);
    }
#line 1086 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1086 "type_util.m"
  }
#line 243 "type_util.m"
}

#line 1072 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_3(
#line 1072 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1072 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1072 "type_util.m"
{
#line 1072 "type_util.m"
  {
#line 1072 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1072 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1072 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__2_31;

#line 1072 "type_util.m"
    {
#line 1072 "type_util.m"
      check_hlds__type_util__conv2_HeadVar__2_31 = check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1072__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1072 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__2_31));
#line 1072 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1072 "type_util.m"
  }
#line 1072 "type_util.m"
}

#line 1061 "type_util.m"
static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
#line 1061 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 1061 "type_util.m"
{
#line 1061 "type_util.m"
  {
#line 1061 "type_util.m"
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 1061 "type_util.m"
    *((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7) = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7);
#line 1061 "type_util.m"
    (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_14_14 = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14);
#line 1061 "type_util.m"
    {
#line 1061 "type_util.m"
      check_hlds__type_util__cons_id_arg_types_4_p_0_1(check_hlds__type_util__env_ptr);
#line 1061 "type_util.m"
      return;
    }
#line 1061 "type_util.m"
  }
#line 1061 "type_util.m"
}

#line 1056 "type_util.m"
static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_1(
#line 1056 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 1056 "type_util.m"
{
#line 1056 "type_util.m"
  {
#line 1056 "type_util.m"
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 1056 "type_util.m"
    {
#line 1066 "type_util.m"
      MR_Word check_hlds__type_util__V_17_17;
#line 1066 "type_util.m"
      MR_Word check_hlds__type_util__V_18_18;
#line 1066 "type_util.m"
      MR_Word check_hlds__type_util__V_20_20;
#line 1066 "type_util.m"
      MR_Word check_hlds__type_util__V_22_22;
#line 1066 "type_util.m"
      MR_Word check_hlds__type_util__V_24_24;

#line 1064 "type_util.m"
      {
#line 1064 "type_util.m"
        hlds__hlds_module__module_info_get_cons_table_2_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15);
      }
#line 1065 "type_util.m"
      {
#line 1065 "type_util.m"
        (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, *((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7), &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16);
      }
#line 1056 "type_util.m"
      if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1056 "type_util.m"
        {
#line 1066 "type_util.m"
          check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 0)));
#line 1066 "type_util.m"
          check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 1)));
#line 1066 "type_util.m"
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 2)));
#line 1066 "type_util.m"
          check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 3)));
#line 1066 "type_util.m"
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 4)));
#line 1066 "type_util.m"
          check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 5)));
#line 1066 "type_util.m"
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 6)));
#line 1066 "type_util.m"
          check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 7)));
#line 1069 "type_util.m"
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1056 "type_util.m"
          if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1056 "type_util.m"
            {
#line 6525 "check_hlds.type_util.c"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
#line 6527 "check_hlds.type_util.c"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1071 "type_util.m"
              {
#line 1071 "type_util.m"
                mercury__map__from_corresponding_lists_3_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25);
              }
#line 6534 "check_hlds.type_util.c"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1072 "type_util.m"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29 = (MR_Word) &check_hlds__type_util_scalar_common_2[3];
#line 1072 "type_util.m"
              {
#line 1072 "type_util.m"
                (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26 = mercury__list__map_2_f_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23);
              }
#line 1073 "type_util.m"
              {
#line 1073 "type_util.m"
                parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8);
              }
#line 1073 "type_util.m"
              {
#line 1073 "type_util.m"
                ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont)((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr);
#line 1073 "type_util.m"
                return;
              }
#line 1056 "type_util.m"
            }
#line 1056 "type_util.m"
        }
#line 1056 "type_util.m"
    }
#line 1056 "type_util.m"
  }
#line 1056 "type_util.m"
}

#line 233 "type_util.m"
void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0(
#line 233 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 233 "type_util.m"
  MR_Word check_hlds__type_util__VarType_6,
#line 233 "type_util.m"
  MR_Word * check_hlds__type_util__ConsId_7,
#line 233 "type_util.m"
  MR_Word * check_hlds__type_util__ArgTypes_8,
#line 233 "type_util.m"
  MR_Cont check_hlds__type_util__cont,
#line 233 "type_util.m"
  void * check_hlds__type_util__cont_env_ptr)
#line 233 "type_util.m"
{
#line 233 "type_util.m"
  {
#line 233 "type_util.m"
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s check_hlds__type_util__env;

#line 233 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5 = check_hlds__type_util__ModuleInfo_5;
#line 233 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7 = check_hlds__type_util__ConsId_7;
#line 233 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8 = check_hlds__type_util__ArgTypes_8;
#line 233 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont = check_hlds__type_util__cont;
#line 233 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr = check_hlds__type_util__cont_env_ptr;
#line 1056 "type_util.m"
    {
#line 1056 "type_util.m"
      MR_Word check_hlds__type_util__TypeCtorInfo_44_44;
#line 1056 "type_util.m"
      MR_Word check_hlds__type_util__TypeCtorInfo_45_45;
#line 1056 "type_util.m"
      MR_Word check_hlds__type_util__TypeTable_11;
#line 1056 "type_util.m"
      MR_Word check_hlds__type_util__TypeDefn_12;
#line 1056 "type_util.m"
      MR_Word check_hlds__type_util__TypeDefnBody_13;
#line 1056 "type_util.m"
      MR_Word check_hlds__type_util__V_28_28;
#line 1061 "type_util.m"
      MR_Word check_hlds__type_util__V_33_33;
#line 1061 "type_util.m"
      MR_Word check_hlds__type_util__V_34_34;
#line 1061 "type_util.m"
      MR_Word check_hlds__type_util__V_35_35;
#line 1061 "type_util.m"
      MR_Word check_hlds__type_util__V_36_36;
#line 1061 "type_util.m"
      MR_Word check_hlds__type_util__V_37_37;
#line 1061 "type_util.m"
      MR_Word check_hlds__type_util__V_38_38;
#line 1061 "type_util.m"
      MR_Word check_hlds__type_util__V_39_39;
#line 1061 "type_util.m"
      MR_Word check_hlds__type_util__V_40_40;

#line 1057 "type_util.m"
      {
#line 1057 "type_util.m"
        (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__VarType_6, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10);
      }
#line 1056 "type_util.m"
      if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1056 "type_util.m"
        {
#line 1058 "type_util.m"
          {
#line 1058 "type_util.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &check_hlds__type_util__TypeTable_11);
          }
#line 1059 "type_util.m"
          {
#line 1059 "type_util.m"
            (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_11, (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, &check_hlds__type_util__TypeDefn_12);
          }
#line 1056 "type_util.m"
          if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1056 "type_util.m"
            {
#line 1060 "type_util.m"
              {
#line 1060 "type_util.m"
                hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_12, &check_hlds__type_util__TypeDefnBody_13);
              }
#line 1061 "type_util.m"
              (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeDefnBody_13)) == (MR_mktag((MR_Integer) 1)));
#line 1061 "type_util.m"
              if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1061 "type_util.m"
                {
#line 1061 "type_util.m"
                  check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 0)));
#line 1061 "type_util.m"
                  check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 1)));
#line 1061 "type_util.m"
                  check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 2)));
#line 1061 "type_util.m"
                  check_hlds__type_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 3)));
#line 1061 "type_util.m"
                  check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 4)));
#line 1061 "type_util.m"
                  check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 5)));
#line 1061 "type_util.m"
                  check_hlds__type_util__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1061 "type_util.m"
                  check_hlds__type_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1061 "type_util.m"
                  check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 7)));
#line 6681 "check_hlds.type_util.c"
                  check_hlds__type_util__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 6683 "check_hlds.type_util.c"
                  check_hlds__type_util__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1061 "type_util.m"
                  {
#line 1061 "type_util.m"
                    mercury__map__member_3_p_0(check_hlds__type_util__TypeCtorInfo_44_44, check_hlds__type_util__TypeCtorInfo_45_45, check_hlds__type_util__V_28_28, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14, check_hlds__type_util__cons_id_arg_types_4_p_0_2, &check_hlds__type_util__env);
                  }
#line 1061 "type_util.m"
                }
#line 1056 "type_util.m"
            }
#line 1056 "type_util.m"
        }
#line 1056 "type_util.m"
    }
#line 233 "type_util.m"
  }
#line 233 "type_util.m"
}

#line 1047 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1(
#line 1047 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1047 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1047 "type_util.m"
{
#line 1047 "type_util.m"
  {
#line 1047 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1047 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_34;

#line 1047 "type_util.m"
    {
#line 1047 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_34 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1047__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1047 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_34));
#line 1047 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1047 "type_util.m"
  }
#line 1047 "type_util.m"
}

#line 227 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(
#line 227 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 227 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 227 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 227 "type_util.m"
  MR_Word * check_hlds__type_util__ArgTypes_8)
#line 227 "type_util.m"
{
#line 1052 "type_util.m"
  {
#line 1052 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1052 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_15;
#line 1052 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_16;

#line 1019 "type_util.m"
    {
#line 1019 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_15, &check_hlds__type_util__TypeArgs_16);
    }
#line 1052 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1026 "type_util.m"
      {
#line 1023 "type_util.m"
        {
#line 1023 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_15);
        }
#line 1026 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1025 "type_util.m"
          {
#line 1025 "type_util.m"
            *check_hlds__type_util__ArgTypes_8 = check_hlds__type_util__TypeArgs_16;
#line 1025 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 1025 "type_util.m"
          }
#line 1026 "type_util.m"
        else
#line 1049 "type_util.m"
          {
#line 1049 "type_util.m"
            MR_Word check_hlds__type_util__TypeParams_20;
#line 1049 "type_util.m"
            MR_Word check_hlds__type_util__ExistQVars0_22;
#line 1049 "type_util.m"
            MR_Word check_hlds__type_util__Args_24;
#line 1027 "type_util.m"
            MR_Word check_hlds__type_util__ConsDefn_17;
#line 1027 "type_util.m"
            MR_Word check_hlds__type_util__Ctors_50;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_18_18;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_19_19;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_21_21;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_23_23;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_25_25;
#line 1030 "type_util.m"
            MR_Word check_hlds__type_util__V_26_26;
#line 1030 "type_util.m"
            MR_Word check_hlds__type_util__V_27_27;

#line 1088 "type_util.m"
            {
#line 1088 "type_util.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_50);
            }
#line 1091 "type_util.m"
            {
#line 1091 "type_util.m"
              check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_50, check_hlds__type_util__TypeCtor_15, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_17);
            }
#line 1027 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1027 "type_util.m"
              {
#line 1028 "type_util.m"
                check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 0)));
#line 1028 "type_util.m"
                check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 1)));
#line 1028 "type_util.m"
                check_hlds__type_util__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 2)));
#line 1028 "type_util.m"
                check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 3)));
#line 1028 "type_util.m"
                check_hlds__type_util__ExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 4)));
#line 1028 "type_util.m"
                check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 5)));
#line 1028 "type_util.m"
                check_hlds__type_util__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 6)));
#line 1028 "type_util.m"
                check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 7)));
#line 1030 "type_util.m"
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__Args_24)) == (MR_mktag((MR_Integer) 1)));
#line 1030 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1030 "type_util.m"
                  {
#line 1030 "type_util.m"
                    check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 0)));
#line 1030 "type_util.m"
                    check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 1)));
#line 1030 "type_util.m"
                  }
#line 1027 "type_util.m"
              }
#line 1049 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1044 "type_util.m"
              {
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__TypeInfo_39_43;
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_40_44;
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_41_45;
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__TSubst_30;
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__ArgTypes0_31;
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__V_36_36;

#line 6871 "check_hlds.type_util.c"
                check_hlds__type_util__succeeded = (check_hlds__type_util__ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1044 "type_util.m"
                  {
#line 6877 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeInfo_39_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
#line 6879 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1046 "type_util.m"
                    {
#line 1046 "type_util.m"
                      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeInfo_39_43, check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__TypeParams_20, check_hlds__type_util__TypeArgs_16, &check_hlds__type_util__TSubst_30);
                    }
#line 6886 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeCtorInfo_41_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1047 "type_util.m"
                    check_hlds__type_util__V_36_36 = (MR_Word) &check_hlds__type_util_scalar_common_2[2];
#line 1047 "type_util.m"
                    {
#line 1047 "type_util.m"
                      check_hlds__type_util__ArgTypes0_31 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_41_45, check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__V_36_36, check_hlds__type_util__Args_24);
                    }
#line 1048 "type_util.m"
                    {
#line 1048 "type_util.m"
                      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__TSubst_30, check_hlds__type_util__ArgTypes0_31, check_hlds__type_util__ArgTypes_8);
                    }
#line 1048 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 1044 "type_util.m"
                  }
#line 1044 "type_util.m"
              }
#line 1049 "type_util.m"
            else
#line 1050 "type_util.m"
              {
#line 1050 "type_util.m"
                *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1050 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 1050 "type_util.m"
              }
#line 1049 "type_util.m"
          }
#line 1026 "type_util.m"
      }
#line 1052 "type_util.m"
    else
#line 1053 "type_util.m"
      {
#line 1053 "type_util.m"
        *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1053 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 1053 "type_util.m"
      }
#line 1052 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1052 "type_util.m"
  }
#line 227 "type_util.m"
}

#line 1047 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0_1(
#line 1047 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1047 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1047 "type_util.m"
{
#line 1047 "type_util.m"
  {
#line 1047 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1047 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1047 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_34;

#line 1047 "type_util.m"
    {
#line 1047 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_34 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1047__2_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1047 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_34));
#line 1047 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1047 "type_util.m"
  }
#line 1047 "type_util.m"
}

#line 221 "type_util.m"
void MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0(
#line 221 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 221 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 221 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 221 "type_util.m"
  MR_Word * check_hlds__type_util__ArgTypes_8)
#line 221 "type_util.m"
{
#line 1052 "type_util.m"
  {
#line 1052 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1052 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_15;
#line 1052 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_16;

#line 1019 "type_util.m"
    {
#line 1019 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_15, &check_hlds__type_util__TypeArgs_16);
    }
#line 1052 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1026 "type_util.m"
      {
#line 1023 "type_util.m"
        {
#line 1023 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_15);
        }
#line 1026 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1025 "type_util.m"
          *check_hlds__type_util__ArgTypes_8 = check_hlds__type_util__TypeArgs_16;
#line 1026 "type_util.m"
        else
#line 1049 "type_util.m"
          {
#line 1049 "type_util.m"
            MR_Word check_hlds__type_util__TypeParams_20;
#line 1049 "type_util.m"
            MR_Word check_hlds__type_util__ExistQVars0_22;
#line 1049 "type_util.m"
            MR_Word check_hlds__type_util__Args_24;
#line 1027 "type_util.m"
            MR_Word check_hlds__type_util__ConsDefn_17;
#line 1027 "type_util.m"
            MR_Word check_hlds__type_util__Ctors_50;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_18_18;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_19_19;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_21_21;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_23_23;
#line 1028 "type_util.m"
            MR_Word check_hlds__type_util__V_25_25;
#line 1030 "type_util.m"
            MR_Word check_hlds__type_util__V_26_26;
#line 1030 "type_util.m"
            MR_Word check_hlds__type_util__V_27_27;

#line 1088 "type_util.m"
            {
#line 1088 "type_util.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_50);
            }
#line 1091 "type_util.m"
            {
#line 1091 "type_util.m"
              check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_50, check_hlds__type_util__TypeCtor_15, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_17);
            }
#line 1027 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1027 "type_util.m"
              {
#line 1028 "type_util.m"
                check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 0)));
#line 1028 "type_util.m"
                check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 1)));
#line 1028 "type_util.m"
                check_hlds__type_util__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 2)));
#line 1028 "type_util.m"
                check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 3)));
#line 1028 "type_util.m"
                check_hlds__type_util__ExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 4)));
#line 1028 "type_util.m"
                check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 5)));
#line 1028 "type_util.m"
                check_hlds__type_util__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 6)));
#line 1028 "type_util.m"
                check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 7)));
#line 1030 "type_util.m"
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__Args_24)) == (MR_mktag((MR_Integer) 1)));
#line 1030 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1030 "type_util.m"
                  {
#line 1030 "type_util.m"
                    check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 0)));
#line 1030 "type_util.m"
                    check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 1)));
#line 1030 "type_util.m"
                  }
#line 1027 "type_util.m"
              }
#line 1049 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1044 "type_util.m"
              {
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_40_44;
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__TSubst_30;
#line 1044 "type_util.m"
                MR_Word check_hlds__type_util__ArgTypes0_31;

#line 1035 "type_util.m"
                if ((check_hlds__type_util__ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1034 "type_util.m"
                  {
#line 1034 "type_util.m"
                  }
#line 1035 "type_util.m"
                else
#line 1036 "type_util.m"
                  {
#line 1039 "type_util.m"
                    {
#line 1039 "type_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_util", (MR_String) "predicate \140check_hlds.type_util.get_cons_id_arg_types_2\'/5", (MR_String) "existentially typed cons_id");
#line 1039 "type_util.m"
                      return;
                    }
#line 1036 "type_util.m"
                  }
#line 7112 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1046 "type_util.m"
                {
#line 1046 "type_util.m"
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__TypeParams_20, check_hlds__type_util__TypeArgs_16, &check_hlds__type_util__TSubst_30);
                }
#line 1047 "type_util.m"
                {
#line 1047 "type_util.m"
                  check_hlds__type_util__ArgTypes0_31 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__type_util__TypeCtorInfo_40_44, (MR_Word) &check_hlds__type_util_scalar_common_2[1], check_hlds__type_util__Args_24);
                }
#line 1048 "type_util.m"
                {
#line 1048 "type_util.m"
                  parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__TSubst_30, check_hlds__type_util__ArgTypes0_31, check_hlds__type_util__ArgTypes_8);
#line 1048 "type_util.m"
                  return;
                }
#line 1044 "type_util.m"
              }
#line 1049 "type_util.m"
            else
#line 1050 "type_util.m"
              *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1049 "type_util.m"
          }
#line 1026 "type_util.m"
      }
#line 1052 "type_util.m"
    else
#line 1053 "type_util.m"
      *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1052 "type_util.m"
  }
#line 221 "type_util.m"
}

#line 212 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__switch_type_num_functors_3_p_0(
#line 212 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 212 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 212 "type_util.m"
  MR_Integer * check_hlds__type_util__NumFunctors_6)
#line 212 "type_util.m"
{
#line 979 "type_util.m"
  {
#line 979 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 979 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;
#line 981 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;
#line 981 "type_util.m"
    MR_String check_hlds__type_util__V_14_14;
#line 981 "type_util.m"
    MR_Integer check_hlds__type_util__V_15_15;

#line 980 "type_util.m"
    {
#line 980 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 979 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 979 "type_util.m"
      {
#line 981 "type_util.m"
        check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_7, (MR_Integer) 0)));
#line 981 "type_util.m"
        check_hlds__type_util__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_7, (MR_Integer) 1)));
#line 981 "type_util.m"
        check_hlds__type_util__succeeded = (check_hlds__type_util__V_15_15 == (MR_Integer) 0);
#line 981 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 981 "type_util.m"
          {
#line 981 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_13_13)) == (MR_mktag((MR_Integer) 0)));
#line 981 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 981 "type_util.m"
              {
#line 981 "type_util.m"
                check_hlds__type_util__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, (MR_Integer) 0)));
#line 981 "type_util.m"
                check_hlds__type_util__succeeded = (strcmp(check_hlds__type_util__V_14_14, (MR_String) "character") == 0);
#line 981 "type_util.m"
              }
#line 981 "type_util.m"
          }
#line 988 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 985 "type_util.m"
          {
#line 985 "type_util.m"
            MR_Integer check_hlds__type_util__MaxChar_8;
#line 985 "type_util.m"
            MR_Integer check_hlds__type_util__MinChar_9;
#line 985 "type_util.m"
            MR_Integer check_hlds__type_util__V_16_16;

#line 985 "type_util.m"
            {
#line 985 "type_util.m"
              mercury__char__max_char_value_1_p_0(&check_hlds__type_util__MaxChar_8);
            }
#line 986 "type_util.m"
            {
#line 986 "type_util.m"
              mercury__char__min_char_value_1_p_0(&check_hlds__type_util__MinChar_9);
            }
#line 987 "type_util.m"
            check_hlds__type_util__V_16_16 = (check_hlds__type_util__MaxChar_8 - check_hlds__type_util__MinChar_9);
#line 987 "type_util.m"
            *check_hlds__type_util__NumFunctors_6 = (check_hlds__type_util__V_16_16 + (MR_Integer) 1);
#line 985 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 985 "type_util.m"
          }
#line 988 "type_util.m"
        else
#line 990 "type_util.m"
          {
#line 988 "type_util.m"
            {
#line 988 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_7);
            }
#line 990 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 989 "type_util.m"
              {
#line 989 "type_util.m"
                *check_hlds__type_util__NumFunctors_6 = (MR_Integer) 1;
#line 989 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 989 "type_util.m"
              }
#line 990 "type_util.m"
            else
#line 991 "type_util.m"
              {
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_27_27;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_28_28;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeTable_10;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeDefn_11;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeBody_12;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__V_18_18;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_19_19;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_20_20;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_21_21;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_22_22;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_23_23;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_24_24;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_25_25;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_26_26;

#line 991 "type_util.m"
                {
#line 991 "type_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_10);
                }
#line 992 "type_util.m"
                {
#line 992 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_10, check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeDefn_11);
                }
#line 991 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 991 "type_util.m"
                  {
#line 993 "type_util.m"
                    {
#line 993 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_12);
                    }
#line 994 "type_util.m"
                    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_12)) == (MR_mktag((MR_Integer) 1)));
#line 994 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 994 "type_util.m"
                      {
#line 994 "type_util.m"
                        check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 0)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 1)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 2)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 3)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 4)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 5)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 994 "type_util.m"
                        check_hlds__type_util__V_25_25 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 994 "type_util.m"
                        check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_12, (MR_Integer) 7)));
#line 7331 "check_hlds.type_util.c"
                        check_hlds__type_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7333 "check_hlds.type_util.c"
                        check_hlds__type_util__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 994 "type_util.m"
                        {
#line 994 "type_util.m"
                          mercury__map__count_2_p_0(check_hlds__type_util__TypeCtorInfo_27_27, check_hlds__type_util__TypeCtorInfo_28_28, check_hlds__type_util__V_18_18, check_hlds__type_util__NumFunctors_6);
                        }
#line 994 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 994 "type_util.m"
                      }
#line 991 "type_util.m"
                  }
#line 991 "type_util.m"
              }
#line 990 "type_util.m"
          }
#line 979 "type_util.m"
      }
#line 979 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 979 "type_util.m"
  }
#line 212 "type_util.m"
}

#line 923 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
#line 923 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 923 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 923 "type_util.m"
{
#line 923 "type_util.m"
  {
#line 923 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 923 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 923 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_20;

#line 923 "type_util.m"
    {
#line 923 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__3_20 = check_hlds__type_util__IntroducedFrom__func__type_constructors__923__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 923 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_20));
#line 923 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 923 "type_util.m"
  }
#line 923 "type_util.m"
}

#line 201 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_constructors_3_p_0(
#line 201 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 201 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 201 "type_util.m"
  MR_Word * check_hlds__type_util__Constructors_6)
#line 201 "type_util.m"
{
#line 916 "type_util.m"
  {
#line 916 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 916 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;
#line 916 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_8;

#line 917 "type_util.m"
    {
#line 917 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeArgs_8);
    }
#line 916 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 916 "type_util.m"
      {
#line 918 "type_util.m"
        {
#line 918 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_7);
        }
#line 928 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 920 "type_util.m"
          {
#line 920 "type_util.m"
            MR_Word check_hlds__type_util__Context_11;
#line 920 "type_util.m"
            MR_Word check_hlds__type_util__CtorArgs_12;
#line 920 "type_util.m"
            MR_Word check_hlds__type_util__V_18_18;
#line 920 "type_util.m"
            MR_Word check_hlds__type_util__V_23_23;

#line 922 "type_util.m"
            {
#line 922 "type_util.m"
              check_hlds__type_util__Context_11 = mercury__term__context_init_0_f_0();
            }
#line 923 "type_util.m"
            {
#line 923 "type_util.m"
              check_hlds__type_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 923 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_4[0]));
#line 923 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 1) = ((MR_Box) (check_hlds__type_util__type_constructors_3_p_0_1));
#line 923 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 923 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 3) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 923 "type_util.m"
            }
#line 923 "type_util.m"
            {
#line 923 "type_util.m"
              check_hlds__type_util__CtorArgs_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__type_util__V_18_18, check_hlds__type_util__TypeArgs_8);
            }
#line 927 "type_util.m"
            {
#line 927 "type_util.m"
              check_hlds__type_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 927 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 927 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 2) = ((MR_Box) (&check_hlds__type_util_scalar_common_3[7]));
#line 927 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 3) = ((MR_Box) (check_hlds__type_util__CtorArgs_12));
#line 927 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 4) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 927 "type_util.m"
            }
#line 926 "type_util.m"
            {
#line 926 "type_util.m"
              MR_Word base;
#line 926 "type_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 926 "type_util.m"
              *check_hlds__type_util__Constructors_6 = base;
#line 926 "type_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__V_23_23));
#line 926 "type_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "type_util.m"
            }
#line 920 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 920 "type_util.m"
          }
#line 928 "type_util.m"
        else
#line 929 "type_util.m"
          {
#line 929 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_14;
#line 929 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_15;
#line 929 "type_util.m"
            MR_Word check_hlds__type_util__TypeParams_16;
#line 929 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_17;
#line 929 "type_util.m"
            MR_Word check_hlds__type_util__V_27_27;
#line 933 "type_util.m"
            MR_Word check_hlds__type_util__V_29_29;
#line 933 "type_util.m"
            MR_Word check_hlds__type_util__V_30_30;
#line 933 "type_util.m"
            MR_Word check_hlds__type_util__V_31_31;
#line 933 "type_util.m"
            MR_Word check_hlds__type_util__V_32_32;
#line 933 "type_util.m"
            MR_Word check_hlds__type_util__V_33_33;
#line 933 "type_util.m"
            MR_Word check_hlds__type_util__V_34_34;
#line 933 "type_util.m"
            MR_Word check_hlds__type_util__V_35_35;
#line 933 "type_util.m"
            MR_Word check_hlds__type_util__V_36_36;

#line 929 "type_util.m"
            {
#line 929 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_14);
            }
#line 930 "type_util.m"
            {
#line 930 "type_util.m"
              check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_14, check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeDefn_15);
            }
#line 929 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 929 "type_util.m"
              {
#line 931 "type_util.m"
                {
#line 931 "type_util.m"
                  hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeParams_16);
                }
#line 932 "type_util.m"
                {
#line 932 "type_util.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_17);
                }
#line 933 "type_util.m"
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_17)) == (MR_mktag((MR_Integer) 1)));
#line 933 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 933 "type_util.m"
                  {
#line 933 "type_util.m"
                    check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 0)));
#line 933 "type_util.m"
                    check_hlds__type_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 1)));
#line 933 "type_util.m"
                    check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 2)));
#line 933 "type_util.m"
                    check_hlds__type_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 3)));
#line 933 "type_util.m"
                    check_hlds__type_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 4)));
#line 933 "type_util.m"
                    check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 5)));
#line 933 "type_util.m"
                    check_hlds__type_util__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 933 "type_util.m"
                    check_hlds__type_util__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 933 "type_util.m"
                    check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 7)));
#line 945 "type_util.m"
                    if ((check_hlds__type_util__TypeParams_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 946 "type_util.m"
                      *check_hlds__type_util__Constructors_6 = check_hlds__type_util__V_27_27;
#line 945 "type_util.m"
                    else
#line 948 "type_util.m"
                      {
#line 948 "type_util.m"
                        MR_Word check_hlds__type_util__Subst_45;

#line 949 "type_util.m"
                        {
#line 949 "type_util.m"
                          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_16, check_hlds__type_util__TypeArgs_8, &check_hlds__type_util__Subst_45);
                        }
#line 950 "type_util.m"
                        {
#line 950 "type_util.m"
                          check_hlds__type_util__substitute_type_args_2_3_p_0(check_hlds__type_util__Subst_45, check_hlds__type_util__V_27_27, check_hlds__type_util__Constructors_6);
                        }
#line 948 "type_util.m"
                      }
#line 945 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 933 "type_util.m"
                  }
#line 929 "type_util.m"
              }
#line 929 "type_util.m"
          }
#line 916 "type_util.m"
      }
#line 916 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 916 "type_util.m"
  }
#line 201 "type_util.m"
}

#line 195 "type_util.m"
void MR_CALL 
check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(
#line 195 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 195 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 195 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8,
#line 195 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9)
#line 195 "type_util.m"
{
#line 872 "type_util.m"
  {
#line 872 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 872 "type_util.m"
    if ((check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8 == (MR_Integer) 1))
#line 872 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8;
#line 872 "type_util.m"
    else
#line 876 "type_util.m"
      {
#line 876 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6);
      }
#line 872 "type_util.m"
  }
#line 195 "type_util.m"
}

#line 185 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(
#line 185 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 185 "type_util.m"
  MR_Word check_hlds__type_util__Type_5)
#line 185 "type_util.m"
{
#line 879 "type_util.m"
  {
#line 879 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 879 "type_util.m"
    MR_Word check_hlds__type_util__TypeMayUseAtomic_6;
#line 879 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_7;
#line 745 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_26;

#line 743 "type_util.m"
    {
#line 743 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_26);
    }
#line 745 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 744 "type_util.m"
      {
#line 744 "type_util.m"
        check_hlds__type_util__TypeCategory_7 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_26);
      }
#line 745 "type_util.m"
    else
#line 746 "type_util.m"
      check_hlds__type_util__TypeCategory_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 889 "type_util.m"
    if ((check_hlds__type_util__TypeCategory_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 887 "type_util.m"
      check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 889 "type_util.m"
    else
#line 889 "type_util.m"
      if ((check_hlds__type_util__TypeCategory_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 910 "type_util.m"
        check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 889 "type_util.m"
      else
#line 889 "type_util.m"
        if ((check_hlds__type_util__TypeCategory_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 910 "type_util.m"
          check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 889 "type_util.m"
        else
#line 889 "type_util.m"
          if ((check_hlds__type_util__TypeCategory_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 910 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 889 "type_util.m"
          else
#line 889 "type_util.m"
            if ((check_hlds__type_util__TypeCategory_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 910 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 889 "type_util.m"
            else
#line 889 "type_util.m"
              if (((MR_tag((MR_Word) check_hlds__type_util__TypeCategory_7)) == (MR_mktag((MR_Integer) 1))))
#line 889 "type_util.m"
                {
#line 889 "type_util.m"
                  MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeCategory_7, (MR_Integer) 0)));

#line 889 "type_util.m"
                  if ((check_hlds__type_util__V_21_21 == (MR_Integer) 2))
#line 888 "type_util.m"
                    check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 889 "type_util.m"
                  else
#line 889 "type_util.m"
                    if ((check_hlds__type_util__V_21_21 == (MR_Integer) 1))
#line 890 "type_util.m"
                      {
#line 890 "type_util.m"
                        MR_Word check_hlds__type_util__Globals_9;
#line 890 "type_util.m"
                        MR_Word check_hlds__type_util__UBF_10;

#line 891 "type_util.m"
                        {
#line 891 "type_util.m"
                          hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_9);
                        }
#line 892 "type_util.m"
                        {
#line 892 "type_util.m"
                          libs__globals__lookup_bool_option_3_p_0(check_hlds__type_util__Globals_9, (MR_Integer) 239, &check_hlds__type_util__UBF_10);
                        }
#line 896 "type_util.m"
                        if ((check_hlds__type_util__UBF_10 == (MR_Integer) 0))
#line 897 "type_util.m"
                          check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 896 "type_util.m"
                        else
#line 894 "type_util.m"
                          check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 890 "type_util.m"
                      }
#line 889 "type_util.m"
                    else
#line 889 "type_util.m"
                      if ((check_hlds__type_util__V_21_21 == (MR_Integer) 0))
#line 888 "type_util.m"
                        check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 889 "type_util.m"
                      else
#line 911 "type_util.m"
                        check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 889 "type_util.m"
                }
#line 889 "type_util.m"
              else
#line 889 "type_util.m"
                if (((MR_tag((MR_Word) check_hlds__type_util__TypeCategory_7)) == (MR_mktag((MR_Integer) 2))))
#line 888 "type_util.m"
                  check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 889 "type_util.m"
                else
#line 889 "type_util.m"
                  if (((((MR_tag((MR_Word) check_hlds__type_util__TypeCategory_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 889 "type_util.m"
                    {
#line 889 "type_util.m"
                      MR_Word check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_7, (MR_Integer) 1)));

#line 889 "type_util.m"
                      if ((check_hlds__type_util__V_22_22 == (MR_Integer) 3))
#line 911 "type_util.m"
                        check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 889 "type_util.m"
                      else
#line 889 "type_util.m"
                        if ((check_hlds__type_util__V_22_22 == (MR_Integer) 1))
#line 888 "type_util.m"
                          check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 889 "type_util.m"
                        else
#line 889 "type_util.m"
                          if ((check_hlds__type_util__V_22_22 == (MR_Integer) 0))
#line 911 "type_util.m"
                            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 889 "type_util.m"
                          else
#line 911 "type_util.m"
                            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 889 "type_util.m"
                    }
#line 889 "type_util.m"
                  else
#line 911 "type_util.m"
                    check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 879 "type_util.m"
    return check_hlds__type_util__TypeMayUseAtomic_6;
#line 879 "type_util.m"
  }
#line 185 "type_util.m"
}

#line 180 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__classify_type_defn_body_1_f_0(
#line 180 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_3)
#line 180 "type_util.m"
{
#line 838 "type_util.m"
  {
#line 838 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 838 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_4;

#line 838 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_3)) == (MR_mktag((MR_Integer) 1))))
#line 838 "type_util.m"
      {
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__DuTypeKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 3)));
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 0)));
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 1)));
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 2)));
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 4)));
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 5)));
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 838 "type_util.m"
        MR_Word check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 7)));

#line 842 "type_util.m"
        if ((check_hlds__type_util__DuTypeKind_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 846 "type_util.m"
          {
#line 847 "type_util.m"
            check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
#line 846 "type_util.m"
          }
#line 842 "type_util.m"
        else
#line 842 "type_util.m"
          if ((check_hlds__type_util__DuTypeKind_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 852 "type_util.m"
            {
#line 853 "type_util.m"
              check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 852 "type_util.m"
            }
#line 842 "type_util.m"
          else
#line 842 "type_util.m"
            if ((check_hlds__type_util__DuTypeKind_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 840 "type_util.m"
              {
#line 841 "type_util.m"
                check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[5]);
#line 840 "type_util.m"
              }
#line 842 "type_util.m"
            else
#line 842 "type_util.m"
              if (((MR_tag((MR_Word) check_hlds__type_util__DuTypeKind_8)) == (MR_mktag((MR_Integer) 1))))
#line 843 "type_util.m"
                {
#line 844 "type_util.m"
                  check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[6]);
#line 843 "type_util.m"
                }
#line 842 "type_util.m"
              else
#line 849 "type_util.m"
                {
#line 850 "type_util.m"
                  check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[11]);
#line 849 "type_util.m"
                }
#line 838 "type_util.m"
      }
#line 838 "type_util.m"
    else
#line 838 "type_util.m"
      if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_3)) == (MR_mktag((MR_Integer) 2))))
#line 864 "type_util.m"
        {
#line 865 "type_util.m"
          check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 864 "type_util.m"
        }
#line 838 "type_util.m"
      else
#line 838 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_3)) == (MR_mktag((MR_Integer) 0))))
#line 864 "type_util.m"
          {
#line 865 "type_util.m"
            check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 864 "type_util.m"
          }
#line 838 "type_util.m"
        else
#line 838 "type_util.m"
          if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 838 "type_util.m"
            {
#line 838 "type_util.m"
              MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_3, (MR_Integer) 1)));

#line 838 "type_util.m"
              if ((check_hlds__type_util__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 864 "type_util.m"
                {
#line 865 "type_util.m"
                  check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 864 "type_util.m"
                }
#line 838 "type_util.m"
              else
#line 838 "type_util.m"
                if ((check_hlds__type_util__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 864 "type_util.m"
                  {
#line 865 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 864 "type_util.m"
                  }
#line 838 "type_util.m"
                else
#line 864 "type_util.m"
                  {
#line 865 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 864 "type_util.m"
                  }
#line 838 "type_util.m"
            }
#line 838 "type_util.m"
          else
#line 864 "type_util.m"
            {
#line 865 "type_util.m"
              check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 864 "type_util.m"
            }
#line 838 "type_util.m"
    return check_hlds__type_util__TypeCategory_4;
#line 838 "type_util.m"
  }
#line 180 "type_util.m"
}

#line 176 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__classify_type_ctor_2_f_0(
#line 176 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 176 "type_util.m"
  MR_Word check_hlds__type_util__TypeCtor_5)
#line 176 "type_util.m"
{
#line 749 "type_util.m"
  {
#line 749 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 749 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_6;
#line 749 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_5, (MR_Integer) 0)));
#line 749 "type_util.m"
    MR_Integer check_hlds__type_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_5, (MR_Integer) 1)));
#line 775 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategoryPrime_10;
#line 755 "type_util.m"
    MR_String check_hlds__type_util__TypeName_9;

#line 756 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 755 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 755 "type_util.m"
      {
#line 755 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 0)));
#line 755 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 755 "type_util.m"
          {
#line 755 "type_util.m"
            check_hlds__type_util__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 760 "type_util.m"
            if ((strcmp(check_hlds__type_util__TypeName_9, (MR_String) "int") == 0))
#line 761 "type_util.m"
              {
#line 762 "type_util.m"
                check_hlds__type_util__TypeCategoryPrime_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[1]);
#line 761 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 761 "type_util.m"
              }
#line 760 "type_util.m"
            else
#line 760 "type_util.m"
              if ((strcmp(check_hlds__type_util__TypeName_9, (MR_String) "void") == 0))
#line 771 "type_util.m"
                {
#line 771 "type_util.m"
                  check_hlds__type_util__TypeCategoryPrime_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 771 "type_util.m"
                  check_hlds__type_util__succeeded = MR_TRUE;
#line 771 "type_util.m"
                }
#line 760 "type_util.m"
              else
#line 760 "type_util.m"
                if ((strcmp(check_hlds__type_util__TypeName_9, (MR_String) "float") == 0))
#line 764 "type_util.m"
                  {
#line 765 "type_util.m"
                    check_hlds__type_util__TypeCategoryPrime_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[2]);
#line 764 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 764 "type_util.m"
                  }
#line 760 "type_util.m"
                else
#line 760 "type_util.m"
                  if ((strcmp(check_hlds__type_util__TypeName_9, (MR_String) "string") == 0))
#line 767 "type_util.m"
                    {
#line 768 "type_util.m"
                      check_hlds__type_util__TypeCategoryPrime_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[3]);
#line 767 "type_util.m"
                      check_hlds__type_util__succeeded = MR_TRUE;
#line 767 "type_util.m"
                    }
#line 760 "type_util.m"
                  else
#line 760 "type_util.m"
                    if ((strcmp(check_hlds__type_util__TypeName_9, (MR_String) "character") == 0))
#line 758 "type_util.m"
                      {
#line 759 "type_util.m"
                        check_hlds__type_util__TypeCategoryPrime_10 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[4]);
#line 758 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 758 "type_util.m"
                      }
#line 760 "type_util.m"
                    else
#line 760 "type_util.m"
                      check_hlds__type_util__succeeded = MR_FALSE;
#line 755 "type_util.m"
          }
#line 755 "type_util.m"
      }
#line 775 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 774 "type_util.m"
      check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_10;
#line 775 "type_util.m"
    else
#line 794 "type_util.m"
      {
#line 794 "type_util.m"
        MR_Word check_hlds__type_util__TypeCategoryPrime_34;
#line 776 "type_util.m"
        MR_Word check_hlds__type_util__ModuleSymName_11;
#line 776 "type_util.m"
        MR_String check_hlds__type_util__TypeName_27;
#line 776 "type_util.m"
        MR_Word check_hlds__type_util__V_35_35;

#line 776 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
#line 776 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 776 "type_util.m"
          {
#line 776 "type_util.m"
            check_hlds__type_util__ModuleSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 776 "type_util.m"
            check_hlds__type_util__TypeName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 1)));
#line 777 "type_util.m"
            {
#line 777 "type_util.m"
              check_hlds__type_util__V_35_35 = mdbcomp__prim_data__mercury_public_builtin_module_0_f_0();
            }
#line 777 "type_util.m"
            {
#line 777 "type_util.m"
              check_hlds__type_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__type_util__ModuleSymName_11, check_hlds__type_util__V_35_35);
            }
#line 776 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 776 "type_util.m"
              {
#line 778 "type_util.m"
                check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 776 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 782 "type_util.m"
                  {
#line 782 "type_util.m"
                    if ((strcmp(check_hlds__type_util__TypeName_27, (MR_String) "func") == 0))
#line 784 "type_util.m"
                      {
#line 784 "type_util.m"
                        check_hlds__type_util__TypeCategoryPrime_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 784 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 784 "type_util.m"
                      }
#line 782 "type_util.m"
                    else
#line 782 "type_util.m"
                      if ((strcmp(check_hlds__type_util__TypeName_27, (MR_String) "pred") == 0))
#line 781 "type_util.m"
                        {
#line 781 "type_util.m"
                          check_hlds__type_util__TypeCategoryPrime_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 781 "type_util.m"
                          check_hlds__type_util__succeeded = MR_TRUE;
#line 781 "type_util.m"
                        }
#line 782 "type_util.m"
                      else
#line 782 "type_util.m"
                        if ((strcmp(check_hlds__type_util__TypeName_27, (MR_String) "void") == 0))
#line 790 "type_util.m"
                          {
#line 790 "type_util.m"
                            check_hlds__type_util__TypeCategoryPrime_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 790 "type_util.m"
                            check_hlds__type_util__succeeded = MR_TRUE;
#line 790 "type_util.m"
                          }
#line 782 "type_util.m"
                        else
#line 782 "type_util.m"
                          if ((strcmp(check_hlds__type_util__TypeName_27, (MR_String) "tuple") == 0))
#line 787 "type_util.m"
                            {
#line 787 "type_util.m"
                              check_hlds__type_util__TypeCategoryPrime_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 787 "type_util.m"
                              check_hlds__type_util__succeeded = MR_TRUE;
#line 787 "type_util.m"
                            }
#line 782 "type_util.m"
                          else
#line 782 "type_util.m"
                            check_hlds__type_util__succeeded = MR_FALSE;
#line 782 "type_util.m"
                  }
#line 776 "type_util.m"
              }
#line 776 "type_util.m"
          }
#line 794 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 793 "type_util.m"
          check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_34;
#line 794 "type_util.m"
        else
#line 813 "type_util.m"
          {
#line 813 "type_util.m"
            MR_Word check_hlds__type_util__TypeCategoryPrime_31;
#line 795 "type_util.m"
            MR_String check_hlds__type_util__TypeName_28;
#line 795 "type_util.m"
            MR_Word check_hlds__type_util__ModuleSymName_29;
#line 795 "type_util.m"
            MR_Word check_hlds__type_util__V_36_36;

#line 795 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
#line 795 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 795 "type_util.m"
              {
#line 795 "type_util.m"
                check_hlds__type_util__ModuleSymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 795 "type_util.m"
                check_hlds__type_util__TypeName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 1)));
#line 796 "type_util.m"
                {
#line 796 "type_util.m"
                  check_hlds__type_util__V_36_36 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
                }
#line 796 "type_util.m"
                {
#line 796 "type_util.m"
                  check_hlds__type_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__type_util__ModuleSymName_29, check_hlds__type_util__V_36_36);
                }
#line 795 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 795 "type_util.m"
                  {
#line 797 "type_util.m"
                    check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 795 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 801 "type_util.m"
                      {
#line 801 "type_util.m"
                        if ((strcmp(check_hlds__type_util__TypeName_28, (MR_String) "type_info") == 0))
#line 799 "type_util.m"
                          {
#line 800 "type_util.m"
                            check_hlds__type_util__TypeCategoryPrime_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[5]);
#line 799 "type_util.m"
                            check_hlds__type_util__succeeded = MR_TRUE;
#line 799 "type_util.m"
                          }
#line 801 "type_util.m"
                        else
#line 801 "type_util.m"
                          if ((strcmp(check_hlds__type_util__TypeName_28, (MR_String) "type_ctor_info") == 0))
#line 802 "type_util.m"
                            {
#line 803 "type_util.m"
                              check_hlds__type_util__TypeCategoryPrime_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6]);
#line 802 "type_util.m"
                              check_hlds__type_util__succeeded = MR_TRUE;
#line 802 "type_util.m"
                            }
#line 801 "type_util.m"
                          else
#line 801 "type_util.m"
                            if ((strcmp(check_hlds__type_util__TypeName_28, (MR_String) "typeclass_info") == 0))
#line 805 "type_util.m"
                              {
#line 806 "type_util.m"
                                check_hlds__type_util__TypeCategoryPrime_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[7]);
#line 805 "type_util.m"
                                check_hlds__type_util__succeeded = MR_TRUE;
#line 805 "type_util.m"
                              }
#line 801 "type_util.m"
                            else
#line 801 "type_util.m"
                              if ((strcmp(check_hlds__type_util__TypeName_28, (MR_String) "base_typeclass_info") == 0))
#line 808 "type_util.m"
                                {
#line 809 "type_util.m"
                                  check_hlds__type_util__TypeCategoryPrime_31 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[8]);
#line 808 "type_util.m"
                                  check_hlds__type_util__succeeded = MR_TRUE;
#line 808 "type_util.m"
                                }
#line 801 "type_util.m"
                              else
#line 801 "type_util.m"
                                check_hlds__type_util__succeeded = MR_FALSE;
#line 801 "type_util.m"
                      }
#line 795 "type_util.m"
                  }
#line 795 "type_util.m"
              }
#line 813 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 812 "type_util.m"
              check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_31;
#line 813 "type_util.m"
            else
#line 817 "type_util.m"
              {
#line 814 "type_util.m"
                MR_Word check_hlds__type_util__V_26_26;

#line 814 "type_util.m"
                {
#line 814 "type_util.m"
                  check_hlds__type_util__V_26_26 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__type_util__TypeCtor_5);
                }
#line 814 "type_util.m"
                check_hlds__type_util__succeeded = (check_hlds__type_util__V_26_26 == (MR_Integer) 0);
#line 817 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 816 "type_util.m"
                  check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 817 "type_util.m"
                else
#line 821 "type_util.m"
                  {
#line 818 "type_util.m"
                    MR_Word check_hlds__type_util__V_12_12;
#line 818 "type_util.m"
                    MR_Word check_hlds__type_util__V_13_13;

#line 818 "type_util.m"
                    {
#line 818 "type_util.m"
                      check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(check_hlds__type_util__TypeCtor_5, &check_hlds__type_util__V_12_12, &check_hlds__type_util__V_13_13);
                    }
#line 821 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 820 "type_util.m"
                      check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 821 "type_util.m"
                    else
#line 825 "type_util.m"
                      {
#line 822 "type_util.m"
                        {
#line 822 "type_util.m"
                          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_5);
                        }
#line 825 "type_util.m"
                        if (check_hlds__type_util__succeeded)
#line 824 "type_util.m"
                          check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 825 "type_util.m"
                        else
#line 826 "type_util.m"
                          {
#line 826 "type_util.m"
                            MR_Word check_hlds__type_util__TypeTable_15;
#line 826 "type_util.m"
                            MR_Word check_hlds__type_util__TypeDefn_16;
#line 826 "type_util.m"
                            MR_Word check_hlds__type_util__TypeBody_17;

#line 826 "type_util.m"
                            {
#line 826 "type_util.m"
                              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
                            }
#line 827 "type_util.m"
                            {
#line 827 "type_util.m"
                              hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_5, &check_hlds__type_util__TypeDefn_16);
                            }
#line 828 "type_util.m"
                            {
#line 828 "type_util.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_16, &check_hlds__type_util__TypeBody_17);
                            }
#line 829 "type_util.m"
                            {
#line 829 "type_util.m"
                              return check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__classify_type_defn_body_1_f_0(check_hlds__type_util__TypeBody_17);
                            }
#line 826 "type_util.m"
                          }
#line 825 "type_util.m"
                      }
#line 821 "type_util.m"
                  }
#line 817 "type_util.m"
              }
#line 813 "type_util.m"
          }
#line 794 "type_util.m"
      }
#line 749 "type_util.m"
    return check_hlds__type_util__TypeCategory_6;
#line 749 "type_util.m"
  }
#line 176 "type_util.m"
}

#line 172 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__classify_type_2_f_0(
#line 172 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 172 "type_util.m"
  MR_Word check_hlds__type_util__VarType_5)
#line 172 "type_util.m"
{
#line 745 "type_util.m"
  {
#line 745 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 745 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_6;
#line 745 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;

#line 743 "type_util.m"
    {
#line 743 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 745 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 744 "type_util.m"
      {
#line 744 "type_util.m"
        return check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_7);
      }
#line 745 "type_util.m"
    else
#line 746 "type_util.m"
      check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 745 "type_util.m"
    return check_hlds__type_util__TypeCategory_6;
#line 745 "type_util.m"
  }
#line 172 "type_util.m"
}

#line 166 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(
#line 166 "type_util.m"
  MR_Word check_hlds__type_util__Type_3,
#line 166 "type_util.m"
  MR_Word check_hlds__type_util__Body_4)
#line 166 "type_util.m"
{
#line 728 "type_util.m"
  {
#line 728 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 728 "type_util.m"
    MR_String check_hlds__type_util__Name_5;
#line 728 "type_util.m"
    MR_Word check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Type_3, (MR_Integer) 0)));
#line 728 "type_util.m"
    MR_Word check_hlds__type_util__V_19_19;
#line 728 "type_util.m"
    MR_Integer check_hlds__type_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Type_3, (MR_Integer) 1)));
#line 728 "type_util.m"
    MR_Word check_hlds__type_util__V_22_22;

#line 729 "type_util.m"
    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 729 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 729 "type_util.m"
      {
#line 729 "type_util.m"
        check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_18_18, (MR_Integer) 0)));
#line 729 "type_util.m"
        check_hlds__type_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_18_18, (MR_Integer) 1)));
#line 729 "type_util.m"
        {
#line 729 "type_util.m"
          check_hlds__type_util__V_22_22 = mdbcomp__prim_data__mercury_private_builtin_module_0_f_0();
        }
#line 729 "type_util.m"
        {
#line 729 "type_util.m"
          check_hlds__type_util__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(check_hlds__type_util__V_19_19, check_hlds__type_util__V_22_22);
        }
#line 728 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 728 "type_util.m"
          {
#line 729 "type_util.m"
            check_hlds__type_util__succeeded = (check_hlds__type_util__V_20_20 == (MR_Integer) 0);
#line 728 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 728 "type_util.m"
              {
#line 731 "type_util.m"
                if ((strcmp(check_hlds__type_util__Name_5, (MR_String) "type_info") == 0))
#line 730 "type_util.m"
                  check_hlds__type_util__succeeded = MR_TRUE;
#line 731 "type_util.m"
                else
#line 731 "type_util.m"
                  if ((strcmp(check_hlds__type_util__Name_5, (MR_String) "type_ctor_info") == 0))
#line 731 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 731 "type_util.m"
                  else
#line 731 "type_util.m"
                    if ((strcmp(check_hlds__type_util__Name_5, (MR_String) "typeclass_info") == 0))
#line 732 "type_util.m"
                      check_hlds__type_util__succeeded = MR_TRUE;
#line 731 "type_util.m"
                    else
#line 731 "type_util.m"
                      if ((strcmp(check_hlds__type_util__Name_5, (MR_String) "base_typeclass_info") == 0))
#line 733 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 731 "type_util.m"
                      else
#line 731 "type_util.m"
                        check_hlds__type_util__succeeded = MR_FALSE;
#line 728 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 728 "type_util.m"
                  {
#line 736 "type_util.m"
                    if (((MR_tag((MR_Word) check_hlds__type_util__Body_4)) == (MR_mktag((MR_Integer) 1))))
#line 735 "type_util.m"
                      {
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 7)));
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 0)));
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 1)));
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 2)));
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 3)));
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 4)));
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 5)));
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 735 "type_util.m"
                        MR_Word check_hlds__type_util__V_14_14;

#line 735 "type_util.m"
                        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 735 "type_util.m"
                        if (check_hlds__type_util__succeeded)
#line 735 "type_util.m"
                          check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_21_21, (MR_Integer) 0)));
#line 735 "type_util.m"
                      }
#line 736 "type_util.m"
                    else
#line 736 "type_util.m"
                      if (((MR_tag((MR_Word) check_hlds__type_util__Body_4)) == (MR_mktag((MR_Integer) 0))))
#line 736 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 736 "type_util.m"
                      else
#line 736 "type_util.m"
                        if (((((MR_tag((MR_Word) check_hlds__type_util__Body_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Body_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 737 "type_util.m"
                          check_hlds__type_util__succeeded = MR_TRUE;
#line 736 "type_util.m"
                        else
#line 736 "type_util.m"
                          check_hlds__type_util__succeeded = MR_FALSE;
#line 735 "type_util.m"
                    check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 728 "type_util.m"
                  }
#line 728 "type_util.m"
              }
#line 728 "type_util.m"
          }
#line 729 "type_util.m"
      }
#line 728 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 728 "type_util.m"
  }
#line 166 "type_util.m"
}

#line 159 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_f_0(
#line 159 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 159 "type_util.m"
  MR_Word check_hlds__type_util__Type_5)
#line 159 "type_util.m"
{
#line 663 "type_util.m"
  {
#line 663 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 663 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__3_3;

#line 663 "type_util.m"
    {
#line 663 "type_util.m"
      return check_hlds__type_util__HeadVar__3_3 = check_hlds__type_util__check_dummy_type_2_3_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__Type_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 663 "type_util.m"
    return check_hlds__type_util__HeadVar__3_3;
#line 663 "type_util.m"
  }
#line 159 "type_util.m"
}

#line 659 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
#line 659 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 659 "type_util.m"
{
#line 659 "type_util.m"
  {
#line 659 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 659 "type_util.m"
    MR_builtin_longjmp((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0, 1);
#line 659 "type_util.m"
  }
#line 659 "type_util.m"
}

#line 659 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
#line 659 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 659 "type_util.m"
{
#line 659 "type_util.m"
  {
#line 659 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 659 "type_util.m"
    (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10 = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10);
#line 659 "type_util.m"
    {
#line 659 "type_util.m"
      check_hlds__type_util__type_is_existq_type_2_p_0_2(check_hlds__type_util__env_ptr);
#line 659 "type_util.m"
      return;
    }
#line 659 "type_util.m"
  }
#line 659 "type_util.m"
}

#line 659 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
#line 659 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 659 "type_util.m"
{
#line 659 "type_util.m"
  {
#line 659 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 659 "type_util.m"
    {
#line 660 "type_util.m"
      MR_Word check_hlds__type_util__V_11_11;
#line 660 "type_util.m"
      MR_Word check_hlds__type_util__V_12_12;
#line 660 "type_util.m"
      MR_Word check_hlds__type_util__V_13_13;
#line 660 "type_util.m"
      MR_Word check_hlds__type_util__V_14_14;
#line 660 "type_util.m"
      MR_Word check_hlds__type_util__V_7_7;
#line 660 "type_util.m"
      MR_Word check_hlds__type_util__V_8_8;

#line 660 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 0)));
#line 660 "type_util.m"
      check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 1)));
#line 660 "type_util.m"
      check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 2)));
#line 660 "type_util.m"
      check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 3)));
#line 660 "type_util.m"
      check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 4)));
#line 660 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 660 "type_util.m"
      if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
#line 660 "type_util.m"
        {
#line 660 "type_util.m"
          {
#line 660 "type_util.m"
            check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9, (MR_Integer) 0)));
#line 660 "type_util.m"
            check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9, (MR_Integer) 1)));
#line 660 "type_util.m"
          }
#line 660 "type_util.m"
          {
#line 660 "type_util.m"
            check_hlds__type_util__type_is_existq_type_2_p_0_1(check_hlds__type_util__env_ptr);
#line 660 "type_util.m"
            return;
          }
#line 660 "type_util.m"
        }
#line 659 "type_util.m"
    }
#line 659 "type_util.m"
  }
#line 659 "type_util.m"
}

#line 659 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
#line 659 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 659 "type_util.m"
{
#line 659 "type_util.m"
  {
#line 659 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 659 "type_util.m"
    if (MR_builtin_setjmp((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0) == 0)
#line 659 "type_util.m"
      {
#line 659 "type_util.m"
        {
#line 659 "type_util.m"
          {
#line 659 "type_util.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10, (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5, check_hlds__type_util__type_is_existq_type_2_p_0_3, check_hlds__type_util__env_ptr);
          }
#line 659 "type_util.m"
        }
#line 659 "type_util.m"
        (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_FALSE;
#line 659 "type_util.m"
      }
#line 659 "type_util.m"
    else
#line 659 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_TRUE;
#line 659 "type_util.m"
  }
#line 659 "type_util.m"
}

#line 133 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0(
#line 133 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 133 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 133 "type_util.m"
{
#line 133 "type_util.m"
  {
#line 133 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s check_hlds__type_util__env;

#line 657 "type_util.m"
    {
#line 657 "type_util.m"
      (check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, &(check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5);
    }
#line 656 "type_util.m"
    if ((check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
#line 659 "type_util.m"
      {
#line 659 "type_util.m"
        check_hlds__type_util__type_is_existq_type_2_p_0_4(&check_hlds__type_util__env);
      }
#line 656 "type_util.m"
    return (check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
#line 133 "type_util.m"
  }
#line 133 "type_util.m"
}

#line 127 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(
#line 127 "type_util.m"
  MR_Word check_hlds__type_util__TypeTable_3,
#line 127 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_4)
#line 127 "type_util.m"
{
#line 648 "type_util.m"
  while (MR_TRUE)
#line 648 "type_util.m"
    {
#line 648 "type_util.m"
      /* tailcall optimized into a loop */
#line 648 "type_util.m"
      {
#line 648 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 648 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) == (MR_mktag((MR_Integer) 2))))
#line 652 "type_util.m"
          {
#line 652 "type_util.m"
            MR_Word check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)));
#line 652 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_11;
#line 652 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_15;
#line 652 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_19;

#line 436 "type_util.m"
            {
#line 436 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__TypeCtor_19);
            }
#line 652 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 652 "type_util.m"
              {
#line 437 "type_util.m"
                {
#line 437 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeCtor_19, &check_hlds__type_util__TypeDefn_15);
                }
#line 652 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 652 "type_util.m"
                  {
#line 445 "type_util.m"
                    {
#line 445 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_11);
                    }
#line 634 "type_util.m"
                    /* direct tailcall eliminated */
#line 634 "type_util.m"
                    {
#line 634 "type_util.m"
                      MR_Word check_hlds__type_util__TypeBody__tmp_copy_4 = check_hlds__type_util__TypeBody_11;

#line 634 "type_util.m"
                      check_hlds__type_util__TypeBody_4 = check_hlds__type_util__TypeBody__tmp_copy_4;
#line 634 "type_util.m"
                    }
#line 634 "type_util.m"
                    continue;
#line 652 "type_util.m"
                  }
#line 652 "type_util.m"
              }
#line 652 "type_util.m"
          }
#line 648 "type_util.m"
        else
#line 648 "type_util.m"
          if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 650 "type_util.m"
            {
#line 650 "type_util.m"
              MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 1)));

#line 650 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 650 "type_util.m"
            }
#line 648 "type_util.m"
          else
#line 648 "type_util.m"
            if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 648 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 648 "type_util.m"
            else
#line 648 "type_util.m"
              check_hlds__type_util__succeeded = MR_FALSE;
#line 648 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 648 "type_util.m"
      }
#line 648 "type_util.m"
      break;
#line 648 "type_util.m"
    }
#line 127 "type_util.m"
}

#line 125 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_body_is_solver_type_2_p_0(
#line 125 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 125 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_4)
#line 125 "type_util.m"
{
#line 638 "type_util.m"
  while (MR_TRUE)
#line 638 "type_util.m"
    {
#line 638 "type_util.m"
      /* tailcall optimized into a loop */
#line 638 "type_util.m"
      {
#line 638 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 638 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) == (MR_mktag((MR_Integer) 2))))
#line 642 "type_util.m"
          {
#line 642 "type_util.m"
            MR_Word check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)));
#line 642 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_11;
#line 642 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_15;
#line 642 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_19;
#line 642 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_20;

#line 431 "type_util.m"
            {
#line 431 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_19);
            }
#line 432 "type_util.m"
            {
#line 432 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__TypeCtor_20);
            }
#line 642 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 642 "type_util.m"
              {
#line 433 "type_util.m"
                {
#line 433 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_19, check_hlds__type_util__TypeCtor_20, &check_hlds__type_util__TypeDefn_15);
                }
#line 642 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 642 "type_util.m"
                  {
#line 441 "type_util.m"
                    {
#line 441 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_11);
                    }
#line 629 "type_util.m"
                    /* direct tailcall eliminated */
#line 629 "type_util.m"
                    {
#line 629 "type_util.m"
                      MR_Word check_hlds__type_util__TypeBody__tmp_copy_4 = check_hlds__type_util__TypeBody_11;

#line 629 "type_util.m"
                      check_hlds__type_util__TypeBody_4 = check_hlds__type_util__TypeBody__tmp_copy_4;
#line 629 "type_util.m"
                    }
#line 629 "type_util.m"
                    continue;
#line 642 "type_util.m"
                  }
#line 642 "type_util.m"
              }
#line 642 "type_util.m"
          }
#line 638 "type_util.m"
        else
#line 638 "type_util.m"
          if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 640 "type_util.m"
            {
#line 640 "type_util.m"
              MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 1)));

#line 640 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 640 "type_util.m"
            }
#line 638 "type_util.m"
          else
#line 638 "type_util.m"
            if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 638 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 638 "type_util.m"
            else
#line 638 "type_util.m"
              check_hlds__type_util__succeeded = MR_FALSE;
#line 638 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 638 "type_util.m"
      }
#line 638 "type_util.m"
      break;
#line 638 "type_util.m"
    }
#line 125 "type_util.m"
}

#line 120 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_from_type_table_2_p_0(
#line 120 "type_util.m"
  MR_Word check_hlds__type_util__TypeTable_3,
#line 120 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 120 "type_util.m"
{
#line 631 "type_util.m"
  {
#line 631 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 631 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 631 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_9;
#line 631 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_13;

#line 436 "type_util.m"
    {
#line 436 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_13);
    }
#line 631 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 631 "type_util.m"
      {
#line 437 "type_util.m"
        {
#line 437 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeCtor_13, &check_hlds__type_util__TypeDefn_9);
        }
#line 631 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 631 "type_util.m"
          {
#line 445 "type_util.m"
            {
#line 445 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_9, &check_hlds__type_util__TypeBody_5);
            }
#line 634 "type_util.m"
            {
#line 634 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeBody_5);
            }
#line 631 "type_util.m"
          }
#line 631 "type_util.m"
      }
#line 631 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 631 "type_util.m"
  }
#line 120 "type_util.m"
}

#line 119 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_2_p_0(
#line 119 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 119 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 119 "type_util.m"
{
#line 617 "type_util.m"
  {
#line 617 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 617 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 617 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_9;
#line 617 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_13;
#line 617 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_14;

#line 431 "type_util.m"
    {
#line 431 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_13);
    }
#line 432 "type_util.m"
    {
#line 432 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_14);
    }
#line 617 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 617 "type_util.m"
      {
#line 433 "type_util.m"
        {
#line 433 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_13, check_hlds__type_util__TypeCtor_14, &check_hlds__type_util__TypeDefn_9);
        }
#line 617 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 617 "type_util.m"
          {
#line 441 "type_util.m"
            {
#line 441 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_9, &check_hlds__type_util__TypeBody_5);
            }
#line 629 "type_util.m"
            {
#line 629 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_is_solver_type_2_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeBody_5);
            }
#line 617 "type_util.m"
          }
#line 617 "type_util.m"
      }
#line 617 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 617 "type_util.m"
  }
#line 119 "type_util.m"
}

#line 116 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(
#line 116 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 116 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 116 "type_util.m"
{
#line 567 "type_util.m"
  {
#line 567 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__ActualType_8;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__SolverTypeDetails_9;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__V_12_12;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_20;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_24;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_25;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_29;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_33;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_37;
#line 567 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_38;
#line 587 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;
#line 587 "type_util.m"
    MR_Word check_hlds__type_util__V_14_14;
#line 587 "type_util.m"
    MR_Word check_hlds__type_util__V_15_15;
#line 587 "type_util.m"
    MR_Word check_hlds__type_util__V_16_16;
#line 587 "type_util.m"
    MR_Word check_hlds__type_util__V_10_10;

#line 431 "type_util.m"
    {
#line 431 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_24);
    }
#line 432 "type_util.m"
    {
#line 432 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_25);
    }
#line 567 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 567 "type_util.m"
      {
#line 433 "type_util.m"
        {
#line 433 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_24, check_hlds__type_util__TypeCtor_25, &check_hlds__type_util__TypeDefn_20);
        }
#line 567 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 567 "type_util.m"
          {
#line 441 "type_util.m"
            {
#line 441 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_20, &check_hlds__type_util__TypeBody_5);
            }
#line 572 "type_util.m"
            if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 2))))
#line 584 "type_util.m"
              {
#line 584 "type_util.m"
                check_hlds__type_util__ActualType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 584 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 584 "type_util.m"
              }
#line 572 "type_util.m"
            else
#line 572 "type_util.m"
              if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 571 "type_util.m"
                {
#line 571 "type_util.m"
                  check_hlds__type_util__ActualType_8 = check_hlds__type_util__Type_4;
#line 571 "type_util.m"
                  check_hlds__type_util__succeeded = MR_TRUE;
#line 571 "type_util.m"
                }
#line 572 "type_util.m"
              else
#line 572 "type_util.m"
                check_hlds__type_util__succeeded = MR_FALSE;
#line 567 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 567 "type_util.m"
              {
#line 431 "type_util.m"
                {
#line 431 "type_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_37);
                }
#line 432 "type_util.m"
                {
#line 432 "type_util.m"
                  check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__ActualType_8, &check_hlds__type_util__TypeCtor_38);
                }
#line 567 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 567 "type_util.m"
                  {
#line 433 "type_util.m"
                    {
#line 433 "type_util.m"
                      check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_37, check_hlds__type_util__TypeCtor_38, &check_hlds__type_util__TypeDefn_33);
                    }
#line 567 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 567 "type_util.m"
                      {
#line 441 "type_util.m"
                        {
#line 441 "type_util.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_33, &check_hlds__type_util__TypeBody_29);
                        }
#line 606 "type_util.m"
                        {
#line 606 "type_util.m"
                          check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_solver_type_details_3_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeBody_29, &check_hlds__type_util__SolverTypeDetails_9);
                        }
#line 567 "type_util.m"
                        if (check_hlds__type_util__succeeded)
#line 567 "type_util.m"
                          {
#line 587 "type_util.m"
                            check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 0)));
#line 587 "type_util.m"
                            check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 1)));
#line 587 "type_util.m"
                            check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 2)));
#line 587 "type_util.m"
                            check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 3)));
#line 587 "type_util.m"
                            check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 4)));
#line 587 "type_util.m"
                            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 587 "type_util.m"
                            if (check_hlds__type_util__succeeded)
#line 587 "type_util.m"
                              check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_12_12, (MR_Integer) 0)));
#line 567 "type_util.m"
                          }
#line 567 "type_util.m"
                      }
#line 567 "type_util.m"
                  }
#line 567 "type_util.m"
              }
#line 567 "type_util.m"
          }
#line 567 "type_util.m"
      }
#line 567 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 567 "type_util.m"
  }
#line 116 "type_util.m"
}

#line 110 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_body_has_solver_type_details_3_p_0(
#line 110 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 110 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 110 "type_util.m"
  MR_Word * check_hlds__type_util__SolverTypeDetails_6)
#line 110 "type_util.m"
{
#line 611 "type_util.m"
  while (MR_TRUE)
#line 611 "type_util.m"
    {
#line 611 "type_util.m"
      /* tailcall optimized into a loop */
#line 611 "type_util.m"
      {
#line 611 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 611 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__Type_5)) == (MR_mktag((MR_Integer) 2))))
#line 613 "type_util.m"
          {
#line 613 "type_util.m"
            MR_Word check_hlds__type_util__EqvType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__Type_5, (MR_Integer) 0)));
#line 613 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_12;
#line 613 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_16;
#line 613 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_20;
#line 613 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_21;

#line 431 "type_util.m"
            {
#line 431 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_20);
            }
#line 432 "type_util.m"
            {
#line 432 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__EqvType_8, &check_hlds__type_util__TypeCtor_21);
            }
#line 613 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 613 "type_util.m"
              {
#line 433 "type_util.m"
                {
#line 433 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_20, check_hlds__type_util__TypeCtor_21, &check_hlds__type_util__TypeDefn_16);
                }
#line 613 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 613 "type_util.m"
                  {
#line 441 "type_util.m"
                    {
#line 441 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_16, &check_hlds__type_util__TypeBody_12);
                    }
#line 606 "type_util.m"
                    /* direct tailcall eliminated */
#line 606 "type_util.m"
                    {
#line 606 "type_util.m"
                      MR_Word check_hlds__type_util__Type__tmp_copy_5 = check_hlds__type_util__TypeBody_12;

#line 606 "type_util.m"
                      check_hlds__type_util__Type_5 = check_hlds__type_util__Type__tmp_copy_5;
#line 606 "type_util.m"
                    }
#line 606 "type_util.m"
                    continue;
#line 613 "type_util.m"
                  }
#line 613 "type_util.m"
              }
#line 613 "type_util.m"
          }
#line 611 "type_util.m"
        else
#line 611 "type_util.m"
          if (((((MR_tag((MR_Word) check_hlds__type_util__Type_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 611 "type_util.m"
            {
#line 611 "type_util.m"
              MR_Word check_hlds__type_util___MaybeUserEqComp_7;

#line 611 "type_util.m"
              *check_hlds__type_util__SolverTypeDetails_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 1)));
#line 611 "type_util.m"
              check_hlds__type_util___MaybeUserEqComp_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 2)));
#line 611 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 611 "type_util.m"
            }
#line 611 "type_util.m"
          else
#line 611 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 611 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 611 "type_util.m"
      }
#line 611 "type_util.m"
      break;
#line 611 "type_util.m"
    }
#line 110 "type_util.m"
}

#line 107 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_has_solver_type_details_3_p_0(
#line 107 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 107 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 107 "type_util.m"
  MR_Word * check_hlds__type_util__SolverTypeDetails_6)
#line 107 "type_util.m"
{
#line 604 "type_util.m"
  {
#line 604 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 604 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_7;
#line 604 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_11;
#line 604 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_15;
#line 604 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_16;

#line 431 "type_util.m"
    {
#line 431 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
    }
#line 432 "type_util.m"
    {
#line 432 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_16);
    }
#line 604 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 604 "type_util.m"
      {
#line 433 "type_util.m"
        {
#line 433 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_16, &check_hlds__type_util__TypeDefn_11);
        }
#line 604 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 604 "type_util.m"
          {
#line 441 "type_util.m"
            {
#line 441 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_7);
            }
#line 606 "type_util.m"
            {
#line 606 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_solver_type_details_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeBody_7, check_hlds__type_util__SolverTypeDetails_6);
            }
#line 604 "type_util.m"
          }
#line 604 "type_util.m"
      }
#line 604 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 604 "type_util.m"
  }
#line 107 "type_util.m"
}

#line 104 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(
#line 104 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 104 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 104 "type_util.m"
{
#line 591 "type_util.m"
  while (MR_TRUE)
#line 591 "type_util.m"
    {
#line 591 "type_util.m"
      /* tailcall optimized into a loop */
#line 591 "type_util.m"
      {
#line 591 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 591 "type_util.m"
        {
#line 591 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(check_hlds__type_util__Type_4);
        }
#line 591 "type_util.m"
        if (!(check_hlds__type_util__succeeded))
#line 593 "type_util.m"
          {
#line 593 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_5;
#line 593 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_13;
#line 593 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_17;
#line 593 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_18;

#line 431 "type_util.m"
            {
#line 431 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_17);
            }
#line 432 "type_util.m"
            {
#line 432 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_18);
            }
#line 593 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 593 "type_util.m"
              {
#line 433 "type_util.m"
                {
#line 433 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_17, check_hlds__type_util__TypeCtor_18, &check_hlds__type_util__TypeDefn_13);
                }
#line 593 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 593 "type_util.m"
                  {
#line 441 "type_util.m"
                    {
#line 441 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_5);
                    }
#line 596 "type_util.m"
                    if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 2))))
#line 599 "type_util.m"
                      {
#line 599 "type_util.m"
                        MR_Word check_hlds__type_util__EqvType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));

#line 600 "type_util.m"
                        /* direct tailcall eliminated */
#line 600 "type_util.m"
                        {
#line 600 "type_util.m"
                          MR_Word check_hlds__type_util__Type__tmp_copy_4 = check_hlds__type_util__EqvType_8;

#line 600 "type_util.m"
                          check_hlds__type_util__Type_4 = check_hlds__type_util__Type__tmp_copy_4;
#line 600 "type_util.m"
                        }
#line 600 "type_util.m"
                        continue;
#line 599 "type_util.m"
                      }
#line 596 "type_util.m"
                    else
#line 596 "type_util.m"
                      if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 597 "type_util.m"
                        {
#line 597 "type_util.m"
                          MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));

#line 597 "type_util.m"
                          check_hlds__type_util__succeeded = (check_hlds__type_util__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 597 "type_util.m"
                        }
#line 596 "type_util.m"
                      else
#line 596 "type_util.m"
                        if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 595 "type_util.m"
                          check_hlds__type_util__succeeded = MR_TRUE;
#line 596 "type_util.m"
                        else
#line 596 "type_util.m"
                          check_hlds__type_util__succeeded = MR_FALSE;
#line 593 "type_util.m"
                  }
#line 593 "type_util.m"
              }
#line 593 "type_util.m"
          }
#line 591 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 591 "type_util.m"
      }
#line 591 "type_util.m"
      break;
#line 591 "type_util.m"
    }
#line 104 "type_util.m"
}

#line 92 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(
#line 92 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 92 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_5,
#line 92 "type_util.m"
  MR_Word check_hlds__type_util__Var_6)
#line 92 "type_util.m"
{
#line 563 "type_util.m"
  {
#line 563 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 563 "type_util.m"
    MR_Word check_hlds__type_util__VarType_7;

#line 564 "type_util.m"
    {
#line 564 "type_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__type_util__VarTypes_5, check_hlds__type_util__Var_6, &check_hlds__type_util__VarType_7);
    }
#line 565 "type_util.m"
    {
#line 565 "type_util.m"
      return check_hlds__type_util__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__VarType_7);
    }
#line 563 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 563 "type_util.m"
  }
#line 92 "type_util.m"
}

#line 89 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(
#line 89 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 89 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 89 "type_util.m"
{
#line 473 "type_util.m"
  {
#line 473 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 473 "type_util.m"
    MR_Word check_hlds__type_util__V_6_6;
#line 474 "type_util.m"
    MR_Word check_hlds__type_util__V_5_5;

#line 474 "type_util.m"
    {
#line 474 "type_util.m"
      check_hlds__type_util__V_6_6 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    }
#line 474 "type_util.m"
    {
#line 474 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, check_hlds__type_util__V_6_6, &check_hlds__type_util__V_5_5);
    }
#line 473 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 473 "type_util.m"
  }
#line 89 "type_util.m"
}

#line 80 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(
#line 80 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 80 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_5,
#line 80 "type_util.m"
  MR_Word * check_hlds__type_util__UserEqComp_6)
#line 80 "type_util.m"
{
#line 451 "type_util.m"
  {
#line 451 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 451 "type_util.m"
    MR_Word check_hlds__type_util__Globals_7;
#line 451 "type_util.m"
    MR_Word check_hlds__type_util__Target_8;

#line 452 "type_util.m"
    {
#line 452 "type_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_7);
    }
#line 453 "type_util.m"
    {
#line 453 "type_util.m"
      libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_7, &check_hlds__type_util__Target_8);
    }
#line 465 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 1))))
#line 462 "type_util.m"
      {
#line 462 "type_util.m"
        MR_Word check_hlds__type_util__ForeignTypeBody_18;
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 7)));
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_22_22;
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_41_41;
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 3)));
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 4)));
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 5)));
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 457 "type_util.m"
        MR_Word check_hlds__type_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 457 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 457 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 457 "type_util.m"
          {
#line 457 "type_util.m"
            check_hlds__type_util__ForeignTypeBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_21_21, (MR_Integer) 0)));
#line 458 "type_util.m"
            check_hlds__type_util__V_22_22 = (MR_Integer) 1;
#line 458 "type_util.m"
            {
#line 458 "type_util.m"
              backend_libs__foreign__have_foreign_type_for_backend_3_p_0(check_hlds__type_util__Target_8, check_hlds__type_util__ForeignTypeBody_18, &check_hlds__type_util__V_41_41);
            }
#line 458 "type_util.m"
            check_hlds__type_util__succeeded = (check_hlds__type_util__V_22_22 == check_hlds__type_util__V_41_41);
#line 457 "type_util.m"
          }
#line 462 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 460 "type_util.m"
          {
#line 460 "type_util.m"
            return check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__ForeignTypeBody_18, check_hlds__type_util__UserEqComp_6);
          }
#line 462 "type_util.m"
        else
#line 463 "type_util.m"
          {
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 4)));
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 3)));
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 5)));
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 463 "type_util.m"
            MR_Word check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 7)));

#line 463 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 463 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 463 "type_util.m"
              *check_hlds__type_util__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_23_23, (MR_Integer) 0)));
#line 463 "type_util.m"
          }
#line 462 "type_util.m"
      }
#line 465 "type_util.m"
    else
#line 465 "type_util.m"
      if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 0))))
#line 466 "type_util.m"
        {
#line 466 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_24 = (MR_Word) MR_body(((MR_Word) check_hlds__type_util__TypeBody_5), (MR_Integer) 0);

#line 467 "type_util.m"
          {
#line 467 "type_util.m"
            return check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__ForeignTypeBody_24, check_hlds__type_util__UserEqComp_6);
          }
#line 466 "type_util.m"
        }
#line 465 "type_util.m"
      else
#line 465 "type_util.m"
        if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 470 "type_util.m"
          {
#line 470 "type_util.m"
            MR_Word check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 470 "type_util.m"
            MR_Word check_hlds__type_util___SolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));

#line 470 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 470 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 470 "type_util.m"
              *check_hlds__type_util__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_20_20, (MR_Integer) 0)));
#line 470 "type_util.m"
          }
#line 465 "type_util.m"
        else
#line 465 "type_util.m"
          check_hlds__type_util__succeeded = MR_FALSE;
#line 451 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 451 "type_util.m"
  }
#line 80 "type_util.m"
}

#line 77 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(
#line 77 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 77 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 77 "type_util.m"
  MR_Word * check_hlds__type_util__UserEqComp_6)
#line 77 "type_util.m"
{
#line 447 "type_util.m"
  {
#line 447 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 447 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_7;
#line 447 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_11;
#line 447 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_15;
#line 447 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_16;

#line 431 "type_util.m"
    {
#line 431 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
    }
#line 432 "type_util.m"
    {
#line 432 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_16);
    }
#line 447 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 447 "type_util.m"
      {
#line 433 "type_util.m"
        {
#line 433 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_16, &check_hlds__type_util__TypeDefn_11);
        }
#line 447 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 447 "type_util.m"
          {
#line 441 "type_util.m"
            {
#line 441 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_7);
            }
#line 449 "type_util.m"
            {
#line 449 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeBody_7, check_hlds__type_util__UserEqComp_6);
            }
#line 447 "type_util.m"
          }
#line 447 "type_util.m"
      }
#line 447 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 447 "type_util.m"
  }
#line 77 "type_util.m"
}

#line 63 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_body_from_type_table_3_p_0(
#line 63 "type_util.m"
  MR_Word check_hlds__type_util__TypeTable_4,
#line 63 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 63 "type_util.m"
  MR_Word * check_hlds__type_util__TypeBody_6)
#line 63 "type_util.m"
{
#line 443 "type_util.m"
  {
#line 443 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 443 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_7;
#line 443 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_11;

#line 436 "type_util.m"
    {
#line 436 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_11);
    }
#line 443 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 443 "type_util.m"
      {
#line 437 "type_util.m"
        {
#line 437 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_4, check_hlds__type_util__TypeCtor_11, &check_hlds__type_util__TypeDefn_7);
        }
#line 443 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 443 "type_util.m"
          {
#line 445 "type_util.m"
            {
#line 445 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_7, check_hlds__type_util__TypeBody_6);
            }
#line 445 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 443 "type_util.m"
          }
#line 443 "type_util.m"
      }
#line 443 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 443 "type_util.m"
  }
#line 63 "type_util.m"
}

#line 61 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_body_3_p_0(
#line 61 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 61 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 61 "type_util.m"
  MR_Word * check_hlds__type_util__TypeBody_6)
#line 61 "type_util.m"
{
#line 439 "type_util.m"
  {
#line 439 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 439 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_7;
#line 439 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_11;
#line 439 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_12;

#line 431 "type_util.m"
    {
#line 431 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_11);
    }
#line 432 "type_util.m"
    {
#line 432 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_12);
    }
#line 439 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 439 "type_util.m"
      {
#line 433 "type_util.m"
        {
#line 433 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_11, check_hlds__type_util__TypeCtor_12, &check_hlds__type_util__TypeDefn_7);
        }
#line 439 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 439 "type_util.m"
          {
#line 441 "type_util.m"
            {
#line 441 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_7, check_hlds__type_util__TypeBody_6);
            }
#line 441 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 439 "type_util.m"
          }
#line 439 "type_util.m"
      }
#line 439 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 439 "type_util.m"
  }
#line 61 "type_util.m"
}

#line 58 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_from_type_table_3_p_0(
#line 58 "type_util.m"
  MR_Word check_hlds__type_util__TypeTable_4,
#line 58 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 58 "type_util.m"
  MR_Word * check_hlds__type_util__TypeDefn_6)
#line 58 "type_util.m"
{
#line 435 "type_util.m"
  {
#line 435 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 435 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;

#line 436 "type_util.m"
    {
#line 436 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 435 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 437 "type_util.m"
      {
#line 437 "type_util.m"
        return check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_4, check_hlds__type_util__TypeCtor_7, check_hlds__type_util__TypeDefn_6);
      }
#line 435 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 435 "type_util.m"
  }
#line 58 "type_util.m"
}

#line 56 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_3_p_0(
#line 56 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 56 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 56 "type_util.m"
  MR_Word * check_hlds__type_util__TypeDefn_6)
#line 56 "type_util.m"
{
#line 430 "type_util.m"
  {
#line 430 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 430 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_7;
#line 430 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_8;

#line 431 "type_util.m"
    {
#line 431 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_7);
    }
#line 432 "type_util.m"
    {
#line 432 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_8);
    }
#line 430 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 433 "type_util.m"
      {
#line 433 "type_util.m"
        return check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_7, check_hlds__type_util__TypeCtor_8, check_hlds__type_util__TypeDefn_6);
      }
#line 430 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 430 "type_util.m"
  }
#line 56 "type_util.m"
}

#line 48 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_ctor_is_atomic_2_p_0(
#line 48 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 48 "type_util.m"
  MR_Word check_hlds__type_util__TypeCtor_4)
#line 48 "type_util.m"
{
#line 404 "type_util.m"
  {
#line 404 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 404 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_5;

#line 405 "type_util.m"
    {
#line 405 "type_util.m"
      check_hlds__type_util__TypeCategory_5 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeCtor_4);
    }
#line 417 "type_util.m"
    if ((check_hlds__type_util__TypeCategory_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 417 "type_util.m"
      check_hlds__type_util__succeeded = MR_TRUE;
#line 417 "type_util.m"
    else
#line 417 "type_util.m"
      if ((check_hlds__type_util__TypeCategory_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 417 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 417 "type_util.m"
      else
#line 417 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__TypeCategory_5)) == (MR_mktag((MR_Integer) 1))))
#line 418 "type_util.m"
          check_hlds__type_util__succeeded = MR_TRUE;
#line 417 "type_util.m"
        else
#line 417 "type_util.m"
          if (((MR_tag((MR_Word) check_hlds__type_util__TypeCategory_5)) == (MR_mktag((MR_Integer) 2))))
#line 418 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 417 "type_util.m"
          else
#line 417 "type_util.m"
            if (((((MR_tag((MR_Word) check_hlds__type_util__TypeCategory_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 417 "type_util.m"
              {
#line 417 "type_util.m"
                MR_Word check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_5, (MR_Integer) 1)));

#line 10181 "check_hlds.type_util.c"
                check_hlds__type_util__succeeded = (check_hlds__type_util__V_15_15 == (MR_Integer) 0);
#line 417 "type_util.m"
              }
#line 417 "type_util.m"
            else
#line 417 "type_util.m"
              check_hlds__type_util__succeeded = MR_FALSE;
#line 404 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 404 "type_util.m"
  }
#line 48 "type_util.m"
}

#line 46 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_atomic_2_p_0(
#line 46 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 46 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 46 "type_util.m"
{
#line 400 "type_util.m"
  {
#line 400 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 400 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_5;

#line 401 "type_util.m"
    {
#line 401 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_5);
    }
#line 400 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 402 "type_util.m"
      {
#line 402 "type_util.m"
        return check_hlds__type_util__succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeCtor_5);
      }
#line 400 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 400 "type_util.m"
  }
#line 46 "type_util.m"
}

#line 40 "type_util.m"
void MR_CALL 
check_hlds__type_util__type_ctor_module_name_arity_4_p_0(
#line 40 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1,
#line 40 "type_util.m"
  MR_Word * check_hlds__type_util__ModuleName_7,
#line 40 "type_util.m"
  MR_String * check_hlds__type_util__Name_8,
#line 40 "type_util.m"
  MR_Integer * check_hlds__type_util__Arity_6)
#line 40 "type_util.m"
{
#line 394 "type_util.m"
  {
#line 394 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 394 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));

#line 394 "type_util.m"
    *check_hlds__type_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "type_util.m"
    {
#line 395 "type_util.m"
      mdbcomp__prim_data__sym_name_get_module_name_default_name_4_p_0(check_hlds__type_util__TypeSymName_5, (MR_Word) &check_hlds__type_util_scalar_common_3[0], check_hlds__type_util__ModuleName_7, check_hlds__type_util__Name_8);
#line 395 "type_util.m"
      return;
    }
#line 394 "type_util.m"
  }
#line 40 "type_util.m"
}

#line 39 "type_util.m"
MR_Integer MR_CALL 
check_hlds__type_util__type_ctor_arity_1_f_0(
#line 39 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1)
#line 39 "type_util.m"
{
#line 391 "type_util.m"
  {
#line 391 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 391 "type_util.m"
    MR_Integer check_hlds__type_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));
#line 391 "type_util.m"
    MR_Word check_hlds__type_util___TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));

#line 391 "type_util.m"
    return check_hlds__type_util__Arity_4;
#line 391 "type_util.m"
  }
#line 39 "type_util.m"
}

#line 38 "type_util.m"
MR_String MR_CALL 
check_hlds__type_util__type_ctor_name_1_f_0(
#line 38 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1)
#line 38 "type_util.m"
{
#line 388 "type_util.m"
  {
#line 388 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 388 "type_util.m"
    MR_String check_hlds__type_util__HeadVar__2_2;
#line 388 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));
#line 388 "type_util.m"
    MR_Integer check_hlds__type_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));

#line 388 "type_util.m"
    {
#line 388 "type_util.m"
      return check_hlds__type_util__HeadVar__2_2 = mdbcomp__prim_data__unqualify_name_1_f_0(check_hlds__type_util__TypeSymName_3);
    }
#line 388 "type_util.m"
    return check_hlds__type_util__HeadVar__2_2;
#line 388 "type_util.m"
  }
#line 38 "type_util.m"
}

#line 37 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__type_ctor_module_1_f_0(
#line 37 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1)
#line 37 "type_util.m"
{
#line 385 "type_util.m"
  {
#line 385 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 385 "type_util.m"
    MR_Word check_hlds__type_util__ModuleName_5;
#line 385 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));
#line 385 "type_util.m"
    MR_Integer check_hlds__type_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));

#line 386 "type_util.m"
    {
#line 386 "type_util.m"
      mdbcomp__prim_data__sym_name_get_module_name_default_3_p_0(check_hlds__type_util__TypeSymName_3, (MR_Word) &check_hlds__type_util_scalar_common_3[0], &check_hlds__type_util__ModuleName_5);
    }
#line 385 "type_util.m"
    return check_hlds__type_util__ModuleName_5;
#line 385 "type_util.m"
  }
#line 37 "type_util.m"
}

void mercury__check_hlds__type_util__init(void)
{
}

void mercury__check_hlds__type_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__type_util__check_hlds__type_util__type_ctor_info_exist_qvar_action_0);
	MR_register_type_ctor_info(&check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0);
}

void mercury__check_hlds__type_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.type_util. */
