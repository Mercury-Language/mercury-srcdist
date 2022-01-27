/*
** Automatically generated from `type_assign.m'
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


/* :- module check_hlds.type_assign. */
/* :- implementation. */

/*
INIT mercury__check_hlds__type_assign__init
ENDINIT
*/

#include "check_hlds.type_assign.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.type_util.mih"
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
#include "libs.file_util.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.mercury_to_mercury.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_type_subst.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 148 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 151 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 154 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 157 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 160 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 163 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 166 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 169 "check_hlds.type_assign.c"
static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[3];

#line 172 "check_hlds.type_assign.c"
static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[3];

#line 175 "check_hlds.type_assign.c"
static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0;

#line 178 "check_hlds.type_assign.c"
static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1];

#line 181 "check_hlds.type_assign.c"
static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1];

#line 184 "check_hlds.type_assign.c"
static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0[1];

#line 187 "check_hlds.type_assign.c"
static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0[1];

#line 190 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0;

#line 193 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 196 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 199 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 202 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0;

#line 205 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0;

#line 208 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0;

#line 211 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0;

#line 214 "check_hlds.type_assign.c"
static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[7];

#line 217 "check_hlds.type_assign.c"
static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[7];

#line 220 "check_hlds.type_assign.c"
static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0;

#line 223 "check_hlds.type_assign.c"
static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1];

#line 226 "check_hlds.type_assign.c"
static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1];

#line 229 "check_hlds.type_assign.c"
static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0[1];

#line 232 "check_hlds.type_assign.c"
static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0[1];

#line 235 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0;

#line 238 "check_hlds.type_assign.c"
static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
#line 241 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 243 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2);

#line 246 "check_hlds.type_assign.c"
static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
#line 249 "check_hlds.type_assign.c"
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
#line 251 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 253 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_3);

#line 256 "check_hlds.type_assign.c"
static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
#line 259 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 261 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2);

#line 264 "check_hlds.type_assign.c"
static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
#line 267 "check_hlds.type_assign.c"
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
#line 269 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 271 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_3);

#line 274 "check_hlds.type_assign.c"
static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
#line 277 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 279 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2);

#line 282 "check_hlds.type_assign.c"
static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
#line 285 "check_hlds.type_assign.c"
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
#line 287 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 289 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_3);

#line 292 "check_hlds.type_assign.c"
static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
#line 295 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 297 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2);

#line 300 "check_hlds.type_assign.c"
static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
#line 303 "check_hlds.type_assign.c"
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
#line 305 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 307 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_3);

#line 709 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__write_type_assign_constraints_7_p_0(
#line 709 "type_assign.m"
  MR_String check_hlds__type_assign__Operator_1,
#line 709 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2,
#line 709 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_3,
#line 709 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_4,
#line 709 "type_assign.m"
  MR_Word check_hlds__type_assign__FoundOne_5);

#line 657 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__write_type_assign_types_8_p_0(
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_2,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__VarTypes_3,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_4,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_5,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__FoundOne_6);

#line 633 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__write_type_assign_4_p_0(
#line 633 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeAssign_5,
#line 633 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_6);

#line 623 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__write_type_assign_set_4_p_0(
#line 623 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 623 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_2);

#line 554 "type_assign.m"
static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(
#line 554 "type_assign.m"
  MR_String check_hlds__type_assign__Operator_1,
#line 554 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2,
#line 554 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_3,
#line 554 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_4,
#line 554 "type_assign.m"
  MR_Word check_hlds__type_assign__FoundOne_5);

#line 540 "type_assign.m"
static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(
#line 540 "type_assign.m"
  MR_Word check_hlds__type_assign__Constraints_5,
#line 540 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_6,
#line 540 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_7);

#line 501 "type_assign.m"
static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_2,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__VarTypes_3,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_4,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_5,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__FoundOne_6);

#line 465 "type_assign.m"
static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_to_pieces_3_f_0(
#line 465 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeAssign_5,
#line 465 "type_assign.m"
  MR_Word check_hlds__type_assign__MaybeSeq_6,
#line 465 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_7);

#line 393 "type_assign.m"
static MR_bool MR_CALL 
check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(
#line 393 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_4,
#line 393 "type_assign.m"
  MR_Word check_hlds__type_assign__TVar0_5,
#line 393 "type_assign.m"
  MR_Word * check_hlds__type_assign__TVar_6);

#line 379 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
#line 379 "type_assign.m"
  MR_Word check_hlds__type_assign__OldHeadTypeParams_6,
#line 379 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_7,
#line 379 "type_assign.m"
  MR_Word check_hlds__type_assign__TVar_8,
#line 379 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_Renaming_0_11,
#line 379 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_Renaming_12);

#line 359 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__expand_types_5_p_0(
#line 359 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeSubst_6,
#line 359 "type_assign.m"
  MR_Word check_hlds__type_assign__Type0_7,
#line 359 "type_assign.m"
  MR_Word * check_hlds__type_assign__Type_8,
#line 359 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_0_11,
#line 359 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_12);

#line 376 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
#line 376 "type_assign.m"
  MR_Box check_hlds__type_assign__closure_arg,
#line 376 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 376 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 376 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_3);

#line 295 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
#line 295 "type_assign.m"
  MR_Box check_hlds__type_assign__closure_arg,
#line 295 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 295 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 295 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_3);

#line 293 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
#line 293 "type_assign.m"
  MR_Box check_hlds__type_assign__closure_arg,
#line 293 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 293 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 293 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_3);

#line 274 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
#line 274 "type_assign.m"
  MR_Box check_hlds__type_assign__closure_arg,
#line 274 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 274 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_2,
#line 274 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_3,
#line 274 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_4);


static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[17][2];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[7][3];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_4[1][6];

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_5[1][1];




static /* final */ const MR_Box check_hlds__type_assign_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__varset__varset__type_ctor_info_varset_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Type assignment"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "(No variables were assigned a type)"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) " ")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_2[7][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[5])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__type_assign_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&check_hlds__type_assign_scalar_common_4[0])),
    ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_3[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0)),
    ((MR_Box) (&check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0))
  },
};

static /* final */ const MR_Box check_hlds__type_assign_scalar_common_5[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 694 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 702 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 711 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 719 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_hlds__hlds_data__type_ctor_info_constraint_id_0__plain_parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 728 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__list__pti_list_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 736 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__type_assign__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 744 "check_hlds.type_assign.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__type_assign__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_PseudoTypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 753 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 761 "check_hlds.type_assign.c"
static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0[3] = {
  (MR_PseudoTypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__list__ti_list_1parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0
};

#line 768 "check_hlds.type_assign.c"
static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0[3] = {
  (MR_String) "ata_caller_arg_assign",
  (MR_String) "ata_callee_arg_types",
  (MR_String) "ata_callee_constraints"
};

#line 775 "check_hlds.type_assign.c"
static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0 = {
  (MR_String) "args_type_assign",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_assign__check_hlds__type_assign__field_types_args_type_assign_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_args_type_assign_0_0,
  NULL,
  NULL
};

#line 790 "check_hlds.type_assign.c"
static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0
};

#line 795 "check_hlds.type_assign.c"
static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_args_type_assign_0_0
  }
};

#line 804 "check_hlds.type_assign.c"
static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_args_type_assign_0_0
};

#line 809 "check_hlds.type_assign.c"
static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0[1] = {
  (MR_Integer) 0
};

#line 814 "check_hlds.type_assign.c"
const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign",
  {     check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_args_type_assign_0 },
  {     check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_args_type_assign_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_args_type_assign_0
};

#line 831 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0
  }
};

#line 839 "check_hlds.type_assign.c"
const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "args_type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_args_type_assign_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 856 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 864 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 873 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 881 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0
  }
};

#line 889 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &check_hlds__type_assign__term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0
  }
};

#line 898 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0,
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0
  }
};

#line 907 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0,
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0
  }
};

#line 916 "check_hlds.type_assign.c"
static const MR_PseudoTypeInfo check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0[7] = {
  (MR_PseudoTypeInfo) &check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__varset__ti_varset_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__list__ti_list_1term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_tvar_type_0parse_tree__prog_data__type_ctor_info_mer_type_0,
  (MR_PseudoTypeInfo) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraints_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__tree234__ti_tree234_2parse_tree__prog_data__type_ctor_info_prog_constraint_0hlds__hlds_data__type_ctor_info_constraint_proof_0,
  (MR_PseudoTypeInfo) &check_hlds__type_assign__tree234__ti_tree234_2hlds__hlds_data__type_ctor_info_constraint_id_0parse_tree__prog_data__type_ctor_info_prog_constraint_0
};

#line 927 "check_hlds.type_assign.c"
static const MR_ConstString check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0[7] = {
  (MR_String) "ta_var_types",
  (MR_String) "ta_type_varset",
  (MR_String) "ta_head_type_params",
  (MR_String) "ta_type_bindings",
  (MR_String) "ta_class_constraints",
  (MR_String) "ta_constraint_proof_map",
  (MR_String) "ta_constraint_map"
};

#line 938 "check_hlds.type_assign.c"
static const MR_DuFunctorDesc check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0 = {
  (MR_String) "type_assign",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__type_assign__check_hlds__type_assign__field_types_type_assign_0_0,
  check_hlds__type_assign__check_hlds__type_assign__field_names_type_assign_0_0,
  NULL,
  NULL
};

#line 953 "check_hlds.type_assign.c"
static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0
};

#line 958 "check_hlds.type_assign.c"
static const MR_DuPtagLayout check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__type_assign__check_hlds__type_assign__du_stag_ordered_type_assign_0_0
  }
};

#line 967 "check_hlds.type_assign.c"
static const MR_DuFunctorDescPtr check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0[1] = {
  &check_hlds__type_assign__check_hlds__type_assign__du_functor_desc_type_assign_0_0
};

#line 972 "check_hlds.type_assign.c"
static const MR_Integer check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0[1] = {
  (MR_Integer) 0
};

#line 977 "check_hlds.type_assign.c"
const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign",
  {     check_hlds__type_assign__check_hlds__type_assign__du_name_ordered_type_assign_0 },
  {     check_hlds__type_assign__check_hlds__type_assign__du_ptag_ordered_type_assign_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__type_assign__check_hlds__type_assign__functor_number_map_type_assign_0
};

#line 994 "check_hlds.type_assign.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0
  }
};

#line 1002 "check_hlds.type_assign.c"
const MR_TypeCtorInfo_Struct check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_set_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__type_assign____Unify____type_assign_set_0_0_10001)),
  ((MR_Box) (check_hlds__type_assign____Compare____type_assign_set_0_0_10001)),
  (MR_String) "check_hlds.type_assign",
  (MR_String) "type_assign_set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__type_assign__list__ti_list_1check_hlds__type_assign__type_ctor_info_type_assign_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1019 "check_hlds.type_assign.c"
static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0_10001(
#line 1022 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 1024 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2)
#line 1026 "check_hlds.type_assign.c"
{
#line 1028 "check_hlds.type_assign.c"
  {
#line 1030 "check_hlds.type_assign.c"
    MR_bool check_hlds__type_assign__succeeded;

#line 1033 "check_hlds.type_assign.c"
    {
#line 1035 "check_hlds.type_assign.c"
      check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____args_type_assign_0_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2));
    }
#line 1038 "check_hlds.type_assign.c"
    return check_hlds__type_assign__succeeded;
#line 1040 "check_hlds.type_assign.c"
  }
#line 1042 "check_hlds.type_assign.c"
}

#line 1045 "check_hlds.type_assign.c"
static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0_10001(
#line 1048 "check_hlds.type_assign.c"
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
#line 1050 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 1052 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_3)
#line 1054 "check_hlds.type_assign.c"
{
#line 1056 "check_hlds.type_assign.c"
  {
#line 1058 "check_hlds.type_assign.c"
    MR_Word check_hlds__type_assign__conv0_HeadVar__1_1;

#line 1061 "check_hlds.type_assign.c"
    {
#line 1063 "check_hlds.type_assign.c"
      check_hlds__type_assign____Compare____args_type_assign_0_0(&check_hlds__type_assign__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_assign__wrapper_arg_2), ((MR_Word) check_hlds__type_assign__wrapper_arg_3));
    }
#line 1066 "check_hlds.type_assign.c"
    *check_hlds__type_assign__wrapper_arg_1 = ((MR_Box) (check_hlds__type_assign__conv0_HeadVar__1_1));
#line 1068 "check_hlds.type_assign.c"
  }
#line 1070 "check_hlds.type_assign.c"
}

#line 1073 "check_hlds.type_assign.c"
static MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0_10001(
#line 1076 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 1078 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2)
#line 1080 "check_hlds.type_assign.c"
{
#line 1082 "check_hlds.type_assign.c"
  {
#line 1084 "check_hlds.type_assign.c"
    MR_bool check_hlds__type_assign__succeeded;

#line 1087 "check_hlds.type_assign.c"
    {
#line 1089 "check_hlds.type_assign.c"
      check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____args_type_assign_set_0_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2));
    }
#line 1092 "check_hlds.type_assign.c"
    return check_hlds__type_assign__succeeded;
#line 1094 "check_hlds.type_assign.c"
  }
#line 1096 "check_hlds.type_assign.c"
}

#line 1099 "check_hlds.type_assign.c"
static void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0_10001(
#line 1102 "check_hlds.type_assign.c"
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
#line 1104 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 1106 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_3)
#line 1108 "check_hlds.type_assign.c"
{
#line 1110 "check_hlds.type_assign.c"
  {
#line 1112 "check_hlds.type_assign.c"
    MR_Word check_hlds__type_assign__conv0_HeadVar__1_1;

#line 1115 "check_hlds.type_assign.c"
    {
#line 1117 "check_hlds.type_assign.c"
      check_hlds__type_assign____Compare____args_type_assign_set_0_0(&check_hlds__type_assign__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_assign__wrapper_arg_2), ((MR_Word) check_hlds__type_assign__wrapper_arg_3));
    }
#line 1120 "check_hlds.type_assign.c"
    *check_hlds__type_assign__wrapper_arg_1 = ((MR_Box) (check_hlds__type_assign__conv0_HeadVar__1_1));
#line 1122 "check_hlds.type_assign.c"
  }
#line 1124 "check_hlds.type_assign.c"
}

#line 1127 "check_hlds.type_assign.c"
static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0_10001(
#line 1130 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 1132 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2)
#line 1134 "check_hlds.type_assign.c"
{
#line 1136 "check_hlds.type_assign.c"
  {
#line 1138 "check_hlds.type_assign.c"
    MR_bool check_hlds__type_assign__succeeded;

#line 1141 "check_hlds.type_assign.c"
    {
#line 1143 "check_hlds.type_assign.c"
      check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____type_assign_0_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2));
    }
#line 1146 "check_hlds.type_assign.c"
    return check_hlds__type_assign__succeeded;
#line 1148 "check_hlds.type_assign.c"
  }
#line 1150 "check_hlds.type_assign.c"
}

#line 1153 "check_hlds.type_assign.c"
static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0_10001(
#line 1156 "check_hlds.type_assign.c"
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
#line 1158 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 1160 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_3)
#line 1162 "check_hlds.type_assign.c"
{
#line 1164 "check_hlds.type_assign.c"
  {
#line 1166 "check_hlds.type_assign.c"
    MR_Word check_hlds__type_assign__conv0_HeadVar__1_1;

#line 1169 "check_hlds.type_assign.c"
    {
#line 1171 "check_hlds.type_assign.c"
      check_hlds__type_assign____Compare____type_assign_0_0(&check_hlds__type_assign__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_assign__wrapper_arg_2), ((MR_Word) check_hlds__type_assign__wrapper_arg_3));
    }
#line 1174 "check_hlds.type_assign.c"
    *check_hlds__type_assign__wrapper_arg_1 = ((MR_Box) (check_hlds__type_assign__conv0_HeadVar__1_1));
#line 1176 "check_hlds.type_assign.c"
  }
#line 1178 "check_hlds.type_assign.c"
}

#line 1181 "check_hlds.type_assign.c"
static MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0_10001(
#line 1184 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 1186 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2)
#line 1188 "check_hlds.type_assign.c"
{
#line 1190 "check_hlds.type_assign.c"
  {
#line 1192 "check_hlds.type_assign.c"
    MR_bool check_hlds__type_assign__succeeded;

#line 1195 "check_hlds.type_assign.c"
    {
#line 1197 "check_hlds.type_assign.c"
      check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____type_assign_set_0_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2));
    }
#line 1200 "check_hlds.type_assign.c"
    return check_hlds__type_assign__succeeded;
#line 1202 "check_hlds.type_assign.c"
  }
#line 1204 "check_hlds.type_assign.c"
}

#line 1207 "check_hlds.type_assign.c"
static void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0_10001(
#line 1210 "check_hlds.type_assign.c"
  MR_Box * check_hlds__type_assign__wrapper_arg_1,
#line 1212 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 1214 "check_hlds.type_assign.c"
  MR_Box check_hlds__type_assign__wrapper_arg_3)
#line 1216 "check_hlds.type_assign.c"
{
#line 1218 "check_hlds.type_assign.c"
  {
#line 1220 "check_hlds.type_assign.c"
    MR_Word check_hlds__type_assign__conv0_HeadVar__1_1;

#line 1223 "check_hlds.type_assign.c"
    {
#line 1225 "check_hlds.type_assign.c"
      check_hlds__type_assign____Compare____type_assign_set_0_0(&check_hlds__type_assign__conv0_HeadVar__1_1, ((MR_Word) check_hlds__type_assign__wrapper_arg_2), ((MR_Word) check_hlds__type_assign__wrapper_arg_3));
    }
#line 1228 "check_hlds.type_assign.c"
    *check_hlds__type_assign__wrapper_arg_1 = ((MR_Box) (check_hlds__type_assign__conv0_HeadVar__1_1));
#line 1230 "check_hlds.type_assign.c"
  }
#line 1232 "check_hlds.type_assign.c"
}

#line 98 "type_assign.m"
void MR_CALL 
check_hlds__type_assign____Compare____type_assign_set_0_0(
#line 98 "type_assign.m"
  MR_Word * check_hlds__type_assign__HeadVar__1_1,
#line 98 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2,
#line 98 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__3_3)
#line 98 "type_assign.m"
{
#line 98 "type_assign.m"
  {
#line 98 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 98 "type_assign.m"
    MR_Word check_hlds__type_assign__Cast_HeadVar1_4 = check_hlds__type_assign__HeadVar__2_2;
#line 98 "type_assign.m"
    MR_Word check_hlds__type_assign__Cast_HeadVar2_5 = check_hlds__type_assign__HeadVar__3_3;

#line 98 "type_assign.m"
    {
#line 98 "type_assign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[8], check_hlds__type_assign__HeadVar__1_1, ((MR_Box) (check_hlds__type_assign__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__type_assign__Cast_HeadVar2_5)));
#line 98 "type_assign.m"
      return;
    }
#line 98 "type_assign.m"
  }
#line 98 "type_assign.m"
}

#line 98 "type_assign.m"
MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_set_0_0(
#line 98 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 98 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2)
#line 98 "type_assign.m"
{
#line 98 "type_assign.m"
  {
#line 98 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 98 "type_assign.m"
    MR_Word check_hlds__type_assign__Cast_HeadVar1_3 = check_hlds__type_assign__HeadVar__1_1;
#line 98 "type_assign.m"
    MR_Word check_hlds__type_assign__Cast_HeadVar2_4 = check_hlds__type_assign__HeadVar__2_2;

#line 98 "type_assign.m"
    {
#line 98 "type_assign.m"
      return check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[8], ((MR_Box) (check_hlds__type_assign__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__type_assign__Cast_HeadVar2_4)));
    }
#line 98 "type_assign.m"
    return check_hlds__type_assign__succeeded;
#line 98 "type_assign.m"
  }
#line 98 "type_assign.m"
}

#line 38 "type_assign.m"
void MR_CALL 
check_hlds__type_assign____Compare____type_assign_0_0(
#line 38 "type_assign.m"
  MR_Word * check_hlds__type_assign__HeadVar__1_1,
#line 38 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2,
#line 38 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__3_3)
#line 38 "type_assign.m"
{
#line 38 "type_assign.m"
  {
#line 38 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 38 "type_assign.m"
    MR_Integer check_hlds__type_assign__CastX_24 = (MR_Integer) check_hlds__type_assign__HeadVar__2_2;
#line 38 "type_assign.m"
    MR_Integer check_hlds__type_assign__CastY_25 = (MR_Integer) check_hlds__type_assign__HeadVar__3_3;

#line 38 "type_assign.m"
    check_hlds__type_assign__succeeded = (check_hlds__type_assign__CastX_24 == check_hlds__type_assign__CastY_25);
#line 38 "type_assign.m"
    if (check_hlds__type_assign__succeeded)
#line 1321 "check_hlds.type_assign.c"
      *check_hlds__type_assign__HeadVar__1_1 = (MR_Integer) 0;
#line 38 "type_assign.m"
    else
#line 38 "type_assign.m"
      {
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 5)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 6)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 0)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 1)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 2)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 3)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 4)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 5)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 6)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_18_18;

#line 38 "type_assign.m"
        {
#line 38 "type_assign.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[2], &check_hlds__type_assign__V_18_18, ((MR_Box) (check_hlds__type_assign__V_4_4)), ((MR_Box) (check_hlds__type_assign__V_11_11)));
        }
#line 1363 "check_hlds.type_assign.c"
        check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_18_18 == (MR_Integer) 0);
#line 38 "type_assign.m"
        check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 38 "type_assign.m"
        if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
          *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_18_18;
#line 38 "type_assign.m"
        else
#line 38 "type_assign.m"
          {
#line 38 "type_assign.m"
            MR_Word check_hlds__type_assign__V_19_19;

#line 38 "type_assign.m"
            {
#line 38 "type_assign.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[6], &check_hlds__type_assign__V_19_19, ((MR_Box) (check_hlds__type_assign__V_5_5)), ((MR_Box) (check_hlds__type_assign__V_12_12)));
            }
#line 1383 "check_hlds.type_assign.c"
            check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_19_19 == (MR_Integer) 0);
#line 38 "type_assign.m"
            check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 38 "type_assign.m"
            if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
              *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_19_19;
#line 38 "type_assign.m"
            else
#line 38 "type_assign.m"
              {
#line 38 "type_assign.m"
                MR_Word check_hlds__type_assign__V_20_20;

#line 38 "type_assign.m"
                {
#line 38 "type_assign.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[7], &check_hlds__type_assign__V_20_20, ((MR_Box) (check_hlds__type_assign__V_6_6)), ((MR_Box) (check_hlds__type_assign__V_13_13)));
                }
#line 1403 "check_hlds.type_assign.c"
                check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_20_20 == (MR_Integer) 0);
#line 38 "type_assign.m"
                check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 38 "type_assign.m"
                if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
                  *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_20_20;
#line 38 "type_assign.m"
                else
#line 38 "type_assign.m"
                  {
#line 38 "type_assign.m"
                    MR_Word check_hlds__type_assign__V_21_21;

#line 38 "type_assign.m"
                    {
#line 38 "type_assign.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[3], &check_hlds__type_assign__V_21_21, ((MR_Box) (check_hlds__type_assign__V_7_7)), ((MR_Box) (check_hlds__type_assign__V_14_14)));
                    }
#line 1423 "check_hlds.type_assign.c"
                    check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_21_21 == (MR_Integer) 0);
#line 38 "type_assign.m"
                    check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 38 "type_assign.m"
                    if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
                      *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_21_21;
#line 38 "type_assign.m"
                    else
#line 38 "type_assign.m"
                      {
#line 38 "type_assign.m"
                        MR_Word check_hlds__type_assign__V_22_22;

#line 38 "type_assign.m"
                        {
#line 38 "type_assign.m"
                          hlds__hlds_data____Compare____hlds_constraints_0_0(&check_hlds__type_assign__V_22_22, check_hlds__type_assign__V_8_8, check_hlds__type_assign__V_15_15);
                        }
#line 1443 "check_hlds.type_assign.c"
                        check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_22_22 == (MR_Integer) 0);
#line 38 "type_assign.m"
                        check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 38 "type_assign.m"
                        if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
                          *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_22_22;
#line 38 "type_assign.m"
                        else
#line 38 "type_assign.m"
                          {
#line 38 "type_assign.m"
                            MR_Word check_hlds__type_assign__V_23_23;

#line 38 "type_assign.m"
                            {
#line 38 "type_assign.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[4], &check_hlds__type_assign__V_23_23, ((MR_Box) (check_hlds__type_assign__V_9_9)), ((MR_Box) (check_hlds__type_assign__V_16_16)));
                            }
#line 1463 "check_hlds.type_assign.c"
                            check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_23_23 == (MR_Integer) 0);
#line 38 "type_assign.m"
                            check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 38 "type_assign.m"
                            if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
                              *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_23_23;
#line 38 "type_assign.m"
                            else
#line 38 "type_assign.m"
                              {
#line 38 "type_assign.m"
                                {
#line 38 "type_assign.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[0], check_hlds__type_assign__HeadVar__1_1, ((MR_Box) (check_hlds__type_assign__V_10_10)), ((MR_Box) (check_hlds__type_assign__V_17_17)));
#line 38 "type_assign.m"
                                  return;
                                }
#line 38 "type_assign.m"
                              }
#line 38 "type_assign.m"
                          }
#line 38 "type_assign.m"
                      }
#line 38 "type_assign.m"
                  }
#line 38 "type_assign.m"
              }
#line 38 "type_assign.m"
          }
#line 38 "type_assign.m"
      }
#line 38 "type_assign.m"
  }
#line 38 "type_assign.m"
}

#line 38 "type_assign.m"
MR_bool MR_CALL 
check_hlds__type_assign____Unify____type_assign_0_0(
#line 38 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 38 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2)
#line 38 "type_assign.m"
{
#line 38 "type_assign.m"
  {
#line 38 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 38 "type_assign.m"
    MR_Integer check_hlds__type_assign__CastX_17 = (MR_Integer) check_hlds__type_assign__HeadVar__1_1;
#line 38 "type_assign.m"
    MR_Integer check_hlds__type_assign__CastY_18 = (MR_Integer) check_hlds__type_assign__HeadVar__2_2;

#line 38 "type_assign.m"
    check_hlds__type_assign__succeeded = (check_hlds__type_assign__CastX_17 == check_hlds__type_assign__CastY_18);
#line 38 "type_assign.m"
    if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
      check_hlds__type_assign__succeeded = MR_TRUE;
#line 38 "type_assign.m"
    else
#line 38 "type_assign.m"
      {
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeInfo_20_20;
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeInfo_21_21;
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeInfo_22_22;
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeInfo_24_24;
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeInfo_25_25;
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 2)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 3)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 4)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 5)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 6)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 2)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 3)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 4)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 5)));
#line 38 "type_assign.m"
        MR_Word check_hlds__type_assign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 6)));

#line 1568 "check_hlds.type_assign.c"
        {
#line 1570 "check_hlds.type_assign.c"
          check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__type_assign_scalar_common_2[2], ((MR_Box) (check_hlds__type_assign__V_3_3)), ((MR_Box) (check_hlds__type_assign__V_10_10)));
        }
#line 38 "type_assign.m"
        if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
          {
#line 1577 "check_hlds.type_assign.c"
            check_hlds__type_assign__TypeInfo_20_20 = (MR_Word) &check_hlds__type_assign_scalar_common_1[6];
#line 1579 "check_hlds.type_assign.c"
            {
#line 1581 "check_hlds.type_assign.c"
              check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_20_20, ((MR_Box) (check_hlds__type_assign__V_4_4)), ((MR_Box) (check_hlds__type_assign__V_11_11)));
            }
#line 38 "type_assign.m"
            if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
              {
#line 1588 "check_hlds.type_assign.c"
                check_hlds__type_assign__TypeInfo_21_21 = (MR_Word) &check_hlds__type_assign_scalar_common_1[7];
#line 1590 "check_hlds.type_assign.c"
                {
#line 1592 "check_hlds.type_assign.c"
                  check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_21_21, ((MR_Box) (check_hlds__type_assign__V_5_5)), ((MR_Box) (check_hlds__type_assign__V_12_12)));
                }
#line 38 "type_assign.m"
                if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
                  {
#line 1599 "check_hlds.type_assign.c"
                    check_hlds__type_assign__TypeInfo_22_22 = (MR_Word) &check_hlds__type_assign_scalar_common_2[3];
#line 1601 "check_hlds.type_assign.c"
                    {
#line 1603 "check_hlds.type_assign.c"
                      check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_22_22, ((MR_Box) (check_hlds__type_assign__V_6_6)), ((MR_Box) (check_hlds__type_assign__V_13_13)));
                    }
#line 38 "type_assign.m"
                    if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
                      {
#line 1610 "check_hlds.type_assign.c"
                        {
#line 1612 "check_hlds.type_assign.c"
                          check_hlds__type_assign__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__type_assign__V_7_7, check_hlds__type_assign__V_14_14);
                        }
#line 38 "type_assign.m"
                        if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
                          {
#line 1619 "check_hlds.type_assign.c"
                            check_hlds__type_assign__TypeInfo_24_24 = (MR_Word) &check_hlds__type_assign_scalar_common_2[4];
#line 1621 "check_hlds.type_assign.c"
                            {
#line 1623 "check_hlds.type_assign.c"
                              check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_24_24, ((MR_Box) (check_hlds__type_assign__V_8_8)), ((MR_Box) (check_hlds__type_assign__V_15_15)));
                            }
#line 38 "type_assign.m"
                            if (check_hlds__type_assign__succeeded)
#line 38 "type_assign.m"
                              {
#line 1630 "check_hlds.type_assign.c"
                                check_hlds__type_assign__TypeInfo_25_25 = (MR_Word) &check_hlds__type_assign_scalar_common_2[0];
#line 1632 "check_hlds.type_assign.c"
                                {
#line 1634 "check_hlds.type_assign.c"
                                  return check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_25_25, ((MR_Box) (check_hlds__type_assign__V_9_9)), ((MR_Box) (check_hlds__type_assign__V_16_16)));
                                }
#line 38 "type_assign.m"
                              }
#line 38 "type_assign.m"
                          }
#line 38 "type_assign.m"
                      }
#line 38 "type_assign.m"
                  }
#line 38 "type_assign.m"
              }
#line 38 "type_assign.m"
          }
#line 38 "type_assign.m"
      }
#line 38 "type_assign.m"
    return check_hlds__type_assign__succeeded;
#line 38 "type_assign.m"
  }
#line 38 "type_assign.m"
}

#line 154 "type_assign.m"
void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_set_0_0(
#line 154 "type_assign.m"
  MR_Word * check_hlds__type_assign__HeadVar__1_1,
#line 154 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2,
#line 154 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__3_3)
#line 154 "type_assign.m"
{
#line 154 "type_assign.m"
  {
#line 154 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 154 "type_assign.m"
    MR_Word check_hlds__type_assign__Cast_HeadVar1_4 = check_hlds__type_assign__HeadVar__2_2;
#line 154 "type_assign.m"
    MR_Word check_hlds__type_assign__Cast_HeadVar2_5 = check_hlds__type_assign__HeadVar__3_3;

#line 154 "type_assign.m"
    {
#line 154 "type_assign.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[4], check_hlds__type_assign__HeadVar__1_1, ((MR_Box) (check_hlds__type_assign__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__type_assign__Cast_HeadVar2_5)));
#line 154 "type_assign.m"
      return;
    }
#line 154 "type_assign.m"
  }
#line 154 "type_assign.m"
}

#line 154 "type_assign.m"
MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_set_0_0(
#line 154 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 154 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2)
#line 154 "type_assign.m"
{
#line 154 "type_assign.m"
  {
#line 154 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 154 "type_assign.m"
    MR_Word check_hlds__type_assign__Cast_HeadVar1_3 = check_hlds__type_assign__HeadVar__1_1;
#line 154 "type_assign.m"
    MR_Word check_hlds__type_assign__Cast_HeadVar2_4 = check_hlds__type_assign__HeadVar__2_2;

#line 154 "type_assign.m"
    {
#line 154 "type_assign.m"
      return check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[4], ((MR_Box) (check_hlds__type_assign__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__type_assign__Cast_HeadVar2_4)));
    }
#line 154 "type_assign.m"
    return check_hlds__type_assign__succeeded;
#line 154 "type_assign.m"
  }
#line 154 "type_assign.m"
}

#line 133 "type_assign.m"
void MR_CALL 
check_hlds__type_assign____Compare____args_type_assign_0_0(
#line 133 "type_assign.m"
  MR_Word * check_hlds__type_assign__HeadVar__1_1,
#line 133 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2,
#line 133 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__3_3)
#line 133 "type_assign.m"
{
#line 133 "type_assign.m"
  {
#line 133 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 133 "type_assign.m"
    MR_Integer check_hlds__type_assign__CastX_12 = (MR_Integer) check_hlds__type_assign__HeadVar__2_2;
#line 133 "type_assign.m"
    MR_Integer check_hlds__type_assign__CastY_13 = (MR_Integer) check_hlds__type_assign__HeadVar__3_3;

#line 133 "type_assign.m"
    check_hlds__type_assign__succeeded = (check_hlds__type_assign__CastX_12 == check_hlds__type_assign__CastY_13);
#line 133 "type_assign.m"
    if (check_hlds__type_assign__succeeded)
#line 1744 "check_hlds.type_assign.c"
      *check_hlds__type_assign__HeadVar__1_1 = (MR_Integer) 0;
#line 133 "type_assign.m"
    else
#line 133 "type_assign.m"
      {
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 2)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 0)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 1)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__3_3, (MR_Integer) 2)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_10_10;

#line 133 "type_assign.m"
        {
#line 133 "type_assign.m"
          check_hlds__type_assign____Compare____type_assign_0_0(&check_hlds__type_assign__V_10_10, check_hlds__type_assign__V_4_4, check_hlds__type_assign__V_7_7);
        }
#line 1770 "check_hlds.type_assign.c"
        check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_10_10 == (MR_Integer) 0);
#line 133 "type_assign.m"
        check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 133 "type_assign.m"
        if (check_hlds__type_assign__succeeded)
#line 133 "type_assign.m"
          *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_10_10;
#line 133 "type_assign.m"
        else
#line 133 "type_assign.m"
          {
#line 133 "type_assign.m"
            MR_Word check_hlds__type_assign__V_11_11;

#line 133 "type_assign.m"
            {
#line 133 "type_assign.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[3], &check_hlds__type_assign__V_11_11, ((MR_Box) (check_hlds__type_assign__V_5_5)), ((MR_Box) (check_hlds__type_assign__V_8_8)));
            }
#line 1790 "check_hlds.type_assign.c"
            check_hlds__type_assign__succeeded = (check_hlds__type_assign__V_11_11 == (MR_Integer) 0);
#line 133 "type_assign.m"
            check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 133 "type_assign.m"
            if (check_hlds__type_assign__succeeded)
#line 133 "type_assign.m"
              *check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__V_11_11;
#line 133 "type_assign.m"
            else
#line 133 "type_assign.m"
              {
#line 133 "type_assign.m"
                hlds__hlds_data____Compare____hlds_constraints_0_0(check_hlds__type_assign__HeadVar__1_1, check_hlds__type_assign__V_6_6, check_hlds__type_assign__V_9_9);
#line 133 "type_assign.m"
                return;
              }
#line 133 "type_assign.m"
          }
#line 133 "type_assign.m"
      }
#line 133 "type_assign.m"
  }
#line 133 "type_assign.m"
}

#line 133 "type_assign.m"
MR_bool MR_CALL 
check_hlds__type_assign____Unify____args_type_assign_0_0(
#line 133 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 133 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2)
#line 133 "type_assign.m"
{
#line 133 "type_assign.m"
  {
#line 133 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 133 "type_assign.m"
    MR_Integer check_hlds__type_assign__CastX_9 = (MR_Integer) check_hlds__type_assign__HeadVar__1_1;
#line 133 "type_assign.m"
    MR_Integer check_hlds__type_assign__CastY_10 = (MR_Integer) check_hlds__type_assign__HeadVar__2_2;

#line 133 "type_assign.m"
    check_hlds__type_assign__succeeded = (check_hlds__type_assign__CastX_9 == check_hlds__type_assign__CastY_10);
#line 133 "type_assign.m"
    if (check_hlds__type_assign__succeeded)
#line 133 "type_assign.m"
      check_hlds__type_assign__succeeded = MR_TRUE;
#line 133 "type_assign.m"
    else
#line 133 "type_assign.m"
      {
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeInfo_11_11;
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 2)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
#line 133 "type_assign.m"
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 2)));

#line 1859 "check_hlds.type_assign.c"
        {
#line 1861 "check_hlds.type_assign.c"
          check_hlds__type_assign__succeeded = check_hlds__type_assign____Unify____type_assign_0_0(check_hlds__type_assign__V_3_3, check_hlds__type_assign__V_6_6);
        }
#line 133 "type_assign.m"
        if (check_hlds__type_assign__succeeded)
#line 133 "type_assign.m"
          {
#line 1868 "check_hlds.type_assign.c"
            check_hlds__type_assign__TypeInfo_11_11 = (MR_Word) &check_hlds__type_assign_scalar_common_1[3];
#line 1870 "check_hlds.type_assign.c"
            {
#line 1872 "check_hlds.type_assign.c"
              check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_11_11, ((MR_Box) (check_hlds__type_assign__V_4_4)), ((MR_Box) (check_hlds__type_assign__V_7_7)));
            }
#line 133 "type_assign.m"
            if (check_hlds__type_assign__succeeded)
#line 1877 "check_hlds.type_assign.c"
              {
#line 1879 "check_hlds.type_assign.c"
                return check_hlds__type_assign__succeeded = hlds__hlds_data____Unify____hlds_constraints_0_0(check_hlds__type_assign__V_5_5, check_hlds__type_assign__V_8_8);
              }
#line 133 "type_assign.m"
          }
#line 133 "type_assign.m"
      }
#line 133 "type_assign.m"
    return check_hlds__type_assign__succeeded;
#line 133 "type_assign.m"
  }
#line 133 "type_assign.m"
}

#line 709 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__write_type_assign_constraints_7_p_0(
#line 709 "type_assign.m"
  MR_String check_hlds__type_assign__Operator_1,
#line 709 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2,
#line 709 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_3,
#line 709 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_4,
#line 709 "type_assign.m"
  MR_Word check_hlds__type_assign__FoundOne_5)
#line 709 "type_assign.m"
{
#line 712 "type_assign.m"
  while (MR_TRUE)
#line 712 "type_assign.m"
    {
#line 712 "type_assign.m"
      /* tailcall optimized into a loop */
#line 712 "type_assign.m"
      {
#line 712 "type_assign.m"
        MR_bool check_hlds__type_assign__succeeded;

#line 712 "type_assign.m"
        if ((check_hlds__type_assign__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 712 "type_assign.m"
          {
#line 712 "type_assign.m"
          }
#line 712 "type_assign.m"
        else
#line 714 "type_assign.m"
          {
#line 714 "type_assign.m"
            MR_Word check_hlds__type_assign__Constraint_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
#line 714 "type_assign.m"
            MR_Word check_hlds__type_assign__Constraints_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
#line 714 "type_assign.m"
            MR_Word check_hlds__type_assign__BoundConstraint_22;
#line 714 "type_assign.m"
            MR_Word check_hlds__type_assign__ProgConstraint_23;

#line 718 "type_assign.m"
#line 718 "type_assign.m"
            switch (check_hlds__type_assign__FoundOne_5) {
#line 718 "type_assign.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 718 "type_assign.m"
              case (MR_Integer) 0:
#line 716 "type_assign.m"
                {
#line 716 "type_assign.m"
                  MR_Word check_hlds__type_assign__V_28_28;
#line 716 "type_assign.m"
                  MR_Word check_hlds__type_assign__V_31_31;

#line 717 "type_assign.m"
                  {
#line 717 "type_assign.m"
                    check_hlds__type_assign__V_31_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "type_assign.m"
                    MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_31_31, 0) = ((MR_Box) (check_hlds__type_assign__Operator_1));
#line 717 "type_assign.m"
                    MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_31_31, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[16])));
#line 717 "type_assign.m"
                  }
#line 717 "type_assign.m"
                  {
#line 717 "type_assign.m"
                    check_hlds__type_assign__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "type_assign.m"
                    MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_28_28, 0) = ((MR_Box) ((MR_String) "\n\t"));
#line 717 "type_assign.m"
                    MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_28_28, 1) = ((MR_Box) (check_hlds__type_assign__V_31_31));
#line 717 "type_assign.m"
                  }
#line 717 "type_assign.m"
                  {
#line 717 "type_assign.m"
                    mercury__io__write_strings_3_p_0(check_hlds__type_assign__V_28_28);
                  }
#line 716 "type_assign.m"
                }
#line 718 "type_assign.m"
                break;
#line 718 "type_assign.m"
              case (MR_Integer) 1:
#line 719 "type_assign.m"
                {
#line 720 "type_assign.m"
                  {
#line 720 "type_assign.m"
                    mercury__io__write_string_3_p_0((MR_String) ",\n\t   ");
                  }
#line 719 "type_assign.m"
                }
#line 718 "type_assign.m"
                break;
#line 718 "type_assign.m"
            }
#line 722 "type_assign.m"
            {
#line 722 "type_assign.m"
              check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__type_assign__TypeBindings_3, check_hlds__type_assign__Constraint_16, &check_hlds__type_assign__BoundConstraint_22);
            }
#line 723 "type_assign.m"
            {
#line 723 "type_assign.m"
              hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__type_assign__BoundConstraint_22, &check_hlds__type_assign__ProgConstraint_23);
            }
#line 724 "type_assign.m"
            {
#line 724 "type_assign.m"
              parse_tree__mercury_to_mercury__mercury_output_constraint_5_p_0(check_hlds__type_assign__TypeVarSet_4, (MR_Integer) 1, check_hlds__type_assign__ProgConstraint_23);
            }
#line 725 "type_assign.m"
            /* direct tailcall eliminated */
#line 725 "type_assign.m"
            {
#line 725 "type_assign.m"
              MR_Word check_hlds__type_assign__HeadVar__2__tmp_copy_2 = check_hlds__type_assign__Constraints_17;

#line 725 "type_assign.m"
              check_hlds__type_assign__FoundOne_5 = (MR_Integer) 1;
#line 725 "type_assign.m"
              check_hlds__type_assign__HeadVar__2_2 = check_hlds__type_assign__HeadVar__2__tmp_copy_2;
#line 725 "type_assign.m"
            }
#line 725 "type_assign.m"
            continue;
#line 714 "type_assign.m"
          }
#line 712 "type_assign.m"
      }
#line 712 "type_assign.m"
      break;
#line 712 "type_assign.m"
    }
#line 709 "type_assign.m"
}

#line 657 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__write_type_assign_types_8_p_0(
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_2,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__VarTypes_3,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_4,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_5,
#line 657 "type_assign.m"
  MR_Word check_hlds__type_assign__FoundOne_6)
#line 657 "type_assign.m"
{
#line 660 "type_assign.m"
  while (MR_TRUE)
#line 660 "type_assign.m"
    {
#line 660 "type_assign.m"
      /* tailcall optimized into a loop */
#line 660 "type_assign.m"
      {
#line 660 "type_assign.m"
        MR_bool check_hlds__type_assign__succeeded;

#line 660 "type_assign.m"
        if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 664 "type_assign.m"
#line 664 "type_assign.m"
          switch (check_hlds__type_assign__FoundOne_6) {
#line 664 "type_assign.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 664 "type_assign.m"
            case (MR_Integer) 0:
#line 662 "type_assign.m"
              {
#line 663 "type_assign.m"
                {
#line 663 "type_assign.m"
                  mercury__io__write_string_3_p_0((MR_String) "(No variables were assigned a type)");
#line 663 "type_assign.m"
                  return;
                }
#line 662 "type_assign.m"
              }
#line 664 "type_assign.m"
              break;
#line 664 "type_assign.m"
            case (MR_Integer) 1:
#line 665 "type_assign.m"
              {
#line 665 "type_assign.m"
              }
#line 664 "type_assign.m"
              break;
#line 664 "type_assign.m"
          }
#line 660 "type_assign.m"
        else
#line 668 "type_assign.m"
          {
#line 668 "type_assign.m"
            MR_Word check_hlds__type_assign__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 668 "type_assign.m"
            MR_Word check_hlds__type_assign__Vars_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
#line 681 "type_assign.m"
            MR_Word check_hlds__type_assign__Type_27;

#line 669 "type_assign.m"
            {
#line 669 "type_assign.m"
              check_hlds__type_assign__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__type_assign__VarTypes_3, check_hlds__type_assign__Var_19, &check_hlds__type_assign__Type_27);
            }
#line 681 "type_assign.m"
            if (check_hlds__type_assign__succeeded)
#line 675 "type_assign.m"
              {
#line 675 "type_assign.m"
                MR_Word check_hlds__type_assign__Type1_47;
#line 675 "type_assign.m"
                MR_Word check_hlds__type_assign__Type_48;

#line 673 "type_assign.m"
#line 673 "type_assign.m"
                switch (check_hlds__type_assign__FoundOne_6) {
#line 673 "type_assign.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 673 "type_assign.m"
                  case (MR_Integer) 0:
#line 674 "type_assign.m"
                    {
#line 674 "type_assign.m"
                    }
#line 673 "type_assign.m"
                    break;
#line 673 "type_assign.m"
                  case (MR_Integer) 1:
#line 671 "type_assign.m"
                    {
#line 672 "type_assign.m"
                      {
#line 672 "type_assign.m"
                        mercury__io__write_string_3_p_0((MR_String) "\n\t");
                      }
#line 671 "type_assign.m"
                    }
#line 673 "type_assign.m"
                    break;
#line 673 "type_assign.m"
                }
#line 676 "type_assign.m"
                {
#line 676 "type_assign.m"
                  parse_tree__mercury_to_mercury__mercury_output_var_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__type_assign__VarSet_2, (MR_Integer) 1, check_hlds__type_assign__Var_19);
                }
#line 677 "type_assign.m"
                {
#line 677 "type_assign.m"
                  mercury__io__write_string_3_p_0((MR_String) ": ");
                }
#line 693 "type_assign.m"
                {
#line 693 "type_assign.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__type_assign__TypeBindings_4, check_hlds__type_assign__Type_27, &check_hlds__type_assign__Type1_47);
                }
#line 694 "type_assign.m"
                {
#line 694 "type_assign.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__type_assign__Type1_47, &check_hlds__type_assign__Type_48);
                }
#line 695 "type_assign.m"
                {
#line 695 "type_assign.m"
                  parse_tree__mercury_to_mercury__mercury_output_type_5_p_0(check_hlds__type_assign__TypeVarSet_5, (MR_Integer) 1, check_hlds__type_assign__Type_48);
                }
#line 679 "type_assign.m"
                /* direct tailcall eliminated */
#line 679 "type_assign.m"
                {
#line 679 "type_assign.m"
                  MR_Word check_hlds__type_assign__HeadVar__1__tmp_copy_1 = check_hlds__type_assign__Vars_20;

#line 679 "type_assign.m"
                  check_hlds__type_assign__FoundOne_6 = (MR_Integer) 1;
#line 679 "type_assign.m"
                  check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__HeadVar__1__tmp_copy_1;
#line 679 "type_assign.m"
                }
#line 679 "type_assign.m"
                continue;
#line 675 "type_assign.m"
              }
#line 681 "type_assign.m"
            else
#line 682 "type_assign.m"
              {
#line 682 "type_assign.m"
                /* direct tailcall eliminated */
#line 682 "type_assign.m"
                {
#line 682 "type_assign.m"
                  MR_Word check_hlds__type_assign__HeadVar__1__tmp_copy_1 = check_hlds__type_assign__Vars_20;

#line 682 "type_assign.m"
                  check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__HeadVar__1__tmp_copy_1;
#line 682 "type_assign.m"
                }
#line 682 "type_assign.m"
                continue;
#line 682 "type_assign.m"
              }
#line 668 "type_assign.m"
          }
#line 660 "type_assign.m"
      }
#line 660 "type_assign.m"
      break;
#line 660 "type_assign.m"
    }
#line 657 "type_assign.m"
}

#line 633 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__write_type_assign_4_p_0(
#line 633 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeAssign_5,
#line 633 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_6)
#line 633 "type_assign.m"
{
#line 636 "type_assign.m"
  {
#line 636 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 636 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadTypeParams_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 2)));
#line 636 "type_assign.m"
    MR_Word check_hlds__type_assign__VarTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 0)));
#line 636 "type_assign.m"
    MR_Word check_hlds__type_assign__Constraints_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 4)));
#line 636 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeBindings_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 3)));
#line 636 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeVarSet_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 1)));
#line 636 "type_assign.m"
    MR_Word check_hlds__type_assign__Vars_13;
#line 636 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintsToProve_76;
#line 636 "type_assign.m"
    MR_Word check_hlds__type_assign__AssumedConstraints_77;
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 5)));
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 6)));
#line 702 "type_assign.m"
    MR_Word check_hlds__type_assign__V_78_78;
#line 702 "type_assign.m"
    MR_Word check_hlds__type_assign__V_79_79;

#line 642 "type_assign.m"
    {
#line 642 "type_assign.m"
      hlds__vartypes__vartypes_vars_2_p_0(check_hlds__type_assign__VarTypes_9, &check_hlds__type_assign__Vars_13);
    }
#line 645 "type_assign.m"
    if ((check_hlds__type_assign__HeadTypeParams_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 644 "type_assign.m"
      {
#line 644 "type_assign.m"
      }
#line 645 "type_assign.m"
    else
#line 646 "type_assign.m"
      {
#line 647 "type_assign.m"
        {
#line 647 "type_assign.m"
          mercury__io__write_string_3_p_0((MR_String) "some [");
        }
#line 648 "type_assign.m"
        {
#line 648 "type_assign.m"
          parse_tree__mercury_to_mercury__mercury_output_vars_5_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__type_assign__TypeVarSet_12, (MR_Integer) 1, check_hlds__type_assign__HeadTypeParams_8);
        }
#line 649 "type_assign.m"
        {
#line 649 "type_assign.m"
          mercury__io__write_string_3_p_0((MR_String) "]\n\t");
        }
#line 646 "type_assign.m"
      }
#line 651 "type_assign.m"
    {
#line 651 "type_assign.m"
      check_hlds__type_assign__write_type_assign_types_8_p_0(check_hlds__type_assign__Vars_13, check_hlds__type_assign__VarSet_6, check_hlds__type_assign__VarTypes_9, check_hlds__type_assign__TypeBindings_11, check_hlds__type_assign__TypeVarSet_12, (MR_Integer) 0);
    }
#line 702 "type_assign.m"
    check_hlds__type_assign__ConstraintsToProve_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_10, (MR_Integer) 0)));
#line 702 "type_assign.m"
    check_hlds__type_assign__AssumedConstraints_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_10, (MR_Integer) 1)));
#line 702 "type_assign.m"
    check_hlds__type_assign__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_10, (MR_Integer) 2)));
#line 702 "type_assign.m"
    check_hlds__type_assign__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_10, (MR_Integer) 3)));
#line 704 "type_assign.m"
    {
#line 704 "type_assign.m"
      check_hlds__type_assign__write_type_assign_constraints_7_p_0((MR_String) "&", check_hlds__type_assign__AssumedConstraints_77, check_hlds__type_assign__TypeBindings_11, check_hlds__type_assign__TypeVarSet_12, (MR_Integer) 0);
    }
#line 706 "type_assign.m"
    {
#line 706 "type_assign.m"
      check_hlds__type_assign__write_type_assign_constraints_7_p_0((MR_String) "<=", check_hlds__type_assign__ConstraintsToProve_76, check_hlds__type_assign__TypeBindings_11, check_hlds__type_assign__TypeVarSet_12, (MR_Integer) 0);
    }
#line 655 "type_assign.m"
    {
#line 655 "type_assign.m"
      mercury__io__write_string_3_p_0((MR_String) "\n");
#line 655 "type_assign.m"
      return;
    }
#line 636 "type_assign.m"
  }
#line 633 "type_assign.m"
}

#line 623 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__write_type_assign_set_4_p_0(
#line 623 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 623 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_2)
#line 623 "type_assign.m"
{
#line 626 "type_assign.m"
  while (MR_TRUE)
#line 626 "type_assign.m"
    {
#line 626 "type_assign.m"
      /* tailcall optimized into a loop */
#line 626 "type_assign.m"
      {
#line 626 "type_assign.m"
        MR_bool check_hlds__type_assign__succeeded;

#line 626 "type_assign.m"
        if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "type_assign.m"
          {
#line 626 "type_assign.m"
          }
#line 626 "type_assign.m"
        else
#line 627 "type_assign.m"
          {
#line 627 "type_assign.m"
            MR_Word check_hlds__type_assign__TypeAssign_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 627 "type_assign.m"
            MR_Word check_hlds__type_assign__TypeAssigns_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));

#line 628 "type_assign.m"
            {
#line 628 "type_assign.m"
              mercury__io__write_string_3_p_0((MR_String) "\t");
            }
#line 629 "type_assign.m"
            {
#line 629 "type_assign.m"
              check_hlds__type_assign__write_type_assign_4_p_0(check_hlds__type_assign__TypeAssign_9, check_hlds__type_assign__VarSet_2);
            }
#line 630 "type_assign.m"
            {
#line 630 "type_assign.m"
              mercury__io__write_string_3_p_0((MR_String) "\n");
            }
#line 631 "type_assign.m"
            /* direct tailcall eliminated */
#line 631 "type_assign.m"
            {
#line 631 "type_assign.m"
              MR_Word check_hlds__type_assign__HeadVar__1__tmp_copy_1 = check_hlds__type_assign__TypeAssigns_10;

#line 631 "type_assign.m"
              check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__HeadVar__1__tmp_copy_1;
#line 631 "type_assign.m"
            }
#line 631 "type_assign.m"
            continue;
#line 627 "type_assign.m"
          }
#line 626 "type_assign.m"
      }
#line 626 "type_assign.m"
      break;
#line 626 "type_assign.m"
    }
#line 623 "type_assign.m"
}

#line 554 "type_assign.m"
static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(
#line 554 "type_assign.m"
  MR_String check_hlds__type_assign__Operator_1,
#line 554 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__2_2,
#line 554 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_3,
#line 554 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_4,
#line 554 "type_assign.m"
  MR_Word check_hlds__type_assign__FoundOne_5)
#line 554 "type_assign.m"
{
#line 557 "type_assign.m"
  {
#line 557 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 557 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__6_6;

#line 557 "type_assign.m"
    if ((check_hlds__type_assign__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 557 "type_assign.m"
      check_hlds__type_assign__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 557 "type_assign.m"
    else
#line 559 "type_assign.m"
      {
#line 559 "type_assign.m"
        MR_Word check_hlds__type_assign__Constraint_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 0)));
#line 559 "type_assign.m"
        MR_Word check_hlds__type_assign__Constraints_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, (MR_Integer) 1)));
#line 559 "type_assign.m"
        MR_Word check_hlds__type_assign__ThisPieces_17;
#line 559 "type_assign.m"
        MR_Word check_hlds__type_assign__TailPieceLists_18;
#line 559 "type_assign.m"
        MR_String check_hlds__type_assign__Prefix_19;
#line 559 "type_assign.m"
        MR_Word check_hlds__type_assign__BoundConstraint_20;
#line 559 "type_assign.m"
        MR_Word check_hlds__type_assign__ProgConstraint_21;
#line 559 "type_assign.m"
        MR_Word check_hlds__type_assign__V_22_22;
#line 559 "type_assign.m"
        MR_Word check_hlds__type_assign__V_25_25;
#line 559 "type_assign.m"
        MR_String check_hlds__type_assign__V_26_26;
#line 559 "type_assign.m"
        MR_String check_hlds__type_assign__V_27_27;

#line 563 "type_assign.m"
#line 563 "type_assign.m"
        switch (check_hlds__type_assign__FoundOne_5) {
#line 563 "type_assign.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 563 "type_assign.m"
          case (MR_Integer) 0:
#line 561 "type_assign.m"
            {
#line 562 "type_assign.m"
              {
#line 562 "type_assign.m"
                check_hlds__type_assign__Prefix_19 = mercury__string__f_43_43_2_f_0(check_hlds__type_assign__Operator_1, (MR_String) " ");
              }
#line 561 "type_assign.m"
            }
#line 563 "type_assign.m"
            break;
#line 563 "type_assign.m"
          case (MR_Integer) 1:
#line 565 "type_assign.m"
            check_hlds__type_assign__Prefix_19 = (MR_String) "   ";
#line 563 "type_assign.m"
            break;
#line 563 "type_assign.m"
        }
#line 567 "type_assign.m"
        {
#line 567 "type_assign.m"
          check_hlds__type_util__apply_rec_subst_to_constraint_3_p_0(check_hlds__type_assign__TypeBindings_3, check_hlds__type_assign__Constraint_12, &check_hlds__type_assign__BoundConstraint_20);
        }
#line 568 "type_assign.m"
        {
#line 568 "type_assign.m"
          hlds__hlds_data__retrieve_prog_constraint_2_p_0(check_hlds__type_assign__BoundConstraint_20, &check_hlds__type_assign__ProgConstraint_21);
        }
#line 570 "type_assign.m"
        {
#line 570 "type_assign.m"
          check_hlds__type_assign__V_27_27 = parse_tree__mercury_to_mercury__mercury_constraint_to_string_2_f_0(check_hlds__type_assign__TypeVarSet_4, check_hlds__type_assign__ProgConstraint_21);
        }
#line 569 "type_assign.m"
        {
#line 569 "type_assign.m"
          check_hlds__type_assign__V_26_26 = mercury__string__f_43_43_2_f_0(check_hlds__type_assign__Prefix_19, check_hlds__type_assign__V_27_27);
        }
#line 569 "type_assign.m"
        {
#line 569 "type_assign.m"
          check_hlds__type_assign__V_25_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 569 "type_assign.m"
          MR_hl_field(MR_mktag(2), check_hlds__type_assign__V_25_25, 0) = ((MR_Box) (check_hlds__type_assign__V_26_26));
#line 569 "type_assign.m"
        }
#line 570 "type_assign.m"
        {
#line 570 "type_assign.m"
          check_hlds__type_assign__ThisPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__ThisPieces_17, 0) = ((MR_Box) (check_hlds__type_assign__V_25_25));
#line 570 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__ThisPieces_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 570 "type_assign.m"
        }
#line 559 "type_assign.m"
        {
#line 559 "type_assign.m"
          check_hlds__type_assign__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 559 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_22_22, 0) = ((MR_Box) (check_hlds__type_assign__ThisPieces_17));
#line 559 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 559 "type_assign.m"
        }
#line 571 "type_assign.m"
        {
#line 571 "type_assign.m"
          check_hlds__type_assign__TailPieceLists_18 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0(check_hlds__type_assign__Operator_1, check_hlds__type_assign__Constraints_13, check_hlds__type_assign__TypeBindings_3, check_hlds__type_assign__TypeVarSet_4, (MR_Integer) 1);
        }
#line 559 "type_assign.m"
        {
#line 559 "type_assign.m"
          check_hlds__type_assign__HeadVar__6_6 = mercury__list__f_43_43_2_f_0((MR_Word) &check_hlds__type_assign_scalar_common_1[2], check_hlds__type_assign__V_22_22, check_hlds__type_assign__TailPieceLists_18);
        }
#line 559 "type_assign.m"
      }
#line 557 "type_assign.m"
    return check_hlds__type_assign__HeadVar__6_6;
#line 557 "type_assign.m"
  }
#line 554 "type_assign.m"
}

#line 540 "type_assign.m"
static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(
#line 540 "type_assign.m"
  MR_Word check_hlds__type_assign__Constraints_5,
#line 540 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_6,
#line 540 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_7)
#line 540 "type_assign.m"
{
#line 544 "type_assign.m"
  {
#line 544 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 544 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__4_4;
#line 544 "type_assign.m"
    MR_Word check_hlds__type_assign__Pieces1_8;
#line 544 "type_assign.m"
    MR_Word check_hlds__type_assign__Pieces2_9;
#line 544 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintsToProve_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_5, (MR_Integer) 0)));
#line 544 "type_assign.m"
    MR_Word check_hlds__type_assign__AssumedConstraints_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_5, (MR_Integer) 1)));
#line 544 "type_assign.m"
    MR_Word check_hlds__type_assign__PiecesList1_14;
#line 544 "type_assign.m"
    MR_Word check_hlds__type_assign__PiecesList2_15;
#line 545 "type_assign.m"
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_5, (MR_Integer) 2)));
#line 545 "type_assign.m"
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Constraints_5, (MR_Integer) 3)));

#line 547 "type_assign.m"
    {
#line 547 "type_assign.m"
      check_hlds__type_assign__PiecesList1_14 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "&", check_hlds__type_assign__AssumedConstraints_11, check_hlds__type_assign__TypeBindings_6, check_hlds__type_assign__TypeVarSet_7, (MR_Integer) 0);
    }
#line 549 "type_assign.m"
    {
#line 549 "type_assign.m"
      check_hlds__type_assign__PiecesList2_15 = check_hlds__type_assign__type_assign_constraints_to_pieces_list_5_f_0((MR_String) "<=", check_hlds__type_assign__ConstraintsToProve_10, check_hlds__type_assign__TypeBindings_6, check_hlds__type_assign__TypeVarSet_7, (MR_Integer) 0);
    }
#line 551 "type_assign.m"
    {
#line 551 "type_assign.m"
      check_hlds__type_assign__Pieces1_8 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__type_assign__PiecesList1_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 552 "type_assign.m"
    {
#line 552 "type_assign.m"
      check_hlds__type_assign__Pieces2_9 = parse_tree__error_util__component_list_to_line_pieces_2_f_0(check_hlds__type_assign__PiecesList2_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
    }
#line 544 "type_assign.m"
    {
#line 544 "type_assign.m"
      check_hlds__type_assign__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__type_assign__Pieces1_8, check_hlds__type_assign__Pieces2_9);
    }
#line 544 "type_assign.m"
    return check_hlds__type_assign__HeadVar__4_4;
#line 544 "type_assign.m"
  }
#line 540 "type_assign.m"
}

#line 501 "type_assign.m"
static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_2,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__VarTypes_3,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_4,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_5,
#line 501 "type_assign.m"
  MR_Word check_hlds__type_assign__FoundOne_6)
#line 501 "type_assign.m"
{
#line 504 "type_assign.m"
  while (MR_TRUE)
#line 504 "type_assign.m"
    {
#line 504 "type_assign.m"
      /* tailcall optimized into a loop */
#line 504 "type_assign.m"
      {
#line 504 "type_assign.m"
        MR_bool check_hlds__type_assign__succeeded;
#line 504 "type_assign.m"
        MR_Word check_hlds__type_assign__Pieces_7;

#line 504 "type_assign.m"
        if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 508 "type_assign.m"
#line 508 "type_assign.m"
          switch (check_hlds__type_assign__FoundOne_6) {
#line 508 "type_assign.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 508 "type_assign.m"
            case (MR_Integer) 0:
#line 506 "type_assign.m"
              {
#line 507 "type_assign.m"
                check_hlds__type_assign__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[14]);
#line 506 "type_assign.m"
              }
#line 508 "type_assign.m"
              break;
#line 508 "type_assign.m"
            case (MR_Integer) 1:
#line 510 "type_assign.m"
              check_hlds__type_assign__Pieces_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 508 "type_assign.m"
              break;
#line 508 "type_assign.m"
          }
#line 504 "type_assign.m"
        else
#line 513 "type_assign.m"
          {
#line 513 "type_assign.m"
            MR_Word check_hlds__type_assign__Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 513 "type_assign.m"
            MR_Word check_hlds__type_assign__Vars_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
#line 528 "type_assign.m"
            MR_Word check_hlds__type_assign__Type_25;

#line 514 "type_assign.m"
            {
#line 514 "type_assign.m"
              check_hlds__type_assign__succeeded = hlds__vartypes__search_var_type_3_p_0(check_hlds__type_assign__VarTypes_3, check_hlds__type_assign__Var_17, &check_hlds__type_assign__Type_25);
            }
#line 528 "type_assign.m"
            if (check_hlds__type_assign__succeeded)
#line 521 "type_assign.m"
              {
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__TypeCtorInfo_44_44;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__PrefixPieces_26;
#line 521 "type_assign.m"
                MR_String check_hlds__type_assign__VarStr_27;
#line 521 "type_assign.m"
                MR_String check_hlds__type_assign__TypeStr_28;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__AssignPieces_29;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__TailPieces_30;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__V_34_34;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__V_35_35;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__V_38_38;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__V_39_39;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__V_42_42;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__Type1_49;
#line 521 "type_assign.m"
                MR_Word check_hlds__type_assign__Type_50;

#line 518 "type_assign.m"
#line 518 "type_assign.m"
                switch (check_hlds__type_assign__FoundOne_6) {
#line 518 "type_assign.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 518 "type_assign.m"
                  case (MR_Integer) 0:
#line 520 "type_assign.m"
                    check_hlds__type_assign__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 518 "type_assign.m"
                    break;
#line 518 "type_assign.m"
                  case (MR_Integer) 1:
#line 516 "type_assign.m"
                    {
#line 517 "type_assign.m"
                      check_hlds__type_assign__PrefixPieces_26 = (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[9]);
#line 516 "type_assign.m"
                    }
#line 518 "type_assign.m"
                    break;
#line 518 "type_assign.m"
                }
#line 522 "type_assign.m"
                {
#line 522 "type_assign.m"
                  check_hlds__type_assign__VarStr_27 = parse_tree__mercury_to_mercury__mercury_var_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__type_assign__VarSet_2, (MR_Integer) 1, check_hlds__type_assign__Var_17);
                }
#line 536 "type_assign.m"
                {
#line 536 "type_assign.m"
                  parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__type_assign__TypeBindings_4, check_hlds__type_assign__Type_25, &check_hlds__type_assign__Type1_49);
                }
#line 537 "type_assign.m"
                {
#line 537 "type_assign.m"
                  parse_tree__prog_type__strip_builtin_qualifiers_from_type_2_p_0(check_hlds__type_assign__Type1_49, &check_hlds__type_assign__Type_50);
                }
#line 538 "type_assign.m"
                {
#line 538 "type_assign.m"
                  check_hlds__type_assign__TypeStr_28 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(check_hlds__type_assign__TypeVarSet_5, (MR_Integer) 0, check_hlds__type_assign__Type_50);
                }
#line 524 "type_assign.m"
                {
#line 524 "type_assign.m"
                  check_hlds__type_assign__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(2), check_hlds__type_assign__V_34_34, 0) = ((MR_Box) (check_hlds__type_assign__VarStr_27));
#line 524 "type_assign.m"
                }
#line 524 "type_assign.m"
                {
#line 524 "type_assign.m"
                  check_hlds__type_assign__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_39_39, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_39_39, 1) = ((MR_Box) (check_hlds__type_assign__TypeStr_28));
#line 524 "type_assign.m"
                }
#line 524 "type_assign.m"
                {
#line 524 "type_assign.m"
                  check_hlds__type_assign__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_38_38, 0) = ((MR_Box) (check_hlds__type_assign__V_39_39));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_38_38, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 524 "type_assign.m"
                }
#line 524 "type_assign.m"
                {
#line 524 "type_assign.m"
                  check_hlds__type_assign__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_35_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[15])));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_35_35, 1) = ((MR_Box) (check_hlds__type_assign__V_38_38));
#line 524 "type_assign.m"
                }
#line 524 "type_assign.m"
                {
#line 524 "type_assign.m"
                  check_hlds__type_assign__AssignPieces_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__AssignPieces_29, 0) = ((MR_Box) (check_hlds__type_assign__V_34_34));
#line 524 "type_assign.m"
                  MR_hl_field(MR_mktag(1), check_hlds__type_assign__AssignPieces_29, 1) = ((MR_Box) (check_hlds__type_assign__V_35_35));
#line 524 "type_assign.m"
                }
#line 525 "type_assign.m"
                {
#line 525 "type_assign.m"
                  check_hlds__type_assign__TailPieces_30 = check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(check_hlds__type_assign__Vars_18, check_hlds__type_assign__VarSet_2, check_hlds__type_assign__VarTypes_3, check_hlds__type_assign__TypeBindings_4, check_hlds__type_assign__TypeVarSet_5, (MR_Integer) 1);
                }
#line 2811 "check_hlds.type_assign.c"
                check_hlds__type_assign__TypeCtorInfo_44_44 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 527 "type_assign.m"
                {
#line 527 "type_assign.m"
                  check_hlds__type_assign__V_42_42 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_44_44, check_hlds__type_assign__AssignPieces_29, check_hlds__type_assign__TailPieces_30);
                }
#line 527 "type_assign.m"
                {
#line 527 "type_assign.m"
                  check_hlds__type_assign__Pieces_7 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_44_44, check_hlds__type_assign__PrefixPieces_26, check_hlds__type_assign__V_42_42);
                }
#line 521 "type_assign.m"
              }
#line 528 "type_assign.m"
            else
#line 529 "type_assign.m"
              {
#line 529 "type_assign.m"
                /* direct tailcall eliminated */
#line 529 "type_assign.m"
                {
#line 529 "type_assign.m"
                  MR_Word check_hlds__type_assign__HeadVar__1__tmp_copy_1 = check_hlds__type_assign__Vars_18;

#line 529 "type_assign.m"
                  check_hlds__type_assign__HeadVar__1_1 = check_hlds__type_assign__HeadVar__1__tmp_copy_1;
#line 529 "type_assign.m"
                }
#line 529 "type_assign.m"
                continue;
#line 529 "type_assign.m"
              }
#line 513 "type_assign.m"
          }
#line 504 "type_assign.m"
        return check_hlds__type_assign__Pieces_7;
#line 504 "type_assign.m"
      }
#line 504 "type_assign.m"
      break;
#line 504 "type_assign.m"
    }
#line 501 "type_assign.m"
}

#line 465 "type_assign.m"
static MR_Word MR_CALL 
check_hlds__type_assign__type_assign_to_pieces_3_f_0(
#line 465 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeAssign_5,
#line 465 "type_assign.m"
  MR_Word check_hlds__type_assign__MaybeSeq_6,
#line 465 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_7)
#line 465 "type_assign.m"
{
#line 468 "type_assign.m"
  {
#line 468 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__Pieces_8;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeCtorInfo_53_53;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__SeqPieces_11;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadTypeParams_12;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__VarTypes_13;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__Constraints_14;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeBindings_15;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeVarSet_16;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__Vars_17;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadPieces_18;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__TypePieces_22;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintPieces_23;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__V_46_46;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__V_47_47;
#line 468 "type_assign.m"
    MR_Word check_hlds__type_assign__V_48_48;
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_60_60;
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_61_61;

#line 477 "type_assign.m"
    if ((check_hlds__type_assign__MaybeSeq_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 479 "type_assign.m"
      check_hlds__type_assign__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 477 "type_assign.m"
    else
#line 470 "type_assign.m"
      {
#line 470 "type_assign.m"
        MR_Integer check_hlds__type_assign__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__MaybeSeq_6, (MR_Integer) 0)));
#line 470 "type_assign.m"
        MR_Word check_hlds__type_assign__SeqPieces0_10;
#line 470 "type_assign.m"
        MR_Word check_hlds__type_assign__V_26_26;
#line 470 "type_assign.m"
        MR_Word check_hlds__type_assign__V_27_27;

#line 471 "type_assign.m"
        {
#line 471 "type_assign.m"
          check_hlds__type_assign__V_27_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "type_assign.m"
          MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_27_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 471 "type_assign.m"
          MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_27_27, 1) = ((MR_Box) (check_hlds__type_assign__N_9));
#line 471 "type_assign.m"
        }
#line 471 "type_assign.m"
        {
#line 471 "type_assign.m"
          check_hlds__type_assign__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_26_26, 0) = ((MR_Box) (check_hlds__type_assign__V_27_27));
#line 471 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_26_26, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[11])));
#line 471 "type_assign.m"
        }
#line 471 "type_assign.m"
        {
#line 471 "type_assign.m"
          check_hlds__type_assign__SeqPieces0_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__SeqPieces0_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__type_assign_scalar_common_1[12])));
#line 471 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__SeqPieces0_10, 1) = ((MR_Box) (check_hlds__type_assign__V_26_26));
#line 471 "type_assign.m"
        }
#line 472 "type_assign.m"
        check_hlds__type_assign__succeeded = (check_hlds__type_assign__N_9 > (MR_Integer) 1);
#line 474 "type_assign.m"
        if (check_hlds__type_assign__succeeded)
#line 473 "type_assign.m"
          {
#line 473 "type_assign.m"
            {
#line 473 "type_assign.m"
              check_hlds__type_assign__SeqPieces_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 473 "type_assign.m"
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__SeqPieces_11, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 473 "type_assign.m"
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__SeqPieces_11, 1) = ((MR_Box) (check_hlds__type_assign__SeqPieces0_10));
#line 473 "type_assign.m"
            }
#line 473 "type_assign.m"
          }
#line 474 "type_assign.m"
        else
#line 475 "type_assign.m"
          check_hlds__type_assign__SeqPieces_11 = check_hlds__type_assign__SeqPieces0_10;
#line 470 "type_assign.m"
      }
#line 209 "type_assign.m"
    check_hlds__type_assign__VarTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 0)));
#line 209 "type_assign.m"
    check_hlds__type_assign__TypeVarSet_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 1)));
#line 209 "type_assign.m"
    check_hlds__type_assign__HeadTypeParams_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 2)));
#line 209 "type_assign.m"
    check_hlds__type_assign__TypeBindings_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 3)));
#line 209 "type_assign.m"
    check_hlds__type_assign__Constraints_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 4)));
#line 209 "type_assign.m"
    check_hlds__type_assign__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 5)));
#line 209 "type_assign.m"
    check_hlds__type_assign__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_5, (MR_Integer) 6)));
#line 486 "type_assign.m"
    {
#line 486 "type_assign.m"
      hlds__vartypes__vartypes_vars_2_p_0(check_hlds__type_assign__VarTypes_13, &check_hlds__type_assign__Vars_17);
    }
#line 490 "type_assign.m"
    if ((check_hlds__type_assign__HeadTypeParams_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "type_assign.m"
      check_hlds__type_assign__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 490 "type_assign.m"
    else
#line 491 "type_assign.m"
      {
#line 491 "type_assign.m"
        MR_String check_hlds__type_assign__VarsStr_21;
#line 491 "type_assign.m"
        MR_Word check_hlds__type_assign__V_37_37;
#line 491 "type_assign.m"
        MR_String check_hlds__type_assign__V_38_38;
#line 491 "type_assign.m"
        MR_String check_hlds__type_assign__V_40_40;

#line 492 "type_assign.m"
        {
#line 492 "type_assign.m"
          check_hlds__type_assign__VarsStr_21 = parse_tree__mercury_to_mercury__mercury_vars_to_string_3_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__type_assign__TypeVarSet_16, (MR_Integer) 1, check_hlds__type_assign__HeadTypeParams_12);
        }
#line 493 "type_assign.m"
        {
#line 493 "type_assign.m"
          check_hlds__type_assign__V_40_40 = mercury__string__f_43_43_2_f_0(check_hlds__type_assign__VarsStr_21, (MR_String) "]");
        }
#line 493 "type_assign.m"
        {
#line 493 "type_assign.m"
          check_hlds__type_assign__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) "some [", check_hlds__type_assign__V_40_40);
        }
#line 493 "type_assign.m"
        {
#line 493 "type_assign.m"
          check_hlds__type_assign__V_37_37 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "type_assign.m"
          MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_37_37, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 493 "type_assign.m"
          MR_hl_field(MR_mktag(3), check_hlds__type_assign__V_37_37, 1) = ((MR_Box) (check_hlds__type_assign__V_38_38));
#line 493 "type_assign.m"
        }
#line 493 "type_assign.m"
        {
#line 493 "type_assign.m"
          check_hlds__type_assign__HeadPieces_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 493 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadPieces_18, 0) = ((MR_Box) (check_hlds__type_assign__V_37_37));
#line 493 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadPieces_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[9])));
#line 493 "type_assign.m"
        }
#line 491 "type_assign.m"
      }
#line 495 "type_assign.m"
    {
#line 495 "type_assign.m"
      check_hlds__type_assign__TypePieces_22 = check_hlds__type_assign__type_assign_types_to_pieces_6_f_0(check_hlds__type_assign__Vars_17, check_hlds__type_assign__VarSet_7, check_hlds__type_assign__VarTypes_13, check_hlds__type_assign__TypeBindings_15, check_hlds__type_assign__TypeVarSet_16, (MR_Integer) 0);
    }
#line 497 "type_assign.m"
    {
#line 497 "type_assign.m"
      check_hlds__type_assign__ConstraintPieces_23 = check_hlds__type_assign__type_assign_hlds_constraints_to_pieces_3_f_0(check_hlds__type_assign__Constraints_14, check_hlds__type_assign__TypeBindings_15, check_hlds__type_assign__TypeVarSet_16);
    }
#line 3061 "check_hlds.type_assign.c"
    check_hlds__type_assign__TypeCtorInfo_53_53 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 499 "type_assign.m"
    {
#line 499 "type_assign.m"
      check_hlds__type_assign__V_48_48 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_53_53, check_hlds__type_assign__ConstraintPieces_23, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__type_assign_scalar_common_1[9]));
    }
#line 499 "type_assign.m"
    {
#line 499 "type_assign.m"
      check_hlds__type_assign__V_47_47 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_53_53, check_hlds__type_assign__TypePieces_22, check_hlds__type_assign__V_48_48);
    }
#line 499 "type_assign.m"
    {
#line 499 "type_assign.m"
      check_hlds__type_assign__V_46_46 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_53_53, check_hlds__type_assign__HeadPieces_18, check_hlds__type_assign__V_47_47);
    }
#line 499 "type_assign.m"
    {
#line 499 "type_assign.m"
      check_hlds__type_assign__Pieces_8 = mercury__list__f_43_43_2_f_0(check_hlds__type_assign__TypeCtorInfo_53_53, check_hlds__type_assign__SeqPieces_11, check_hlds__type_assign__V_46_46);
    }
#line 468 "type_assign.m"
    return check_hlds__type_assign__Pieces_8;
#line 468 "type_assign.m"
  }
#line 465 "type_assign.m"
}

#line 393 "type_assign.m"
static MR_bool MR_CALL 
check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(
#line 393 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_4,
#line 393 "type_assign.m"
  MR_Word check_hlds__type_assign__TVar0_5,
#line 393 "type_assign.m"
  MR_Word * check_hlds__type_assign__TVar_6)
#line 393 "type_assign.m"
{
#line 399 "type_assign.m"
  while (MR_TRUE)
#line 399 "type_assign.m"
    {
#line 399 "type_assign.m"
      /* tailcall optimized into a loop */
#line 399 "type_assign.m"
      {
#line 399 "type_assign.m"
        MR_bool check_hlds__type_assign__succeeded;
#line 399 "type_assign.m"
        MR_Word check_hlds__type_assign__Type_7;
#line 396 "type_assign.m"
        MR_Box check_hlds__type_assign__conv0_Type_7;

#line 396 "type_assign.m"
        {
#line 396 "type_assign.m"
          check_hlds__type_assign__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_assign__TypeBindings_4, ((MR_Box) (check_hlds__type_assign__TVar0_5)), &check_hlds__type_assign__conv0_Type_7);
        }
#line 396 "type_assign.m"
        if (check_hlds__type_assign__succeeded)
#line 396 "type_assign.m"
          {
#line 396 "type_assign.m"
            check_hlds__type_assign__Type_7 = ((MR_Word) check_hlds__type_assign__conv0_Type_7);
#line 396 "type_assign.m"
            check_hlds__type_assign__succeeded = MR_TRUE;
#line 396 "type_assign.m"
          }
#line 399 "type_assign.m"
        if (check_hlds__type_assign__succeeded)
#line 397 "type_assign.m"
          {
#line 397 "type_assign.m"
            MR_Word check_hlds__type_assign__TVar1_8;
#line 397 "type_assign.m"
            MR_Word check_hlds__type_assign__V_9_9;

#line 397 "type_assign.m"
            check_hlds__type_assign__succeeded = ((MR_tag((MR_Word) check_hlds__type_assign__Type_7)) == (MR_mktag((MR_Integer) 0)));
#line 397 "type_assign.m"
            if (check_hlds__type_assign__succeeded)
#line 397 "type_assign.m"
              {
#line 397 "type_assign.m"
                check_hlds__type_assign__TVar1_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Type_7, (MR_Integer) 0)));
#line 397 "type_assign.m"
                check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__Type_7, (MR_Integer) 1)));
#line 398 "type_assign.m"
                /* direct tailcall eliminated */
#line 398 "type_assign.m"
                {
#line 398 "type_assign.m"
                  MR_Word check_hlds__type_assign__TVar0__tmp_copy_5 = check_hlds__type_assign__TVar1_8;

#line 398 "type_assign.m"
                  check_hlds__type_assign__TVar0_5 = check_hlds__type_assign__TVar0__tmp_copy_5;
#line 398 "type_assign.m"
                }
#line 398 "type_assign.m"
                continue;
#line 397 "type_assign.m"
              }
#line 397 "type_assign.m"
          }
#line 399 "type_assign.m"
        else
#line 400 "type_assign.m"
          {
#line 400 "type_assign.m"
            *check_hlds__type_assign__TVar_6 = check_hlds__type_assign__TVar0_5;
#line 400 "type_assign.m"
            check_hlds__type_assign__succeeded = MR_TRUE;
#line 400 "type_assign.m"
          }
#line 399 "type_assign.m"
        return check_hlds__type_assign__succeeded;
#line 399 "type_assign.m"
      }
#line 399 "type_assign.m"
      break;
#line 399 "type_assign.m"
    }
#line 393 "type_assign.m"
}

#line 379 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(
#line 379 "type_assign.m"
  MR_Word check_hlds__type_assign__OldHeadTypeParams_6,
#line 379 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeBindings_7,
#line 379 "type_assign.m"
  MR_Word check_hlds__type_assign__TVar_8,
#line 379 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_Renaming_0_11,
#line 379 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_Renaming_12)
#line 379 "type_assign.m"
{
#line 389 "type_assign.m"
  {
#line 389 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 389 "type_assign.m"
    MR_Word check_hlds__type_assign__NewTVar_10;
#line 385 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeInfo_16_16;
#line 386 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeInfo_14_14;

#line 384 "type_assign.m"
    {
#line 384 "type_assign.m"
      check_hlds__type_assign__succeeded = check_hlds__type_assign__tvar_maps_to_tvar_3_p_0(check_hlds__type_assign__TypeBindings_7, check_hlds__type_assign__TVar_8, &check_hlds__type_assign__NewTVar_10);
    }
#line 384 "type_assign.m"
    if (check_hlds__type_assign__succeeded)
#line 384 "type_assign.m"
      {
#line 3223 "check_hlds.type_assign.c"
        check_hlds__type_assign__TypeInfo_16_16 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
#line 385 "type_assign.m"
        {
#line 385 "type_assign.m"
          check_hlds__type_assign__succeeded = mercury__builtin__unify_2_p_0(check_hlds__type_assign__TypeInfo_16_16, ((MR_Box) (check_hlds__type_assign__NewTVar_10)), ((MR_Box) (check_hlds__type_assign__TVar_8)));
        }
#line 385 "type_assign.m"
        check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 384 "type_assign.m"
        if (check_hlds__type_assign__succeeded)
#line 384 "type_assign.m"
          {
#line 3236 "check_hlds.type_assign.c"
            check_hlds__type_assign__TypeInfo_14_14 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
#line 386 "type_assign.m"
            {
#line 386 "type_assign.m"
              check_hlds__type_assign__succeeded = mercury__list__member_2_p_0(check_hlds__type_assign__TypeInfo_14_14, ((MR_Box) (check_hlds__type_assign__NewTVar_10)), check_hlds__type_assign__OldHeadTypeParams_6);
            }
#line 386 "type_assign.m"
            check_hlds__type_assign__succeeded = !(check_hlds__type_assign__succeeded);
#line 384 "type_assign.m"
          }
#line 384 "type_assign.m"
      }
#line 389 "type_assign.m"
    if (check_hlds__type_assign__succeeded)
#line 388 "type_assign.m"
      {
#line 388 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeInfo_15_15 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];

#line 388 "type_assign.m"
        {
#line 388 "type_assign.m"
          mercury__map__det_insert_4_p_0(check_hlds__type_assign__TypeInfo_15_15, check_hlds__type_assign__TypeInfo_15_15, ((MR_Box) (check_hlds__type_assign__TVar_8)), ((MR_Box) (check_hlds__type_assign__NewTVar_10)), check_hlds__type_assign__STATE_VARIABLE_Renaming_0_11, check_hlds__type_assign__STATE_VARIABLE_Renaming_12);
#line 388 "type_assign.m"
          return;
        }
#line 388 "type_assign.m"
      }
#line 389 "type_assign.m"
    else
#line 389 "type_assign.m"
      *check_hlds__type_assign__STATE_VARIABLE_Renaming_12 = check_hlds__type_assign__STATE_VARIABLE_Renaming_0_11;
#line 389 "type_assign.m"
  }
#line 379 "type_assign.m"
}

#line 359 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__expand_types_5_p_0(
#line 359 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeSubst_6,
#line 359 "type_assign.m"
  MR_Word check_hlds__type_assign__Type0_7,
#line 359 "type_assign.m"
  MR_Word * check_hlds__type_assign__Type_8,
#line 359 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_0_11,
#line 359 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_12)
#line 359 "type_assign.m"
{
#line 362 "type_assign.m"
  {
#line 362 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 362 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeVars_10;

#line 363 "type_assign.m"
    {
#line 363 "type_assign.m"
      parse_tree__prog_type_subst__apply_rec_subst_to_type_3_p_0(check_hlds__type_assign__TypeSubst_6, check_hlds__type_assign__Type0_7, check_hlds__type_assign__Type_8);
    }
#line 364 "type_assign.m"
    {
#line 364 "type_assign.m"
      parse_tree__prog_type__type_vars_2_p_0(*check_hlds__type_assign__Type_8, &check_hlds__type_assign__TypeVars_10);
    }
#line 365 "type_assign.m"
    {
#line 365 "type_assign.m"
      mercury__set__insert_list_3_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], check_hlds__type_assign__TypeVars_10, check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_0_11, check_hlds__type_assign__STATE_VARIABLE_TypeVarsSet_12);
#line 365 "type_assign.m"
      return;
    }
#line 362 "type_assign.m"
  }
#line 359 "type_assign.m"
}

#line 177 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_checkpoint_6_p_0(
#line 177 "type_assign.m"
  MR_String check_hlds__type_assign__Msg_7,
#line 177 "type_assign.m"
  MR_Word check_hlds__type_assign__ModuleInfo_8,
#line 177 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_9,
#line 177 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeAssignSet_10)
#line 177 "type_assign.m"
{
#line 585 "type_assign.m"
  {
#line 585 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 585 "type_assign.m"
    MR_Word check_hlds__type_assign__Globals_12;
#line 585 "type_assign.m"
    MR_Word check_hlds__type_assign__DoCheckPoint_13;

#line 586 "type_assign.m"
    {
#line 586 "type_assign.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_assign__ModuleInfo_8, &check_hlds__type_assign__Globals_12);
    }
#line 587 "type_assign.m"
    {
#line 587 "type_assign.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__type_assign__Globals_12, (MR_Integer) 59, &check_hlds__type_assign__DoCheckPoint_13);
    }
#line 591 "type_assign.m"
#line 591 "type_assign.m"
    switch (check_hlds__type_assign__DoCheckPoint_13) {
#line 591 "type_assign.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 591 "type_assign.m"
      case (MR_Integer) 0:
#line 592 "type_assign.m"
        {
#line 592 "type_assign.m"
        }
#line 591 "type_assign.m"
        break;
#line 591 "type_assign.m"
      case (MR_Integer) 1:
#line 598 "type_assign.m"
        {
#line 598 "type_assign.m"
          MR_Word check_hlds__type_assign__Globals_25;
#line 598 "type_assign.m"
          MR_Word check_hlds__type_assign__Statistics_26;
#line 3371 "check_hlds.type_assign.c"
          MR_Word check_hlds__type_assign__TypeAssign_27;
#line 3373 "check_hlds.type_assign.c"
          MR_Word check_hlds__type_assign__V_28_28;

#line 599 "type_assign.m"
          {
#line 599 "type_assign.m"
            mercury__io__write_string_3_p_0((MR_String) "At ");
          }
#line 600 "type_assign.m"
          {
#line 600 "type_assign.m"
            mercury__io__write_string_3_p_0(check_hlds__type_assign__Msg_7);
          }
#line 601 "type_assign.m"
          {
#line 601 "type_assign.m"
            mercury__io__write_string_3_p_0((MR_String) ": ");
          }
#line 602 "type_assign.m"
          {
#line 602 "type_assign.m"
            hlds__hlds_module__module_info_get_globals_2_p_0(check_hlds__type_assign__ModuleInfo_8, &check_hlds__type_assign__Globals_25);
          }
#line 603 "type_assign.m"
          {
#line 603 "type_assign.m"
            libs__globals__lookup_bool_option_3_p_0(check_hlds__type_assign__Globals_25, (MR_Integer) 56, &check_hlds__type_assign__Statistics_26);
          }
#line 604 "type_assign.m"
          {
#line 604 "type_assign.m"
            libs__file_util__maybe_report_stats_3_p_0(check_hlds__type_assign__Statistics_26);
          }
#line 605 "type_assign.m"
          {
#line 605 "type_assign.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 607 "type_assign.m"
          check_hlds__type_assign__succeeded = (check_hlds__type_assign__Statistics_26 == (MR_Integer) 1);
#line 607 "type_assign.m"
          if (check_hlds__type_assign__succeeded)
#line 607 "type_assign.m"
            {
#line 608 "type_assign.m"
              check_hlds__type_assign__succeeded = ((MR_tag((MR_Word) check_hlds__type_assign__TypeAssignSet_10)) == (MR_mktag((MR_Integer) 1)));
#line 608 "type_assign.m"
              if (check_hlds__type_assign__succeeded)
#line 608 "type_assign.m"
                {
#line 608 "type_assign.m"
                  check_hlds__type_assign__TypeAssign_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__TypeAssignSet_10, (MR_Integer) 0)));
#line 608 "type_assign.m"
                  check_hlds__type_assign__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__TypeAssignSet_10, (MR_Integer) 1)));
#line 608 "type_assign.m"
                }
#line 607 "type_assign.m"
            }
#line 3431 "check_hlds.type_assign.c"
          if (check_hlds__type_assign__succeeded)
#line 3433 "check_hlds.type_assign.c"
            {
#line 3435 "check_hlds.type_assign.c"
              MR_Word check_hlds__type_assign__VarTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 0)));
#line 3437 "check_hlds.type_assign.c"
              MR_Integer check_hlds__type_assign__VarTypesCount_30;
#line 3439 "check_hlds.type_assign.c"
              MR_Word check_hlds__type_assign__TypeBindings_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 3)));
#line 3441 "check_hlds.type_assign.c"
              MR_Integer check_hlds__type_assign__TypeBindingsCount_32;
#line 3443 "check_hlds.type_assign.c"
              MR_String check_hlds__type_assign__V_58_58;
#line 3445 "check_hlds.type_assign.c"
              MR_Word check_hlds__type_assign__V_64_64;
#line 3447 "check_hlds.type_assign.c"
              MR_String check_hlds__type_assign__V_69_69;
#line 205 "type_assign.m"
              MR_Word check_hlds__type_assign__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 1)));
#line 205 "type_assign.m"
              MR_Word check_hlds__type_assign__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 2)));
#line 205 "type_assign.m"
              MR_Word check_hlds__type_assign__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 4)));
#line 205 "type_assign.m"
              MR_Word check_hlds__type_assign__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 5)));
#line 205 "type_assign.m"
              MR_Word check_hlds__type_assign__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_27, (MR_Integer) 6)));

#line 611 "type_assign.m"
              {
#line 611 "type_assign.m"
                hlds__vartypes__vartypes_count_2_p_0(check_hlds__type_assign__VarTypes_29, &check_hlds__type_assign__VarTypesCount_30);
              }
#line 612 "type_assign.m"
              {
#line 612 "type_assign.m"
                mercury__io__write_string_3_p_0((MR_String) "\t\140var -> type\' map: count = ");
              }
#line 3470 "check_hlds.type_assign.c"
              check_hlds__type_assign__V_64_64 = (MR_Word) &check_hlds__type_assign_scalar_common_5[0];
#line 613 "type_assign.m"
              {
#line 613 "type_assign.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__type_assign__V_64_64, check_hlds__type_assign__VarTypesCount_30, &check_hlds__type_assign__V_58_58);
              }
#line 613 "type_assign.m"
              {
#line 613 "type_assign.m"
                mercury__io__write_string_3_p_0(check_hlds__type_assign__V_58_58);
              }
#line 612 "type_assign.m"
              {
#line 612 "type_assign.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 615 "type_assign.m"
              {
#line 615 "type_assign.m"
                mercury__map__count_2_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_assign__TypeBindings_31, &check_hlds__type_assign__TypeBindingsCount_32);
              }
#line 616 "type_assign.m"
              {
#line 616 "type_assign.m"
                mercury__io__write_string_3_p_0((MR_String) "\t\140type var -> type\' map: count = ");
              }
#line 617 "type_assign.m"
              {
#line 617 "type_assign.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(check_hlds__type_assign__V_64_64, check_hlds__type_assign__TypeBindingsCount_32, &check_hlds__type_assign__V_69_69);
              }
#line 617 "type_assign.m"
              {
#line 617 "type_assign.m"
                mercury__io__write_string_3_p_0(check_hlds__type_assign__V_69_69);
              }
#line 616 "type_assign.m"
              {
#line 616 "type_assign.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 628 "type_assign.m"
              {
#line 628 "type_assign.m"
                mercury__io__write_string_3_p_0((MR_String) "\t");
              }
#line 629 "type_assign.m"
              {
#line 629 "type_assign.m"
                check_hlds__type_assign__write_type_assign_4_p_0(check_hlds__type_assign__TypeAssign_27, check_hlds__type_assign__VarSet_9);
              }
#line 630 "type_assign.m"
              {
#line 630 "type_assign.m"
                mercury__io__write_string_3_p_0((MR_String) "\n");
              }
#line 631 "type_assign.m"
              {
#line 631 "type_assign.m"
                check_hlds__type_assign__write_type_assign_set_4_p_0(check_hlds__type_assign__V_28_28, check_hlds__type_assign__VarSet_9);
#line 631 "type_assign.m"
                return;
              }
#line 3534 "check_hlds.type_assign.c"
            }
#line 3536 "check_hlds.type_assign.c"
          else
#line 621 "type_assign.m"
            {
#line 621 "type_assign.m"
              check_hlds__type_assign__write_type_assign_set_4_p_0(check_hlds__type_assign__TypeAssignSet_10, check_hlds__type_assign__VarSet_9);
#line 621 "type_assign.m"
              return;
            }
#line 598 "type_assign.m"
        }
#line 591 "type_assign.m"
        break;
#line 591 "type_assign.m"
    }
#line 585 "type_assign.m"
  }
#line 177 "type_assign.m"
}

#line 174 "type_assign.m"
MR_Word MR_CALL 
check_hlds__type_assign__args_type_assign_set_to_pieces_3_f_0(
#line 174 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 174 "type_assign.m"
  MR_Word check_hlds__type_assign__MaybeSeq_2,
#line 174 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_3)
#line 174 "type_assign.m"
{
#line 453 "type_assign.m"
  {
#line 453 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 453 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__4_4;

#line 453 "type_assign.m"
    if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 453 "type_assign.m"
      check_hlds__type_assign__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 453 "type_assign.m"
    else
#line 455 "type_assign.m"
      {
#line 455 "type_assign.m"
        MR_Word check_hlds__type_assign__ArgTypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 455 "type_assign.m"
        MR_Word check_hlds__type_assign__ArgTypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
#line 455 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeAssign_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_7, (MR_Integer) 0)));
#line 455 "type_assign.m"
        MR_Word check_hlds__type_assign__V_15_15;
#line 455 "type_assign.m"
        MR_Word check_hlds__type_assign__V_16_16;
#line 455 "type_assign.m"
        MR_Word check_hlds__type_assign__V_17_17;
#line 458 "type_assign.m"
        MR_Word check_hlds__type_assign___ArgTypes_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_7, (MR_Integer) 1)));
#line 458 "type_assign.m"
        MR_Word check_hlds__type_assign___Cnstrs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_7, (MR_Integer) 2)));

#line 459 "type_assign.m"
        {
#line 459 "type_assign.m"
          check_hlds__type_assign__V_15_15 = check_hlds__type_assign__type_assign_to_pieces_3_f_0(check_hlds__type_assign__TypeAssign_12, check_hlds__type_assign__MaybeSeq_2, check_hlds__type_assign__VarSet_3);
        }
#line 576 "type_assign.m"
        if ((check_hlds__type_assign__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "type_assign.m"
          check_hlds__type_assign__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "type_assign.m"
        else
#line 577 "type_assign.m"
          {
#line 577 "type_assign.m"
            MR_Integer check_hlds__type_assign__N_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__MaybeSeq_2, (MR_Integer) 0)));
#line 577 "type_assign.m"
            MR_Integer check_hlds__type_assign__V_20_20 = (check_hlds__type_assign__N_19 + (MR_Integer) 1);

#line 577 "type_assign.m"
            {
#line 577 "type_assign.m"
              check_hlds__type_assign__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "type_assign.m"
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_17_17, 0) = ((MR_Box) (check_hlds__type_assign__V_20_20));
#line 577 "type_assign.m"
            }
#line 577 "type_assign.m"
          }
#line 460 "type_assign.m"
        {
#line 460 "type_assign.m"
          check_hlds__type_assign__V_16_16 = check_hlds__type_assign__args_type_assign_set_to_pieces_3_f_0(check_hlds__type_assign__ArgTypeAssigns_8, check_hlds__type_assign__V_17_17, check_hlds__type_assign__VarSet_3);
        }
#line 459 "type_assign.m"
        {
#line 459 "type_assign.m"
          check_hlds__type_assign__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__type_assign__V_15_15, check_hlds__type_assign__V_16_16);
        }
#line 455 "type_assign.m"
      }
#line 453 "type_assign.m"
    return check_hlds__type_assign__HeadVar__4_4;
#line 453 "type_assign.m"
  }
#line 174 "type_assign.m"
}

#line 171 "type_assign.m"
MR_Word MR_CALL 
check_hlds__type_assign__type_assign_set_to_pieces_3_f_0(
#line 171 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1,
#line 171 "type_assign.m"
  MR_Word check_hlds__type_assign__MaybeSeq_2,
#line 171 "type_assign.m"
  MR_Word check_hlds__type_assign__VarSet_3)
#line 171 "type_assign.m"
{
#line 448 "type_assign.m"
  {
#line 448 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 448 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__4_4;

#line 448 "type_assign.m"
    if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 448 "type_assign.m"
      check_hlds__type_assign__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 448 "type_assign.m"
    else
#line 449 "type_assign.m"
      {
#line 449 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeAssign_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 449 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeAssigns_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
#line 449 "type_assign.m"
        MR_Word check_hlds__type_assign__V_11_11;
#line 449 "type_assign.m"
        MR_Word check_hlds__type_assign__V_12_12;
#line 449 "type_assign.m"
        MR_Word check_hlds__type_assign__V_13_13;

#line 450 "type_assign.m"
        {
#line 450 "type_assign.m"
          check_hlds__type_assign__V_11_11 = check_hlds__type_assign__type_assign_to_pieces_3_f_0(check_hlds__type_assign__TypeAssign_7, check_hlds__type_assign__MaybeSeq_2, check_hlds__type_assign__VarSet_3);
        }
#line 576 "type_assign.m"
        if ((check_hlds__type_assign__MaybeSeq_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 576 "type_assign.m"
          check_hlds__type_assign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 576 "type_assign.m"
        else
#line 577 "type_assign.m"
          {
#line 577 "type_assign.m"
            MR_Integer check_hlds__type_assign__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__MaybeSeq_2, (MR_Integer) 0)));
#line 577 "type_assign.m"
            MR_Integer check_hlds__type_assign__V_16_16 = (check_hlds__type_assign__N_15 + (MR_Integer) 1);

#line 577 "type_assign.m"
            {
#line 577 "type_assign.m"
              check_hlds__type_assign__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 577 "type_assign.m"
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_13_13, 0) = ((MR_Box) (check_hlds__type_assign__V_16_16));
#line 577 "type_assign.m"
            }
#line 577 "type_assign.m"
          }
#line 451 "type_assign.m"
        {
#line 451 "type_assign.m"
          check_hlds__type_assign__V_12_12 = check_hlds__type_assign__type_assign_set_to_pieces_3_f_0(check_hlds__type_assign__TypeAssigns_8, check_hlds__type_assign__V_13_13, check_hlds__type_assign__VarSet_3);
        }
#line 450 "type_assign.m"
        {
#line 450 "type_assign.m"
          check_hlds__type_assign__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0, check_hlds__type_assign__V_11_11, check_hlds__type_assign__V_12_12);
        }
#line 449 "type_assign.m"
      }
#line 448 "type_assign.m"
    return check_hlds__type_assign__HeadVar__4_4;
#line 448 "type_assign.m"
  }
#line 171 "type_assign.m"
}

#line 163 "type_assign.m"
MR_Word MR_CALL 
check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(
#line 163 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1)
#line 163 "type_assign.m"
{
#line 419 "type_assign.m"
  {
#line 419 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 419 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__2_2;

#line 419 "type_assign.m"
    if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "type_assign.m"
      check_hlds__type_assign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "type_assign.m"
    else
#line 421 "type_assign.m"
      {
#line 421 "type_assign.m"
        MR_Word check_hlds__type_assign__ArgTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 421 "type_assign.m"
        MR_Word check_hlds__type_assign__ArgTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
#line 421 "type_assign.m"
        MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_3, (MR_Integer) 0)));
#line 421 "type_assign.m"
        MR_Word check_hlds__type_assign__Args_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_3, (MR_Integer) 1)));
#line 421 "type_assign.m"
        MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgTypeAssign_3, (MR_Integer) 2)));

#line 428 "type_assign.m"
        if ((check_hlds__type_assign__Args_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 424 "type_assign.m"
          {
#line 424 "type_assign.m"
            MR_Word check_hlds__type_assign__V_14_14;
#line 424 "type_assign.m"
            MR_Word check_hlds__type_assign__V_15_15;
#line 424 "type_assign.m"
            MR_Word check_hlds__type_assign__OldConstraints_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 4)));
#line 424 "type_assign.m"
            MR_Word check_hlds__type_assign__Bindings_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 3)));
#line 424 "type_assign.m"
            MR_Word check_hlds__type_assign__Constraints_23;
#line 424 "type_assign.m"
            MR_Word check_hlds__type_assign__NewConstraints_24;
#line 213 "type_assign.m"
            MR_Word check_hlds__type_assign__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 0)));
#line 213 "type_assign.m"
            MR_Word check_hlds__type_assign__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 1)));
#line 213 "type_assign.m"
            MR_Word check_hlds__type_assign__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 2)));
#line 213 "type_assign.m"
            MR_Word check_hlds__type_assign__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 5)));
#line 213 "type_assign.m"
            MR_Word check_hlds__type_assign__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 6)));
#line 228 "type_assign.m"
            MR_Word check_hlds__type_assign__V_46_46;
#line 228 "type_assign.m"
            MR_Word check_hlds__type_assign__V_47_47;
#line 228 "type_assign.m"
            MR_Word check_hlds__type_assign__V_48_48;
#line 228 "type_assign.m"
            MR_Word check_hlds__type_assign__V_49_49;
#line 228 "type_assign.m"
            MR_Word check_hlds__type_assign__V_51_51;
#line 228 "type_assign.m"
            MR_Word check_hlds__type_assign__V_52_52;
#line 228 "type_assign.m"
            MR_Word check_hlds__type_assign__V_50_50;

#line 441 "type_assign.m"
            {
#line 441 "type_assign.m"
              check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__type_assign__Bindings_22, check_hlds__type_assign__V_8_8, &check_hlds__type_assign__Constraints_23);
            }
#line 442 "type_assign.m"
            {
#line 442 "type_assign.m"
              hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__type_assign__Constraints_23, check_hlds__type_assign__OldConstraints_21, &check_hlds__type_assign__NewConstraints_24);
            }
#line 228 "type_assign.m"
            check_hlds__type_assign__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 0)));
#line 228 "type_assign.m"
            check_hlds__type_assign__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 1)));
#line 228 "type_assign.m"
            check_hlds__type_assign__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 2)));
#line 228 "type_assign.m"
            check_hlds__type_assign__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 3)));
#line 228 "type_assign.m"
            check_hlds__type_assign__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 4)));
#line 228 "type_assign.m"
            check_hlds__type_assign__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 5)));
#line 228 "type_assign.m"
            check_hlds__type_assign__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_6_6, (MR_Integer) 6)));
#line 228 "type_assign.m"
            {
#line 228 "type_assign.m"
              check_hlds__type_assign__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 228 "type_assign.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 0) = ((MR_Box) (check_hlds__type_assign__V_46_46));
#line 228 "type_assign.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 1) = ((MR_Box) (check_hlds__type_assign__V_47_47));
#line 228 "type_assign.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 2) = ((MR_Box) (check_hlds__type_assign__V_48_48));
#line 228 "type_assign.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 3) = ((MR_Box) (check_hlds__type_assign__V_49_49));
#line 228 "type_assign.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 4) = ((MR_Box) (check_hlds__type_assign__NewConstraints_24));
#line 228 "type_assign.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 5) = ((MR_Box) (check_hlds__type_assign__V_51_51));
#line 228 "type_assign.m"
              MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 6) = ((MR_Box) (check_hlds__type_assign__V_52_52));
#line 228 "type_assign.m"
            }
#line 427 "type_assign.m"
            {
#line 427 "type_assign.m"
              check_hlds__type_assign__V_15_15 = check_hlds__type_assign__convert_args_type_assign_set_check_empty_args_1_f_0(check_hlds__type_assign__ArgTypeAssigns_4);
            }
#line 426 "type_assign.m"
            {
#line 426 "type_assign.m"
              check_hlds__type_assign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 426 "type_assign.m"
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__type_assign__V_14_14));
#line 426 "type_assign.m"
              MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__type_assign__V_15_15));
#line 426 "type_assign.m"
            }
#line 424 "type_assign.m"
          }
#line 428 "type_assign.m"
        else
#line 429 "type_assign.m"
          {
#line 432 "type_assign.m"
            {
#line 432 "type_assign.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_assign", (MR_String) "function \140check_hlds.type_assign.convert_args_type_assign_set_check_empty_args\'/1", (MR_String) "Args != []");
            }
#line 429 "type_assign.m"
          }
#line 421 "type_assign.m"
      }
#line 419 "type_assign.m"
    return check_hlds__type_assign__HeadVar__2_2;
#line 419 "type_assign.m"
  }
#line 163 "type_assign.m"
}

#line 158 "type_assign.m"
MR_Word MR_CALL 
check_hlds__type_assign__convert_args_type_assign_set_1_f_0(
#line 158 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadVar__1_1)
#line 158 "type_assign.m"
{
#line 414 "type_assign.m"
  {
#line 414 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 414 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__2_2;

#line 414 "type_assign.m"
    if ((check_hlds__type_assign__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 414 "type_assign.m"
      check_hlds__type_assign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 414 "type_assign.m"
    else
#line 415 "type_assign.m"
      {
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__ArgsTypeAssign_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 0)));
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__ArgsTypeAssigns_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__1_1, (MR_Integer) 1)));
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__V_5_5;
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__V_6_6;
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeAssign0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__Constraints0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 2)));
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__OldConstraints_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 4)));
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__Bindings_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 3)));
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__Constraints_14;
#line 415 "type_assign.m"
        MR_Word check_hlds__type_assign__NewConstraints_15;
#line 438 "type_assign.m"
        MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 213 "type_assign.m"
        MR_Word check_hlds__type_assign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 0)));
#line 213 "type_assign.m"
        MR_Word check_hlds__type_assign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 1)));
#line 213 "type_assign.m"
        MR_Word check_hlds__type_assign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 2)));
#line 213 "type_assign.m"
        MR_Word check_hlds__type_assign__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 5)));
#line 213 "type_assign.m"
        MR_Word check_hlds__type_assign__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 6)));
#line 228 "type_assign.m"
        MR_Word check_hlds__type_assign__V_37_37;
#line 228 "type_assign.m"
        MR_Word check_hlds__type_assign__V_38_38;
#line 228 "type_assign.m"
        MR_Word check_hlds__type_assign__V_39_39;
#line 228 "type_assign.m"
        MR_Word check_hlds__type_assign__V_40_40;
#line 228 "type_assign.m"
        MR_Word check_hlds__type_assign__V_42_42;
#line 228 "type_assign.m"
        MR_Word check_hlds__type_assign__V_43_43;
#line 228 "type_assign.m"
        MR_Word check_hlds__type_assign__V_41_41;

#line 441 "type_assign.m"
        {
#line 441 "type_assign.m"
          check_hlds__type_util__apply_rec_subst_to_constraints_3_p_0(check_hlds__type_assign__Bindings_13, check_hlds__type_assign__Constraints0_11, &check_hlds__type_assign__Constraints_14);
        }
#line 442 "type_assign.m"
        {
#line 442 "type_assign.m"
          hlds__hlds_data__merge_hlds_constraints_3_p_0(check_hlds__type_assign__Constraints_14, check_hlds__type_assign__OldConstraints_12, &check_hlds__type_assign__NewConstraints_15);
        }
#line 228 "type_assign.m"
        check_hlds__type_assign__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 0)));
#line 228 "type_assign.m"
        check_hlds__type_assign__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 1)));
#line 228 "type_assign.m"
        check_hlds__type_assign__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 2)));
#line 228 "type_assign.m"
        check_hlds__type_assign__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 3)));
#line 228 "type_assign.m"
        check_hlds__type_assign__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 4)));
#line 228 "type_assign.m"
        check_hlds__type_assign__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 5)));
#line 228 "type_assign.m"
        check_hlds__type_assign__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_9, (MR_Integer) 6)));
#line 228 "type_assign.m"
        {
#line 228 "type_assign.m"
          check_hlds__type_assign__V_5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 228 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 0) = ((MR_Box) (check_hlds__type_assign__V_37_37));
#line 228 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 1) = ((MR_Box) (check_hlds__type_assign__V_38_38));
#line 228 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 2) = ((MR_Box) (check_hlds__type_assign__V_39_39));
#line 228 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 3) = ((MR_Box) (check_hlds__type_assign__V_40_40));
#line 228 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 4) = ((MR_Box) (check_hlds__type_assign__NewConstraints_15));
#line 228 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 5) = ((MR_Box) (check_hlds__type_assign__V_42_42));
#line 228 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_5_5, 6) = ((MR_Box) (check_hlds__type_assign__V_43_43));
#line 228 "type_assign.m"
        }
#line 417 "type_assign.m"
        {
#line 417 "type_assign.m"
          check_hlds__type_assign__V_6_6 = check_hlds__type_assign__convert_args_type_assign_set_1_f_0(check_hlds__type_assign__ArgsTypeAssigns_4);
        }
#line 416 "type_assign.m"
        {
#line 416 "type_assign.m"
          check_hlds__type_assign__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 416 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, 0) = ((MR_Box) (check_hlds__type_assign__V_5_5));
#line 416 "type_assign.m"
          MR_hl_field(MR_mktag(1), check_hlds__type_assign__HeadVar__2_2, 1) = ((MR_Box) (check_hlds__type_assign__V_6_6));
#line 416 "type_assign.m"
        }
#line 415 "type_assign.m"
      }
#line 414 "type_assign.m"
    return check_hlds__type_assign__HeadVar__2_2;
#line 414 "type_assign.m"
  }
#line 158 "type_assign.m"
}

#line 147 "type_assign.m"
MR_Word MR_CALL 
check_hlds__type_assign__get_callee_constraints_1_f_0(
#line 147 "type_assign.m"
  MR_Word check_hlds__type_assign__ArgsTypeAssign_3)
#line 147 "type_assign.m"
{
#line 409 "type_assign.m"
  {
#line 409 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 409 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 2)));
#line 409 "type_assign.m"
    MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 409 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 1)));

#line 409 "type_assign.m"
    return check_hlds__type_assign__HeadVar__2_2;
#line 409 "type_assign.m"
  }
#line 147 "type_assign.m"
}

#line 146 "type_assign.m"
MR_Word MR_CALL 
check_hlds__type_assign__get_callee_arg_types_1_f_0(
#line 146 "type_assign.m"
  MR_Word check_hlds__type_assign__ArgsTypeAssign_3)
#line 146 "type_assign.m"
{
#line 407 "type_assign.m"
  {
#line 407 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 407 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 407 "type_assign.m"
    MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 407 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 2)));

#line 407 "type_assign.m"
    return check_hlds__type_assign__HeadVar__2_2;
#line 407 "type_assign.m"
  }
#line 146 "type_assign.m"
}

#line 145 "type_assign.m"
MR_Word MR_CALL 
check_hlds__type_assign__get_caller_arg_assign_1_f_0(
#line 145 "type_assign.m"
  MR_Word check_hlds__type_assign__ArgsTypeAssign_3)
#line 145 "type_assign.m"
{
#line 405 "type_assign.m"
  {
#line 405 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 405 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 0)));
#line 405 "type_assign.m"
    MR_Word check_hlds__type_assign__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 1)));
#line 405 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__ArgsTypeAssign_3, (MR_Integer) 2)));

#line 405 "type_assign.m"
    return check_hlds__type_assign__HeadVar__2_2;
#line 405 "type_assign.m"
  }
#line 145 "type_assign.m"
}

#line 376 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4(
#line 376 "type_assign.m"
  MR_Box check_hlds__type_assign__closure_arg,
#line 376 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 376 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 376 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_3)
#line 376 "type_assign.m"
{
#line 376 "type_assign.m"
  {
#line 376 "type_assign.m"
    MR_Box check_hlds__type_assign__closure = check_hlds__type_assign__closure_arg;
#line 376 "type_assign.m"
    MR_Word check_hlds__type_assign__conv7_STATE_VARIABLE_Renaming_12;

#line 376 "type_assign.m"
    {
#line 376 "type_assign.m"
      check_hlds__type_assign__get_existq_tvar_renaming_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2), &check_hlds__type_assign__conv7_STATE_VARIABLE_Renaming_12);
    }
#line 376 "type_assign.m"
    *check_hlds__type_assign__wrapper_arg_3 = ((MR_Box) (check_hlds__type_assign__conv7_STATE_VARIABLE_Renaming_12));
#line 376 "type_assign.m"
  }
#line 376 "type_assign.m"
}

#line 295 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_3(
#line 295 "type_assign.m"
  MR_Box check_hlds__type_assign__closure_arg,
#line 295 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 295 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 295 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_3)
#line 295 "type_assign.m"
{
#line 295 "type_assign.m"
  {
#line 295 "type_assign.m"
    MR_Box check_hlds__type_assign__closure = check_hlds__type_assign__closure_arg;
#line 295 "type_assign.m"
    MR_Word check_hlds__type_assign__conv5_HeadVar__3_3;

#line 295 "type_assign.m"
    {
#line 295 "type_assign.m"
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2), &check_hlds__type_assign__conv5_HeadVar__3_3);
    }
#line 295 "type_assign.m"
    *check_hlds__type_assign__wrapper_arg_3 = ((MR_Box) (check_hlds__type_assign__conv5_HeadVar__3_3));
#line 295 "type_assign.m"
  }
#line 295 "type_assign.m"
}

#line 293 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_2(
#line 293 "type_assign.m"
  MR_Box check_hlds__type_assign__closure_arg,
#line 293 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 293 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_2,
#line 293 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_3)
#line 293 "type_assign.m"
{
#line 293 "type_assign.m"
  {
#line 293 "type_assign.m"
    MR_Box check_hlds__type_assign__closure = check_hlds__type_assign__closure_arg;
#line 293 "type_assign.m"
    MR_Word check_hlds__type_assign__conv3_HeadVar__3_3;

#line 293 "type_assign.m"
    {
#line 293 "type_assign.m"
      hlds__hlds_data__update_constraint_map_3_p_0(((MR_Word) check_hlds__type_assign__wrapper_arg_1), ((MR_Word) check_hlds__type_assign__wrapper_arg_2), &check_hlds__type_assign__conv3_HeadVar__3_3);
    }
#line 293 "type_assign.m"
    *check_hlds__type_assign__wrapper_arg_3 = ((MR_Box) (check_hlds__type_assign__conv3_HeadVar__3_3));
#line 293 "type_assign.m"
  }
#line 293 "type_assign.m"
}

#line 274 "type_assign.m"
static void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1(
#line 274 "type_assign.m"
  MR_Box check_hlds__type_assign__closure_arg,
#line 274 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_1,
#line 274 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_2,
#line 274 "type_assign.m"
  MR_Box check_hlds__type_assign__wrapper_arg_3,
#line 274 "type_assign.m"
  MR_Box * check_hlds__type_assign__wrapper_arg_4)
#line 274 "type_assign.m"
{
#line 274 "type_assign.m"
  {
#line 274 "type_assign.m"
    MR_Box check_hlds__type_assign__closure = check_hlds__type_assign__closure_arg;
#line 274 "type_assign.m"
    MR_Word check_hlds__type_assign__conv1_Type_8;
#line 274 "type_assign.m"
    MR_Word check_hlds__type_assign__conv0_STATE_VARIABLE_TypeVarsSet_12;

#line 274 "type_assign.m"
    {
#line 274 "type_assign.m"
      check_hlds__type_assign__expand_types_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__type_assign__wrapper_arg_1), &check_hlds__type_assign__conv1_Type_8, ((MR_Word) check_hlds__type_assign__wrapper_arg_3), &check_hlds__type_assign__conv0_STATE_VARIABLE_TypeVarsSet_12);
    }
#line 274 "type_assign.m"
    *check_hlds__type_assign__wrapper_arg_2 = ((MR_Box) (check_hlds__type_assign__conv1_Type_8));
#line 274 "type_assign.m"
    *check_hlds__type_assign__wrapper_arg_4 = ((MR_Box) (check_hlds__type_assign__conv0_STATE_VARIABLE_TypeVarsSet_12));
#line 274 "type_assign.m"
  }
#line 274 "type_assign.m"
}

#line 122 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_get_final_info_12_p_0(
#line 122 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeAssignSet_13,
#line 122 "type_assign.m"
  MR_Word check_hlds__type_assign__OldHeadTypeParams_14,
#line 122 "type_assign.m"
  MR_Word check_hlds__type_assign__OldExistQVars_15,
#line 122 "type_assign.m"
  MR_Word check_hlds__type_assign__OldExplicitVarTypes_16,
#line 122 "type_assign.m"
  MR_Word * check_hlds__type_assign__NewTypeVarSet_17,
#line 122 "type_assign.m"
  MR_Word * check_hlds__type_assign__NewHeadTypeParams_18,
#line 122 "type_assign.m"
  MR_Word * check_hlds__type_assign__NewVarTypes_19,
#line 122 "type_assign.m"
  MR_Word * check_hlds__type_assign__NewTypeConstraints_20,
#line 122 "type_assign.m"
  MR_Word * check_hlds__type_assign__NewConstraintProofMap_21,
#line 122 "type_assign.m"
  MR_Word * check_hlds__type_assign__NewConstraintMap_22,
#line 122 "type_assign.m"
  MR_Word * check_hlds__type_assign__TSubst_23,
#line 122 "type_assign.m"
  MR_Word * check_hlds__type_assign__ExistTypeRenaming_24)
#line 122 "type_assign.m"
{
#line 254 "type_assign.m"
  {
#line 254 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeCtorInfo_76_76;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeInfo_77_77;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeInfo_81_81;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeInfo_14_92;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeAssign_25;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__VarTypes0_27;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__OldTypeVarSet_28;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadTypeParams_29;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeBindings_30;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__HLDSTypeConstraints_31;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintProofMap0_32;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintMap0_33;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__VarTypes1_34;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintProofMap_35;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintMap1_36;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeVars1_38;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__HLDSUnivConstraints_40;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__HLDSExistConstraints_41;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintMap2_44;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintMap_45;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ExplicitTypes_46;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ExplicitTypeVars0_47;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ExistQVarsToBeRenamed_48;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__ExistQVarsToRemain_49;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeVars2_50;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeVars_51;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeConstraints_52;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__V_60_60;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__V_61_61;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__V_62_62;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__V_63_63;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__V_87_87;
#line 254 "type_assign.m"
    MR_Word check_hlds__type_assign__V_88_88;
#line 291 "type_assign.m"
    MR_Word check_hlds__type_assign__V_42_42;
#line 291 "type_assign.m"
    MR_Word check_hlds__type_assign__V_43_43;
#line 293 "type_assign.m"
    MR_Box check_hlds__type_assign__conv4_ConstraintMap2_44;
#line 295 "type_assign.m"
    MR_Box check_hlds__type_assign__conv6_ConstraintMap_45;
#line 376 "type_assign.m"
    MR_Box check_hlds__type_assign__conv8_ExistTypeRenaming_24;

#line 258 "type_assign.m"
    if ((check_hlds__type_assign__TypeAssignSet_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "type_assign.m"
      {
#line 260 "type_assign.m"
        {
#line 260 "type_assign.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.type_assign", (MR_String) "predicate \140check_hlds.type_assign.type_assign_set_get_final_info\'/12", (MR_String) "TypeAssignSet = []");
#line 260 "type_assign.m"
          return;
        }
#line 259 "type_assign.m"
      }
#line 258 "type_assign.m"
    else
#line 256 "type_assign.m"
      {
#line 256 "type_assign.m"
        MR_Word check_hlds__type_assign__V_26_26;

#line 256 "type_assign.m"
        check_hlds__type_assign__TypeAssign_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__TypeAssignSet_13, (MR_Integer) 0)));
#line 256 "type_assign.m"
        check_hlds__type_assign__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__type_assign__TypeAssignSet_13, (MR_Integer) 1)));
#line 256 "type_assign.m"
      }
#line 263 "type_assign.m"
    check_hlds__type_assign__VarTypes0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 0)));
#line 263 "type_assign.m"
    check_hlds__type_assign__OldTypeVarSet_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 1)));
#line 263 "type_assign.m"
    check_hlds__type_assign__HeadTypeParams_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 2)));
#line 263 "type_assign.m"
    check_hlds__type_assign__TypeBindings_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 3)));
#line 263 "type_assign.m"
    check_hlds__type_assign__HLDSTypeConstraints_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 4)));
#line 263 "type_assign.m"
    check_hlds__type_assign__ConstraintProofMap0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 5)));
#line 263 "type_assign.m"
    check_hlds__type_assign__ConstraintMap0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign_25, (MR_Integer) 6)));
#line 267 "type_assign.m"
    {
#line 267 "type_assign.m"
      check_hlds__type_assign__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__type_assign__TypeBindings_30);
    }
#line 273 "type_assign.m"
    if (check_hlds__type_assign__succeeded)
#line 268 "type_assign.m"
      {
#line 268 "type_assign.m"
        MR_Word check_hlds__type_assign__Types1_37;

#line 268 "type_assign.m"
        check_hlds__type_assign__VarTypes1_34 = check_hlds__type_assign__VarTypes0_27;
#line 269 "type_assign.m"
        check_hlds__type_assign__ConstraintProofMap_35 = check_hlds__type_assign__ConstraintProofMap0_32;
#line 270 "type_assign.m"
        check_hlds__type_assign__ConstraintMap1_36 = check_hlds__type_assign__ConstraintMap0_33;
#line 271 "type_assign.m"
        {
#line 271 "type_assign.m"
          hlds__vartypes__vartypes_types_2_p_0(check_hlds__type_assign__VarTypes1_34, &check_hlds__type_assign__Types1_37);
        }
#line 272 "type_assign.m"
        {
#line 272 "type_assign.m"
          parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__type_assign__Types1_37, &check_hlds__type_assign__TypeVars1_38);
        }
#line 268 "type_assign.m"
      }
#line 273 "type_assign.m"
    else
#line 275 "type_assign.m"
      {
#line 275 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeInfo_71_71;
#line 275 "type_assign.m"
        MR_Word check_hlds__type_assign__TypeVarsSet1_39;
#line 275 "type_assign.m"
        MR_Word check_hlds__type_assign__V_56_56;
#line 275 "type_assign.m"
        MR_Word check_hlds__type_assign__V_57_57;
#line 274 "type_assign.m"
        MR_Box check_hlds__type_assign__conv2_TypeVarsSet1_39;

#line 274 "type_assign.m"
        {
#line 274 "type_assign.m"
          check_hlds__type_assign__V_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 274 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_56_56, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[0]));
#line 274 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_56_56, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_1));
#line 274 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_56_56, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 274 "type_assign.m"
          MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_56_56, 3) = ((MR_Box) (check_hlds__type_assign__TypeBindings_30));
#line 274 "type_assign.m"
        }
#line 4440 "check_hlds.type_assign.c"
        check_hlds__type_assign__TypeInfo_71_71 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
#line 275 "type_assign.m"
        {
#line 275 "type_assign.m"
          check_hlds__type_assign__V_57_57 = mercury__set__init_0_f_0(check_hlds__type_assign__TypeInfo_71_71);
        }
#line 274 "type_assign.m"
        {
#line 274 "type_assign.m"
          hlds__vartypes__transform_foldl_var_types_5_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[1], check_hlds__type_assign__V_56_56, check_hlds__type_assign__VarTypes0_27, &check_hlds__type_assign__VarTypes1_34, ((MR_Box) (check_hlds__type_assign__V_57_57)), &check_hlds__type_assign__conv2_TypeVarsSet1_39);
        }
#line 274 "type_assign.m"
        check_hlds__type_assign__TypeVarsSet1_39 = ((MR_Word) check_hlds__type_assign__conv2_TypeVarsSet1_39);
#line 276 "type_assign.m"
        {
#line 276 "type_assign.m"
          mercury__set__to_sorted_list_2_p_0(check_hlds__type_assign__TypeInfo_71_71, check_hlds__type_assign__TypeVarsSet1_39, &check_hlds__type_assign__TypeVars1_38);
        }
#line 277 "type_assign.m"
        {
#line 277 "type_assign.m"
          check_hlds__type_util__apply_rec_subst_to_constraint_proof_map_3_p_0(check_hlds__type_assign__TypeBindings_30, check_hlds__type_assign__ConstraintProofMap0_32, &check_hlds__type_assign__ConstraintProofMap_35);
        }
#line 279 "type_assign.m"
        {
#line 279 "type_assign.m"
          check_hlds__type_util__apply_rec_subst_to_constraint_map_3_p_0(check_hlds__type_assign__TypeBindings_30, check_hlds__type_assign__ConstraintMap0_33, &check_hlds__type_assign__ConstraintMap1_36);
        }
#line 275 "type_assign.m"
      }
#line 291 "type_assign.m"
    check_hlds__type_assign__HLDSUnivConstraints_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HLDSTypeConstraints_31, (MR_Integer) 0)));
#line 291 "type_assign.m"
    check_hlds__type_assign__HLDSExistConstraints_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HLDSTypeConstraints_31, (MR_Integer) 1)));
#line 291 "type_assign.m"
    check_hlds__type_assign__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HLDSTypeConstraints_31, (MR_Integer) 2)));
#line 291 "type_assign.m"
    check_hlds__type_assign__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__HLDSTypeConstraints_31, (MR_Integer) 3)));
#line 4479 "check_hlds.type_assign.c"
    check_hlds__type_assign__TypeCtorInfo_76_76 = (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_hlds_constraint_0;
#line 4481 "check_hlds.type_assign.c"
    check_hlds__type_assign__TypeInfo_77_77 = (MR_Word) &check_hlds__type_assign_scalar_common_2[0];
#line 293 "type_assign.m"
    {
#line 293 "type_assign.m"
      mercury__list__foldl_4_p_0(check_hlds__type_assign__TypeCtorInfo_76_76, check_hlds__type_assign__TypeInfo_77_77, (MR_Word) &check_hlds__type_assign_scalar_common_2[5], check_hlds__type_assign__HLDSUnivConstraints_40, ((MR_Box) (check_hlds__type_assign__ConstraintMap1_36)), &check_hlds__type_assign__conv4_ConstraintMap2_44);
    }
#line 293 "type_assign.m"
    check_hlds__type_assign__ConstraintMap2_44 = ((MR_Word) check_hlds__type_assign__conv4_ConstraintMap2_44);
#line 295 "type_assign.m"
    {
#line 295 "type_assign.m"
      mercury__list__foldl_4_p_0(check_hlds__type_assign__TypeCtorInfo_76_76, check_hlds__type_assign__TypeInfo_77_77, (MR_Word) &check_hlds__type_assign_scalar_common_2[6], check_hlds__type_assign__HLDSExistConstraints_41, ((MR_Box) (check_hlds__type_assign__ConstraintMap2_44)), &check_hlds__type_assign__conv6_ConstraintMap_45);
    }
#line 295 "type_assign.m"
    check_hlds__type_assign__ConstraintMap_45 = ((MR_Word) check_hlds__type_assign__conv6_ConstraintMap_45);
#line 376 "type_assign.m"
    {
#line 376 "type_assign.m"
      check_hlds__type_assign__V_87_87 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 376 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 0) = ((MR_Box) (&check_hlds__type_assign_scalar_common_3[1]));
#line 376 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 1) = ((MR_Box) (check_hlds__type_assign__type_assign_set_get_final_info_12_p_0_4));
#line 376 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 376 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 3) = ((MR_Box) (check_hlds__type_assign__OldHeadTypeParams_14));
#line 376 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_87_87, 4) = ((MR_Box) (check_hlds__type_assign__TypeBindings_30));
#line 376 "type_assign.m"
    }
#line 4513 "check_hlds.type_assign.c"
    check_hlds__type_assign__TypeInfo_14_92 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
#line 377 "type_assign.m"
    {
#line 377 "type_assign.m"
      check_hlds__type_assign__V_88_88 = mercury__map__init_0_f_0(check_hlds__type_assign__TypeInfo_14_92, check_hlds__type_assign__TypeInfo_14_92);
    }
#line 376 "type_assign.m"
    {
#line 376 "type_assign.m"
      mercury__list__foldl_4_p_0(check_hlds__type_assign__TypeInfo_14_92, (MR_Word) &check_hlds__type_assign_scalar_common_2[1], check_hlds__type_assign__V_87_87, check_hlds__type_assign__OldExistQVars_15, ((MR_Box) (check_hlds__type_assign__V_88_88)), &check_hlds__type_assign__conv8_ExistTypeRenaming_24);
    }
#line 376 "type_assign.m"
    *check_hlds__type_assign__ExistTypeRenaming_24 = ((MR_Word) check_hlds__type_assign__conv8_ExistTypeRenaming_24);
#line 323 "type_assign.m"
    {
#line 323 "type_assign.m"
      hlds__vartypes__vartypes_types_2_p_0(check_hlds__type_assign__OldExplicitVarTypes_16, &check_hlds__type_assign__ExplicitTypes_46);
    }
#line 324 "type_assign.m"
    {
#line 324 "type_assign.m"
      parse_tree__prog_type__type_vars_list_2_p_0(check_hlds__type_assign__ExplicitTypes_46, &check_hlds__type_assign__ExplicitTypeVars0_47);
    }
#line 4537 "check_hlds.type_assign.c"
    check_hlds__type_assign__TypeInfo_81_81 = (MR_Word) &check_hlds__type_assign_scalar_common_1[0];
#line 325 "type_assign.m"
    {
#line 325 "type_assign.m"
      mercury__map__keys_2_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__TypeInfo_81_81, *check_hlds__type_assign__ExistTypeRenaming_24, &check_hlds__type_assign__ExistQVarsToBeRenamed_48);
    }
#line 326 "type_assign.m"
    {
#line 326 "type_assign.m"
      mercury__list__delete_elems_3_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__OldExistQVars_15, check_hlds__type_assign__ExistQVarsToBeRenamed_48, &check_hlds__type_assign__ExistQVarsToRemain_49);
    }
#line 329 "type_assign.m"
    {
#line 329 "type_assign.m"
      check_hlds__type_assign__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "type_assign.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_63_63, 0) = ((MR_Box) (check_hlds__type_assign__ExplicitTypeVars0_47));
#line 329 "type_assign.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_63_63, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 329 "type_assign.m"
    }
#line 329 "type_assign.m"
    {
#line 329 "type_assign.m"
      check_hlds__type_assign__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 329 "type_assign.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_62_62, 0) = ((MR_Box) (check_hlds__type_assign__TypeVars1_38));
#line 329 "type_assign.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_62_62, 1) = ((MR_Box) (check_hlds__type_assign__V_63_63));
#line 329 "type_assign.m"
    }
#line 328 "type_assign.m"
    {
#line 328 "type_assign.m"
      check_hlds__type_assign__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "type_assign.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_61_61, 0) = ((MR_Box) (check_hlds__type_assign__HeadTypeParams_29));
#line 328 "type_assign.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_61_61, 1) = ((MR_Box) (check_hlds__type_assign__V_62_62));
#line 328 "type_assign.m"
    }
#line 328 "type_assign.m"
    {
#line 328 "type_assign.m"
      check_hlds__type_assign__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 328 "type_assign.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_60_60, 0) = ((MR_Box) (check_hlds__type_assign__ExistQVarsToRemain_49));
#line 328 "type_assign.m"
      MR_hl_field(MR_mktag(1), check_hlds__type_assign__V_60_60, 1) = ((MR_Box) (check_hlds__type_assign__V_61_61));
#line 328 "type_assign.m"
    }
#line 328 "type_assign.m"
    {
#line 328 "type_assign.m"
      mercury__list__condense_2_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__V_60_60, &check_hlds__type_assign__TypeVars2_50);
    }
#line 330 "type_assign.m"
    {
#line 330 "type_assign.m"
      mercury__list__sort_and_remove_dups_2_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__TypeVars2_50, &check_hlds__type_assign__TypeVars_51);
    }
#line 333 "type_assign.m"
    {
#line 333 "type_assign.m"
      mercury__varset__squash_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0, check_hlds__type_assign__OldTypeVarSet_28, check_hlds__type_assign__TypeVars_51, check_hlds__type_assign__NewTypeVarSet_17, check_hlds__type_assign__TSubst_23);
    }
#line 337 "type_assign.m"
    {
#line 337 "type_assign.m"
      hlds__hlds_data__retrieve_prog_constraints_2_p_0(check_hlds__type_assign__HLDSTypeConstraints_31, &check_hlds__type_assign__TypeConstraints_52);
    }
#line 338 "type_assign.m"
    {
#line 338 "type_assign.m"
      check_hlds__type_assign__succeeded = mercury__map__is_empty_1_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__TypeInfo_81_81, *check_hlds__type_assign__TSubst_23);
    }
#line 344 "type_assign.m"
    if (check_hlds__type_assign__succeeded)
#line 339 "type_assign.m"
      {
#line 339 "type_assign.m"
        *check_hlds__type_assign__NewVarTypes_19 = check_hlds__type_assign__VarTypes1_34;
#line 340 "type_assign.m"
        *check_hlds__type_assign__NewHeadTypeParams_18 = check_hlds__type_assign__HeadTypeParams_29;
#line 341 "type_assign.m"
        *check_hlds__type_assign__NewTypeConstraints_20 = check_hlds__type_assign__TypeConstraints_52;
#line 342 "type_assign.m"
        *check_hlds__type_assign__NewConstraintProofMap_21 = check_hlds__type_assign__ConstraintProofMap_35;
#line 343 "type_assign.m"
        *check_hlds__type_assign__NewConstraintMap_22 = check_hlds__type_assign__ConstraintMap_45;
#line 339 "type_assign.m"
      }
#line 344 "type_assign.m"
    else
#line 345 "type_assign.m"
      {
#line 345 "type_assign.m"
        {
#line 345 "type_assign.m"
          hlds__vartypes__apply_variable_renaming_to_vartypes_3_p_0(*check_hlds__type_assign__TSubst_23, check_hlds__type_assign__VarTypes1_34, check_hlds__type_assign__NewVarTypes_19);
        }
#line 346 "type_assign.m"
        {
#line 346 "type_assign.m"
          mercury__map__apply_to_list_3_p_0(check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__TypeInfo_81_81, check_hlds__type_assign__HeadTypeParams_29, *check_hlds__type_assign__TSubst_23, check_hlds__type_assign__NewHeadTypeParams_18);
        }
#line 347 "type_assign.m"
        {
#line 347 "type_assign.m"
          parse_tree__prog_type_subst__apply_variable_renaming_to_prog_constraints_3_p_0(*check_hlds__type_assign__TSubst_23, check_hlds__type_assign__TypeConstraints_52, check_hlds__type_assign__NewTypeConstraints_20);
        }
#line 349 "type_assign.m"
        {
#line 349 "type_assign.m"
          check_hlds__type_util__apply_variable_renaming_to_constraint_proof_map_3_p_0(*check_hlds__type_assign__TSubst_23, check_hlds__type_assign__ConstraintProofMap_35, check_hlds__type_assign__NewConstraintProofMap_21);
        }
#line 351 "type_assign.m"
        {
#line 351 "type_assign.m"
          check_hlds__type_util__apply_variable_renaming_to_constraint_map_3_p_0(*check_hlds__type_assign__TSubst_23, check_hlds__type_assign__ConstraintMap_45, check_hlds__type_assign__NewConstraintMap_22);
#line 351 "type_assign.m"
          return;
        }
#line 345 "type_assign.m"
      }
#line 254 "type_assign.m"
  }
#line 122 "type_assign.m"
}

#line 100 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_init_5_p_0(
#line 100 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeVarSet_6,
#line 100 "type_assign.m"
  MR_Word check_hlds__type_assign__VarTypes_7,
#line 100 "type_assign.m"
  MR_Word check_hlds__type_assign__HeadTypeParams_8,
#line 100 "type_assign.m"
  MR_Word check_hlds__type_assign__Constraints_9,
#line 100 "type_assign.m"
  MR_Word * check_hlds__type_assign__TypeAssignSet_10)
#line 100 "type_assign.m"
{
#line 243 "type_assign.m"
  {
#line 243 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 243 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeCtorInfo_18_18;
#line 243 "type_assign.m"
    MR_Word check_hlds__type_assign__TypeBindings_11;
#line 243 "type_assign.m"
    MR_Word check_hlds__type_assign__ProofMap_12;
#line 243 "type_assign.m"
    MR_Word check_hlds__type_assign__ConstraintMap_13;
#line 243 "type_assign.m"
    MR_Word check_hlds__type_assign__V_14_14;

#line 244 "type_assign.m"
    {
#line 244 "type_assign.m"
      mercury__map__init_1_p_0((MR_Word) &check_hlds__type_assign_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, &check_hlds__type_assign__TypeBindings_11);
    }
#line 4703 "check_hlds.type_assign.c"
    check_hlds__type_assign__TypeCtorInfo_18_18 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_constraint_0;
#line 245 "type_assign.m"
    {
#line 245 "type_assign.m"
      mercury__map__init_1_p_0(check_hlds__type_assign__TypeCtorInfo_18_18, (MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_proof_0, &check_hlds__type_assign__ProofMap_12);
    }
#line 246 "type_assign.m"
    {
#line 246 "type_assign.m"
      mercury__map__init_1_p_0((MR_Word) &hlds__hlds_data__hlds__hlds_data__type_ctor_info_constraint_id_0, check_hlds__type_assign__TypeCtorInfo_18_18, &check_hlds__type_assign__ConstraintMap_13);
    }
#line 247 "type_assign.m"
    {
#line 247 "type_assign.m"
      check_hlds__type_assign__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 247 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 0) = ((MR_Box) (check_hlds__type_assign__VarTypes_7));
#line 247 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 1) = ((MR_Box) (check_hlds__type_assign__TypeVarSet_6));
#line 247 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 2) = ((MR_Box) (check_hlds__type_assign__HeadTypeParams_8));
#line 247 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 3) = ((MR_Box) (check_hlds__type_assign__TypeBindings_11));
#line 247 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 4) = ((MR_Box) (check_hlds__type_assign__Constraints_9));
#line 247 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 5) = ((MR_Box) (check_hlds__type_assign__ProofMap_12));
#line 247 "type_assign.m"
      MR_hl_field(MR_mktag(0), check_hlds__type_assign__V_14_14, 6) = ((MR_Box) (check_hlds__type_assign__ConstraintMap_13));
#line 247 "type_assign.m"
    }
#line 248 "type_assign.m"
    {
#line 248 "type_assign.m"
      MR_Word base;
#line 248 "type_assign.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 248 "type_assign.m"
      *check_hlds__type_assign__TypeAssignSet_10 = base;
#line 248 "type_assign.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__type_assign__V_14_14));
#line 248 "type_assign.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 248 "type_assign.m"
    }
#line 243 "type_assign.m"
  }
#line 100 "type_assign.m"
}

#line 89 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_reduce_results_7_p_0(
#line 89 "type_assign.m"
  MR_Word check_hlds__type_assign__TVarSet_8,
#line 89 "type_assign.m"
  MR_Word check_hlds__type_assign__Bindings_9,
#line 89 "type_assign.m"
  MR_Word check_hlds__type_assign__Constraints_10,
#line 89 "type_assign.m"
  MR_Word check_hlds__type_assign__ProofMap_11,
#line 89 "type_assign.m"
  MR_Word check_hlds__type_assign__ConstraintMap_12,
#line 89 "type_assign.m"
  MR_Word check_hlds__type_assign__TypeAssign0_13,
#line 89 "type_assign.m"
  MR_Word * check_hlds__type_assign__TypeAssign_14)
#line 89 "type_assign.m"
{
#line 235 "type_assign.m"
  {
#line 235 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 235 "type_assign.m"
    MR_Word check_hlds__type_assign__VarTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 0)));
#line 235 "type_assign.m"
    MR_Word check_hlds__type_assign__HeadTypeParams_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 2)));
#line 236 "type_assign.m"
    MR_Word check_hlds__type_assign__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 1)));
#line 236 "type_assign.m"
    MR_Word check_hlds__type_assign__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 3)));
#line 236 "type_assign.m"
    MR_Word check_hlds__type_assign__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 4)));
#line 236 "type_assign.m"
    MR_Word check_hlds__type_assign__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 5)));
#line 236 "type_assign.m"
    MR_Word check_hlds__type_assign__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TypeAssign0_13, (MR_Integer) 6)));

#line 237 "type_assign.m"
    {
#line 237 "type_assign.m"
      MR_Word base;
#line 237 "type_assign.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 237 "type_assign.m"
      *check_hlds__type_assign__TypeAssign_14 = base;
#line 237 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__VarTypes_15));
#line 237 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__TVarSet_8));
#line 237 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__HeadTypeParams_17));
#line 237 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__Bindings_9));
#line 237 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__Constraints_10));
#line 237 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__ProofMap_11));
#line 237 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__ConstraintMap_12));
#line 237 "type_assign.m"
    }
#line 235 "type_assign.m"
  }
#line 89 "type_assign.m"
}

#line 86 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_map_3_p_0(
#line 86 "type_assign.m"
  MR_Word check_hlds__type_assign__X_4,
#line 86 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
#line 86 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
#line 86 "type_assign.m"
{
#line 232 "type_assign.m"
  {
#line 232 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 232 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 232 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 232 "type_assign.m"
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 232 "type_assign.m"
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 232 "type_assign.m"
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 232 "type_assign.m"
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 232 "type_assign.m"
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));

#line 232 "type_assign.m"
    {
#line 232 "type_assign.m"
      MR_Word base;
#line 232 "type_assign.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 232 "type_assign.m"
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
#line 232 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
#line 232 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
#line 232 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
#line 232 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
#line 232 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
#line 232 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
#line 232 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__X_4));
#line 232 "type_assign.m"
    }
#line 232 "type_assign.m"
  }
#line 86 "type_assign.m"
}

#line 84 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_constraint_proof_map_3_p_0(
#line 84 "type_assign.m"
  MR_Word check_hlds__type_assign__X_4,
#line 84 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
#line 84 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
#line 84 "type_assign.m"
{
#line 230 "type_assign.m"
  {
#line 230 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 230 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 230 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 230 "type_assign.m"
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 230 "type_assign.m"
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 230 "type_assign.m"
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 230 "type_assign.m"
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 230 "type_assign.m"
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));

#line 230 "type_assign.m"
    {
#line 230 "type_assign.m"
      MR_Word base;
#line 230 "type_assign.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 230 "type_assign.m"
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
#line 230 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
#line 230 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
#line 230 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
#line 230 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
#line 230 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
#line 230 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__X_4));
#line 230 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
#line 230 "type_assign.m"
    }
#line 230 "type_assign.m"
  }
#line 84 "type_assign.m"
}

#line 82 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_typeclass_constraints_3_p_0(
#line 82 "type_assign.m"
  MR_Word check_hlds__type_assign__X_4,
#line 82 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
#line 82 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
#line 82 "type_assign.m"
{
#line 228 "type_assign.m"
  {
#line 228 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 228 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 228 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 228 "type_assign.m"
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 228 "type_assign.m"
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 228 "type_assign.m"
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 228 "type_assign.m"
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 228 "type_assign.m"
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));

#line 228 "type_assign.m"
    {
#line 228 "type_assign.m"
      MR_Word base;
#line 228 "type_assign.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 228 "type_assign.m"
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
#line 228 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
#line 228 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
#line 228 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
#line 228 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
#line 228 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__X_4));
#line 228 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
#line 228 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
#line 228 "type_assign.m"
    }
#line 228 "type_assign.m"
  }
#line 82 "type_assign.m"
}

#line 80 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_type_bindings_3_p_0(
#line 80 "type_assign.m"
  MR_Word check_hlds__type_assign__X_4,
#line 80 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
#line 80 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
#line 80 "type_assign.m"
{
#line 226 "type_assign.m"
  {
#line 226 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 226 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 226 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 226 "type_assign.m"
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 226 "type_assign.m"
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 226 "type_assign.m"
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 226 "type_assign.m"
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 226 "type_assign.m"
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));

#line 226 "type_assign.m"
    {
#line 226 "type_assign.m"
      MR_Word base;
#line 226 "type_assign.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 226 "type_assign.m"
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
#line 226 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
#line 226 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
#line 226 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
#line 226 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__X_4));
#line 226 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
#line 226 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
#line 226 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
#line 226 "type_assign.m"
    }
#line 226 "type_assign.m"
  }
#line 80 "type_assign.m"
}

#line 78 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_head_type_params_3_p_0(
#line 78 "type_assign.m"
  MR_Word check_hlds__type_assign__X_4,
#line 78 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
#line 78 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
#line 78 "type_assign.m"
{
#line 224 "type_assign.m"
  {
#line 224 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 224 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 224 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 224 "type_assign.m"
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 224 "type_assign.m"
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 224 "type_assign.m"
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 224 "type_assign.m"
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 224 "type_assign.m"
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));

#line 224 "type_assign.m"
    {
#line 224 "type_assign.m"
      MR_Word base;
#line 224 "type_assign.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 224 "type_assign.m"
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
#line 224 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
#line 224 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
#line 224 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__X_4));
#line 224 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
#line 224 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
#line 224 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
#line 224 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
#line 224 "type_assign.m"
    }
#line 224 "type_assign.m"
  }
#line 78 "type_assign.m"
}

#line 76 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_typevarset_3_p_0(
#line 76 "type_assign.m"
  MR_Word check_hlds__type_assign__X_4,
#line 76 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
#line 76 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
#line 76 "type_assign.m"
{
#line 222 "type_assign.m"
  {
#line 222 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 222 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));
#line 222 "type_assign.m"
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 222 "type_assign.m"
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 222 "type_assign.m"
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 222 "type_assign.m"
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 222 "type_assign.m"
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 222 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));

#line 222 "type_assign.m"
    {
#line 222 "type_assign.m"
      MR_Word base;
#line 222 "type_assign.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 222 "type_assign.m"
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
#line 222 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__V_9_9));
#line 222 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__X_4));
#line 222 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
#line 222 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
#line 222 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
#line 222 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
#line 222 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
#line 222 "type_assign.m"
    }
#line 222 "type_assign.m"
  }
#line 76 "type_assign.m"
}

#line 74 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_set_var_types_3_p_0(
#line 74 "type_assign.m"
  MR_Word check_hlds__type_assign__X_4,
#line 74 "type_assign.m"
  MR_Word check_hlds__type_assign__STATE_VARIABLE_TA_0_6,
#line 74 "type_assign.m"
  MR_Word * check_hlds__type_assign__STATE_VARIABLE_TA_7)
#line 74 "type_assign.m"
{
#line 220 "type_assign.m"
  {
#line 220 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 220 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 1)));
#line 220 "type_assign.m"
    MR_Word check_hlds__type_assign__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 2)));
#line 220 "type_assign.m"
    MR_Word check_hlds__type_assign__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 3)));
#line 220 "type_assign.m"
    MR_Word check_hlds__type_assign__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 4)));
#line 220 "type_assign.m"
    MR_Word check_hlds__type_assign__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 5)));
#line 220 "type_assign.m"
    MR_Word check_hlds__type_assign__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 6)));
#line 220 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__STATE_VARIABLE_TA_0_6, (MR_Integer) 0)));

#line 220 "type_assign.m"
    {
#line 220 "type_assign.m"
      MR_Word base;
#line 220 "type_assign.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 220 "type_assign.m"
      *check_hlds__type_assign__STATE_VARIABLE_TA_7 = base;
#line 220 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__type_assign__X_4));
#line 220 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (check_hlds__type_assign__V_10_10));
#line 220 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (check_hlds__type_assign__V_11_11));
#line 220 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (check_hlds__type_assign__V_12_12));
#line 220 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (check_hlds__type_assign__V_13_13));
#line 220 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (check_hlds__type_assign__V_14_14));
#line 220 "type_assign.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (check_hlds__type_assign__V_15_15));
#line 220 "type_assign.m"
    }
#line 220 "type_assign.m"
  }
#line 74 "type_assign.m"
}

#line 71 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_map_2_p_0(
#line 71 "type_assign.m"
  MR_Word check_hlds__type_assign__TA_3,
#line 71 "type_assign.m"
  MR_Word * check_hlds__type_assign__X_4)
#line 71 "type_assign.m"
{
#line 217 "type_assign.m"
  {
#line 217 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 217 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
#line 217 "type_assign.m"
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
#line 217 "type_assign.m"
    MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
#line 217 "type_assign.m"
    MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
#line 217 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
#line 217 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));

#line 217 "type_assign.m"
    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
#line 217 "type_assign.m"
  }
#line 71 "type_assign.m"
}

#line 69 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_get_constraint_proof_map_2_p_0(
#line 69 "type_assign.m"
  MR_Word check_hlds__type_assign__TA_3,
#line 69 "type_assign.m"
  MR_Word * check_hlds__type_assign__X_4)
#line 69 "type_assign.m"
{
#line 215 "type_assign.m"
  {
#line 215 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 215 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
#line 215 "type_assign.m"
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
#line 215 "type_assign.m"
    MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
#line 215 "type_assign.m"
    MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
#line 215 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
#line 215 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10;

#line 215 "type_assign.m"
    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
#line 215 "type_assign.m"
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
#line 215 "type_assign.m"
  }
#line 69 "type_assign.m"
}

#line 67 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_get_typeclass_constraints_2_p_0(
#line 67 "type_assign.m"
  MR_Word check_hlds__type_assign__TA_3,
#line 67 "type_assign.m"
  MR_Word * check_hlds__type_assign__X_4)
#line 67 "type_assign.m"
{
#line 213 "type_assign.m"
  {
#line 213 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 213 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
#line 213 "type_assign.m"
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
#line 213 "type_assign.m"
    MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
#line 213 "type_assign.m"
    MR_Word check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
#line 213 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9;
#line 213 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10;

#line 213 "type_assign.m"
    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
#line 213 "type_assign.m"
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
#line 213 "type_assign.m"
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
#line 213 "type_assign.m"
  }
#line 67 "type_assign.m"
}

#line 65 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_get_type_bindings_2_p_0(
#line 65 "type_assign.m"
  MR_Word check_hlds__type_assign__TA_3,
#line 65 "type_assign.m"
  MR_Word * check_hlds__type_assign__X_4)
#line 65 "type_assign.m"
{
#line 211 "type_assign.m"
  {
#line 211 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 211 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
#line 211 "type_assign.m"
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
#line 211 "type_assign.m"
    MR_Word check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
#line 211 "type_assign.m"
    MR_Word check_hlds__type_assign__V_8_8;
#line 211 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9;
#line 211 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10;

#line 211 "type_assign.m"
    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
#line 211 "type_assign.m"
    check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
#line 211 "type_assign.m"
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
#line 211 "type_assign.m"
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
#line 211 "type_assign.m"
  }
#line 65 "type_assign.m"
}

#line 63 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_get_head_type_params_2_p_0(
#line 63 "type_assign.m"
  MR_Word check_hlds__type_assign__TA_3,
#line 63 "type_assign.m"
  MR_Word * check_hlds__type_assign__X_4)
#line 63 "type_assign.m"
{
#line 209 "type_assign.m"
  {
#line 209 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_7_7;
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_8_8;
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9;
#line 209 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10;

#line 209 "type_assign.m"
    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
#line 209 "type_assign.m"
    check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
#line 209 "type_assign.m"
    check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
#line 209 "type_assign.m"
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
#line 209 "type_assign.m"
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
#line 209 "type_assign.m"
  }
#line 63 "type_assign.m"
}

#line 61 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_get_typevarset_2_p_0(
#line 61 "type_assign.m"
  MR_Word check_hlds__type_assign__TA_3,
#line 61 "type_assign.m"
  MR_Word * check_hlds__type_assign__X_4)
#line 61 "type_assign.m"
{
#line 207 "type_assign.m"
  {
#line 207 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 207 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
#line 207 "type_assign.m"
    MR_Word check_hlds__type_assign__V_6_6;
#line 207 "type_assign.m"
    MR_Word check_hlds__type_assign__V_7_7;
#line 207 "type_assign.m"
    MR_Word check_hlds__type_assign__V_8_8;
#line 207 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9;
#line 207 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10;

#line 207 "type_assign.m"
    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
#line 207 "type_assign.m"
    check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
#line 207 "type_assign.m"
    check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
#line 207 "type_assign.m"
    check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
#line 207 "type_assign.m"
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
#line 207 "type_assign.m"
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
#line 207 "type_assign.m"
  }
#line 61 "type_assign.m"
}

#line 59 "type_assign.m"
void MR_CALL 
check_hlds__type_assign__type_assign_get_var_types_2_p_0(
#line 59 "type_assign.m"
  MR_Word check_hlds__type_assign__TA_3,
#line 59 "type_assign.m"
  MR_Word * check_hlds__type_assign__X_4)
#line 59 "type_assign.m"
{
#line 205 "type_assign.m"
  {
#line 205 "type_assign.m"
    MR_bool check_hlds__type_assign__succeeded;
#line 205 "type_assign.m"
    MR_Word check_hlds__type_assign__V_5_5;
#line 205 "type_assign.m"
    MR_Word check_hlds__type_assign__V_6_6;
#line 205 "type_assign.m"
    MR_Word check_hlds__type_assign__V_7_7;
#line 205 "type_assign.m"
    MR_Word check_hlds__type_assign__V_8_8;
#line 205 "type_assign.m"
    MR_Word check_hlds__type_assign__V_9_9;
#line 205 "type_assign.m"
    MR_Word check_hlds__type_assign__V_10_10;

#line 205 "type_assign.m"
    *check_hlds__type_assign__X_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 0)));
#line 205 "type_assign.m"
    check_hlds__type_assign__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 1)));
#line 205 "type_assign.m"
    check_hlds__type_assign__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 2)));
#line 205 "type_assign.m"
    check_hlds__type_assign__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 3)));
#line 205 "type_assign.m"
    check_hlds__type_assign__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 4)));
#line 205 "type_assign.m"
    check_hlds__type_assign__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 5)));
#line 205 "type_assign.m"
    check_hlds__type_assign__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__type_assign__TA_3, (MR_Integer) 6)));
#line 205 "type_assign.m"
  }
#line 59 "type_assign.m"
}

void mercury__check_hlds__type_assign__init(void)
{
}

void mercury__check_hlds__type_assign__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_args_type_assign_set_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_0);
	MR_register_type_ctor_info(&check_hlds__type_assign__check_hlds__type_assign__type_ctor_info_type_assign_set_0);
}

void mercury__check_hlds__type_assign__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.type_assign. */
