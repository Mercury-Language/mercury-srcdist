/*
** Automatically generated from `type_util.m'
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
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.string_encoding.mih"
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
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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
#line 658 "type_util.m"
  MR_bool check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
#line 658 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5;
#line 661 "type_util.m"
  jmp_buf check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0;
#line 661 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9;
#line 661 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10;
#line 661 "type_util.m"
  MR_Box check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10;
#line 133 "type_util.m"
};


#line 208 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 211 "check_hlds.type_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 214 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 217 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 220 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 223 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 226 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 229 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 232 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0;

#line 235 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1;

#line 238 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[2];

#line 241 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[2];

#line 244 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0[2];

#line 247 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0;

#line 250 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1;

#line 253 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0[2];

#line 256 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0[2];

#line 259 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0[2];

#line 262 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
#line 265 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 267 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2);

#line 270 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
#line 273 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 275 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 277 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3);

#line 280 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
#line 283 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 285 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2);

#line 288 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
#line 291 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 293 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 295 "check_hlds.type_util.c"
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

#line 561 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__561__1_1_f_0(
#line 561 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_19);

#line 1232 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1303__1_3_p_0_1(
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1232 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1303 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1303__1_3_p_0(
#line 1303 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1303 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1303 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26);

#line 1229 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1284__1_3_p_0_1(
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1229 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1284 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1284__1_3_p_0(
#line 1284 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1284 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1284 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26);

#line 1226 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1256__1_3_p_0_1(
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1226 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1256 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1256__1_3_p_0(
#line 1256 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 1256 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1256 "type_util.m"
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

#line 925 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__925__1_2_f_0(
#line 925 "type_util.m"
  MR_Word check_hlds__type_util__Context_11,
#line 925 "type_util.m"
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

#line 1373 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
#line 1373 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1373 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1373 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1373 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
#line 1373 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16);

#line 1353 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
#line 1353 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1353 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1353 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1353 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
#line 1353 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16);

#line 1335 "type_util.m"
static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
#line 1335 "type_util.m"
  MR_Word check_hlds__type_util__TSubst_4,
#line 1335 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_5,
#line 1335 "type_util.m"
  MR_Word * check_hlds__type_util__Proof_6);

#line 970 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
#line 970 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 970 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 970 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3);

#line 955 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
#line 955 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 955 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 955 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3);

#line 668 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
#line 668 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 668 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 668 "type_util.m"
  MR_Word check_hlds__type_util__CoveredTypes_7);

#line 562 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
#line 562 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 562 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 562 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 562 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 561 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
#line 561 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 561 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 553 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
#line 553 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 553 "type_util.m"
  MR_Word check_hlds__type_util__Ctor_6,
#line 553 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15,
#line 553 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_16);

#line 536 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 536 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 516 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
#line 516 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_6,
#line 516 "type_util.m"
  MR_Word check_hlds__type_util__Type_7,
#line 516 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_8,
#line 516 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28,
#line 516 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_29);

#line 513 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
#line 513 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 513 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 513 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 513 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 509 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
#line 509 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 509 "type_util.m"
  MR_Word check_hlds__type_util__Types_6,
#line 509 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8,
#line 509 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_9);

#line 479 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
#line 479 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 479 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 479 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25,
#line 479 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);

#line 1400 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
#line 1400 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1400 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1400 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1397 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
#line 1397 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1397 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1397 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1393 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
#line 1393 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1393 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1393 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1370 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
#line 1370 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1370 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1370 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1370 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1370 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4);

#line 1350 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
#line 1350 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1350 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1350 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1350 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1350 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4);

#line 1329 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1(
#line 1329 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1329 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1329 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1313 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
#line 1313 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1313 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1313 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1303 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
#line 1303 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1303 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1303 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1232 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1232 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1293 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1293 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1284 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
#line 1284 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1284 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1284 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1229 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1229 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1270 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
#line 1270 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1270 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1270 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1256 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
#line 1256 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1256 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1256 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1226 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1226 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1232 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1232 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1229 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1229 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1226 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1226 "type_util.m"
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

#line 925 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
#line 925 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 925 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 661 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
#line 661 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 661 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
#line 661 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 661 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
#line 661 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 661 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
#line 661 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);


static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[12][2];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[8][1];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_7[10][6];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_8[2][5];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[1][8];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[2][7];


#line 733 "type_util.m"
/* sealed */ struct check_hlds__type_util__vector_common_type_4_0_s {
#line 733 "type_util.m"
  const MR_String check_hlds__type_util__vector_common_type_4_0__vct_4_f_0;
#line 733 "type_util.m"
};

static /* final */ const struct check_hlds__type_util__vector_common_type_4_0_s check_hlds__type_util_vector_common_4[4];

#line 762 "type_util.m"
/* sealed */ struct check_hlds__type_util__vector_common_type_5_0_s {
#line 762 "type_util.m"
  const MR_String check_hlds__type_util__vector_common_type_5_0__vct_5_f_0;
#line 762 "type_util.m"
  const MR_Word check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
#line 762 "type_util.m"
};

static /* final */ const struct check_hlds__type_util__vector_common_type_5_0_s check_hlds__type_util_vector_common_5[13];

#line 891 "type_util.m"
/* sealed */ struct check_hlds__type_util__vector_common_type_6_0_s {
#line 891 "type_util.m"
  const MR_Word check_hlds__type_util__vector_common_type_6_0__vct_6_f_0;
#line 891 "type_util.m"
};

static /* final */ const struct check_hlds__type_util__vector_common_type_6_0_s check_hlds__type_util_vector_common_6[4];



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
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
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
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__cons_id_arg_types_4_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
    ((MR_Box) (check_hlds__type_util__get_existq_cons_defn_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[1])),
    ((MR_Box) (check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&check_hlds__type_util_scalar_common_8[0])),
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
    ((MR_Box) ((MR_Integer) 2))
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
  /* row 5 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "{}"))
  },
};

static /* final */ const MR_Box check_hlds__type_util_scalar_common_7[10][6] = {
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_8[2][5] = {
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[1][8] = {
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[2][7] = {
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


static /* final */ const struct check_hlds__type_util__vector_common_type_4_0_s check_hlds__type_util_vector_common_4[4] = {
  /* row 0 */   {     (MR_String) "base_typeclass_info" },
  /* row 1 */   {     (MR_String) "type_ctor_info" },
  /* row 2 */   {     (MR_String) "type_info" },
  /* row 3 */   {     (MR_String) "typeclass_info" },
};

static /* final */ const struct check_hlds__type_util__vector_common_type_5_0_s check_hlds__type_util_vector_common_5[13] = {
  /* row 0 */
  {
    (MR_String) "character",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[1])
  },
  /* row 1 */
  {
    (MR_String) "float",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[2])
  },
  /* row 2 */
  {
    (MR_String) "int",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[3])
  },
  /* row 3 */
  {
    (MR_String) "string",
    (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_util_scalar_common_3[4])
  },
  /* row 4 */
  {
    (MR_String) "void",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))
  },
  /* row 5 */
  {
    (MR_String) "func",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 6 */
  {
    (MR_String) "pred",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))
  },
  /* row 7 */
  {
    (MR_String) "tuple",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))
  },
  /* row 8 */
  {
    (MR_String) "void",
    (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))
  },
  /* row 9 */
  {
    (MR_String) "base_typeclass_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[5])
  },
  /* row 10 */
  {
    (MR_String) "type_ctor_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6])
  },
  /* row 11 */
  {
    (MR_String) "type_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[7])
  },
  /* row 12 */
  {
    (MR_String) "typeclass_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[8])
  },
};

static /* final */ const struct check_hlds__type_util__vector_common_type_6_0_s check_hlds__type_util_vector_common_6[4] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 0 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
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



#line 1312 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1320 "check_hlds.type_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1328 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1337 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1346 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1354 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1362 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 1371 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1379 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0 = {
  (MR_String) "fail_on_exist_qvar",
  (MR_Integer) 0
};

#line 1385 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1 = {
  (MR_String) "abort_on_exist_qvar",
  (MR_Integer) 1
};

#line 1391 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1
};

#line 1397 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0
};

#line 1403 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1409 "check_hlds.type_util.c"
const MR_TypeCtorInfo_Struct check_hlds__type_util__check_hlds__type_util__type_ctor_info_exist_qvar_action_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_util____Unify____exist_qvar_action_0_0_10001)),
  ((MR_Box) (check_hlds__type_util____Compare____exist_qvar_action_0_0_10001)),
  (MR_String) "check_hlds.type_util",
  (MR_String) "exist_qvar_action",
  {     check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0 },
  {     check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0
};

#line 1426 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0 = {
  (MR_String) "is_dummy_type",
  (MR_Integer) 0
};

#line 1432 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1 = {
  (MR_String) "is_not_dummy_type",
  (MR_Integer) 1
};

#line 1438 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1
};

#line 1444 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1
};

#line 1450 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1456 "check_hlds.type_util.c"
const MR_TypeCtorInfo_Struct check_hlds__type_util__check_hlds__type_util__type_ctor_info_is_dummy_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__type_util____Unify____is_dummy_type_0_0_10001)),
  ((MR_Box) (check_hlds__type_util____Compare____is_dummy_type_0_0_10001)),
  (MR_String) "check_hlds.type_util",
  (MR_String) "is_dummy_type",
  {     check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0 },
  {     check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0
};

#line 1473 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
#line 1476 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1478 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2)
#line 1480 "check_hlds.type_util.c"
{
#line 1482 "check_hlds.type_util.c"
  {
#line 1484 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded;

#line 1487 "check_hlds.type_util.c"
    {
#line 1489 "check_hlds.type_util.c"
      check_hlds__type_util__succeeded = check_hlds__type_util____Unify____exist_qvar_action_0_0(((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2));
    }
#line 1492 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 1494 "check_hlds.type_util.c"
  }
#line 1496 "check_hlds.type_util.c"
}

#line 1499 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
#line 1502 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 1504 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1506 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3)
#line 1508 "check_hlds.type_util.c"
{
#line 1510 "check_hlds.type_util.c"
  {
#line 1512 "check_hlds.type_util.c"
    MR_Word check_hlds__type_util__conv0_HeadVar__1_1;

#line 1515 "check_hlds.type_util.c"
    {
#line 1517 "check_hlds.type_util.c"
      check_hlds__type_util____Compare____exist_qvar_action_0_0(&check_hlds__type_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3));
    }
#line 1520 "check_hlds.type_util.c"
    *check_hlds__type_util__wrapper_arg_1 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__1_1));
#line 1522 "check_hlds.type_util.c"
  }
#line 1524 "check_hlds.type_util.c"
}

#line 1527 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
#line 1530 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1532 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2)
#line 1534 "check_hlds.type_util.c"
{
#line 1536 "check_hlds.type_util.c"
  {
#line 1538 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded;

#line 1541 "check_hlds.type_util.c"
    {
#line 1543 "check_hlds.type_util.c"
      check_hlds__type_util__succeeded = check_hlds__type_util____Unify____is_dummy_type_0_0(((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2));
    }
#line 1546 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 1548 "check_hlds.type_util.c"
  }
#line 1550 "check_hlds.type_util.c"
}

#line 1553 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
#line 1556 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 1558 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1560 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3)
#line 1562 "check_hlds.type_util.c"
{
#line 1564 "check_hlds.type_util.c"
  {
#line 1566 "check_hlds.type_util.c"
    MR_Word check_hlds__type_util__conv0_HeadVar__1_1;

#line 1569 "check_hlds.type_util.c"
    {
#line 1571 "check_hlds.type_util.c"
      check_hlds__type_util____Compare____is_dummy_type_0_0(&check_hlds__type_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3));
    }
#line 1574 "check_hlds.type_util.c"
    *check_hlds__type_util__wrapper_arg_1 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__1_1));
#line 1576 "check_hlds.type_util.c"
  }
#line 1578 "check_hlds.type_util.c"
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

#line 561 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__561__1_1_f_0(
#line 561 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_19)
#line 561 "type_util.m"
{
#line 561 "type_util.m"
  {
#line 561 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 561 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_19, (MR_Integer) 1)));
#line 561 "type_util.m"
    MR_Word check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_19, (MR_Integer) 0)));
#line 561 "type_util.m"
    MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_19, (MR_Integer) 2)));
#line 561 "type_util.m"
    MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_19, (MR_Integer) 3)));

#line 561 "type_util.m"
    return check_hlds__type_util__HeadVar__2_20;
#line 561 "type_util.m"
  }
#line 561 "type_util.m"
}

#line 1232 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1303__1_3_p_0_1(
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1232 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1232 "type_util.m"
{
#line 1232 "type_util.m"
  {
#line 1232 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1232 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1232 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1232 "type_util.m"
  }
#line 1232 "type_util.m"
}

#line 1303 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1303__1_3_p_0(
#line 1303 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1303 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1303 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1303 "type_util.m"
{
#line 1303 "type_util.m"
  {
#line 1303 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1303 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1303 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1303 "type_util.m"
    MR_Word check_hlds__type_util__L0_15;
#line 1303 "type_util.m"
    MR_Word check_hlds__type_util__L_16;
#line 1303 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1304 "type_util.m"
    {
#line 1304 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_15);
    }
#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1303__1_3_p_0_1));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1232 "type_util.m"
    }
#line 1737 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__L0_15, &check_hlds__type_util__L_16);
    }
#line 1306 "type_util.m"
    {
#line 1306 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__L_16, check_hlds__type_util__HeadVar__3_26);
#line 1306 "type_util.m"
      return;
    }
#line 1303 "type_util.m"
  }
#line 1303 "type_util.m"
}

#line 1229 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1284__1_3_p_0_1(
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1229 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1229 "type_util.m"
{
#line 1229 "type_util.m"
  {
#line 1229 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1229 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1229 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1229 "type_util.m"
  }
#line 1229 "type_util.m"
}

#line 1284 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1284__1_3_p_0(
#line 1284 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1284 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1284 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1284 "type_util.m"
{
#line 1284 "type_util.m"
  {
#line 1284 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1284 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1284 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1284 "type_util.m"
    MR_Word check_hlds__type_util__L0_15;
#line 1284 "type_util.m"
    MR_Word check_hlds__type_util__L_16;
#line 1284 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1285 "type_util.m"
    {
#line 1285 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_15);
    }
#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1284__1_3_p_0_1));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1229 "type_util.m"
    }
#line 1831 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__L0_15, &check_hlds__type_util__L_16);
    }
#line 1287 "type_util.m"
    {
#line 1287 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__L_16, check_hlds__type_util__HeadVar__3_26);
#line 1287 "type_util.m"
      return;
    }
#line 1284 "type_util.m"
  }
#line 1284 "type_util.m"
}

#line 1226 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1256__1_3_p_0_1(
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1226 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1226 "type_util.m"
{
#line 1226 "type_util.m"
  {
#line 1226 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1226 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1226 "type_util.m"
    {
#line 1226 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1226 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1226 "type_util.m"
  }
#line 1226 "type_util.m"
}

#line 1256 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1256__1_3_p_0(
#line 1256 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 1256 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1256 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1256 "type_util.m"
{
#line 1256 "type_util.m"
  {
#line 1256 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1256 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1256 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_54;
#line 1256 "type_util.m"
    MR_Word check_hlds__type_util__L0_16;
#line 1256 "type_util.m"
    MR_Word check_hlds__type_util__L_17;
#line 1256 "type_util.m"
    MR_Word check_hlds__type_util__V_50_50;

#line 1257 "type_util.m"
    {
#line 1257 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_37_37, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_16);
    }
#line 1226 "type_util.m"
    {
#line 1226 "type_util.m"
      check_hlds__type_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
#line 1226 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1256__1_3_p_0_1));
#line 1226 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1226 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1226 "type_util.m"
    }
#line 1925 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1226 "type_util.m"
    {
#line 1226 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__V_50_50, check_hlds__type_util__L0_16, &check_hlds__type_util__L_17);
    }
#line 1259 "type_util.m"
    {
#line 1259 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_37_37, check_hlds__type_util__L_17, check_hlds__type_util__HeadVar__3_26);
#line 1259 "type_util.m"
      return;
    }
#line 1256 "type_util.m"
  }
#line 1256 "type_util.m"
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

#line 925 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__925__1_2_f_0(
#line 925 "type_util.m"
  MR_Word check_hlds__type_util__Context_11,
#line 925 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_19)
#line 925 "type_util.m"
{
#line 925 "type_util.m"
  {
#line 925 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 925 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__3_20;

#line 926 "type_util.m"
    {
#line 926 "type_util.m"
      check_hlds__type_util__HeadVar__3_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 926 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 1) = ((MR_Box) (check_hlds__type_util__HeadVar__2_19));
#line 926 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 926 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 3) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 926 "type_util.m"
    }
#line 925 "type_util.m"
    return check_hlds__type_util__HeadVar__3_20;
#line 925 "type_util.m"
  }
#line 925 "type_util.m"
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
#line 2134 "check_hlds.type_util.c"
  {
#line 2136 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded = (check_hlds__type_util__HeadVar__2_1 == check_hlds__type_util__HeadVar__2_2);

#line 2139 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 2141 "check_hlds.type_util.c"
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
#line 2187 "check_hlds.type_util.c"
  {
#line 2189 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded = (check_hlds__type_util__HeadVar__2_1 == check_hlds__type_util__HeadVar__2_2);

#line 2192 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 2194 "check_hlds.type_util.c"
  }
#line 1007 "type_util.m"
}

#line 1373 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
#line 1373 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1373 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1373 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1373 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
#line 1373 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16)
#line 1373 "type_util.m"
{
#line 1378 "type_util.m"
  {
#line 1378 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1378 "type_util.m"
    MR_Word check_hlds__type_util__Constraint_10;
#line 1378 "type_util.m"
    MR_Word check_hlds__type_util__Proof_12;

#line 1379 "type_util.m"
    {
#line 1379 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Constraint0_7, &check_hlds__type_util__Constraint_10);
    }
#line 1383 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1382 "type_util.m"
      check_hlds__type_util__Proof_12 = check_hlds__type_util__Proof0_8;
#line 1383 "type_util.m"
    else
#line 1384 "type_util.m"
      {
#line 1384 "type_util.m"
        MR_Word check_hlds__type_util__Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_8, (MR_Integer) 0)));
#line 1384 "type_util.m"
        MR_Word check_hlds__type_util__Super_14;

#line 1385 "type_util.m"
        {
#line 1385 "type_util.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Super0_13, &check_hlds__type_util__Super_14);
        }
#line 1386 "type_util.m"
        {
#line 1386 "type_util.m"
          check_hlds__type_util__Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1386 "type_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof_12, 0) = ((MR_Box) (check_hlds__type_util__Super_14));
#line 1386 "type_util.m"
        }
#line 1384 "type_util.m"
      }
#line 1388 "type_util.m"
    {
#line 1388 "type_util.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__type_util__Constraint_10)), ((MR_Box) (check_hlds__type_util__Proof_12)), check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15, check_hlds__type_util__STATE_VARIABLE_ProofMap_16);
#line 1388 "type_util.m"
      return;
    }
#line 1378 "type_util.m"
  }
#line 1373 "type_util.m"
}

#line 1353 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
#line 1353 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1353 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1353 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1353 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
#line 1353 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16)
#line 1353 "type_util.m"
{
#line 1357 "type_util.m"
  {
#line 1357 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1357 "type_util.m"
    MR_Word check_hlds__type_util__Constraint_10;
#line 1357 "type_util.m"
    MR_Word check_hlds__type_util__Proof_12;

#line 1358 "type_util.m"
    {
#line 1358 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Constraint0_7, &check_hlds__type_util__Constraint_10);
    }
#line 1362 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1361 "type_util.m"
      check_hlds__type_util__Proof_12 = check_hlds__type_util__Proof0_8;
#line 1362 "type_util.m"
    else
#line 1363 "type_util.m"
      {
#line 1363 "type_util.m"
        MR_Word check_hlds__type_util__Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_8, (MR_Integer) 0)));
#line 1363 "type_util.m"
        MR_Word check_hlds__type_util__Super_14;

#line 1364 "type_util.m"
        {
#line 1364 "type_util.m"
          parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Super0_13, &check_hlds__type_util__Super_14);
        }
#line 1365 "type_util.m"
        {
#line 1365 "type_util.m"
          check_hlds__type_util__Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1365 "type_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof_12, 0) = ((MR_Box) (check_hlds__type_util__Super_14));
#line 1365 "type_util.m"
        }
#line 1363 "type_util.m"
      }
#line 1367 "type_util.m"
    {
#line 1367 "type_util.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__type_util__Constraint_10)), ((MR_Box) (check_hlds__type_util__Proof_12)), check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15, check_hlds__type_util__STATE_VARIABLE_ProofMap_16);
#line 1367 "type_util.m"
      return;
    }
#line 1357 "type_util.m"
  }
#line 1353 "type_util.m"
}

#line 1335 "type_util.m"
static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
#line 1335 "type_util.m"
  MR_Word check_hlds__type_util__TSubst_4,
#line 1335 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_5,
#line 1335 "type_util.m"
  MR_Word * check_hlds__type_util__Proof_6)
#line 1335 "type_util.m"
{
#line 1340 "type_util.m"
  {
#line 1340 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 1340 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1341 "type_util.m"
      *check_hlds__type_util__Proof_6 = check_hlds__type_util__Proof0_5;
#line 1340 "type_util.m"
    else
#line 1343 "type_util.m"
      {
#line 1343 "type_util.m"
        MR_Word check_hlds__type_util__ClassConstraint0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_5, (MR_Integer) 0)));
#line 1343 "type_util.m"
        MR_Word check_hlds__type_util__ClassConstraint_9;

#line 1344 "type_util.m"
        {
#line 1344 "type_util.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(check_hlds__type_util__TSubst_4, check_hlds__type_util__ClassConstraint0_8, &check_hlds__type_util__ClassConstraint_9);
        }
#line 1346 "type_util.m"
        {
#line 1346 "type_util.m"
          MR_Word base;
#line 1346 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1346 "type_util.m"
          *check_hlds__type_util__Proof_6 = base;
#line 1346 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__ClassConstraint_9));
#line 1346 "type_util.m"
        }
#line 1343 "type_util.m"
      }
#line 1340 "type_util.m"
  }
#line 1335 "type_util.m"
}

#line 970 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
#line 970 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 970 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 970 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3)
#line 970 "type_util.m"
{
#line 973 "type_util.m"
  {
#line 973 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 973 "type_util.m"
    if ((check_hlds__type_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 973 "type_util.m"
      *check_hlds__type_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 973 "type_util.m"
    else
#line 974 "type_util.m"
      {
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 1)));
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__Arg_8;
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__Args_9;
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__ArgType_10;
#line 974 "type_util.m"
        MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 1)));
#line 975 "type_util.m"
        MR_Word check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 0)));
#line 975 "type_util.m"
        MR_Word check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 2)));
#line 975 "type_util.m"
        MR_Word check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 3)));
#line 976 "type_util.m"
        MR_Word check_hlds__type_util__V_15_15;
#line 976 "type_util.m"
        MR_Word check_hlds__type_util__V_17_17;
#line 976 "type_util.m"
        MR_Word check_hlds__type_util__V_18_18;
#line 976 "type_util.m"
        MR_Word check_hlds__type_util__V_16_16;

#line 975 "type_util.m"
        {
#line 975 "type_util.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__V_11_11, &check_hlds__type_util__ArgType_10);
        }
#line 976 "type_util.m"
        check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 0)));
#line 976 "type_util.m"
        check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 1)));
#line 976 "type_util.m"
        check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 2)));
#line 976 "type_util.m"
        check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 3)));
#line 976 "type_util.m"
        {
#line 976 "type_util.m"
          check_hlds__type_util__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 976 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 0) = ((MR_Box) (check_hlds__type_util__V_15_15));
#line 976 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 1) = ((MR_Box) (check_hlds__type_util__ArgType_10));
#line 976 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 2) = ((MR_Box) (check_hlds__type_util__V_17_17));
#line 976 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 3) = ((MR_Box) (check_hlds__type_util__V_18_18));
#line 976 "type_util.m"
        }
#line 977 "type_util.m"
        {
#line 977 "type_util.m"
          check_hlds__type_util__substitute_type_args_3_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Args0_7, &check_hlds__type_util__Args_9);
        }
#line 974 "type_util.m"
        {
#line 974 "type_util.m"
          MR_Word base;
#line 974 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 974 "type_util.m"
          *check_hlds__type_util__HeadVar__3_3 = base;
#line 974 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__Arg_8));
#line 974 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__type_util__Args_9));
#line 974 "type_util.m"
        }
#line 974 "type_util.m"
      }
#line 973 "type_util.m"
  }
#line 970 "type_util.m"
}

#line 955 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
#line 955 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 955 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 955 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3)
#line 955 "type_util.m"
{
#line 958 "type_util.m"
  {
#line 958 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 958 "type_util.m"
    if ((check_hlds__type_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 958 "type_util.m"
      *check_hlds__type_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 958 "type_util.m"
    else
#line 959 "type_util.m"
      {
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Ctor0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Ctors0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 1)));
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Ctor_8;
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Ctors_9;
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__ExistQVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 0)));
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 1)));
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 2)));
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 3)));
#line 959 "type_util.m"
        MR_Integer check_hlds__type_util__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 4)));
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 5)));
#line 959 "type_util.m"
        MR_Word check_hlds__type_util__Args_16;

#line 966 "type_util.m"
        {
#line 966 "type_util.m"
          check_hlds__type_util__substitute_type_args_3_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Args0_13, &check_hlds__type_util__Args_16);
        }
#line 967 "type_util.m"
        {
#line 967 "type_util.m"
          check_hlds__type_util__substitute_type_args_2_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Ctors0_7, &check_hlds__type_util__Ctors_9);
        }
#line 968 "type_util.m"
        {
#line 968 "type_util.m"
          check_hlds__type_util__Ctor_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 968 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 0) = ((MR_Box) (check_hlds__type_util__ExistQVars_10));
#line 968 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 1) = ((MR_Box) (check_hlds__type_util__Constraints_11));
#line 968 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 2) = ((MR_Box) (check_hlds__type_util__Name_12));
#line 968 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 3) = ((MR_Box) (check_hlds__type_util__Args_16));
#line 968 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 4) = ((MR_Box) (check_hlds__type_util__Arity_14));
#line 968 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 5) = ((MR_Box) (check_hlds__type_util__Ctxt_15));
#line 968 "type_util.m"
        }
#line 959 "type_util.m"
        {
#line 959 "type_util.m"
          MR_Word base;
#line 959 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 959 "type_util.m"
          *check_hlds__type_util__HeadVar__3_3 = base;
#line 959 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__Ctor_8));
#line 959 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__type_util__Ctors_9));
#line 959 "type_util.m"
        }
#line 959 "type_util.m"
      }
#line 958 "type_util.m"
  }
#line 955 "type_util.m"
}

#line 668 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
#line 668 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 668 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 668 "type_util.m"
  MR_Word check_hlds__type_util__CoveredTypes_7)
#line 668 "type_util.m"
{
#line 677 "type_util.m"
  while (MR_TRUE)
#line 677 "type_util.m"
    {
#line 677 "type_util.m"
      /* tailcall optimized into a loop */
#line 677 "type_util.m"
      {
#line 677 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;
#line 677 "type_util.m"
        MR_Word check_hlds__type_util__IsDummy_8;

#line 674 "type_util.m"
        {
#line 674 "type_util.m"
          check_hlds__type_util__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__type_util__Type_6)), check_hlds__type_util__CoveredTypes_7);
        }
#line 677 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 676 "type_util.m"
          check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 677 "type_util.m"
        else
#line 726 "type_util.m"
          {
#line 726 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_9;
#line 726 "type_util.m"
            MR_Word check_hlds__type_util__ArgTypes_10;

#line 677 "type_util.m"
            {
#line 677 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__ArgTypes_10);
            }
#line 726 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 680 "type_util.m"
              {
#line 680 "type_util.m"
                MR_Word check_hlds__type_util__IsBuiltinDummy_11;

#line 680 "type_util.m"
                {
#line 680 "type_util.m"
                  check_hlds__type_util__IsBuiltinDummy_11 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__type_util__TypeCtor_9);
                }
#line 684 "type_util.m"
#line 684 "type_util.m"
                switch (check_hlds__type_util__IsBuiltinDummy_11) {
#line 684 "type_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 684 "type_util.m"
                  case (MR_Integer) 0:
#line 683 "type_util.m"
                    check_hlds__type_util__IsDummy_8 = (MR_Integer) 0;
#line 684 "type_util.m"
                    break;
#line 684 "type_util.m"
                  case (MR_Integer) 1:
#line 685 "type_util.m"
                    {
#line 685 "type_util.m"
                      MR_Word check_hlds__type_util__TypeTable_12;
#line 722 "type_util.m"
                      MR_Word check_hlds__type_util__TypeDefn_13;

#line 686 "type_util.m"
                      {
#line 686 "type_util.m"
                        hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_12);
                      }
#line 689 "type_util.m"
                      {
#line 689 "type_util.m"
                        check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_12, check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__TypeDefn_13);
                      }
#line 722 "type_util.m"
                      if (check_hlds__type_util__succeeded)
#line 690 "type_util.m"
                        {
#line 690 "type_util.m"
                          MR_Word check_hlds__type_util__TypeBody_14;

#line 690 "type_util.m"
                          {
#line 690 "type_util.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_14);
                          }
#line 714 "type_util.m"
#line 714 "type_util.m"
                          switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_14)) {
#line 714 "type_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 714 "type_util.m"
                            case (MR_Integer) 0:
#line 720 "type_util.m"
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 714 "type_util.m"
                              break;
#line 714 "type_util.m"
                            case (MR_Integer) 1:
#line 693 "type_util.m"
                              {
#line 693 "type_util.m"
                                MR_Word check_hlds__type_util__DuTypeKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 3)));
#line 692 "type_util.m"
                                MR_Word check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 0)));
#line 692 "type_util.m"
                                MR_Word check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 1)));
#line 692 "type_util.m"
                                MR_Word check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 2)));
#line 692 "type_util.m"
                                MR_Word check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 4)));
#line 692 "type_util.m"
                                MR_Word check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 5)));
#line 692 "type_util.m"
                                MR_Word check_hlds__type_util__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 692 "type_util.m"
                                MR_Word check_hlds__type_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 692 "type_util.m"
                                MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 7)));

#line 697 "type_util.m"
#line 697 "type_util.m"
                                switch (MR_tag((MR_Word) check_hlds__type_util__DuTypeKind_18)) {
#line 697 "type_util.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 697 "type_util.m"
                                  case (MR_Integer) 0:
#line 697 "type_util.m"
#line 697 "type_util.m"
                                    switch (MR_unmkbody(check_hlds__type_util__DuTypeKind_18)) {
#line 697 "type_util.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 697 "type_util.m"
                                      case (MR_Integer) 0:
#line 697 "type_util.m"
                                      case (MR_Integer) 2:
#line 702 "type_util.m"
                                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 697 "type_util.m"
                                        break;
#line 697 "type_util.m"
                                      case (MR_Integer) 1:
#line 696 "type_util.m"
                                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 0;
#line 697 "type_util.m"
                                        break;
#line 697 "type_util.m"
                                    }
#line 697 "type_util.m"
                                    break;
#line 697 "type_util.m"
                                  case (MR_Integer) 1:
#line 702 "type_util.m"
                                    check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 697 "type_util.m"
                                    break;
#line 697 "type_util.m"
                                  case (MR_Integer) 2:
#line 705 "type_util.m"
                                    {
#line 705 "type_util.m"
                                      MR_Word check_hlds__type_util__SingleArgTypeInDefn_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 1)));
#line 705 "type_util.m"
                                      MR_Word check_hlds__type_util__TypeParams_28;
#line 705 "type_util.m"
                                      MR_Word check_hlds__type_util__Subst_29;
#line 705 "type_util.m"
                                      MR_Word check_hlds__type_util__SingleArgType_30;
#line 705 "type_util.m"
                                      MR_Word check_hlds__type_util__V_36_36;
#line 704 "type_util.m"
                                      MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 0)));
#line 704 "type_util.m"
                                      MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 2)));

#line 706 "type_util.m"
                                      {
#line 706 "type_util.m"
                                        hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeParams_28);
                                      }
#line 707 "type_util.m"
                                      {
#line 707 "type_util.m"
                                        mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_28, check_hlds__type_util__ArgTypes_10, &check_hlds__type_util__Subst_29);
                                      }
#line 709 "type_util.m"
                                      {
#line 709 "type_util.m"
                                        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subst_29, check_hlds__type_util__SingleArgTypeInDefn_26, &check_hlds__type_util__SingleArgType_30);
                                      }
#line 712 "type_util.m"
                                      {
#line 712 "type_util.m"
                                        check_hlds__type_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "type_util.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__type_util__V_36_36, 0) = ((MR_Box) (check_hlds__type_util__Type_6));
#line 712 "type_util.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__type_util__V_36_36, 1) = ((MR_Box) (check_hlds__type_util__CoveredTypes_7));
#line 712 "type_util.m"
                                      }
#line 711 "type_util.m"
                                      /* direct tailcall eliminated */
#line 711 "type_util.m"
                                      {
#line 711 "type_util.m"
                                        MR_Word check_hlds__type_util__Type__tmp_copy_6 = check_hlds__type_util__SingleArgType_30;
#line 711 "type_util.m"
                                        MR_Word check_hlds__type_util__CoveredTypes__tmp_copy_7 = check_hlds__type_util__V_36_36;

#line 711 "type_util.m"
                                        check_hlds__type_util__CoveredTypes_7 = check_hlds__type_util__CoveredTypes__tmp_copy_7;
#line 711 "type_util.m"
                                        check_hlds__type_util__Type_6 = check_hlds__type_util__Type__tmp_copy_6;
#line 711 "type_util.m"
                                      }
#line 711 "type_util.m"
                                      continue;
#line 705 "type_util.m"
                                    }
#line 697 "type_util.m"
                                    break;
#line 697 "type_util.m"
                                }
#line 693 "type_util.m"
                              }
#line 714 "type_util.m"
                              break;
#line 714 "type_util.m"
                            case (MR_Integer) 2:
#line 720 "type_util.m"
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 714 "type_util.m"
                              break;
#line 714 "type_util.m"
                            case (MR_Integer) 3:
#line 720 "type_util.m"
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 714 "type_util.m"
                              break;
#line 714 "type_util.m"
                          }
#line 690 "type_util.m"
                        }
#line 722 "type_util.m"
                      else
#line 723 "type_util.m"
                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 685 "type_util.m"
                    }
#line 684 "type_util.m"
                    break;
#line 684 "type_util.m"
                }
#line 680 "type_util.m"
              }
#line 726 "type_util.m"
            else
#line 727 "type_util.m"
              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 726 "type_util.m"
          }
#line 677 "type_util.m"
        return check_hlds__type_util__IsDummy_8;
#line 677 "type_util.m"
      }
#line 677 "type_util.m"
      break;
#line 677 "type_util.m"
    }
#line 668 "type_util.m"
}

#line 562 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
#line 562 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 562 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 562 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 562 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3)
#line 562 "type_util.m"
{
#line 562 "type_util.m"
  {
#line 562 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 562 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 562 "type_util.m"
    MR_Word check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26;

#line 562 "type_util.m"
    {
#line 562 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26);
    }
#line 562 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 562 "type_util.m"
      {
#line 562 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26));
#line 562 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 562 "type_util.m"
      }
#line 562 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 562 "type_util.m"
  }
#line 562 "type_util.m"
}

#line 561 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
#line 561 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 561 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 561 "type_util.m"
{
#line 561 "type_util.m"
  {
#line 561 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 561 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 561 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_20;

#line 561 "type_util.m"
    {
#line 561 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__561__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 561 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_20));
#line 561 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 561 "type_util.m"
  }
#line 561 "type_util.m"
}

#line 553 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
#line 553 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 553 "type_util.m"
  MR_Word check_hlds__type_util__Ctor_6,
#line 553 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15,
#line 553 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_16)
#line 553 "type_util.m"
{
#line 556 "type_util.m"
  {
#line 556 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_27_27;
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_28_28;
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 3)));
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_13;
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 0)));
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__V_18_18;
#line 556 "type_util.m"
    MR_Word check_hlds__type_util__V_21_21;
#line 558 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 1)));
#line 558 "type_util.m"
    MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 2)));
#line 558 "type_util.m"
    MR_Integer check_hlds__type_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 4)));
#line 558 "type_util.m"
    MR_Word check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 5)));
#line 562 "type_util.m"
    MR_Box check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16;

#line 558 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 556 "type_util.m"
      {
#line 3003 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 3005 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 561 "type_util.m"
        check_hlds__type_util__V_18_18 = (MR_Word) &check_hlds__type_util_scalar_common_2[7];
#line 561 "type_util.m"
        {
#line 561 "type_util.m"
          check_hlds__type_util__ArgTypes_13 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_27_27, check_hlds__type_util__TypeCtorInfo_28_28, check_hlds__type_util__V_18_18, check_hlds__type_util__Args_10);
        }
#line 3014 "check_hlds.type_util.c"
        check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
#line 562 "type_util.m"
        {
#line 562 "type_util.m"
          check_hlds__type_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 562 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[0]));
#line 562 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 1) = ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2));
#line 562 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 562 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_5));
#line 562 "type_util.m"
        }
#line 562 "type_util.m"
        {
#line 562 "type_util.m"
          check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3(check_hlds__type_util__TypeCtorInfo_28_28, check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__V_21_21, check_hlds__type_util__ArgTypes_13, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15)), &check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16);
        }
#line 562 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 562 "type_util.m"
          {
#line 562 "type_util.m"
            *check_hlds__type_util__STATE_VARIABLE_SeenTypes_16 = ((MR_Word) check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16);
#line 562 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 562 "type_util.m"
          }
#line 556 "type_util.m"
      }
#line 556 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 556 "type_util.m"
  }
#line 553 "type_util.m"
}

#line 536 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 536 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3)
#line 536 "type_util.m"
{
#line 536 "type_util.m"
  {
#line 536 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 536 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 536 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16;

#line 536 "type_util.m"
    {
#line 536 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16);
    }
#line 536 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 536 "type_util.m"
      {
#line 536 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16));
#line 536 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 536 "type_util.m"
      }
#line 536 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 536 "type_util.m"
  }
#line 536 "type_util.m"
}

#line 516 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
#line 516 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_6,
#line 516 "type_util.m"
  MR_Word check_hlds__type_util__Type_7,
#line 516 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_8,
#line 516 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28,
#line 516 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_29)
#line 516 "type_util.m"
{
#line 521 "type_util.m"
  {
#line 521 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 521 "type_util.m"
    MR_Word check_hlds__type_util__Globals_10;
#line 521 "type_util.m"
    MR_Word check_hlds__type_util__Target_11;

#line 522 "type_util.m"
    {
#line 522 "type_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_6, &check_hlds__type_util__Globals_10);
    }
#line 523 "type_util.m"
    {
#line 523 "type_util.m"
      libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_10, &check_hlds__type_util__Target_11);
    }
#line 539 "type_util.m"
#line 539 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_8)) {
#line 539 "type_util.m"
      default:
#line 539 "type_util.m"
        check_hlds__type_util__succeeded = MR_FALSE;
#line 539 "type_util.m"
        break;
#line 539 "type_util.m"
      case (MR_Integer) 0:
#line 543 "type_util.m"
        {
#line 543 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_36 = (MR_Word) MR_body(((MR_Word) check_hlds__type_util__TypeBody_8), (MR_Integer) 0);
#line 544 "type_util.m"
          MR_Word check_hlds__type_util__V_25_25;

#line 544 "type_util.m"
          {
#line 544 "type_util.m"
            check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__ForeignTypeBody_36, &check_hlds__type_util__V_25_25);
          }
#line 544 "type_util.m"
          check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 543 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 543 "type_util.m"
            {
#line 543 "type_util.m"
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 543 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 543 "type_util.m"
            }
#line 543 "type_util.m"
        }
#line 539 "type_util.m"
        break;
#line 539 "type_util.m"
      case (MR_Integer) 1:
#line 532 "type_util.m"
        {
#line 532 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_21;
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 7)));
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_32_32;
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_58_58;
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 3)));
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 4)));
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 5)));
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 527 "type_util.m"
          MR_Word check_hlds__type_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 527 "type_util.m"
          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 527 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 527 "type_util.m"
            {
#line 527 "type_util.m"
              check_hlds__type_util__ForeignTypeBody_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_31_31, (MR_Integer) 0)));
#line 528 "type_util.m"
              check_hlds__type_util__V_32_32 = (MR_Integer) 1;
#line 528 "type_util.m"
              {
#line 528 "type_util.m"
                backend_libs__foreign__have_foreign_type_for_backend_3_p_0(check_hlds__type_util__Target_11, check_hlds__type_util__ForeignTypeBody_21, &check_hlds__type_util__V_58_58);
              }
#line 528 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_32_32 == check_hlds__type_util__V_58_58);
#line 527 "type_util.m"
            }
#line 532 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 530 "type_util.m"
            {
#line 530 "type_util.m"
              MR_Word check_hlds__type_util__V_22_22;

#line 530 "type_util.m"
              {
#line 530 "type_util.m"
                check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__ForeignTypeBody_21, &check_hlds__type_util__V_22_22);
              }
#line 530 "type_util.m"
              check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 530 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 530 "type_util.m"
                {
#line 530 "type_util.m"
                  *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 530 "type_util.m"
                  check_hlds__type_util__succeeded = MR_TRUE;
#line 530 "type_util.m"
                }
#line 530 "type_util.m"
            }
#line 532 "type_util.m"
          else
#line 533 "type_util.m"
            {
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__TypeCtorInfo_56_56;
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__TypeInfo_57_57;
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__Ctors_23;
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 4)));
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_34_34;
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 3)));
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 5)));
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 533 "type_util.m"
              MR_Word check_hlds__type_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 7)));
#line 536 "type_util.m"
              MR_Box check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29;

#line 533 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 533 "type_util.m"
                {
#line 535 "type_util.m"
                  {
#line 535 "type_util.m"
                    check_hlds__type_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__Type_7, &check_hlds__type_util__Ctors_23);
                  }
#line 533 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 533 "type_util.m"
                    {
#line 3293 "check_hlds.type_util.c"
                      check_hlds__type_util__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 3295 "check_hlds.type_util.c"
                      check_hlds__type_util__TypeInfo_57_57 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
#line 536 "type_util.m"
                      {
#line 536 "type_util.m"
                        check_hlds__type_util__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "type_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[1]));
#line 536 "type_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 1) = ((MR_Box) (check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1));
#line 536 "type_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "type_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_6));
#line 536 "type_util.m"
                      }
#line 536 "type_util.m"
                      {
#line 536 "type_util.m"
                        check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3(check_hlds__type_util__TypeCtorInfo_56_56, check_hlds__type_util__TypeInfo_57_57, check_hlds__type_util__V_34_34, check_hlds__type_util__Ctors_23, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28)), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29);
                      }
#line 536 "type_util.m"
                      if (check_hlds__type_util__succeeded)
#line 536 "type_util.m"
                        {
#line 536 "type_util.m"
                          *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = ((MR_Word) check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29);
#line 536 "type_util.m"
                          check_hlds__type_util__succeeded = MR_TRUE;
#line 536 "type_util.m"
                        }
#line 533 "type_util.m"
                    }
#line 533 "type_util.m"
                }
#line 533 "type_util.m"
            }
#line 532 "type_util.m"
        }
#line 539 "type_util.m"
        break;
#line 539 "type_util.m"
      case (MR_Integer) 2:
#line 540 "type_util.m"
        {
#line 540 "type_util.m"
          MR_Word check_hlds__type_util__EqvType_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 540 "type_util.m"
          MR_Word check_hlds__type_util__V_62_62;
#line 476 "type_util.m"
          MR_Word check_hlds__type_util__V_61_61;

#line 477 "type_util.m"
          {
#line 477 "type_util.m"
            check_hlds__type_util__V_62_62 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
#line 476 "type_util.m"
          {
#line 476 "type_util.m"
            check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__EqvType_24, check_hlds__type_util__V_62_62, &check_hlds__type_util__V_61_61);
          }
#line 540 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 540 "type_util.m"
            {
#line 540 "type_util.m"
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 540 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 540 "type_util.m"
            }
#line 540 "type_util.m"
        }
#line 539 "type_util.m"
        break;
#line 539 "type_util.m"
      case (MR_Integer) 3:
#line 539 "type_util.m"
#line 539 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)))) {
#line 539 "type_util.m"
          default:
#line 539 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 539 "type_util.m"
            break;
#line 539 "type_util.m"
          case (MR_Integer) 0:
#line 547 "type_util.m"
            {
#line 547 "type_util.m"
              MR_Word check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 547 "type_util.m"
              MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));

#line 547 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 547 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 547 "type_util.m"
                {
#line 547 "type_util.m"
                  *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 547 "type_util.m"
                  check_hlds__type_util__succeeded = MR_TRUE;
#line 547 "type_util.m"
                }
#line 547 "type_util.m"
            }
#line 539 "type_util.m"
            break;
#line 539 "type_util.m"
        }
#line 539 "type_util.m"
        break;
#line 539 "type_util.m"
    }
#line 521 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 521 "type_util.m"
  }
#line 516 "type_util.m"
}

#line 513 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
#line 513 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 513 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 513 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 513 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3)
#line 513 "type_util.m"
{
#line 513 "type_util.m"
  {
#line 513 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 513 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 513 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26;

#line 513 "type_util.m"
    {
#line 513 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26);
    }
#line 513 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 513 "type_util.m"
      {
#line 513 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26));
#line 513 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 513 "type_util.m"
      }
#line 513 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 513 "type_util.m"
  }
#line 513 "type_util.m"
}

#line 509 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
#line 509 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 509 "type_util.m"
  MR_Word check_hlds__type_util__Types_6,
#line 509 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8,
#line 509 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_9)
#line 509 "type_util.m"
{
#line 512 "type_util.m"
  {
#line 512 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 512 "type_util.m"
    MR_Word check_hlds__type_util__V_10_10;
#line 513 "type_util.m"
    MR_Box check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9;

#line 513 "type_util.m"
    {
#line 513 "type_util.m"
      check_hlds__type_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 513 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[0]));
#line 513 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 1) = ((MR_Box) (check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1));
#line 513 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 513 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_5));
#line 513 "type_util.m"
    }
#line 513 "type_util.m"
    {
#line 513 "type_util.m"
      check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[4], check_hlds__type_util__V_10_10, check_hlds__type_util__Types_6, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8)), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9);
    }
#line 513 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 513 "type_util.m"
      {
#line 513 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_9 = ((MR_Word) check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9);
#line 513 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 513 "type_util.m"
      }
#line 512 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 512 "type_util.m"
  }
#line 509 "type_util.m"
}

#line 479 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
#line 479 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 479 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 479 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25,
#line 479 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_26)
#line 479 "type_util.m"
{
#line 486 "type_util.m"
  {
#line 486 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 483 "type_util.m"
    {
#line 483 "type_util.m"
      check_hlds__type_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25, ((MR_Box) (check_hlds__type_util__Type_6)));
    }
#line 486 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 486 "type_util.m"
      {
#line 486 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_26 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25;
#line 486 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 486 "type_util.m"
      }
#line 486 "type_util.m"
    else
#line 487 "type_util.m"
      {
#line 487 "type_util.m"
        MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27;

#line 487 "type_util.m"
        {
#line 487 "type_util.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__type_util__Type_6)), check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27);
        }
#line 490 "type_util.m"
#line 490 "type_util.m"
        switch (MR_tag((MR_Word) check_hlds__type_util__Type_6)) {
#line 490 "type_util.m"
          default:
#line 490 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 490 "type_util.m"
            break;
#line 490 "type_util.m"
          case (MR_Integer) 1:
#line 499 "type_util.m"
            {
#line 499 "type_util.m"
              MR_Word check_hlds__type_util__TypeBody_23;
#line 499 "type_util.m"
              MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28;
#line 499 "type_util.m"
              MR_Word check_hlds__type_util__Args_31;
#line 499 "type_util.m"
              MR_Word check_hlds__type_util__TypeDefn_37;
#line 499 "type_util.m"
              MR_Word check_hlds__type_util__TypeTable_41;
#line 499 "type_util.m"
              MR_Word check_hlds__type_util__TypeCtor_42;
#line 503 "type_util.m"
              MR_Word check_hlds__type_util__V_24_24;

#line 433 "type_util.m"
              {
#line 433 "type_util.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_41);
              }
#line 434 "type_util.m"
              {
#line 434 "type_util.m"
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_42);
              }
#line 499 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 499 "type_util.m"
                {
#line 435 "type_util.m"
                  {
#line 435 "type_util.m"
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_41, check_hlds__type_util__TypeCtor_42, &check_hlds__type_util__TypeDefn_37);
                  }
#line 499 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 499 "type_util.m"
                    {
#line 443 "type_util.m"
                      {
#line 443 "type_util.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_37, &check_hlds__type_util__TypeBody_23);
                      }
#line 501 "type_util.m"
                      {
#line 501 "type_util.m"
                        check_hlds__type_util__succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__TypeBody_23, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28);
                      }
#line 499 "type_util.m"
                      if (check_hlds__type_util__succeeded)
#line 499 "type_util.m"
                        {
#line 503 "type_util.m"
                          {
#line 503 "type_util.m"
                            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__V_24_24, &check_hlds__type_util__Args_31);
                          }
#line 504 "type_util.m"
                          {
#line 504 "type_util.m"
                            return check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_31, check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                          }
#line 499 "type_util.m"
                        }
#line 499 "type_util.m"
                    }
#line 499 "type_util.m"
                }
#line 499 "type_util.m"
            }
#line 490 "type_util.m"
            break;
#line 490 "type_util.m"
          case (MR_Integer) 2:
#line 489 "type_util.m"
            {
#line 489 "type_util.m"
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_26 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27;
#line 489 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 489 "type_util.m"
            }
#line 490 "type_util.m"
            break;
#line 490 "type_util.m"
          case (MR_Integer) 3:
#line 490 "type_util.m"
#line 490 "type_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 0)))) {
#line 490 "type_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 490 "type_util.m"
              case (MR_Integer) 0:
#line 491 "type_util.m"
                {
#line 491 "type_util.m"
                  MR_Word check_hlds__type_util__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 1)));
#line 491 "type_util.m"
                  MR_Word check_hlds__type_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 2)));

#line 492 "type_util.m"
                  {
#line 492 "type_util.m"
                    return check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_9, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                  }
#line 491 "type_util.m"
                }
#line 490 "type_util.m"
                break;
#line 490 "type_util.m"
              case (MR_Integer) 1:
#line 490 "type_util.m"
              case (MR_Integer) 2:
#line 490 "type_util.m"
              case (MR_Integer) 3:
#line 499 "type_util.m"
                {
#line 499 "type_util.m"
                  MR_Word check_hlds__type_util__TypeBody_23;
#line 499 "type_util.m"
                  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28;
#line 499 "type_util.m"
                  MR_Word check_hlds__type_util__Args_31;
#line 499 "type_util.m"
                  MR_Word check_hlds__type_util__TypeDefn_37;
#line 499 "type_util.m"
                  MR_Word check_hlds__type_util__TypeTable_41;
#line 499 "type_util.m"
                  MR_Word check_hlds__type_util__TypeCtor_42;
#line 503 "type_util.m"
                  MR_Word check_hlds__type_util__V_24_24;

#line 433 "type_util.m"
                  {
#line 433 "type_util.m"
                    hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_41);
                  }
#line 434 "type_util.m"
                  {
#line 434 "type_util.m"
                    check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_42);
                  }
#line 499 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 499 "type_util.m"
                    {
#line 435 "type_util.m"
                      {
#line 435 "type_util.m"
                        check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_41, check_hlds__type_util__TypeCtor_42, &check_hlds__type_util__TypeDefn_37);
                      }
#line 499 "type_util.m"
                      if (check_hlds__type_util__succeeded)
#line 499 "type_util.m"
                        {
#line 443 "type_util.m"
                          {
#line 443 "type_util.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_37, &check_hlds__type_util__TypeBody_23);
                          }
#line 501 "type_util.m"
                          {
#line 501 "type_util.m"
                            check_hlds__type_util__succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__TypeBody_23, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28);
                          }
#line 499 "type_util.m"
                          if (check_hlds__type_util__succeeded)
#line 499 "type_util.m"
                            {
#line 503 "type_util.m"
                              {
#line 503 "type_util.m"
                                parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__V_24_24, &check_hlds__type_util__Args_31);
                              }
#line 504 "type_util.m"
                              {
#line 504 "type_util.m"
                                return check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_31, check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                              }
#line 499 "type_util.m"
                            }
#line 499 "type_util.m"
                        }
#line 499 "type_util.m"
                    }
#line 499 "type_util.m"
                }
#line 490 "type_util.m"
                break;
#line 490 "type_util.m"
            }
#line 490 "type_util.m"
            break;
#line 490 "type_util.m"
        }
#line 487 "type_util.m"
      }
#line 486 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 486 "type_util.m"
  }
#line 479 "type_util.m"
}

#line 1400 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
#line 1400 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1400 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1400 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1400 "type_util.m"
{
#line 1400 "type_util.m"
  {
#line 1400 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1400 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1400 "type_util.m"
    {
#line 1400 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1400 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1400 "type_util.m"
  }
#line 1400 "type_util.m"
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
#line 1399 "type_util.m"
  {
#line 1399 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1399 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1399 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1400 "type_util.m"
    {
#line 1400 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1400 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[9]));
#line 1400 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1));
#line 1400 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1400 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1400 "type_util.m"
    }
#line 3848 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1400 "type_util.m"
    {
#line 1400 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1400 "type_util.m"
      return;
    }
#line 1399 "type_util.m"
  }
#line 357 "type_util.m"
}

#line 1397 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
#line 1397 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1397 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1397 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1397 "type_util.m"
{
#line 1397 "type_util.m"
  {
#line 1397 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1397 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1397 "type_util.m"
    {
#line 1397 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1397 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1397 "type_util.m"
  }
#line 1397 "type_util.m"
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
#line 1396 "type_util.m"
  {
#line 1396 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1396 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1396 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1397 "type_util.m"
    {
#line 1397 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1397 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[9]));
#line 1397 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1));
#line 1397 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1397 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1397 "type_util.m"
    }
#line 3926 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1397 "type_util.m"
    {
#line 1397 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1397 "type_util.m"
      return;
    }
#line 1396 "type_util.m"
  }
#line 354 "type_util.m"
}

#line 1393 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
#line 1393 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1393 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1393 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1393 "type_util.m"
{
#line 1393 "type_util.m"
  {
#line 1393 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1393 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1393 "type_util.m"
    {
#line 1393 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1393 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1393 "type_util.m"
  }
#line 1393 "type_util.m"
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
#line 1392 "type_util.m"
  {
#line 1392 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1392 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1392 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1393 "type_util.m"
    {
#line 1393 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[8]));
#line 1393 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1));
#line 1393 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1393 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1393 "type_util.m"
    }
#line 4004 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1393 "type_util.m"
    {
#line 1393 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1393 "type_util.m"
      return;
    }
#line 1392 "type_util.m"
  }
#line 351 "type_util.m"
}

#line 1370 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
#line 1370 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1370 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1370 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1370 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1370 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4)
#line 1370 "type_util.m"
{
#line 1370 "type_util.m"
  {
#line 1370 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1370 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16;

#line 1370 "type_util.m"
    {
#line 1370 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3), &check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16);
    }
#line 1370 "type_util.m"
    *check_hlds__type_util__wrapper_arg_4 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16));
#line 1370 "type_util.m"
  }
#line 1370 "type_util.m"
}

#line 346 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(
#line 346 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 346 "type_util.m"
  MR_Word check_hlds__type_util__ProofMap0_5,
#line 346 "type_util.m"
  MR_Word * check_hlds__type_util__ProofMap_6)
#line 346 "type_util.m"
{
#line 1369 "type_util.m"
  {
#line 1369 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1369 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_13_13;
#line 1369 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_14_14;
#line 1369 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;
#line 1369 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;
#line 1370 "type_util.m"
    MR_Box check_hlds__type_util__conv1_ProofMap_6;

#line 1370 "type_util.m"
    {
#line 1370 "type_util.m"
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1370 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[0]));
#line 1370 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1));
#line 1370 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1370 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1370 "type_util.m"
    }
#line 4092 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4094 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
#line 1371 "type_util.m"
    {
#line 1371 "type_util.m"
      check_hlds__type_util__V_8_8 = mercury__map__init_0_f_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14);
    }
#line 1370 "type_util.m"
    {
#line 1370 "type_util.m"
      mercury__map__foldl_4_p_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], check_hlds__type_util__V_7_7, check_hlds__type_util__ProofMap0_5, ((MR_Box) (check_hlds__type_util__V_8_8)), &check_hlds__type_util__conv1_ProofMap_6);
    }
#line 1370 "type_util.m"
    *check_hlds__type_util__ProofMap_6 = ((MR_Word) check_hlds__type_util__conv1_ProofMap_6);
#line 1369 "type_util.m"
  }
#line 346 "type_util.m"
}

#line 1350 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
#line 1350 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1350 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1350 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1350 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1350 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4)
#line 1350 "type_util.m"
{
#line 1350 "type_util.m"
  {
#line 1350 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1350 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16;

#line 1350 "type_util.m"
    {
#line 1350 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3), &check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16);
    }
#line 1350 "type_util.m"
    *check_hlds__type_util__wrapper_arg_4 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16));
#line 1350 "type_util.m"
  }
#line 1350 "type_util.m"
}

#line 343 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(
#line 343 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 343 "type_util.m"
  MR_Word check_hlds__type_util__ProofMap0_5,
#line 343 "type_util.m"
  MR_Word * check_hlds__type_util__ProofMap_6)
#line 343 "type_util.m"
{
#line 1349 "type_util.m"
  {
#line 1349 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1349 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_13_13;
#line 1349 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_14_14;
#line 1349 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;
#line 1349 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;
#line 1350 "type_util.m"
    MR_Box check_hlds__type_util__conv1_ProofMap_6;

#line 1350 "type_util.m"
    {
#line 1350 "type_util.m"
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1350 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[0]));
#line 1350 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1));
#line 1350 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1350 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1350 "type_util.m"
    }
#line 4187 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4189 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
#line 1351 "type_util.m"
    {
#line 1351 "type_util.m"
      check_hlds__type_util__V_8_8 = mercury__map__init_0_f_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14);
    }
#line 1350 "type_util.m"
    {
#line 1350 "type_util.m"
      mercury__map__foldl_4_p_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], check_hlds__type_util__V_7_7, check_hlds__type_util__ProofMap0_5, ((MR_Box) (check_hlds__type_util__V_8_8)), &check_hlds__type_util__conv1_ProofMap_6);
    }
#line 1350 "type_util.m"
    *check_hlds__type_util__ProofMap_6 = ((MR_Word) check_hlds__type_util__conv1_ProofMap_6);
#line 1349 "type_util.m"
  }
#line 343 "type_util.m"
}

#line 1329 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1(
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
    MR_Word check_hlds__type_util__conv0_Proof_6;

#line 1329 "type_util.m"
    {
#line 1329 "type_util.m"
      check_hlds__type_util__rename_constraint_proof_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_Proof_6);
    }
#line 1329 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_Proof_6));
#line 1329 "type_util.m"
  }
#line 1329 "type_util.m"
}

#line 340 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(
#line 340 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 340 "type_util.m"
  MR_Word check_hlds__type_util__ProofMap0_5,
#line 340 "type_util.m"
  MR_Word * check_hlds__type_util__ProofMap_6)
#line 340 "type_util.m"
{
#line 1325 "type_util.m"
  {
#line 1325 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 1322 "type_util.m"
    {
#line 1322 "type_util.m"
      check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, check_hlds__type_util__ProofMap0_5);
    }
#line 1325 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1324 "type_util.m"
      *check_hlds__type_util__ProofMap_6 = check_hlds__type_util__ProofMap0_5;
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
          mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__ProofMap0_5, &check_hlds__type_util__Keys0_7);
        }
#line 1327 "type_util.m"
        {
#line 1327 "type_util.m"
          mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__ProofMap0_5, &check_hlds__type_util__Values0_8);
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
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[7]));
#line 1329 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1));
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
          mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__Keys_9, check_hlds__type_util__Values_10, check_hlds__type_util__ProofMap_6);
#line 1330 "type_util.m"
          return;
        }
#line 1326 "type_util.m"
      }
#line 1325 "type_util.m"
  }
#line 340 "type_util.m"
}

#line 1313 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
#line 1313 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1313 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1313 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1313 "type_util.m"
{
#line 1313 "type_util.m"
  {
#line 1313 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1313 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1313 "type_util.m"
    {
#line 1313 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1313 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1313 "type_util.m"
  }
#line 1313 "type_util.m"
}

#line 1303 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
#line 1303 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1303 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1303 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1303 "type_util.m"
{
#line 1303 "type_util.m"
  {
#line 1303 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1303 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1303 "type_util.m"
    {
#line 1303 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1303__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1303 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1303 "type_util.m"
  }
#line 1303 "type_util.m"
}

#line 1232 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1232 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1232 "type_util.m"
{
#line 1232 "type_util.m"
  {
#line 1232 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1232 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1232 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1232 "type_util.m"
  }
#line 1232 "type_util.m"
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
#line 1298 "type_util.m"
  {
#line 1298 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_34_34;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_35_35;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_55;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Unproven_10;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Assumed_11;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Pred_12;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Redundant_17;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys0_18;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues0_19;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys_20;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues_21;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors_22;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__V_27_27;
#line 1298 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1232 "type_util.m"
    }
#line 4490 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
    }
#line 4497 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__V_42_42, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
    }
#line 1303 "type_util.m"
    {
#line 1303 "type_util.m"
      check_hlds__type_util__Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1303 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[5]));
#line 1303 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2));
#line 1303 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1303 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1303 "type_util.m"
    }
#line 4518 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1308 "type_util.m"
    {
#line 1308 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_12, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_17);
    }
#line 4525 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4527 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1309 "type_util.m"
    {
#line 1309 "type_util.m"
      mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_18);
    }
#line 1310 "type_util.m"
    {
#line 1310 "type_util.m"
      mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_19);
    }
#line 1311 "type_util.m"
    {
#line 1311 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__AncestorsKeys0_18, &check_hlds__type_util__AncestorsKeys_20);
    }
#line 1313 "type_util.m"
    {
#line 1313 "type_util.m"
      check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1313 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[6]));
#line 1313 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3));
#line 1313 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1313 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1313 "type_util.m"
    }
#line 1313 "type_util.m"
    {
#line 1313 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_19, &check_hlds__type_util__AncestorsValues_21);
    }
#line 1315 "type_util.m"
    {
#line 1315 "type_util.m"
      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__AncestorsKeys_20, check_hlds__type_util__AncestorsValues_21, &check_hlds__type_util__Ancestors_22);
    }
#line 1316 "type_util.m"
    {
#line 1316 "type_util.m"
      MR_Word base;
#line 1316 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1316 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1316 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1316 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1316 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_17));
#line 1316 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_22));
#line 1316 "type_util.m"
    }
#line 1298 "type_util.m"
  }
#line 335 "type_util.m"
}

#line 1293 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1293 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1293 "type_util.m"
{
#line 1293 "type_util.m"
  {
#line 1293 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1293 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1293 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1293 "type_util.m"
  }
#line 1293 "type_util.m"
}

#line 1284 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
#line 1284 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1284 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1284 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1284 "type_util.m"
{
#line 1284 "type_util.m"
  {
#line 1284 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1284 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1284 "type_util.m"
    {
#line 1284 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1284__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1284 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1284 "type_util.m"
  }
#line 1284 "type_util.m"
}

#line 1229 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1229 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1229 "type_util.m"
{
#line 1229 "type_util.m"
  {
#line 1229 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1229 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1229 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1229 "type_util.m"
  }
#line 1229 "type_util.m"
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
#line 1279 "type_util.m"
  {
#line 1279 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_34_34;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_35_35;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_55;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Unproven_10;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Assumed_11;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Pred_12;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Redundant_17;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys0_18;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues0_19;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys_20;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues_21;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors_22;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__V_27_27;
#line 1279 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_1));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1229 "type_util.m"
    }
#line 4751 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
    }
#line 4758 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__V_42_42, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
    }
#line 1284 "type_util.m"
    {
#line 1284 "type_util.m"
      check_hlds__type_util__Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1284 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[5]));
#line 1284 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_2));
#line 1284 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1284 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1284 "type_util.m"
    }
#line 4779 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1289 "type_util.m"
    {
#line 1289 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_12, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_17);
    }
#line 4786 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4788 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_18);
    }
#line 1291 "type_util.m"
    {
#line 1291 "type_util.m"
      mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_19);
    }
#line 1292 "type_util.m"
    {
#line 1292 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__AncestorsKeys0_18, &check_hlds__type_util__AncestorsKeys_20);
    }
#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[6]));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_3));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1293 "type_util.m"
    }
#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_19, &check_hlds__type_util__AncestorsValues_21);
    }
#line 1295 "type_util.m"
    {
#line 1295 "type_util.m"
      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__AncestorsKeys_20, check_hlds__type_util__AncestorsValues_21, &check_hlds__type_util__Ancestors_22);
    }
#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      MR_Word base;
#line 1296 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1296 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_17));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_22));
#line 1296 "type_util.m"
    }
#line 1279 "type_util.m"
  }
#line 332 "type_util.m"
}

#line 1270 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
#line 1270 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1270 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1270 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1270 "type_util.m"
{
#line 1270 "type_util.m"
  {
#line 1270 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1270 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1270 "type_util.m"
    {
#line 1270 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1270 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1270 "type_util.m"
  }
#line 1270 "type_util.m"
}

#line 1256 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
#line 1256 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1256 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1256 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1256 "type_util.m"
{
#line 1256 "type_util.m"
  {
#line 1256 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1256 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1256 "type_util.m"
    {
#line 1256 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1256__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1256 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1256 "type_util.m"
  }
#line 1256 "type_util.m"
}

#line 1226 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1226 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1226 "type_util.m"
{
#line 1226 "type_util.m"
  {
#line 1226 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1226 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1226 "type_util.m"
    {
#line 1226 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1226 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1226 "type_util.m"
  }
#line 1226 "type_util.m"
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
#line 1236 "type_util.m"
  {
#line 1236 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1236 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1236 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1236 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1236 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1242 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31;
#line 1242 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1242 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_33_33;
#line 1242 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_34_34;

#line 1242 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__Unproven0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1242 "type_util.m"
      {
#line 1243 "type_util.m"
        check_hlds__type_util__succeeded = (check_hlds__type_util__Assumed0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1242 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1242 "type_util.m"
          {
#line 4986 "check_hlds.type_util.c"
            check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 4988 "check_hlds.type_util.c"
            check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1244 "type_util.m"
            {
#line 1244 "type_util.m"
              check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__Redundant0_8);
            }
#line 1242 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1242 "type_util.m"
              {
#line 4999 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 5001 "check_hlds.type_util.c"
                check_hlds__type_util__TypeInfo_34_34 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1245 "type_util.m"
                {
#line 1245 "type_util.m"
                  check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_util__TypeCtorInfo_33_33, check_hlds__type_util__TypeInfo_34_34, check_hlds__type_util__Ancestors0_9);
                }
#line 1242 "type_util.m"
              }
#line 1242 "type_util.m"
          }
#line 1242 "type_util.m"
      }
#line 1248 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1248 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = check_hlds__type_util__STATE_VARIABLE_Constraints_0_23;
#line 1248 "type_util.m"
    else
#line 1250 "type_util.m"
      {
#line 1250 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_12_54;
#line 1250 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_12_63;
#line 1250 "type_util.m"
        MR_Word check_hlds__type_util__Unproven_10;
#line 1250 "type_util.m"
        MR_Word check_hlds__type_util__Assumed_11;
#line 1250 "type_util.m"
        MR_Word check_hlds__type_util__Redundant_12;
#line 1250 "type_util.m"
        MR_Word check_hlds__type_util__Ancestors_18;
#line 1250 "type_util.m"
        MR_Word check_hlds__type_util__V_50_50;

#line 1226 "type_util.m"
        {
#line 1226 "type_util.m"
          check_hlds__type_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
#line 1226 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1));
#line 1226 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1226 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1226 "type_util.m"
        }
#line 5051 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1226 "type_util.m"
        {
#line 1226 "type_util.m"
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__V_50_50, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
        }
#line 5058 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_12_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1226 "type_util.m"
        {
#line 1226 "type_util.m"
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_63, check_hlds__type_util__TypeCtorInfo_12_63, check_hlds__type_util__V_50_50, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
        }
#line 1253 "type_util.m"
        {
#line 1253 "type_util.m"
          check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__Redundant0_8);
        }
#line 1255 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1254 "type_util.m"
          check_hlds__type_util__Redundant_12 = check_hlds__type_util__Redundant0_8;
#line 1255 "type_util.m"
        else
#line 1260 "type_util.m"
          {
#line 1260 "type_util.m"
            MR_Word check_hlds__type_util__TypeInfo_38_38;
#line 1260 "type_util.m"
            MR_Word check_hlds__type_util__Pred_13;

#line 1256 "type_util.m"
            {
#line 1256 "type_util.m"
              check_hlds__type_util__Pred_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1256 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[3]));
#line 1256 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2));
#line 1256 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1256 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1256 "type_util.m"
            }
#line 5097 "check_hlds.type_util.c"
            check_hlds__type_util__TypeInfo_38_38 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1261 "type_util.m"
            {
#line 1261 "type_util.m"
              mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_38_38, check_hlds__type_util__TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_13, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_12);
            }
#line 1260 "type_util.m"
          }
#line 1263 "type_util.m"
        {
#line 1263 "type_util.m"
          check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__type_util_scalar_common_1[3], check_hlds__type_util__Ancestors0_9);
        }
#line 1265 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1264 "type_util.m"
          check_hlds__type_util__Ancestors_18 = check_hlds__type_util__Ancestors0_9;
#line 1265 "type_util.m"
        else
#line 1266 "type_util.m"
          {
#line 1266 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1266 "type_util.m"
            MR_Word check_hlds__type_util__TypeInfo_43_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1266 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsKeys0_19;
#line 1266 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsValues0_20;
#line 1266 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsKeys_21;
#line 1266 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsValues_22;
#line 1266 "type_util.m"
            MR_Word check_hlds__type_util__V_27_27;

#line 1266 "type_util.m"
            {
#line 1266 "type_util.m"
              mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_19);
            }
#line 1267 "type_util.m"
            {
#line 1267 "type_util.m"
              mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_20);
            }
#line 1268 "type_util.m"
            {
#line 1268 "type_util.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__AncestorsKeys0_19, &check_hlds__type_util__AncestorsKeys_21);
            }
#line 1270 "type_util.m"
            {
#line 1270 "type_util.m"
              check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1270 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[4]));
#line 1270 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3));
#line 1270 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1270 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1270 "type_util.m"
            }
#line 1270 "type_util.m"
            {
#line 1270 "type_util.m"
              mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_20, &check_hlds__type_util__AncestorsValues_22);
            }
#line 1272 "type_util.m"
            {
#line 1272 "type_util.m"
              mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__AncestorsKeys_21, check_hlds__type_util__AncestorsValues_22, &check_hlds__type_util__Ancestors_18);
            }
#line 1266 "type_util.m"
          }
#line 1275 "type_util.m"
        {
#line 1275 "type_util.m"
          MR_Word base;
#line 1275 "type_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1275 "type_util.m"
          *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1275 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1275 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1275 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_12));
#line 1275 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_18));
#line 1275 "type_util.m"
        }
#line 1250 "type_util.m"
      }
#line 1236 "type_util.m"
  }
#line 329 "type_util.m"
}

#line 1232 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1232 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1232 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1232 "type_util.m"
{
#line 1232 "type_util.m"
  {
#line 1232 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1232 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1232 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1232 "type_util.m"
  }
#line 1232 "type_util.m"
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
#line 1231 "type_util.m"
  {
#line 1231 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1231 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1231 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1232 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1232 "type_util.m"
    }
#line 5264 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1232 "type_util.m"
    {
#line 1232 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1232 "type_util.m"
      return;
    }
#line 1231 "type_util.m"
  }
#line 324 "type_util.m"
}

#line 1229 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1229 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1229 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1229 "type_util.m"
{
#line 1229 "type_util.m"
  {
#line 1229 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1229 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1229 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1229 "type_util.m"
  }
#line 1229 "type_util.m"
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
#line 1228 "type_util.m"
  {
#line 1228 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1228 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1228 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1229 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1229 "type_util.m"
    }
#line 5342 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1229 "type_util.m"
    {
#line 1229 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1229 "type_util.m"
      return;
    }
#line 1228 "type_util.m"
  }
#line 321 "type_util.m"
}

#line 1226 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1226 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1226 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1226 "type_util.m"
{
#line 1226 "type_util.m"
  {
#line 1226 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1226 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1226 "type_util.m"
    {
#line 1226 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1226 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1226 "type_util.m"
  }
#line 1226 "type_util.m"
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
#line 1225 "type_util.m"
  {
#line 1225 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1225 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1225 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1226 "type_util.m"
    {
#line 1226 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1226 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
#line 1226 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1));
#line 1226 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1226 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1226 "type_util.m"
    }
#line 5420 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1226 "type_util.m"
    {
#line 1226 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1226 "type_util.m"
      return;
    }
#line 1225 "type_util.m"
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
#line 1218 "type_util.m"
  {
#line 1218 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1218 "type_util.m"
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
#line 1218 "type_util.m"
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
#line 1218 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1218 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_9;

#line 1220 "type_util.m"
    {
#line 1220 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
#line 1221 "type_util.m"
    {
#line 1221 "type_util.m"
      MR_Word base;
#line 1221 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1221 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1221 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
#line 1221 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
#line 1221 "type_util.m"
    }
#line 1218 "type_util.m"
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
#line 1213 "type_util.m"
  {
#line 1213 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1213 "type_util.m"
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
#line 1213 "type_util.m"
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
#line 1213 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1213 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_9;

#line 1215 "type_util.m"
    {
#line 1215 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
#line 1216 "type_util.m"
    {
#line 1216 "type_util.m"
      MR_Word base;
#line 1216 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1216 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1216 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1216 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
#line 1216 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
#line 1216 "type_util.m"
    }
#line 1213 "type_util.m"
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
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1208 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_9;

#line 1210 "type_util.m"
    {
#line 1210 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
#line 1211 "type_util.m"
    {
#line 1211 "type_util.m"
      MR_Word base;
#line 1211 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1211 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1211 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
#line 1211 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
#line 1211 "type_util.m"
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
#line 5778 "check_hlds.type_util.c"
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

#line 402 "type_util.m"
    {
#line 402 "type_util.m"
      MR_Word check_hlds__type_util__TypeCtor_12;

#line 403 "type_util.m"
      {
#line 403 "type_util.m"
        check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_3, &check_hlds__type_util__TypeCtor_12);
      }
#line 402 "type_util.m"
      if (check_hlds__type_util__succeeded)
#line 404 "type_util.m"
        {
#line 404 "type_util.m"
          check_hlds__type_util__succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_12);
        }
#line 402 "type_util.m"
    }
#line 1163 "type_util.m"
    if (!(check_hlds__type_util__succeeded))
#line 1163 "type_util.m"
      {
#line 1164 "type_util.m"
        {
#line 1164 "type_util.m"
          MR_Word check_hlds__type_util__V_5_5;

#line 666 "type_util.m"
          {
#line 666 "type_util.m"
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
#line 6010 "check_hlds.type_util.c"
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

#line 433 "type_util.m"
            {
#line 433 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_16);
            }
#line 434 "type_util.m"
            {
#line 434 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_17);
            }
#line 1136 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1136 "type_util.m"
              {
#line 435 "type_util.m"
                {
#line 435 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_16, check_hlds__type_util__TypeCtor_17, &check_hlds__type_util__TypeDefn_12);
                }
#line 1136 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1136 "type_util.m"
                  {
#line 443 "type_util.m"
                    {
#line 443 "type_util.m"
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
#line 6209 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 6211 "check_hlds.type_util.c"
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
#line 6547 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 6549 "check_hlds.type_util.c"
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
#line 6828 "check_hlds.type_util.c"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
#line 6830 "check_hlds.type_util.c"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1071 "type_util.m"
              {
#line 1071 "type_util.m"
                mercury__map__from_corresponding_lists_3_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25);
              }
#line 6837 "check_hlds.type_util.c"
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
#line 6984 "check_hlds.type_util.c"
                  check_hlds__type_util__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 6986 "check_hlds.type_util.c"
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

#line 7174 "check_hlds.type_util.c"
                check_hlds__type_util__succeeded = (check_hlds__type_util__ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1044 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1044 "type_util.m"
                  {
#line 7180 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeInfo_39_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
#line 7182 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1046 "type_util.m"
                    {
#line 1046 "type_util.m"
                      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeInfo_39_43, check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__TypeParams_20, check_hlds__type_util__TypeArgs_16, &check_hlds__type_util__TSubst_30);
                    }
#line 7189 "check_hlds.type_util.c"
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
#line 7415 "check_hlds.type_util.c"
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
#line 981 "type_util.m"
  {
#line 981 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 981 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;
#line 983 "type_util.m"
    MR_Word check_hlds__type_util__V_15_15;
#line 983 "type_util.m"
    MR_String check_hlds__type_util__V_16_16;
#line 983 "type_util.m"
    MR_Integer check_hlds__type_util__V_17_17;

#line 982 "type_util.m"
    {
#line 982 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 981 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 981 "type_util.m"
      {
#line 983 "type_util.m"
        check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_7, (MR_Integer) 0)));
#line 983 "type_util.m"
        check_hlds__type_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_7, (MR_Integer) 1)));
#line 983 "type_util.m"
        check_hlds__type_util__succeeded = (check_hlds__type_util__V_17_17 == (MR_Integer) 0);
#line 983 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 983 "type_util.m"
          {
#line 983 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 983 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 983 "type_util.m"
              {
#line 983 "type_util.m"
                check_hlds__type_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_15_15, (MR_Integer) 0)));
#line 983 "type_util.m"
                check_hlds__type_util__succeeded = (strcmp(check_hlds__type_util__V_16_16, (MR_String) "character") == 0);
#line 983 "type_util.m"
              }
#line 983 "type_util.m"
          }
#line 988 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 984 "type_util.m"
          {
#line 984 "type_util.m"
            MR_Word check_hlds__type_util__Globals_8;
#line 984 "type_util.m"
            MR_Word check_hlds__type_util__Target_9;
#line 984 "type_util.m"
            MR_Integer check_hlds__type_util__MinChar_10;
#line 984 "type_util.m"
            MR_Integer check_hlds__type_util__MaxChar_11;
#line 984 "type_util.m"
            MR_Integer check_hlds__type_util__V_18_18;

#line 984 "type_util.m"
            {
#line 984 "type_util.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_8);
            }
#line 985 "type_util.m"
            {
#line 985 "type_util.m"
              libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_8, &check_hlds__type_util__Target_9);
            }
#line 986 "type_util.m"
            {
#line 986 "type_util.m"
              backend_libs__string_encoding__target_char_range_3_p_0(check_hlds__type_util__Target_9, &check_hlds__type_util__MinChar_10, &check_hlds__type_util__MaxChar_11);
            }
#line 987 "type_util.m"
            check_hlds__type_util__V_18_18 = (check_hlds__type_util__MaxChar_11 - check_hlds__type_util__MinChar_10);
#line 987 "type_util.m"
            *check_hlds__type_util__NumFunctors_6 = (check_hlds__type_util__V_18_18 + (MR_Integer) 1);
#line 984 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 984 "type_util.m"
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
                MR_Word check_hlds__type_util__TypeCtorInfo_29_29;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_30_30;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeTable_12;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeDefn_13;
#line 991 "type_util.m"
                MR_Word check_hlds__type_util__TypeBody_14;
#line 991 "type_util.m"
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
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_27_27;
#line 994 "type_util.m"
                MR_Word check_hlds__type_util__V_28_28;

#line 991 "type_util.m"
                {
#line 991 "type_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_12);
                }
#line 992 "type_util.m"
                {
#line 992 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_12, check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeDefn_13);
                }
#line 991 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 991 "type_util.m"
                  {
#line 993 "type_util.m"
                    {
#line 993 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_14);
                    }
#line 994 "type_util.m"
                    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
#line 994 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 994 "type_util.m"
                      {
#line 994 "type_util.m"
                        check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 0)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 1)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 2)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 3)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 4)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 5)));
#line 994 "type_util.m"
                        check_hlds__type_util__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 994 "type_util.m"
                        check_hlds__type_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 994 "type_util.m"
                        check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 7)));
#line 7643 "check_hlds.type_util.c"
                        check_hlds__type_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7645 "check_hlds.type_util.c"
                        check_hlds__type_util__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 994 "type_util.m"
                        {
#line 994 "type_util.m"
                          mercury__map__count_2_p_0(check_hlds__type_util__TypeCtorInfo_29_29, check_hlds__type_util__TypeCtorInfo_30_30, check_hlds__type_util__V_20_20, check_hlds__type_util__NumFunctors_6);
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
#line 981 "type_util.m"
      }
#line 981 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 981 "type_util.m"
  }
#line 212 "type_util.m"
}

#line 925 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
#line 925 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 925 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 925 "type_util.m"
{
#line 925 "type_util.m"
  {
#line 925 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 925 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 925 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_20;

#line 925 "type_util.m"
    {
#line 925 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__3_20 = check_hlds__type_util__IntroducedFrom__func__type_constructors__925__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 925 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_20));
#line 925 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 925 "type_util.m"
  }
#line 925 "type_util.m"
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
#line 918 "type_util.m"
  {
#line 918 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 918 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;
#line 918 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_8;

#line 919 "type_util.m"
    {
#line 919 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeArgs_8);
    }
#line 918 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 918 "type_util.m"
      {
#line 920 "type_util.m"
        {
#line 920 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_7);
        }
#line 930 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 922 "type_util.m"
          {
#line 922 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtorInfo_39_39;
#line 922 "type_util.m"
            MR_Word check_hlds__type_util__Context_11;
#line 922 "type_util.m"
            MR_Word check_hlds__type_util__CtorArgs_12;
#line 922 "type_util.m"
            MR_Word check_hlds__type_util__V_18_18;
#line 922 "type_util.m"
            MR_Word check_hlds__type_util__V_23_23;
#line 922 "type_util.m"
            MR_Integer check_hlds__type_util__V_26_26;

#line 924 "type_util.m"
            {
#line 924 "type_util.m"
              check_hlds__type_util__Context_11 = mercury__term__context_init_0_f_0();
            }
#line 7759 "check_hlds.type_util.c"
            check_hlds__type_util__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 925 "type_util.m"
            {
#line 925 "type_util.m"
              check_hlds__type_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 925 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[0]));
#line 925 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 1) = ((MR_Box) (check_hlds__type_util__type_constructors_3_p_0_1));
#line 925 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 925 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 3) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 925 "type_util.m"
            }
#line 925 "type_util.m"
            {
#line 925 "type_util.m"
              check_hlds__type_util__CtorArgs_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeCtorInfo_39_39, check_hlds__type_util__V_18_18, check_hlds__type_util__TypeArgs_8);
            }
#line 929 "type_util.m"
            {
#line 929 "type_util.m"
              check_hlds__type_util__V_26_26 = mercury__list__length_1_f_0(check_hlds__type_util__TypeCtorInfo_39_39, check_hlds__type_util__CtorArgs_12);
            }
#line 928 "type_util.m"
            {
#line 928 "type_util.m"
              check_hlds__type_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 928 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 928 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 2) = ((MR_Box) (&check_hlds__type_util_scalar_common_3[7]));
#line 928 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 3) = ((MR_Box) (check_hlds__type_util__CtorArgs_12));
#line 928 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 4) = ((MR_Box) (check_hlds__type_util__V_26_26));
#line 928 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 5) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 928 "type_util.m"
            }
#line 929 "type_util.m"
            {
#line 929 "type_util.m"
              MR_Word base;
#line 929 "type_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 929 "type_util.m"
              *check_hlds__type_util__Constructors_6 = base;
#line 929 "type_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__V_23_23));
#line 929 "type_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 929 "type_util.m"
            }
#line 922 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 922 "type_util.m"
          }
#line 930 "type_util.m"
        else
#line 931 "type_util.m"
          {
#line 931 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_14;
#line 931 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_15;
#line 931 "type_util.m"
            MR_Word check_hlds__type_util__TypeParams_16;
#line 931 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_17;
#line 931 "type_util.m"
            MR_Word check_hlds__type_util__V_28_28;
#line 935 "type_util.m"
            MR_Word check_hlds__type_util__V_30_30;
#line 935 "type_util.m"
            MR_Word check_hlds__type_util__V_31_31;
#line 935 "type_util.m"
            MR_Word check_hlds__type_util__V_32_32;
#line 935 "type_util.m"
            MR_Word check_hlds__type_util__V_33_33;
#line 935 "type_util.m"
            MR_Word check_hlds__type_util__V_34_34;
#line 935 "type_util.m"
            MR_Word check_hlds__type_util__V_35_35;
#line 935 "type_util.m"
            MR_Word check_hlds__type_util__V_36_36;
#line 935 "type_util.m"
            MR_Word check_hlds__type_util__V_37_37;

#line 931 "type_util.m"
            {
#line 931 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_14);
            }
#line 932 "type_util.m"
            {
#line 932 "type_util.m"
              check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_14, check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeDefn_15);
            }
#line 931 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 931 "type_util.m"
              {
#line 933 "type_util.m"
                {
#line 933 "type_util.m"
                  hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeParams_16);
                }
#line 934 "type_util.m"
                {
#line 934 "type_util.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_17);
                }
#line 935 "type_util.m"
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_17)) == (MR_mktag((MR_Integer) 1)));
#line 935 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 935 "type_util.m"
                  {
#line 935 "type_util.m"
                    check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 0)));
#line 935 "type_util.m"
                    check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 1)));
#line 935 "type_util.m"
                    check_hlds__type_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 2)));
#line 935 "type_util.m"
                    check_hlds__type_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 3)));
#line 935 "type_util.m"
                    check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 4)));
#line 935 "type_util.m"
                    check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 5)));
#line 935 "type_util.m"
                    check_hlds__type_util__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 935 "type_util.m"
                    check_hlds__type_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 935 "type_util.m"
                    check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 7)));
#line 947 "type_util.m"
                    if ((check_hlds__type_util__TypeParams_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 948 "type_util.m"
                      *check_hlds__type_util__Constructors_6 = check_hlds__type_util__V_28_28;
#line 947 "type_util.m"
                    else
#line 950 "type_util.m"
                      {
#line 950 "type_util.m"
                        MR_Word check_hlds__type_util__Subst_46;

#line 951 "type_util.m"
                        {
#line 951 "type_util.m"
                          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_16, check_hlds__type_util__TypeArgs_8, &check_hlds__type_util__Subst_46);
                        }
#line 952 "type_util.m"
                        {
#line 952 "type_util.m"
                          check_hlds__type_util__substitute_type_args_2_3_p_0(check_hlds__type_util__Subst_46, check_hlds__type_util__V_28_28, check_hlds__type_util__Constructors_6);
                        }
#line 950 "type_util.m"
                      }
#line 947 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 935 "type_util.m"
                  }
#line 931 "type_util.m"
              }
#line 931 "type_util.m"
          }
#line 918 "type_util.m"
      }
#line 918 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 918 "type_util.m"
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
#line 874 "type_util.m"
  {
#line 874 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 874 "type_util.m"
#line 874 "type_util.m"
    switch (check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8) {
#line 874 "type_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 874 "type_util.m"
      case (MR_Integer) 1:
#line 874 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8;
#line 874 "type_util.m"
        break;
#line 874 "type_util.m"
      case (MR_Integer) 0:
#line 878 "type_util.m"
        {
#line 878 "type_util.m"
          *check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6);
        }
#line 874 "type_util.m"
        break;
#line 874 "type_util.m"
    }
#line 874 "type_util.m"
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
#line 881 "type_util.m"
  {
#line 881 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 881 "type_util.m"
    MR_Word check_hlds__type_util__TypeMayUseAtomic_6;
#line 881 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_7;
#line 747 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_26;

#line 745 "type_util.m"
    {
#line 745 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_26);
    }
#line 747 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 746 "type_util.m"
      {
#line 746 "type_util.m"
        check_hlds__type_util__TypeCategory_7 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_26);
      }
#line 747 "type_util.m"
    else
#line 748 "type_util.m"
      check_hlds__type_util__TypeCategory_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 891 "type_util.m"
#line 891 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeCategory_7)) {
#line 891 "type_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 891 "type_util.m"
      case (MR_Integer) 0:
#line 891 "type_util.m"
#line 891 "type_util.m"
        switch (MR_unmkbody(check_hlds__type_util__TypeCategory_7)) {
#line 891 "type_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "type_util.m"
          case (MR_Integer) 0:
#line 912 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 891 "type_util.m"
            break;
#line 891 "type_util.m"
          case (MR_Integer) 1:
#line 912 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 891 "type_util.m"
            break;
#line 891 "type_util.m"
          case (MR_Integer) 2:
#line 889 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 891 "type_util.m"
            break;
#line 891 "type_util.m"
          case (MR_Integer) 3:
#line 912 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 891 "type_util.m"
            break;
#line 891 "type_util.m"
          case (MR_Integer) 4:
#line 912 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 891 "type_util.m"
            break;
#line 891 "type_util.m"
        }
#line 891 "type_util.m"
        break;
#line 891 "type_util.m"
      case (MR_Integer) 1:
#line 891 "type_util.m"
        {
#line 891 "type_util.m"
          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeCategory_7, (MR_Integer) 0)));

#line 891 "type_util.m"
#line 891 "type_util.m"
          switch (check_hlds__type_util__V_21_21) {
#line 891 "type_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 891 "type_util.m"
            case (MR_Integer) 2:
#line 890 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 891 "type_util.m"
              break;
#line 891 "type_util.m"
            case (MR_Integer) 1:
#line 892 "type_util.m"
              {
#line 892 "type_util.m"
                MR_Word check_hlds__type_util__Globals_9;
#line 892 "type_util.m"
                MR_Word check_hlds__type_util__UBF_10;

#line 893 "type_util.m"
                {
#line 893 "type_util.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_9);
                }
#line 894 "type_util.m"
                {
#line 894 "type_util.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__type_util__Globals_9, (MR_Integer) 244, &check_hlds__type_util__UBF_10);
                }
#line 898 "type_util.m"
#line 898 "type_util.m"
                switch (check_hlds__type_util__UBF_10) {
#line 898 "type_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 898 "type_util.m"
                  case (MR_Integer) 0:
#line 899 "type_util.m"
                    check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 898 "type_util.m"
                    break;
#line 898 "type_util.m"
                  case (MR_Integer) 1:
#line 896 "type_util.m"
                    check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 898 "type_util.m"
                    break;
#line 898 "type_util.m"
                }
#line 892 "type_util.m"
              }
#line 891 "type_util.m"
              break;
#line 891 "type_util.m"
            case (MR_Integer) 0:
#line 890 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 891 "type_util.m"
              break;
#line 891 "type_util.m"
            case (MR_Integer) 3:
#line 913 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 891 "type_util.m"
              break;
#line 891 "type_util.m"
          }
#line 891 "type_util.m"
        }
#line 891 "type_util.m"
        break;
#line 891 "type_util.m"
      case (MR_Integer) 2:
#line 890 "type_util.m"
        check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 891 "type_util.m"
        break;
#line 891 "type_util.m"
      case (MR_Integer) 3:
#line 891 "type_util.m"
#line 891 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_7, (MR_Integer) 0)))) {
#line 891 "type_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 891 "type_util.m"
          case (MR_Integer) 0:
#line 891 "type_util.m"
            {
#line 891 "type_util.m"
              MR_Word check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_7, (MR_Integer) 1)));

#line 891 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = ((&check_hlds__type_util_vector_common_6[0 + check_hlds__type_util__V_22_22]))->check_hlds__type_util__vector_common_type_6_0__vct_6_f_0;
#line 891 "type_util.m"
            }
#line 891 "type_util.m"
            break;
#line 891 "type_util.m"
          case (MR_Integer) 1:
#line 913 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 891 "type_util.m"
            break;
#line 891 "type_util.m"
        }
#line 891 "type_util.m"
        break;
#line 891 "type_util.m"
    }
#line 881 "type_util.m"
    return check_hlds__type_util__TypeMayUseAtomic_6;
#line 881 "type_util.m"
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
#line 840 "type_util.m"
  {
#line 840 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 840 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_4;

#line 840 "type_util.m"
#line 840 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_3)) {
#line 840 "type_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 840 "type_util.m"
      case (MR_Integer) 0:
#line 866 "type_util.m"
        {
#line 867 "type_util.m"
          check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
#line 866 "type_util.m"
        }
#line 840 "type_util.m"
        break;
#line 840 "type_util.m"
      case (MR_Integer) 1:
#line 840 "type_util.m"
        {
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__DuTypeKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 3)));
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 0)));
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 1)));
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 2)));
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 4)));
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 5)));
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 840 "type_util.m"
          MR_Word check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 7)));

#line 844 "type_util.m"
#line 844 "type_util.m"
          switch (MR_tag((MR_Word) check_hlds__type_util__DuTypeKind_8)) {
#line 844 "type_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 844 "type_util.m"
            case (MR_Integer) 0:
#line 844 "type_util.m"
#line 844 "type_util.m"
              switch (MR_unmkbody(check_hlds__type_util__DuTypeKind_8)) {
#line 844 "type_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 844 "type_util.m"
                case (MR_Integer) 0:
#line 842 "type_util.m"
                  {
#line 843 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[6]);
#line 842 "type_util.m"
                  }
#line 844 "type_util.m"
                  break;
#line 844 "type_util.m"
                case (MR_Integer) 1:
#line 848 "type_util.m"
                  {
#line 849 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 848 "type_util.m"
                  }
#line 844 "type_util.m"
                  break;
#line 844 "type_util.m"
                case (MR_Integer) 2:
#line 854 "type_util.m"
                  {
#line 855 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
#line 854 "type_util.m"
                  }
#line 844 "type_util.m"
                  break;
#line 844 "type_util.m"
              }
#line 844 "type_util.m"
              break;
#line 844 "type_util.m"
            case (MR_Integer) 1:
#line 845 "type_util.m"
              {
#line 846 "type_util.m"
                check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[5]);
#line 845 "type_util.m"
              }
#line 844 "type_util.m"
              break;
#line 844 "type_util.m"
            case (MR_Integer) 2:
#line 851 "type_util.m"
              {
#line 852 "type_util.m"
                check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[11]);
#line 851 "type_util.m"
              }
#line 844 "type_util.m"
              break;
#line 844 "type_util.m"
          }
#line 840 "type_util.m"
        }
#line 840 "type_util.m"
        break;
#line 840 "type_util.m"
      case (MR_Integer) 2:
#line 866 "type_util.m"
        {
#line 867 "type_util.m"
          check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
#line 866 "type_util.m"
        }
#line 840 "type_util.m"
        break;
#line 840 "type_util.m"
      case (MR_Integer) 3:
#line 840 "type_util.m"
#line 840 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_3, (MR_Integer) 0)))) {
#line 840 "type_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 840 "type_util.m"
          case (MR_Integer) 0:
#line 866 "type_util.m"
            {
#line 867 "type_util.m"
              check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
#line 866 "type_util.m"
            }
#line 840 "type_util.m"
            break;
#line 840 "type_util.m"
          case (MR_Integer) 1:
#line 840 "type_util.m"
            {
#line 840 "type_util.m"
              MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_3, (MR_Integer) 1)));

#line 840 "type_util.m"
#line 840 "type_util.m"
              switch (MR_tag((MR_Word) check_hlds__type_util__V_37_37)) {
#line 840 "type_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 840 "type_util.m"
                case (MR_Integer) 0:
#line 840 "type_util.m"
#line 840 "type_util.m"
                  switch (MR_unmkbody(check_hlds__type_util__V_37_37)) {
#line 840 "type_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 840 "type_util.m"
                    case (MR_Integer) 0:
#line 866 "type_util.m"
                      {
#line 867 "type_util.m"
                        check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
#line 866 "type_util.m"
                      }
#line 840 "type_util.m"
                      break;
#line 840 "type_util.m"
                    case (MR_Integer) 1:
#line 866 "type_util.m"
                      {
#line 867 "type_util.m"
                        check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
#line 866 "type_util.m"
                      }
#line 840 "type_util.m"
                      break;
#line 840 "type_util.m"
                  }
#line 840 "type_util.m"
                  break;
#line 840 "type_util.m"
                case (MR_Integer) 1:
#line 866 "type_util.m"
                  {
#line 867 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9]);
#line 866 "type_util.m"
                  }
#line 840 "type_util.m"
                  break;
#line 840 "type_util.m"
              }
#line 840 "type_util.m"
            }
#line 840 "type_util.m"
            break;
#line 840 "type_util.m"
        }
#line 840 "type_util.m"
        break;
#line 840 "type_util.m"
    }
#line 840 "type_util.m"
    return check_hlds__type_util__TypeCategory_4;
#line 840 "type_util.m"
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
#line 751 "type_util.m"
  {
#line 751 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 751 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_6;
#line 751 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_5, (MR_Integer) 0)));
#line 751 "type_util.m"
    MR_Integer check_hlds__type_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_5, (MR_Integer) 1)));
#line 777 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategoryPrime_10;
#line 757 "type_util.m"
    MR_String check_hlds__type_util__TypeName_9;
#line 762 "type_util.m"
    MR_Integer check_hlds__type_util__lo_0;
#line 762 "type_util.m"
    MR_Integer check_hlds__type_util__hi_1;
#line 762 "type_util.m"
    MR_Integer check_hlds__type_util__mid_2;
#line 762 "type_util.m"
    MR_Integer check_hlds__type_util__result_3;

#line 758 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 757 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 757 "type_util.m"
      {
#line 757 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 0)));
#line 757 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 757 "type_util.m"
          {
#line 757 "type_util.m"
            check_hlds__type_util__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 762 "type_util.m"
            /* binary string simple lookup switch */
#line 762 "type_util.m"
            check_hlds__type_util__lo_0 = (MR_Integer) 0;
#line 762 "type_util.m"
            check_hlds__type_util__hi_1 = (MR_Integer) 4;
#line 762 "type_util.m"
            do
#line 762 "type_util.m"
              {
#line 762 "type_util.m"
                check_hlds__type_util__mid_2 = (((check_hlds__type_util__lo_0 + check_hlds__type_util__hi_1)) / (MR_Integer) 2);
#line 762 "type_util.m"
                check_hlds__type_util__result_3 = MR_strcmp(check_hlds__type_util__TypeName_9, ((&check_hlds__type_util_vector_common_5[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
#line 762 "type_util.m"
                if ((check_hlds__type_util__result_3 == (MR_Integer) 0))
#line 762 "type_util.m"
                  {
#line 762 "type_util.m"
                    check_hlds__type_util__TypeCategoryPrime_10 = ((&check_hlds__type_util_vector_common_5[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
#line 762 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 762 "type_util.m"
                    /* jump out of search loop */
#line 762 "type_util.m"
                    goto label_0;
#line 762 "type_util.m"
                  }
#line 762 "type_util.m"
                else
#line 762 "type_util.m"
                if ((check_hlds__type_util__result_3 < (MR_Integer) 0))
#line 762 "type_util.m"
                  check_hlds__type_util__hi_1 = (check_hlds__type_util__mid_2 - (MR_Integer) 1);
#line 762 "type_util.m"
                else
#line 762 "type_util.m"
                  check_hlds__type_util__lo_0 = (check_hlds__type_util__mid_2 + (MR_Integer) 1);
#line 762 "type_util.m"
              }
#line 762 "type_util.m"
            while ((check_hlds__type_util__lo_0 <= check_hlds__type_util__hi_1));
#line 762 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 762 "type_util.m"
          label_0:;
#line 757 "type_util.m"
          }
#line 757 "type_util.m"
      }
#line 777 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 776 "type_util.m"
      check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_10;
#line 777 "type_util.m"
    else
#line 796 "type_util.m"
      {
#line 796 "type_util.m"
        MR_Word check_hlds__type_util__TypeCategoryPrime_34;
#line 778 "type_util.m"
        MR_Word check_hlds__type_util__ModuleSymName_11;
#line 778 "type_util.m"
        MR_String check_hlds__type_util__TypeName_27;
#line 778 "type_util.m"
        MR_Word check_hlds__type_util__V_35_35;
#line 784 "type_util.m"
        MR_Integer check_hlds__type_util__lo_4;
#line 784 "type_util.m"
        MR_Integer check_hlds__type_util__hi_5;
#line 784 "type_util.m"
        MR_Integer check_hlds__type_util__mid_6;
#line 784 "type_util.m"
        MR_Integer check_hlds__type_util__result_7;

#line 778 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
#line 778 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 778 "type_util.m"
          {
#line 778 "type_util.m"
            check_hlds__type_util__ModuleSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 778 "type_util.m"
            check_hlds__type_util__TypeName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 1)));
#line 779 "type_util.m"
            {
#line 779 "type_util.m"
              check_hlds__type_util__V_35_35 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 779 "type_util.m"
            {
#line 779 "type_util.m"
              check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__ModuleSymName_11, check_hlds__type_util__V_35_35);
            }
#line 778 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 778 "type_util.m"
              {
#line 780 "type_util.m"
                check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 778 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 778 "type_util.m"
                  {
#line 784 "type_util.m"
                    /* binary string simple lookup switch */
#line 784 "type_util.m"
                    check_hlds__type_util__lo_4 = (MR_Integer) 0;
#line 784 "type_util.m"
                    check_hlds__type_util__hi_5 = (MR_Integer) 3;
#line 784 "type_util.m"
                    do
#line 784 "type_util.m"
                      {
#line 784 "type_util.m"
                        check_hlds__type_util__mid_6 = (((check_hlds__type_util__lo_4 + check_hlds__type_util__hi_5)) / (MR_Integer) 2);
#line 784 "type_util.m"
                        check_hlds__type_util__result_7 = MR_strcmp(check_hlds__type_util__TypeName_27, ((&check_hlds__type_util_vector_common_5[5 + check_hlds__type_util__mid_6]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
#line 784 "type_util.m"
                        if ((check_hlds__type_util__result_7 == (MR_Integer) 0))
#line 784 "type_util.m"
                          {
#line 784 "type_util.m"
                            check_hlds__type_util__TypeCategoryPrime_34 = ((&check_hlds__type_util_vector_common_5[5 + check_hlds__type_util__mid_6]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
#line 784 "type_util.m"
                            check_hlds__type_util__succeeded = MR_TRUE;
#line 784 "type_util.m"
                            /* jump out of search loop */
#line 784 "type_util.m"
                            goto label_1;
#line 784 "type_util.m"
                          }
#line 784 "type_util.m"
                        else
#line 784 "type_util.m"
                        if ((check_hlds__type_util__result_7 < (MR_Integer) 0))
#line 784 "type_util.m"
                          check_hlds__type_util__hi_5 = (check_hlds__type_util__mid_6 - (MR_Integer) 1);
#line 784 "type_util.m"
                        else
#line 784 "type_util.m"
                          check_hlds__type_util__lo_4 = (check_hlds__type_util__mid_6 + (MR_Integer) 1);
#line 784 "type_util.m"
                      }
#line 784 "type_util.m"
                    while ((check_hlds__type_util__lo_4 <= check_hlds__type_util__hi_5));
#line 784 "type_util.m"
                    check_hlds__type_util__succeeded = MR_FALSE;
#line 784 "type_util.m"
                  label_1:;
#line 778 "type_util.m"
                  }
#line 778 "type_util.m"
              }
#line 778 "type_util.m"
          }
#line 796 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 795 "type_util.m"
          check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_34;
#line 796 "type_util.m"
        else
#line 815 "type_util.m"
          {
#line 815 "type_util.m"
            MR_Word check_hlds__type_util__TypeCategoryPrime_31;
#line 797 "type_util.m"
            MR_String check_hlds__type_util__TypeName_28;
#line 797 "type_util.m"
            MR_Word check_hlds__type_util__ModuleSymName_29;
#line 797 "type_util.m"
            MR_Word check_hlds__type_util__V_36_36;
#line 803 "type_util.m"
            MR_Integer check_hlds__type_util__lo_8;
#line 803 "type_util.m"
            MR_Integer check_hlds__type_util__hi_9;
#line 803 "type_util.m"
            MR_Integer check_hlds__type_util__mid_10;
#line 803 "type_util.m"
            MR_Integer check_hlds__type_util__result_11;

#line 797 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
#line 797 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 797 "type_util.m"
              {
#line 797 "type_util.m"
                check_hlds__type_util__ModuleSymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 797 "type_util.m"
                check_hlds__type_util__TypeName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 1)));
#line 798 "type_util.m"
                {
#line 798 "type_util.m"
                  check_hlds__type_util__V_36_36 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
#line 798 "type_util.m"
                {
#line 798 "type_util.m"
                  check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__ModuleSymName_29, check_hlds__type_util__V_36_36);
                }
#line 797 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 797 "type_util.m"
                  {
#line 799 "type_util.m"
                    check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 797 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 797 "type_util.m"
                      {
#line 803 "type_util.m"
                        /* binary string simple lookup switch */
#line 803 "type_util.m"
                        check_hlds__type_util__lo_8 = (MR_Integer) 0;
#line 803 "type_util.m"
                        check_hlds__type_util__hi_9 = (MR_Integer) 3;
#line 803 "type_util.m"
                        do
#line 803 "type_util.m"
                          {
#line 803 "type_util.m"
                            check_hlds__type_util__mid_10 = (((check_hlds__type_util__lo_8 + check_hlds__type_util__hi_9)) / (MR_Integer) 2);
#line 803 "type_util.m"
                            check_hlds__type_util__result_11 = MR_strcmp(check_hlds__type_util__TypeName_28, ((&check_hlds__type_util_vector_common_5[9 + check_hlds__type_util__mid_10]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
#line 803 "type_util.m"
                            if ((check_hlds__type_util__result_11 == (MR_Integer) 0))
#line 803 "type_util.m"
                              {
#line 803 "type_util.m"
                                check_hlds__type_util__TypeCategoryPrime_31 = ((&check_hlds__type_util_vector_common_5[9 + check_hlds__type_util__mid_10]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
#line 803 "type_util.m"
                                check_hlds__type_util__succeeded = MR_TRUE;
#line 803 "type_util.m"
                                /* jump out of search loop */
#line 803 "type_util.m"
                                goto label_2;
#line 803 "type_util.m"
                              }
#line 803 "type_util.m"
                            else
#line 803 "type_util.m"
                            if ((check_hlds__type_util__result_11 < (MR_Integer) 0))
#line 803 "type_util.m"
                              check_hlds__type_util__hi_9 = (check_hlds__type_util__mid_10 - (MR_Integer) 1);
#line 803 "type_util.m"
                            else
#line 803 "type_util.m"
                              check_hlds__type_util__lo_8 = (check_hlds__type_util__mid_10 + (MR_Integer) 1);
#line 803 "type_util.m"
                          }
#line 803 "type_util.m"
                        while ((check_hlds__type_util__lo_8 <= check_hlds__type_util__hi_9));
#line 803 "type_util.m"
                        check_hlds__type_util__succeeded = MR_FALSE;
#line 803 "type_util.m"
                      label_2:;
#line 797 "type_util.m"
                      }
#line 797 "type_util.m"
                  }
#line 797 "type_util.m"
              }
#line 815 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 814 "type_util.m"
              check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_31;
#line 815 "type_util.m"
            else
#line 819 "type_util.m"
              {
#line 816 "type_util.m"
                MR_Word check_hlds__type_util__V_26_26;

#line 816 "type_util.m"
                {
#line 816 "type_util.m"
                  check_hlds__type_util__V_26_26 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__type_util__TypeCtor_5);
                }
#line 816 "type_util.m"
                check_hlds__type_util__succeeded = (check_hlds__type_util__V_26_26 == (MR_Integer) 0);
#line 819 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 818 "type_util.m"
                  check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 819 "type_util.m"
                else
#line 823 "type_util.m"
                  {
#line 820 "type_util.m"
                    MR_Word check_hlds__type_util__V_12_12;
#line 820 "type_util.m"
                    MR_Word check_hlds__type_util__V_13_13;

#line 820 "type_util.m"
                    {
#line 820 "type_util.m"
                      check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(check_hlds__type_util__TypeCtor_5, &check_hlds__type_util__V_12_12, &check_hlds__type_util__V_13_13);
                    }
#line 823 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 822 "type_util.m"
                      check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 823 "type_util.m"
                    else
#line 827 "type_util.m"
                      {
#line 824 "type_util.m"
                        {
#line 824 "type_util.m"
                          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_5);
                        }
#line 827 "type_util.m"
                        if (check_hlds__type_util__succeeded)
#line 826 "type_util.m"
                          check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 827 "type_util.m"
                        else
#line 828 "type_util.m"
                          {
#line 828 "type_util.m"
                            MR_Word check_hlds__type_util__TypeTable_15;
#line 828 "type_util.m"
                            MR_Word check_hlds__type_util__TypeDefn_16;
#line 828 "type_util.m"
                            MR_Word check_hlds__type_util__TypeBody_17;

#line 828 "type_util.m"
                            {
#line 828 "type_util.m"
                              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
                            }
#line 829 "type_util.m"
                            {
#line 829 "type_util.m"
                              hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_5, &check_hlds__type_util__TypeDefn_16);
                            }
#line 830 "type_util.m"
                            {
#line 830 "type_util.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_16, &check_hlds__type_util__TypeBody_17);
                            }
#line 831 "type_util.m"
                            {
#line 831 "type_util.m"
                              return check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__classify_type_defn_body_1_f_0(check_hlds__type_util__TypeBody_17);
                            }
#line 828 "type_util.m"
                          }
#line 827 "type_util.m"
                      }
#line 823 "type_util.m"
                  }
#line 819 "type_util.m"
              }
#line 815 "type_util.m"
          }
#line 796 "type_util.m"
      }
#line 751 "type_util.m"
    return check_hlds__type_util__TypeCategory_6;
#line 751 "type_util.m"
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
#line 747 "type_util.m"
  {
#line 747 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 747 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_6;
#line 747 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;

#line 745 "type_util.m"
    {
#line 745 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 747 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 746 "type_util.m"
      {
#line 746 "type_util.m"
        return check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_7);
      }
#line 747 "type_util.m"
    else
#line 748 "type_util.m"
      check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 747 "type_util.m"
    return check_hlds__type_util__TypeCategory_6;
#line 747 "type_util.m"
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
#line 730 "type_util.m"
  {
#line 730 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 730 "type_util.m"
    MR_String check_hlds__type_util__Name_5;
#line 730 "type_util.m"
    MR_Word check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Type_3, (MR_Integer) 0)));
#line 730 "type_util.m"
    MR_Word check_hlds__type_util__V_19_19;
#line 730 "type_util.m"
    MR_Integer check_hlds__type_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Type_3, (MR_Integer) 1)));
#line 730 "type_util.m"
    MR_Word check_hlds__type_util__V_22_22;
#line 733 "type_util.m"
    MR_Integer check_hlds__type_util__lo_0;
#line 733 "type_util.m"
    MR_Integer check_hlds__type_util__hi_1;
#line 733 "type_util.m"
    MR_Integer check_hlds__type_util__mid_2;
#line 733 "type_util.m"
    MR_Integer check_hlds__type_util__result_3;

#line 731 "type_util.m"
    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 731 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 731 "type_util.m"
      {
#line 731 "type_util.m"
        check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_18_18, (MR_Integer) 0)));
#line 731 "type_util.m"
        check_hlds__type_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_18_18, (MR_Integer) 1)));
#line 731 "type_util.m"
        {
#line 731 "type_util.m"
          check_hlds__type_util__V_22_22 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 731 "type_util.m"
        {
#line 731 "type_util.m"
          check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__V_19_19, check_hlds__type_util__V_22_22);
        }
#line 730 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 730 "type_util.m"
          {
#line 731 "type_util.m"
            check_hlds__type_util__succeeded = (check_hlds__type_util__V_20_20 == (MR_Integer) 0);
#line 730 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 730 "type_util.m"
              {
#line 733 "type_util.m"
                /* binary string simple lookup switch */
#line 733 "type_util.m"
                check_hlds__type_util__lo_0 = (MR_Integer) 0;
#line 733 "type_util.m"
                check_hlds__type_util__hi_1 = (MR_Integer) 3;
#line 733 "type_util.m"
                do
#line 733 "type_util.m"
                  {
#line 733 "type_util.m"
                    check_hlds__type_util__mid_2 = (((check_hlds__type_util__lo_0 + check_hlds__type_util__hi_1)) / (MR_Integer) 2);
#line 733 "type_util.m"
                    check_hlds__type_util__result_3 = MR_strcmp(check_hlds__type_util__Name_5, ((&check_hlds__type_util_vector_common_4[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_0);
#line 733 "type_util.m"
                    if ((check_hlds__type_util__result_3 == (MR_Integer) 0))
#line 733 "type_util.m"
                      {
#line 733 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 733 "type_util.m"
                        /* jump out of search loop */
#line 733 "type_util.m"
                        goto label_0;
#line 733 "type_util.m"
                      }
#line 733 "type_util.m"
                    else
#line 733 "type_util.m"
                    if ((check_hlds__type_util__result_3 < (MR_Integer) 0))
#line 733 "type_util.m"
                      check_hlds__type_util__hi_1 = (check_hlds__type_util__mid_2 - (MR_Integer) 1);
#line 733 "type_util.m"
                    else
#line 733 "type_util.m"
                      check_hlds__type_util__lo_0 = (check_hlds__type_util__mid_2 + (MR_Integer) 1);
#line 733 "type_util.m"
                  }
#line 733 "type_util.m"
                while ((check_hlds__type_util__lo_0 <= check_hlds__type_util__hi_1));
#line 733 "type_util.m"
                check_hlds__type_util__succeeded = MR_FALSE;
#line 733 "type_util.m"
              label_0:;
#line 730 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 730 "type_util.m"
                  {
#line 738 "type_util.m"
#line 738 "type_util.m"
                    switch (MR_tag((MR_Word) check_hlds__type_util__Body_4)) {
#line 738 "type_util.m"
                      default:
#line 738 "type_util.m"
                        check_hlds__type_util__succeeded = MR_FALSE;
#line 738 "type_util.m"
                        break;
#line 738 "type_util.m"
                      case (MR_Integer) 0:
#line 738 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 738 "type_util.m"
                        break;
#line 738 "type_util.m"
                      case (MR_Integer) 1:
#line 737 "type_util.m"
                        {
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 7)));
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 0)));
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 1)));
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 2)));
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 3)));
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 4)));
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 5)));
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 737 "type_util.m"
                          MR_Word check_hlds__type_util__V_14_14;

#line 737 "type_util.m"
                          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 737 "type_util.m"
                          if (check_hlds__type_util__succeeded)
#line 737 "type_util.m"
                            check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_21_21, (MR_Integer) 0)));
#line 737 "type_util.m"
                        }
#line 738 "type_util.m"
                        break;
#line 738 "type_util.m"
                      case (MR_Integer) 3:
#line 738 "type_util.m"
#line 738 "type_util.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Body_4, (MR_Integer) 0)))) {
#line 738 "type_util.m"
                          default:
#line 738 "type_util.m"
                            check_hlds__type_util__succeeded = MR_FALSE;
#line 738 "type_util.m"
                            break;
#line 738 "type_util.m"
                          case (MR_Integer) 0:
#line 739 "type_util.m"
                            check_hlds__type_util__succeeded = MR_TRUE;
#line 738 "type_util.m"
                            break;
#line 738 "type_util.m"
                        }
#line 738 "type_util.m"
                        break;
#line 738 "type_util.m"
                    }
#line 737 "type_util.m"
                    check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 730 "type_util.m"
                  }
#line 730 "type_util.m"
              }
#line 730 "type_util.m"
          }
#line 731 "type_util.m"
      }
#line 730 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 730 "type_util.m"
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
#line 665 "type_util.m"
  {
#line 665 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 665 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__3_3;

#line 666 "type_util.m"
    {
#line 666 "type_util.m"
      return check_hlds__type_util__HeadVar__3_3 = check_hlds__type_util__check_dummy_type_2_3_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__Type_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 665 "type_util.m"
    return check_hlds__type_util__HeadVar__3_3;
#line 665 "type_util.m"
  }
#line 159 "type_util.m"
}

#line 661 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
#line 661 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 661 "type_util.m"
{
#line 661 "type_util.m"
  {
#line 661 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 661 "type_util.m"
    MR_builtin_longjmp((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0, 1);
#line 661 "type_util.m"
  }
#line 661 "type_util.m"
}

#line 661 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
#line 661 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 661 "type_util.m"
{
#line 661 "type_util.m"
  {
#line 661 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 661 "type_util.m"
    (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10 = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10);
#line 661 "type_util.m"
    {
#line 661 "type_util.m"
      check_hlds__type_util__type_is_existq_type_2_p_0_2(check_hlds__type_util__env_ptr);
#line 661 "type_util.m"
      return;
    }
#line 661 "type_util.m"
  }
#line 661 "type_util.m"
}

#line 661 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
#line 661 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 661 "type_util.m"
{
#line 661 "type_util.m"
  {
#line 661 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 661 "type_util.m"
    {
#line 662 "type_util.m"
      MR_Word check_hlds__type_util__V_11_11;
#line 662 "type_util.m"
      MR_Word check_hlds__type_util__V_12_12;
#line 662 "type_util.m"
      MR_Word check_hlds__type_util__V_13_13;
#line 662 "type_util.m"
      MR_Integer check_hlds__type_util__V_14_14;
#line 662 "type_util.m"
      MR_Word check_hlds__type_util__V_15_15;
#line 662 "type_util.m"
      MR_Word check_hlds__type_util__V_7_7;
#line 662 "type_util.m"
      MR_Word check_hlds__type_util__V_8_8;

#line 662 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 0)));
#line 662 "type_util.m"
      check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 1)));
#line 662 "type_util.m"
      check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 2)));
#line 662 "type_util.m"
      check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 3)));
#line 662 "type_util.m"
      check_hlds__type_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 4)));
#line 662 "type_util.m"
      check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 5)));
#line 662 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 662 "type_util.m"
      if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
#line 662 "type_util.m"
        {
#line 662 "type_util.m"
          {
#line 662 "type_util.m"
            check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9, (MR_Integer) 0)));
#line 662 "type_util.m"
            check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9, (MR_Integer) 1)));
#line 662 "type_util.m"
          }
#line 662 "type_util.m"
          {
#line 662 "type_util.m"
            check_hlds__type_util__type_is_existq_type_2_p_0_1(check_hlds__type_util__env_ptr);
#line 662 "type_util.m"
            return;
          }
#line 662 "type_util.m"
        }
#line 661 "type_util.m"
    }
#line 661 "type_util.m"
  }
#line 661 "type_util.m"
}

#line 661 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
#line 661 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 661 "type_util.m"
{
#line 661 "type_util.m"
  {
#line 661 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 661 "type_util.m"
    if (MR_builtin_setjmp((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0) == 0)
#line 661 "type_util.m"
      {
#line 661 "type_util.m"
        {
#line 661 "type_util.m"
          {
#line 661 "type_util.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10, (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5, check_hlds__type_util__type_is_existq_type_2_p_0_3, check_hlds__type_util__env_ptr);
          }
#line 661 "type_util.m"
        }
#line 661 "type_util.m"
        (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_FALSE;
#line 661 "type_util.m"
      }
#line 661 "type_util.m"
    else
#line 661 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_TRUE;
#line 661 "type_util.m"
  }
#line 661 "type_util.m"
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

#line 659 "type_util.m"
    {
#line 659 "type_util.m"
      (check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, &(check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5);
    }
#line 658 "type_util.m"
    if ((check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
#line 661 "type_util.m"
      {
#line 661 "type_util.m"
        check_hlds__type_util__type_is_existq_type_2_p_0_4(&check_hlds__type_util__env);
      }
#line 658 "type_util.m"
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
#line 650 "type_util.m"
  while (MR_TRUE)
#line 650 "type_util.m"
    {
#line 650 "type_util.m"
      /* tailcall optimized into a loop */
#line 650 "type_util.m"
      {
#line 650 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 650 "type_util.m"
#line 650 "type_util.m"
        switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) {
#line 650 "type_util.m"
          default:
#line 650 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 650 "type_util.m"
            break;
#line 650 "type_util.m"
          case (MR_Integer) 2:
#line 654 "type_util.m"
            {
#line 654 "type_util.m"
              MR_Word check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)));
#line 654 "type_util.m"
              MR_Word check_hlds__type_util__TypeBody_11;
#line 654 "type_util.m"
              MR_Word check_hlds__type_util__TypeDefn_15;
#line 654 "type_util.m"
              MR_Word check_hlds__type_util__TypeCtor_19;

#line 438 "type_util.m"
              {
#line 438 "type_util.m"
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__TypeCtor_19);
              }
#line 654 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 654 "type_util.m"
                {
#line 439 "type_util.m"
                  {
#line 439 "type_util.m"
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeCtor_19, &check_hlds__type_util__TypeDefn_15);
                  }
#line 654 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 654 "type_util.m"
                    {
#line 447 "type_util.m"
                      {
#line 447 "type_util.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_11);
                      }
#line 636 "type_util.m"
                      /* direct tailcall eliminated */
#line 636 "type_util.m"
                      {
#line 636 "type_util.m"
                        MR_Word check_hlds__type_util__TypeBody__tmp_copy_4 = check_hlds__type_util__TypeBody_11;

#line 636 "type_util.m"
                        check_hlds__type_util__TypeBody_4 = check_hlds__type_util__TypeBody__tmp_copy_4;
#line 636 "type_util.m"
                      }
#line 636 "type_util.m"
                      continue;
#line 654 "type_util.m"
                    }
#line 654 "type_util.m"
                }
#line 654 "type_util.m"
            }
#line 650 "type_util.m"
            break;
#line 650 "type_util.m"
          case (MR_Integer) 3:
#line 650 "type_util.m"
#line 650 "type_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) {
#line 650 "type_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 650 "type_util.m"
              case (MR_Integer) 0:
#line 650 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 650 "type_util.m"
                break;
#line 650 "type_util.m"
              case (MR_Integer) 1:
#line 652 "type_util.m"
                {
#line 652 "type_util.m"
                  MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 1)));

#line 652 "type_util.m"
                  check_hlds__type_util__succeeded = (check_hlds__type_util__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 652 "type_util.m"
                }
#line 650 "type_util.m"
                break;
#line 650 "type_util.m"
            }
#line 650 "type_util.m"
            break;
#line 650 "type_util.m"
        }
#line 650 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 650 "type_util.m"
      }
#line 650 "type_util.m"
      break;
#line 650 "type_util.m"
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
#line 640 "type_util.m"
  while (MR_TRUE)
#line 640 "type_util.m"
    {
#line 640 "type_util.m"
      /* tailcall optimized into a loop */
#line 640 "type_util.m"
      {
#line 640 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 640 "type_util.m"
#line 640 "type_util.m"
        switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) {
#line 640 "type_util.m"
          default:
#line 640 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 640 "type_util.m"
            break;
#line 640 "type_util.m"
          case (MR_Integer) 2:
#line 644 "type_util.m"
            {
#line 644 "type_util.m"
              MR_Word check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)));
#line 644 "type_util.m"
              MR_Word check_hlds__type_util__TypeBody_11;
#line 644 "type_util.m"
              MR_Word check_hlds__type_util__TypeDefn_15;
#line 644 "type_util.m"
              MR_Word check_hlds__type_util__TypeTable_19;
#line 644 "type_util.m"
              MR_Word check_hlds__type_util__TypeCtor_20;

#line 433 "type_util.m"
              {
#line 433 "type_util.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_19);
              }
#line 434 "type_util.m"
              {
#line 434 "type_util.m"
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__TypeCtor_20);
              }
#line 644 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 644 "type_util.m"
                {
#line 435 "type_util.m"
                  {
#line 435 "type_util.m"
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_19, check_hlds__type_util__TypeCtor_20, &check_hlds__type_util__TypeDefn_15);
                  }
#line 644 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 644 "type_util.m"
                    {
#line 443 "type_util.m"
                      {
#line 443 "type_util.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_11);
                      }
#line 631 "type_util.m"
                      /* direct tailcall eliminated */
#line 631 "type_util.m"
                      {
#line 631 "type_util.m"
                        MR_Word check_hlds__type_util__TypeBody__tmp_copy_4 = check_hlds__type_util__TypeBody_11;

#line 631 "type_util.m"
                        check_hlds__type_util__TypeBody_4 = check_hlds__type_util__TypeBody__tmp_copy_4;
#line 631 "type_util.m"
                      }
#line 631 "type_util.m"
                      continue;
#line 644 "type_util.m"
                    }
#line 644 "type_util.m"
                }
#line 644 "type_util.m"
            }
#line 640 "type_util.m"
            break;
#line 640 "type_util.m"
          case (MR_Integer) 3:
#line 640 "type_util.m"
#line 640 "type_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) {
#line 640 "type_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 640 "type_util.m"
              case (MR_Integer) 0:
#line 640 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 640 "type_util.m"
                break;
#line 640 "type_util.m"
              case (MR_Integer) 1:
#line 642 "type_util.m"
                {
#line 642 "type_util.m"
                  MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 1)));

#line 642 "type_util.m"
                  check_hlds__type_util__succeeded = (check_hlds__type_util__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 642 "type_util.m"
                }
#line 640 "type_util.m"
                break;
#line 640 "type_util.m"
            }
#line 640 "type_util.m"
            break;
#line 640 "type_util.m"
        }
#line 640 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 640 "type_util.m"
      }
#line 640 "type_util.m"
      break;
#line 640 "type_util.m"
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
#line 633 "type_util.m"
  {
#line 633 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 633 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 633 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_9;
#line 633 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_13;

#line 438 "type_util.m"
    {
#line 438 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_13);
    }
#line 633 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 633 "type_util.m"
      {
#line 439 "type_util.m"
        {
#line 439 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeCtor_13, &check_hlds__type_util__TypeDefn_9);
        }
#line 633 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 633 "type_util.m"
          {
#line 447 "type_util.m"
            {
#line 447 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_9, &check_hlds__type_util__TypeBody_5);
            }
#line 636 "type_util.m"
            {
#line 636 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeBody_5);
            }
#line 633 "type_util.m"
          }
#line 633 "type_util.m"
      }
#line 633 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 633 "type_util.m"
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
#line 619 "type_util.m"
  {
#line 619 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 619 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 619 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_9;
#line 619 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_13;
#line 619 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_14;

#line 433 "type_util.m"
    {
#line 433 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_13);
    }
#line 434 "type_util.m"
    {
#line 434 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_14);
    }
#line 619 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 619 "type_util.m"
      {
#line 435 "type_util.m"
        {
#line 435 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_13, check_hlds__type_util__TypeCtor_14, &check_hlds__type_util__TypeDefn_9);
        }
#line 619 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 619 "type_util.m"
          {
#line 443 "type_util.m"
            {
#line 443 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_9, &check_hlds__type_util__TypeBody_5);
            }
#line 631 "type_util.m"
            {
#line 631 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_is_solver_type_2_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeBody_5);
            }
#line 619 "type_util.m"
          }
#line 619 "type_util.m"
      }
#line 619 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 619 "type_util.m"
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
#line 569 "type_util.m"
  {
#line 569 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__ActualType_8;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__SolverTypeDetails_9;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__V_12_12;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_20;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_24;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_25;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_29;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_33;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_37;
#line 569 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_38;
#line 589 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;
#line 589 "type_util.m"
    MR_Word check_hlds__type_util__V_14_14;
#line 589 "type_util.m"
    MR_Word check_hlds__type_util__V_15_15;
#line 589 "type_util.m"
    MR_Word check_hlds__type_util__V_16_16;
#line 589 "type_util.m"
    MR_Word check_hlds__type_util__V_10_10;

#line 433 "type_util.m"
    {
#line 433 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_24);
    }
#line 434 "type_util.m"
    {
#line 434 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_25);
    }
#line 569 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 569 "type_util.m"
      {
#line 435 "type_util.m"
        {
#line 435 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_24, check_hlds__type_util__TypeCtor_25, &check_hlds__type_util__TypeDefn_20);
        }
#line 569 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 569 "type_util.m"
          {
#line 443 "type_util.m"
            {
#line 443 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_20, &check_hlds__type_util__TypeBody_5);
            }
#line 574 "type_util.m"
            if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 2))))
#line 586 "type_util.m"
              {
#line 586 "type_util.m"
                check_hlds__type_util__ActualType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 586 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 586 "type_util.m"
              }
#line 574 "type_util.m"
            else
#line 574 "type_util.m"
            if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 573 "type_util.m"
              {
#line 573 "type_util.m"
                check_hlds__type_util__ActualType_8 = check_hlds__type_util__Type_4;
#line 573 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 573 "type_util.m"
              }
#line 574 "type_util.m"
            else
#line 574 "type_util.m"
              check_hlds__type_util__succeeded = MR_FALSE;
#line 569 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 569 "type_util.m"
              {
#line 433 "type_util.m"
                {
#line 433 "type_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_37);
                }
#line 434 "type_util.m"
                {
#line 434 "type_util.m"
                  check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__ActualType_8, &check_hlds__type_util__TypeCtor_38);
                }
#line 569 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 569 "type_util.m"
                  {
#line 435 "type_util.m"
                    {
#line 435 "type_util.m"
                      check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_37, check_hlds__type_util__TypeCtor_38, &check_hlds__type_util__TypeDefn_33);
                    }
#line 569 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 569 "type_util.m"
                      {
#line 443 "type_util.m"
                        {
#line 443 "type_util.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_33, &check_hlds__type_util__TypeBody_29);
                        }
#line 608 "type_util.m"
                        {
#line 608 "type_util.m"
                          check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_solver_type_details_3_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeBody_29, &check_hlds__type_util__SolverTypeDetails_9);
                        }
#line 569 "type_util.m"
                        if (check_hlds__type_util__succeeded)
#line 569 "type_util.m"
                          {
#line 589 "type_util.m"
                            check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 0)));
#line 589 "type_util.m"
                            check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 1)));
#line 589 "type_util.m"
                            check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 2)));
#line 589 "type_util.m"
                            check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 3)));
#line 589 "type_util.m"
                            check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 4)));
#line 589 "type_util.m"
                            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 589 "type_util.m"
                            if (check_hlds__type_util__succeeded)
#line 589 "type_util.m"
                              check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_12_12, (MR_Integer) 0)));
#line 569 "type_util.m"
                          }
#line 569 "type_util.m"
                      }
#line 569 "type_util.m"
                  }
#line 569 "type_util.m"
              }
#line 569 "type_util.m"
          }
#line 569 "type_util.m"
      }
#line 569 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 569 "type_util.m"
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
#line 613 "type_util.m"
  while (MR_TRUE)
#line 613 "type_util.m"
    {
#line 613 "type_util.m"
      /* tailcall optimized into a loop */
#line 613 "type_util.m"
      {
#line 613 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 613 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__Type_5)) == (MR_mktag((MR_Integer) 2))))
#line 615 "type_util.m"
          {
#line 615 "type_util.m"
            MR_Word check_hlds__type_util__EqvType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__Type_5, (MR_Integer) 0)));
#line 615 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_12;
#line 615 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_16;
#line 615 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_20;
#line 615 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_21;

#line 433 "type_util.m"
            {
#line 433 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_20);
            }
#line 434 "type_util.m"
            {
#line 434 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__EqvType_8, &check_hlds__type_util__TypeCtor_21);
            }
#line 615 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 615 "type_util.m"
              {
#line 435 "type_util.m"
                {
#line 435 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_20, check_hlds__type_util__TypeCtor_21, &check_hlds__type_util__TypeDefn_16);
                }
#line 615 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 615 "type_util.m"
                  {
#line 443 "type_util.m"
                    {
#line 443 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_16, &check_hlds__type_util__TypeBody_12);
                    }
#line 608 "type_util.m"
                    /* direct tailcall eliminated */
#line 608 "type_util.m"
                    {
#line 608 "type_util.m"
                      MR_Word check_hlds__type_util__Type__tmp_copy_5 = check_hlds__type_util__TypeBody_12;

#line 608 "type_util.m"
                      check_hlds__type_util__Type_5 = check_hlds__type_util__Type__tmp_copy_5;
#line 608 "type_util.m"
                    }
#line 608 "type_util.m"
                    continue;
#line 615 "type_util.m"
                  }
#line 615 "type_util.m"
              }
#line 615 "type_util.m"
          }
#line 613 "type_util.m"
        else
#line 613 "type_util.m"
        if (((((MR_tag((MR_Word) check_hlds__type_util__Type_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 613 "type_util.m"
          {
#line 613 "type_util.m"
            MR_Word check_hlds__type_util___MaybeUserEqComp_7;

#line 613 "type_util.m"
            *check_hlds__type_util__SolverTypeDetails_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 1)));
#line 613 "type_util.m"
            check_hlds__type_util___MaybeUserEqComp_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 2)));
#line 613 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 613 "type_util.m"
          }
#line 613 "type_util.m"
        else
#line 613 "type_util.m"
          check_hlds__type_util__succeeded = MR_FALSE;
#line 613 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 613 "type_util.m"
      }
#line 613 "type_util.m"
      break;
#line 613 "type_util.m"
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
#line 606 "type_util.m"
  {
#line 606 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 606 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_7;
#line 606 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_11;
#line 606 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_15;
#line 606 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_16;

#line 433 "type_util.m"
    {
#line 433 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
    }
#line 434 "type_util.m"
    {
#line 434 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_16);
    }
#line 606 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 606 "type_util.m"
      {
#line 435 "type_util.m"
        {
#line 435 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_16, &check_hlds__type_util__TypeDefn_11);
        }
#line 606 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 606 "type_util.m"
          {
#line 443 "type_util.m"
            {
#line 443 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_7);
            }
#line 608 "type_util.m"
            {
#line 608 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_solver_type_details_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeBody_7, check_hlds__type_util__SolverTypeDetails_6);
            }
#line 606 "type_util.m"
          }
#line 606 "type_util.m"
      }
#line 606 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 606 "type_util.m"
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
#line 593 "type_util.m"
  while (MR_TRUE)
#line 593 "type_util.m"
    {
#line 593 "type_util.m"
      /* tailcall optimized into a loop */
#line 593 "type_util.m"
      {
#line 593 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 593 "type_util.m"
        {
#line 593 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(check_hlds__type_util__Type_4);
        }
#line 593 "type_util.m"
        if (!(check_hlds__type_util__succeeded))
#line 595 "type_util.m"
          {
#line 595 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_5;
#line 595 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_13;
#line 595 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_17;
#line 595 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_18;

#line 433 "type_util.m"
            {
#line 433 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_17);
            }
#line 434 "type_util.m"
            {
#line 434 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_18);
            }
#line 595 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 595 "type_util.m"
              {
#line 435 "type_util.m"
                {
#line 435 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_17, check_hlds__type_util__TypeCtor_18, &check_hlds__type_util__TypeDefn_13);
                }
#line 595 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 595 "type_util.m"
                  {
#line 443 "type_util.m"
                    {
#line 443 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_5);
                    }
#line 598 "type_util.m"
#line 598 "type_util.m"
                    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) {
#line 598 "type_util.m"
                      default:
#line 598 "type_util.m"
                        check_hlds__type_util__succeeded = MR_FALSE;
#line 598 "type_util.m"
                        break;
#line 598 "type_util.m"
                      case (MR_Integer) 2:
#line 601 "type_util.m"
                        {
#line 601 "type_util.m"
                          MR_Word check_hlds__type_util__EqvType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));

#line 602 "type_util.m"
                          /* direct tailcall eliminated */
#line 602 "type_util.m"
                          {
#line 602 "type_util.m"
                            MR_Word check_hlds__type_util__Type__tmp_copy_4 = check_hlds__type_util__EqvType_8;

#line 602 "type_util.m"
                            check_hlds__type_util__Type_4 = check_hlds__type_util__Type__tmp_copy_4;
#line 602 "type_util.m"
                          }
#line 602 "type_util.m"
                          continue;
#line 601 "type_util.m"
                        }
#line 598 "type_util.m"
                        break;
#line 598 "type_util.m"
                      case (MR_Integer) 3:
#line 598 "type_util.m"
#line 598 "type_util.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) {
#line 598 "type_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 598 "type_util.m"
                          case (MR_Integer) 0:
#line 597 "type_util.m"
                            check_hlds__type_util__succeeded = MR_TRUE;
#line 598 "type_util.m"
                            break;
#line 598 "type_util.m"
                          case (MR_Integer) 1:
#line 599 "type_util.m"
                            {
#line 599 "type_util.m"
                              MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));

#line 599 "type_util.m"
                              check_hlds__type_util__succeeded = (check_hlds__type_util__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 599 "type_util.m"
                            }
#line 598 "type_util.m"
                            break;
#line 598 "type_util.m"
                        }
#line 598 "type_util.m"
                        break;
#line 598 "type_util.m"
                    }
#line 595 "type_util.m"
                  }
#line 595 "type_util.m"
              }
#line 595 "type_util.m"
          }
#line 593 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 593 "type_util.m"
      }
#line 593 "type_util.m"
      break;
#line 593 "type_util.m"
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
#line 565 "type_util.m"
  {
#line 565 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 565 "type_util.m"
    MR_Word check_hlds__type_util__VarType_7;

#line 566 "type_util.m"
    {
#line 566 "type_util.m"
      parse_tree__prog_data__lookup_var_type_3_p_0(check_hlds__type_util__VarTypes_5, check_hlds__type_util__Var_6, &check_hlds__type_util__VarType_7);
    }
#line 567 "type_util.m"
    {
#line 567 "type_util.m"
      return check_hlds__type_util__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__VarType_7);
    }
#line 565 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 565 "type_util.m"
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
#line 475 "type_util.m"
  {
#line 475 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 475 "type_util.m"
    MR_Word check_hlds__type_util__V_6_6;
#line 476 "type_util.m"
    MR_Word check_hlds__type_util__V_5_5;

#line 477 "type_util.m"
    {
#line 477 "type_util.m"
      check_hlds__type_util__V_6_6 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    }
#line 476 "type_util.m"
    {
#line 476 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, check_hlds__type_util__V_6_6, &check_hlds__type_util__V_5_5);
    }
#line 475 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 475 "type_util.m"
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
#line 453 "type_util.m"
  {
#line 453 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 453 "type_util.m"
    MR_Word check_hlds__type_util__Globals_7;
#line 453 "type_util.m"
    MR_Word check_hlds__type_util__Target_8;

#line 454 "type_util.m"
    {
#line 454 "type_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_7);
    }
#line 455 "type_util.m"
    {
#line 455 "type_util.m"
      libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_7, &check_hlds__type_util__Target_8);
    }
#line 467 "type_util.m"
#line 467 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) {
#line 467 "type_util.m"
      default:
#line 467 "type_util.m"
        check_hlds__type_util__succeeded = MR_FALSE;
#line 467 "type_util.m"
        break;
#line 467 "type_util.m"
      case (MR_Integer) 0:
#line 468 "type_util.m"
        {
#line 468 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_24 = (MR_Word) MR_body(((MR_Word) check_hlds__type_util__TypeBody_5), (MR_Integer) 0);

#line 469 "type_util.m"
          {
#line 469 "type_util.m"
            return check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__ForeignTypeBody_24, check_hlds__type_util__UserEqComp_6);
          }
#line 468 "type_util.m"
        }
#line 467 "type_util.m"
        break;
#line 467 "type_util.m"
      case (MR_Integer) 1:
#line 464 "type_util.m"
        {
#line 464 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_18;
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 7)));
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_22_22;
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_41_41;
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 3)));
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 4)));
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 5)));
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 459 "type_util.m"
          MR_Word check_hlds__type_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 459 "type_util.m"
          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 459 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 459 "type_util.m"
            {
#line 459 "type_util.m"
              check_hlds__type_util__ForeignTypeBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_21_21, (MR_Integer) 0)));
#line 460 "type_util.m"
              check_hlds__type_util__V_22_22 = (MR_Integer) 1;
#line 460 "type_util.m"
              {
#line 460 "type_util.m"
                backend_libs__foreign__have_foreign_type_for_backend_3_p_0(check_hlds__type_util__Target_8, check_hlds__type_util__ForeignTypeBody_18, &check_hlds__type_util__V_41_41);
              }
#line 460 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_22_22 == check_hlds__type_util__V_41_41);
#line 459 "type_util.m"
            }
#line 464 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 462 "type_util.m"
            {
#line 462 "type_util.m"
              return check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__ForeignTypeBody_18, check_hlds__type_util__UserEqComp_6);
            }
#line 464 "type_util.m"
          else
#line 465 "type_util.m"
            {
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 4)));
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 3)));
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 5)));
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 465 "type_util.m"
              MR_Word check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 7)));

#line 465 "type_util.m"
              check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 465 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 465 "type_util.m"
                *check_hlds__type_util__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_23_23, (MR_Integer) 0)));
#line 465 "type_util.m"
            }
#line 464 "type_util.m"
        }
#line 467 "type_util.m"
        break;
#line 467 "type_util.m"
      case (MR_Integer) 3:
#line 467 "type_util.m"
#line 467 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) {
#line 467 "type_util.m"
          default:
#line 467 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 467 "type_util.m"
            break;
#line 467 "type_util.m"
          case (MR_Integer) 0:
#line 472 "type_util.m"
            {
#line 472 "type_util.m"
              MR_Word check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 472 "type_util.m"
              MR_Word check_hlds__type_util___SolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));

#line 472 "type_util.m"
              check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 472 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 472 "type_util.m"
                *check_hlds__type_util__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_20_20, (MR_Integer) 0)));
#line 472 "type_util.m"
            }
#line 467 "type_util.m"
            break;
#line 467 "type_util.m"
        }
#line 467 "type_util.m"
        break;
#line 467 "type_util.m"
    }
#line 453 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 453 "type_util.m"
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
#line 449 "type_util.m"
  {
#line 449 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 449 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_7;
#line 449 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_11;
#line 449 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_15;
#line 449 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_16;

#line 433 "type_util.m"
    {
#line 433 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
    }
#line 434 "type_util.m"
    {
#line 434 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_16);
    }
#line 449 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 449 "type_util.m"
      {
#line 435 "type_util.m"
        {
#line 435 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_16, &check_hlds__type_util__TypeDefn_11);
        }
#line 449 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 449 "type_util.m"
          {
#line 443 "type_util.m"
            {
#line 443 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_7);
            }
#line 451 "type_util.m"
            {
#line 451 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeBody_7, check_hlds__type_util__UserEqComp_6);
            }
#line 449 "type_util.m"
          }
#line 449 "type_util.m"
      }
#line 449 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 449 "type_util.m"
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
#line 445 "type_util.m"
  {
#line 445 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 445 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_7;
#line 445 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_11;

#line 438 "type_util.m"
    {
#line 438 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_11);
    }
#line 445 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 445 "type_util.m"
      {
#line 439 "type_util.m"
        {
#line 439 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_4, check_hlds__type_util__TypeCtor_11, &check_hlds__type_util__TypeDefn_7);
        }
#line 445 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 445 "type_util.m"
          {
#line 447 "type_util.m"
            {
#line 447 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_7, check_hlds__type_util__TypeBody_6);
            }
#line 447 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 445 "type_util.m"
          }
#line 445 "type_util.m"
      }
#line 445 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 445 "type_util.m"
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
#line 441 "type_util.m"
  {
#line 441 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 441 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_7;
#line 441 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_11;
#line 441 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_12;

#line 433 "type_util.m"
    {
#line 433 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_11);
    }
#line 434 "type_util.m"
    {
#line 434 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_12);
    }
#line 441 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 441 "type_util.m"
      {
#line 435 "type_util.m"
        {
#line 435 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_11, check_hlds__type_util__TypeCtor_12, &check_hlds__type_util__TypeDefn_7);
        }
#line 441 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 441 "type_util.m"
          {
#line 443 "type_util.m"
            {
#line 443 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_7, check_hlds__type_util__TypeBody_6);
            }
#line 443 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 441 "type_util.m"
          }
#line 441 "type_util.m"
      }
#line 441 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 441 "type_util.m"
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
#line 437 "type_util.m"
  {
#line 437 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 437 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;

#line 438 "type_util.m"
    {
#line 438 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 437 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 439 "type_util.m"
      {
#line 439 "type_util.m"
        return check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_4, check_hlds__type_util__TypeCtor_7, check_hlds__type_util__TypeDefn_6);
      }
#line 437 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 437 "type_util.m"
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
#line 432 "type_util.m"
  {
#line 432 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 432 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_7;
#line 432 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_8;

#line 433 "type_util.m"
    {
#line 433 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_7);
    }
#line 434 "type_util.m"
    {
#line 434 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_8);
    }
#line 432 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 435 "type_util.m"
      {
#line 435 "type_util.m"
        return check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_7, check_hlds__type_util__TypeCtor_8, check_hlds__type_util__TypeDefn_6);
      }
#line 432 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 432 "type_util.m"
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
#line 406 "type_util.m"
  {
#line 406 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 406 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_5;

#line 407 "type_util.m"
    {
#line 407 "type_util.m"
      check_hlds__type_util__TypeCategory_5 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeCtor_4);
    }
#line 419 "type_util.m"
#line 419 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeCategory_5)) {
#line 419 "type_util.m"
      default:
#line 419 "type_util.m"
        check_hlds__type_util__succeeded = MR_FALSE;
#line 419 "type_util.m"
        break;
#line 419 "type_util.m"
      case (MR_Integer) 0:
#line 419 "type_util.m"
#line 419 "type_util.m"
        switch (MR_unmkbody(check_hlds__type_util__TypeCategory_5)) {
#line 419 "type_util.m"
          default:
#line 419 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 419 "type_util.m"
            break;
#line 419 "type_util.m"
          case (MR_Integer) 2:
#line 419 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 419 "type_util.m"
            break;
#line 419 "type_util.m"
          case (MR_Integer) 4:
#line 419 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 419 "type_util.m"
            break;
#line 419 "type_util.m"
        }
#line 419 "type_util.m"
        break;
#line 419 "type_util.m"
      case (MR_Integer) 1:
#line 420 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 419 "type_util.m"
        break;
#line 419 "type_util.m"
      case (MR_Integer) 2:
#line 420 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 419 "type_util.m"
        break;
#line 419 "type_util.m"
      case (MR_Integer) 3:
#line 419 "type_util.m"
#line 419 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_5, (MR_Integer) 0)))) {
#line 419 "type_util.m"
          default:
#line 419 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 419 "type_util.m"
            break;
#line 419 "type_util.m"
          case (MR_Integer) 1:
#line 419 "type_util.m"
            {
#line 419 "type_util.m"
              MR_Word check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_5, (MR_Integer) 1)));

#line 10793 "check_hlds.type_util.c"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_15_15 == (MR_Integer) 0);
#line 419 "type_util.m"
            }
#line 419 "type_util.m"
            break;
#line 419 "type_util.m"
        }
#line 419 "type_util.m"
        break;
#line 419 "type_util.m"
    }
#line 406 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 406 "type_util.m"
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
#line 402 "type_util.m"
  {
#line 402 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 402 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_5;

#line 403 "type_util.m"
    {
#line 403 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_5);
    }
#line 402 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 404 "type_util.m"
      {
#line 404 "type_util.m"
        return check_hlds__type_util__succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeCtor_5);
      }
#line 402 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 402 "type_util.m"
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
#line 396 "type_util.m"
  {
#line 396 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 396 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));

#line 395 "type_util.m"
    *check_hlds__type_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));
#line 397 "type_util.m"
    {
#line 397 "type_util.m"
      mdbcomp__sym_name__sym_name_get_module_name_default_name_4_p_0(check_hlds__type_util__TypeSymName_5, (MR_Word) &check_hlds__type_util_scalar_common_3[0], check_hlds__type_util__ModuleName_7, check_hlds__type_util__Name_8);
#line 397 "type_util.m"
      return;
    }
#line 396 "type_util.m"
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
#line 393 "type_util.m"
  {
#line 393 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 393 "type_util.m"
    MR_Integer check_hlds__type_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));
#line 393 "type_util.m"
    MR_Word check_hlds__type_util___TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));

#line 393 "type_util.m"
    return check_hlds__type_util__Arity_4;
#line 393 "type_util.m"
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
#line 390 "type_util.m"
  {
#line 390 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 390 "type_util.m"
    MR_String check_hlds__type_util__HeadVar__2_2;
#line 390 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));
#line 390 "type_util.m"
    MR_Integer check_hlds__type_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));

#line 391 "type_util.m"
    {
#line 391 "type_util.m"
      return check_hlds__type_util__HeadVar__2_2 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__type_util__TypeSymName_3);
    }
#line 390 "type_util.m"
    return check_hlds__type_util__HeadVar__2_2;
#line 390 "type_util.m"
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
#line 387 "type_util.m"
  {
#line 387 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 387 "type_util.m"
    MR_Word check_hlds__type_util__ModuleName_5;
#line 387 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));
#line 387 "type_util.m"
    MR_Integer check_hlds__type_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));

#line 388 "type_util.m"
    {
#line 388 "type_util.m"
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(check_hlds__type_util__TypeSymName_3, (MR_Word) &check_hlds__type_util_scalar_common_3[0], &check_hlds__type_util__ModuleName_5);
    }
#line 387 "type_util.m"
    return check_hlds__type_util__ModuleName_5;
#line 387 "type_util.m"
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
