/*
** Automatically generated from `type_util.m'
** by the Mercury compiler,
** version rotd-2015-08-10
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
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 236 "type_util.m"
struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s {
#line 236 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5;
#line 236 "type_util.m"
  MR_Word * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7;
#line 236 "type_util.m"
  MR_Word * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8;
#line 236 "type_util.m"
  MR_Cont check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont;
#line 236 "type_util.m"
  void * check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr;
#line 1079 "type_util.m"
  MR_bool check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26;
#line 1079 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29;
#line 1084 "type_util.m"
  MR_Word check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_14_14;
#line 1084 "type_util.m"
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7;
#line 1084 "type_util.m"
  MR_Box check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14;
#line 236 "type_util.m"
};

#line 136 "type_util.m"
struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s {
#line 681 "type_util.m"
  MR_bool check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
#line 681 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5;
#line 684 "type_util.m"
  jmp_buf check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0;
#line 684 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9;
#line 684 "type_util.m"
  MR_Word check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10;
#line 684 "type_util.m"
  MR_Box check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10;
#line 136 "type_util.m"
};


#line 212 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 215 "check_hlds.type_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 218 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 221 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 224 "check_hlds.type_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 227 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 230 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 233 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0;

#line 236 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 239 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 242 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 245 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0;

#line 248 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1;

#line 251 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[2];

#line 254 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[2];

#line 257 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0[2];

#line 260 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0;

#line 263 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1;

#line 266 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0[2];

#line 269 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0[2];

#line 272 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0[2];

#line 275 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
#line 278 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 280 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2);

#line 283 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
#line 286 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 288 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 290 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3);

#line 293 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
#line 296 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 298 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2);

#line 301 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
#line 304 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 306 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 308 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3);

#line 1070 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1070__2_1_f_0(
#line 1070 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_33);

#line 1070 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1070__1_1_f_0(
#line 1070 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_33);

#line 584 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__584__1_1_f_0(
#line 584 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_19);

#line 1296 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1367__1_3_p_0_1(
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1296 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1367 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1367__1_3_p_0(
#line 1367 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1367 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1367 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26);

#line 1293 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1348__1_3_p_0_1(
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1293 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1348 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1348__1_3_p_0(
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1348 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26);

#line 1290 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1320__1_3_p_0_1(
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1290 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1320 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1320__1_3_p_0(
#line 1320 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 1320 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1320 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26);

#line 1228 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1228__1_1_f_0(
#line 1228 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_14);

#line 1215 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1215__1_1_f_0(
#line 1215 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_19);

#line 1127 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1127__1_1_f_0(
#line 1127 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_24);

#line 1095 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1095__1_1_f_0(
#line 1095 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_30);

#line 948 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__948__1_2_f_0(
#line 948 "type_util.m"
  MR_Word check_hlds__type_util__Context_11,
#line 948 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_19);

#line 1030 "type_util.m"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0(
#line 1030 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__1_1,
#line 1030 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 1030 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__3_3);

#line 1030 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0(
#line 1030 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_1,
#line 1030 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2);

#line 1437 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
#line 1437 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1437 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1437 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1437 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
#line 1437 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16);

#line 1417 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
#line 1417 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1417 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1417 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1417 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
#line 1417 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16);

#line 1399 "type_util.m"
static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
#line 1399 "type_util.m"
  MR_Word check_hlds__type_util__TSubst_4,
#line 1399 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_5,
#line 1399 "type_util.m"
  MR_Word * check_hlds__type_util__Proof_6);

#line 1263 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(
#line 1263 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_3,
#line 1263 "type_util.m"
  MR_Word check_hlds__type_util__Var_4);

#line 993 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
#line 993 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 993 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 993 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3);

#line 978 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
#line 978 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 978 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 978 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3);

#line 691 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
#line 691 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 691 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 691 "type_util.m"
  MR_Word check_hlds__type_util__CoveredTypes_7);

#line 585 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
#line 585 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 585 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 585 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 585 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 584 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
#line 584 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 584 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 576 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
#line 576 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 576 "type_util.m"
  MR_Word check_hlds__type_util__Ctor_6,
#line 576 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15,
#line 576 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_16);

#line 559 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 559 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 539 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
#line 539 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_6,
#line 539 "type_util.m"
  MR_Word check_hlds__type_util__Type_7,
#line 539 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_8,
#line 539 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28,
#line 539 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_29);

#line 536 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 536 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 536 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3);

#line 532 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
#line 532 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 532 "type_util.m"
  MR_Word check_hlds__type_util__Types_6,
#line 532 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8,
#line 532 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_9);

#line 502 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
#line 502 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 502 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 502 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25,
#line 502 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);

#line 1464 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
#line 1464 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1464 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1464 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1461 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
#line 1461 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1461 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1461 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1457 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
#line 1457 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1457 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1457 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1434 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
#line 1434 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1434 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1434 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1434 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1434 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4);

#line 1414 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
#line 1414 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1414 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1414 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1414 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1414 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4);

#line 1393 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1(
#line 1393 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1393 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1393 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1377 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
#line 1377 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1377 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1377 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1367 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
#line 1367 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1367 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1367 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1296 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1296 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1357 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
#line 1357 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1357 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1357 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1348 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
#line 1348 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1348 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1348 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1293 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1293 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1334 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
#line 1334 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1334 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1334 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1320 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
#line 1320 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1320 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1320 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1290 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1290 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1296 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1296 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1293 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1293 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1293 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1290 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1290 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2);

#line 1241 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1241 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1241 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0_1(
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1260 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
#line 1260 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1260 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1228 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1(
#line 1228 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1228 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1215 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1(
#line 1215 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1215 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1127 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
#line 1127 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1127 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1095 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_3(
#line 1095 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1095 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1084 "type_util.m"
static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
#line 1084 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 1079 "type_util.m"
static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_1(
#line 1079 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 1070 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1(
#line 1070 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1070 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 1070 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0_1(
#line 1070 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1070 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 948 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
#line 948 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 948 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1);

#line 684 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
#line 684 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 684 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
#line 684 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 684 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
#line 684 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);

#line 684 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
#line 684 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg);


static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[13][2];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_2[8][3];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_3[8][1];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_7[10][6];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_8[3][5];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_9[1][8];

static /* final */ const MR_Box check_hlds__type_util_scalar_common_10[2][7];


#line 756 "type_util.m"
/* sealed */ struct check_hlds__type_util__vector_common_type_4_0_s {
#line 756 "type_util.m"
  const MR_String check_hlds__type_util__vector_common_type_4_0__vct_4_f_0;
#line 756 "type_util.m"
};

static /* final */ const struct check_hlds__type_util__vector_common_type_4_0_s check_hlds__type_util_vector_common_4[4];

#line 785 "type_util.m"
/* sealed */ struct check_hlds__type_util__vector_common_type_5_0_s {
#line 785 "type_util.m"
  const MR_String check_hlds__type_util__vector_common_type_5_0__vct_5_f_0;
#line 785 "type_util.m"
  const MR_Word check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
#line 785 "type_util.m"
};

static /* final */ const struct check_hlds__type_util__vector_common_type_5_0_s check_hlds__type_util_vector_common_5[13];

#line 914 "type_util.m"
/* sealed */ struct check_hlds__type_util__vector_common_type_6_0_s {
#line 914 "type_util.m"
  const MR_Word check_hlds__type_util__vector_common_type_6_0__vct_6_f_0;
#line 914 "type_util.m"
};

static /* final */ const struct check_hlds__type_util__vector_common_type_6_0_s check_hlds__type_util_vector_common_6[4];



static /* final */ const MR_Box check_hlds__type_util_scalar_common_1[13][2] = {
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
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 3))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 2))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 12 */
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

static /* final */ const MR_Box check_hlds__type_util_scalar_common_8[3][5] = {
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
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0))
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
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[6])
  },
  /* row 10 */
  {
    (MR_String) "type_ctor_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[7])
  },
  /* row 11 */
  {
    (MR_String) "type_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[8])
  },
  /* row 12 */
  {
    (MR_String) "typeclass_info",
    (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[9])
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1372 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__maybe__pti_maybe_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1380 "check_hlds.type_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1388 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1397 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 1405 "check_hlds.type_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1413 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 1422 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1431 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_data__type_ctor_info_hlds_constraint_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0
  }
};

#line 1439 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__list__pti_list_1__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 1447 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_util__tree234__pti_tree234_2__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0__plain_hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 1456 "check_hlds.type_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_util__set_ordlist__pti_set_ordlist_1__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 1464 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0 = {
  (MR_String) "fail_on_exist_qvar",
  (MR_Integer) 0
};

#line 1470 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1 = {
  (MR_String) "abort_on_exist_qvar",
  (MR_Integer) 1
};

#line 1476 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_exist_qvar_action_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1
};

#line 1482 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_exist_qvar_action_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_1,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_exist_qvar_action_0_0
};

#line 1488 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_exist_qvar_action_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1494 "check_hlds.type_util.c"
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

#line 1511 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0 = {
  (MR_String) "is_dummy_type",
  (MR_Integer) 0
};

#line 1517 "check_hlds.type_util.c"
static const MR_EnumFunctorDesc check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1 = {
  (MR_String) "is_not_dummy_type",
  (MR_Integer) 1
};

#line 1523 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_value_ordered_is_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1
};

#line 1529 "check_hlds.type_util.c"
static const MR_EnumFunctorDescPtr check_hlds__type_util__check_hlds__type_util__enum_name_ordered_is_dummy_type_0[2] = {
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_0,
  &check_hlds__type_util__check_hlds__type_util__enum_functor_desc_is_dummy_type_0_1
};

#line 1535 "check_hlds.type_util.c"
static const MR_Integer check_hlds__type_util__check_hlds__type_util__functor_number_map_is_dummy_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1541 "check_hlds.type_util.c"
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

#line 1558 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0_10001(
#line 1561 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1563 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2)
#line 1565 "check_hlds.type_util.c"
{
#line 1567 "check_hlds.type_util.c"
  {
#line 1569 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded;

#line 1572 "check_hlds.type_util.c"
    {
#line 1574 "check_hlds.type_util.c"
      check_hlds__type_util__succeeded = check_hlds__type_util____Unify____exist_qvar_action_0_0(((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2));
    }
#line 1577 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 1579 "check_hlds.type_util.c"
  }
#line 1581 "check_hlds.type_util.c"
}

#line 1584 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0_10001(
#line 1587 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 1589 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1591 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3)
#line 1593 "check_hlds.type_util.c"
{
#line 1595 "check_hlds.type_util.c"
  {
#line 1597 "check_hlds.type_util.c"
    MR_Word check_hlds__type_util__conv0_HeadVar__1_1;

#line 1600 "check_hlds.type_util.c"
    {
#line 1602 "check_hlds.type_util.c"
      check_hlds__type_util____Compare____exist_qvar_action_0_0(&check_hlds__type_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3));
    }
#line 1605 "check_hlds.type_util.c"
    *check_hlds__type_util__wrapper_arg_1 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__1_1));
#line 1607 "check_hlds.type_util.c"
  }
#line 1609 "check_hlds.type_util.c"
}

#line 1612 "check_hlds.type_util.c"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0_10001(
#line 1615 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1617 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2)
#line 1619 "check_hlds.type_util.c"
{
#line 1621 "check_hlds.type_util.c"
  {
#line 1623 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded;

#line 1626 "check_hlds.type_util.c"
    {
#line 1628 "check_hlds.type_util.c"
      check_hlds__type_util__succeeded = check_hlds__type_util____Unify____is_dummy_type_0_0(((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2));
    }
#line 1631 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 1633 "check_hlds.type_util.c"
  }
#line 1635 "check_hlds.type_util.c"
}

#line 1638 "check_hlds.type_util.c"
static void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0_10001(
#line 1641 "check_hlds.type_util.c"
  MR_Box * check_hlds__type_util__wrapper_arg_1,
#line 1643 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1645 "check_hlds.type_util.c"
  MR_Box check_hlds__type_util__wrapper_arg_3)
#line 1647 "check_hlds.type_util.c"
{
#line 1649 "check_hlds.type_util.c"
  {
#line 1651 "check_hlds.type_util.c"
    MR_Word check_hlds__type_util__conv0_HeadVar__1_1;

#line 1654 "check_hlds.type_util.c"
    {
#line 1656 "check_hlds.type_util.c"
      check_hlds__type_util____Compare____is_dummy_type_0_0(&check_hlds__type_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3));
    }
#line 1659 "check_hlds.type_util.c"
    *check_hlds__type_util__wrapper_arg_1 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__1_1));
#line 1661 "check_hlds.type_util.c"
  }
#line 1663 "check_hlds.type_util.c"
}

#line 1070 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1070__2_1_f_0(
#line 1070 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_33)
#line 1070 "type_util.m"
{
#line 1070 "type_util.m"
  {
#line 1070 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 1)));
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 0)));
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 2)));
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 3)));

#line 1070 "type_util.m"
    return check_hlds__type_util__HeadVar__2_34;
#line 1070 "type_util.m"
  }
#line 1070 "type_util.m"
}

#line 1070 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1070__1_1_f_0(
#line 1070 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_33)
#line 1070 "type_util.m"
{
#line 1070 "type_util.m"
  {
#line 1070 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 1)));
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 0)));
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 2)));
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_33, (MR_Integer) 3)));

#line 1070 "type_util.m"
    return check_hlds__type_util__HeadVar__2_34;
#line 1070 "type_util.m"
  }
#line 1070 "type_util.m"
}

#line 584 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__584__1_1_f_0(
#line 584 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_19)
#line 584 "type_util.m"
{
#line 584 "type_util.m"
  {
#line 584 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 584 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_19, (MR_Integer) 1)));
#line 584 "type_util.m"
    MR_Word check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_19, (MR_Integer) 0)));
#line 584 "type_util.m"
    MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_19, (MR_Integer) 2)));
#line 584 "type_util.m"
    MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_19, (MR_Integer) 3)));

#line 584 "type_util.m"
    return check_hlds__type_util__HeadVar__2_20;
#line 584 "type_util.m"
  }
#line 584 "type_util.m"
}

#line 1296 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1367__1_3_p_0_1(
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1296 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1296 "type_util.m"
{
#line 1296 "type_util.m"
  {
#line 1296 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1296 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1296 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1296 "type_util.m"
  }
#line 1296 "type_util.m"
}

#line 1367 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1367__1_3_p_0(
#line 1367 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1367 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1367 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1367 "type_util.m"
{
#line 1367 "type_util.m"
  {
#line 1367 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1367 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1367 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1367 "type_util.m"
    MR_Word check_hlds__type_util__L0_15;
#line 1367 "type_util.m"
    MR_Word check_hlds__type_util__L_16;
#line 1367 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1368 "type_util.m"
    {
#line 1368 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_15);
    }
#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1367__1_3_p_0_1));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1296 "type_util.m"
    }
#line 1822 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__L0_15, &check_hlds__type_util__L_16);
    }
#line 1370 "type_util.m"
    {
#line 1370 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__L_16, check_hlds__type_util__HeadVar__3_26);
#line 1370 "type_util.m"
      return;
    }
#line 1367 "type_util.m"
  }
#line 1367 "type_util.m"
}

#line 1293 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1348__1_3_p_0_1(
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
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1293 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1293 "type_util.m"
  }
#line 1293 "type_util.m"
}

#line 1348 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1348__1_3_p_0(
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 1348 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1348 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1348 "type_util.m"
{
#line 1348 "type_util.m"
  {
#line 1348 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1348 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1348 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1348 "type_util.m"
    MR_Word check_hlds__type_util__L0_15;
#line 1348 "type_util.m"
    MR_Word check_hlds__type_util__L_16;
#line 1348 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1349 "type_util.m"
    {
#line 1349 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_15);
    }
#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1348__1_3_p_0_1));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1293 "type_util.m"
    }
#line 1916 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__L0_15, &check_hlds__type_util__L_16);
    }
#line 1351 "type_util.m"
    {
#line 1351 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__L_16, check_hlds__type_util__HeadVar__3_26);
#line 1351 "type_util.m"
      return;
    }
#line 1348 "type_util.m"
  }
#line 1348 "type_util.m"
}

#line 1290 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1320__1_3_p_0_1(
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1290 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1290 "type_util.m"
{
#line 1290 "type_util.m"
  {
#line 1290 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1290 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1290 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1290 "type_util.m"
  }
#line 1290 "type_util.m"
}

#line 1320 "type_util.m"
static void MR_CALL 
check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1320__1_3_p_0(
#line 1320 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 1320 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_25,
#line 1320 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_26)
#line 1320 "type_util.m"
{
#line 1320 "type_util.m"
  {
#line 1320 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1320 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_37_37 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1320 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_54;
#line 1320 "type_util.m"
    MR_Word check_hlds__type_util__L0_16;
#line 1320 "type_util.m"
    MR_Word check_hlds__type_util__L_17;
#line 1320 "type_util.m"
    MR_Word check_hlds__type_util__V_50_50;

#line 1321 "type_util.m"
    {
#line 1321 "type_util.m"
      mercury__set__to_sorted_list_2_p_0(check_hlds__type_util__TypeCtorInfo_37_37, check_hlds__type_util__HeadVar__2_25, &check_hlds__type_util__L0_16);
    }
#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      check_hlds__type_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
#line 1290 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 1) = ((MR_Box) (check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1320__1_3_p_0_1));
#line 1290 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1290 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1290 "type_util.m"
    }
#line 2010 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__V_50_50, check_hlds__type_util__L0_16, &check_hlds__type_util__L_17);
    }
#line 1323 "type_util.m"
    {
#line 1323 "type_util.m"
      mercury__set__list_to_set_2_p_0(check_hlds__type_util__TypeCtorInfo_37_37, check_hlds__type_util__L_17, check_hlds__type_util__HeadVar__3_26);
#line 1323 "type_util.m"
      return;
    }
#line 1320 "type_util.m"
  }
#line 1320 "type_util.m"
}

#line 1228 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1228__1_1_f_0(
#line 1228 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_14)
#line 1228 "type_util.m"
{
#line 1228 "type_util.m"
  {
#line 1228 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1228 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_15;

#line 1228 "type_util.m"
    {
#line 1228 "type_util.m"
      check_hlds__type_util__HeadVar__2_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1228 "type_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_15, 0) = ((MR_Box) (check_hlds__type_util__HeadVar__1_14));
#line 1228 "type_util.m"
    }
#line 1228 "type_util.m"
    return check_hlds__type_util__HeadVar__2_15;
#line 1228 "type_util.m"
  }
#line 1228 "type_util.m"
}

#line 1215 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1215__1_1_f_0(
#line 1215 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_19)
#line 1215 "type_util.m"
{
#line 1215 "type_util.m"
  {
#line 1215 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1215 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_20;

#line 1215 "type_util.m"
    {
#line 1215 "type_util.m"
      check_hlds__type_util__HeadVar__2_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1215 "type_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_20, 0) = ((MR_Box) (check_hlds__type_util__HeadVar__1_19));
#line 1215 "type_util.m"
    }
#line 1215 "type_util.m"
    return check_hlds__type_util__HeadVar__2_20;
#line 1215 "type_util.m"
  }
#line 1215 "type_util.m"
}

#line 1127 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1127__1_1_f_0(
#line 1127 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_24)
#line 1127 "type_util.m"
{
#line 1127 "type_util.m"
  {
#line 1127 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1127 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_24, (MR_Integer) 1)));
#line 1127 "type_util.m"
    MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_24, (MR_Integer) 0)));
#line 1127 "type_util.m"
    MR_Word check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_24, (MR_Integer) 2)));
#line 1127 "type_util.m"
    MR_Word check_hlds__type_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_24, (MR_Integer) 3)));

#line 1127 "type_util.m"
    return check_hlds__type_util__HeadVar__2_25;
#line 1127 "type_util.m"
  }
#line 1127 "type_util.m"
}

#line 1095 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1095__1_1_f_0(
#line 1095 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_30)
#line 1095 "type_util.m"
{
#line 1095 "type_util.m"
  {
#line 1095 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1095 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__2_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_30, (MR_Integer) 1)));
#line 1095 "type_util.m"
    MR_Word check_hlds__type_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_30, (MR_Integer) 0)));
#line 1095 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_30, (MR_Integer) 2)));
#line 1095 "type_util.m"
    MR_Word check_hlds__type_util__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_30, (MR_Integer) 3)));

#line 1095 "type_util.m"
    return check_hlds__type_util__HeadVar__2_31;
#line 1095 "type_util.m"
  }
#line 1095 "type_util.m"
}

#line 948 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__IntroducedFrom__func__type_constructors__948__1_2_f_0(
#line 948 "type_util.m"
  MR_Word check_hlds__type_util__Context_11,
#line 948 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_19)
#line 948 "type_util.m"
{
#line 948 "type_util.m"
  {
#line 948 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 948 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__3_20;

#line 949 "type_util.m"
    {
#line 949 "type_util.m"
      check_hlds__type_util__HeadVar__3_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 949 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 1) = ((MR_Box) (check_hlds__type_util__HeadVar__2_19));
#line 949 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 949 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__3_20, 3) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 949 "type_util.m"
    }
#line 948 "type_util.m"
    return check_hlds__type_util__HeadVar__3_20;
#line 948 "type_util.m"
  }
#line 948 "type_util.m"
}

#line 138 "type_util.m"
void MR_CALL 
check_hlds__type_util____Compare____is_dummy_type_0_0(
#line 138 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__1_1,
#line 138 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 138 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__3_3)
#line 138 "type_util.m"
{
#line 138 "type_util.m"
  {
#line 138 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 138 "type_util.m"
    MR_Integer check_hlds__type_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__type_util__HeadVar__2_2;
#line 138 "type_util.m"
    MR_Integer check_hlds__type_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__type_util__HeadVar__3_3;

#line 138 "type_util.m"
    {
#line 138 "type_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__type_util__HeadVar__1_1, check_hlds__type_util__Cast_HeadVar1_4, check_hlds__type_util__Cast_HeadVar2_5);
#line 138 "type_util.m"
      return;
    }
#line 138 "type_util.m"
  }
#line 138 "type_util.m"
}

#line 138 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util____Unify____is_dummy_type_0_0(
#line 138 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_1,
#line 138 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2)
#line 138 "type_util.m"
{
#line 2219 "check_hlds.type_util.c"
  {
#line 2221 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded = (check_hlds__type_util__HeadVar__2_1 == check_hlds__type_util__HeadVar__2_2);

#line 2224 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 2226 "check_hlds.type_util.c"
  }
#line 138 "type_util.m"
}

#line 1030 "type_util.m"
static void MR_CALL 
check_hlds__type_util____Compare____exist_qvar_action_0_0(
#line 1030 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__1_1,
#line 1030 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 1030 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__3_3)
#line 1030 "type_util.m"
{
#line 1030 "type_util.m"
  {
#line 1030 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1030 "type_util.m"
    MR_Integer check_hlds__type_util__Cast_HeadVar1_4 = (MR_Integer) check_hlds__type_util__HeadVar__2_2;
#line 1030 "type_util.m"
    MR_Integer check_hlds__type_util__Cast_HeadVar2_5 = (MR_Integer) check_hlds__type_util__HeadVar__3_3;

#line 1030 "type_util.m"
    {
#line 1030 "type_util.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__type_util__HeadVar__1_1, check_hlds__type_util__Cast_HeadVar1_4, check_hlds__type_util__Cast_HeadVar2_5);
#line 1030 "type_util.m"
      return;
    }
#line 1030 "type_util.m"
  }
#line 1030 "type_util.m"
}

#line 1030 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util____Unify____exist_qvar_action_0_0(
#line 1030 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_1,
#line 1030 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2)
#line 1030 "type_util.m"
{
#line 2272 "check_hlds.type_util.c"
  {
#line 2274 "check_hlds.type_util.c"
    MR_bool check_hlds__type_util__succeeded = (check_hlds__type_util__HeadVar__2_1 == check_hlds__type_util__HeadVar__2_2);

#line 2277 "check_hlds.type_util.c"
    return check_hlds__type_util__succeeded;
#line 2279 "check_hlds.type_util.c"
  }
#line 1030 "type_util.m"
}

#line 1437 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(
#line 1437 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1437 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1437 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1437 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
#line 1437 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16)
#line 1437 "type_util.m"
{
#line 1442 "type_util.m"
  {
#line 1442 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1442 "type_util.m"
    MR_Word check_hlds__type_util__Constraint_10;
#line 1442 "type_util.m"
    MR_Word check_hlds__type_util__Proof_12;

#line 1443 "type_util.m"
    {
#line 1443 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Constraint0_7, &check_hlds__type_util__Constraint_10);
    }
#line 1447 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1446 "type_util.m"
      check_hlds__type_util__Proof_12 = check_hlds__type_util__Proof0_8;
#line 1447 "type_util.m"
    else
#line 1448 "type_util.m"
      {
#line 1448 "type_util.m"
        MR_Word check_hlds__type_util__Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_8, (MR_Integer) 0)));
#line 1448 "type_util.m"
        MR_Word check_hlds__type_util__Super_14;

#line 1449 "type_util.m"
        {
#line 1449 "type_util.m"
          parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Super0_13, &check_hlds__type_util__Super_14);
        }
#line 1450 "type_util.m"
        {
#line 1450 "type_util.m"
          check_hlds__type_util__Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1450 "type_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof_12, 0) = ((MR_Box) (check_hlds__type_util__Super_14));
#line 1450 "type_util.m"
        }
#line 1448 "type_util.m"
      }
#line 1452 "type_util.m"
    {
#line 1452 "type_util.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__type_util__Constraint_10)), ((MR_Box) (check_hlds__type_util__Proof_12)), check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15, check_hlds__type_util__STATE_VARIABLE_ProofMap_16);
#line 1452 "type_util.m"
      return;
    }
#line 1442 "type_util.m"
  }
#line 1437 "type_util.m"
}

#line 1417 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(
#line 1417 "type_util.m"
  MR_Word check_hlds__type_util__Subst_6,
#line 1417 "type_util.m"
  MR_Word check_hlds__type_util__Constraint0_7,
#line 1417 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_8,
#line 1417 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15,
#line 1417 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ProofMap_16)
#line 1417 "type_util.m"
{
#line 1421 "type_util.m"
  {
#line 1421 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1421 "type_util.m"
    MR_Word check_hlds__type_util__Constraint_10;
#line 1421 "type_util.m"
    MR_Word check_hlds__type_util__Proof_12;

#line 1422 "type_util.m"
    {
#line 1422 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Constraint0_7, &check_hlds__type_util__Constraint_10);
    }
#line 1426 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_8)) == (MR_mktag((MR_Integer) 0))))
#line 1425 "type_util.m"
      check_hlds__type_util__Proof_12 = check_hlds__type_util__Proof0_8;
#line 1426 "type_util.m"
    else
#line 1427 "type_util.m"
      {
#line 1427 "type_util.m"
        MR_Word check_hlds__type_util__Super0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_8, (MR_Integer) 0)));
#line 1427 "type_util.m"
        MR_Word check_hlds__type_util__Super_14;

#line 1428 "type_util.m"
        {
#line 1428 "type_util.m"
          parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(check_hlds__type_util__Subst_6, check_hlds__type_util__Super0_13, &check_hlds__type_util__Super_14);
        }
#line 1429 "type_util.m"
        {
#line 1429 "type_util.m"
          check_hlds__type_util__Proof_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1429 "type_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof_12, 0) = ((MR_Box) (check_hlds__type_util__Super_14));
#line 1429 "type_util.m"
        }
#line 1427 "type_util.m"
      }
#line 1431 "type_util.m"
    {
#line 1431 "type_util.m"
      mercury__map__set_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, ((MR_Box) (check_hlds__type_util__Constraint_10)), ((MR_Box) (check_hlds__type_util__Proof_12)), check_hlds__type_util__STATE_VARIABLE_ProofMap_0_15, check_hlds__type_util__STATE_VARIABLE_ProofMap_16);
#line 1431 "type_util.m"
      return;
    }
#line 1421 "type_util.m"
  }
#line 1417 "type_util.m"
}

#line 1399 "type_util.m"
static void MR_CALL 
check_hlds__type_util__rename_constraint_proof_3_p_0(
#line 1399 "type_util.m"
  MR_Word check_hlds__type_util__TSubst_4,
#line 1399 "type_util.m"
  MR_Word check_hlds__type_util__Proof0_5,
#line 1399 "type_util.m"
  MR_Word * check_hlds__type_util__Proof_6)
#line 1399 "type_util.m"
{
#line 1404 "type_util.m"
  {
#line 1404 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 1404 "type_util.m"
    if (((MR_tag((MR_Word) check_hlds__type_util__Proof0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1405 "type_util.m"
      *check_hlds__type_util__Proof_6 = check_hlds__type_util__Proof0_5;
#line 1404 "type_util.m"
    else
#line 1407 "type_util.m"
      {
#line 1407 "type_util.m"
        MR_Word check_hlds__type_util__ClassConstraint0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Proof0_5, (MR_Integer) 0)));
#line 1407 "type_util.m"
        MR_Word check_hlds__type_util__ClassConstraint_9;

#line 1408 "type_util.m"
        {
#line 1408 "type_util.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(check_hlds__type_util__TSubst_4, check_hlds__type_util__ClassConstraint0_8, &check_hlds__type_util__ClassConstraint_9);
        }
#line 1410 "type_util.m"
        {
#line 1410 "type_util.m"
          MR_Word base;
#line 1410 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1410 "type_util.m"
          *check_hlds__type_util__Proof_6 = base;
#line 1410 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__ClassConstraint_9));
#line 1410 "type_util.m"
        }
#line 1407 "type_util.m"
      }
#line 1404 "type_util.m"
  }
#line 1399 "type_util.m"
}

#line 1263 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(
#line 1263 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_3,
#line 1263 "type_util.m"
  MR_Word check_hlds__type_util__Var_4)
#line 1263 "type_util.m"
{
#line 1266 "type_util.m"
  {
#line 1266 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1266 "type_util.m"
    MR_Word check_hlds__type_util__Type_5;

#line 1267 "type_util.m"
    {
#line 1267 "type_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__type_util__VarTypes_3, check_hlds__type_util__Var_4, &check_hlds__type_util__Type_5);
    }
#line 1268 "type_util.m"
    {
#line 1268 "type_util.m"
      return check_hlds__type_util__succeeded = parse_tree__prog_type__is_introduced_type_info_type_1_p_0(check_hlds__type_util__Type_5);
    }
#line 1266 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1266 "type_util.m"
  }
#line 1263 "type_util.m"
}

#line 993 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_3_3_p_0(
#line 993 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 993 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 993 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3)
#line 993 "type_util.m"
{
#line 996 "type_util.m"
  {
#line 996 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 996 "type_util.m"
    if ((check_hlds__type_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 996 "type_util.m"
      *check_hlds__type_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 996 "type_util.m"
    else
#line 997 "type_util.m"
      {
#line 997 "type_util.m"
        MR_Word check_hlds__type_util__Arg0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
#line 997 "type_util.m"
        MR_Word check_hlds__type_util__Args0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 1)));
#line 997 "type_util.m"
        MR_Word check_hlds__type_util__Arg_8;
#line 997 "type_util.m"
        MR_Word check_hlds__type_util__Args_9;
#line 997 "type_util.m"
        MR_Word check_hlds__type_util__ArgType_10;
#line 997 "type_util.m"
        MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 1)));
#line 998 "type_util.m"
        MR_Word check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 0)));
#line 998 "type_util.m"
        MR_Word check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 2)));
#line 998 "type_util.m"
        MR_Word check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 3)));
#line 999 "type_util.m"
        MR_Word check_hlds__type_util__V_15_15;
#line 999 "type_util.m"
        MR_Word check_hlds__type_util__V_17_17;
#line 999 "type_util.m"
        MR_Word check_hlds__type_util__V_18_18;
#line 999 "type_util.m"
        MR_Word check_hlds__type_util__V_16_16;

#line 998 "type_util.m"
        {
#line 998 "type_util.m"
          parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__V_11_11, &check_hlds__type_util__ArgType_10);
        }
#line 999 "type_util.m"
        check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 0)));
#line 999 "type_util.m"
        check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 1)));
#line 999 "type_util.m"
        check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 2)));
#line 999 "type_util.m"
        check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg0_6, (MR_Integer) 3)));
#line 999 "type_util.m"
        {
#line 999 "type_util.m"
          check_hlds__type_util__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 999 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 0) = ((MR_Box) (check_hlds__type_util__V_15_15));
#line 999 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 1) = ((MR_Box) (check_hlds__type_util__ArgType_10));
#line 999 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 2) = ((MR_Box) (check_hlds__type_util__V_17_17));
#line 999 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Arg_8, 3) = ((MR_Box) (check_hlds__type_util__V_18_18));
#line 999 "type_util.m"
        }
#line 1000 "type_util.m"
        {
#line 1000 "type_util.m"
          check_hlds__type_util__substitute_type_args_3_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Args0_7, &check_hlds__type_util__Args_9);
        }
#line 997 "type_util.m"
        {
#line 997 "type_util.m"
          MR_Word base;
#line 997 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 997 "type_util.m"
          *check_hlds__type_util__HeadVar__3_3 = base;
#line 997 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__Arg_8));
#line 997 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__type_util__Args_9));
#line 997 "type_util.m"
        }
#line 997 "type_util.m"
      }
#line 996 "type_util.m"
  }
#line 993 "type_util.m"
}

#line 978 "type_util.m"
static void MR_CALL 
check_hlds__type_util__substitute_type_args_2_3_p_0(
#line 978 "type_util.m"
  MR_Word check_hlds__type_util__Subst_1,
#line 978 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__2_2,
#line 978 "type_util.m"
  MR_Word * check_hlds__type_util__HeadVar__3_3)
#line 978 "type_util.m"
{
#line 981 "type_util.m"
  {
#line 981 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 981 "type_util.m"
    if ((check_hlds__type_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "type_util.m"
      *check_hlds__type_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 981 "type_util.m"
    else
#line 982 "type_util.m"
      {
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Ctor0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 0)));
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Ctors0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__HeadVar__2_2, (MR_Integer) 1)));
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Ctor_8;
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Ctors_9;
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__ExistQVars_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 0)));
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Constraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 1)));
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Name_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 2)));
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 3)));
#line 982 "type_util.m"
        MR_Integer check_hlds__type_util__Arity_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 4)));
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Ctxt_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor0_6, (MR_Integer) 5)));
#line 982 "type_util.m"
        MR_Word check_hlds__type_util__Args_16;

#line 989 "type_util.m"
        {
#line 989 "type_util.m"
          check_hlds__type_util__substitute_type_args_3_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Args0_13, &check_hlds__type_util__Args_16);
        }
#line 990 "type_util.m"
        {
#line 990 "type_util.m"
          check_hlds__type_util__substitute_type_args_2_3_p_0(check_hlds__type_util__Subst_1, check_hlds__type_util__Ctors0_7, &check_hlds__type_util__Ctors_9);
        }
#line 991 "type_util.m"
        {
#line 991 "type_util.m"
          check_hlds__type_util__Ctor_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 991 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 0) = ((MR_Box) (check_hlds__type_util__ExistQVars_10));
#line 991 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 1) = ((MR_Box) (check_hlds__type_util__Constraints_11));
#line 991 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 2) = ((MR_Box) (check_hlds__type_util__Name_12));
#line 991 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 3) = ((MR_Box) (check_hlds__type_util__Args_16));
#line 991 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 4) = ((MR_Box) (check_hlds__type_util__Arity_14));
#line 991 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_8, 5) = ((MR_Box) (check_hlds__type_util__Ctxt_15));
#line 991 "type_util.m"
        }
#line 982 "type_util.m"
        {
#line 982 "type_util.m"
          MR_Word base;
#line 982 "type_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 982 "type_util.m"
          *check_hlds__type_util__HeadVar__3_3 = base;
#line 982 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__Ctor_8));
#line 982 "type_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__type_util__Ctors_9));
#line 982 "type_util.m"
        }
#line 982 "type_util.m"
      }
#line 981 "type_util.m"
  }
#line 978 "type_util.m"
}

#line 691 "type_util.m"
static MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_3_f_0(
#line 691 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 691 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 691 "type_util.m"
  MR_Word check_hlds__type_util__CoveredTypes_7)
#line 691 "type_util.m"
{
#line 700 "type_util.m"
  while (MR_TRUE)
#line 700 "type_util.m"
    {
#line 700 "type_util.m"
      /* tailcall optimized into a loop */
#line 700 "type_util.m"
      {
#line 700 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;
#line 700 "type_util.m"
        MR_Word check_hlds__type_util__IsDummy_8;

#line 697 "type_util.m"
        {
#line 697 "type_util.m"
          check_hlds__type_util__succeeded = mercury__list__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__type_util__Type_6)), check_hlds__type_util__CoveredTypes_7);
        }
#line 700 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 699 "type_util.m"
          check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 700 "type_util.m"
        else
#line 749 "type_util.m"
          {
#line 749 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_9;
#line 749 "type_util.m"
            MR_Word check_hlds__type_util__ArgTypes_10;

#line 700 "type_util.m"
            {
#line 700 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__ArgTypes_10);
            }
#line 749 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 703 "type_util.m"
              {
#line 703 "type_util.m"
                MR_Word check_hlds__type_util__IsBuiltinDummy_11;

#line 703 "type_util.m"
                {
#line 703 "type_util.m"
                  check_hlds__type_util__IsBuiltinDummy_11 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__type_util__TypeCtor_9);
                }
#line 707 "type_util.m"
#line 707 "type_util.m"
                switch (check_hlds__type_util__IsBuiltinDummy_11) {
#line 707 "type_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 707 "type_util.m"
                  case (MR_Integer) 0:
#line 706 "type_util.m"
                    check_hlds__type_util__IsDummy_8 = (MR_Integer) 0;
#line 707 "type_util.m"
                    break;
#line 707 "type_util.m"
                  case (MR_Integer) 1:
#line 708 "type_util.m"
                    {
#line 708 "type_util.m"
                      MR_Word check_hlds__type_util__TypeTable_12;
#line 745 "type_util.m"
                      MR_Word check_hlds__type_util__TypeDefn_13;

#line 709 "type_util.m"
                      {
#line 709 "type_util.m"
                        hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_12);
                      }
#line 712 "type_util.m"
                      {
#line 712 "type_util.m"
                        check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_12, check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__TypeDefn_13);
                      }
#line 745 "type_util.m"
                      if (check_hlds__type_util__succeeded)
#line 713 "type_util.m"
                        {
#line 713 "type_util.m"
                          MR_Word check_hlds__type_util__TypeBody_14;

#line 713 "type_util.m"
                          {
#line 713 "type_util.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_14);
                          }
#line 737 "type_util.m"
#line 737 "type_util.m"
                          switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_14)) {
#line 737 "type_util.m"
                            default: /*NOTREACHED*/ MR_assert(0);
#line 737 "type_util.m"
                            case (MR_Integer) 0:
#line 743 "type_util.m"
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 737 "type_util.m"
                              break;
#line 737 "type_util.m"
                            case (MR_Integer) 1:
#line 716 "type_util.m"
                              {
#line 716 "type_util.m"
                                MR_Word check_hlds__type_util__DuTypeKind_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 3)));
#line 715 "type_util.m"
                                MR_Word check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 0)));
#line 715 "type_util.m"
                                MR_Word check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 1)));
#line 715 "type_util.m"
                                MR_Word check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 2)));
#line 715 "type_util.m"
                                MR_Word check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 4)));
#line 715 "type_util.m"
                                MR_Word check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 5)));
#line 715 "type_util.m"
                                MR_Word check_hlds__type_util__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 715 "type_util.m"
                                MR_Word check_hlds__type_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 715 "type_util.m"
                                MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 7)));

#line 720 "type_util.m"
#line 720 "type_util.m"
                                switch (MR_tag((MR_Word) check_hlds__type_util__DuTypeKind_18)) {
#line 720 "type_util.m"
                                  default: /*NOTREACHED*/ MR_assert(0);
#line 720 "type_util.m"
                                  case (MR_Integer) 0:
#line 720 "type_util.m"
#line 720 "type_util.m"
                                    switch (MR_unmkbody(check_hlds__type_util__DuTypeKind_18)) {
#line 720 "type_util.m"
                                      default: /*NOTREACHED*/ MR_assert(0);
#line 720 "type_util.m"
                                      case (MR_Integer) 0:
#line 720 "type_util.m"
                                      case (MR_Integer) 2:
#line 725 "type_util.m"
                                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 720 "type_util.m"
                                        break;
#line 720 "type_util.m"
                                      case (MR_Integer) 1:
#line 719 "type_util.m"
                                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 0;
#line 720 "type_util.m"
                                        break;
#line 720 "type_util.m"
                                    }
#line 720 "type_util.m"
                                    break;
#line 720 "type_util.m"
                                  case (MR_Integer) 1:
#line 725 "type_util.m"
                                    check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 720 "type_util.m"
                                    break;
#line 720 "type_util.m"
                                  case (MR_Integer) 2:
#line 728 "type_util.m"
                                    {
#line 728 "type_util.m"
                                      MR_Word check_hlds__type_util__SingleArgTypeInDefn_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 1)));
#line 728 "type_util.m"
                                      MR_Word check_hlds__type_util__TypeParams_28;
#line 728 "type_util.m"
                                      MR_Word check_hlds__type_util__Subst_29;
#line 728 "type_util.m"
                                      MR_Word check_hlds__type_util__SingleArgType_30;
#line 728 "type_util.m"
                                      MR_Word check_hlds__type_util__V_36_36;
#line 727 "type_util.m"
                                      MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 0)));
#line 727 "type_util.m"
                                      MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__DuTypeKind_18, (MR_Integer) 2)));

#line 729 "type_util.m"
                                      {
#line 729 "type_util.m"
                                        hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeParams_28);
                                      }
#line 730 "type_util.m"
                                      {
#line 730 "type_util.m"
                                        mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_28, check_hlds__type_util__ArgTypes_10, &check_hlds__type_util__Subst_29);
                                      }
#line 732 "type_util.m"
                                      {
#line 732 "type_util.m"
                                        parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subst_29, check_hlds__type_util__SingleArgTypeInDefn_26, &check_hlds__type_util__SingleArgType_30);
                                      }
#line 735 "type_util.m"
                                      {
#line 735 "type_util.m"
                                        check_hlds__type_util__V_36_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 735 "type_util.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__type_util__V_36_36, 0) = ((MR_Box) (check_hlds__type_util__Type_6));
#line 735 "type_util.m"
                                        MR_hl_field(MR_mktag(1), check_hlds__type_util__V_36_36, 1) = ((MR_Box) (check_hlds__type_util__CoveredTypes_7));
#line 735 "type_util.m"
                                      }
#line 734 "type_util.m"
                                      /* direct tailcall eliminated */
#line 734 "type_util.m"
                                      {
#line 734 "type_util.m"
                                        MR_Word check_hlds__type_util__Type__tmp_copy_6 = check_hlds__type_util__SingleArgType_30;
#line 734 "type_util.m"
                                        MR_Word check_hlds__type_util__CoveredTypes__tmp_copy_7 = check_hlds__type_util__V_36_36;

#line 734 "type_util.m"
                                        check_hlds__type_util__CoveredTypes_7 = check_hlds__type_util__CoveredTypes__tmp_copy_7;
#line 734 "type_util.m"
                                        check_hlds__type_util__Type_6 = check_hlds__type_util__Type__tmp_copy_6;
#line 734 "type_util.m"
                                      }
#line 734 "type_util.m"
                                      continue;
#line 728 "type_util.m"
                                    }
#line 720 "type_util.m"
                                    break;
#line 720 "type_util.m"
                                }
#line 716 "type_util.m"
                              }
#line 737 "type_util.m"
                              break;
#line 737 "type_util.m"
                            case (MR_Integer) 2:
#line 743 "type_util.m"
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 737 "type_util.m"
                              break;
#line 737 "type_util.m"
                            case (MR_Integer) 3:
#line 743 "type_util.m"
                              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 737 "type_util.m"
                              break;
#line 737 "type_util.m"
                          }
#line 713 "type_util.m"
                        }
#line 745 "type_util.m"
                      else
#line 746 "type_util.m"
                        check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 708 "type_util.m"
                    }
#line 707 "type_util.m"
                    break;
#line 707 "type_util.m"
                }
#line 703 "type_util.m"
              }
#line 749 "type_util.m"
            else
#line 750 "type_util.m"
              check_hlds__type_util__IsDummy_8 = (MR_Integer) 1;
#line 749 "type_util.m"
          }
#line 700 "type_util.m"
        return check_hlds__type_util__IsDummy_8;
#line 700 "type_util.m"
      }
#line 700 "type_util.m"
      break;
#line 700 "type_util.m"
    }
#line 691 "type_util.m"
}

#line 585 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2(
#line 585 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 585 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 585 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 585 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3)
#line 585 "type_util.m"
{
#line 585 "type_util.m"
  {
#line 585 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 585 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 585 "type_util.m"
    MR_Word check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26;

#line 585 "type_util.m"
    {
#line 585 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26);
    }
#line 585 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 585 "type_util.m"
      {
#line 585 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_26));
#line 585 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 585 "type_util.m"
      }
#line 585 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 585 "type_util.m"
  }
#line 585 "type_util.m"
}

#line 584 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_1(
#line 584 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 584 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 584 "type_util.m"
{
#line 584 "type_util.m"
  {
#line 584 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 584 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 584 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_20;

#line 584 "type_util.m"
    {
#line 584 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__ctor_definitely_has_no_user_defined_eq_pred__584__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 584 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_20));
#line 584 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 584 "type_util.m"
  }
#line 584 "type_util.m"
}

#line 576 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(
#line 576 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 576 "type_util.m"
  MR_Word check_hlds__type_util__Ctor_6,
#line 576 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15,
#line 576 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_16)
#line 576 "type_util.m"
{
#line 579 "type_util.m"
  {
#line 579 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 579 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_27_27;
#line 579 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_28_28;
#line 579 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 579 "type_util.m"
    MR_Word check_hlds__type_util__Args_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 3)));
#line 579 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_13;
#line 579 "type_util.m"
    MR_Word check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 0)));
#line 579 "type_util.m"
    MR_Word check_hlds__type_util__V_18_18;
#line 579 "type_util.m"
    MR_Word check_hlds__type_util__V_21_21;
#line 581 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 1)));
#line 581 "type_util.m"
    MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 2)));
#line 581 "type_util.m"
    MR_Integer check_hlds__type_util__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 4)));
#line 581 "type_util.m"
    MR_Word check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Ctor_6, (MR_Integer) 5)));
#line 585 "type_util.m"
    MR_Box check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16;

#line 581 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__V_17_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 579 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 579 "type_util.m"
      {
#line 3121 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_27_27 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 3123 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_28_28 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 584 "type_util.m"
        check_hlds__type_util__V_18_18 = (MR_Word) &check_hlds__type_util_scalar_common_2[7];
#line 584 "type_util.m"
        {
#line 584 "type_util.m"
          check_hlds__type_util__ArgTypes_13 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_27_27, check_hlds__type_util__TypeCtorInfo_28_28, check_hlds__type_util__V_18_18, check_hlds__type_util__Args_10);
        }
#line 3132 "check_hlds.type_util.c"
        check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
#line 585 "type_util.m"
        {
#line 585 "type_util.m"
          check_hlds__type_util__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 585 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[0]));
#line 585 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 1) = ((MR_Box) (check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0_2));
#line 585 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 585 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_21_21, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_5));
#line 585 "type_util.m"
        }
#line 585 "type_util.m"
        {
#line 585 "type_util.m"
          check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3(check_hlds__type_util__TypeCtorInfo_28_28, check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__V_21_21, check_hlds__type_util__ArgTypes_13, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_15)), &check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16);
        }
#line 585 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 585 "type_util.m"
          {
#line 585 "type_util.m"
            *check_hlds__type_util__STATE_VARIABLE_SeenTypes_16 = ((MR_Word) check_hlds__type_util__conv2_STATE_VARIABLE_SeenTypes_16);
#line 585 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 585 "type_util.m"
          }
#line 579 "type_util.m"
      }
#line 579 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 579 "type_util.m"
  }
#line 576 "type_util.m"
}

#line 559 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1(
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 559 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 559 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_3)
#line 559 "type_util.m"
{
#line 559 "type_util.m"
  {
#line 559 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 559 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 559 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16;

#line 559 "type_util.m"
    {
#line 559 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__ctor_definitely_has_no_user_defined_eq_pred_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16);
    }
#line 559 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 559 "type_util.m"
      {
#line 559 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_16));
#line 559 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 559 "type_util.m"
      }
#line 559 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 559 "type_util.m"
  }
#line 559 "type_util.m"
}

#line 539 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(
#line 539 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_6,
#line 539 "type_util.m"
  MR_Word check_hlds__type_util__Type_7,
#line 539 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_8,
#line 539 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28,
#line 539 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_29)
#line 539 "type_util.m"
{
#line 544 "type_util.m"
  {
#line 544 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 544 "type_util.m"
    MR_Word check_hlds__type_util__Globals_10;
#line 544 "type_util.m"
    MR_Word check_hlds__type_util__Target_11;

#line 545 "type_util.m"
    {
#line 545 "type_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_6, &check_hlds__type_util__Globals_10);
    }
#line 546 "type_util.m"
    {
#line 546 "type_util.m"
      libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_10, &check_hlds__type_util__Target_11);
    }
#line 562 "type_util.m"
#line 562 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_8)) {
#line 562 "type_util.m"
      default:
#line 562 "type_util.m"
        check_hlds__type_util__succeeded = MR_FALSE;
#line 562 "type_util.m"
        break;
#line 562 "type_util.m"
      case (MR_Integer) 0:
#line 566 "type_util.m"
        {
#line 566 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_36 = (MR_Word) MR_body(((MR_Word) check_hlds__type_util__TypeBody_8), (MR_Integer) 0);
#line 567 "type_util.m"
          MR_Word check_hlds__type_util__V_25_25;

#line 567 "type_util.m"
          {
#line 567 "type_util.m"
            check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__ForeignTypeBody_36, &check_hlds__type_util__V_25_25);
          }
#line 567 "type_util.m"
          check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 566 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 566 "type_util.m"
            {
#line 566 "type_util.m"
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 566 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 566 "type_util.m"
            }
#line 566 "type_util.m"
        }
#line 562 "type_util.m"
        break;
#line 562 "type_util.m"
      case (MR_Integer) 1:
#line 555 "type_util.m"
        {
#line 555 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_21;
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 7)));
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_32_32;
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_58_58;
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 3)));
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 4)));
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 5)));
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_43_43 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 550 "type_util.m"
          MR_Word check_hlds__type_util__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 550 "type_util.m"
          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 550 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 550 "type_util.m"
            {
#line 550 "type_util.m"
              check_hlds__type_util__ForeignTypeBody_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_31_31, (MR_Integer) 0)));
#line 551 "type_util.m"
              check_hlds__type_util__V_32_32 = (MR_Integer) 1;
#line 551 "type_util.m"
              {
#line 551 "type_util.m"
                backend_libs__foreign__have_foreign_type_for_backend_3_p_0(check_hlds__type_util__Target_11, check_hlds__type_util__ForeignTypeBody_21, &check_hlds__type_util__V_58_58);
              }
#line 551 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_32_32 == check_hlds__type_util__V_58_58);
#line 550 "type_util.m"
            }
#line 555 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 553 "type_util.m"
            {
#line 553 "type_util.m"
              MR_Word check_hlds__type_util__V_22_22;

#line 553 "type_util.m"
              {
#line 553 "type_util.m"
                check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__ForeignTypeBody_21, &check_hlds__type_util__V_22_22);
              }
#line 553 "type_util.m"
              check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 553 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 553 "type_util.m"
                {
#line 553 "type_util.m"
                  *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 553 "type_util.m"
                  check_hlds__type_util__succeeded = MR_TRUE;
#line 553 "type_util.m"
                }
#line 553 "type_util.m"
            }
#line 555 "type_util.m"
          else
#line 556 "type_util.m"
            {
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__TypeCtorInfo_56_56;
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__TypeInfo_57_57;
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__Ctors_23;
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 4)));
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_34_34;
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 3)));
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 5)));
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 556 "type_util.m"
              MR_Word check_hlds__type_util__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_8, (MR_Integer) 7)));
#line 559 "type_util.m"
              MR_Box check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29;

#line 556 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_33_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 556 "type_util.m"
                {
#line 558 "type_util.m"
                  {
#line 558 "type_util.m"
                    check_hlds__type_util__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__Type_7, &check_hlds__type_util__Ctors_23);
                  }
#line 556 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 556 "type_util.m"
                    {
#line 3411 "check_hlds.type_util.c"
                      check_hlds__type_util__TypeCtorInfo_56_56 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0;
#line 3413 "check_hlds.type_util.c"
                      check_hlds__type_util__TypeInfo_57_57 = (MR_Word) &check_hlds__type_util_scalar_common_1[5];
#line 559 "type_util.m"
                      {
#line 559 "type_util.m"
                        check_hlds__type_util__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 559 "type_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[1]));
#line 559 "type_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 1) = ((MR_Box) (check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0_1));
#line 559 "type_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 559 "type_util.m"
                        MR_hl_field(MR_mktag(0), check_hlds__type_util__V_34_34, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_6));
#line 559 "type_util.m"
                      }
#line 559 "type_util.m"
                      {
#line 559 "type_util.m"
                        check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3(check_hlds__type_util__TypeCtorInfo_56_56, check_hlds__type_util__TypeInfo_57_57, check_hlds__type_util__V_34_34, check_hlds__type_util__Ctors_23, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28)), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29);
                      }
#line 559 "type_util.m"
                      if (check_hlds__type_util__succeeded)
#line 559 "type_util.m"
                        {
#line 559 "type_util.m"
                          *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = ((MR_Word) check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_29);
#line 559 "type_util.m"
                          check_hlds__type_util__succeeded = MR_TRUE;
#line 559 "type_util.m"
                        }
#line 556 "type_util.m"
                    }
#line 556 "type_util.m"
                }
#line 556 "type_util.m"
            }
#line 555 "type_util.m"
        }
#line 562 "type_util.m"
        break;
#line 562 "type_util.m"
      case (MR_Integer) 2:
#line 563 "type_util.m"
        {
#line 563 "type_util.m"
          MR_Word check_hlds__type_util__EqvType_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)));
#line 563 "type_util.m"
          MR_Word check_hlds__type_util__V_62_62;
#line 499 "type_util.m"
          MR_Word check_hlds__type_util__V_61_61;

#line 500 "type_util.m"
          {
#line 500 "type_util.m"
            check_hlds__type_util__V_62_62 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
          }
#line 499 "type_util.m"
          {
#line 499 "type_util.m"
            check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__EqvType_24, check_hlds__type_util__V_62_62, &check_hlds__type_util__V_61_61);
          }
#line 563 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 563 "type_util.m"
            {
#line 563 "type_util.m"
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 563 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 563 "type_util.m"
            }
#line 563 "type_util.m"
        }
#line 562 "type_util.m"
        break;
#line 562 "type_util.m"
      case (MR_Integer) 3:
#line 562 "type_util.m"
#line 562 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 0)))) {
#line 562 "type_util.m"
          default:
#line 562 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 562 "type_util.m"
            break;
#line 562 "type_util.m"
          case (MR_Integer) 0:
#line 570 "type_util.m"
            {
#line 570 "type_util.m"
              MR_Word check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 2)));
#line 570 "type_util.m"
              MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_8, (MR_Integer) 1)));

#line 570 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 570 "type_util.m"
                {
#line 570 "type_util.m"
                  *check_hlds__type_util__STATE_VARIABLE_SeenTypes_29 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_28;
#line 570 "type_util.m"
                  check_hlds__type_util__succeeded = MR_TRUE;
#line 570 "type_util.m"
                }
#line 570 "type_util.m"
            }
#line 562 "type_util.m"
            break;
#line 562 "type_util.m"
        }
#line 562 "type_util.m"
        break;
#line 562 "type_util.m"
    }
#line 544 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 544 "type_util.m"
  }
#line 539 "type_util.m"
}

#line 536 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1(
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
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26;

#line 536 "type_util.m"
    {
#line 536 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), &check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26);
    }
#line 536 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 536 "type_util.m"
      {
#line 536 "type_util.m"
        *check_hlds__type_util__wrapper_arg_3 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_SeenTypes_26));
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

#line 532 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(
#line 532 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 532 "type_util.m"
  MR_Word check_hlds__type_util__Types_6,
#line 532 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8,
#line 532 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_9)
#line 532 "type_util.m"
{
#line 535 "type_util.m"
  {
#line 535 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 535 "type_util.m"
    MR_Word check_hlds__type_util__V_10_10;
#line 536 "type_util.m"
    MR_Box check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9;

#line 536 "type_util.m"
    {
#line 536 "type_util.m"
      check_hlds__type_util__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 536 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_10[0]));
#line 536 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 1) = ((MR_Box) (check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0_1));
#line 536 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 536 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_10_10, 3) = ((MR_Box) (check_hlds__type_util__ModuleInfo_5));
#line 536 "type_util.m"
    }
#line 536 "type_util.m"
    {
#line 536 "type_util.m"
      check_hlds__type_util__succeeded = mercury__list__foldl_4_p_3((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[5], check_hlds__type_util__V_10_10, check_hlds__type_util__Types_6, ((MR_Box) (check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_8)), &check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9);
    }
#line 536 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 536 "type_util.m"
      {
#line 536 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_9 = ((MR_Word) check_hlds__type_util__conv1_STATE_VARIABLE_SeenTypes_9);
#line 536 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 536 "type_util.m"
      }
#line 535 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 535 "type_util.m"
  }
#line 532 "type_util.m"
}

#line 502 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(
#line 502 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 502 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 502 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25,
#line 502 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_SeenTypes_26)
#line 502 "type_util.m"
{
#line 509 "type_util.m"
  {
#line 509 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 506 "type_util.m"
    {
#line 506 "type_util.m"
      check_hlds__type_util__succeeded = mercury__set__contains_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25, ((MR_Box) (check_hlds__type_util__Type_6)));
    }
#line 509 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 509 "type_util.m"
      {
#line 509 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_SeenTypes_26 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25;
#line 509 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 509 "type_util.m"
      }
#line 509 "type_util.m"
    else
#line 510 "type_util.m"
      {
#line 510 "type_util.m"
        MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27;

#line 510 "type_util.m"
        {
#line 510 "type_util.m"
          mercury__set__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, ((MR_Box) (check_hlds__type_util__Type_6)), check_hlds__type_util__STATE_VARIABLE_SeenTypes_0_25, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27);
        }
#line 513 "type_util.m"
#line 513 "type_util.m"
        switch (MR_tag((MR_Word) check_hlds__type_util__Type_6)) {
#line 513 "type_util.m"
          default:
#line 513 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 513 "type_util.m"
            break;
#line 513 "type_util.m"
          case (MR_Integer) 1:
#line 522 "type_util.m"
            {
#line 522 "type_util.m"
              MR_Word check_hlds__type_util__TypeBody_23;
#line 522 "type_util.m"
              MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28;
#line 522 "type_util.m"
              MR_Word check_hlds__type_util__Args_31;
#line 522 "type_util.m"
              MR_Word check_hlds__type_util__TypeDefn_37;
#line 522 "type_util.m"
              MR_Word check_hlds__type_util__TypeTable_41;
#line 522 "type_util.m"
              MR_Word check_hlds__type_util__TypeCtor_42;
#line 526 "type_util.m"
              MR_Word check_hlds__type_util__V_24_24;

#line 456 "type_util.m"
              {
#line 456 "type_util.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_41);
              }
#line 457 "type_util.m"
              {
#line 457 "type_util.m"
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_42);
              }
#line 522 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 522 "type_util.m"
                {
#line 458 "type_util.m"
                  {
#line 458 "type_util.m"
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_41, check_hlds__type_util__TypeCtor_42, &check_hlds__type_util__TypeDefn_37);
                  }
#line 522 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 522 "type_util.m"
                    {
#line 466 "type_util.m"
                      {
#line 466 "type_util.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_37, &check_hlds__type_util__TypeBody_23);
                      }
#line 524 "type_util.m"
                      {
#line 524 "type_util.m"
                        check_hlds__type_util__succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__TypeBody_23, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28);
                      }
#line 522 "type_util.m"
                      if (check_hlds__type_util__succeeded)
#line 522 "type_util.m"
                        {
#line 526 "type_util.m"
                          {
#line 526 "type_util.m"
                            parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__V_24_24, &check_hlds__type_util__Args_31);
                          }
#line 527 "type_util.m"
                          {
#line 527 "type_util.m"
                            return check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_31, check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                          }
#line 522 "type_util.m"
                        }
#line 522 "type_util.m"
                    }
#line 522 "type_util.m"
                }
#line 522 "type_util.m"
            }
#line 513 "type_util.m"
            break;
#line 513 "type_util.m"
          case (MR_Integer) 2:
#line 512 "type_util.m"
            {
#line 512 "type_util.m"
              *check_hlds__type_util__STATE_VARIABLE_SeenTypes_26 = check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27;
#line 512 "type_util.m"
              check_hlds__type_util__succeeded = MR_TRUE;
#line 512 "type_util.m"
            }
#line 513 "type_util.m"
            break;
#line 513 "type_util.m"
          case (MR_Integer) 3:
#line 513 "type_util.m"
#line 513 "type_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 0)))) {
#line 513 "type_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 513 "type_util.m"
              case (MR_Integer) 0:
#line 514 "type_util.m"
                {
#line 514 "type_util.m"
                  MR_Word check_hlds__type_util__Args_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 1)));
#line 514 "type_util.m"
                  MR_Word check_hlds__type_util___Kind_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_6, (MR_Integer) 2)));

#line 515 "type_util.m"
                  {
#line 515 "type_util.m"
                    return check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_9, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                  }
#line 514 "type_util.m"
                }
#line 513 "type_util.m"
                break;
#line 513 "type_util.m"
              case (MR_Integer) 1:
#line 513 "type_util.m"
              case (MR_Integer) 2:
#line 513 "type_util.m"
              case (MR_Integer) 3:
#line 522 "type_util.m"
                {
#line 522 "type_util.m"
                  MR_Word check_hlds__type_util__TypeBody_23;
#line 522 "type_util.m"
                  MR_Word check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28;
#line 522 "type_util.m"
                  MR_Word check_hlds__type_util__Args_31;
#line 522 "type_util.m"
                  MR_Word check_hlds__type_util__TypeDefn_37;
#line 522 "type_util.m"
                  MR_Word check_hlds__type_util__TypeTable_41;
#line 522 "type_util.m"
                  MR_Word check_hlds__type_util__TypeCtor_42;
#line 526 "type_util.m"
                  MR_Word check_hlds__type_util__V_24_24;

#line 456 "type_util.m"
                  {
#line 456 "type_util.m"
                    hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__TypeTable_41);
                  }
#line 457 "type_util.m"
                  {
#line 457 "type_util.m"
                    check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_42);
                  }
#line 522 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 522 "type_util.m"
                    {
#line 458 "type_util.m"
                      {
#line 458 "type_util.m"
                        check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_41, check_hlds__type_util__TypeCtor_42, &check_hlds__type_util__TypeDefn_37);
                      }
#line 522 "type_util.m"
                      if (check_hlds__type_util__succeeded)
#line 522 "type_util.m"
                        {
#line 466 "type_util.m"
                          {
#line 466 "type_util.m"
                            hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_37, &check_hlds__type_util__TypeBody_23);
                          }
#line 524 "type_util.m"
                          {
#line 524 "type_util.m"
                            check_hlds__type_util__succeeded = check_hlds__type_util__type_body_definitely_has_no_user_defined_equality_pred_5_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__TypeBody_23, check_hlds__type_util__STATE_VARIABLE_SeenTypes_27_27, &check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28);
                          }
#line 522 "type_util.m"
                          if (check_hlds__type_util__succeeded)
#line 522 "type_util.m"
                            {
#line 526 "type_util.m"
                              {
#line 526 "type_util.m"
                                parse_tree__prog_type__type_to_ctor_and_args_det_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__V_24_24, &check_hlds__type_util__Args_31);
                              }
#line 527 "type_util.m"
                              {
#line 527 "type_util.m"
                                return check_hlds__type_util__succeeded = check_hlds__type_util__types_definitely_have_no_user_defined_eq_pred_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Args_31, check_hlds__type_util__STATE_VARIABLE_SeenTypes_28_28, check_hlds__type_util__STATE_VARIABLE_SeenTypes_26);
                              }
#line 522 "type_util.m"
                            }
#line 522 "type_util.m"
                        }
#line 522 "type_util.m"
                    }
#line 522 "type_util.m"
                }
#line 513 "type_util.m"
                break;
#line 513 "type_util.m"
            }
#line 513 "type_util.m"
            break;
#line 513 "type_util.m"
        }
#line 510 "type_util.m"
      }
#line 509 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 509 "type_util.m"
  }
#line 502 "type_util.m"
}

#line 1464 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1(
#line 1464 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1464 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1464 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1464 "type_util.m"
{
#line 1464 "type_util.m"
  {
#line 1464 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1464 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1464 "type_util.m"
    {
#line 1464 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1464 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1464 "type_util.m"
  }
#line 1464 "type_util.m"
}

#line 381 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(
#line 381 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 381 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
#line 381 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
#line 381 "type_util.m"
{
#line 1463 "type_util.m"
  {
#line 1463 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1463 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1463 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1464 "type_util.m"
    {
#line 1464 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1464 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[9]));
#line 1464 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0_1));
#line 1464 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1464 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1464 "type_util.m"
    }
#line 3966 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1464 "type_util.m"
    {
#line 1464 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1464 "type_util.m"
      return;
    }
#line 1463 "type_util.m"
  }
#line 381 "type_util.m"
}

#line 1461 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1(
#line 1461 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1461 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1461 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1461 "type_util.m"
{
#line 1461 "type_util.m"
  {
#line 1461 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1461 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1461 "type_util.m"
    {
#line 1461 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1461 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1461 "type_util.m"
  }
#line 1461 "type_util.m"
}

#line 378 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_map_3_p_0(
#line 378 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 378 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
#line 378 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
#line 378 "type_util.m"
{
#line 1460 "type_util.m"
  {
#line 1460 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1460 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1460 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1461 "type_util.m"
    {
#line 1461 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1461 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[9]));
#line 1461 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_map_3_p_0_1));
#line 1461 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1461 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1461 "type_util.m"
    }
#line 4044 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1461 "type_util.m"
    {
#line 1461 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1461 "type_util.m"
      return;
    }
#line 1460 "type_util.m"
  }
#line 378 "type_util.m"
}

#line 1457 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1(
#line 1457 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1457 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1457 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1457 "type_util.m"
{
#line 1457 "type_util.m"
  {
#line 1457 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1457 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_3;

#line 1457 "type_util.m"
    {
#line 1457 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_HeadVar__3_3);
    }
#line 1457 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_3));
#line 1457 "type_util.m"
  }
#line 1457 "type_util.m"
}

#line 375 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(
#line 375 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 375 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6,
#line 375 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7)
#line 375 "type_util.m"
{
#line 1456 "type_util.m"
  {
#line 1456 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1456 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1456 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1457 "type_util.m"
    {
#line 1457 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1457 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[8]));
#line 1457 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0_1));
#line 1457 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1457 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1457 "type_util.m"
    }
#line 4122 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1457 "type_util.m"
    {
#line 1457 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_0_6, check_hlds__type_util__STATE_VARIABLE_ConstraintMap_7);
#line 1457 "type_util.m"
      return;
    }
#line 1456 "type_util.m"
  }
#line 375 "type_util.m"
}

#line 1434 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1(
#line 1434 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1434 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1434 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1434 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1434 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4)
#line 1434 "type_util.m"
{
#line 1434 "type_util.m"
  {
#line 1434 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1434 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16;

#line 1434 "type_util.m"
    {
#line 1434 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3), &check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16);
    }
#line 1434 "type_util.m"
    *check_hlds__type_util__wrapper_arg_4 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16));
#line 1434 "type_util.m"
  }
#line 1434 "type_util.m"
}

#line 370 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(
#line 370 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 370 "type_util.m"
  MR_Word check_hlds__type_util__ProofMap0_5,
#line 370 "type_util.m"
  MR_Word * check_hlds__type_util__ProofMap_6)
#line 370 "type_util.m"
{
#line 1433 "type_util.m"
  {
#line 1433 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1433 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_13_13;
#line 1433 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_14_14;
#line 1433 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;
#line 1433 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;
#line 1434 "type_util.m"
    MR_Box check_hlds__type_util__conv1_ProofMap_6;

#line 1434 "type_util.m"
    {
#line 1434 "type_util.m"
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1434 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[0]));
#line 1434 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0_1));
#line 1434 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1434 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1434 "type_util.m"
    }
#line 4210 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4212 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
#line 1435 "type_util.m"
    {
#line 1435 "type_util.m"
      check_hlds__type_util__V_8_8 = mercury__map__init_0_f_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14);
    }
#line 1434 "type_util.m"
    {
#line 1434 "type_util.m"
      mercury__map__foldl_4_p_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], check_hlds__type_util__V_7_7, check_hlds__type_util__ProofMap0_5, ((MR_Box) (check_hlds__type_util__V_8_8)), &check_hlds__type_util__conv1_ProofMap_6);
    }
#line 1434 "type_util.m"
    *check_hlds__type_util__ProofMap_6 = ((MR_Word) check_hlds__type_util__conv1_ProofMap_6);
#line 1433 "type_util.m"
  }
#line 370 "type_util.m"
}

#line 1414 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1(
#line 1414 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1414 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1414 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_2,
#line 1414 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_3,
#line 1414 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_4)
#line 1414 "type_util.m"
{
#line 1414 "type_util.m"
  {
#line 1414 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1414 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16;

#line 1414 "type_util.m"
    {
#line 1414 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_proof_map_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), ((MR_Word) check_hlds__type_util__wrapper_arg_2), ((MR_Word) check_hlds__type_util__wrapper_arg_3), &check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16);
    }
#line 1414 "type_util.m"
    *check_hlds__type_util__wrapper_arg_4 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_ProofMap_16));
#line 1414 "type_util.m"
  }
#line 1414 "type_util.m"
}

#line 367 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0(
#line 367 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 367 "type_util.m"
  MR_Word check_hlds__type_util__ProofMap0_5,
#line 367 "type_util.m"
  MR_Word * check_hlds__type_util__ProofMap_6)
#line 367 "type_util.m"
{
#line 1413 "type_util.m"
  {
#line 1413 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1413 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_13_13;
#line 1413 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_14_14;
#line 1413 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;
#line 1413 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;
#line 1414 "type_util.m"
    MR_Box check_hlds__type_util__conv1_ProofMap_6;

#line 1414 "type_util.m"
    {
#line 1414 "type_util.m"
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1414 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_9[0]));
#line 1414 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_proof_map_3_p_0_1));
#line 1414 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1414 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1414 "type_util.m"
    }
#line 4305 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_13_13 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4307 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
#line 1415 "type_util.m"
    {
#line 1415 "type_util.m"
      check_hlds__type_util__V_8_8 = mercury__map__init_0_f_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14);
    }
#line 1414 "type_util.m"
    {
#line 1414 "type_util.m"
      mercury__map__foldl_4_p_0(check_hlds__type_util__TypeCtorInfo_13_13, check_hlds__type_util__TypeCtorInfo_14_14, (MR_Word) &check_hlds__type_util_scalar_common_2[0], check_hlds__type_util__V_7_7, check_hlds__type_util__ProofMap0_5, ((MR_Box) (check_hlds__type_util__V_8_8)), &check_hlds__type_util__conv1_ProofMap_6);
    }
#line 1414 "type_util.m"
    *check_hlds__type_util__ProofMap_6 = ((MR_Word) check_hlds__type_util__conv1_ProofMap_6);
#line 1413 "type_util.m"
  }
#line 367 "type_util.m"
}

#line 1393 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1(
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
    MR_Word check_hlds__type_util__conv0_Proof_6;

#line 1393 "type_util.m"
    {
#line 1393 "type_util.m"
      check_hlds__type_util__rename_constraint_proof_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_Proof_6);
    }
#line 1393 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_Proof_6));
#line 1393 "type_util.m"
  }
#line 1393 "type_util.m"
}

#line 364 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(
#line 364 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 364 "type_util.m"
  MR_Word check_hlds__type_util__ProofMap0_5,
#line 364 "type_util.m"
  MR_Word * check_hlds__type_util__ProofMap_6)
#line 364 "type_util.m"
{
#line 1389 "type_util.m"
  {
#line 1389 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 1386 "type_util.m"
    {
#line 1386 "type_util.m"
      check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, check_hlds__type_util__ProofMap0_5);
    }
#line 1389 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1388 "type_util.m"
      *check_hlds__type_util__ProofMap_6 = check_hlds__type_util__ProofMap0_5;
#line 1389 "type_util.m"
    else
#line 1390 "type_util.m"
      {
#line 1390 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_14_14 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1390 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_15_15 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0;
#line 1390 "type_util.m"
        MR_Word check_hlds__type_util__Keys0_7;
#line 1390 "type_util.m"
        MR_Word check_hlds__type_util__Values0_8;
#line 1390 "type_util.m"
        MR_Word check_hlds__type_util__Keys_9;
#line 1390 "type_util.m"
        MR_Word check_hlds__type_util__Values_10;
#line 1390 "type_util.m"
        MR_Word check_hlds__type_util__V_11_11;

#line 1390 "type_util.m"
        {
#line 1390 "type_util.m"
          mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__ProofMap0_5, &check_hlds__type_util__Keys0_7);
        }
#line 1391 "type_util.m"
        {
#line 1391 "type_util.m"
          mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__ProofMap0_5, &check_hlds__type_util__Values0_8);
        }
#line 1392 "type_util.m"
        {
#line 1392 "type_util.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__Keys0_7, &check_hlds__type_util__Keys_9);
        }
#line 1393 "type_util.m"
        {
#line 1393 "type_util.m"
          check_hlds__type_util__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1393 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[7]));
#line 1393 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0_1));
#line 1393 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1393 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_11_11, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1393 "type_util.m"
        }
#line 1393 "type_util.m"
        {
#line 1393 "type_util.m"
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__V_11_11, check_hlds__type_util__Values0_8, &check_hlds__type_util__Values_10);
        }
#line 1394 "type_util.m"
        {
#line 1394 "type_util.m"
          mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_14_14, check_hlds__type_util__TypeCtorInfo_15_15, check_hlds__type_util__Keys_9, check_hlds__type_util__Values_10, check_hlds__type_util__ProofMap_6);
#line 1394 "type_util.m"
          return;
        }
#line 1390 "type_util.m"
      }
#line 1389 "type_util.m"
  }
#line 364 "type_util.m"
}

#line 1377 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3(
#line 1377 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1377 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1377 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1377 "type_util.m"
{
#line 1377 "type_util.m"
  {
#line 1377 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1377 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1377 "type_util.m"
    {
#line 1377 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1377 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1377 "type_util.m"
  }
#line 1377 "type_util.m"
}

#line 1367 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2(
#line 1367 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1367 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1367 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1367 "type_util.m"
{
#line 1367 "type_util.m"
  {
#line 1367 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1367 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1367 "type_util.m"
    {
#line 1367 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_rec_subst_to_constraints__1367__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1367 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1367 "type_util.m"
  }
#line 1367 "type_util.m"
}

#line 1296 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1(
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1296 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1296 "type_util.m"
{
#line 1296 "type_util.m"
  {
#line 1296 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1296 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1296 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1296 "type_util.m"
  }
#line 1296 "type_util.m"
}

#line 359 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(
#line 359 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 359 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
#line 359 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
#line 359 "type_util.m"
{
#line 1362 "type_util.m"
  {
#line 1362 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_34_34;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_35_35;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_55;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Unproven_10;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Assumed_11;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Pred_12;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Redundant_17;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys0_18;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues0_19;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys_20;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues_21;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors_22;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__V_27_27;
#line 1362 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_1));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1296 "type_util.m"
    }
#line 4608 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
    }
#line 4615 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__V_42_42, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
    }
#line 1367 "type_util.m"
    {
#line 1367 "type_util.m"
      check_hlds__type_util__Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1367 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[5]));
#line 1367 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_2));
#line 1367 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1367 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1367 "type_util.m"
    }
#line 4636 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1372 "type_util.m"
    {
#line 1372 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_12, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_17);
    }
#line 4643 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4645 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
#line 1373 "type_util.m"
    {
#line 1373 "type_util.m"
      mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_18);
    }
#line 1374 "type_util.m"
    {
#line 1374 "type_util.m"
      mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_19);
    }
#line 1375 "type_util.m"
    {
#line 1375 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_prog_constraint_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__AncestorsKeys0_18, &check_hlds__type_util__AncestorsKeys_20);
    }
#line 1377 "type_util.m"
    {
#line 1377 "type_util.m"
      check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1377 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[6]));
#line 1377 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0_3));
#line 1377 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1377 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1377 "type_util.m"
    }
#line 1377 "type_util.m"
    {
#line 1377 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_19, &check_hlds__type_util__AncestorsValues_21);
    }
#line 1379 "type_util.m"
    {
#line 1379 "type_util.m"
      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__AncestorsKeys_20, check_hlds__type_util__AncestorsValues_21, &check_hlds__type_util__Ancestors_22);
    }
#line 1380 "type_util.m"
    {
#line 1380 "type_util.m"
      MR_Word base;
#line 1380 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1380 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1380 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1380 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_17));
#line 1380 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_22));
#line 1380 "type_util.m"
    }
#line 1362 "type_util.m"
  }
#line 359 "type_util.m"
}

#line 1357 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_3(
#line 1357 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1357 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1357 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1357 "type_util.m"
{
#line 1357 "type_util.m"
  {
#line 1357 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1357 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1357 "type_util.m"
    {
#line 1357 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1357 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1357 "type_util.m"
  }
#line 1357 "type_util.m"
}

#line 1348 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_2(
#line 1348 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1348 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1348 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1348 "type_util.m"
{
#line 1348 "type_util.m"
  {
#line 1348 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1348 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1348 "type_util.m"
    {
#line 1348 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_subst_to_constraints__1348__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1348 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1348 "type_util.m"
  }
#line 1348 "type_util.m"
}

#line 1293 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0_1(
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
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1293 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1293 "type_util.m"
  }
#line 1293 "type_util.m"
}

#line 356 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraints_3_p_0(
#line 356 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 356 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
#line 356 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
#line 356 "type_util.m"
{
#line 1343 "type_util.m"
  {
#line 1343 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_34_34;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_35_35;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_46;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_55;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Unproven_10;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Assumed_11;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Pred_12;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Redundant_17;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys0_18;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues0_19;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsKeys_20;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__AncestorsValues_21;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors_22;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__V_27_27;
#line 1343 "type_util.m"
    MR_Word check_hlds__type_util__V_42_42;

#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      check_hlds__type_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_1));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_42_42, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1293 "type_util.m"
    }
#line 4869 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_46 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__TypeCtorInfo_12_46, check_hlds__type_util__V_42_42, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
    }
#line 4876 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_55 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__TypeCtorInfo_12_55, check_hlds__type_util__V_42_42, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
    }
#line 1348 "type_util.m"
    {
#line 1348 "type_util.m"
      check_hlds__type_util__Pred_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1348 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[5]));
#line 1348 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_2));
#line 1348 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1348 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_12, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1348 "type_util.m"
    }
#line 4897 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1353 "type_util.m"
    {
#line 1353 "type_util.m"
      mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__TypeInfo_32_32, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_12, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_17);
    }
#line 4904 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_34_34 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 4906 "check_hlds.type_util.c"
    check_hlds__type_util__TypeInfo_35_35 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
#line 1354 "type_util.m"
    {
#line 1354 "type_util.m"
      mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_18);
    }
#line 1355 "type_util.m"
    {
#line 1355 "type_util.m"
      mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_19);
    }
#line 1356 "type_util.m"
    {
#line 1356 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_prog_constraint_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__AncestorsKeys0_18, &check_hlds__type_util__AncestorsKeys_20);
    }
#line 1357 "type_util.m"
    {
#line 1357 "type_util.m"
      check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1357 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[6]));
#line 1357 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraints_3_p_0_3));
#line 1357 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1357 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1357 "type_util.m"
    }
#line 1357 "type_util.m"
    {
#line 1357 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_19, &check_hlds__type_util__AncestorsValues_21);
    }
#line 1359 "type_util.m"
    {
#line 1359 "type_util.m"
      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_34_34, check_hlds__type_util__TypeInfo_35_35, check_hlds__type_util__AncestorsKeys_20, check_hlds__type_util__AncestorsValues_21, &check_hlds__type_util__Ancestors_22);
    }
#line 1360 "type_util.m"
    {
#line 1360 "type_util.m"
      MR_Word base;
#line 1360 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1360 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1360 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1360 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1360 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_17));
#line 1360 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_22));
#line 1360 "type_util.m"
    }
#line 1343 "type_util.m"
  }
#line 356 "type_util.m"
}

#line 1334 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3(
#line 1334 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1334 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1334 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1334 "type_util.m"
{
#line 1334 "type_util.m"
  {
#line 1334 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1334 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__3_3;

#line 1334 "type_util.m"
    {
#line 1334 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv2_HeadVar__3_3);
    }
#line 1334 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__3_3));
#line 1334 "type_util.m"
  }
#line 1334 "type_util.m"
}

#line 1320 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2(
#line 1320 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1320 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1320 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1320 "type_util.m"
{
#line 1320 "type_util.m"
  {
#line 1320 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1320 "type_util.m"
    MR_Word check_hlds__type_util__conv1_HeadVar__3_26;

#line 1320 "type_util.m"
    {
#line 1320 "type_util.m"
      check_hlds__type_util__IntroducedFrom__pred__apply_variable_renaming_to_constraints__1320__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv1_HeadVar__3_26);
    }
#line 1320 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv1_HeadVar__3_26));
#line 1320 "type_util.m"
  }
#line 1320 "type_util.m"
}

#line 1290 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1(
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1290 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1290 "type_util.m"
{
#line 1290 "type_util.m"
  {
#line 1290 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1290 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1290 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1290 "type_util.m"
  }
#line 1290 "type_util.m"
}

#line 353 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0(
#line 353 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 353 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_23,
#line 353 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_24)
#line 353 "type_util.m"
{
#line 1300 "type_util.m"
  {
#line 1300 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1300 "type_util.m"
    MR_Word check_hlds__type_util__Unproven0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 0)));
#line 1300 "type_util.m"
    MR_Word check_hlds__type_util__Assumed0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 1)));
#line 1300 "type_util.m"
    MR_Word check_hlds__type_util__Redundant0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 2)));
#line 1300 "type_util.m"
    MR_Word check_hlds__type_util__Ancestors0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraints_0_23, (MR_Integer) 3)));
#line 1306 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31;
#line 1306 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_32_32;
#line 1306 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_33_33;
#line 1306 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_34_34;

#line 1306 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__Unproven0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1306 "type_util.m"
      {
#line 1307 "type_util.m"
        check_hlds__type_util__succeeded = (check_hlds__type_util__Assumed0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1306 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1306 "type_util.m"
          {
#line 5104 "check_hlds.type_util.c"
            check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0;
#line 5106 "check_hlds.type_util.c"
            check_hlds__type_util__TypeInfo_32_32 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1308 "type_util.m"
            {
#line 1308 "type_util.m"
              check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__TypeInfo_32_32, check_hlds__type_util__Redundant0_8);
            }
#line 1306 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1306 "type_util.m"
              {
#line 5117 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_33_33 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 5119 "check_hlds.type_util.c"
                check_hlds__type_util__TypeInfo_34_34 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
#line 1309 "type_util.m"
                {
#line 1309 "type_util.m"
                  check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_util__TypeCtorInfo_33_33, check_hlds__type_util__TypeInfo_34_34, check_hlds__type_util__Ancestors0_9);
                }
#line 1306 "type_util.m"
              }
#line 1306 "type_util.m"
          }
#line 1306 "type_util.m"
      }
#line 1312 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1312 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = check_hlds__type_util__STATE_VARIABLE_Constraints_0_23;
#line 1312 "type_util.m"
    else
#line 1314 "type_util.m"
      {
#line 1314 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_12_54;
#line 1314 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_12_63;
#line 1314 "type_util.m"
        MR_Word check_hlds__type_util__Unproven_10;
#line 1314 "type_util.m"
        MR_Word check_hlds__type_util__Assumed_11;
#line 1314 "type_util.m"
        MR_Word check_hlds__type_util__Redundant_12;
#line 1314 "type_util.m"
        MR_Word check_hlds__type_util__Ancestors_18;
#line 1314 "type_util.m"
        MR_Word check_hlds__type_util__V_50_50;

#line 1290 "type_util.m"
        {
#line 1290 "type_util.m"
          check_hlds__type_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
#line 1290 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_1));
#line 1290 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1290 "type_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_util__V_50_50, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1290 "type_util.m"
        }
#line 5169 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_12_54 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1290 "type_util.m"
        {
#line 1290 "type_util.m"
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__TypeCtorInfo_12_54, check_hlds__type_util__V_50_50, check_hlds__type_util__Unproven0_6, &check_hlds__type_util__Unproven_10);
        }
#line 5176 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_12_63 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1290 "type_util.m"
        {
#line 1290 "type_util.m"
          mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_63, check_hlds__type_util__TypeCtorInfo_12_63, check_hlds__type_util__V_50_50, check_hlds__type_util__Assumed0_7, &check_hlds__type_util__Assumed_11);
        }
#line 1317 "type_util.m"
        {
#line 1317 "type_util.m"
          check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, (MR_Word) &check_hlds__type_util_scalar_common_1[3], check_hlds__type_util__Redundant0_8);
        }
#line 1319 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1318 "type_util.m"
          check_hlds__type_util__Redundant_12 = check_hlds__type_util__Redundant0_8;
#line 1319 "type_util.m"
        else
#line 1324 "type_util.m"
          {
#line 1324 "type_util.m"
            MR_Word check_hlds__type_util__TypeInfo_38_38;
#line 1324 "type_util.m"
            MR_Word check_hlds__type_util__Pred_13;

#line 1320 "type_util.m"
            {
#line 1320 "type_util.m"
              check_hlds__type_util__Pred_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1320 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[3]));
#line 1320 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_2));
#line 1320 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1320 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__Pred_13, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1320 "type_util.m"
            }
#line 5215 "check_hlds.type_util.c"
            check_hlds__type_util__TypeInfo_38_38 = (MR_Word) &check_hlds__type_util_scalar_common_1[3];
#line 1325 "type_util.m"
            {
#line 1325 "type_util.m"
              mercury__map__map_values_only_3_p_0(check_hlds__type_util__TypeInfo_38_38, check_hlds__type_util__TypeInfo_38_38, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_class_id_0, check_hlds__type_util__Pred_13, check_hlds__type_util__Redundant0_8, &check_hlds__type_util__Redundant_12);
            }
#line 1324 "type_util.m"
          }
#line 1327 "type_util.m"
        {
#line 1327 "type_util.m"
          check_hlds__type_util__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, (MR_Word) &check_hlds__type_util_scalar_common_1[4], check_hlds__type_util__Ancestors0_9);
        }
#line 1329 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1328 "type_util.m"
          check_hlds__type_util__Ancestors_18 = check_hlds__type_util__Ancestors0_9;
#line 1329 "type_util.m"
        else
#line 1330 "type_util.m"
          {
#line 1330 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtorInfo_42_42 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 1330 "type_util.m"
            MR_Word check_hlds__type_util__TypeInfo_43_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[4];
#line 1330 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsKeys0_19;
#line 1330 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsValues0_20;
#line 1330 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsKeys_21;
#line 1330 "type_util.m"
            MR_Word check_hlds__type_util__AncestorsValues_22;
#line 1330 "type_util.m"
            MR_Word check_hlds__type_util__V_27_27;

#line 1330 "type_util.m"
            {
#line 1330 "type_util.m"
              mercury__map__keys_2_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsKeys0_19);
            }
#line 1331 "type_util.m"
            {
#line 1331 "type_util.m"
              mercury__map__values_2_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__Ancestors0_9, &check_hlds__type_util__AncestorsValues0_20);
            }
#line 1332 "type_util.m"
            {
#line 1332 "type_util.m"
              parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraint_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__AncestorsKeys0_19, &check_hlds__type_util__AncestorsKeys_21);
            }
#line 1334 "type_util.m"
            {
#line 1334 "type_util.m"
              check_hlds__type_util__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1334 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[4]));
#line 1334 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraints_3_p_0_3));
#line 1334 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1334 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_27_27, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1334 "type_util.m"
            }
#line 1334 "type_util.m"
            {
#line 1334 "type_util.m"
              mercury__list__map_3_p_0(check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__V_27_27, check_hlds__type_util__AncestorsValues0_20, &check_hlds__type_util__AncestorsValues_22);
            }
#line 1336 "type_util.m"
            {
#line 1336 "type_util.m"
              mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeCtorInfo_42_42, check_hlds__type_util__TypeInfo_43_43, check_hlds__type_util__AncestorsKeys_21, check_hlds__type_util__AncestorsValues_22, &check_hlds__type_util__Ancestors_18);
            }
#line 1330 "type_util.m"
          }
#line 1339 "type_util.m"
        {
#line 1339 "type_util.m"
          MR_Word base;
#line 1339 "type_util.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1339 "type_util.m"
          *check_hlds__type_util__STATE_VARIABLE_Constraints_24 = base;
#line 1339 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Unproven_10));
#line 1339 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__Assumed_11));
#line 1339 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__Redundant_12));
#line 1339 "type_util.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Ancestors_18));
#line 1339 "type_util.m"
        }
#line 1314 "type_util.m"
      }
#line 1300 "type_util.m"
  }
#line 353 "type_util.m"
}

#line 1296 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1(
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1296 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1296 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1296 "type_util.m"
{
#line 1296 "type_util.m"
  {
#line 1296 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1296 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1296 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1296 "type_util.m"
  }
#line 1296 "type_util.m"
}

#line 348 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0(
#line 348 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 348 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
#line 348 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
#line 348 "type_util.m"
{
#line 1295 "type_util.m"
  {
#line 1295 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1295 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1295 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_rec_subst_to_constraint_list_3_p_0_1));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1296 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1296 "type_util.m"
    }
#line 5382 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1296 "type_util.m"
    {
#line 1296 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1296 "type_util.m"
      return;
    }
#line 1295 "type_util.m"
  }
#line 348 "type_util.m"
}

#line 1293 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1(
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
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      check_hlds__type_util__apply_subst_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1293 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1293 "type_util.m"
  }
#line 1293 "type_util.m"
}

#line 345 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_list_3_p_0(
#line 345 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 345 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
#line 345 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
#line 345 "type_util.m"
{
#line 1292 "type_util.m"
  {
#line 1292 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1292 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1292 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[2]));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_subst_to_constraint_list_3_p_0_1));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1293 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Subst_4));
#line 1293 "type_util.m"
    }
#line 5460 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1293 "type_util.m"
    {
#line 1293 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1293 "type_util.m"
      return;
    }
#line 1292 "type_util.m"
  }
#line 345 "type_util.m"
}

#line 1290 "type_util.m"
static void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1(
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1290 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1,
#line 1290 "type_util.m"
  MR_Box * check_hlds__type_util__wrapper_arg_2)
#line 1290 "type_util.m"
{
#line 1290 "type_util.m"
  {
#line 1290 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1290 "type_util.m"
    MR_Word check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11;

#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1), &check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11);
    }
#line 1290 "type_util.m"
    *check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_STATE_VARIABLE_Constraint_11));
#line 1290 "type_util.m"
  }
#line 1290 "type_util.m"
}

#line 342 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0(
#line 342 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 342 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraints_0_6,
#line 342 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraints_7)
#line 342 "type_util.m"
{
#line 1289 "type_util.m"
  {
#line 1289 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1289 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_12_12;
#line 1289 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;

#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      check_hlds__type_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1290 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[1]));
#line 1290 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 1) = ((MR_Box) (check_hlds__type_util__apply_variable_renaming_to_constraint_list_3_p_0_1));
#line 1290 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1290 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_8_8, 3) = ((MR_Box) (check_hlds__type_util__Renaming_4));
#line 1290 "type_util.m"
    }
#line 5538 "check_hlds.type_util.c"
    check_hlds__type_util__TypeCtorInfo_12_12 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 1290 "type_util.m"
    {
#line 1290 "type_util.m"
      mercury__list__map_3_p_0(check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__TypeCtorInfo_12_12, check_hlds__type_util__V_8_8, check_hlds__type_util__STATE_VARIABLE_Constraints_0_6, check_hlds__type_util__STATE_VARIABLE_Constraints_7);
#line 1290 "type_util.m"
      return;
    }
#line 1289 "type_util.m"
  }
#line 342 "type_util.m"
}

#line 337 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(
#line 337 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 337 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
#line 337 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
#line 337 "type_util.m"
{
#line 1282 "type_util.m"
  {
#line 1282 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1282 "type_util.m"
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
#line 1282 "type_util.m"
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
#line 1282 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1282 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_9;

#line 1284 "type_util.m"
    {
#line 1284 "type_util.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
#line 1285 "type_util.m"
    {
#line 1285 "type_util.m"
      MR_Word base;
#line 1285 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1285 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1285 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1285 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
#line 1285 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
#line 1285 "type_util.m"
    }
#line 1282 "type_util.m"
  }
#line 337 "type_util.m"
}

#line 334 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_subst_to_constraint_3_p_0(
#line 334 "type_util.m"
  MR_Word check_hlds__type_util__Subst_4,
#line 334 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
#line 334 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
#line 334 "type_util.m"
{
#line 1277 "type_util.m"
  {
#line 1277 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1277 "type_util.m"
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
#line 1277 "type_util.m"
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
#line 1277 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1277 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_9;

#line 1279 "type_util.m"
    {
#line 1279 "type_util.m"
      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__Subst_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
#line 1280 "type_util.m"
    {
#line 1280 "type_util.m"
      MR_Word base;
#line 1280 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1280 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1280 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
#line 1280 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
#line 1280 "type_util.m"
    }
#line 1277 "type_util.m"
  }
#line 334 "type_util.m"
}

#line 331 "type_util.m"
void MR_CALL 
check_hlds__type_util__apply_variable_renaming_to_constraint_3_p_0(
#line 331 "type_util.m"
  MR_Word check_hlds__type_util__Renaming_4,
#line 331 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_Constraint_0_10,
#line 331 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_Constraint_11)
#line 331 "type_util.m"
{
#line 1272 "type_util.m"
  {
#line 1272 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1272 "type_util.m"
    MR_Word check_hlds__type_util__Ids_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 0)));
#line 1272 "type_util.m"
    MR_Word check_hlds__type_util__ClassName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 1)));
#line 1272 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__STATE_VARIABLE_Constraint_0_10, (MR_Integer) 2)));
#line 1272 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_9;

#line 1274 "type_util.m"
    {
#line 1274 "type_util.m"
      parse_tree__prog_type_subst__apply_variable_renaming_to_type_list_3_p_0(check_hlds__type_util__Renaming_4, check_hlds__type_util__ArgTypes0_8, &check_hlds__type_util__ArgTypes_9);
    }
#line 1275 "type_util.m"
    {
#line 1275 "type_util.m"
      MR_Word base;
#line 1275 "type_util.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1275 "type_util.m"
      *check_hlds__type_util__STATE_VARIABLE_Constraint_11 = base;
#line 1275 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__Ids_6));
#line 1275 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ClassName_7));
#line 1275 "type_util.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__ArgTypes_9));
#line 1275 "type_util.m"
    }
#line 1272 "type_util.m"
  }
#line 331 "type_util.m"
}

#line 1241 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1(
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1241 "type_util.m"
{
#line 1241 "type_util.m"
  {
#line 1241 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1241 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;

#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      return check_hlds__type_util__succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1241 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1241 "type_util.m"
  }
#line 1241 "type_util.m"
}

#line 323 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0(
#line 323 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_4,
#line 323 "type_util.m"
  MR_Word check_hlds__type_util__VarsSet0_5)
#line 323 "type_util.m"
{
#line 1249 "type_util.m"
  {
#line 1249 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1249 "type_util.m"
    MR_Word check_hlds__type_util__VarsSet_6;
#line 1249 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_9_9 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 1249 "type_util.m"
    MR_Word check_hlds__type_util__VarsList0_7;
#line 1249 "type_util.m"
    MR_Word check_hlds__type_util__VarsList_8;
#line 1249 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;

#line 1251 "type_util.m"
    {
#line 1251 "type_util.m"
      check_hlds__type_util__VarsList0_7 = parse_tree__set_of_var__to_sorted_list_1_f_0(check_hlds__type_util__TypeCtorInfo_9_9, check_hlds__type_util__VarsSet0_5);
    }
#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      check_hlds__type_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_8[2]));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_from_set_of_var_2_f_0_1));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 3) = ((MR_Box) (check_hlds__type_util__VarTypes_4));
#line 1241 "type_util.m"
    }
#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__V_13_13, check_hlds__type_util__VarsList0_7, &check_hlds__type_util__VarsList_8);
    }
#line 1253 "type_util.m"
    {
#line 1253 "type_util.m"
      check_hlds__type_util__VarsSet_6 = parse_tree__set_of_var__sorted_list_to_set_1_f_0(check_hlds__type_util__TypeCtorInfo_9_9, check_hlds__type_util__VarsList_8);
    }
#line 1249 "type_util.m"
    return check_hlds__type_util__VarsSet_6;
#line 1249 "type_util.m"
  }
#line 323 "type_util.m"
}

#line 1241 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1(
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1241 "type_util.m"
{
#line 1241 "type_util.m"
  {
#line 1241 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1241 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;

#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      return check_hlds__type_util__succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1241 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1241 "type_util.m"
  }
#line 1241 "type_util.m"
}

#line 321 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0(
#line 321 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_4,
#line 321 "type_util.m"
  MR_Word check_hlds__type_util__VarsSet0_5)
#line 321 "type_util.m"
{
#line 1244 "type_util.m"
  {
#line 1244 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1244 "type_util.m"
    MR_Word check_hlds__type_util__VarsSet_6;
#line 1244 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfo_9_9 = (MR_Word) &check_hlds__type_util_scalar_common_1[2];
#line 1244 "type_util.m"
    MR_Word check_hlds__type_util__VarsList0_7;
#line 1244 "type_util.m"
    MR_Word check_hlds__type_util__VarsList_8;
#line 1244 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;

#line 1245 "type_util.m"
    {
#line 1245 "type_util.m"
      check_hlds__type_util__VarsList0_7 = mercury__set__to_sorted_list_1_f_0(check_hlds__type_util__TypeInfo_9_9, check_hlds__type_util__VarsSet0_5);
    }
#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      check_hlds__type_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_8[2]));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_from_set_2_f_0_1));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 3) = ((MR_Box) (check_hlds__type_util__VarTypes_4));
#line 1241 "type_util.m"
    }
#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__V_13_13, check_hlds__type_util__VarsList0_7, &check_hlds__type_util__VarsList_8);
    }
#line 1247 "type_util.m"
    {
#line 1247 "type_util.m"
      check_hlds__type_util__VarsSet_6 = mercury__set__sorted_list_to_set_1_f_0(check_hlds__type_util__TypeInfo_9_9, check_hlds__type_util__VarsList_8);
    }
#line 1244 "type_util.m"
    return check_hlds__type_util__VarsSet_6;
#line 1244 "type_util.m"
  }
#line 321 "type_util.m"
}

#line 1241 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0_1(
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1241 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1241 "type_util.m"
{
#line 1241 "type_util.m"
  {
#line 1241 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1241 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;

#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      return check_hlds__type_util__succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1241 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1241 "type_util.m"
  }
#line 1241 "type_util.m"
}

#line 320 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__remove_typeinfo_vars_2_f_0(
#line 320 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_4,
#line 320 "type_util.m"
  MR_Word check_hlds__type_util__VarsList_5)
#line 320 "type_util.m"
{
#line 1240 "type_util.m"
  {
#line 1240 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1240 "type_util.m"
    MR_Word check_hlds__type_util__NonTypeInfoVarsList_6;
#line 1240 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;

#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      check_hlds__type_util__V_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_8[2]));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 1) = ((MR_Box) (check_hlds__type_util__remove_typeinfo_vars_2_f_0_1));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1241 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, 3) = ((MR_Box) (check_hlds__type_util__VarTypes_4));
#line 1241 "type_util.m"
    }
#line 1241 "type_util.m"
    {
#line 1241 "type_util.m"
      mercury__list__negated_filter_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__V_7_7, check_hlds__type_util__VarsList_5, &check_hlds__type_util__NonTypeInfoVarsList_6);
    }
#line 1240 "type_util.m"
    return check_hlds__type_util__NonTypeInfoVarsList_6;
#line 1240 "type_util.m"
  }
#line 320 "type_util.m"
}

#line 1260 "type_util.m"
static MR_bool MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1(
#line 1260 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1260 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1260 "type_util.m"
{
#line 1260 "type_util.m"
  {
#line 1260 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1260 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;

#line 1260 "type_util.m"
    {
#line 1260 "type_util.m"
      return check_hlds__type_util__succeeded = check_hlds__type_util__var_is_introduced_type_info_type_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1260 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1260 "type_util.m"
  }
#line 1260 "type_util.m"
}

#line 315 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__put_typeinfo_vars_first_2_f_0(
#line 315 "type_util.m"
  MR_Word check_hlds__type_util__VarsList_4,
#line 315 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_5)
#line 315 "type_util.m"
{
#line 1236 "type_util.m"
  {
#line 1236 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1236 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__3_3;
#line 1236 "type_util.m"
    MR_Word check_hlds__type_util__TypeInfoVarsList_6;
#line 1236 "type_util.m"
    MR_Word check_hlds__type_util__NonTypeInfoVarsList_7;
#line 1236 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;

#line 1260 "type_util.m"
    {
#line 1260 "type_util.m"
      check_hlds__type_util__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1260 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_8[2]));
#line 1260 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 1) = ((MR_Box) (check_hlds__type_util__put_typeinfo_vars_first_2_f_0_1));
#line 1260 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1260 "type_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_util__V_13_13, 3) = ((MR_Box) (check_hlds__type_util__VarTypes_5));
#line 1260 "type_util.m"
    }
#line 1260 "type_util.m"
    {
#line 1260 "type_util.m"
      mercury__list__filter_4_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__V_13_13, check_hlds__type_util__VarsList_4, &check_hlds__type_util__TypeInfoVarsList_6, &check_hlds__type_util__NonTypeInfoVarsList_7);
    }
#line 1236 "type_util.m"
    {
#line 1236 "type_util.m"
      check_hlds__type_util__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_util_scalar_common_1[2], check_hlds__type_util__TypeInfoVarsList_6, check_hlds__type_util__NonTypeInfoVarsList_7);
    }
#line 1236 "type_util.m"
    return check_hlds__type_util__HeadVar__3_3;
#line 1236 "type_util.m"
  }
#line 315 "type_util.m"
}

#line 1228 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0_1(
#line 1228 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1228 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1228 "type_util.m"
{
#line 1228 "type_util.m"
  {
#line 1228 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1228 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1228 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_15;

#line 1228 "type_util.m"
    {
#line 1228 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_15 = check_hlds__type_util__IntroducedFrom__func__maybe_get_higher_order_arg_types__1228__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1228 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_15));
#line 1228 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1228 "type_util.m"
  }
#line 1228 "type_util.m"
}

#line 306 "type_util.m"
void MR_CALL 
check_hlds__type_util__maybe_get_higher_order_arg_types_3_p_0(
#line 306 "type_util.m"
  MR_Word check_hlds__type_util__MaybeType_4,
#line 306 "type_util.m"
  MR_Integer check_hlds__type_util__Arity_5,
#line 306 "type_util.m"
  MR_Word * check_hlds__type_util__MaybeTypes_6)
#line 306 "type_util.m"
{
#line 1229 "type_util.m"
  {
#line 1229 "type_util.m"
    MR_bool check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__MaybeType_4)) == (MR_mktag((MR_Integer) 1)));
#line 1229 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_11;
#line 1225 "type_util.m"
    MR_Word check_hlds__type_util__Type_7;
#line 1226 "type_util.m"
    MR_Word check_hlds__type_util__V_8_8;
#line 1226 "type_util.m"
    MR_Word check_hlds__type_util__V_9_9;

#line 1225 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1225 "type_util.m"
      {
#line 1225 "type_util.m"
        check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__MaybeType_4, (MR_Integer) 0)));
#line 1226 "type_util.m"
        {
#line 1226 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_higher_order_details_5_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__V_8_8, &check_hlds__type_util__V_9_9, &check_hlds__type_util__ArgTypes_11);
        }
#line 1225 "type_util.m"
      }
#line 1229 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1228 "type_util.m"
      {
#line 1228 "type_util.m"
        {
#line 1228 "type_util.m"
          *check_hlds__type_util__MaybeTypes_6 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[1], (MR_Word) &check_hlds__type_util_scalar_common_2[6], check_hlds__type_util__ArgTypes_11);
        }
#line 1228 "type_util.m"
      }
#line 1229 "type_util.m"
    else
#line 1230 "type_util.m"
      {
#line 1230 "type_util.m"
        {
#line 1230 "type_util.m"
          mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[1], check_hlds__type_util__Arity_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__type_util__MaybeTypes_6);
#line 1230 "type_util.m"
          return;
        }
#line 1230 "type_util.m"
      }
#line 1229 "type_util.m"
  }
#line 306 "type_util.m"
}

#line 1215 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0_1(
#line 1215 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1215 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1215 "type_util.m"
{
#line 1215 "type_util.m"
  {
#line 1215 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1215 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1215 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_20;

#line 1215 "type_util.m"
    {
#line 1215 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_20 = check_hlds__type_util__IntroducedFrom__func__maybe_get_cons_id_arg_types__1215__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1215 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_20));
#line 1215 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1215 "type_util.m"
  }
#line 1215 "type_util.m"
}

#line 303 "type_util.m"
void MR_CALL 
check_hlds__type_util__maybe_get_cons_id_arg_types_5_p_0(
#line 303 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_6,
#line 303 "type_util.m"
  MR_Word check_hlds__type_util__MaybeType_7,
#line 303 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_8,
#line 303 "type_util.m"
  MR_Integer check_hlds__type_util__Arity_9,
#line 303 "type_util.m"
  MR_Word * check_hlds__type_util__MaybeTypes_10)
#line 303 "type_util.m"
{
#line 1219 "type_util.m"
  {
#line 1219 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 1203 "type_util.m"
    if (((((MR_tag((MR_Word) check_hlds__type_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1202 "type_util.m"
      check_hlds__type_util__succeeded = MR_TRUE;
#line 1203 "type_util.m"
    else
#line 1203 "type_util.m"
    if (((((MR_tag((MR_Word) check_hlds__type_util__ConsId_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__ConsId_8, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1203 "type_util.m"
      check_hlds__type_util__succeeded = MR_TRUE;
#line 1203 "type_util.m"
    else
#line 1203 "type_util.m"
      check_hlds__type_util__succeeded = MR_FALSE;
#line 1219 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1216 "type_util.m"
      {
#line 1216 "type_util.m"
        MR_Word check_hlds__type_util__Types_16;
#line 1207 "type_util.m"
        MR_Word check_hlds__type_util__TypeCtorInfo_23_23;
#line 1207 "type_util.m"
        MR_Word check_hlds__type_util__Type_15;
#line 1207 "type_util.m"
        MR_Integer check_hlds__type_util__V_27_27;

#line 1207 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__MaybeType_7)) == (MR_mktag((MR_Integer) 1)));
#line 1207 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1207 "type_util.m"
          {
#line 1207 "type_util.m"
            check_hlds__type_util__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__MaybeType_7, (MR_Integer) 0)));
#line 1211 "type_util.m"
            {
#line 1211 "type_util.m"
              check_hlds__type_util__succeeded = check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(check_hlds__type_util__ModuleInfo_6, check_hlds__type_util__Type_15, check_hlds__type_util__ConsId_8, &check_hlds__type_util__Types_16);
            }
#line 1207 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1207 "type_util.m"
              {
#line 6225 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_23_23 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1213 "type_util.m"
                {
#line 1213 "type_util.m"
                  mercury__list__length_2_p_0(check_hlds__type_util__TypeCtorInfo_23_23, check_hlds__type_util__Types_16, &check_hlds__type_util__V_27_27);
                }
#line 1213 "type_util.m"
                check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_9 == check_hlds__type_util__V_27_27);
#line 1207 "type_util.m"
              }
#line 1207 "type_util.m"
          }
#line 1216 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1215 "type_util.m"
          {
#line 1215 "type_util.m"
            {
#line 1215 "type_util.m"
              *check_hlds__type_util__MaybeTypes_10 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, (MR_Word) &check_hlds__type_util_scalar_common_1[1], (MR_Word) &check_hlds__type_util_scalar_common_2[5], check_hlds__type_util__Types_16);
            }
#line 1215 "type_util.m"
          }
#line 1216 "type_util.m"
        else
#line 1217 "type_util.m"
          {
#line 1217 "type_util.m"
            {
#line 1217 "type_util.m"
              mercury__list__duplicate_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[1], check_hlds__type_util__Arity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), check_hlds__type_util__MaybeTypes_10);
#line 1217 "type_util.m"
              return;
            }
#line 1217 "type_util.m"
          }
#line 1216 "type_util.m"
      }
#line 1219 "type_util.m"
    else
#line 1220 "type_util.m"
      *check_hlds__type_util__MaybeTypes_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1219 "type_util.m"
  }
#line 303 "type_util.m"
}

#line 294 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__is_region_var_2_p_0(
#line 294 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_3,
#line 294 "type_util.m"
  MR_Word check_hlds__type_util__Var_4)
#line 294 "type_util.m"
{
#line 1193 "type_util.m"
  {
#line 1193 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1193 "type_util.m"
    MR_Word check_hlds__type_util__Type_5;
#line 1193 "type_util.m"
    MR_Word check_hlds__type_util__V_6_6;

#line 1194 "type_util.m"
    {
#line 1194 "type_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__type_util__VarTypes_3, check_hlds__type_util__Var_4, &check_hlds__type_util__Type_5);
    }
#line 1195 "type_util.m"
    {
#line 1195 "type_util.m"
      check_hlds__type_util__V_6_6 = parse_tree__builtin_lib_types__region_type_0_f_0();
    }
#line 1195 "type_util.m"
    {
#line 1195 "type_util.m"
      return check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_5, check_hlds__type_util__V_6_6);
    }
#line 1193 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1193 "type_util.m"
  }
#line 294 "type_util.m"
}

#line 290 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_not_stored_in_region_2_p_0(
#line 290 "type_util.m"
  MR_Word check_hlds__type_util__Type_3,
#line 290 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4)
#line 290 "type_util.m"
{
#line 1186 "type_util.m"
  {
#line 1186 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 425 "type_util.m"
    {
#line 425 "type_util.m"
      MR_Word check_hlds__type_util__TypeCtor_12;

#line 426 "type_util.m"
      {
#line 426 "type_util.m"
        check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_3, &check_hlds__type_util__TypeCtor_12);
      }
#line 425 "type_util.m"
      if (check_hlds__type_util__succeeded)
#line 427 "type_util.m"
        {
#line 427 "type_util.m"
          check_hlds__type_util__succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_12);
        }
#line 425 "type_util.m"
    }
#line 1186 "type_util.m"
    if (!(check_hlds__type_util__succeeded))
#line 1186 "type_util.m"
      {
#line 1187 "type_util.m"
        {
#line 1187 "type_util.m"
          MR_Word check_hlds__type_util__V_5_5;

#line 689 "type_util.m"
          {
#line 689 "type_util.m"
            check_hlds__type_util__V_5_5 = check_hlds__type_util__check_dummy_type_2_3_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__Type_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
          }
#line 1187 "type_util.m"
          check_hlds__type_util__succeeded = (check_hlds__type_util__V_5_5 == (MR_Integer) 0);
#line 1187 "type_util.m"
        }
#line 1186 "type_util.m"
        if (!(check_hlds__type_util__succeeded))
#line 1186 "type_util.m"
          {
#line 1188 "type_util.m"
            {
#line 1188 "type_util.m"
              MR_Word check_hlds__type_util__V_6_6;

#line 1188 "type_util.m"
              {
#line 1188 "type_util.m"
                check_hlds__type_util__V_6_6 = parse_tree__builtin_lib_types__type_info_type_0_f_0();
              }
#line 1188 "type_util.m"
              {
#line 1188 "type_util.m"
                check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_3, check_hlds__type_util__V_6_6);
              }
#line 1188 "type_util.m"
            }
#line 1186 "type_util.m"
            if (!(check_hlds__type_util__succeeded))
#line 1186 "type_util.m"
              {
#line 1189 "type_util.m"
                {
#line 1189 "type_util.m"
                  MR_Word check_hlds__type_util__V_7_7;

#line 1189 "type_util.m"
                  {
#line 1189 "type_util.m"
                    check_hlds__type_util__V_7_7 = parse_tree__builtin_lib_types__type_ctor_info_type_0_f_0();
                  }
#line 1189 "type_util.m"
                  {
#line 1189 "type_util.m"
                    check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_3, check_hlds__type_util__V_7_7);
                  }
#line 1189 "type_util.m"
                }
#line 1186 "type_util.m"
                if (!(check_hlds__type_util__succeeded))
#line 1190 "type_util.m"
                  {
#line 1190 "type_util.m"
                    return check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_var_1_p_0(check_hlds__type_util__Type_3);
                  }
#line 1186 "type_util.m"
              }
#line 1186 "type_util.m"
          }
#line 1186 "type_util.m"
      }
#line 1186 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1186 "type_util.m"
  }
#line 290 "type_util.m"
}

#line 285 "type_util.m"
MR_Integer MR_CALL 
check_hlds__type_util__cons_id_adjusted_arity_3_f_0(
#line 285 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 285 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 285 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7)
#line 285 "type_util.m"
{
#line 1166 "type_util.m"
  {
#line 1166 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1166 "type_util.m"
    MR_Integer check_hlds__type_util__AdjustedArity_8;
#line 1166 "type_util.m"
    MR_Integer check_hlds__type_util__ConsArity_9;
#line 1179 "type_util.m"
    MR_Word check_hlds__type_util__ConsDefn_10;

#line 1169 "type_util.m"
    {
#line 1169 "type_util.m"
      check_hlds__type_util__ConsArity_9 = parse_tree__prog_util__cons_id_arity_1_f_0(check_hlds__type_util__ConsId_7);
    }
#line 1170 "type_util.m"
    {
#line 1170 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__get_existq_cons_defn_4_p_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_10);
    }
#line 1179 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1172 "type_util.m"
      {
#line 1172 "type_util.m"
        MR_Word check_hlds__type_util__TypeInfo_23_23;
#line 1172 "type_util.m"
        MR_Word check_hlds__type_util__ExistQTVars_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 1)));
#line 1172 "type_util.m"
        MR_Word check_hlds__type_util__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 3)));
#line 1172 "type_util.m"
        MR_Integer check_hlds__type_util__NumTypeClassInfos_17;
#line 1172 "type_util.m"
        MR_Word check_hlds__type_util__ConstrainedTVars_18;
#line 1172 "type_util.m"
        MR_Word check_hlds__type_util__UnconstrainedExistQTVars_19;
#line 1172 "type_util.m"
        MR_Integer check_hlds__type_util__NumTypeInfos_20;
#line 1172 "type_util.m"
        MR_Integer check_hlds__type_util__V_21_21;
#line 1171 "type_util.m"
        MR_Word check_hlds__type_util___TVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 0)));
#line 1171 "type_util.m"
        MR_Word check_hlds__type_util___KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 2)));
#line 1171 "type_util.m"
        MR_Word check_hlds__type_util___ArgTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 4)));
#line 1171 "type_util.m"
        MR_Word check_hlds__type_util___ResultType_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_10, (MR_Integer) 5)));

#line 1173 "type_util.m"
        {
#line 1173 "type_util.m"
          mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0, check_hlds__type_util__Constraints_14, &check_hlds__type_util__NumTypeClassInfos_17);
        }
#line 1174 "type_util.m"
        {
#line 1174 "type_util.m"
          parse_tree__prog_type__constraint_list_get_tvars_2_p_0(check_hlds__type_util__Constraints_14, &check_hlds__type_util__ConstrainedTVars_18);
        }
#line 6497 "check_hlds.type_util.c"
        check_hlds__type_util__TypeInfo_23_23 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
#line 1175 "type_util.m"
        {
#line 1175 "type_util.m"
          mercury__list__delete_elems_3_p_0(check_hlds__type_util__TypeInfo_23_23, check_hlds__type_util__ExistQTVars_12, check_hlds__type_util__ConstrainedTVars_18, &check_hlds__type_util__UnconstrainedExistQTVars_19);
        }
#line 1177 "type_util.m"
        {
#line 1177 "type_util.m"
          mercury__list__length_2_p_0(check_hlds__type_util__TypeInfo_23_23, check_hlds__type_util__UnconstrainedExistQTVars_19, &check_hlds__type_util__NumTypeInfos_20);
        }
#line 1178 "type_util.m"
        check_hlds__type_util__V_21_21 = (check_hlds__type_util__ConsArity_9 + check_hlds__type_util__NumTypeClassInfos_17);
#line 1178 "type_util.m"
        check_hlds__type_util__AdjustedArity_8 = (check_hlds__type_util__V_21_21 + check_hlds__type_util__NumTypeInfos_20);
#line 1172 "type_util.m"
      }
#line 1179 "type_util.m"
    else
#line 1180 "type_util.m"
      check_hlds__type_util__AdjustedArity_8 = check_hlds__type_util__ConsArity_9;
#line 1166 "type_util.m"
    return check_hlds__type_util__AdjustedArity_8;
#line 1166 "type_util.m"
  }
#line 285 "type_util.m"
}

#line 277 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_float_eqv_2_p_0(
#line 277 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 277 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 277 "type_util.m"
{
#line 1157 "type_util.m"
  while (MR_TRUE)
#line 1157 "type_util.m"
    {
#line 1157 "type_util.m"
      /* tailcall optimized into a loop */
#line 1157 "type_util.m"
      {
#line 1157 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 1157 "type_util.m"
        {
#line 1157 "type_util.m"
          MR_Word check_hlds__type_util__V_7_7;

#line 1157 "type_util.m"
          {
#line 1157 "type_util.m"
            check_hlds__type_util__V_7_7 = parse_tree__builtin_lib_types__float_type_0_f_0();
          }
#line 1157 "type_util.m"
          {
#line 1157 "type_util.m"
            check_hlds__type_util__succeeded = parse_tree__prog_data____Unify____mer_type_0_0(check_hlds__type_util__Type_4, check_hlds__type_util__V_7_7);
          }
#line 1157 "type_util.m"
        }
#line 1157 "type_util.m"
        if (!(check_hlds__type_util__succeeded))
#line 1159 "type_util.m"
          {
#line 1159 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_5;
#line 1159 "type_util.m"
            MR_Word check_hlds__type_util__EqvType_6;
#line 1159 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_12;
#line 1159 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_16;
#line 1159 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_17;

#line 456 "type_util.m"
            {
#line 456 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_16);
            }
#line 457 "type_util.m"
            {
#line 457 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_17);
            }
#line 1159 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1159 "type_util.m"
              {
#line 458 "type_util.m"
                {
#line 458 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_16, check_hlds__type_util__TypeCtor_17, &check_hlds__type_util__TypeDefn_12);
                }
#line 1159 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1159 "type_util.m"
                  {
#line 466 "type_util.m"
                    {
#line 466 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_12, &check_hlds__type_util__TypeBody_5);
                    }
#line 1160 "type_util.m"
                    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 2)));
#line 1160 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 1160 "type_util.m"
                      {
#line 1160 "type_util.m"
                        check_hlds__type_util__EqvType_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 1161 "type_util.m"
                        /* direct tailcall eliminated */
#line 1161 "type_util.m"
                        {
#line 1161 "type_util.m"
                          MR_Word check_hlds__type_util__Type__tmp_copy_4 = check_hlds__type_util__EqvType_6;

#line 1161 "type_util.m"
                          check_hlds__type_util__Type_4 = check_hlds__type_util__Type__tmp_copy_4;
#line 1161 "type_util.m"
                        }
#line 1161 "type_util.m"
                        continue;
#line 1160 "type_util.m"
                      }
#line 1159 "type_util.m"
                  }
#line 1159 "type_util.m"
              }
#line 1159 "type_util.m"
          }
#line 1157 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 1157 "type_util.m"
      }
#line 1157 "type_util.m"
      break;
#line 1157 "type_util.m"
    }
#line 277 "type_util.m"
}

#line 272 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_no_tag_type_4_p_0(
#line 272 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 272 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 272 "type_util.m"
  MR_Word * check_hlds__type_util__Ctor_7,
#line 272 "type_util.m"
  MR_Word * check_hlds__type_util__ArgType_8)
#line 272 "type_util.m"
{
#line 1139 "type_util.m"
  {
#line 1139 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1139 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_18_18;
#line 1139 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_19_19;
#line 1139 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_9;
#line 1139 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_10;
#line 1139 "type_util.m"
    MR_Word check_hlds__type_util__NoTagTypes_11;
#line 1139 "type_util.m"
    MR_Word check_hlds__type_util__NoTagType_12;
#line 1139 "type_util.m"
    MR_Word check_hlds__type_util__TypeParams_13;
#line 1139 "type_util.m"
    MR_Word check_hlds__type_util__ArgType0_14;
#line 1142 "type_util.m"
    MR_Box check_hlds__type_util__conv0_NoTagType_12;

#line 1140 "type_util.m"
    {
#line 1140 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_9, &check_hlds__type_util__TypeArgs_10);
    }
#line 1139 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1139 "type_util.m"
      {
#line 1141 "type_util.m"
        {
#line 1141 "type_util.m"
          hlds__hlds_module__module_info_get_no_tag_types_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__NoTagTypes_11);
        }
#line 6696 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0;
#line 6698 "check_hlds.type_util.c"
        check_hlds__type_util__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_no_tag_type_0;
#line 1142 "type_util.m"
        {
#line 1142 "type_util.m"
          check_hlds__type_util__succeeded = mercury__map__search_3_p_0(check_hlds__type_util__TypeCtorInfo_18_18, check_hlds__type_util__TypeCtorInfo_19_19, check_hlds__type_util__NoTagTypes_11, ((MR_Box) (check_hlds__type_util__TypeCtor_9)), &check_hlds__type_util__conv0_NoTagType_12);
        }
#line 1142 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1142 "type_util.m"
          {
#line 1142 "type_util.m"
            check_hlds__type_util__NoTagType_12 = ((MR_Word) check_hlds__type_util__conv0_NoTagType_12);
#line 1142 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 1142 "type_util.m"
          }
#line 1139 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1139 "type_util.m"
          {
#line 1143 "type_util.m"
            check_hlds__type_util__TypeParams_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 0)));
#line 1143 "type_util.m"
            *check_hlds__type_util__Ctor_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 1)));
#line 1143 "type_util.m"
            check_hlds__type_util__ArgType0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__NoTagType_12, (MR_Integer) 2)));
#line 1147 "type_util.m"
            if ((check_hlds__type_util__TypeParams_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1146 "type_util.m"
              *check_hlds__type_util__ArgType_8 = check_hlds__type_util__ArgType0_14;
#line 1147 "type_util.m"
            else
#line 1148 "type_util.m"
              {
#line 1148 "type_util.m"
                MR_Word check_hlds__type_util__Subn_17;

#line 1149 "type_util.m"
                {
#line 1149 "type_util.m"
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_13, check_hlds__type_util__TypeArgs_10, &check_hlds__type_util__Subn_17);
                }
#line 1150 "type_util.m"
                {
#line 1150 "type_util.m"
                  parse_tree__prog_type_subst__apply_subst_to_type_3_p_0(check_hlds__type_util__Subn_17, check_hlds__type_util__ArgType0_14, check_hlds__type_util__ArgType_8);
                }
#line 1148 "type_util.m"
              }
#line 1147 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 1139 "type_util.m"
          }
#line 1139 "type_util.m"
      }
#line 1139 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1139 "type_util.m"
  }
#line 272 "type_util.m"
}

#line 267 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_no_tag_type_2_p_0(
#line 267 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 267 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 267 "type_util.m"
{
#line 1137 "type_util.m"
  {
#line 1137 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1137 "type_util.m"
    MR_Word check_hlds__type_util___Ctor_5;
#line 1137 "type_util.m"
    MR_Word check_hlds__type_util___ArgType_6;

#line 1137 "type_util.m"
    {
#line 1137 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_is_no_tag_type_4_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, &check_hlds__type_util___Ctor_5, &check_hlds__type_util___ArgType_6);
    }
#line 1137 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1137 "type_util.m"
  }
#line 267 "type_util.m"
}

#line 261 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__cons_id_is_existq_cons_3_p_0(
#line 261 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 261 "type_util.m"
  MR_Word check_hlds__type_util__VarType_5,
#line 261 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_6)
#line 261 "type_util.m"
{
#line 1104 "type_util.m"
  {
#line 1104 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__V_7_7;
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_12;
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__V_15_15;
#line 1104 "type_util.m"
    MR_Word check_hlds__type_util__Ctors_27;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_16_16;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_17_17;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_18_18;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_19_19;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_20_20;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_21_21;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_22_22;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_14_14;

#line 1105 "type_util.m"
    {
#line 1105 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_5, &check_hlds__type_util__TypeCtor_12);
    }
#line 1104 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1104 "type_util.m"
      {
#line 1111 "type_util.m"
        {
#line 1111 "type_util.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Ctors_27);
        }
#line 1114 "type_util.m"
        {
#line 1114 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_27, check_hlds__type_util__TypeCtor_12, check_hlds__type_util__ConsId_6, &check_hlds__type_util__V_7_7);
        }
#line 1104 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1104 "type_util.m"
          {
#line 1107 "type_util.m"
            check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 0)));
#line 1107 "type_util.m"
            check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 1)));
#line 1107 "type_util.m"
            check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 2)));
#line 1107 "type_util.m"
            check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 3)));
#line 1107 "type_util.m"
            check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 4)));
#line 1107 "type_util.m"
            check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 5)));
#line 1107 "type_util.m"
            check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 6)));
#line 1107 "type_util.m"
            check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_7_7, (MR_Integer) 7)));
#line 1107 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_15_15)) == (MR_mktag((MR_Integer) 1)));
#line 1107 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1107 "type_util.m"
              {
#line 1107 "type_util.m"
                check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_15_15, (MR_Integer) 0)));
#line 1107 "type_util.m"
                check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_15_15, (MR_Integer) 1)));
#line 1107 "type_util.m"
              }
#line 1104 "type_util.m"
          }
#line 1104 "type_util.m"
      }
#line 1104 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1104 "type_util.m"
  }
#line 261 "type_util.m"
}

#line 1127 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0_1(
#line 1127 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1127 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1127 "type_util.m"
{
#line 1127 "type_util.m"
  {
#line 1127 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1127 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1127 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_25;

#line 1127 "type_util.m"
    {
#line 1127 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_25 = check_hlds__type_util__IntroducedFrom__func__get_existq_cons_defn__1127__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1127 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_25));
#line 1127 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1127 "type_util.m"
  }
#line 1127 "type_util.m"
}

#line 258 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__get_existq_cons_defn_4_p_0(
#line 258 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 258 "type_util.m"
  MR_Word check_hlds__type_util__VarType_6,
#line 258 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 258 "type_util.m"
  MR_Word * check_hlds__type_util__CtorDefn_8)
#line 258 "type_util.m"
{
#line 1123 "type_util.m"
  {
#line 1123 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_30_30;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorInfo_31_31;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__ConsDefn_9;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__TypeVarSet_11;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__TypeParams_12;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__KindMap_13;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__ExistQVars_14;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__Constraints_15;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__Args_16;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__ArgTypes_18;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtorArgs_20;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_21;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__RetType_22;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__V_23_23;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_36;
#line 1123 "type_util.m"
    MR_Word check_hlds__type_util__Ctors_51;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util___TypeCtor_10;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util___Context_17;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_37_37;
#line 1107 "type_util.m"
    MR_Word check_hlds__type_util__V_38_38;

#line 1105 "type_util.m"
    {
#line 1105 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_6, &check_hlds__type_util__TypeCtor_36);
    }
#line 1123 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1123 "type_util.m"
      {
#line 1111 "type_util.m"
        {
#line 1111 "type_util.m"
          hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_51);
        }
#line 1114 "type_util.m"
        {
#line 1114 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_51, check_hlds__type_util__TypeCtor_36, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_9);
        }
#line 1123 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1123 "type_util.m"
          {
#line 1107 "type_util.m"
            check_hlds__type_util___TypeCtor_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 0)));
#line 1107 "type_util.m"
            check_hlds__type_util__TypeVarSet_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 1)));
#line 1107 "type_util.m"
            check_hlds__type_util__TypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 2)));
#line 1107 "type_util.m"
            check_hlds__type_util__KindMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 3)));
#line 1107 "type_util.m"
            check_hlds__type_util__ExistQVars_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 4)));
#line 1107 "type_util.m"
            check_hlds__type_util__Constraints_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 5)));
#line 1107 "type_util.m"
            check_hlds__type_util__Args_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 6)));
#line 1107 "type_util.m"
            check_hlds__type_util___Context_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_9, (MR_Integer) 7)));
#line 1107 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__ExistQVars_14)) == (MR_mktag((MR_Integer) 1)));
#line 1107 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1107 "type_util.m"
              {
#line 1107 "type_util.m"
                check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__ExistQVars_14, (MR_Integer) 0)));
#line 1107 "type_util.m"
                check_hlds__type_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__ExistQVars_14, (MR_Integer) 1)));
#line 7034 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_30_30 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 7036 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_31_31 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1127 "type_util.m"
                check_hlds__type_util__V_23_23 = (MR_Word) &check_hlds__type_util_scalar_common_2[4];
#line 1127 "type_util.m"
                {
#line 1127 "type_util.m"
                  check_hlds__type_util__ArgTypes_18 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_30_30, check_hlds__type_util__TypeCtorInfo_31_31, check_hlds__type_util__V_23_23, check_hlds__type_util__Args_16);
                }
#line 1128 "type_util.m"
                {
#line 1128 "type_util.m"
                  parse_tree__prog_type__var_list_to_type_list_3_p_0(check_hlds__type_util__KindMap_13, check_hlds__type_util__TypeParams_12, &check_hlds__type_util__TypeCtorArgs_20);
                }
#line 1129 "type_util.m"
                {
#line 1129 "type_util.m"
                  check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_6, &check_hlds__type_util__TypeCtor_21);
                }
#line 1123 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1123 "type_util.m"
                  {
#line 1130 "type_util.m"
                    {
#line 1130 "type_util.m"
                      parse_tree__prog_type__construct_type_3_p_0(check_hlds__type_util__TypeCtor_21, check_hlds__type_util__TypeCtorArgs_20, &check_hlds__type_util__RetType_22);
                    }
#line 1131 "type_util.m"
                    {
#line 1131 "type_util.m"
                      MR_Word base;
#line 1131 "type_util.m"
                      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1131 "type_util.m"
                      *check_hlds__type_util__CtorDefn_8 = base;
#line 1131 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_util__TypeVarSet_11));
#line 1131 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_util__ExistQVars_14));
#line 1131 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_util__KindMap_13));
#line 1131 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_util__Constraints_15));
#line 1131 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_util__ArgTypes_18));
#line 1131 "type_util.m"
                      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_util__RetType_22));
#line 1131 "type_util.m"
                    }
#line 1131 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 1123 "type_util.m"
                  }
#line 1107 "type_util.m"
              }
#line 1123 "type_util.m"
          }
#line 1123 "type_util.m"
      }
#line 1123 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1123 "type_util.m"
  }
#line 258 "type_util.m"
}

#line 248 "type_util.m"
void MR_CALL 
check_hlds__type_util__get_cons_defn_det_4_p_0(
#line 248 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 248 "type_util.m"
  MR_Word check_hlds__type_util__TypeCtor_6,
#line 248 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 248 "type_util.m"
  MR_Word * check_hlds__type_util__ConsDefn_8)
#line 248 "type_util.m"
{
#line 1119 "type_util.m"
  {
#line 1119 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1119 "type_util.m"
    MR_Word check_hlds__type_util__ConsDefnPrime_9;
#line 1109 "type_util.m"
    MR_Word check_hlds__type_util__Ctors_17;

#line 1111 "type_util.m"
    {
#line 1111 "type_util.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_17);
    }
#line 1114 "type_util.m"
    {
#line 1114 "type_util.m"
      check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_17, check_hlds__type_util__TypeCtor_6, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefnPrime_9);
    }
#line 1119 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1118 "type_util.m"
      *check_hlds__type_util__ConsDefn_8 = check_hlds__type_util__ConsDefnPrime_9;
#line 1119 "type_util.m"
    else
#line 1120 "type_util.m"
      {
#line 1120 "type_util.m"
        {
#line 1120 "type_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_util", (MR_String) "predicate \140check_hlds.type_util.get_cons_defn_det\'/4", (MR_String) "get_cons_defn failed");
#line 1120 "type_util.m"
          return;
        }
#line 1120 "type_util.m"
      }
#line 1119 "type_util.m"
  }
#line 248 "type_util.m"
}

#line 246 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__get_cons_defn_4_p_0(
#line 246 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 246 "type_util.m"
  MR_Word check_hlds__type_util__TypeCtor_6,
#line 246 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 246 "type_util.m"
  MR_Word * check_hlds__type_util__ConsDefn_8)
#line 246 "type_util.m"
{
#line 1109 "type_util.m"
  {
#line 1109 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1109 "type_util.m"
    MR_Word check_hlds__type_util__Ctors_9;

#line 1111 "type_util.m"
    {
#line 1111 "type_util.m"
      hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_9);
    }
#line 1114 "type_util.m"
    {
#line 1114 "type_util.m"
      return check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_9, check_hlds__type_util__TypeCtor_6, check_hlds__type_util__ConsId_7, check_hlds__type_util__ConsDefn_8);
    }
#line 1109 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1109 "type_util.m"
  }
#line 246 "type_util.m"
}

#line 1095 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_3(
#line 1095 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1095 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1095 "type_util.m"
{
#line 1095 "type_util.m"
  {
#line 1095 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1095 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1095 "type_util.m"
    MR_Word check_hlds__type_util__conv2_HeadVar__2_31;

#line 1095 "type_util.m"
    {
#line 1095 "type_util.m"
      check_hlds__type_util__conv2_HeadVar__2_31 = check_hlds__type_util__IntroducedFrom__func__cons_id_arg_types__1095__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1095 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv2_HeadVar__2_31));
#line 1095 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1095 "type_util.m"
  }
#line 1095 "type_util.m"
}

#line 1084 "type_util.m"
static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_2(
#line 1084 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 1084 "type_util.m"
{
#line 1084 "type_util.m"
  {
#line 1084 "type_util.m"
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 1084 "type_util.m"
    *((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7) = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7);
#line 1084 "type_util.m"
    (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_14_14 = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14);
#line 1084 "type_util.m"
    {
#line 1084 "type_util.m"
      check_hlds__type_util__cons_id_arg_types_4_p_0_1(check_hlds__type_util__env_ptr);
#line 1084 "type_util.m"
      return;
    }
#line 1084 "type_util.m"
  }
#line 1084 "type_util.m"
}

#line 1079 "type_util.m"
static void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0_1(
#line 1079 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 1079 "type_util.m"
{
#line 1079 "type_util.m"
  {
#line 1079 "type_util.m"
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 1079 "type_util.m"
    {
#line 1089 "type_util.m"
      MR_Word check_hlds__type_util__V_17_17;
#line 1089 "type_util.m"
      MR_Word check_hlds__type_util__V_18_18;
#line 1089 "type_util.m"
      MR_Word check_hlds__type_util__V_20_20;
#line 1089 "type_util.m"
      MR_Word check_hlds__type_util__V_22_22;
#line 1089 "type_util.m"
      MR_Word check_hlds__type_util__V_24_24;

#line 1087 "type_util.m"
      {
#line 1087 "type_util.m"
        hlds__hlds_module__module_info_get_cons_table_2_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15);
      }
#line 1088 "type_util.m"
      {
#line 1088 "type_util.m"
        (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Ctors_15, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, *((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7), &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16);
      }
#line 1079 "type_util.m"
      if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1079 "type_util.m"
        {
#line 1089 "type_util.m"
          check_hlds__type_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 0)));
#line 1089 "type_util.m"
          check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 1)));
#line 1089 "type_util.m"
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 2)));
#line 1089 "type_util.m"
          check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 3)));
#line 1089 "type_util.m"
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 4)));
#line 1089 "type_util.m"
          check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 5)));
#line 1089 "type_util.m"
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 6)));
#line 1089 "type_util.m"
          check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsDefn_16, (MR_Integer) 7)));
#line 1092 "type_util.m"
          (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ExistQVars0_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1079 "type_util.m"
          if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1079 "type_util.m"
            {
#line 7315 "check_hlds.type_util.c"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
#line 7317 "check_hlds.type_util.c"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1094 "type_util.m"
              {
#line 1094 "type_util.m"
                mercury__map__from_corresponding_lists_3_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeInfo_46_46, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeParams_19, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25);
              }
#line 7324 "check_hlds.type_util.c"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1095 "type_util.m"
              (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29 = (MR_Word) &check_hlds__type_util_scalar_common_2[3];
#line 1095 "type_util.m"
              {
#line 1095 "type_util.m"
                (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26 = mercury__list__map_2_f_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_48_48, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtorInfo_47_47, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__V_29_29, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__Args_23);
              }
#line 1096 "type_util.m"
              {
#line 1096 "type_util.m"
                parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TSubst_25, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes0_26, (check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8);
              }
#line 1096 "type_util.m"
              {
#line 1096 "type_util.m"
                ((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont)((check_hlds__type_util__env_ptr)->check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr);
#line 1096 "type_util.m"
                return;
              }
#line 1079 "type_util.m"
            }
#line 1079 "type_util.m"
        }
#line 1079 "type_util.m"
    }
#line 1079 "type_util.m"
  }
#line 1079 "type_util.m"
}

#line 236 "type_util.m"
void MR_CALL 
check_hlds__type_util__cons_id_arg_types_4_p_0(
#line 236 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 236 "type_util.m"
  MR_Word check_hlds__type_util__VarType_6,
#line 236 "type_util.m"
  MR_Word * check_hlds__type_util__ConsId_7,
#line 236 "type_util.m"
  MR_Word * check_hlds__type_util__ArgTypes_8,
#line 236 "type_util.m"
  MR_Cont check_hlds__type_util__cont,
#line 236 "type_util.m"
  void * check_hlds__type_util__cont_env_ptr)
#line 236 "type_util.m"
{
#line 236 "type_util.m"
  {
#line 236 "type_util.m"
    struct check_hlds__type_util__cons_id_arg_types_4_p_0_env_0_s check_hlds__type_util__env;

#line 236 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5 = check_hlds__type_util__ModuleInfo_5;
#line 236 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ConsId_7 = check_hlds__type_util__ConsId_7;
#line 236 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ArgTypes_8 = check_hlds__type_util__ArgTypes_8;
#line 236 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont = check_hlds__type_util__cont;
#line 236 "type_util.m"
    (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__cont_env_ptr = check_hlds__type_util__cont_env_ptr;
#line 1079 "type_util.m"
    {
#line 1079 "type_util.m"
      MR_Word check_hlds__type_util__TypeCtorInfo_44_44;
#line 1079 "type_util.m"
      MR_Word check_hlds__type_util__TypeCtorInfo_45_45;
#line 1079 "type_util.m"
      MR_Word check_hlds__type_util__TypeTable_11;
#line 1079 "type_util.m"
      MR_Word check_hlds__type_util__TypeDefn_12;
#line 1079 "type_util.m"
      MR_Word check_hlds__type_util__TypeDefnBody_13;
#line 1079 "type_util.m"
      MR_Word check_hlds__type_util__V_28_28;
#line 1084 "type_util.m"
      MR_Word check_hlds__type_util__V_33_33;
#line 1084 "type_util.m"
      MR_Word check_hlds__type_util__V_34_34;
#line 1084 "type_util.m"
      MR_Word check_hlds__type_util__V_35_35;
#line 1084 "type_util.m"
      MR_Word check_hlds__type_util__V_36_36;
#line 1084 "type_util.m"
      MR_Word check_hlds__type_util__V_37_37;
#line 1084 "type_util.m"
      MR_Word check_hlds__type_util__V_38_38;
#line 1084 "type_util.m"
      MR_Word check_hlds__type_util__V_39_39;
#line 1084 "type_util.m"
      MR_Word check_hlds__type_util__V_40_40;

#line 1080 "type_util.m"
      {
#line 1080 "type_util.m"
        (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__VarType_6, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeArgs_10);
      }
#line 1079 "type_util.m"
      if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1079 "type_util.m"
        {
#line 1081 "type_util.m"
          {
#line 1081 "type_util.m"
            hlds__hlds_module__module_info_get_type_table_2_p_0((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__ModuleInfo_5, &check_hlds__type_util__TypeTable_11);
          }
#line 1082 "type_util.m"
          {
#line 1082 "type_util.m"
            (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_11, (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__TypeCtor_9, &check_hlds__type_util__TypeDefn_12);
          }
#line 1079 "type_util.m"
          if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1079 "type_util.m"
            {
#line 1083 "type_util.m"
              {
#line 1083 "type_util.m"
                hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_12, &check_hlds__type_util__TypeDefnBody_13);
              }
#line 1084 "type_util.m"
              (check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeDefnBody_13)) == (MR_mktag((MR_Integer) 1)));
#line 1084 "type_util.m"
              if ((check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__succeeded)
#line 1084 "type_util.m"
                {
#line 1084 "type_util.m"
                  check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 0)));
#line 1084 "type_util.m"
                  check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 1)));
#line 1084 "type_util.m"
                  check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 2)));
#line 1084 "type_util.m"
                  check_hlds__type_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 3)));
#line 1084 "type_util.m"
                  check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 4)));
#line 1084 "type_util.m"
                  check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 5)));
#line 1084 "type_util.m"
                  check_hlds__type_util__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1084 "type_util.m"
                  check_hlds__type_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1084 "type_util.m"
                  check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeDefnBody_13, (MR_Integer) 7)));
#line 7471 "check_hlds.type_util.c"
                  check_hlds__type_util__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 7473 "check_hlds.type_util.c"
                  check_hlds__type_util__TypeCtorInfo_45_45 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1084 "type_util.m"
                  {
#line 1084 "type_util.m"
                    mercury__map__member_3_p_0(check_hlds__type_util__TypeCtorInfo_44_44, check_hlds__type_util__TypeCtorInfo_45_45, check_hlds__type_util__V_28_28, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv1_ConsId_7, &(check_hlds__type_util__env).check_hlds__type_util__cons_id_arg_types_4_p_0_env_0__conv0_V_14_14, check_hlds__type_util__cons_id_arg_types_4_p_0_2, &check_hlds__type_util__env);
                  }
#line 1084 "type_util.m"
                }
#line 1079 "type_util.m"
            }
#line 1079 "type_util.m"
        }
#line 1079 "type_util.m"
    }
#line 236 "type_util.m"
  }
#line 236 "type_util.m"
}

#line 1070 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0_1(
#line 1070 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1070 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1070 "type_util.m"
{
#line 1070 "type_util.m"
  {
#line 1070 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1070 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_34;

#line 1070 "type_util.m"
    {
#line 1070 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_34 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1070__1_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1070 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_34));
#line 1070 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1070 "type_util.m"
  }
#line 1070 "type_util.m"
}

#line 230 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__get_cons_id_non_existential_arg_types_4_p_0(
#line 230 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 230 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 230 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 230 "type_util.m"
  MR_Word * check_hlds__type_util__ArgTypes_8)
#line 230 "type_util.m"
{
#line 1075 "type_util.m"
  {
#line 1075 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1075 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_15;
#line 1075 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_16;

#line 1042 "type_util.m"
    {
#line 1042 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_15, &check_hlds__type_util__TypeArgs_16);
    }
#line 1075 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1049 "type_util.m"
      {
#line 1046 "type_util.m"
        {
#line 1046 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_15);
        }
#line 1049 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1048 "type_util.m"
          {
#line 1048 "type_util.m"
            *check_hlds__type_util__ArgTypes_8 = check_hlds__type_util__TypeArgs_16;
#line 1048 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 1048 "type_util.m"
          }
#line 1049 "type_util.m"
        else
#line 1072 "type_util.m"
          {
#line 1072 "type_util.m"
            MR_Word check_hlds__type_util__TypeParams_20;
#line 1072 "type_util.m"
            MR_Word check_hlds__type_util__ExistQVars0_22;
#line 1072 "type_util.m"
            MR_Word check_hlds__type_util__Args_24;
#line 1050 "type_util.m"
            MR_Word check_hlds__type_util__ConsDefn_17;
#line 1050 "type_util.m"
            MR_Word check_hlds__type_util__Ctors_50;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_18_18;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_19_19;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_21_21;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_23_23;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_25_25;
#line 1053 "type_util.m"
            MR_Word check_hlds__type_util__V_26_26;
#line 1053 "type_util.m"
            MR_Word check_hlds__type_util__V_27_27;

#line 1111 "type_util.m"
            {
#line 1111 "type_util.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_50);
            }
#line 1114 "type_util.m"
            {
#line 1114 "type_util.m"
              check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_50, check_hlds__type_util__TypeCtor_15, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_17);
            }
#line 1050 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1050 "type_util.m"
              {
#line 1051 "type_util.m"
                check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 0)));
#line 1051 "type_util.m"
                check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 1)));
#line 1051 "type_util.m"
                check_hlds__type_util__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 2)));
#line 1051 "type_util.m"
                check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 3)));
#line 1051 "type_util.m"
                check_hlds__type_util__ExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 4)));
#line 1051 "type_util.m"
                check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 5)));
#line 1051 "type_util.m"
                check_hlds__type_util__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 6)));
#line 1051 "type_util.m"
                check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 7)));
#line 1053 "type_util.m"
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__Args_24)) == (MR_mktag((MR_Integer) 1)));
#line 1053 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1053 "type_util.m"
                  {
#line 1053 "type_util.m"
                    check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 0)));
#line 1053 "type_util.m"
                    check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 1)));
#line 1053 "type_util.m"
                  }
#line 1050 "type_util.m"
              }
#line 1072 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1067 "type_util.m"
              {
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__TypeInfo_39_43;
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_40_44;
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_41_45;
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__TSubst_30;
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__ArgTypes0_31;
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__V_36_36;

#line 7661 "check_hlds.type_util.c"
                check_hlds__type_util__succeeded = (check_hlds__type_util__ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1067 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1067 "type_util.m"
                  {
#line 7667 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeInfo_39_43 = (MR_Word) &check_hlds__type_util_scalar_common_1[0];
#line 7669 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1069 "type_util.m"
                    {
#line 1069 "type_util.m"
                      mercury__map__from_corresponding_lists_3_p_0(check_hlds__type_util__TypeInfo_39_43, check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__TypeParams_20, check_hlds__type_util__TypeArgs_16, &check_hlds__type_util__TSubst_30);
                    }
#line 7676 "check_hlds.type_util.c"
                    check_hlds__type_util__TypeCtorInfo_41_45 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 1070 "type_util.m"
                    check_hlds__type_util__V_36_36 = (MR_Word) &check_hlds__type_util_scalar_common_2[2];
#line 1070 "type_util.m"
                    {
#line 1070 "type_util.m"
                      check_hlds__type_util__ArgTypes0_31 = mercury__list__map_2_f_0(check_hlds__type_util__TypeCtorInfo_41_45, check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__V_36_36, check_hlds__type_util__Args_24);
                    }
#line 1071 "type_util.m"
                    {
#line 1071 "type_util.m"
                      parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__TSubst_30, check_hlds__type_util__ArgTypes0_31, check_hlds__type_util__ArgTypes_8);
                    }
#line 1071 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 1067 "type_util.m"
                  }
#line 1067 "type_util.m"
              }
#line 1072 "type_util.m"
            else
#line 1073 "type_util.m"
              {
#line 1073 "type_util.m"
                *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1073 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 1073 "type_util.m"
              }
#line 1072 "type_util.m"
          }
#line 1049 "type_util.m"
      }
#line 1075 "type_util.m"
    else
#line 1076 "type_util.m"
      {
#line 1076 "type_util.m"
        *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1076 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 1076 "type_util.m"
      }
#line 1075 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1075 "type_util.m"
  }
#line 230 "type_util.m"
}

#line 1070 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0_1(
#line 1070 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 1070 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 1070 "type_util.m"
{
#line 1070 "type_util.m"
  {
#line 1070 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 1070 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 1070 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__2_34;

#line 1070 "type_util.m"
    {
#line 1070 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__2_34 = check_hlds__type_util__IntroducedFrom__func__get_cons_id_arg_types_2__1070__2_1_f_0(((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 1070 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__2_34));
#line 1070 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 1070 "type_util.m"
  }
#line 1070 "type_util.m"
}

#line 224 "type_util.m"
void MR_CALL 
check_hlds__type_util__get_cons_id_arg_types_4_p_0(
#line 224 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 224 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 224 "type_util.m"
  MR_Word check_hlds__type_util__ConsId_7,
#line 224 "type_util.m"
  MR_Word * check_hlds__type_util__ArgTypes_8)
#line 224 "type_util.m"
{
#line 1075 "type_util.m"
  {
#line 1075 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1075 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_15;
#line 1075 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_16;

#line 1042 "type_util.m"
    {
#line 1042 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_6, &check_hlds__type_util__TypeCtor_15, &check_hlds__type_util__TypeArgs_16);
    }
#line 1075 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1049 "type_util.m"
      {
#line 1046 "type_util.m"
        {
#line 1046 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_15);
        }
#line 1049 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1048 "type_util.m"
          *check_hlds__type_util__ArgTypes_8 = check_hlds__type_util__TypeArgs_16;
#line 1049 "type_util.m"
        else
#line 1072 "type_util.m"
          {
#line 1072 "type_util.m"
            MR_Word check_hlds__type_util__TypeParams_20;
#line 1072 "type_util.m"
            MR_Word check_hlds__type_util__ExistQVars0_22;
#line 1072 "type_util.m"
            MR_Word check_hlds__type_util__Args_24;
#line 1050 "type_util.m"
            MR_Word check_hlds__type_util__ConsDefn_17;
#line 1050 "type_util.m"
            MR_Word check_hlds__type_util__Ctors_50;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_18_18;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_19_19;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_21_21;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_23_23;
#line 1051 "type_util.m"
            MR_Word check_hlds__type_util__V_25_25;
#line 1053 "type_util.m"
            MR_Word check_hlds__type_util__V_26_26;
#line 1053 "type_util.m"
            MR_Word check_hlds__type_util__V_27_27;

#line 1111 "type_util.m"
            {
#line 1111 "type_util.m"
              hlds__hlds_module__module_info_get_cons_table_2_p_0(check_hlds__type_util__ModuleInfo_5, &check_hlds__type_util__Ctors_50);
            }
#line 1114 "type_util.m"
            {
#line 1114 "type_util.m"
              check_hlds__type_util__succeeded = hlds__hlds_data__search_cons_table_of_type_ctor_4_p_0(check_hlds__type_util__Ctors_50, check_hlds__type_util__TypeCtor_15, check_hlds__type_util__ConsId_7, &check_hlds__type_util__ConsDefn_17);
            }
#line 1050 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1050 "type_util.m"
              {
#line 1051 "type_util.m"
                check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 0)));
#line 1051 "type_util.m"
                check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 1)));
#line 1051 "type_util.m"
                check_hlds__type_util__TypeParams_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 2)));
#line 1051 "type_util.m"
                check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 3)));
#line 1051 "type_util.m"
                check_hlds__type_util__ExistQVars0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 4)));
#line 1051 "type_util.m"
                check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 5)));
#line 1051 "type_util.m"
                check_hlds__type_util__Args_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 6)));
#line 1051 "type_util.m"
                check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__ConsDefn_17, (MR_Integer) 7)));
#line 1053 "type_util.m"
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__Args_24)) == (MR_mktag((MR_Integer) 1)));
#line 1053 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1053 "type_util.m"
                  {
#line 1053 "type_util.m"
                    check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 0)));
#line 1053 "type_util.m"
                    check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Args_24, (MR_Integer) 1)));
#line 1053 "type_util.m"
                  }
#line 1050 "type_util.m"
              }
#line 1072 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1067 "type_util.m"
              {
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_40_44;
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__TSubst_30;
#line 1067 "type_util.m"
                MR_Word check_hlds__type_util__ArgTypes0_31;

#line 1058 "type_util.m"
                if ((check_hlds__type_util__ExistQVars0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "type_util.m"
                  {
#line 1057 "type_util.m"
                  }
#line 1058 "type_util.m"
                else
#line 1059 "type_util.m"
                  {
#line 1062 "type_util.m"
                    {
#line 1062 "type_util.m"
                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_util", (MR_String) "predicate \140check_hlds.type_util.get_cons_id_arg_types_2\'/5", (MR_String) "existentially typed cons_id");
#line 1062 "type_util.m"
                      return;
                    }
#line 1059 "type_util.m"
                  }
#line 7902 "check_hlds.type_util.c"
                check_hlds__type_util__TypeCtorInfo_40_44 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0;
#line 1069 "type_util.m"
                {
#line 1069 "type_util.m"
                  mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], check_hlds__type_util__TypeCtorInfo_40_44, check_hlds__type_util__TypeParams_20, check_hlds__type_util__TypeArgs_16, &check_hlds__type_util__TSubst_30);
                }
#line 1070 "type_util.m"
                {
#line 1070 "type_util.m"
                  check_hlds__type_util__ArgTypes0_31 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0, check_hlds__type_util__TypeCtorInfo_40_44, (MR_Word) &check_hlds__type_util_scalar_common_2[1], check_hlds__type_util__Args_24);
                }
#line 1071 "type_util.m"
                {
#line 1071 "type_util.m"
                  parse_tree__prog_type_subst__apply_subst_to_type_list_3_p_0(check_hlds__type_util__TSubst_30, check_hlds__type_util__ArgTypes0_31, check_hlds__type_util__ArgTypes_8);
#line 1071 "type_util.m"
                  return;
                }
#line 1067 "type_util.m"
              }
#line 1072 "type_util.m"
            else
#line 1073 "type_util.m"
              *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1072 "type_util.m"
          }
#line 1049 "type_util.m"
      }
#line 1075 "type_util.m"
    else
#line 1076 "type_util.m"
      *check_hlds__type_util__ArgTypes_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1075 "type_util.m"
  }
#line 224 "type_util.m"
}

#line 215 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__switch_type_num_functors_3_p_0(
#line 215 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 215 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 215 "type_util.m"
  MR_Integer * check_hlds__type_util__NumFunctors_6)
#line 215 "type_util.m"
{
#line 1004 "type_util.m"
  {
#line 1004 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 1004 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;
#line 1006 "type_util.m"
    MR_Word check_hlds__type_util__V_15_15;
#line 1006 "type_util.m"
    MR_String check_hlds__type_util__V_16_16;
#line 1006 "type_util.m"
    MR_Integer check_hlds__type_util__V_17_17;

#line 1005 "type_util.m"
    {
#line 1005 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 1004 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 1004 "type_util.m"
      {
#line 1006 "type_util.m"
        check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_7, (MR_Integer) 0)));
#line 1006 "type_util.m"
        check_hlds__type_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_7, (MR_Integer) 1)));
#line 1006 "type_util.m"
        check_hlds__type_util__succeeded = (check_hlds__type_util__V_17_17 == (MR_Integer) 0);
#line 1006 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1006 "type_util.m"
          {
#line 1006 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_15_15)) == (MR_mktag((MR_Integer) 0)));
#line 1006 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1006 "type_util.m"
              {
#line 1006 "type_util.m"
                check_hlds__type_util__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__type_util__V_15_15, (MR_Integer) 0)));
#line 1006 "type_util.m"
                check_hlds__type_util__succeeded = (strcmp(check_hlds__type_util__V_16_16, (MR_String) "character") == 0);
#line 1006 "type_util.m"
              }
#line 1006 "type_util.m"
          }
#line 1011 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 1007 "type_util.m"
          {
#line 1007 "type_util.m"
            MR_Word check_hlds__type_util__Globals_8;
#line 1007 "type_util.m"
            MR_Word check_hlds__type_util__Target_9;
#line 1007 "type_util.m"
            MR_Integer check_hlds__type_util__MinChar_10;
#line 1007 "type_util.m"
            MR_Integer check_hlds__type_util__MaxChar_11;
#line 1007 "type_util.m"
            MR_Integer check_hlds__type_util__V_18_18;

#line 1007 "type_util.m"
            {
#line 1007 "type_util.m"
              hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_8);
            }
#line 1008 "type_util.m"
            {
#line 1008 "type_util.m"
              libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_8, &check_hlds__type_util__Target_9);
            }
#line 1009 "type_util.m"
            {
#line 1009 "type_util.m"
              backend_libs__string_encoding__target_char_range_3_p_0(check_hlds__type_util__Target_9, &check_hlds__type_util__MinChar_10, &check_hlds__type_util__MaxChar_11);
            }
#line 1010 "type_util.m"
            check_hlds__type_util__V_18_18 = (check_hlds__type_util__MaxChar_11 - check_hlds__type_util__MinChar_10);
#line 1010 "type_util.m"
            *check_hlds__type_util__NumFunctors_6 = (check_hlds__type_util__V_18_18 + (MR_Integer) 1);
#line 1007 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 1007 "type_util.m"
          }
#line 1011 "type_util.m"
        else
#line 1013 "type_util.m"
          {
#line 1011 "type_util.m"
            {
#line 1011 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_7);
            }
#line 1013 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 1012 "type_util.m"
              {
#line 1012 "type_util.m"
                *check_hlds__type_util__NumFunctors_6 = (MR_Integer) 1;
#line 1012 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 1012 "type_util.m"
              }
#line 1013 "type_util.m"
            else
#line 1014 "type_util.m"
              {
#line 1014 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_29_29;
#line 1014 "type_util.m"
                MR_Word check_hlds__type_util__TypeCtorInfo_30_30;
#line 1014 "type_util.m"
                MR_Word check_hlds__type_util__TypeTable_12;
#line 1014 "type_util.m"
                MR_Word check_hlds__type_util__TypeDefn_13;
#line 1014 "type_util.m"
                MR_Word check_hlds__type_util__TypeBody_14;
#line 1014 "type_util.m"
                MR_Word check_hlds__type_util__V_20_20;
#line 1017 "type_util.m"
                MR_Word check_hlds__type_util__V_21_21;
#line 1017 "type_util.m"
                MR_Word check_hlds__type_util__V_22_22;
#line 1017 "type_util.m"
                MR_Word check_hlds__type_util__V_23_23;
#line 1017 "type_util.m"
                MR_Word check_hlds__type_util__V_24_24;
#line 1017 "type_util.m"
                MR_Word check_hlds__type_util__V_25_25;
#line 1017 "type_util.m"
                MR_Word check_hlds__type_util__V_26_26;
#line 1017 "type_util.m"
                MR_Word check_hlds__type_util__V_27_27;
#line 1017 "type_util.m"
                MR_Word check_hlds__type_util__V_28_28;

#line 1014 "type_util.m"
                {
#line 1014 "type_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_12);
                }
#line 1015 "type_util.m"
                {
#line 1015 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_12, check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeDefn_13);
                }
#line 1014 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 1014 "type_util.m"
                  {
#line 1016 "type_util.m"
                    {
#line 1016 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_14);
                    }
#line 1017 "type_util.m"
                    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_14)) == (MR_mktag((MR_Integer) 1)));
#line 1017 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 1017 "type_util.m"
                      {
#line 1017 "type_util.m"
                        check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 0)));
#line 1017 "type_util.m"
                        check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 1)));
#line 1017 "type_util.m"
                        check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 2)));
#line 1017 "type_util.m"
                        check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 3)));
#line 1017 "type_util.m"
                        check_hlds__type_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 4)));
#line 1017 "type_util.m"
                        check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 5)));
#line 1017 "type_util.m"
                        check_hlds__type_util__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 1017 "type_util.m"
                        check_hlds__type_util__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 1017 "type_util.m"
                        check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_14, (MR_Integer) 7)));
#line 8130 "check_hlds.type_util.c"
                        check_hlds__type_util__TypeCtorInfo_29_29 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0;
#line 8132 "check_hlds.type_util.c"
                        check_hlds__type_util__TypeCtorInfo_30_30 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_cons_tag_0;
#line 1017 "type_util.m"
                        {
#line 1017 "type_util.m"
                          mercury__map__count_2_p_0(check_hlds__type_util__TypeCtorInfo_29_29, check_hlds__type_util__TypeCtorInfo_30_30, check_hlds__type_util__V_20_20, check_hlds__type_util__NumFunctors_6);
                        }
#line 1017 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 1017 "type_util.m"
                      }
#line 1014 "type_util.m"
                  }
#line 1014 "type_util.m"
              }
#line 1013 "type_util.m"
          }
#line 1004 "type_util.m"
      }
#line 1004 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 1004 "type_util.m"
  }
#line 215 "type_util.m"
}

#line 948 "type_util.m"
static MR_Box MR_CALL 
check_hlds__type_util__type_constructors_3_p_0_1(
#line 948 "type_util.m"
  MR_Box check_hlds__type_util__closure_arg,
#line 948 "type_util.m"
  MR_Box check_hlds__type_util__wrapper_arg_1)
#line 948 "type_util.m"
{
#line 948 "type_util.m"
  {
#line 948 "type_util.m"
    MR_Box check_hlds__type_util__wrapper_arg_2;
#line 948 "type_util.m"
    MR_Box check_hlds__type_util__closure = check_hlds__type_util__closure_arg;
#line 948 "type_util.m"
    MR_Word check_hlds__type_util__conv0_HeadVar__3_20;

#line 948 "type_util.m"
    {
#line 948 "type_util.m"
      check_hlds__type_util__conv0_HeadVar__3_20 = check_hlds__type_util__IntroducedFrom__func__type_constructors__948__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_util__wrapper_arg_1));
    }
#line 948 "type_util.m"
    check_hlds__type_util__wrapper_arg_2 = ((MR_Box) (check_hlds__type_util__conv0_HeadVar__3_20));
#line 948 "type_util.m"
    return check_hlds__type_util__wrapper_arg_2;
#line 948 "type_util.m"
  }
#line 948 "type_util.m"
}

#line 204 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_constructors_3_p_0(
#line 204 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 204 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 204 "type_util.m"
  MR_Word * check_hlds__type_util__Constructors_6)
#line 204 "type_util.m"
{
#line 941 "type_util.m"
  {
#line 941 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 941 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;
#line 941 "type_util.m"
    MR_Word check_hlds__type_util__TypeArgs_8;

#line 942 "type_util.m"
    {
#line 942 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_and_args_3_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeArgs_8);
    }
#line 941 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 941 "type_util.m"
      {
#line 943 "type_util.m"
        {
#line 943 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_7);
        }
#line 953 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 945 "type_util.m"
          {
#line 945 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtorInfo_39_39;
#line 945 "type_util.m"
            MR_Word check_hlds__type_util__Context_11;
#line 945 "type_util.m"
            MR_Word check_hlds__type_util__CtorArgs_12;
#line 945 "type_util.m"
            MR_Word check_hlds__type_util__V_18_18;
#line 945 "type_util.m"
            MR_Word check_hlds__type_util__V_23_23;
#line 945 "type_util.m"
            MR_Integer check_hlds__type_util__V_26_26;

#line 947 "type_util.m"
            {
#line 947 "type_util.m"
              check_hlds__type_util__Context_11 = mercury__term__context_init_0_f_0();
            }
#line 8246 "check_hlds.type_util.c"
            check_hlds__type_util__TypeCtorInfo_39_39 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_arg_0;
#line 948 "type_util.m"
            {
#line 948 "type_util.m"
              check_hlds__type_util__V_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 948 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 0) = ((MR_Box) (&check_hlds__type_util_scalar_common_7[0]));
#line 948 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 1) = ((MR_Box) (check_hlds__type_util__type_constructors_3_p_0_1));
#line 948 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 948 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_18_18, 3) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 948 "type_util.m"
            }
#line 948 "type_util.m"
            {
#line 948 "type_util.m"
              check_hlds__type_util__CtorArgs_12 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeCtorInfo_39_39, check_hlds__type_util__V_18_18, check_hlds__type_util__TypeArgs_8);
            }
#line 952 "type_util.m"
            {
#line 952 "type_util.m"
              check_hlds__type_util__V_26_26 = mercury__list__length_1_f_0(check_hlds__type_util__TypeCtorInfo_39_39, check_hlds__type_util__CtorArgs_12);
            }
#line 951 "type_util.m"
            {
#line 951 "type_util.m"
              check_hlds__type_util__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 951 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 951 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 2) = ((MR_Box) (&check_hlds__type_util_scalar_common_3[7]));
#line 951 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 3) = ((MR_Box) (check_hlds__type_util__CtorArgs_12));
#line 951 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 4) = ((MR_Box) (check_hlds__type_util__V_26_26));
#line 951 "type_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_util__V_23_23, 5) = ((MR_Box) (check_hlds__type_util__Context_11));
#line 951 "type_util.m"
            }
#line 952 "type_util.m"
            {
#line 952 "type_util.m"
              MR_Word base;
#line 952 "type_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 952 "type_util.m"
              *check_hlds__type_util__Constructors_6 = base;
#line 952 "type_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_util__V_23_23));
#line 952 "type_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 952 "type_util.m"
            }
#line 945 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 945 "type_util.m"
          }
#line 953 "type_util.m"
        else
#line 954 "type_util.m"
          {
#line 954 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_14;
#line 954 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_15;
#line 954 "type_util.m"
            MR_Word check_hlds__type_util__TypeParams_16;
#line 954 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_17;
#line 954 "type_util.m"
            MR_Word check_hlds__type_util__V_28_28;
#line 958 "type_util.m"
            MR_Word check_hlds__type_util__V_30_30;
#line 958 "type_util.m"
            MR_Word check_hlds__type_util__V_31_31;
#line 958 "type_util.m"
            MR_Word check_hlds__type_util__V_32_32;
#line 958 "type_util.m"
            MR_Word check_hlds__type_util__V_33_33;
#line 958 "type_util.m"
            MR_Word check_hlds__type_util__V_34_34;
#line 958 "type_util.m"
            MR_Word check_hlds__type_util__V_35_35;
#line 958 "type_util.m"
            MR_Word check_hlds__type_util__V_36_36;
#line 958 "type_util.m"
            MR_Word check_hlds__type_util__V_37_37;

#line 954 "type_util.m"
            {
#line 954 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_14);
            }
#line 955 "type_util.m"
            {
#line 955 "type_util.m"
              check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_14, check_hlds__type_util__TypeCtor_7, &check_hlds__type_util__TypeDefn_15);
            }
#line 954 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 954 "type_util.m"
              {
#line 956 "type_util.m"
                {
#line 956 "type_util.m"
                  hlds__hlds_data__get_type_defn_tparams_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeParams_16);
                }
#line 957 "type_util.m"
                {
#line 957 "type_util.m"
                  hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_17);
                }
#line 958 "type_util.m"
                check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeBody_17)) == (MR_mktag((MR_Integer) 1)));
#line 958 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 958 "type_util.m"
                  {
#line 958 "type_util.m"
                    check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 0)));
#line 958 "type_util.m"
                    check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 1)));
#line 958 "type_util.m"
                    check_hlds__type_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 2)));
#line 958 "type_util.m"
                    check_hlds__type_util__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 3)));
#line 958 "type_util.m"
                    check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 4)));
#line 958 "type_util.m"
                    check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 5)));
#line 958 "type_util.m"
                    check_hlds__type_util__V_35_35 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 958 "type_util.m"
                    check_hlds__type_util__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 958 "type_util.m"
                    check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_17, (MR_Integer) 7)));
#line 970 "type_util.m"
                    if ((check_hlds__type_util__TypeParams_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 971 "type_util.m"
                      *check_hlds__type_util__Constructors_6 = check_hlds__type_util__V_28_28;
#line 970 "type_util.m"
                    else
#line 973 "type_util.m"
                      {
#line 973 "type_util.m"
                        MR_Word check_hlds__type_util__Subst_46;

#line 974 "type_util.m"
                        {
#line 974 "type_util.m"
                          mercury__map__from_corresponding_lists_3_p_0((MR_Word) &check_hlds__type_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_util__TypeParams_16, check_hlds__type_util__TypeArgs_8, &check_hlds__type_util__Subst_46);
                        }
#line 975 "type_util.m"
                        {
#line 975 "type_util.m"
                          check_hlds__type_util__substitute_type_args_2_3_p_0(check_hlds__type_util__Subst_46, check_hlds__type_util__V_28_28, check_hlds__type_util__Constructors_6);
                        }
#line 973 "type_util.m"
                      }
#line 970 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 958 "type_util.m"
                  }
#line 954 "type_util.m"
              }
#line 954 "type_util.m"
          }
#line 941 "type_util.m"
      }
#line 941 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 941 "type_util.m"
  }
#line 204 "type_util.m"
}

#line 198 "type_util.m"
void MR_CALL 
check_hlds__type_util__update_type_may_use_atomic_alloc_4_p_0(
#line 198 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_5,
#line 198 "type_util.m"
  MR_Word check_hlds__type_util__Type_6,
#line 198 "type_util.m"
  MR_Word check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8,
#line 198 "type_util.m"
  MR_Word * check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9)
#line 198 "type_util.m"
{
#line 897 "type_util.m"
  {
#line 897 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;

#line 897 "type_util.m"
#line 897 "type_util.m"
    switch (check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8) {
#line 897 "type_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 897 "type_util.m"
      case (MR_Integer) 1:
#line 897 "type_util.m"
        *check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_0_8;
#line 897 "type_util.m"
        break;
#line 897 "type_util.m"
      case (MR_Integer) 0:
#line 901 "type_util.m"
        {
#line 901 "type_util.m"
          *check_hlds__type_util__STATE_VARIABLE_MayUseAtomic_9 = check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(check_hlds__type_util__ModuleInfo_5, check_hlds__type_util__Type_6);
        }
#line 897 "type_util.m"
        break;
#line 897 "type_util.m"
    }
#line 897 "type_util.m"
  }
#line 198 "type_util.m"
}

#line 188 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__type_may_use_atomic_alloc_2_f_0(
#line 188 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 188 "type_util.m"
  MR_Word check_hlds__type_util__Type_5)
#line 188 "type_util.m"
{
#line 904 "type_util.m"
  {
#line 904 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 904 "type_util.m"
    MR_Word check_hlds__type_util__TypeMayUseAtomic_6;
#line 904 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_7;
#line 770 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_26;

#line 768 "type_util.m"
    {
#line 768 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_26);
    }
#line 770 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 769 "type_util.m"
      {
#line 769 "type_util.m"
        check_hlds__type_util__TypeCategory_7 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_26);
      }
#line 770 "type_util.m"
    else
#line 771 "type_util.m"
      check_hlds__type_util__TypeCategory_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 914 "type_util.m"
#line 914 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeCategory_7)) {
#line 914 "type_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 914 "type_util.m"
      case (MR_Integer) 0:
#line 914 "type_util.m"
#line 914 "type_util.m"
        switch (MR_unmkbody(check_hlds__type_util__TypeCategory_7)) {
#line 914 "type_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 914 "type_util.m"
          case (MR_Integer) 0:
#line 935 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 914 "type_util.m"
            break;
#line 914 "type_util.m"
          case (MR_Integer) 1:
#line 935 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 914 "type_util.m"
            break;
#line 914 "type_util.m"
          case (MR_Integer) 2:
#line 912 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 914 "type_util.m"
            break;
#line 914 "type_util.m"
          case (MR_Integer) 3:
#line 935 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 914 "type_util.m"
            break;
#line 914 "type_util.m"
          case (MR_Integer) 4:
#line 935 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 914 "type_util.m"
            break;
#line 914 "type_util.m"
        }
#line 914 "type_util.m"
        break;
#line 914 "type_util.m"
      case (MR_Integer) 1:
#line 914 "type_util.m"
        {
#line 914 "type_util.m"
          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeCategory_7, (MR_Integer) 0)));

#line 914 "type_util.m"
#line 914 "type_util.m"
          switch (check_hlds__type_util__V_21_21) {
#line 914 "type_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 914 "type_util.m"
            case (MR_Integer) 2:
#line 913 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 914 "type_util.m"
              break;
#line 914 "type_util.m"
            case (MR_Integer) 1:
#line 915 "type_util.m"
              {
#line 915 "type_util.m"
                MR_Word check_hlds__type_util__Globals_9;
#line 915 "type_util.m"
                MR_Word check_hlds__type_util__UBF_10;

#line 916 "type_util.m"
                {
#line 916 "type_util.m"
                  hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_9);
                }
#line 917 "type_util.m"
                {
#line 917 "type_util.m"
                  libs__globals__lookup_bool_option_3_p_0(check_hlds__type_util__Globals_9, (MR_Integer) 244, &check_hlds__type_util__UBF_10);
                }
#line 921 "type_util.m"
#line 921 "type_util.m"
                switch (check_hlds__type_util__UBF_10) {
#line 921 "type_util.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 921 "type_util.m"
                  case (MR_Integer) 0:
#line 922 "type_util.m"
                    check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 921 "type_util.m"
                    break;
#line 921 "type_util.m"
                  case (MR_Integer) 1:
#line 919 "type_util.m"
                    check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 921 "type_util.m"
                    break;
#line 921 "type_util.m"
                }
#line 915 "type_util.m"
              }
#line 914 "type_util.m"
              break;
#line 914 "type_util.m"
            case (MR_Integer) 0:
#line 913 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 914 "type_util.m"
              break;
#line 914 "type_util.m"
            case (MR_Integer) 3:
#line 936 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 914 "type_util.m"
              break;
#line 914 "type_util.m"
          }
#line 914 "type_util.m"
        }
#line 914 "type_util.m"
        break;
#line 914 "type_util.m"
      case (MR_Integer) 2:
#line 913 "type_util.m"
        check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 0;
#line 914 "type_util.m"
        break;
#line 914 "type_util.m"
      case (MR_Integer) 3:
#line 914 "type_util.m"
#line 914 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_7, (MR_Integer) 0)))) {
#line 914 "type_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 914 "type_util.m"
          case (MR_Integer) 0:
#line 914 "type_util.m"
            {
#line 914 "type_util.m"
              MR_Word check_hlds__type_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_7, (MR_Integer) 1)));

#line 914 "type_util.m"
              check_hlds__type_util__TypeMayUseAtomic_6 = ((&check_hlds__type_util_vector_common_6[0 + check_hlds__type_util__V_22_22]))->check_hlds__type_util__vector_common_type_6_0__vct_6_f_0;
#line 914 "type_util.m"
            }
#line 914 "type_util.m"
            break;
#line 914 "type_util.m"
          case (MR_Integer) 1:
#line 936 "type_util.m"
            check_hlds__type_util__TypeMayUseAtomic_6 = (MR_Integer) 1;
#line 914 "type_util.m"
            break;
#line 914 "type_util.m"
        }
#line 914 "type_util.m"
        break;
#line 914 "type_util.m"
    }
#line 904 "type_util.m"
    return check_hlds__type_util__TypeMayUseAtomic_6;
#line 904 "type_util.m"
  }
#line 188 "type_util.m"
}

#line 183 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__classify_type_defn_body_1_f_0(
#line 183 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_3)
#line 183 "type_util.m"
{
#line 863 "type_util.m"
  {
#line 863 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 863 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_4;

#line 863 "type_util.m"
#line 863 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_3)) {
#line 863 "type_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 863 "type_util.m"
      case (MR_Integer) 0:
#line 889 "type_util.m"
        {
#line 890 "type_util.m"
          check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 889 "type_util.m"
        }
#line 863 "type_util.m"
        break;
#line 863 "type_util.m"
      case (MR_Integer) 1:
#line 863 "type_util.m"
        {
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__DuTypeKind_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 3)));
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 0)));
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 1)));
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 2)));
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 4)));
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 5)));
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__V_11_11 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__V_12_12 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 863 "type_util.m"
          MR_Word check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_3, (MR_Integer) 7)));

#line 867 "type_util.m"
#line 867 "type_util.m"
          switch (MR_tag((MR_Word) check_hlds__type_util__DuTypeKind_8)) {
#line 867 "type_util.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 867 "type_util.m"
            case (MR_Integer) 0:
#line 867 "type_util.m"
#line 867 "type_util.m"
              switch (MR_unmkbody(check_hlds__type_util__DuTypeKind_8)) {
#line 867 "type_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 867 "type_util.m"
                case (MR_Integer) 0:
#line 865 "type_util.m"
                  {
#line 866 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[6]);
#line 865 "type_util.m"
                  }
#line 867 "type_util.m"
                  break;
#line 867 "type_util.m"
                case (MR_Integer) 1:
#line 871 "type_util.m"
                  {
#line 872 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[11]);
#line 871 "type_util.m"
                  }
#line 867 "type_util.m"
                  break;
#line 867 "type_util.m"
                case (MR_Integer) 2:
#line 877 "type_util.m"
                  {
#line 878 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 877 "type_util.m"
                  }
#line 867 "type_util.m"
                  break;
#line 867 "type_util.m"
              }
#line 867 "type_util.m"
              break;
#line 867 "type_util.m"
            case (MR_Integer) 1:
#line 868 "type_util.m"
              {
#line 869 "type_util.m"
                check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(2), &check_hlds__type_util_scalar_common_3[5]);
#line 868 "type_util.m"
              }
#line 867 "type_util.m"
              break;
#line 867 "type_util.m"
            case (MR_Integer) 2:
#line 874 "type_util.m"
              {
#line 875 "type_util.m"
                check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[12]);
#line 874 "type_util.m"
              }
#line 867 "type_util.m"
              break;
#line 867 "type_util.m"
          }
#line 863 "type_util.m"
        }
#line 863 "type_util.m"
        break;
#line 863 "type_util.m"
      case (MR_Integer) 2:
#line 889 "type_util.m"
        {
#line 890 "type_util.m"
          check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 889 "type_util.m"
        }
#line 863 "type_util.m"
        break;
#line 863 "type_util.m"
      case (MR_Integer) 3:
#line 863 "type_util.m"
#line 863 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_3, (MR_Integer) 0)))) {
#line 863 "type_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 863 "type_util.m"
          case (MR_Integer) 0:
#line 889 "type_util.m"
            {
#line 890 "type_util.m"
              check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 889 "type_util.m"
            }
#line 863 "type_util.m"
            break;
#line 863 "type_util.m"
          case (MR_Integer) 1:
#line 863 "type_util.m"
            {
#line 863 "type_util.m"
              MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_3, (MR_Integer) 1)));

#line 863 "type_util.m"
#line 863 "type_util.m"
              switch (MR_tag((MR_Word) check_hlds__type_util__V_37_37)) {
#line 863 "type_util.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 863 "type_util.m"
                case (MR_Integer) 0:
#line 863 "type_util.m"
#line 863 "type_util.m"
                  switch (MR_unmkbody(check_hlds__type_util__V_37_37)) {
#line 863 "type_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 863 "type_util.m"
                    case (MR_Integer) 0:
#line 889 "type_util.m"
                      {
#line 890 "type_util.m"
                        check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 889 "type_util.m"
                      }
#line 863 "type_util.m"
                      break;
#line 863 "type_util.m"
                    case (MR_Integer) 1:
#line 889 "type_util.m"
                      {
#line 890 "type_util.m"
                        check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 889 "type_util.m"
                      }
#line 863 "type_util.m"
                      break;
#line 863 "type_util.m"
                  }
#line 863 "type_util.m"
                  break;
#line 863 "type_util.m"
                case (MR_Integer) 1:
#line 889 "type_util.m"
                  {
#line 890 "type_util.m"
                    check_hlds__type_util__TypeCategory_4 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__type_util_scalar_common_1[10]);
#line 889 "type_util.m"
                  }
#line 863 "type_util.m"
                  break;
#line 863 "type_util.m"
              }
#line 863 "type_util.m"
            }
#line 863 "type_util.m"
            break;
#line 863 "type_util.m"
        }
#line 863 "type_util.m"
        break;
#line 863 "type_util.m"
    }
#line 863 "type_util.m"
    return check_hlds__type_util__TypeCategory_4;
#line 863 "type_util.m"
  }
#line 183 "type_util.m"
}

#line 179 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__classify_type_ctor_2_f_0(
#line 179 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 179 "type_util.m"
  MR_Word check_hlds__type_util__TypeCtor_5)
#line 179 "type_util.m"
{
#line 774 "type_util.m"
  {
#line 774 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 774 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_6;
#line 774 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_5, (MR_Integer) 0)));
#line 774 "type_util.m"
    MR_Integer check_hlds__type_util__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeCtor_5, (MR_Integer) 1)));
#line 800 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategoryPrime_10;
#line 780 "type_util.m"
    MR_String check_hlds__type_util__TypeName_9;
#line 785 "type_util.m"
    MR_Integer check_hlds__type_util__lo_0;
#line 785 "type_util.m"
    MR_Integer check_hlds__type_util__hi_1;
#line 785 "type_util.m"
    MR_Integer check_hlds__type_util__mid_2;
#line 785 "type_util.m"
    MR_Integer check_hlds__type_util__result_3;

#line 781 "type_util.m"
    check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 780 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 780 "type_util.m"
      {
#line 780 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 0)));
#line 780 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 780 "type_util.m"
          {
#line 780 "type_util.m"
            check_hlds__type_util__TypeName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 785 "type_util.m"
            /* binary string simple lookup switch */
#line 785 "type_util.m"
            check_hlds__type_util__lo_0 = (MR_Integer) 0;
#line 785 "type_util.m"
            check_hlds__type_util__hi_1 = (MR_Integer) 4;
#line 785 "type_util.m"
            do
#line 785 "type_util.m"
              {
#line 785 "type_util.m"
                check_hlds__type_util__mid_2 = (((check_hlds__type_util__lo_0 + check_hlds__type_util__hi_1)) / (MR_Integer) 2);
#line 785 "type_util.m"
                check_hlds__type_util__result_3 = MR_strcmp(check_hlds__type_util__TypeName_9, ((&check_hlds__type_util_vector_common_5[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
#line 785 "type_util.m"
                if ((check_hlds__type_util__result_3 == (MR_Integer) 0))
#line 785 "type_util.m"
                  {
#line 785 "type_util.m"
                    check_hlds__type_util__TypeCategoryPrime_10 = ((&check_hlds__type_util_vector_common_5[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
#line 785 "type_util.m"
                    check_hlds__type_util__succeeded = MR_TRUE;
#line 785 "type_util.m"
                    /* jump out of search loop */
#line 785 "type_util.m"
                    goto label_0;
#line 785 "type_util.m"
                  }
#line 785 "type_util.m"
                else
#line 785 "type_util.m"
                if ((check_hlds__type_util__result_3 < (MR_Integer) 0))
#line 785 "type_util.m"
                  check_hlds__type_util__hi_1 = (check_hlds__type_util__mid_2 - (MR_Integer) 1);
#line 785 "type_util.m"
                else
#line 785 "type_util.m"
                  check_hlds__type_util__lo_0 = (check_hlds__type_util__mid_2 + (MR_Integer) 1);
#line 785 "type_util.m"
              }
#line 785 "type_util.m"
            while ((check_hlds__type_util__lo_0 <= check_hlds__type_util__hi_1));
#line 785 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 785 "type_util.m"
          label_0:;
#line 780 "type_util.m"
          }
#line 780 "type_util.m"
      }
#line 800 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 799 "type_util.m"
      check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_10;
#line 800 "type_util.m"
    else
#line 819 "type_util.m"
      {
#line 819 "type_util.m"
        MR_Word check_hlds__type_util__TypeCategoryPrime_34;
#line 801 "type_util.m"
        MR_Word check_hlds__type_util__ModuleSymName_11;
#line 801 "type_util.m"
        MR_String check_hlds__type_util__TypeName_27;
#line 801 "type_util.m"
        MR_Word check_hlds__type_util__V_35_35;
#line 807 "type_util.m"
        MR_Integer check_hlds__type_util__lo_4;
#line 807 "type_util.m"
        MR_Integer check_hlds__type_util__hi_5;
#line 807 "type_util.m"
        MR_Integer check_hlds__type_util__mid_6;
#line 807 "type_util.m"
        MR_Integer check_hlds__type_util__result_7;

#line 801 "type_util.m"
        check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
#line 801 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 801 "type_util.m"
          {
#line 801 "type_util.m"
            check_hlds__type_util__ModuleSymName_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 801 "type_util.m"
            check_hlds__type_util__TypeName_27 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 1)));
#line 802 "type_util.m"
            {
#line 802 "type_util.m"
              check_hlds__type_util__V_35_35 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
            }
#line 802 "type_util.m"
            {
#line 802 "type_util.m"
              check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__ModuleSymName_11, check_hlds__type_util__V_35_35);
            }
#line 801 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 801 "type_util.m"
              {
#line 803 "type_util.m"
                check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 801 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 801 "type_util.m"
                  {
#line 807 "type_util.m"
                    /* binary string simple lookup switch */
#line 807 "type_util.m"
                    check_hlds__type_util__lo_4 = (MR_Integer) 0;
#line 807 "type_util.m"
                    check_hlds__type_util__hi_5 = (MR_Integer) 3;
#line 807 "type_util.m"
                    do
#line 807 "type_util.m"
                      {
#line 807 "type_util.m"
                        check_hlds__type_util__mid_6 = (((check_hlds__type_util__lo_4 + check_hlds__type_util__hi_5)) / (MR_Integer) 2);
#line 807 "type_util.m"
                        check_hlds__type_util__result_7 = MR_strcmp(check_hlds__type_util__TypeName_27, ((&check_hlds__type_util_vector_common_5[5 + check_hlds__type_util__mid_6]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
#line 807 "type_util.m"
                        if ((check_hlds__type_util__result_7 == (MR_Integer) 0))
#line 807 "type_util.m"
                          {
#line 807 "type_util.m"
                            check_hlds__type_util__TypeCategoryPrime_34 = ((&check_hlds__type_util_vector_common_5[5 + check_hlds__type_util__mid_6]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
#line 807 "type_util.m"
                            check_hlds__type_util__succeeded = MR_TRUE;
#line 807 "type_util.m"
                            /* jump out of search loop */
#line 807 "type_util.m"
                            goto label_1;
#line 807 "type_util.m"
                          }
#line 807 "type_util.m"
                        else
#line 807 "type_util.m"
                        if ((check_hlds__type_util__result_7 < (MR_Integer) 0))
#line 807 "type_util.m"
                          check_hlds__type_util__hi_5 = (check_hlds__type_util__mid_6 - (MR_Integer) 1);
#line 807 "type_util.m"
                        else
#line 807 "type_util.m"
                          check_hlds__type_util__lo_4 = (check_hlds__type_util__mid_6 + (MR_Integer) 1);
#line 807 "type_util.m"
                      }
#line 807 "type_util.m"
                    while ((check_hlds__type_util__lo_4 <= check_hlds__type_util__hi_5));
#line 807 "type_util.m"
                    check_hlds__type_util__succeeded = MR_FALSE;
#line 807 "type_util.m"
                  label_1:;
#line 801 "type_util.m"
                  }
#line 801 "type_util.m"
              }
#line 801 "type_util.m"
          }
#line 819 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 818 "type_util.m"
          check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_34;
#line 819 "type_util.m"
        else
#line 838 "type_util.m"
          {
#line 838 "type_util.m"
            MR_Word check_hlds__type_util__TypeCategoryPrime_31;
#line 820 "type_util.m"
            MR_String check_hlds__type_util__TypeName_28;
#line 820 "type_util.m"
            MR_Word check_hlds__type_util__ModuleSymName_29;
#line 820 "type_util.m"
            MR_Word check_hlds__type_util__V_36_36;
#line 826 "type_util.m"
            MR_Integer check_hlds__type_util__lo_8;
#line 826 "type_util.m"
            MR_Integer check_hlds__type_util__hi_9;
#line 826 "type_util.m"
            MR_Integer check_hlds__type_util__mid_10;
#line 826 "type_util.m"
            MR_Integer check_hlds__type_util__result_11;

#line 820 "type_util.m"
            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__TypeSymName_7)) == (MR_mktag((MR_Integer) 1)));
#line 820 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 820 "type_util.m"
              {
#line 820 "type_util.m"
                check_hlds__type_util__ModuleSymName_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 0)));
#line 820 "type_util.m"
                check_hlds__type_util__TypeName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeSymName_7, (MR_Integer) 1)));
#line 821 "type_util.m"
                {
#line 821 "type_util.m"
                  check_hlds__type_util__V_36_36 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
                }
#line 821 "type_util.m"
                {
#line 821 "type_util.m"
                  check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__ModuleSymName_29, check_hlds__type_util__V_36_36);
                }
#line 820 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 820 "type_util.m"
                  {
#line 822 "type_util.m"
                    check_hlds__type_util__succeeded = (check_hlds__type_util__Arity_8 == (MR_Integer) 0);
#line 820 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 820 "type_util.m"
                      {
#line 826 "type_util.m"
                        /* binary string simple lookup switch */
#line 826 "type_util.m"
                        check_hlds__type_util__lo_8 = (MR_Integer) 0;
#line 826 "type_util.m"
                        check_hlds__type_util__hi_9 = (MR_Integer) 3;
#line 826 "type_util.m"
                        do
#line 826 "type_util.m"
                          {
#line 826 "type_util.m"
                            check_hlds__type_util__mid_10 = (((check_hlds__type_util__lo_8 + check_hlds__type_util__hi_9)) / (MR_Integer) 2);
#line 826 "type_util.m"
                            check_hlds__type_util__result_11 = MR_strcmp(check_hlds__type_util__TypeName_28, ((&check_hlds__type_util_vector_common_5[9 + check_hlds__type_util__mid_10]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_0);
#line 826 "type_util.m"
                            if ((check_hlds__type_util__result_11 == (MR_Integer) 0))
#line 826 "type_util.m"
                              {
#line 826 "type_util.m"
                                check_hlds__type_util__TypeCategoryPrime_31 = ((&check_hlds__type_util_vector_common_5[9 + check_hlds__type_util__mid_10]))->check_hlds__type_util__vector_common_type_5_0__vct_5_f_1;
#line 826 "type_util.m"
                                check_hlds__type_util__succeeded = MR_TRUE;
#line 826 "type_util.m"
                                /* jump out of search loop */
#line 826 "type_util.m"
                                goto label_2;
#line 826 "type_util.m"
                              }
#line 826 "type_util.m"
                            else
#line 826 "type_util.m"
                            if ((check_hlds__type_util__result_11 < (MR_Integer) 0))
#line 826 "type_util.m"
                              check_hlds__type_util__hi_9 = (check_hlds__type_util__mid_10 - (MR_Integer) 1);
#line 826 "type_util.m"
                            else
#line 826 "type_util.m"
                              check_hlds__type_util__lo_8 = (check_hlds__type_util__mid_10 + (MR_Integer) 1);
#line 826 "type_util.m"
                          }
#line 826 "type_util.m"
                        while ((check_hlds__type_util__lo_8 <= check_hlds__type_util__hi_9));
#line 826 "type_util.m"
                        check_hlds__type_util__succeeded = MR_FALSE;
#line 826 "type_util.m"
                      label_2:;
#line 820 "type_util.m"
                      }
#line 820 "type_util.m"
                  }
#line 820 "type_util.m"
              }
#line 838 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 837 "type_util.m"
              check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__TypeCategoryPrime_31;
#line 838 "type_util.m"
            else
#line 842 "type_util.m"
              {
#line 839 "type_util.m"
                MR_Word check_hlds__type_util__V_26_26;

#line 839 "type_util.m"
                {
#line 839 "type_util.m"
                  check_hlds__type_util__V_26_26 = parse_tree__prog_type__check_builtin_dummy_type_ctor_1_f_0(check_hlds__type_util__TypeCtor_5);
                }
#line 839 "type_util.m"
                check_hlds__type_util__succeeded = (check_hlds__type_util__V_26_26 == (MR_Integer) 0);
#line 842 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 841 "type_util.m"
                  check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 842 "type_util.m"
                else
#line 846 "type_util.m"
                  {
#line 843 "type_util.m"
                    MR_Word check_hlds__type_util__V_12_12;
#line 843 "type_util.m"
                    MR_Word check_hlds__type_util__V_13_13;

#line 843 "type_util.m"
                    {
#line 843 "type_util.m"
                      check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_higher_order_4_p_0(check_hlds__type_util__TypeCtor_5, &check_hlds__type_util__V_12_12, &check_hlds__type_util__V_13_13);
                    }
#line 846 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 845 "type_util.m"
                      check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 846 "type_util.m"
                    else
#line 850 "type_util.m"
                      {
#line 847 "type_util.m"
                        {
#line 847 "type_util.m"
                          check_hlds__type_util__succeeded = parse_tree__prog_type__type_ctor_is_tuple_1_p_0(check_hlds__type_util__TypeCtor_5);
                        }
#line 850 "type_util.m"
                        if (check_hlds__type_util__succeeded)
#line 849 "type_util.m"
                          check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 850 "type_util.m"
                        else
#line 851 "type_util.m"
                          {
#line 851 "type_util.m"
                            MR_Word check_hlds__type_util__TypeTable_15;
#line 851 "type_util.m"
                            MR_Word check_hlds__type_util__TypeDefn_16;
#line 851 "type_util.m"
                            MR_Word check_hlds__type_util__TypeBody_17;

#line 851 "type_util.m"
                            {
#line 851 "type_util.m"
                              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
                            }
#line 852 "type_util.m"
                            {
#line 852 "type_util.m"
                              hlds__hlds_data__lookup_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_5, &check_hlds__type_util__TypeDefn_16);
                            }
#line 853 "type_util.m"
                            {
#line 853 "type_util.m"
                              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_16, &check_hlds__type_util__TypeBody_17);
                            }
#line 854 "type_util.m"
                            {
#line 854 "type_util.m"
                              return check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__classify_type_defn_body_1_f_0(check_hlds__type_util__TypeBody_17);
                            }
#line 851 "type_util.m"
                          }
#line 850 "type_util.m"
                      }
#line 846 "type_util.m"
                  }
#line 842 "type_util.m"
              }
#line 838 "type_util.m"
          }
#line 819 "type_util.m"
      }
#line 774 "type_util.m"
    return check_hlds__type_util__TypeCategory_6;
#line 774 "type_util.m"
  }
#line 179 "type_util.m"
}

#line 175 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__classify_type_2_f_0(
#line 175 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 175 "type_util.m"
  MR_Word check_hlds__type_util__VarType_5)
#line 175 "type_util.m"
{
#line 770 "type_util.m"
  {
#line 770 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 770 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_6;
#line 770 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;

#line 768 "type_util.m"
    {
#line 768 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__VarType_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 770 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 769 "type_util.m"
      {
#line 769 "type_util.m"
        return check_hlds__type_util__TypeCategory_6 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeCtor_7);
      }
#line 770 "type_util.m"
    else
#line 771 "type_util.m"
      check_hlds__type_util__TypeCategory_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 770 "type_util.m"
    return check_hlds__type_util__TypeCategory_6;
#line 770 "type_util.m"
  }
#line 175 "type_util.m"
}

#line 169 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_ctor_has_hand_defined_rtti_2_p_0(
#line 169 "type_util.m"
  MR_Word check_hlds__type_util__Type_3,
#line 169 "type_util.m"
  MR_Word check_hlds__type_util__Body_4)
#line 169 "type_util.m"
{
#line 753 "type_util.m"
  {
#line 753 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 753 "type_util.m"
    MR_String check_hlds__type_util__Name_5;
#line 753 "type_util.m"
    MR_Word check_hlds__type_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Type_3, (MR_Integer) 0)));
#line 753 "type_util.m"
    MR_Word check_hlds__type_util__V_19_19;
#line 753 "type_util.m"
    MR_Integer check_hlds__type_util__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__Type_3, (MR_Integer) 1)));
#line 753 "type_util.m"
    MR_Word check_hlds__type_util__V_22_22;
#line 756 "type_util.m"
    MR_Integer check_hlds__type_util__lo_0;
#line 756 "type_util.m"
    MR_Integer check_hlds__type_util__hi_1;
#line 756 "type_util.m"
    MR_Integer check_hlds__type_util__mid_2;
#line 756 "type_util.m"
    MR_Integer check_hlds__type_util__result_3;

#line 754 "type_util.m"
    check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_18_18)) == (MR_mktag((MR_Integer) 1)));
#line 754 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 754 "type_util.m"
      {
#line 754 "type_util.m"
        check_hlds__type_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_18_18, (MR_Integer) 0)));
#line 754 "type_util.m"
        check_hlds__type_util__Name_5 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_18_18, (MR_Integer) 1)));
#line 754 "type_util.m"
        {
#line 754 "type_util.m"
          check_hlds__type_util__V_22_22 = mdbcomp__builtin_modules__mercury_private_builtin_module_0_f_0();
        }
#line 754 "type_util.m"
        {
#line 754 "type_util.m"
          check_hlds__type_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__type_util__V_19_19, check_hlds__type_util__V_22_22);
        }
#line 753 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 753 "type_util.m"
          {
#line 754 "type_util.m"
            check_hlds__type_util__succeeded = (check_hlds__type_util__V_20_20 == (MR_Integer) 0);
#line 753 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 753 "type_util.m"
              {
#line 756 "type_util.m"
                /* binary string simple lookup switch */
#line 756 "type_util.m"
                check_hlds__type_util__lo_0 = (MR_Integer) 0;
#line 756 "type_util.m"
                check_hlds__type_util__hi_1 = (MR_Integer) 3;
#line 756 "type_util.m"
                do
#line 756 "type_util.m"
                  {
#line 756 "type_util.m"
                    check_hlds__type_util__mid_2 = (((check_hlds__type_util__lo_0 + check_hlds__type_util__hi_1)) / (MR_Integer) 2);
#line 756 "type_util.m"
                    check_hlds__type_util__result_3 = MR_strcmp(check_hlds__type_util__Name_5, ((&check_hlds__type_util_vector_common_4[0 + check_hlds__type_util__mid_2]))->check_hlds__type_util__vector_common_type_4_0__vct_4_f_0);
#line 756 "type_util.m"
                    if ((check_hlds__type_util__result_3 == (MR_Integer) 0))
#line 756 "type_util.m"
                      {
#line 756 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 756 "type_util.m"
                        /* jump out of search loop */
#line 756 "type_util.m"
                        goto label_0;
#line 756 "type_util.m"
                      }
#line 756 "type_util.m"
                    else
#line 756 "type_util.m"
                    if ((check_hlds__type_util__result_3 < (MR_Integer) 0))
#line 756 "type_util.m"
                      check_hlds__type_util__hi_1 = (check_hlds__type_util__mid_2 - (MR_Integer) 1);
#line 756 "type_util.m"
                    else
#line 756 "type_util.m"
                      check_hlds__type_util__lo_0 = (check_hlds__type_util__mid_2 + (MR_Integer) 1);
#line 756 "type_util.m"
                  }
#line 756 "type_util.m"
                while ((check_hlds__type_util__lo_0 <= check_hlds__type_util__hi_1));
#line 756 "type_util.m"
                check_hlds__type_util__succeeded = MR_FALSE;
#line 756 "type_util.m"
              label_0:;
#line 753 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 753 "type_util.m"
                  {
#line 761 "type_util.m"
#line 761 "type_util.m"
                    switch (MR_tag((MR_Word) check_hlds__type_util__Body_4)) {
#line 761 "type_util.m"
                      default:
#line 761 "type_util.m"
                        check_hlds__type_util__succeeded = MR_FALSE;
#line 761 "type_util.m"
                        break;
#line 761 "type_util.m"
                      case (MR_Integer) 0:
#line 761 "type_util.m"
                        check_hlds__type_util__succeeded = MR_TRUE;
#line 761 "type_util.m"
                        break;
#line 761 "type_util.m"
                      case (MR_Integer) 1:
#line 760 "type_util.m"
                        {
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 7)));
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 0)));
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 1)));
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 2)));
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 3)));
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 4)));
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 5)));
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_12_12 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_13_13 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__Body_4, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 760 "type_util.m"
                          MR_Word check_hlds__type_util__V_14_14;

#line 760 "type_util.m"
                          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 760 "type_util.m"
                          if (check_hlds__type_util__succeeded)
#line 760 "type_util.m"
                            check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_21_21, (MR_Integer) 0)));
#line 760 "type_util.m"
                        }
#line 761 "type_util.m"
                        break;
#line 761 "type_util.m"
                      case (MR_Integer) 3:
#line 761 "type_util.m"
#line 761 "type_util.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Body_4, (MR_Integer) 0)))) {
#line 761 "type_util.m"
                          default:
#line 761 "type_util.m"
                            check_hlds__type_util__succeeded = MR_FALSE;
#line 761 "type_util.m"
                            break;
#line 761 "type_util.m"
                          case (MR_Integer) 0:
#line 762 "type_util.m"
                            check_hlds__type_util__succeeded = MR_TRUE;
#line 761 "type_util.m"
                            break;
#line 761 "type_util.m"
                        }
#line 761 "type_util.m"
                        break;
#line 761 "type_util.m"
                    }
#line 760 "type_util.m"
                    check_hlds__type_util__succeeded = !(check_hlds__type_util__succeeded);
#line 753 "type_util.m"
                  }
#line 753 "type_util.m"
              }
#line 753 "type_util.m"
          }
#line 754 "type_util.m"
      }
#line 753 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 753 "type_util.m"
  }
#line 169 "type_util.m"
}

#line 162 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__check_dummy_type_2_f_0(
#line 162 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 162 "type_util.m"
  MR_Word check_hlds__type_util__Type_5)
#line 162 "type_util.m"
{
#line 688 "type_util.m"
  {
#line 688 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 688 "type_util.m"
    MR_Word check_hlds__type_util__HeadVar__3_3;

#line 689 "type_util.m"
    {
#line 689 "type_util.m"
      return check_hlds__type_util__HeadVar__3_3 = check_hlds__type_util__check_dummy_type_2_3_f_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__Type_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 688 "type_util.m"
    return check_hlds__type_util__HeadVar__3_3;
#line 688 "type_util.m"
  }
#line 162 "type_util.m"
}

#line 684 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_1(
#line 684 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 684 "type_util.m"
{
#line 684 "type_util.m"
  {
#line 684 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 684 "type_util.m"
    MR_builtin_longjmp((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0, 1);
#line 684 "type_util.m"
  }
#line 684 "type_util.m"
}

#line 684 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_3(
#line 684 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 684 "type_util.m"
{
#line 684 "type_util.m"
  {
#line 684 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 684 "type_util.m"
    (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10 = ((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10);
#line 684 "type_util.m"
    {
#line 684 "type_util.m"
      check_hlds__type_util__type_is_existq_type_2_p_0_2(check_hlds__type_util__env_ptr);
#line 684 "type_util.m"
      return;
    }
#line 684 "type_util.m"
  }
#line 684 "type_util.m"
}

#line 684 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_2(
#line 684 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 684 "type_util.m"
{
#line 684 "type_util.m"
  {
#line 684 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 684 "type_util.m"
    {
#line 685 "type_util.m"
      MR_Word check_hlds__type_util__V_11_11;
#line 685 "type_util.m"
      MR_Word check_hlds__type_util__V_12_12;
#line 685 "type_util.m"
      MR_Word check_hlds__type_util__V_13_13;
#line 685 "type_util.m"
      MR_Integer check_hlds__type_util__V_14_14;
#line 685 "type_util.m"
      MR_Word check_hlds__type_util__V_15_15;
#line 685 "type_util.m"
      MR_Word check_hlds__type_util__V_7_7;
#line 685 "type_util.m"
      MR_Word check_hlds__type_util__V_8_8;

#line 685 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 0)));
#line 685 "type_util.m"
      check_hlds__type_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 1)));
#line 685 "type_util.m"
      check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 2)));
#line 685 "type_util.m"
      check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 3)));
#line 685 "type_util.m"
      check_hlds__type_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 4)));
#line 685 "type_util.m"
      check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructor_10, (MR_Integer) 5)));
#line 685 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = ((MR_tag((MR_Word) (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9)) == (MR_mktag((MR_Integer) 1)));
#line 685 "type_util.m"
      if ((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
#line 685 "type_util.m"
        {
#line 685 "type_util.m"
          {
#line 685 "type_util.m"
            check_hlds__type_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9, (MR_Integer) 0)));
#line 685 "type_util.m"
            check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__V_9_9, (MR_Integer) 1)));
#line 685 "type_util.m"
          }
#line 685 "type_util.m"
          {
#line 685 "type_util.m"
            check_hlds__type_util__type_is_existq_type_2_p_0_1(check_hlds__type_util__env_ptr);
#line 685 "type_util.m"
            return;
          }
#line 685 "type_util.m"
        }
#line 684 "type_util.m"
    }
#line 684 "type_util.m"
  }
#line 684 "type_util.m"
}

#line 684 "type_util.m"
static void MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0_4(
#line 684 "type_util.m"
  void * check_hlds__type_util__env_ptr_arg)
#line 684 "type_util.m"
{
#line 684 "type_util.m"
  {
#line 684 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s * check_hlds__type_util__env_ptr = (struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s *) check_hlds__type_util__env_ptr_arg;

#line 684 "type_util.m"
    if (MR_builtin_setjmp((check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__commit_0) == 0)
#line 684 "type_util.m"
      {
#line 684 "type_util.m"
        {
#line 684 "type_util.m"
          {
#line 684 "type_util.m"
            mercury__list__member_2_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_constructor_0, &(check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__conv0_Constructor_10, (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5, check_hlds__type_util__type_is_existq_type_2_p_0_3, check_hlds__type_util__env_ptr);
          }
#line 684 "type_util.m"
        }
#line 684 "type_util.m"
        (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_FALSE;
#line 684 "type_util.m"
      }
#line 684 "type_util.m"
    else
#line 684 "type_util.m"
      (check_hlds__type_util__env_ptr)->check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = MR_TRUE;
#line 684 "type_util.m"
  }
#line 684 "type_util.m"
}

#line 136 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_existq_type_2_p_0(
#line 136 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 136 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 136 "type_util.m"
{
#line 136 "type_util.m"
  {
#line 136 "type_util.m"
    struct check_hlds__type_util__type_is_existq_type_2_p_0_env_0_s check_hlds__type_util__env;

#line 682 "type_util.m"
    {
#line 682 "type_util.m"
      (check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded = check_hlds__type_util__type_constructors_3_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, &(check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__Constructors_5);
    }
#line 681 "type_util.m"
    if ((check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded)
#line 684 "type_util.m"
      {
#line 684 "type_util.m"
        check_hlds__type_util__type_is_existq_type_2_p_0_4(&check_hlds__type_util__env);
      }
#line 681 "type_util.m"
    return (check_hlds__type_util__env).check_hlds__type_util__type_is_existq_type_2_p_0_env_0__succeeded;
#line 136 "type_util.m"
  }
#line 136 "type_util.m"
}

#line 130 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(
#line 130 "type_util.m"
  MR_Word check_hlds__type_util__TypeTable_3,
#line 130 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_4)
#line 130 "type_util.m"
{
#line 673 "type_util.m"
  while (MR_TRUE)
#line 673 "type_util.m"
    {
#line 673 "type_util.m"
      /* tailcall optimized into a loop */
#line 673 "type_util.m"
      {
#line 673 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 673 "type_util.m"
#line 673 "type_util.m"
        switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) {
#line 673 "type_util.m"
          default:
#line 673 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 673 "type_util.m"
            break;
#line 673 "type_util.m"
          case (MR_Integer) 2:
#line 677 "type_util.m"
            {
#line 677 "type_util.m"
              MR_Word check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)));
#line 677 "type_util.m"
              MR_Word check_hlds__type_util__TypeBody_11;
#line 677 "type_util.m"
              MR_Word check_hlds__type_util__TypeDefn_15;
#line 677 "type_util.m"
              MR_Word check_hlds__type_util__TypeCtor_19;

#line 461 "type_util.m"
              {
#line 461 "type_util.m"
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__TypeCtor_19);
              }
#line 677 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 677 "type_util.m"
                {
#line 462 "type_util.m"
                  {
#line 462 "type_util.m"
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeCtor_19, &check_hlds__type_util__TypeDefn_15);
                  }
#line 677 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 677 "type_util.m"
                    {
#line 470 "type_util.m"
                      {
#line 470 "type_util.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_11);
                      }
#line 659 "type_util.m"
                      /* direct tailcall eliminated */
#line 659 "type_util.m"
                      {
#line 659 "type_util.m"
                        MR_Word check_hlds__type_util__TypeBody__tmp_copy_4 = check_hlds__type_util__TypeBody_11;

#line 659 "type_util.m"
                        check_hlds__type_util__TypeBody_4 = check_hlds__type_util__TypeBody__tmp_copy_4;
#line 659 "type_util.m"
                      }
#line 659 "type_util.m"
                      continue;
#line 677 "type_util.m"
                    }
#line 677 "type_util.m"
                }
#line 677 "type_util.m"
            }
#line 673 "type_util.m"
            break;
#line 673 "type_util.m"
          case (MR_Integer) 3:
#line 673 "type_util.m"
#line 673 "type_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) {
#line 673 "type_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 673 "type_util.m"
              case (MR_Integer) 0:
#line 673 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 673 "type_util.m"
                break;
#line 673 "type_util.m"
              case (MR_Integer) 1:
#line 675 "type_util.m"
                {
#line 675 "type_util.m"
                  MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 1)));

#line 675 "type_util.m"
                  check_hlds__type_util__succeeded = (check_hlds__type_util__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 675 "type_util.m"
                }
#line 673 "type_util.m"
                break;
#line 673 "type_util.m"
            }
#line 673 "type_util.m"
            break;
#line 673 "type_util.m"
        }
#line 673 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 673 "type_util.m"
      }
#line 673 "type_util.m"
      break;
#line 673 "type_util.m"
    }
#line 130 "type_util.m"
}

#line 128 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_body_is_solver_type_2_p_0(
#line 128 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 128 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_4)
#line 128 "type_util.m"
{
#line 663 "type_util.m"
  while (MR_TRUE)
#line 663 "type_util.m"
    {
#line 663 "type_util.m"
      /* tailcall optimized into a loop */
#line 663 "type_util.m"
      {
#line 663 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 663 "type_util.m"
#line 663 "type_util.m"
        switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_4)) {
#line 663 "type_util.m"
          default:
#line 663 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 663 "type_util.m"
            break;
#line 663 "type_util.m"
          case (MR_Integer) 2:
#line 667 "type_util.m"
            {
#line 667 "type_util.m"
              MR_Word check_hlds__type_util__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)));
#line 667 "type_util.m"
              MR_Word check_hlds__type_util__TypeBody_11;
#line 667 "type_util.m"
              MR_Word check_hlds__type_util__TypeDefn_15;
#line 667 "type_util.m"
              MR_Word check_hlds__type_util__TypeTable_19;
#line 667 "type_util.m"
              MR_Word check_hlds__type_util__TypeCtor_20;

#line 456 "type_util.m"
              {
#line 456 "type_util.m"
                hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_19);
              }
#line 457 "type_util.m"
              {
#line 457 "type_util.m"
                check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_7, &check_hlds__type_util__TypeCtor_20);
              }
#line 667 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 667 "type_util.m"
                {
#line 458 "type_util.m"
                  {
#line 458 "type_util.m"
                    check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_19, check_hlds__type_util__TypeCtor_20, &check_hlds__type_util__TypeDefn_15);
                  }
#line 667 "type_util.m"
                  if (check_hlds__type_util__succeeded)
#line 667 "type_util.m"
                    {
#line 466 "type_util.m"
                      {
#line 466 "type_util.m"
                        hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_15, &check_hlds__type_util__TypeBody_11);
                      }
#line 654 "type_util.m"
                      /* direct tailcall eliminated */
#line 654 "type_util.m"
                      {
#line 654 "type_util.m"
                        MR_Word check_hlds__type_util__TypeBody__tmp_copy_4 = check_hlds__type_util__TypeBody_11;

#line 654 "type_util.m"
                        check_hlds__type_util__TypeBody_4 = check_hlds__type_util__TypeBody__tmp_copy_4;
#line 654 "type_util.m"
                      }
#line 654 "type_util.m"
                      continue;
#line 667 "type_util.m"
                    }
#line 667 "type_util.m"
                }
#line 667 "type_util.m"
            }
#line 663 "type_util.m"
            break;
#line 663 "type_util.m"
          case (MR_Integer) 3:
#line 663 "type_util.m"
#line 663 "type_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 0)))) {
#line 663 "type_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 663 "type_util.m"
              case (MR_Integer) 0:
#line 663 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 663 "type_util.m"
                break;
#line 663 "type_util.m"
              case (MR_Integer) 1:
#line 665 "type_util.m"
                {
#line 665 "type_util.m"
                  MR_Word check_hlds__type_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_4, (MR_Integer) 1)));

#line 665 "type_util.m"
                  check_hlds__type_util__succeeded = (check_hlds__type_util__V_8_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 665 "type_util.m"
                }
#line 663 "type_util.m"
                break;
#line 663 "type_util.m"
            }
#line 663 "type_util.m"
            break;
#line 663 "type_util.m"
        }
#line 663 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 663 "type_util.m"
      }
#line 663 "type_util.m"
      break;
#line 663 "type_util.m"
    }
#line 128 "type_util.m"
}

#line 123 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_from_type_table_2_p_0(
#line 123 "type_util.m"
  MR_Word check_hlds__type_util__TypeTable_3,
#line 123 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 123 "type_util.m"
{
#line 656 "type_util.m"
  {
#line 656 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 656 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 656 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_9;
#line 656 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_13;

#line 461 "type_util.m"
    {
#line 461 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_13);
    }
#line 656 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 656 "type_util.m"
      {
#line 462 "type_util.m"
        {
#line 462 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeCtor_13, &check_hlds__type_util__TypeDefn_9);
        }
#line 656 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 656 "type_util.m"
          {
#line 470 "type_util.m"
            {
#line 470 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_9, &check_hlds__type_util__TypeBody_5);
            }
#line 659 "type_util.m"
            {
#line 659 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_is_solver_type_from_type_table_2_p_0(check_hlds__type_util__TypeTable_3, check_hlds__type_util__TypeBody_5);
            }
#line 656 "type_util.m"
          }
#line 656 "type_util.m"
      }
#line 656 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 656 "type_util.m"
  }
#line 123 "type_util.m"
}

#line 122 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_2_p_0(
#line 122 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 122 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 122 "type_util.m"
{
#line 642 "type_util.m"
  {
#line 642 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 642 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 642 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_9;
#line 642 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_13;
#line 642 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_14;

#line 456 "type_util.m"
    {
#line 456 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_13);
    }
#line 457 "type_util.m"
    {
#line 457 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_14);
    }
#line 642 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 642 "type_util.m"
      {
#line 458 "type_util.m"
        {
#line 458 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_13, check_hlds__type_util__TypeCtor_14, &check_hlds__type_util__TypeDefn_9);
        }
#line 642 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 642 "type_util.m"
          {
#line 466 "type_util.m"
            {
#line 466 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_9, &check_hlds__type_util__TypeBody_5);
            }
#line 654 "type_util.m"
            {
#line 654 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_is_solver_type_2_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeBody_5);
            }
#line 642 "type_util.m"
          }
#line 642 "type_util.m"
      }
#line 642 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 642 "type_util.m"
  }
#line 122 "type_util.m"
}

#line 119 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(
#line 119 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 119 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 119 "type_util.m"
{
#line 592 "type_util.m"
  {
#line 592 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_5;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__ActualType_8;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__SolverTypeDetails_9;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__V_12_12;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_20;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_24;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_25;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_29;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_33;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_37;
#line 592 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_38;
#line 612 "type_util.m"
    MR_Word check_hlds__type_util__V_13_13;
#line 612 "type_util.m"
    MR_Word check_hlds__type_util__V_14_14;
#line 612 "type_util.m"
    MR_Word check_hlds__type_util__V_15_15;
#line 612 "type_util.m"
    MR_Word check_hlds__type_util__V_16_16;
#line 612 "type_util.m"
    MR_Word check_hlds__type_util__V_10_10;

#line 456 "type_util.m"
    {
#line 456 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_24);
    }
#line 457 "type_util.m"
    {
#line 457 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_25);
    }
#line 592 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 592 "type_util.m"
      {
#line 458 "type_util.m"
        {
#line 458 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_24, check_hlds__type_util__TypeCtor_25, &check_hlds__type_util__TypeDefn_20);
        }
#line 592 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 592 "type_util.m"
          {
#line 466 "type_util.m"
            {
#line 466 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_20, &check_hlds__type_util__TypeBody_5);
            }
#line 597 "type_util.m"
            if (((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 2))))
#line 609 "type_util.m"
              {
#line 609 "type_util.m"
                check_hlds__type_util__ActualType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 609 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 609 "type_util.m"
              }
#line 597 "type_util.m"
            else
#line 597 "type_util.m"
            if (((((MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 596 "type_util.m"
              {
#line 596 "type_util.m"
                check_hlds__type_util__ActualType_8 = check_hlds__type_util__Type_4;
#line 596 "type_util.m"
                check_hlds__type_util__succeeded = MR_TRUE;
#line 596 "type_util.m"
              }
#line 597 "type_util.m"
            else
#line 597 "type_util.m"
              check_hlds__type_util__succeeded = MR_FALSE;
#line 592 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 592 "type_util.m"
              {
#line 456 "type_util.m"
                {
#line 456 "type_util.m"
                  hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_37);
                }
#line 457 "type_util.m"
                {
#line 457 "type_util.m"
                  check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__ActualType_8, &check_hlds__type_util__TypeCtor_38);
                }
#line 592 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 592 "type_util.m"
                  {
#line 458 "type_util.m"
                    {
#line 458 "type_util.m"
                      check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_37, check_hlds__type_util__TypeCtor_38, &check_hlds__type_util__TypeDefn_33);
                    }
#line 592 "type_util.m"
                    if (check_hlds__type_util__succeeded)
#line 592 "type_util.m"
                      {
#line 466 "type_util.m"
                        {
#line 466 "type_util.m"
                          hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_33, &check_hlds__type_util__TypeBody_29);
                        }
#line 631 "type_util.m"
                        {
#line 631 "type_util.m"
                          check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_solver_type_details_3_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeBody_29, &check_hlds__type_util__SolverTypeDetails_9);
                        }
#line 592 "type_util.m"
                        if (check_hlds__type_util__succeeded)
#line 592 "type_util.m"
                          {
#line 612 "type_util.m"
                            check_hlds__type_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 0)));
#line 612 "type_util.m"
                            check_hlds__type_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 1)));
#line 612 "type_util.m"
                            check_hlds__type_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 2)));
#line 612 "type_util.m"
                            check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 3)));
#line 612 "type_util.m"
                            check_hlds__type_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__SolverTypeDetails_9, (MR_Integer) 4)));
#line 612 "type_util.m"
                            check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 612 "type_util.m"
                            if (check_hlds__type_util__succeeded)
#line 612 "type_util.m"
                              check_hlds__type_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_12_12, (MR_Integer) 0)));
#line 592 "type_util.m"
                          }
#line 592 "type_util.m"
                      }
#line 592 "type_util.m"
                  }
#line 592 "type_util.m"
              }
#line 592 "type_util.m"
          }
#line 592 "type_util.m"
      }
#line 592 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 592 "type_util.m"
  }
#line 119 "type_util.m"
}

#line 113 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_body_has_solver_type_details_3_p_0(
#line 113 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 113 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 113 "type_util.m"
  MR_Word * check_hlds__type_util__SolverTypeDetails_6)
#line 113 "type_util.m"
{
#line 636 "type_util.m"
  while (MR_TRUE)
#line 636 "type_util.m"
    {
#line 636 "type_util.m"
      /* tailcall optimized into a loop */
#line 636 "type_util.m"
      {
#line 636 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 636 "type_util.m"
        if (((MR_tag((MR_Word) check_hlds__type_util__Type_5)) == (MR_mktag((MR_Integer) 2))))
#line 638 "type_util.m"
          {
#line 638 "type_util.m"
            MR_Word check_hlds__type_util__EqvType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__Type_5, (MR_Integer) 0)));
#line 638 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_12;
#line 638 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_16;
#line 638 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_20;
#line 638 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_21;

#line 456 "type_util.m"
            {
#line 456 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_20);
            }
#line 457 "type_util.m"
            {
#line 457 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__EqvType_8, &check_hlds__type_util__TypeCtor_21);
            }
#line 638 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 638 "type_util.m"
              {
#line 458 "type_util.m"
                {
#line 458 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_20, check_hlds__type_util__TypeCtor_21, &check_hlds__type_util__TypeDefn_16);
                }
#line 638 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 638 "type_util.m"
                  {
#line 466 "type_util.m"
                    {
#line 466 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_16, &check_hlds__type_util__TypeBody_12);
                    }
#line 631 "type_util.m"
                    /* direct tailcall eliminated */
#line 631 "type_util.m"
                    {
#line 631 "type_util.m"
                      MR_Word check_hlds__type_util__Type__tmp_copy_5 = check_hlds__type_util__TypeBody_12;

#line 631 "type_util.m"
                      check_hlds__type_util__Type_5 = check_hlds__type_util__Type__tmp_copy_5;
#line 631 "type_util.m"
                    }
#line 631 "type_util.m"
                    continue;
#line 638 "type_util.m"
                  }
#line 638 "type_util.m"
              }
#line 638 "type_util.m"
          }
#line 636 "type_util.m"
        else
#line 636 "type_util.m"
        if (((((MR_tag((MR_Word) check_hlds__type_util__Type_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 636 "type_util.m"
          {
#line 636 "type_util.m"
            MR_Word check_hlds__type_util___MaybeUserEqComp_7;

#line 636 "type_util.m"
            *check_hlds__type_util__SolverTypeDetails_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 1)));
#line 636 "type_util.m"
            check_hlds__type_util___MaybeUserEqComp_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__Type_5, (MR_Integer) 2)));
#line 636 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 636 "type_util.m"
          }
#line 636 "type_util.m"
        else
#line 636 "type_util.m"
          check_hlds__type_util__succeeded = MR_FALSE;
#line 636 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 636 "type_util.m"
      }
#line 636 "type_util.m"
      break;
#line 636 "type_util.m"
    }
#line 113 "type_util.m"
}

#line 110 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_has_solver_type_details_3_p_0(
#line 110 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 110 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 110 "type_util.m"
  MR_Word * check_hlds__type_util__SolverTypeDetails_6)
#line 110 "type_util.m"
{
#line 629 "type_util.m"
  {
#line 629 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 629 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_7;
#line 629 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_11;
#line 629 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_15;
#line 629 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_16;

#line 456 "type_util.m"
    {
#line 456 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
    }
#line 457 "type_util.m"
    {
#line 457 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_16);
    }
#line 629 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 629 "type_util.m"
      {
#line 458 "type_util.m"
        {
#line 458 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_16, &check_hlds__type_util__TypeDefn_11);
        }
#line 629 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 629 "type_util.m"
          {
#line 466 "type_util.m"
            {
#line 466 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_7);
            }
#line 631 "type_util.m"
            {
#line 631 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_solver_type_details_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeBody_7, check_hlds__type_util__SolverTypeDetails_6);
            }
#line 629 "type_util.m"
          }
#line 629 "type_util.m"
      }
#line 629 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 629 "type_util.m"
  }
#line 110 "type_util.m"
}

#line 107 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(
#line 107 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 107 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 107 "type_util.m"
{
#line 616 "type_util.m"
  while (MR_TRUE)
#line 616 "type_util.m"
    {
#line 616 "type_util.m"
      /* tailcall optimized into a loop */
#line 616 "type_util.m"
      {
#line 616 "type_util.m"
        MR_bool check_hlds__type_util__succeeded;

#line 616 "type_util.m"
        {
#line 616 "type_util.m"
          check_hlds__type_util__succeeded = parse_tree__prog_type__type_is_higher_order_1_p_0(check_hlds__type_util__Type_4);
        }
#line 616 "type_util.m"
        if (!(check_hlds__type_util__succeeded))
#line 618 "type_util.m"
          {
#line 618 "type_util.m"
            MR_Word check_hlds__type_util__TypeBody_5;
#line 618 "type_util.m"
            MR_Word check_hlds__type_util__TypeDefn_13;
#line 618 "type_util.m"
            MR_Word check_hlds__type_util__TypeTable_17;
#line 618 "type_util.m"
            MR_Word check_hlds__type_util__TypeCtor_18;

#line 456 "type_util.m"
            {
#line 456 "type_util.m"
              hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_3, &check_hlds__type_util__TypeTable_17);
            }
#line 457 "type_util.m"
            {
#line 457 "type_util.m"
              check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_18);
            }
#line 618 "type_util.m"
            if (check_hlds__type_util__succeeded)
#line 618 "type_util.m"
              {
#line 458 "type_util.m"
                {
#line 458 "type_util.m"
                  check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_17, check_hlds__type_util__TypeCtor_18, &check_hlds__type_util__TypeDefn_13);
                }
#line 618 "type_util.m"
                if (check_hlds__type_util__succeeded)
#line 618 "type_util.m"
                  {
#line 466 "type_util.m"
                    {
#line 466 "type_util.m"
                      hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_13, &check_hlds__type_util__TypeBody_5);
                    }
#line 621 "type_util.m"
#line 621 "type_util.m"
                    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) {
#line 621 "type_util.m"
                      default:
#line 621 "type_util.m"
                        check_hlds__type_util__succeeded = MR_FALSE;
#line 621 "type_util.m"
                        break;
#line 621 "type_util.m"
                      case (MR_Integer) 2:
#line 624 "type_util.m"
                        {
#line 624 "type_util.m"
                          MR_Word check_hlds__type_util__EqvType_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));

#line 625 "type_util.m"
                          /* direct tailcall eliminated */
#line 625 "type_util.m"
                          {
#line 625 "type_util.m"
                            MR_Word check_hlds__type_util__Type__tmp_copy_4 = check_hlds__type_util__EqvType_8;

#line 625 "type_util.m"
                            check_hlds__type_util__Type_4 = check_hlds__type_util__Type__tmp_copy_4;
#line 625 "type_util.m"
                          }
#line 625 "type_util.m"
                          continue;
#line 624 "type_util.m"
                        }
#line 621 "type_util.m"
                        break;
#line 621 "type_util.m"
                      case (MR_Integer) 3:
#line 621 "type_util.m"
#line 621 "type_util.m"
                        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) {
#line 621 "type_util.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 621 "type_util.m"
                          case (MR_Integer) 0:
#line 620 "type_util.m"
                            check_hlds__type_util__succeeded = MR_TRUE;
#line 621 "type_util.m"
                            break;
#line 621 "type_util.m"
                          case (MR_Integer) 1:
#line 622 "type_util.m"
                            {
#line 622 "type_util.m"
                              MR_Word check_hlds__type_util__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));

#line 622 "type_util.m"
                              check_hlds__type_util__succeeded = (check_hlds__type_util__V_9_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 622 "type_util.m"
                            }
#line 621 "type_util.m"
                            break;
#line 621 "type_util.m"
                        }
#line 621 "type_util.m"
                        break;
#line 621 "type_util.m"
                    }
#line 618 "type_util.m"
                  }
#line 618 "type_util.m"
              }
#line 618 "type_util.m"
          }
#line 616 "type_util.m"
        return check_hlds__type_util__succeeded;
#line 616 "type_util.m"
      }
#line 616 "type_util.m"
      break;
#line 616 "type_util.m"
    }
#line 107 "type_util.m"
}

#line 95 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__var_is_or_may_contain_solver_type_3_p_0(
#line 95 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 95 "type_util.m"
  MR_Word check_hlds__type_util__VarTypes_5,
#line 95 "type_util.m"
  MR_Word check_hlds__type_util__Var_6)
#line 95 "type_util.m"
{
#line 588 "type_util.m"
  {
#line 588 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 588 "type_util.m"
    MR_Word check_hlds__type_util__VarType_7;

#line 589 "type_util.m"
    {
#line 589 "type_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__type_util__VarTypes_5, check_hlds__type_util__Var_6, &check_hlds__type_util__VarType_7);
    }
#line 590 "type_util.m"
    {
#line 590 "type_util.m"
      return check_hlds__type_util__succeeded = check_hlds__type_util__type_is_or_may_contain_solver_type_2_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__VarType_7);
    }
#line 588 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 588 "type_util.m"
  }
#line 95 "type_util.m"
}

#line 92 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_definitely_has_no_user_defined_equality_pred_2_p_0(
#line 92 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 92 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 92 "type_util.m"
{
#line 498 "type_util.m"
  {
#line 498 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 498 "type_util.m"
    MR_Word check_hlds__type_util__V_6_6;
#line 499 "type_util.m"
    MR_Word check_hlds__type_util__V_5_5;

#line 500 "type_util.m"
    {
#line 500 "type_util.m"
      check_hlds__type_util__V_6_6 = mercury__set__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0);
    }
#line 499 "type_util.m"
    {
#line 499 "type_util.m"
      check_hlds__type_util__succeeded = check_hlds__type_util__type_definitely_has_no_user_defined_eq_pred_2_4_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__Type_4, check_hlds__type_util__V_6_6, &check_hlds__type_util__V_5_5);
    }
#line 498 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 498 "type_util.m"
  }
#line 92 "type_util.m"
}

#line 83 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(
#line 83 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 83 "type_util.m"
  MR_Word check_hlds__type_util__TypeBody_5,
#line 83 "type_util.m"
  MR_Word * check_hlds__type_util__UserEqComp_6)
#line 83 "type_util.m"
{
#line 476 "type_util.m"
  {
#line 476 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 476 "type_util.m"
    MR_Word check_hlds__type_util__Globals_7;
#line 476 "type_util.m"
    MR_Word check_hlds__type_util__Target_8;

#line 477 "type_util.m"
    {
#line 477 "type_util.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__Globals_7);
    }
#line 478 "type_util.m"
    {
#line 478 "type_util.m"
      libs__globals__get_target_2_p_0(check_hlds__type_util__Globals_7, &check_hlds__type_util__Target_8);
    }
#line 490 "type_util.m"
#line 490 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeBody_5)) {
#line 490 "type_util.m"
      default:
#line 490 "type_util.m"
        check_hlds__type_util__succeeded = MR_FALSE;
#line 490 "type_util.m"
        break;
#line 490 "type_util.m"
      case (MR_Integer) 0:
#line 491 "type_util.m"
        {
#line 491 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_24 = (MR_Word) MR_body(((MR_Word) check_hlds__type_util__TypeBody_5), (MR_Integer) 0);

#line 492 "type_util.m"
          {
#line 492 "type_util.m"
            return check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__ForeignTypeBody_24, check_hlds__type_util__UserEqComp_6);
          }
#line 491 "type_util.m"
        }
#line 490 "type_util.m"
        break;
#line 490 "type_util.m"
      case (MR_Integer) 1:
#line 487 "type_util.m"
        {
#line 487 "type_util.m"
          MR_Word check_hlds__type_util__ForeignTypeBody_18;
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 7)));
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_22_22;
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_41_41;
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 3)));
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 4)));
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 5)));
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_31_31 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 482 "type_util.m"
          MR_Word check_hlds__type_util__V_32_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 482 "type_util.m"
          check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_21_21)) == (MR_mktag((MR_Integer) 1)));
#line 482 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 482 "type_util.m"
            {
#line 482 "type_util.m"
              check_hlds__type_util__ForeignTypeBody_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_21_21, (MR_Integer) 0)));
#line 483 "type_util.m"
              check_hlds__type_util__V_22_22 = (MR_Integer) 1;
#line 483 "type_util.m"
              {
#line 483 "type_util.m"
                backend_libs__foreign__have_foreign_type_for_backend_3_p_0(check_hlds__type_util__Target_8, check_hlds__type_util__ForeignTypeBody_18, &check_hlds__type_util__V_41_41);
              }
#line 483 "type_util.m"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_22_22 == check_hlds__type_util__V_41_41);
#line 482 "type_util.m"
            }
#line 487 "type_util.m"
          if (check_hlds__type_util__succeeded)
#line 485 "type_util.m"
            {
#line 485 "type_util.m"
              return check_hlds__type_util__succeeded = backend_libs__foreign__foreign_type_body_has_user_defined_eq_comp_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__ForeignTypeBody_18, check_hlds__type_util__UserEqComp_6);
            }
#line 487 "type_util.m"
          else
#line 488 "type_util.m"
            {
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 4)));
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)));
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 3)));
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 5)));
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_38_38 = ((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) & (MR_Integer) 1);
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 6)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 488 "type_util.m"
              MR_Word check_hlds__type_util__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__TypeBody_5, (MR_Integer) 7)));

#line 488 "type_util.m"
              check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_23_23)) == (MR_mktag((MR_Integer) 1)));
#line 488 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 488 "type_util.m"
                *check_hlds__type_util__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_23_23, (MR_Integer) 0)));
#line 488 "type_util.m"
            }
#line 487 "type_util.m"
        }
#line 490 "type_util.m"
        break;
#line 490 "type_util.m"
      case (MR_Integer) 3:
#line 490 "type_util.m"
#line 490 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 0)))) {
#line 490 "type_util.m"
          default:
#line 490 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 490 "type_util.m"
            break;
#line 490 "type_util.m"
          case (MR_Integer) 0:
#line 495 "type_util.m"
            {
#line 495 "type_util.m"
              MR_Word check_hlds__type_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 2)));
#line 495 "type_util.m"
              MR_Word check_hlds__type_util___SolverTypeDetails_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeBody_5, (MR_Integer) 1)));

#line 495 "type_util.m"
              check_hlds__type_util__succeeded = ((MR_tag((MR_Word) check_hlds__type_util__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 495 "type_util.m"
              if (check_hlds__type_util__succeeded)
#line 495 "type_util.m"
                *check_hlds__type_util__UserEqComp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_util__V_20_20, (MR_Integer) 0)));
#line 495 "type_util.m"
            }
#line 490 "type_util.m"
            break;
#line 490 "type_util.m"
        }
#line 490 "type_util.m"
        break;
#line 490 "type_util.m"
    }
#line 476 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 476 "type_util.m"
  }
#line 83 "type_util.m"
}

#line 80 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_has_user_defined_equality_pred_3_p_0(
#line 80 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 80 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 80 "type_util.m"
  MR_Word * check_hlds__type_util__UserEqComp_6)
#line 80 "type_util.m"
{
#line 472 "type_util.m"
  {
#line 472 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 472 "type_util.m"
    MR_Word check_hlds__type_util__TypeBody_7;
#line 472 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_11;
#line 472 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_15;
#line 472 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_16;

#line 456 "type_util.m"
    {
#line 456 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_15);
    }
#line 457 "type_util.m"
    {
#line 457 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_16);
    }
#line 472 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 472 "type_util.m"
      {
#line 458 "type_util.m"
        {
#line 458 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_15, check_hlds__type_util__TypeCtor_16, &check_hlds__type_util__TypeDefn_11);
        }
#line 472 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 472 "type_util.m"
          {
#line 466 "type_util.m"
            {
#line 466 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_11, &check_hlds__type_util__TypeBody_7);
            }
#line 474 "type_util.m"
            {
#line 474 "type_util.m"
              return check_hlds__type_util__succeeded = check_hlds__type_util__type_body_has_user_defined_equality_pred_3_p_0(check_hlds__type_util__ModuleInfo_4, check_hlds__type_util__TypeBody_7, check_hlds__type_util__UserEqComp_6);
            }
#line 472 "type_util.m"
          }
#line 472 "type_util.m"
      }
#line 472 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 472 "type_util.m"
  }
#line 80 "type_util.m"
}

#line 66 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_body_from_type_table_3_p_0(
#line 66 "type_util.m"
  MR_Word check_hlds__type_util__TypeTable_4,
#line 66 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 66 "type_util.m"
  MR_Word * check_hlds__type_util__TypeBody_6)
#line 66 "type_util.m"
{
#line 468 "type_util.m"
  {
#line 468 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 468 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_7;
#line 468 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_11;

#line 461 "type_util.m"
    {
#line 461 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_11);
    }
#line 468 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 468 "type_util.m"
      {
#line 462 "type_util.m"
        {
#line 462 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_4, check_hlds__type_util__TypeCtor_11, &check_hlds__type_util__TypeDefn_7);
        }
#line 468 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 468 "type_util.m"
          {
#line 470 "type_util.m"
            {
#line 470 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_7, check_hlds__type_util__TypeBody_6);
            }
#line 470 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 468 "type_util.m"
          }
#line 468 "type_util.m"
      }
#line 468 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 468 "type_util.m"
  }
#line 66 "type_util.m"
}

#line 64 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_body_3_p_0(
#line 64 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 64 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 64 "type_util.m"
  MR_Word * check_hlds__type_util__TypeBody_6)
#line 64 "type_util.m"
{
#line 464 "type_util.m"
  {
#line 464 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 464 "type_util.m"
    MR_Word check_hlds__type_util__TypeDefn_7;
#line 464 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_11;
#line 464 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_12;

#line 456 "type_util.m"
    {
#line 456 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_11);
    }
#line 457 "type_util.m"
    {
#line 457 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_12);
    }
#line 464 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 464 "type_util.m"
      {
#line 458 "type_util.m"
        {
#line 458 "type_util.m"
          check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_11, check_hlds__type_util__TypeCtor_12, &check_hlds__type_util__TypeDefn_7);
        }
#line 464 "type_util.m"
        if (check_hlds__type_util__succeeded)
#line 464 "type_util.m"
          {
#line 466 "type_util.m"
            {
#line 466 "type_util.m"
              hlds__hlds_data__get_type_defn_body_2_p_0(check_hlds__type_util__TypeDefn_7, check_hlds__type_util__TypeBody_6);
            }
#line 466 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 464 "type_util.m"
          }
#line 464 "type_util.m"
      }
#line 464 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 464 "type_util.m"
  }
#line 64 "type_util.m"
}

#line 61 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_from_type_table_3_p_0(
#line 61 "type_util.m"
  MR_Word check_hlds__type_util__TypeTable_4,
#line 61 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 61 "type_util.m"
  MR_Word * check_hlds__type_util__TypeDefn_6)
#line 61 "type_util.m"
{
#line 460 "type_util.m"
  {
#line 460 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 460 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_7;

#line 461 "type_util.m"
    {
#line 461 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_7);
    }
#line 460 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 462 "type_util.m"
      {
#line 462 "type_util.m"
        return check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_4, check_hlds__type_util__TypeCtor_7, check_hlds__type_util__TypeDefn_6);
      }
#line 460 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 460 "type_util.m"
  }
#line 61 "type_util.m"
}

#line 59 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_to_type_defn_3_p_0(
#line 59 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_4,
#line 59 "type_util.m"
  MR_Word check_hlds__type_util__Type_5,
#line 59 "type_util.m"
  MR_Word * check_hlds__type_util__TypeDefn_6)
#line 59 "type_util.m"
{
#line 455 "type_util.m"
  {
#line 455 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 455 "type_util.m"
    MR_Word check_hlds__type_util__TypeTable_7;
#line 455 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_8;

#line 456 "type_util.m"
    {
#line 456 "type_util.m"
      hlds__hlds_module__module_info_get_type_table_2_p_0(check_hlds__type_util__ModuleInfo_4, &check_hlds__type_util__TypeTable_7);
    }
#line 457 "type_util.m"
    {
#line 457 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_5, &check_hlds__type_util__TypeCtor_8);
    }
#line 455 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 458 "type_util.m"
      {
#line 458 "type_util.m"
        return check_hlds__type_util__succeeded = hlds__hlds_data__search_type_ctor_defn_3_p_0(check_hlds__type_util__TypeTable_7, check_hlds__type_util__TypeCtor_8, check_hlds__type_util__TypeDefn_6);
      }
#line 455 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 455 "type_util.m"
  }
#line 59 "type_util.m"
}

#line 51 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_ctor_is_atomic_2_p_0(
#line 51 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 51 "type_util.m"
  MR_Word check_hlds__type_util__TypeCtor_4)
#line 51 "type_util.m"
{
#line 429 "type_util.m"
  {
#line 429 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 429 "type_util.m"
    MR_Word check_hlds__type_util__TypeCategory_5;

#line 430 "type_util.m"
    {
#line 430 "type_util.m"
      check_hlds__type_util__TypeCategory_5 = check_hlds__type_util__classify_type_ctor_2_f_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeCtor_4);
    }
#line 442 "type_util.m"
#line 442 "type_util.m"
    switch (MR_tag((MR_Word) check_hlds__type_util__TypeCategory_5)) {
#line 442 "type_util.m"
      default:
#line 442 "type_util.m"
        check_hlds__type_util__succeeded = MR_FALSE;
#line 442 "type_util.m"
        break;
#line 442 "type_util.m"
      case (MR_Integer) 0:
#line 442 "type_util.m"
#line 442 "type_util.m"
        switch (MR_unmkbody(check_hlds__type_util__TypeCategory_5)) {
#line 442 "type_util.m"
          default:
#line 442 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 442 "type_util.m"
            break;
#line 442 "type_util.m"
          case (MR_Integer) 2:
#line 442 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 442 "type_util.m"
            break;
#line 442 "type_util.m"
          case (MR_Integer) 4:
#line 442 "type_util.m"
            check_hlds__type_util__succeeded = MR_TRUE;
#line 442 "type_util.m"
            break;
#line 442 "type_util.m"
        }
#line 442 "type_util.m"
        break;
#line 442 "type_util.m"
      case (MR_Integer) 1:
#line 443 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 442 "type_util.m"
        break;
#line 442 "type_util.m"
      case (MR_Integer) 2:
#line 443 "type_util.m"
        check_hlds__type_util__succeeded = MR_TRUE;
#line 442 "type_util.m"
        break;
#line 442 "type_util.m"
      case (MR_Integer) 3:
#line 442 "type_util.m"
#line 442 "type_util.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_5, (MR_Integer) 0)))) {
#line 442 "type_util.m"
          default:
#line 442 "type_util.m"
            check_hlds__type_util__succeeded = MR_FALSE;
#line 442 "type_util.m"
            break;
#line 442 "type_util.m"
          case (MR_Integer) 1:
#line 442 "type_util.m"
            {
#line 442 "type_util.m"
              MR_Word check_hlds__type_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__type_util__TypeCategory_5, (MR_Integer) 1)));

#line 11280 "check_hlds.type_util.c"
              check_hlds__type_util__succeeded = (check_hlds__type_util__V_15_15 == (MR_Integer) 0);
#line 442 "type_util.m"
            }
#line 442 "type_util.m"
            break;
#line 442 "type_util.m"
        }
#line 442 "type_util.m"
        break;
#line 442 "type_util.m"
    }
#line 429 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 429 "type_util.m"
  }
#line 51 "type_util.m"
}

#line 49 "type_util.m"
MR_bool MR_CALL 
check_hlds__type_util__type_is_atomic_2_p_0(
#line 49 "type_util.m"
  MR_Word check_hlds__type_util__ModuleInfo_3,
#line 49 "type_util.m"
  MR_Word check_hlds__type_util__Type_4)
#line 49 "type_util.m"
{
#line 425 "type_util.m"
  {
#line 425 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 425 "type_util.m"
    MR_Word check_hlds__type_util__TypeCtor_5;

#line 426 "type_util.m"
    {
#line 426 "type_util.m"
      check_hlds__type_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__type_util__Type_4, &check_hlds__type_util__TypeCtor_5);
    }
#line 425 "type_util.m"
    if (check_hlds__type_util__succeeded)
#line 427 "type_util.m"
      {
#line 427 "type_util.m"
        return check_hlds__type_util__succeeded = check_hlds__type_util__type_ctor_is_atomic_2_p_0(check_hlds__type_util__ModuleInfo_3, check_hlds__type_util__TypeCtor_5);
      }
#line 425 "type_util.m"
    return check_hlds__type_util__succeeded;
#line 425 "type_util.m"
  }
#line 49 "type_util.m"
}

#line 43 "type_util.m"
void MR_CALL 
check_hlds__type_util__type_ctor_module_name_arity_4_p_0(
#line 43 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1,
#line 43 "type_util.m"
  MR_Word * check_hlds__type_util__ModuleName_7,
#line 43 "type_util.m"
  MR_String * check_hlds__type_util__Name_8,
#line 43 "type_util.m"
  MR_Integer * check_hlds__type_util__Arity_6)
#line 43 "type_util.m"
{
#line 419 "type_util.m"
  {
#line 419 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 419 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));

#line 418 "type_util.m"
    *check_hlds__type_util__Arity_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));
#line 420 "type_util.m"
    {
#line 420 "type_util.m"
      mdbcomp__sym_name__sym_name_get_module_name_default_name_4_p_0(check_hlds__type_util__TypeSymName_5, (MR_Word) &check_hlds__type_util_scalar_common_3[0], check_hlds__type_util__ModuleName_7, check_hlds__type_util__Name_8);
#line 420 "type_util.m"
      return;
    }
#line 419 "type_util.m"
  }
#line 43 "type_util.m"
}

#line 42 "type_util.m"
MR_Integer MR_CALL 
check_hlds__type_util__type_ctor_arity_1_f_0(
#line 42 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1)
#line 42 "type_util.m"
{
#line 416 "type_util.m"
  {
#line 416 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 416 "type_util.m"
    MR_Integer check_hlds__type_util__Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));
#line 416 "type_util.m"
    MR_Word check_hlds__type_util___TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));

#line 416 "type_util.m"
    return check_hlds__type_util__Arity_4;
#line 416 "type_util.m"
  }
#line 42 "type_util.m"
}

#line 41 "type_util.m"
MR_String MR_CALL 
check_hlds__type_util__type_ctor_name_1_f_0(
#line 41 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1)
#line 41 "type_util.m"
{
#line 413 "type_util.m"
  {
#line 413 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 413 "type_util.m"
    MR_String check_hlds__type_util__HeadVar__2_2;
#line 413 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "type_util.m"
    MR_Integer check_hlds__type_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));

#line 414 "type_util.m"
    {
#line 414 "type_util.m"
      return check_hlds__type_util__HeadVar__2_2 = mdbcomp__sym_name__unqualify_name_1_f_0(check_hlds__type_util__TypeSymName_3);
    }
#line 413 "type_util.m"
    return check_hlds__type_util__HeadVar__2_2;
#line 413 "type_util.m"
  }
#line 41 "type_util.m"
}

#line 40 "type_util.m"
MR_Word MR_CALL 
check_hlds__type_util__type_ctor_module_1_f_0(
#line 40 "type_util.m"
  MR_Word check_hlds__type_util__HeadVar__1_1)
#line 40 "type_util.m"
{
#line 410 "type_util.m"
  {
#line 410 "type_util.m"
    MR_bool check_hlds__type_util__succeeded;
#line 410 "type_util.m"
    MR_Word check_hlds__type_util__ModuleName_5;
#line 410 "type_util.m"
    MR_Word check_hlds__type_util__TypeSymName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "type_util.m"
    MR_Integer check_hlds__type_util___Arity_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__type_util__HeadVar__1_1, (MR_Integer) 1)));

#line 411 "type_util.m"
    {
#line 411 "type_util.m"
      mdbcomp__sym_name__sym_name_get_module_name_default_3_p_0(check_hlds__type_util__TypeSymName_3, (MR_Word) &check_hlds__type_util_scalar_common_3[0], &check_hlds__type_util__ModuleName_5);
    }
#line 410 "type_util.m"
    return check_hlds__type_util__ModuleName_5;
#line 410 "type_util.m"
  }
#line 40 "type_util.m"
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
