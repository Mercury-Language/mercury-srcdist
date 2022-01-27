/*
** Automatically generated from `headvar_names.m'
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


/* :- module hlds.headvar_names. */
/* :- implementation. */

/*
INIT mercury__hlds__headvar_names__init
ENDINIT
*/

#include "hlds.headvar_names.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"



#line 135 "headvar_names.m"
struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s {
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
#line 141 "headvar_names.m"
  MR_bool hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded;
#line 143 "headvar_names.m"
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22;
#line 144 "headvar_names.m"
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28;
#line 159 "headvar_names.m"
  jmp_buf hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0;
#line 159 "headvar_names.m"
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_62_62;
#line 159 "headvar_names.m"
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoalInfo_32;
#line 159 "headvar_names.m"
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherNonLocals_33;
#line 159 "headvar_names.m"
  MR_Word hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54;
#line 157 "headvar_names.m"
  MR_Box hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv0_OtherGoal_54;
#line 158 "headvar_names.m"
  MR_Box hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv1_OtherGoal_54;
#line 135 "headvar_names.m"
};


#line 167 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 170 "hlds.headvar_names.c"
static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 173 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 176 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0;

#line 179 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 182 "hlds.headvar_names.c"
static const MR_FA_TypeInfo_Struct2 hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0;

#line 185 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0;

#line 188 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0;

#line 191 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0;

#line 194 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0;

#line 197 "hlds.headvar_names.c"
static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0;

#line 200 "hlds.headvar_names.c"
static const MR_PseudoTypeInfo hlds__headvar_names__hlds__headvar_names__field_types_var_name_info_0_0[2];

#line 203 "hlds.headvar_names.c"
static const MR_ConstString hlds__headvar_names__hlds__headvar_names__field_names_var_name_info_0_0[2];

#line 206 "hlds.headvar_names.c"
static const MR_DuFunctorDesc hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0;

#line 209 "hlds.headvar_names.c"
static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0[1];

#line 212 "hlds.headvar_names.c"
static const MR_DuPtagLayout hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0[1];

#line 215 "hlds.headvar_names.c"
static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_name_ordered_var_name_info_0[1];

#line 218 "hlds.headvar_names.c"
static const MR_Integer hlds__headvar_names__hlds__headvar_names__functor_number_map_var_name_info_0[1];

#line 221 "hlds.headvar_names.c"
static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0_10001(
#line 224 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 226 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_2);

#line 229 "hlds.headvar_names.c"
static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0_10001(
#line 232 "hlds.headvar_names.c"
  MR_Box * hlds__headvar_names__wrapper_arg_1,
#line 234 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 236 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_3);

#line 239 "hlds.headvar_names.c"
static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0_10001(
#line 242 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 244 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_2);

#line 247 "hlds.headvar_names.c"
static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0_10001(
#line 250 "hlds.headvar_names.c"
  MR_Box * hlds__headvar_names__wrapper_arg_1,
#line 252 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 254 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_3);

#line 199 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0(
#line 199 "headvar_names.m"
  MR_Word * hlds__headvar_names__HeadVar__1_1,
#line 199 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__2_2,
#line 199 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__3_3);

#line 199 "headvar_names.m"
static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0(
#line 199 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__1_1,
#line 199 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__2_2);

#line 200 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0(
#line 200 "headvar_names.m"
  MR_Word * hlds__headvar_names__HeadVar__1_1,
#line 200 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__2_2,
#line 200 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__3_3);

#line 200 "headvar_names.m"
static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0(
#line 200 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__1_1,
#line 200 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__2_2);

#line 358 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__group_var_infos_8_p_0(
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__1_1,
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar_2,
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3,
#line 358 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Inconsistents_4,
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_Consistents_0_5,
#line 358 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Consistents_6,
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7,
#line 358 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_8);

#line 301 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(
#line 301 "headvar_names.m"
  MR_Word hlds__headvar_names__VarNameInfos_5,
#line 301 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar_6,
#line 301 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10,
#line 301 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11);

#line 223 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_goal_7_p_0(
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__VarSet_8,
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVars_9,
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__Goal_10,
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23,
#line 223 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24,
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarsInMap_0_25,
#line 223 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarsInMap_26);

#line 220 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1(
#line 220 "headvar_names.m"
  MR_Box hlds__headvar_names__closure_arg,
#line 220 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 220 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 220 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_3,
#line 220 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_4,
#line 220 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_5);

#line 212 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0(
#line 212 "headvar_names.m"
  MR_Word hlds__headvar_names__VarSet_6,
#line 212 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVars_7,
#line 212 "headvar_names.m"
  MR_Word hlds__headvar_names__Clause_8,
#line 212 "headvar_names.m"
  MR_Word * hlds__headvar_names__VarNameInfoMap_9,
#line 212 "headvar_names.m"
  MR_Word * hlds__headvar_names__VarsInMap_10);

#line 159 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(
#line 159 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg);

#line 159 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(
#line 159 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg);

#line 157 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_3(
#line 157 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg);

#line 158 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_4(
#line 158 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg);

#line 159 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(
#line 159 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg);

#line 135 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0(
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__1_1,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVars_2,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__SeenVars0_3,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarSet_0_4,
#line 135 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarSet_5,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_Subst_0_6,
#line 135 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Subst_7,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_RevConj_0_8,
#line 135 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_RevConj_9);

#line 127 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(
#line 127 "headvar_names.m"
  MR_Word hlds__headvar_names__ConsensusMap_5,
#line 127 "headvar_names.m"
  MR_Integer hlds__headvar_names__ProcId_6,
#line 127 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_ProcTable_0_10,
#line 127 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_ProcTable_11);

#line 121 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3(
#line 121 "headvar_names.m"
  MR_Box hlds__headvar_names__closure_arg,
#line 121 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 121 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 121 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_3);

#line 298 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2(
#line 298 "headvar_names.m"
  MR_Box hlds__headvar_names__closure_arg,
#line 298 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 298 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 298 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_3);

#line 100 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1(
#line 100 "headvar_names.m"
  MR_Box hlds__headvar_names__closure_arg,
#line 100 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 100 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_2,
#line 100 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_3);


static /* final */ const MR_Box hlds__headvar_names_scalar_common_1[3][2];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_2[3][3];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_3[1][8];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_4[2][7];

static /* final */ const MR_Box hlds__headvar_names_scalar_common_5[1][10];




static /* final */ const MR_Box hlds__headvar_names_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0])),
    ((MR_Box) (&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__headvar_names_scalar_common_1[0])),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__headvar_names__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box hlds__headvar_names_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0)),
    ((MR_Box) (&hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 588 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 596 "hlds.headvar_names.c"
static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 604 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__hlds__hlds_args__pti_proc_arg_vector_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 612 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0
  }
};

#line 621 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__set_ordlist__pti_set_ordlist_1__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 629 "hlds.headvar_names.c"
static const MR_FA_TypeInfo_Struct2 hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_TypeInfo) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0
  }
};

#line 638 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__list__pti_list_1__plain_tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0
  }
};

#line 646 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__headvar_names__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_prog_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0
  }
};

#line 654 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0__plain_builtin__type_ctor_info_string_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &hlds__headvar_names__term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 663 "hlds.headvar_names.c"
static const MR_FA_PseudoTypeInfo_Struct2 hlds__headvar_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__plain_hlds__hlds_pred__type_ctor_info_proc_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0
  }
};

#line 672 "hlds.headvar_names.c"
static const MR_FA_TypeInfo_Struct1 hlds__headvar_names__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 680 "hlds.headvar_names.c"
static const MR_PseudoTypeInfo hlds__headvar_names__hlds__headvar_names__field_types_var_name_info_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &hlds__headvar_names__set_ordlist__ti_set_ordlist_1builtin__type_ctor_info_string_0
};

#line 686 "hlds.headvar_names.c"
static const MR_ConstString hlds__headvar_names__hlds__headvar_names__field_names_var_name_info_0_0[2] = {
  (MR_String) "vni_unified_with_functor",
  (MR_String) "vni_unified_with_vars"
};

#line 692 "hlds.headvar_names.c"
static const MR_DuFunctorDesc hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0 = {
  (MR_String) "var_name_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__headvar_names__hlds__headvar_names__field_types_var_name_info_0_0,
  hlds__headvar_names__hlds__headvar_names__field_names_var_name_info_0_0,
  NULL,
  NULL
};

#line 707 "hlds.headvar_names.c"
static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0[1] = {
  &hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0
};

#line 712 "hlds.headvar_names.c"
static const MR_DuPtagLayout hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__headvar_names__hlds__headvar_names__du_stag_ordered_var_name_info_0_0
  }
};

#line 721 "hlds.headvar_names.c"
static const MR_DuFunctorDescPtr hlds__headvar_names__hlds__headvar_names__du_name_ordered_var_name_info_0[1] = {
  &hlds__headvar_names__hlds__headvar_names__du_functor_desc_var_name_info_0_0
};

#line 726 "hlds.headvar_names.c"
static const MR_Integer hlds__headvar_names__hlds__headvar_names__functor_number_map_var_name_info_0[1] = {
  (MR_Integer) 0
};

#line 731 "hlds.headvar_names.c"
const MR_TypeCtorInfo_Struct hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__headvar_names____Unify____var_name_info_0_0_10001)),
  ((MR_Box) (hlds__headvar_names____Compare____var_name_info_0_0_10001)),
  (MR_String) "hlds.headvar_names",
  (MR_String) "var_name_info",
  {     hlds__headvar_names__hlds__headvar_names__du_name_ordered_var_name_info_0 },
  {     hlds__headvar_names__hlds__headvar_names__du_ptag_ordered_var_name_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__headvar_names__hlds__headvar_names__functor_number_map_var_name_info_0
};

#line 748 "hlds.headvar_names.c"
const MR_TypeCtorInfo_Struct hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__headvar_names____Unify____var_name_info_map_0_0_10001)),
  ((MR_Box) (hlds__headvar_names____Compare____var_name_info_map_0_0_10001)),
  (MR_String) "hlds.headvar_names",
  (MR_String) "var_name_info_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__headvar_names__tree234__ti_tree234_2term__ti_var_1parse_tree__prog_data__type_ctor_info_prog_var_type_0hlds__headvar_names__type_ctor_info_var_name_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 765 "hlds.headvar_names.c"
static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0_10001(
#line 768 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 770 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_2)
#line 772 "hlds.headvar_names.c"
{
#line 774 "hlds.headvar_names.c"
  {
#line 776 "hlds.headvar_names.c"
    MR_bool hlds__headvar_names__succeeded;

#line 779 "hlds.headvar_names.c"
    {
#line 781 "hlds.headvar_names.c"
      hlds__headvar_names__succeeded = hlds__headvar_names____Unify____var_name_info_0_0(((MR_Word) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2));
    }
#line 784 "hlds.headvar_names.c"
    return hlds__headvar_names__succeeded;
#line 786 "hlds.headvar_names.c"
  }
#line 788 "hlds.headvar_names.c"
}

#line 791 "hlds.headvar_names.c"
static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0_10001(
#line 794 "hlds.headvar_names.c"
  MR_Box * hlds__headvar_names__wrapper_arg_1,
#line 796 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 798 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_3)
#line 800 "hlds.headvar_names.c"
{
#line 802 "hlds.headvar_names.c"
  {
#line 804 "hlds.headvar_names.c"
    MR_Word hlds__headvar_names__conv0_HeadVar__1_1;

#line 807 "hlds.headvar_names.c"
    {
#line 809 "hlds.headvar_names.c"
      hlds__headvar_names____Compare____var_name_info_0_0(&hlds__headvar_names__conv0_HeadVar__1_1, ((MR_Word) hlds__headvar_names__wrapper_arg_2), ((MR_Word) hlds__headvar_names__wrapper_arg_3));
    }
#line 812 "hlds.headvar_names.c"
    *hlds__headvar_names__wrapper_arg_1 = ((MR_Box) (hlds__headvar_names__conv0_HeadVar__1_1));
#line 814 "hlds.headvar_names.c"
  }
#line 816 "hlds.headvar_names.c"
}

#line 819 "hlds.headvar_names.c"
static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0_10001(
#line 822 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 824 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_2)
#line 826 "hlds.headvar_names.c"
{
#line 828 "hlds.headvar_names.c"
  {
#line 830 "hlds.headvar_names.c"
    MR_bool hlds__headvar_names__succeeded;

#line 833 "hlds.headvar_names.c"
    {
#line 835 "hlds.headvar_names.c"
      hlds__headvar_names__succeeded = hlds__headvar_names____Unify____var_name_info_map_0_0(((MR_Word) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2));
    }
#line 838 "hlds.headvar_names.c"
    return hlds__headvar_names__succeeded;
#line 840 "hlds.headvar_names.c"
  }
#line 842 "hlds.headvar_names.c"
}

#line 845 "hlds.headvar_names.c"
static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0_10001(
#line 848 "hlds.headvar_names.c"
  MR_Box * hlds__headvar_names__wrapper_arg_1,
#line 850 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 852 "hlds.headvar_names.c"
  MR_Box hlds__headvar_names__wrapper_arg_3)
#line 854 "hlds.headvar_names.c"
{
#line 856 "hlds.headvar_names.c"
  {
#line 858 "hlds.headvar_names.c"
    MR_Word hlds__headvar_names__conv0_HeadVar__1_1;

#line 861 "hlds.headvar_names.c"
    {
#line 863 "hlds.headvar_names.c"
      hlds__headvar_names____Compare____var_name_info_map_0_0(&hlds__headvar_names__conv0_HeadVar__1_1, ((MR_Word) hlds__headvar_names__wrapper_arg_2), ((MR_Word) hlds__headvar_names__wrapper_arg_3));
    }
#line 866 "hlds.headvar_names.c"
    *hlds__headvar_names__wrapper_arg_1 = ((MR_Box) (hlds__headvar_names__conv0_HeadVar__1_1));
#line 868 "hlds.headvar_names.c"
  }
#line 870 "hlds.headvar_names.c"
}

#line 199 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_map_0_0(
#line 199 "headvar_names.m"
  MR_Word * hlds__headvar_names__HeadVar__1_1,
#line 199 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__2_2,
#line 199 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__3_3)
#line 199 "headvar_names.m"
{
#line 199 "headvar_names.m"
  {
#line 199 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 199 "headvar_names.m"
    MR_Word hlds__headvar_names__Cast_HeadVar1_4 = hlds__headvar_names__HeadVar__2_2;
#line 199 "headvar_names.m"
    MR_Word hlds__headvar_names__Cast_HeadVar2_5 = hlds__headvar_names__HeadVar__3_3;

#line 199 "headvar_names.m"
    {
#line 199 "headvar_names.m"
      mercury__builtin__compare_3_p_0((MR_Word) &hlds__headvar_names_scalar_common_2[0], hlds__headvar_names__HeadVar__1_1, ((MR_Box) (hlds__headvar_names__Cast_HeadVar1_4)), ((MR_Box) (hlds__headvar_names__Cast_HeadVar2_5)));
    }
#line 199 "headvar_names.m"
  }
#line 199 "headvar_names.m"
}

#line 199 "headvar_names.m"
static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_map_0_0(
#line 199 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__1_1,
#line 199 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__2_2)
#line 199 "headvar_names.m"
{
#line 199 "headvar_names.m"
  {
#line 199 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 199 "headvar_names.m"
    MR_Word hlds__headvar_names__Cast_HeadVar1_3 = hlds__headvar_names__HeadVar__1_1;
#line 199 "headvar_names.m"
    MR_Word hlds__headvar_names__Cast_HeadVar2_4 = hlds__headvar_names__HeadVar__2_2;

#line 199 "headvar_names.m"
    {
#line 199 "headvar_names.m"
      hlds__headvar_names__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_2[0], ((MR_Box) (hlds__headvar_names__Cast_HeadVar1_3)), ((MR_Box) (hlds__headvar_names__Cast_HeadVar2_4)));
    }
#line 199 "headvar_names.m"
    return hlds__headvar_names__succeeded;
#line 199 "headvar_names.m"
  }
#line 199 "headvar_names.m"
}

#line 200 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names____Compare____var_name_info_0_0(
#line 200 "headvar_names.m"
  MR_Word * hlds__headvar_names__HeadVar__1_1,
#line 200 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__2_2,
#line 200 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__3_3)
#line 200 "headvar_names.m"
{
#line 200 "headvar_names.m"
  {
#line 200 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 200 "headvar_names.m"
    MR_Integer hlds__headvar_names__CastX_9 = (MR_Integer) hlds__headvar_names__HeadVar__2_2;
#line 200 "headvar_names.m"
    MR_Integer hlds__headvar_names__CastY_10 = (MR_Integer) hlds__headvar_names__HeadVar__3_3;

#line 200 "headvar_names.m"
    hlds__headvar_names__succeeded = (hlds__headvar_names__CastX_9 == hlds__headvar_names__CastY_10);
#line 200 "headvar_names.m"
    if (hlds__headvar_names__succeeded)
#line 957 "hlds.headvar_names.c"
      *hlds__headvar_names__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "headvar_names.m"
    else
#line 200 "headvar_names.m"
      {
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__3_3, (MR_Integer) 0)));
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__3_3, (MR_Integer) 1)));
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_8_8;
#line 200 "headvar_names.m"
        MR_Integer hlds__headvar_names__V_13_13 = (MR_Integer) hlds__headvar_names__V_4_4;
#line 200 "headvar_names.m"
        MR_Integer hlds__headvar_names__V_14_14 = (MR_Integer) hlds__headvar_names__V_6_6;

#line 200 "headvar_names.m"
        {
#line 200 "headvar_names.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&hlds__headvar_names__V_8_8, hlds__headvar_names__V_13_13, hlds__headvar_names__V_14_14);
        }
#line 983 "hlds.headvar_names.c"
        hlds__headvar_names__succeeded = (hlds__headvar_names__V_8_8 == (MR_Integer) 0);
#line 200 "headvar_names.m"
        hlds__headvar_names__succeeded = !(hlds__headvar_names__succeeded);
#line 200 "headvar_names.m"
        if (hlds__headvar_names__succeeded)
#line 200 "headvar_names.m"
          *hlds__headvar_names__HeadVar__1_1 = hlds__headvar_names__V_8_8;
#line 200 "headvar_names.m"
        else
#line 200 "headvar_names.m"
          {
#line 200 "headvar_names.m"
            {
#line 200 "headvar_names.m"
              mercury__builtin__compare_3_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[2], hlds__headvar_names__HeadVar__1_1, ((MR_Box) (hlds__headvar_names__V_5_5)), ((MR_Box) (hlds__headvar_names__V_7_7)));
            }
#line 200 "headvar_names.m"
          }
#line 200 "headvar_names.m"
      }
#line 200 "headvar_names.m"
  }
#line 200 "headvar_names.m"
}

#line 200 "headvar_names.m"
static MR_bool MR_CALL 
hlds__headvar_names____Unify____var_name_info_0_0(
#line 200 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__1_1,
#line 200 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__2_2)
#line 200 "headvar_names.m"
{
#line 200 "headvar_names.m"
  {
#line 200 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 200 "headvar_names.m"
    MR_Integer hlds__headvar_names__CastX_7 = (MR_Integer) hlds__headvar_names__HeadVar__1_1;
#line 200 "headvar_names.m"
    MR_Integer hlds__headvar_names__CastY_8 = (MR_Integer) hlds__headvar_names__HeadVar__2_2;

#line 200 "headvar_names.m"
    hlds__headvar_names__succeeded = (hlds__headvar_names__CastX_7 == hlds__headvar_names__CastY_8);
#line 200 "headvar_names.m"
    if (hlds__headvar_names__succeeded)
#line 200 "headvar_names.m"
      hlds__headvar_names__succeeded = MR_TRUE;
#line 200 "headvar_names.m"
    else
#line 200 "headvar_names.m"
      {
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__TypeInfo_9_9;
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 0)));
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 1)));
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "headvar_names.m"
        MR_Word hlds__headvar_names__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__HeadVar__2_2, (MR_Integer) 1)));

#line 1048 "hlds.headvar_names.c"
        hlds__headvar_names__succeeded = (hlds__headvar_names__V_3_3 == hlds__headvar_names__V_5_5);
#line 200 "headvar_names.m"
        if (hlds__headvar_names__succeeded)
#line 200 "headvar_names.m"
          {
#line 1054 "hlds.headvar_names.c"
            hlds__headvar_names__TypeInfo_9_9 = (MR_Word) &hlds__headvar_names_scalar_common_1[2];
#line 1056 "hlds.headvar_names.c"
            {
#line 1058 "hlds.headvar_names.c"
              hlds__headvar_names__succeeded = mercury__builtin__unify_2_p_0(hlds__headvar_names__TypeInfo_9_9, ((MR_Box) (hlds__headvar_names__V_4_4)), ((MR_Box) (hlds__headvar_names__V_6_6)));
            }
#line 200 "headvar_names.m"
          }
#line 200 "headvar_names.m"
      }
#line 200 "headvar_names.m"
    return hlds__headvar_names__succeeded;
#line 200 "headvar_names.m"
  }
#line 200 "headvar_names.m"
}

#line 358 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__group_var_infos_8_p_0(
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__1_1,
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar_2,
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3,
#line 358 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Inconsistents_4,
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_Consistents_0_5,
#line 358 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Consistents_6,
#line 358 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7,
#line 358 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_8)
#line 358 "headvar_names.m"
{
#line 363 "headvar_names.m"
  while (MR_TRUE)
#line 363 "headvar_names.m"
    {
#line 363 "headvar_names.m"
      /* tailcall optimized into a loop */
#line 363 "headvar_names.m"
      {
#line 363 "headvar_names.m"
        MR_bool hlds__headvar_names__succeeded;

#line 363 "headvar_names.m"
        if ((hlds__headvar_names__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 363 "headvar_names.m"
          {
#line 363 "headvar_names.m"
            *hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_8 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7;
#line 363 "headvar_names.m"
            *hlds__headvar_names__STATE_VARIABLE_Consistents_6 = hlds__headvar_names__STATE_VARIABLE_Consistents_0_5;
#line 363 "headvar_names.m"
            *hlds__headvar_names__STATE_VARIABLE_Inconsistents_4 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3;
#line 363 "headvar_names.m"
          }
#line 363 "headvar_names.m"
        else
#line 365 "headvar_names.m"
          {
#line 365 "headvar_names.m"
            MR_Word hlds__headvar_names__VarNameInfoMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 0)));
#line 365 "headvar_names.m"
            MR_Word hlds__headvar_names__VarNameInfoMaps_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 1)));
#line 365 "headvar_names.m"
            MR_Word hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37;
#line 365 "headvar_names.m"
            MR_Word hlds__headvar_names__STATE_VARIABLE_Consistents_39_39;
#line 365 "headvar_names.m"
            MR_Word hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43;
#line 366 "headvar_names.m"
            MR_Word hlds__headvar_names__VarInfo_25;
#line 366 "headvar_names.m"
            MR_Box hlds__headvar_names__conv0_VarInfo_25;

#line 366 "headvar_names.m"
            {
#line 366 "headvar_names.m"
              hlds__headvar_names__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, hlds__headvar_names__VarNameInfoMap_19, ((MR_Box) (hlds__headvar_names__HeadVar_2)), &hlds__headvar_names__conv0_VarInfo_25);
            }
#line 366 "headvar_names.m"
            if (hlds__headvar_names__succeeded)
#line 366 "headvar_names.m"
              {
#line 366 "headvar_names.m"
                hlds__headvar_names__VarInfo_25 = ((MR_Word) hlds__headvar_names__conv0_VarInfo_25);
#line 366 "headvar_names.m"
                hlds__headvar_names__succeeded = MR_TRUE;
#line 366 "headvar_names.m"
              }
#line 366 "headvar_names.m"
            if (hlds__headvar_names__succeeded)
#line 367 "headvar_names.m"
              {
#line 367 "headvar_names.m"
                MR_Word hlds__headvar_names__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 367 "headvar_names.m"
                MR_Word hlds__headvar_names__UnifiedFunctor_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarInfo_25, (MR_Integer) 0)));
#line 367 "headvar_names.m"
                MR_Word hlds__headvar_names__VarNameSet_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarInfo_25, (MR_Integer) 1)));
#line 367 "headvar_names.m"
                MR_Integer hlds__headvar_names__NameCount_28;

#line 368 "headvar_names.m"
                {
#line 368 "headvar_names.m"
                  mercury__set__count_2_p_0(hlds__headvar_names__TypeCtorInfo_49_49, hlds__headvar_names__VarNameSet_27, &hlds__headvar_names__NameCount_28);
                }
#line 369 "headvar_names.m"
                hlds__headvar_names__succeeded = (hlds__headvar_names__NameCount_28 == (MR_Integer) 0);
#line 369 "headvar_names.m"
                if (hlds__headvar_names__succeeded)
#line 373 "headvar_names.m"
                  {
#line 373 "headvar_names.m"
#line 373 "headvar_names.m"
                    switch (hlds__headvar_names__UnifiedFunctor_26) {
#line 373 "headvar_names.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 373 "headvar_names.m"
                      case (MR_Integer) 0:
#line 374 "headvar_names.m"
                        hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7;
#line 373 "headvar_names.m"
                        break;
#line 373 "headvar_names.m"
                      case (MR_Integer) 1:
#line 372 "headvar_names.m"
                        {
#line 372 "headvar_names.m"
                          hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "headvar_names.m"
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37, 0) = ((MR_Box) (hlds__headvar_names__VarInfo_25));
#line 372 "headvar_names.m"
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37, 1) = ((MR_Box) (hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7));
#line 372 "headvar_names.m"
                        }
#line 373 "headvar_names.m"
                        break;
#line 373 "headvar_names.m"
                    }
#line 373 "headvar_names.m"
                    hlds__headvar_names__STATE_VARIABLE_Consistents_39_39 = hlds__headvar_names__STATE_VARIABLE_Consistents_0_5;
#line 373 "headvar_names.m"
                    hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3;
#line 373 "headvar_names.m"
                  }
#line 369 "headvar_names.m"
                else
#line 377 "headvar_names.m"
                  {
#line 377 "headvar_names.m"
                    hlds__headvar_names__succeeded = (hlds__headvar_names__NameCount_28 == (MR_Integer) 1);
#line 377 "headvar_names.m"
                    if (hlds__headvar_names__succeeded)
#line 380 "headvar_names.m"
                      {
#line 380 "headvar_names.m"
                        MR_Word hlds__headvar_names__VarNameList_29;
#line 381 "headvar_names.m"
                        MR_String hlds__headvar_names__VarName_30;
#line 381 "headvar_names.m"
                        MR_Word hlds__headvar_names__V_38_38;

#line 380 "headvar_names.m"
                        {
#line 380 "headvar_names.m"
                          mercury__set__to_sorted_list_2_p_0(hlds__headvar_names__TypeCtorInfo_49_49, hlds__headvar_names__VarNameSet_27, &hlds__headvar_names__VarNameList_29);
                        }
#line 381 "headvar_names.m"
                        hlds__headvar_names__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__VarNameList_29)) == (MR_mktag((MR_Integer) 1)));
#line 381 "headvar_names.m"
                        if (hlds__headvar_names__succeeded)
#line 381 "headvar_names.m"
                          {
#line 381 "headvar_names.m"
                            hlds__headvar_names__VarName_30 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__headvar_names__VarNameList_29, (MR_Integer) 0)));
#line 381 "headvar_names.m"
                            hlds__headvar_names__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__VarNameList_29, (MR_Integer) 1)));
#line 381 "headvar_names.m"
                            hlds__headvar_names__succeeded = (hlds__headvar_names__V_38_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 381 "headvar_names.m"
                          }
#line 381 "headvar_names.m"
                        if (hlds__headvar_names__succeeded)
#line 382 "headvar_names.m"
                          {
#line 382 "headvar_names.m"
                            hlds__headvar_names__STATE_VARIABLE_Consistents_39_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "headvar_names.m"
                            MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_Consistents_39_39, 0) = ((MR_Box) (hlds__headvar_names__VarName_30));
#line 382 "headvar_names.m"
                            MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_Consistents_39_39, 1) = ((MR_Box) (hlds__headvar_names__STATE_VARIABLE_Consistents_0_5));
#line 382 "headvar_names.m"
                          }
#line 381 "headvar_names.m"
                        else
#line 384 "headvar_names.m"
                          {
#line 384 "headvar_names.m"
                            {
#line 384 "headvar_names.m"
                              mercury__require__unexpected_3_p_0((MR_String) "hlds.headvar_names", (MR_String) "predicate \140hlds.headvar_names.group_var_infos\'/8", (MR_String) "bad singleton set");
#line 384 "headvar_names.m"
                              return;
                            }
#line 384 "headvar_names.m"
                          }
#line 380 "headvar_names.m"
                        hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3;
#line 380 "headvar_names.m"
                      }
#line 377 "headvar_names.m"
                    else
#line 389 "headvar_names.m"
                      {
#line 389 "headvar_names.m"
                        {
#line 389 "headvar_names.m"
                          hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "headvar_names.m"
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43, 0) = ((MR_Box) (hlds__headvar_names__VarInfo_25));
#line 389 "headvar_names.m"
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43, 1) = ((MR_Box) (hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3));
#line 389 "headvar_names.m"
                        }
#line 389 "headvar_names.m"
                        hlds__headvar_names__STATE_VARIABLE_Consistents_39_39 = hlds__headvar_names__STATE_VARIABLE_Consistents_0_5;
#line 389 "headvar_names.m"
                      }
#line 377 "headvar_names.m"
                    hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7;
#line 377 "headvar_names.m"
                  }
#line 367 "headvar_names.m"
              }
#line 366 "headvar_names.m"
            else
#line 392 "headvar_names.m"
              {
#line 392 "headvar_names.m"
                hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7;
#line 392 "headvar_names.m"
                hlds__headvar_names__STATE_VARIABLE_Consistents_39_39 = hlds__headvar_names__STATE_VARIABLE_Consistents_0_5;
#line 392 "headvar_names.m"
                hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3;
#line 392 "headvar_names.m"
              }
#line 394 "headvar_names.m"
            /* direct tailcall eliminated */
#line 394 "headvar_names.m"
            {
#line 394 "headvar_names.m"
              MR_Word hlds__headvar_names__HeadVar__1__tmp_copy_1 = hlds__headvar_names__VarNameInfoMaps_20;
#line 394 "headvar_names.m"
              MR_Word hlds__headvar_names__STATE_VARIABLE_Inconsistents_0__tmp_copy_3 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_43_43;
#line 394 "headvar_names.m"
              MR_Word hlds__headvar_names__STATE_VARIABLE_Consistents_0__tmp_copy_5 = hlds__headvar_names__STATE_VARIABLE_Consistents_39_39;
#line 394 "headvar_names.m"
              MR_Word hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0__tmp_copy_7 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_37_37;

#line 394 "headvar_names.m"
              hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0_7 = hlds__headvar_names__STATE_VARIABLE_FunctorOnlys_0__tmp_copy_7;
#line 394 "headvar_names.m"
              hlds__headvar_names__STATE_VARIABLE_Consistents_0_5 = hlds__headvar_names__STATE_VARIABLE_Consistents_0__tmp_copy_5;
#line 394 "headvar_names.m"
              hlds__headvar_names__STATE_VARIABLE_Inconsistents_0_3 = hlds__headvar_names__STATE_VARIABLE_Inconsistents_0__tmp_copy_3;
#line 394 "headvar_names.m"
              hlds__headvar_names__HeadVar__1_1 = hlds__headvar_names__HeadVar__1__tmp_copy_1;
#line 394 "headvar_names.m"
            }
#line 394 "headvar_names.m"
            continue;
#line 365 "headvar_names.m"
          }
#line 363 "headvar_names.m"
      }
#line 363 "headvar_names.m"
      break;
#line 363 "headvar_names.m"
    }
#line 358 "headvar_names.m"
}

#line 301 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(
#line 301 "headvar_names.m"
  MR_Word hlds__headvar_names__VarNameInfos_5,
#line 301 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar_6,
#line 301 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10,
#line 301 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11)
#line 301 "headvar_names.m"
{
#line 305 "headvar_names.m"
  {
#line 305 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 305 "headvar_names.m"
    MR_Word hlds__headvar_names__Inconsistents_18;
#line 305 "headvar_names.m"
    MR_Word hlds__headvar_names__Consistents_19;
#line 305 "headvar_names.m"
    MR_Word hlds__headvar_names__FunctorOnlys_20;

#line 319 "headvar_names.m"
    {
#line 319 "headvar_names.m"
      hlds__headvar_names__group_var_infos_8_p_0(hlds__headvar_names__VarNameInfos_5, hlds__headvar_names__HeadVar_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__headvar_names__Inconsistents_18, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__headvar_names__Consistents_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__headvar_names__FunctorOnlys_20);
    }
#line 1373 "hlds.headvar_names.c"
    if ((hlds__headvar_names__Inconsistents_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1375 "hlds.headvar_names.c"
      if ((hlds__headvar_names__Consistents_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 308 "headvar_names.m"
        *hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11 = hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10;
#line 1379 "hlds.headvar_names.c"
      else
#line 1381 "hlds.headvar_names.c"
      if ((hlds__headvar_names__FunctorOnlys_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1383 "hlds.headvar_names.c"
        {
#line 1385 "hlds.headvar_names.c"
          MR_Word hlds__headvar_names__SortedConsistents_25;
#line 1387 "hlds.headvar_names.c"
          MR_String hlds__headvar_names__ConsensusName_26;
#line 338 "headvar_names.m"
          MR_Word hlds__headvar_names__V_32_32;

#line 337 "headvar_names.m"
          {
#line 337 "headvar_names.m"
            mercury__list__sort_and_remove_dups_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, hlds__headvar_names__Consistents_19, &hlds__headvar_names__SortedConsistents_25);
          }
#line 338 "headvar_names.m"
          hlds__headvar_names__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__SortedConsistents_25)) == (MR_mktag((MR_Integer) 1)));
#line 338 "headvar_names.m"
          if (hlds__headvar_names__succeeded)
#line 338 "headvar_names.m"
            {
#line 338 "headvar_names.m"
              hlds__headvar_names__ConsensusName_26 = ((MR_String) (MR_hl_field(MR_mktag(1), hlds__headvar_names__SortedConsistents_25, (MR_Integer) 0)));
#line 338 "headvar_names.m"
              hlds__headvar_names__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__SortedConsistents_25, (MR_Integer) 1)));
#line 338 "headvar_names.m"
              hlds__headvar_names__succeeded = (hlds__headvar_names__V_32_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "headvar_names.m"
            }
#line 1411 "hlds.headvar_names.c"
          if (hlds__headvar_names__succeeded)
#line 1413 "hlds.headvar_names.c"
            {
#line 311 "headvar_names.m"
              {
#line 311 "headvar_names.m"
                mercury__map__det_insert_4_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__headvar_names__HeadVar_6)), ((MR_Box) (hlds__headvar_names__ConsensusName_26)), hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10, hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11);
              }
#line 1420 "hlds.headvar_names.c"
            }
#line 1422 "hlds.headvar_names.c"
          else
#line 308 "headvar_names.m"
            *hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11 = hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10;
#line 1426 "hlds.headvar_names.c"
        }
#line 1428 "hlds.headvar_names.c"
      else
#line 308 "headvar_names.m"
        *hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11 = hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10;
#line 1432 "hlds.headvar_names.c"
    else
#line 308 "headvar_names.m"
      *hlds__headvar_names__STATE_VARIABLE_ConsensusMap_11 = hlds__headvar_names__STATE_VARIABLE_ConsensusMap_0_10;
#line 305 "headvar_names.m"
  }
#line 301 "headvar_names.m"
}

#line 223 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_goal_7_p_0(
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__VarSet_8,
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVars_9,
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__Goal_10,
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23,
#line 223 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24,
#line 223 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarsInMap_0_25,
#line 223 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarsInMap_26)
#line 223 "headvar_names.m"
{
#line 230 "headvar_names.m"
  {
#line 230 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 230 "headvar_names.m"
    MR_Word hlds__headvar_names__HeadVar_13;
#line 230 "headvar_names.m"
    MR_Word hlds__headvar_names__MaybeOtherVar_14;
#line 268 "headvar_names.m"
    MR_Word hlds__headvar_names__GoalExpr_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal_10, (MR_Integer) 0)));
#line 268 "headvar_names.m"
    MR_Word hlds__headvar_names__LVar_67;
#line 268 "headvar_names.m"
    MR_Word hlds__headvar_names__RHS_68;
#line 269 "headvar_names.m"
    MR_Word hlds__headvar_names__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal_10, (MR_Integer) 1)));
#line 270 "headvar_names.m"
    MR_Word hlds__headvar_names__V_69_69;
#line 270 "headvar_names.m"
    MR_Word hlds__headvar_names__V_70_70;
#line 270 "headvar_names.m"
    MR_Word hlds__headvar_names__V_71_71;

#line 270 "headvar_names.m"
    hlds__headvar_names__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__GoalExpr_65)) == (MR_mktag((MR_Integer) 1)));
#line 270 "headvar_names.m"
    if (hlds__headvar_names__succeeded)
#line 270 "headvar_names.m"
      {
#line 270 "headvar_names.m"
        hlds__headvar_names__LVar_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 0)));
#line 270 "headvar_names.m"
        hlds__headvar_names__RHS_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 1)));
#line 270 "headvar_names.m"
        hlds__headvar_names__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 2)));
#line 270 "headvar_names.m"
        hlds__headvar_names__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 3)));
#line 270 "headvar_names.m"
        hlds__headvar_names__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_65, (MR_Integer) 4)));
#line 282 "headvar_names.m"
        if (((MR_tag((MR_Word) hlds__headvar_names__RHS_68)) == (MR_mktag((MR_Integer) 1))))
#line 283 "headvar_names.m"
          {
#line 284 "headvar_names.m"
            {
#line 284 "headvar_names.m"
              hlds__headvar_names__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_9, ((MR_Box) (hlds__headvar_names__LVar_67)));
            }
#line 283 "headvar_names.m"
            if (hlds__headvar_names__succeeded)
#line 283 "headvar_names.m"
              {
#line 285 "headvar_names.m"
                hlds__headvar_names__HeadVar_13 = hlds__headvar_names__LVar_67;
#line 286 "headvar_names.m"
                hlds__headvar_names__MaybeOtherVar_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "headvar_names.m"
                hlds__headvar_names__succeeded = MR_TRUE;
#line 283 "headvar_names.m"
              }
#line 283 "headvar_names.m"
          }
#line 282 "headvar_names.m"
        else
#line 282 "headvar_names.m"
        if (((MR_tag((MR_Word) hlds__headvar_names__RHS_68)) == (MR_mktag((MR_Integer) 0))))
#line 272 "headvar_names.m"
          {
#line 272 "headvar_names.m"
            MR_Word hlds__headvar_names__RVar_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__RHS_68, (MR_Integer) 0)));

#line 273 "headvar_names.m"
            {
#line 273 "headvar_names.m"
              hlds__headvar_names__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_9, ((MR_Box) (hlds__headvar_names__LVar_67)));
            }
#line 273 "headvar_names.m"
            if (hlds__headvar_names__succeeded)
#line 274 "headvar_names.m"
              {
#line 274 "headvar_names.m"
                hlds__headvar_names__HeadVar_13 = hlds__headvar_names__LVar_67;
#line 275 "headvar_names.m"
                {
#line 275 "headvar_names.m"
                  hlds__headvar_names__MaybeOtherVar_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "headvar_names.m"
                  MR_hl_field(MR_mktag(1), hlds__headvar_names__MaybeOtherVar_14, 0) = ((MR_Box) (hlds__headvar_names__RVar_72));
#line 275 "headvar_names.m"
                }
#line 274 "headvar_names.m"
                hlds__headvar_names__succeeded = MR_TRUE;
#line 274 "headvar_names.m"
              }
#line 273 "headvar_names.m"
            else
#line 276 "headvar_names.m"
              {
#line 276 "headvar_names.m"
                {
#line 276 "headvar_names.m"
                  hlds__headvar_names__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_9, ((MR_Box) (hlds__headvar_names__RVar_72)));
                }
#line 276 "headvar_names.m"
                if (hlds__headvar_names__succeeded)
#line 276 "headvar_names.m"
                  {
#line 277 "headvar_names.m"
                    hlds__headvar_names__HeadVar_13 = hlds__headvar_names__RVar_72;
#line 278 "headvar_names.m"
                    {
#line 278 "headvar_names.m"
                      hlds__headvar_names__MaybeOtherVar_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "headvar_names.m"
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__MaybeOtherVar_14, 0) = ((MR_Box) (hlds__headvar_names__LVar_67));
#line 278 "headvar_names.m"
                    }
#line 278 "headvar_names.m"
                    hlds__headvar_names__succeeded = MR_TRUE;
#line 276 "headvar_names.m"
                  }
#line 276 "headvar_names.m"
              }
#line 272 "headvar_names.m"
          }
#line 282 "headvar_names.m"
        else
#line 282 "headvar_names.m"
          hlds__headvar_names__succeeded = MR_FALSE;
#line 270 "headvar_names.m"
      }
#line 230 "headvar_names.m"
    if (hlds__headvar_names__succeeded)
#line 233 "headvar_names.m"
      {
#line 233 "headvar_names.m"
        MR_Word hlds__headvar_names__TypeInfo_50_50 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];

#line 233 "headvar_names.m"
        {
#line 233 "headvar_names.m"
          mercury__set__insert_3_p_0(hlds__headvar_names__TypeInfo_50_50, ((MR_Box) (hlds__headvar_names__HeadVar_13)), hlds__headvar_names__STATE_VARIABLE_VarsInMap_0_25, hlds__headvar_names__STATE_VARIABLE_VarsInMap_26);
        }
#line 244 "headvar_names.m"
        if ((hlds__headvar_names__MaybeOtherVar_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 236 "headvar_names.m"
          {
#line 236 "headvar_names.m"
            MR_Word hlds__headvar_names__VarNameInfo0_15;
#line 236 "headvar_names.m"
            MR_Box hlds__headvar_names__conv0_VarNameInfo0_15;

#line 236 "headvar_names.m"
            {
#line 236 "headvar_names.m"
              hlds__headvar_names__succeeded = mercury__map__search_3_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, ((MR_Box) (hlds__headvar_names__HeadVar_13)), &hlds__headvar_names__conv0_VarNameInfo0_15);
            }
#line 236 "headvar_names.m"
            if (hlds__headvar_names__succeeded)
#line 236 "headvar_names.m"
              {
#line 236 "headvar_names.m"
                hlds__headvar_names__VarNameInfo0_15 = ((MR_Word) hlds__headvar_names__conv0_VarNameInfo0_15);
#line 236 "headvar_names.m"
                hlds__headvar_names__succeeded = MR_TRUE;
#line 236 "headvar_names.m"
              }
#line 236 "headvar_names.m"
            if (hlds__headvar_names__succeeded)
#line 237 "headvar_names.m"
              {
#line 237 "headvar_names.m"
                MR_Word hlds__headvar_names__VarNames_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo0_15, (MR_Integer) 1)));
#line 237 "headvar_names.m"
                MR_Word hlds__headvar_names__VarNameInfo_18;
#line 237 "headvar_names.m"
                MR_Word hlds__headvar_names___UnifiedFunctor_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo0_15, (MR_Integer) 0)));

#line 238 "headvar_names.m"
                {
#line 238 "headvar_names.m"
                  hlds__headvar_names__VarNameInfo_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 238 "headvar_names.m"
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_18, 0) = ((MR_Box) ((MR_Integer) 1));
#line 238 "headvar_names.m"
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_18, 1) = ((MR_Box) (hlds__headvar_names__VarNames_17));
#line 238 "headvar_names.m"
                }
#line 239 "headvar_names.m"
                {
#line 239 "headvar_names.m"
                  mercury__map__det_update_4_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, ((MR_Box) (hlds__headvar_names__HeadVar_13)), ((MR_Box) (hlds__headvar_names__VarNameInfo_18)), hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24);
                }
#line 237 "headvar_names.m"
              }
#line 236 "headvar_names.m"
            else
#line 241 "headvar_names.m"
              {
#line 241 "headvar_names.m"
                MR_Word hlds__headvar_names__V_34_34;
#line 241 "headvar_names.m"
                MR_Word hlds__headvar_names__VarNameInfo_36;

#line 241 "headvar_names.m"
                {
#line 241 "headvar_names.m"
                  hlds__headvar_names__V_34_34 = mercury__set__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                }
#line 241 "headvar_names.m"
                {
#line 241 "headvar_names.m"
                  hlds__headvar_names__VarNameInfo_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 241 "headvar_names.m"
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_36, 0) = ((MR_Box) ((MR_Integer) 1));
#line 241 "headvar_names.m"
                  MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_36, 1) = ((MR_Box) (hlds__headvar_names__V_34_34));
#line 241 "headvar_names.m"
                }
#line 242 "headvar_names.m"
                {
#line 242 "headvar_names.m"
                  mercury__map__det_insert_4_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, ((MR_Box) (hlds__headvar_names__HeadVar_13)), ((MR_Box) (hlds__headvar_names__VarNameInfo_36)), hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24);
                }
#line 241 "headvar_names.m"
              }
#line 236 "headvar_names.m"
          }
#line 244 "headvar_names.m"
        else
#line 245 "headvar_names.m"
          {
#line 245 "headvar_names.m"
            MR_Word hlds__headvar_names__OtherVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__MaybeOtherVar_14, (MR_Integer) 0)));
#line 246 "headvar_names.m"
            MR_String hlds__headvar_names__OtherVarName_20;

#line 246 "headvar_names.m"
            {
#line 246 "headvar_names.m"
              hlds__headvar_names__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__VarSet_8, hlds__headvar_names__OtherVar_19, &hlds__headvar_names__OtherVarName_20);
            }
#line 246 "headvar_names.m"
            if (hlds__headvar_names__succeeded)
#line 247 "headvar_names.m"
              {
#line 247 "headvar_names.m"
                MR_Word hlds__headvar_names__VarNameInfo0_41;
#line 247 "headvar_names.m"
                MR_Box hlds__headvar_names__conv1_VarNameInfo0_41;

#line 247 "headvar_names.m"
                {
#line 247 "headvar_names.m"
                  hlds__headvar_names__succeeded = mercury__map__search_3_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, ((MR_Box) (hlds__headvar_names__HeadVar_13)), &hlds__headvar_names__conv1_VarNameInfo0_41);
                }
#line 247 "headvar_names.m"
                if (hlds__headvar_names__succeeded)
#line 247 "headvar_names.m"
                  {
#line 247 "headvar_names.m"
                    hlds__headvar_names__VarNameInfo0_41 = ((MR_Word) hlds__headvar_names__conv1_VarNameInfo0_41);
#line 247 "headvar_names.m"
                    hlds__headvar_names__succeeded = MR_TRUE;
#line 247 "headvar_names.m"
                  }
#line 247 "headvar_names.m"
                if (hlds__headvar_names__succeeded)
#line 248 "headvar_names.m"
                  {
#line 248 "headvar_names.m"
                    MR_Word hlds__headvar_names__UnifiedFunctor_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo0_41, (MR_Integer) 0)));
#line 248 "headvar_names.m"
                    MR_Word hlds__headvar_names__VarNames0_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo0_41, (MR_Integer) 1)));
#line 248 "headvar_names.m"
                    MR_Word hlds__headvar_names__VarNames_37;
#line 248 "headvar_names.m"
                    MR_Word hlds__headvar_names__VarNameInfo_38;

#line 249 "headvar_names.m"
                    {
#line 249 "headvar_names.m"
                      mercury__set__insert_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__headvar_names__OtherVarName_20)), hlds__headvar_names__VarNames0_22, &hlds__headvar_names__VarNames_37);
                    }
#line 250 "headvar_names.m"
                    {
#line 250 "headvar_names.m"
                      hlds__headvar_names__VarNameInfo_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "headvar_names.m"
                      MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_38, 0) = ((MR_Box) (hlds__headvar_names__UnifiedFunctor_21));
#line 250 "headvar_names.m"
                      MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_38, 1) = ((MR_Box) (hlds__headvar_names__VarNames_37));
#line 250 "headvar_names.m"
                    }
#line 251 "headvar_names.m"
                    {
#line 251 "headvar_names.m"
                      mercury__map__det_update_4_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, ((MR_Box) (hlds__headvar_names__HeadVar_13)), ((MR_Box) (hlds__headvar_names__VarNameInfo_38)), hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24);
                    }
#line 248 "headvar_names.m"
                  }
#line 247 "headvar_names.m"
                else
#line 253 "headvar_names.m"
                  {
#line 253 "headvar_names.m"
                    MR_Word hlds__headvar_names__VarNames_39;
#line 253 "headvar_names.m"
                    MR_Word hlds__headvar_names__VarNameInfo_40;

#line 253 "headvar_names.m"
                    {
#line 253 "headvar_names.m"
                      hlds__headvar_names__VarNames_39 = mercury__set__make_singleton_set_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ((MR_Box) (hlds__headvar_names__OtherVarName_20)));
                    }
#line 254 "headvar_names.m"
                    {
#line 254 "headvar_names.m"
                      hlds__headvar_names__VarNameInfo_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 254 "headvar_names.m"
                      MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_40, 0) = ((MR_Box) ((MR_Integer) 0));
#line 254 "headvar_names.m"
                      MR_hl_field(MR_mktag(0), hlds__headvar_names__VarNameInfo_40, 1) = ((MR_Box) (hlds__headvar_names__VarNames_39));
#line 254 "headvar_names.m"
                    }
#line 255 "headvar_names.m"
                    {
#line 255 "headvar_names.m"
                      mercury__map__det_insert_4_p_0(hlds__headvar_names__TypeInfo_50_50, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0, ((MR_Box) (hlds__headvar_names__HeadVar_13)), ((MR_Box) (hlds__headvar_names__VarNameInfo_40)), hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23, hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24);
                    }
#line 253 "headvar_names.m"
                  }
#line 247 "headvar_names.m"
              }
#line 246 "headvar_names.m"
            else
#line 246 "headvar_names.m"
              *hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24 = hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23;
#line 245 "headvar_names.m"
          }
#line 233 "headvar_names.m"
      }
#line 230 "headvar_names.m"
    else
#line 262 "headvar_names.m"
      {
#line 262 "headvar_names.m"
        *hlds__headvar_names__STATE_VARIABLE_VarsInMap_26 = hlds__headvar_names__STATE_VARIABLE_VarsInMap_0_25;
#line 262 "headvar_names.m"
        *hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_24 = hlds__headvar_names__STATE_VARIABLE_VarNameInfoMap_0_23;
#line 262 "headvar_names.m"
      }
#line 230 "headvar_names.m"
  }
#line 223 "headvar_names.m"
}

#line 220 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1(
#line 220 "headvar_names.m"
  MR_Box hlds__headvar_names__closure_arg,
#line 220 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 220 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 220 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_3,
#line 220 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_4,
#line 220 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_5)
#line 220 "headvar_names.m"
{
#line 220 "headvar_names.m"
  {
#line 220 "headvar_names.m"
    MR_Box hlds__headvar_names__closure = hlds__headvar_names__closure_arg;
#line 220 "headvar_names.m"
    MR_Word hlds__headvar_names__conv1_STATE_VARIABLE_VarNameInfoMap_24;
#line 220 "headvar_names.m"
    MR_Word hlds__headvar_names__conv0_STATE_VARIABLE_VarsInMap_26;

#line 220 "headvar_names.m"
    {
#line 220 "headvar_names.m"
      hlds__headvar_names__find_headvar_names_in_goal_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 4))), ((MR_Word) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2), &hlds__headvar_names__conv1_STATE_VARIABLE_VarNameInfoMap_24, ((MR_Word) hlds__headvar_names__wrapper_arg_4), &hlds__headvar_names__conv0_STATE_VARIABLE_VarsInMap_26);
    }
#line 220 "headvar_names.m"
    *hlds__headvar_names__wrapper_arg_3 = ((MR_Box) (hlds__headvar_names__conv1_STATE_VARIABLE_VarNameInfoMap_24));
#line 220 "headvar_names.m"
    *hlds__headvar_names__wrapper_arg_5 = ((MR_Box) (hlds__headvar_names__conv0_STATE_VARIABLE_VarsInMap_26));
#line 220 "headvar_names.m"
  }
#line 220 "headvar_names.m"
}

#line 212 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__find_headvar_names_in_clause_5_p_0(
#line 212 "headvar_names.m"
  MR_Word hlds__headvar_names__VarSet_6,
#line 212 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVars_7,
#line 212 "headvar_names.m"
  MR_Word hlds__headvar_names__Clause_8,
#line 212 "headvar_names.m"
  MR_Word * hlds__headvar_names__VarNameInfoMap_9,
#line 212 "headvar_names.m"
  MR_Word * hlds__headvar_names__VarsInMap_10)
#line 212 "headvar_names.m"
{
#line 217 "headvar_names.m"
  {
#line 217 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 217 "headvar_names.m"
    MR_Word hlds__headvar_names__TypeInfo_21_21;
#line 217 "headvar_names.m"
    MR_Word hlds__headvar_names__Goal_11;
#line 217 "headvar_names.m"
    MR_Word hlds__headvar_names__Conj_12;
#line 217 "headvar_names.m"
    MR_Word hlds__headvar_names__V_13_13;
#line 217 "headvar_names.m"
    MR_Word hlds__headvar_names__V_14_14;
#line 217 "headvar_names.m"
    MR_Word hlds__headvar_names__V_15_15;
#line 220 "headvar_names.m"
    MR_Box hlds__headvar_names__conv3_VarNameInfoMap_9;
#line 220 "headvar_names.m"
    MR_Box hlds__headvar_names__conv2_VarsInMap_10;

#line 218 "headvar_names.m"
    {
#line 218 "headvar_names.m"
      hlds__headvar_names__Goal_11 = hlds__hlds_clauses__clause_body_1_f_0(hlds__headvar_names__Clause_8);
    }
#line 219 "headvar_names.m"
    {
#line 219 "headvar_names.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__headvar_names__Goal_11, &hlds__headvar_names__Conj_12);
    }
#line 220 "headvar_names.m"
    {
#line 220 "headvar_names.m"
      hlds__headvar_names__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 220 "headvar_names.m"
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_5[0]));
#line 220 "headvar_names.m"
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 1) = ((MR_Box) (hlds__headvar_names__find_headvar_names_in_clause_5_p_0_1));
#line 220 "headvar_names.m"
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 220 "headvar_names.m"
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 3) = ((MR_Box) (hlds__headvar_names__VarSet_6));
#line 220 "headvar_names.m"
      MR_hl_field(MR_mktag(0), hlds__headvar_names__V_13_13, 4) = ((MR_Box) (hlds__headvar_names__HeadVars_7));
#line 220 "headvar_names.m"
    }
#line 1919 "hlds.headvar_names.c"
    hlds__headvar_names__TypeInfo_21_21 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
#line 221 "headvar_names.m"
    {
#line 221 "headvar_names.m"
      hlds__headvar_names__V_14_14 = mercury__map__init_0_f_0(hlds__headvar_names__TypeInfo_21_21, (MR_Word) &hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0);
    }
#line 221 "headvar_names.m"
    {
#line 221 "headvar_names.m"
      hlds__headvar_names__V_15_15 = mercury__set__init_0_f_0(hlds__headvar_names__TypeInfo_21_21);
    }
#line 220 "headvar_names.m"
    {
#line 220 "headvar_names.m"
      mercury__list__foldl2_6_p_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, (MR_Word) &hlds__headvar_names_scalar_common_2[0], (MR_Word) &hlds__headvar_names_scalar_common_1[1], hlds__headvar_names__V_13_13, hlds__headvar_names__Conj_12, ((MR_Box) (hlds__headvar_names__V_14_14)), &hlds__headvar_names__conv3_VarNameInfoMap_9, ((MR_Box) (hlds__headvar_names__V_15_15)), &hlds__headvar_names__conv2_VarsInMap_10);
    }
#line 220 "headvar_names.m"
    *hlds__headvar_names__VarNameInfoMap_9 = ((MR_Word) hlds__headvar_names__conv3_VarNameInfoMap_9);
#line 220 "headvar_names.m"
    *hlds__headvar_names__VarsInMap_10 = ((MR_Word) hlds__headvar_names__conv2_VarsInMap_10);
#line 217 "headvar_names.m"
  }
#line 212 "headvar_names.m"
}

#line 159 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(
#line 159 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg)
#line 159 "headvar_names.m"
{
#line 159 "headvar_names.m"
  {
#line 159 "headvar_names.m"
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

#line 159 "headvar_names.m"
    MR_builtin_longjmp((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0, 1);
#line 159 "headvar_names.m"
  }
#line 159 "headvar_names.m"
}

#line 159 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(
#line 159 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg)
#line 159 "headvar_names.m"
{
#line 159 "headvar_names.m"
  {
#line 159 "headvar_names.m"
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

#line 159 "headvar_names.m"
    {
#line 160 "headvar_names.m"
      MR_Word hlds__headvar_names__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54, (MR_Integer) 0)));

#line 160 "headvar_names.m"
      (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoalInfo_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54, (MR_Integer) 1)));
#line 161 "headvar_names.m"
      {
#line 161 "headvar_names.m"
        (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherNonLocals_33 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoalInfo_32);
      }
#line 1988 "hlds.headvar_names.c"
      (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 162 "headvar_names.m"
      {
#line 162 "headvar_names.m"
        (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = parse_tree__set_of_var__member_2_p_0((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__TypeCtorInfo_62_62, (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherNonLocals_33, (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28);
      }
#line 162 "headvar_names.m"
      if ((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 162 "headvar_names.m"
        {
#line 162 "headvar_names.m"
          hlds__headvar_names__improve_single_clause_headvars_9_p_0_1(hlds__headvar_names__env_ptr);
        }
#line 159 "headvar_names.m"
    }
#line 159 "headvar_names.m"
  }
#line 159 "headvar_names.m"
}

#line 157 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_3(
#line 157 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg)
#line 157 "headvar_names.m"
{
#line 157 "headvar_names.m"
  {
#line 157 "headvar_names.m"
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

#line 157 "headvar_names.m"
    (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54 = ((MR_Word) (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv0_OtherGoal_54);
#line 157 "headvar_names.m"
    {
#line 157 "headvar_names.m"
      hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(hlds__headvar_names__env_ptr);
    }
#line 157 "headvar_names.m"
  }
#line 157 "headvar_names.m"
}

#line 158 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_4(
#line 158 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg)
#line 158 "headvar_names.m"
{
#line 158 "headvar_names.m"
  {
#line 158 "headvar_names.m"
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

#line 158 "headvar_names.m"
    (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__OtherGoal_54 = ((MR_Word) (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv1_OtherGoal_54);
#line 158 "headvar_names.m"
    {
#line 158 "headvar_names.m"
      hlds__headvar_names__improve_single_clause_headvars_9_p_0_2(hlds__headvar_names__env_ptr);
    }
#line 158 "headvar_names.m"
  }
#line 158 "headvar_names.m"
}

#line 159 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(
#line 159 "headvar_names.m"
  void * hlds__headvar_names__env_ptr_arg)
#line 159 "headvar_names.m"
{
#line 159 "headvar_names.m"
  {
#line 159 "headvar_names.m"
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s * hlds__headvar_names__env_ptr = (struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s *) hlds__headvar_names__env_ptr_arg;

#line 159 "headvar_names.m"
    if (MR_builtin_setjmp((hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__commit_0) == 0)
#line 159 "headvar_names.m"
      {
#line 157 "headvar_names.m"
        {
#line 157 "headvar_names.m"
          {
#line 157 "headvar_names.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv0_OtherGoal_54, (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22, hlds__headvar_names__improve_single_clause_headvars_9_p_0_3, hlds__headvar_names__env_ptr);
          }
#line 157 "headvar_names.m"
        }
#line 158 "headvar_names.m"
        {
#line 158 "headvar_names.m"
          {
#line 158 "headvar_names.m"
            mercury__list__member_2_p_1((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, &(hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__conv1_OtherGoal_54, (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8, hlds__headvar_names__improve_single_clause_headvars_9_p_0_4, hlds__headvar_names__env_ptr);
          }
#line 158 "headvar_names.m"
        }
#line 159 "headvar_names.m"
        (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_FALSE;
#line 159 "headvar_names.m"
      }
#line 159 "headvar_names.m"
    else
#line 159 "headvar_names.m"
      (hlds__headvar_names__env_ptr)->hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
#line 159 "headvar_names.m"
  }
#line 159 "headvar_names.m"
}

#line 135 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__improve_single_clause_headvars_9_p_0(
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVar__1_1,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__HeadVars_2,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__SeenVars0_3,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_VarSet_0_4,
#line 135 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_VarSet_5,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_Subst_0_6,
#line 135 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_Subst_7,
#line 135 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_RevConj_0_8,
#line 135 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_RevConj_9)
#line 135 "headvar_names.m"
{
#line 135 "headvar_names.m"
  {
#line 135 "headvar_names.m"
    struct hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0_s hlds__headvar_names__env;

#line 135 "headvar_names.m"
    (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8 = hlds__headvar_names__STATE_VARIABLE_RevConj_0_8;
#line 141 "headvar_names.m"
    while (MR_TRUE)
#line 141 "headvar_names.m"
      {
#line 141 "headvar_names.m"
        /* tailcall optimized into a loop */
#line 141 "headvar_names.m"
        if ((hlds__headvar_names__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 141 "headvar_names.m"
          {
#line 141 "headvar_names.m"
            *hlds__headvar_names__STATE_VARIABLE_RevConj_9 = (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
#line 141 "headvar_names.m"
            *hlds__headvar_names__STATE_VARIABLE_Subst_7 = hlds__headvar_names__STATE_VARIABLE_Subst_0_6;
#line 141 "headvar_names.m"
            *hlds__headvar_names__STATE_VARIABLE_VarSet_5 = hlds__headvar_names__STATE_VARIABLE_VarSet_0_4;
#line 141 "headvar_names.m"
          }
#line 141 "headvar_names.m"
        else
#line 143 "headvar_names.m"
          {
#line 143 "headvar_names.m"
            MR_Word hlds__headvar_names__Goal_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 0)));
#line 143 "headvar_names.m"
            MR_Word hlds__headvar_names__SeenVars_34;
#line 143 "headvar_names.m"
            MR_Word hlds__headvar_names__STATE_VARIABLE_Subst_45_45;
#line 143 "headvar_names.m"
            MR_Word hlds__headvar_names__STATE_VARIABLE_VarSet_46_46;
#line 143 "headvar_names.m"
            MR_Word hlds__headvar_names__STATE_VARIABLE_RevConj_47_47;
#line 144 "headvar_names.m"
            MR_Word hlds__headvar_names__OtherVar_29;
#line 145 "headvar_names.m"
            MR_Word hlds__headvar_names__V_44_44;
#line 145 "headvar_names.m"
            MR_Word hlds__headvar_names__GoalExpr_75;
#line 145 "headvar_names.m"
            MR_Word hlds__headvar_names__LVar_77;
#line 145 "headvar_names.m"
            MR_Word hlds__headvar_names__RHS_78;
#line 269 "headvar_names.m"
            MR_Word hlds__headvar_names__V_76_76;
#line 270 "headvar_names.m"
            MR_Word hlds__headvar_names__V_79_79;
#line 270 "headvar_names.m"
            MR_Word hlds__headvar_names__V_80_80;
#line 270 "headvar_names.m"
            MR_Word hlds__headvar_names__V_81_81;

#line 142 "headvar_names.m"
            (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "headvar_names.m"
            hlds__headvar_names__GoalExpr_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal_21, (MR_Integer) 0)));
#line 269 "headvar_names.m"
            hlds__headvar_names__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal_21, (MR_Integer) 1)));
#line 270 "headvar_names.m"
            (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__GoalExpr_75)) == (MR_mktag((MR_Integer) 1)));
#line 270 "headvar_names.m"
            if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 270 "headvar_names.m"
              {
#line 270 "headvar_names.m"
                hlds__headvar_names__LVar_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 0)));
#line 270 "headvar_names.m"
                hlds__headvar_names__RHS_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 1)));
#line 270 "headvar_names.m"
                hlds__headvar_names__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 2)));
#line 270 "headvar_names.m"
                hlds__headvar_names__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 3)));
#line 270 "headvar_names.m"
                hlds__headvar_names__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__GoalExpr_75, (MR_Integer) 4)));
#line 282 "headvar_names.m"
                if (((MR_tag((MR_Word) hlds__headvar_names__RHS_78)) == (MR_mktag((MR_Integer) 1))))
#line 283 "headvar_names.m"
                  {
#line 284 "headvar_names.m"
                    {
#line 284 "headvar_names.m"
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_2, ((MR_Box) (hlds__headvar_names__LVar_77)));
                    }
#line 283 "headvar_names.m"
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 283 "headvar_names.m"
                      {
#line 285 "headvar_names.m"
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = hlds__headvar_names__LVar_77;
#line 286 "headvar_names.m"
                        hlds__headvar_names__V_44_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 286 "headvar_names.m"
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
#line 283 "headvar_names.m"
                      }
#line 283 "headvar_names.m"
                  }
#line 282 "headvar_names.m"
                else
#line 282 "headvar_names.m"
                if (((MR_tag((MR_Word) hlds__headvar_names__RHS_78)) == (MR_mktag((MR_Integer) 0))))
#line 272 "headvar_names.m"
                  {
#line 272 "headvar_names.m"
                    MR_Word hlds__headvar_names__RVar_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__RHS_78, (MR_Integer) 0)));

#line 273 "headvar_names.m"
                    {
#line 273 "headvar_names.m"
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_2, ((MR_Box) (hlds__headvar_names__LVar_77)));
                    }
#line 273 "headvar_names.m"
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 274 "headvar_names.m"
                      {
#line 274 "headvar_names.m"
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = hlds__headvar_names__LVar_77;
#line 275 "headvar_names.m"
                        {
#line 275 "headvar_names.m"
                          hlds__headvar_names__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 275 "headvar_names.m"
                          MR_hl_field(MR_mktag(1), hlds__headvar_names__V_44_44, 0) = ((MR_Box) (hlds__headvar_names__RVar_82));
#line 275 "headvar_names.m"
                        }
#line 274 "headvar_names.m"
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
#line 274 "headvar_names.m"
                      }
#line 273 "headvar_names.m"
                    else
#line 276 "headvar_names.m"
                      {
#line 276 "headvar_names.m"
                        {
#line 276 "headvar_names.m"
                          (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_2, ((MR_Box) (hlds__headvar_names__RVar_82)));
                        }
#line 276 "headvar_names.m"
                        if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 276 "headvar_names.m"
                          {
#line 277 "headvar_names.m"
                            (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28 = hlds__headvar_names__RVar_82;
#line 278 "headvar_names.m"
                            {
#line 278 "headvar_names.m"
                              hlds__headvar_names__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "headvar_names.m"
                              MR_hl_field(MR_mktag(1), hlds__headvar_names__V_44_44, 0) = ((MR_Box) (hlds__headvar_names__LVar_77));
#line 278 "headvar_names.m"
                            }
#line 278 "headvar_names.m"
                            (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_TRUE;
#line 276 "headvar_names.m"
                          }
#line 276 "headvar_names.m"
                      }
#line 272 "headvar_names.m"
                  }
#line 282 "headvar_names.m"
                else
#line 282 "headvar_names.m"
                  (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = MR_FALSE;
#line 145 "headvar_names.m"
                if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 145 "headvar_names.m"
                  {
#line 145 "headvar_names.m"
                    (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = ((MR_tag((MR_Word) hlds__headvar_names__V_44_44)) == (MR_mktag((MR_Integer) 1)));
#line 145 "headvar_names.m"
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 145 "headvar_names.m"
                      hlds__headvar_names__OtherVar_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__V_44_44, (MR_Integer) 0)));
#line 145 "headvar_names.m"
                  }
#line 270 "headvar_names.m"
              }
#line 144 "headvar_names.m"
            if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 149 "headvar_names.m"
              {
#line 153 "headvar_names.m"
                MR_Word hlds__headvar_names__TypeInfo_59_59;

#line 152 "headvar_names.m"
                {
#line 152 "headvar_names.m"
                  (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = hlds__hlds_args__proc_arg_vector_member_2_p_0((MR_Word) &hlds__headvar_names_scalar_common_1[0], hlds__headvar_names__HeadVars_2, ((MR_Box) (hlds__headvar_names__OtherVar_29)));
                }
#line 152 "headvar_names.m"
                (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
#line 152 "headvar_names.m"
                if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 152 "headvar_names.m"
                  {
#line 2329 "hlds.headvar_names.c"
                    hlds__headvar_names__TypeInfo_59_59 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
#line 153 "headvar_names.m"
                    {
#line 153 "headvar_names.m"
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__list__member_2_p_0(hlds__headvar_names__TypeInfo_59_59, ((MR_Box) (hlds__headvar_names__OtherVar_29)), hlds__headvar_names__SeenVars0_3);
                    }
#line 153 "headvar_names.m"
                    (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
#line 152 "headvar_names.m"
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 152 "headvar_names.m"
                      {
#line 159 "headvar_names.m"
                        {
#line 159 "headvar_names.m"
                          hlds__headvar_names__improve_single_clause_headvars_9_p_0_5(&hlds__headvar_names__env);
                        }
#line 155 "headvar_names.m"
                        (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
#line 152 "headvar_names.m"
                      }
#line 152 "headvar_names.m"
                  }
#line 149 "headvar_names.m"
                if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 166 "headvar_names.m"
                  {
#line 166 "headvar_names.m"
                    MR_Word hlds__headvar_names__TypeInfo_63_63;
#line 170 "headvar_names.m"
                    MR_String hlds__headvar_names__HeadVarName_36;
#line 171 "headvar_names.m"
                    MR_Word hlds__headvar_names__TypeCtorInfo_65_65;
#line 171 "headvar_names.m"
                    MR_String hlds__headvar_names__V_35_35;

#line 166 "headvar_names.m"
                    {
#line 166 "headvar_names.m"
                      hlds__headvar_names__SeenVars_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 166 "headvar_names.m"
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__SeenVars_34, 0) = ((MR_Box) (hlds__headvar_names__OtherVar_29));
#line 166 "headvar_names.m"
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__SeenVars_34, 1) = ((MR_Box) (hlds__headvar_names__SeenVars0_3));
#line 166 "headvar_names.m"
                    }
#line 2376 "hlds.headvar_names.c"
                    hlds__headvar_names__TypeInfo_63_63 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
#line 167 "headvar_names.m"
                    {
#line 167 "headvar_names.m"
                      mercury__map__det_insert_4_p_0(hlds__headvar_names__TypeInfo_63_63, hlds__headvar_names__TypeInfo_63_63, ((MR_Box) ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28)), ((MR_Box) (hlds__headvar_names__OtherVar_29)), hlds__headvar_names__STATE_VARIABLE_Subst_0_6, &hlds__headvar_names__STATE_VARIABLE_Subst_45_45);
                    }
#line 171 "headvar_names.m"
                    {
#line 171 "headvar_names.m"
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, hlds__headvar_names__OtherVar_29, &hlds__headvar_names__V_35_35);
                    }
#line 171 "headvar_names.m"
                    (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = !((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded);
#line 171 "headvar_names.m"
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 171 "headvar_names.m"
                      {
#line 2394 "hlds.headvar_names.c"
                        hlds__headvar_names__TypeCtorInfo_65_65 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 172 "headvar_names.m"
                        {
#line 172 "headvar_names.m"
                          (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0(hlds__headvar_names__TypeCtorInfo_65_65, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, &hlds__headvar_names__HeadVarName_36);
                        }
#line 171 "headvar_names.m"
                      }
#line 170 "headvar_names.m"
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 174 "headvar_names.m"
                      {
#line 174 "headvar_names.m"
                        {
#line 174 "headvar_names.m"
                          mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__OtherVar_29, hlds__headvar_names__HeadVarName_36, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, &hlds__headvar_names__STATE_VARIABLE_VarSet_46_46);
                        }
#line 174 "headvar_names.m"
                      }
#line 170 "headvar_names.m"
                    else
#line 170 "headvar_names.m"
                      hlds__headvar_names__STATE_VARIABLE_VarSet_46_46 = hlds__headvar_names__STATE_VARIABLE_VarSet_0_4;
#line 166 "headvar_names.m"
                    hlds__headvar_names__STATE_VARIABLE_RevConj_47_47 = (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8;
#line 166 "headvar_names.m"
                  }
#line 149 "headvar_names.m"
                else
#line 179 "headvar_names.m"
                  {
#line 181 "headvar_names.m"
                    MR_String hlds__headvar_names__OtherVarName_37;

#line 179 "headvar_names.m"
                    {
#line 179 "headvar_names.m"
                      hlds__headvar_names__STATE_VARIABLE_RevConj_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 179 "headvar_names.m"
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_RevConj_47_47, 0) = ((MR_Box) (hlds__headvar_names__Goal_21));
#line 179 "headvar_names.m"
                      MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_RevConj_47_47, 1) = ((MR_Box) ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8));
#line 179 "headvar_names.m"
                    }
#line 180 "headvar_names.m"
                    hlds__headvar_names__SeenVars_34 = hlds__headvar_names__SeenVars0_3;
#line 181 "headvar_names.m"
                    {
#line 181 "headvar_names.m"
                      (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, hlds__headvar_names__OtherVar_29, &hlds__headvar_names__OtherVarName_37);
                    }
#line 181 "headvar_names.m"
                    if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 184 "headvar_names.m"
                      {
#line 184 "headvar_names.m"
                        {
#line 184 "headvar_names.m"
                          mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, hlds__headvar_names__OtherVarName_37, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, &hlds__headvar_names__STATE_VARIABLE_VarSet_46_46);
                        }
#line 184 "headvar_names.m"
                      }
#line 181 "headvar_names.m"
                    else
#line 185 "headvar_names.m"
                      {
#line 185 "headvar_names.m"
                        MR_String hlds__headvar_names__HeadVarName_55;

#line 185 "headvar_names.m"
                        {
#line 185 "headvar_names.m"
                          (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded = mercury__varset__search_name_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__HeadVar_28, &hlds__headvar_names__HeadVarName_55);
                        }
#line 185 "headvar_names.m"
                        if ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__succeeded)
#line 187 "headvar_names.m"
                          {
#line 187 "headvar_names.m"
                            {
#line 187 "headvar_names.m"
                              mercury__varset__name_var_4_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, hlds__headvar_names__OtherVar_29, hlds__headvar_names__HeadVarName_55, hlds__headvar_names__STATE_VARIABLE_VarSet_0_4, &hlds__headvar_names__STATE_VARIABLE_VarSet_46_46);
                            }
#line 187 "headvar_names.m"
                          }
#line 185 "headvar_names.m"
                        else
#line 185 "headvar_names.m"
                          hlds__headvar_names__STATE_VARIABLE_VarSet_46_46 = hlds__headvar_names__STATE_VARIABLE_VarSet_0_4;
#line 185 "headvar_names.m"
                      }
#line 179 "headvar_names.m"
                    hlds__headvar_names__STATE_VARIABLE_Subst_45_45 = hlds__headvar_names__STATE_VARIABLE_Subst_0_6;
#line 179 "headvar_names.m"
                  }
#line 149 "headvar_names.m"
              }
#line 144 "headvar_names.m"
            else
#line 193 "headvar_names.m"
              {
#line 193 "headvar_names.m"
                {
#line 193 "headvar_names.m"
                  hlds__headvar_names__STATE_VARIABLE_RevConj_47_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 193 "headvar_names.m"
                  MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_RevConj_47_47, 0) = ((MR_Box) (hlds__headvar_names__Goal_21));
#line 193 "headvar_names.m"
                  MR_hl_field(MR_mktag(1), hlds__headvar_names__STATE_VARIABLE_RevConj_47_47, 1) = ((MR_Box) ((hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8));
#line 193 "headvar_names.m"
                }
#line 194 "headvar_names.m"
                hlds__headvar_names__SeenVars_34 = hlds__headvar_names__SeenVars0_3;
#line 193 "headvar_names.m"
                hlds__headvar_names__STATE_VARIABLE_Subst_45_45 = hlds__headvar_names__STATE_VARIABLE_Subst_0_6;
#line 193 "headvar_names.m"
                hlds__headvar_names__STATE_VARIABLE_VarSet_46_46 = hlds__headvar_names__STATE_VARIABLE_VarSet_0_4;
#line 193 "headvar_names.m"
              }
#line 196 "headvar_names.m"
            /* direct tailcall eliminated */
#line 196 "headvar_names.m"
            {
#line 196 "headvar_names.m"
              MR_Word hlds__headvar_names__HeadVar__1__tmp_copy_1 = (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__Conj0_22;
#line 196 "headvar_names.m"
              MR_Word hlds__headvar_names__SeenVars0__tmp_copy_3 = hlds__headvar_names__SeenVars_34;
#line 196 "headvar_names.m"
              MR_Word hlds__headvar_names__STATE_VARIABLE_VarSet_0__tmp_copy_4 = hlds__headvar_names__STATE_VARIABLE_VarSet_46_46;
#line 196 "headvar_names.m"
              MR_Word hlds__headvar_names__STATE_VARIABLE_Subst_0__tmp_copy_6 = hlds__headvar_names__STATE_VARIABLE_Subst_45_45;
#line 196 "headvar_names.m"
              MR_Word hlds__headvar_names__STATE_VARIABLE_RevConj_0__tmp_copy_8 = hlds__headvar_names__STATE_VARIABLE_RevConj_47_47;

#line 196 "headvar_names.m"
              (hlds__headvar_names__env).hlds__headvar_names__improve_single_clause_headvars_9_p_0_env_0__STATE_VARIABLE_RevConj_0_8 = hlds__headvar_names__STATE_VARIABLE_RevConj_0__tmp_copy_8;
#line 196 "headvar_names.m"
              hlds__headvar_names__STATE_VARIABLE_Subst_0_6 = hlds__headvar_names__STATE_VARIABLE_Subst_0__tmp_copy_6;
#line 196 "headvar_names.m"
              hlds__headvar_names__STATE_VARIABLE_VarSet_0_4 = hlds__headvar_names__STATE_VARIABLE_VarSet_0__tmp_copy_4;
#line 196 "headvar_names.m"
              hlds__headvar_names__SeenVars0_3 = hlds__headvar_names__SeenVars0__tmp_copy_3;
#line 196 "headvar_names.m"
              hlds__headvar_names__HeadVar__1_1 = hlds__headvar_names__HeadVar__1__tmp_copy_1;
#line 196 "headvar_names.m"
            }
#line 196 "headvar_names.m"
            continue;
#line 143 "headvar_names.m"
          }
#line 141 "headvar_names.m"
        break;
#line 141 "headvar_names.m"
      }
#line 135 "headvar_names.m"
  }
#line 135 "headvar_names.m"
}

#line 127 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(
#line 127 "headvar_names.m"
  MR_Word hlds__headvar_names__ConsensusMap_5,
#line 127 "headvar_names.m"
  MR_Integer hlds__headvar_names__ProcId_6,
#line 127 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_ProcTable_0_10,
#line 127 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_ProcTable_11)
#line 127 "headvar_names.m"
{
#line 130 "headvar_names.m"
  {
#line 130 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 130 "headvar_names.m"
    MR_Word hlds__headvar_names__TypeCtorInfo_14_14 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0;
#line 130 "headvar_names.m"
    MR_Word hlds__headvar_names__ProcInfo0_8;
#line 130 "headvar_names.m"
    MR_Word hlds__headvar_names__ProcInfo_9;
#line 131 "headvar_names.m"
    MR_Box hlds__headvar_names__conv0_ProcInfo0_8;

#line 131 "headvar_names.m"
    {
#line 131 "headvar_names.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(hlds__headvar_names__TypeCtorInfo_14_14, hlds__headvar_names__STATE_VARIABLE_ProcTable_0_10, hlds__headvar_names__ProcId_6, &hlds__headvar_names__conv0_ProcInfo0_8);
    }
#line 131 "headvar_names.m"
    hlds__headvar_names__ProcInfo0_8 = ((MR_Word) hlds__headvar_names__conv0_ProcInfo0_8);
#line 132 "headvar_names.m"
    {
#line 132 "headvar_names.m"
      hlds__hlds_pred__proc_info_set_var_name_remap_3_p_0(hlds__headvar_names__ConsensusMap_5, hlds__headvar_names__ProcInfo0_8, &hlds__headvar_names__ProcInfo_9);
    }
#line 133 "headvar_names.m"
    {
#line 133 "headvar_names.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_101_116_95_117_112_100_97_116_101_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(hlds__headvar_names__TypeCtorInfo_14_14, hlds__headvar_names__ProcId_6, ((MR_Box) (hlds__headvar_names__ProcInfo_9)), hlds__headvar_names__STATE_VARIABLE_ProcTable_0_10, hlds__headvar_names__STATE_VARIABLE_ProcTable_11);
    }
#line 130 "headvar_names.m"
  }
#line 127 "headvar_names.m"
}

#line 121 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3(
#line 121 "headvar_names.m"
  MR_Box hlds__headvar_names__closure_arg,
#line 121 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 121 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 121 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_3)
#line 121 "headvar_names.m"
{
#line 121 "headvar_names.m"
  {
#line 121 "headvar_names.m"
    MR_Box hlds__headvar_names__closure = hlds__headvar_names__closure_arg;
#line 121 "headvar_names.m"
    MR_Word hlds__headvar_names__conv4_STATE_VARIABLE_ProcTable_11;

#line 121 "headvar_names.m"
    {
#line 121 "headvar_names.m"
      hlds__headvar_names__set_var_name_remap_in_proc_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 3))), ((MR_Integer) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2), &hlds__headvar_names__conv4_STATE_VARIABLE_ProcTable_11);
    }
#line 121 "headvar_names.m"
    *hlds__headvar_names__wrapper_arg_3 = ((MR_Box) (hlds__headvar_names__conv4_STATE_VARIABLE_ProcTable_11));
#line 121 "headvar_names.m"
  }
#line 121 "headvar_names.m"
}

#line 298 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2(
#line 298 "headvar_names.m"
  MR_Box hlds__headvar_names__closure_arg,
#line 298 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 298 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_2,
#line 298 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_3)
#line 298 "headvar_names.m"
{
#line 298 "headvar_names.m"
  {
#line 298 "headvar_names.m"
    MR_Box hlds__headvar_names__closure = hlds__headvar_names__closure_arg;
#line 298 "headvar_names.m"
    MR_Word hlds__headvar_names__conv2_STATE_VARIABLE_ConsensusMap_11;

#line 298 "headvar_names.m"
    {
#line 298 "headvar_names.m"
      hlds__headvar_names__update_consensus_map_for_headvar_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 3))), ((MR_Word) hlds__headvar_names__wrapper_arg_1), ((MR_Word) hlds__headvar_names__wrapper_arg_2), &hlds__headvar_names__conv2_STATE_VARIABLE_ConsensusMap_11);
    }
#line 298 "headvar_names.m"
    *hlds__headvar_names__wrapper_arg_3 = ((MR_Box) (hlds__headvar_names__conv2_STATE_VARIABLE_ConsensusMap_11));
#line 298 "headvar_names.m"
  }
#line 298 "headvar_names.m"
}

#line 100 "headvar_names.m"
static void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1(
#line 100 "headvar_names.m"
  MR_Box hlds__headvar_names__closure_arg,
#line 100 "headvar_names.m"
  MR_Box hlds__headvar_names__wrapper_arg_1,
#line 100 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_2,
#line 100 "headvar_names.m"
  MR_Box * hlds__headvar_names__wrapper_arg_3)
#line 100 "headvar_names.m"
{
#line 100 "headvar_names.m"
  {
#line 100 "headvar_names.m"
    MR_Box hlds__headvar_names__closure = hlds__headvar_names__closure_arg;
#line 100 "headvar_names.m"
    MR_Word hlds__headvar_names__conv1_VarNameInfoMap_9;
#line 100 "headvar_names.m"
    MR_Word hlds__headvar_names__conv0_VarsInMap_10;

#line 100 "headvar_names.m"
    {
#line 100 "headvar_names.m"
      hlds__headvar_names__find_headvar_names_in_clause_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__closure, (MR_Integer) 4))), ((MR_Word) hlds__headvar_names__wrapper_arg_1), &hlds__headvar_names__conv1_VarNameInfoMap_9, &hlds__headvar_names__conv0_VarsInMap_10);
    }
#line 100 "headvar_names.m"
    *hlds__headvar_names__wrapper_arg_2 = ((MR_Box) (hlds__headvar_names__conv1_VarNameInfoMap_9));
#line 100 "headvar_names.m"
    *hlds__headvar_names__wrapper_arg_3 = ((MR_Box) (hlds__headvar_names__conv0_VarsInMap_10));
#line 100 "headvar_names.m"
  }
#line 100 "headvar_names.m"
}

#line 29 "headvar_names.m"
void MR_CALL 
hlds__headvar_names__maybe_improve_headvar_names_3_p_0(
#line 29 "headvar_names.m"
  MR_Word hlds__headvar_names__Globals_4,
#line 29 "headvar_names.m"
  MR_Word hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40,
#line 29 "headvar_names.m"
  MR_Word * hlds__headvar_names__STATE_VARIABLE_PredInfo_41)
#line 29 "headvar_names.m"
{
#line 53 "headvar_names.m"
  {
#line 53 "headvar_names.m"
    MR_bool hlds__headvar_names__succeeded;
#line 53 "headvar_names.m"
    MR_Word hlds__headvar_names__MakeOpt_6;

#line 54 "headvar_names.m"
    {
#line 54 "headvar_names.m"
      libs__globals__lookup_bool_option_3_p_0(hlds__headvar_names__Globals_4, (MR_Integer) 87, &hlds__headvar_names__MakeOpt_6);
    }
#line 63 "headvar_names.m"
#line 63 "headvar_names.m"
    switch (hlds__headvar_names__MakeOpt_6) {
#line 63 "headvar_names.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 63 "headvar_names.m"
      case (MR_Integer) 0:
#line 64 "headvar_names.m"
        {
#line 64 "headvar_names.m"
          MR_Word hlds__headvar_names__ClausesInfo0_7;
#line 64 "headvar_names.m"
          MR_Word hlds__headvar_names__ClausesRep0_8;
#line 64 "headvar_names.m"
          MR_Word hlds__headvar_names__ItemNumbers_9;
#line 64 "headvar_names.m"
          MR_Word hlds__headvar_names__HeadVars0_10;
#line 64 "headvar_names.m"
          MR_Word hlds__headvar_names__VarSet0_11;
#line 64 "headvar_names.m"
          MR_Word hlds__headvar_names__Clauses0_12;

#line 65 "headvar_names.m"
          {
#line 65 "headvar_names.m"
            hlds__hlds_pred__pred_info_get_clauses_info_2_p_0(hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40, &hlds__headvar_names__ClausesInfo0_7);
          }
#line 66 "headvar_names.m"
          {
#line 66 "headvar_names.m"
            hlds__hlds_clauses__clauses_info_get_clauses_rep_3_p_0(hlds__headvar_names__ClausesInfo0_7, &hlds__headvar_names__ClausesRep0_8, &hlds__headvar_names__ItemNumbers_9);
          }
#line 67 "headvar_names.m"
          {
#line 67 "headvar_names.m"
            hlds__hlds_clauses__clauses_info_get_headvars_2_p_0(hlds__headvar_names__ClausesInfo0_7, &hlds__headvar_names__HeadVars0_10);
          }
#line 68 "headvar_names.m"
          {
#line 68 "headvar_names.m"
            hlds__hlds_clauses__clauses_info_get_varset_2_p_0(hlds__headvar_names__ClausesInfo0_7, &hlds__headvar_names__VarSet0_11);
          }
#line 69 "headvar_names.m"
          {
#line 69 "headvar_names.m"
            hlds__hlds_clauses__get_clause_list_for_replacement_2_p_0(hlds__headvar_names__ClausesRep0_8, &hlds__headvar_names__Clauses0_12);
          }
#line 72 "headvar_names.m"
          if ((hlds__headvar_names__Clauses0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "headvar_names.m"
            *hlds__headvar_names__STATE_VARIABLE_PredInfo_41 = hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40;
#line 72 "headvar_names.m"
          else
#line 72 "headvar_names.m"
            {
#line 72 "headvar_names.m"
              MR_Word hlds__headvar_names__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__Clauses0_12, (MR_Integer) 1)));
#line 72 "headvar_names.m"
              MR_Word hlds__headvar_names__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), hlds__headvar_names__Clauses0_12, (MR_Integer) 0)));

#line 72 "headvar_names.m"
              if ((hlds__headvar_names__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 73 "headvar_names.m"
                {
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__TypeInfo_62_62;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__Goal0_14;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__GoalInfo0_16;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__Conj0_17;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__VarSet_18;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__Subst_19;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__RevConj_20;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__NonLocals0_21;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__NonLocals_22;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__GoalInfo_23;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__Goal_24;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__HeadVars_25;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__ClausesInfo1_26;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__SingleClause_27;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__ClausesRep_28;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__ClausesInfo2_29;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__ClausesInfo_30;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_50_50;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_53_53;
#line 73 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_54_54;
#line 76 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_15_15;
#line 90 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_57_57;
#line 90 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_59_59;
#line 90 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_60_60;
#line 90 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_61_61;
#line 90 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_58_58;

#line 74 "headvar_names.m"
                  {
#line 74 "headvar_names.m"
                    hlds__headvar_names__Goal0_14 = hlds__hlds_clauses__clause_body_1_f_0(hlds__headvar_names__V_77_77);
                  }
#line 76 "headvar_names.m"
                  hlds__headvar_names__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal0_14, (MR_Integer) 0)));
#line 76 "headvar_names.m"
                  hlds__headvar_names__GoalInfo0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__Goal0_14, (MR_Integer) 1)));
#line 77 "headvar_names.m"
                  {
#line 77 "headvar_names.m"
                    hlds__hlds_goal__goal_to_conj_list_2_p_0(hlds__headvar_names__Goal0_14, &hlds__headvar_names__Conj0_17);
                  }
#line 2856 "hlds.headvar_names.c"
                  hlds__headvar_names__TypeInfo_62_62 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
#line 79 "headvar_names.m"
                  {
#line 79 "headvar_names.m"
                    hlds__headvar_names__V_50_50 = mercury__map__init_0_f_0(hlds__headvar_names__TypeInfo_62_62, hlds__headvar_names__TypeInfo_62_62);
                  }
#line 78 "headvar_names.m"
                  {
#line 78 "headvar_names.m"
                    hlds__headvar_names__improve_single_clause_headvars_9_p_0(hlds__headvar_names__Conj0_17, hlds__headvar_names__HeadVars0_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), hlds__headvar_names__VarSet0_11, &hlds__headvar_names__VarSet_18, hlds__headvar_names__V_50_50, &hlds__headvar_names__Subst_19, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &hlds__headvar_names__RevConj_20);
                  }
#line 81 "headvar_names.m"
                  {
#line 81 "headvar_names.m"
                    hlds__headvar_names__NonLocals0_21 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(hlds__headvar_names__GoalInfo0_16);
                  }
#line 82 "headvar_names.m"
                  {
#line 82 "headvar_names.m"
                    parse_tree__prog_rename__rename_vars_in_set_of_var_4_p_1((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, (MR_Integer) 1, hlds__headvar_names__Subst_19, hlds__headvar_names__NonLocals0_21, &hlds__headvar_names__NonLocals_22);
                  }
#line 84 "headvar_names.m"
                  {
#line 84 "headvar_names.m"
                    hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(hlds__headvar_names__NonLocals_22, hlds__headvar_names__GoalInfo0_16, &hlds__headvar_names__GoalInfo_23);
                  }
#line 85 "headvar_names.m"
                  {
#line 85 "headvar_names.m"
                    hlds__headvar_names__V_53_53 = mercury__list__reverse_1_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, hlds__headvar_names__RevConj_20);
                  }
#line 85 "headvar_names.m"
                  {
#line 85 "headvar_names.m"
                    hlds__hlds_goal__conj_list_to_goal_3_p_0(hlds__headvar_names__V_53_53, hlds__headvar_names__GoalInfo_23, &hlds__headvar_names__Goal_24);
                  }
#line 87 "headvar_names.m"
                  {
#line 87 "headvar_names.m"
                    hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_p_0(hlds__headvar_names__TypeInfo_62_62, hlds__headvar_names__Subst_19, hlds__headvar_names__HeadVars0_10, &hlds__headvar_names__HeadVars_25);
                  }
#line 88 "headvar_names.m"
                  {
#line 88 "headvar_names.m"
                    hlds__hlds_clauses__clauses_info_set_headvars_3_p_0(hlds__headvar_names__HeadVars_25, hlds__headvar_names__ClausesInfo0_7, &hlds__headvar_names__ClausesInfo1_26);
                  }
#line 90 "headvar_names.m"
                  hlds__headvar_names__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_77_77, (MR_Integer) 0)));
#line 90 "headvar_names.m"
                  hlds__headvar_names__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_77_77, (MR_Integer) 1)));
#line 90 "headvar_names.m"
                  hlds__headvar_names__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_77_77, (MR_Integer) 2)));
#line 90 "headvar_names.m"
                  hlds__headvar_names__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_77_77, (MR_Integer) 3)));
#line 90 "headvar_names.m"
                  hlds__headvar_names__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__headvar_names__V_77_77, (MR_Integer) 4)));
#line 90 "headvar_names.m"
                  {
#line 90 "headvar_names.m"
                    hlds__headvar_names__SingleClause_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 90 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 0) = ((MR_Box) (hlds__headvar_names__V_57_57));
#line 90 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 1) = ((MR_Box) (hlds__headvar_names__Goal_24));
#line 90 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 2) = ((MR_Box) (hlds__headvar_names__V_59_59));
#line 90 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 3) = ((MR_Box) (hlds__headvar_names__V_60_60));
#line 90 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__SingleClause_27, 4) = ((MR_Box) (hlds__headvar_names__V_61_61));
#line 90 "headvar_names.m"
                  }
#line 91 "headvar_names.m"
                  {
#line 91 "headvar_names.m"
                    hlds__headvar_names__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 91 "headvar_names.m"
                    MR_hl_field(MR_mktag(1), hlds__headvar_names__V_54_54, 0) = ((MR_Box) (hlds__headvar_names__SingleClause_27));
#line 91 "headvar_names.m"
                    MR_hl_field(MR_mktag(1), hlds__headvar_names__V_54_54, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 91 "headvar_names.m"
                  }
#line 91 "headvar_names.m"
                  {
#line 91 "headvar_names.m"
                    hlds__hlds_clauses__set_clause_list_2_p_0(hlds__headvar_names__V_54_54, &hlds__headvar_names__ClausesRep_28);
                  }
#line 92 "headvar_names.m"
                  {
#line 92 "headvar_names.m"
                    hlds__hlds_clauses__clauses_info_set_clauses_rep_4_p_0(hlds__headvar_names__ClausesRep_28, hlds__headvar_names__ItemNumbers_9, hlds__headvar_names__ClausesInfo1_26, &hlds__headvar_names__ClausesInfo2_29);
                  }
#line 94 "headvar_names.m"
                  {
#line 94 "headvar_names.m"
                    hlds__hlds_clauses__clauses_info_set_varset_3_p_0(hlds__headvar_names__VarSet_18, hlds__headvar_names__ClausesInfo2_29, &hlds__headvar_names__ClausesInfo_30);
                  }
#line 95 "headvar_names.m"
                  {
#line 95 "headvar_names.m"
                    hlds__hlds_pred__pred_info_set_clauses_info_3_p_0(hlds__headvar_names__ClausesInfo_30, hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40, hlds__headvar_names__STATE_VARIABLE_PredInfo_41);
                  }
#line 73 "headvar_names.m"
                }
#line 72 "headvar_names.m"
              else
#line 97 "headvar_names.m"
                {
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__TypeInfo_11_85;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__VarNameInfoMaps_34;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__VarsInMapSets_35;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__ConsensusMap_36;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__ProcIds_37;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__ProcTable0_38;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__ProcTable_39;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_44_44;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__STATE_VARIABLE_PredInfo_45_45;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_46_46;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__VarsInMapSet_81;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__VarsInMaps_82;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_83_83;
#line 97 "headvar_names.m"
                  MR_Word hlds__headvar_names__V_84_84;
#line 298 "headvar_names.m"
                  MR_Box hlds__headvar_names__conv3_ConsensusMap_36;
#line 121 "headvar_names.m"
                  MR_Box hlds__headvar_names__conv5_ProcTable_39;

#line 100 "headvar_names.m"
                  {
#line 100 "headvar_names.m"
                    hlds__headvar_names__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 100 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_44_44, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_3[0]));
#line 100 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_44_44, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_1));
#line 100 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 100 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_44_44, 3) = ((MR_Box) (hlds__headvar_names__VarSet0_11));
#line 100 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_44_44, 4) = ((MR_Box) (hlds__headvar_names__HeadVars0_10));
#line 100 "headvar_names.m"
                  }
#line 100 "headvar_names.m"
                  {
#line 100 "headvar_names.m"
                    mercury__list__map2_4_p_0((MR_Word) &hlds__hlds_clauses__hlds__hlds_clauses__type_ctor_info_clause_0, (MR_Word) &hlds__headvar_names_scalar_common_2[0], (MR_Word) &hlds__headvar_names_scalar_common_1[1], hlds__headvar_names__V_44_44, hlds__headvar_names__Clauses0_12, &hlds__headvar_names__VarNameInfoMaps_34, &hlds__headvar_names__VarsInMapSets_35);
                  }
#line 3019 "hlds.headvar_names.c"
                  hlds__headvar_names__TypeInfo_11_85 = (MR_Word) &hlds__headvar_names_scalar_common_1[0];
#line 296 "headvar_names.m"
                  {
#line 296 "headvar_names.m"
                    hlds__headvar_names__VarsInMapSet_81 = mercury__set__union_list_1_f_0(hlds__headvar_names__TypeInfo_11_85, hlds__headvar_names__VarsInMapSets_35);
                  }
#line 297 "headvar_names.m"
                  {
#line 297 "headvar_names.m"
                    mercury__set__to_sorted_list_2_p_0(hlds__headvar_names__TypeInfo_11_85, hlds__headvar_names__VarsInMapSet_81, &hlds__headvar_names__VarsInMaps_82);
                  }
#line 298 "headvar_names.m"
                  {
#line 298 "headvar_names.m"
                    hlds__headvar_names__V_83_83 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 298 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_83_83, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_4[0]));
#line 298 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_83_83, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_2));
#line 298 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_83_83, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 298 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_83_83, 3) = ((MR_Box) (hlds__headvar_names__VarNameInfoMaps_34));
#line 298 "headvar_names.m"
                  }
#line 299 "headvar_names.m"
                  {
#line 299 "headvar_names.m"
                    hlds__headvar_names__V_84_84 = mercury__map__init_0_f_0(hlds__headvar_names__TypeInfo_11_85, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0);
                  }
#line 298 "headvar_names.m"
                  {
#line 298 "headvar_names.m"
                    mercury__list__foldl_4_p_0(hlds__headvar_names__TypeInfo_11_85, (MR_Word) &hlds__headvar_names_scalar_common_2[2], hlds__headvar_names__V_83_83, hlds__headvar_names__VarsInMaps_82, ((MR_Box) (hlds__headvar_names__V_84_84)), &hlds__headvar_names__conv3_ConsensusMap_36);
                  }
#line 298 "headvar_names.m"
                  hlds__headvar_names__ConsensusMap_36 = ((MR_Word) hlds__headvar_names__conv3_ConsensusMap_36);
#line 118 "headvar_names.m"
                  {
#line 118 "headvar_names.m"
                    hlds__hlds_pred__pred_info_set_var_name_remap_3_p_0(hlds__headvar_names__ConsensusMap_36, hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40, &hlds__headvar_names__STATE_VARIABLE_PredInfo_45_45);
                  }
#line 119 "headvar_names.m"
                  {
#line 119 "headvar_names.m"
                    hlds__headvar_names__ProcIds_37 = hlds__hlds_pred__pred_info_all_procids_1_f_0(hlds__headvar_names__STATE_VARIABLE_PredInfo_45_45);
                  }
#line 120 "headvar_names.m"
                  {
#line 120 "headvar_names.m"
                    hlds__hlds_pred__pred_info_get_proc_table_2_p_0(hlds__headvar_names__STATE_VARIABLE_PredInfo_45_45, &hlds__headvar_names__ProcTable0_38);
                  }
#line 121 "headvar_names.m"
                  {
#line 121 "headvar_names.m"
                    hlds__headvar_names__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 121 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_46_46, 0) = ((MR_Box) (&hlds__headvar_names_scalar_common_4[1]));
#line 121 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_46_46, 1) = ((MR_Box) (hlds__headvar_names__maybe_improve_headvar_names_3_p_0_3));
#line 121 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 121 "headvar_names.m"
                    MR_hl_field(MR_mktag(0), hlds__headvar_names__V_46_46, 3) = ((MR_Box) (hlds__headvar_names__ConsensusMap_36));
#line 121 "headvar_names.m"
                  }
#line 121 "headvar_names.m"
                  {
#line 121 "headvar_names.m"
                    mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &hlds__headvar_names_scalar_common_2[1], hlds__headvar_names__V_46_46, hlds__headvar_names__ProcIds_37, ((MR_Box) (hlds__headvar_names__ProcTable0_38)), &hlds__headvar_names__conv5_ProcTable_39);
                  }
#line 121 "headvar_names.m"
                  hlds__headvar_names__ProcTable_39 = ((MR_Word) hlds__headvar_names__conv5_ProcTable_39);
#line 123 "headvar_names.m"
                  {
#line 123 "headvar_names.m"
                    hlds__hlds_pred__pred_info_set_proc_table_3_p_0(hlds__headvar_names__ProcTable_39, hlds__headvar_names__STATE_VARIABLE_PredInfo_45_45, hlds__headvar_names__STATE_VARIABLE_PredInfo_41);
                  }
#line 97 "headvar_names.m"
                }
#line 72 "headvar_names.m"
            }
#line 64 "headvar_names.m"
        }
#line 63 "headvar_names.m"
        break;
#line 63 "headvar_names.m"
      case (MR_Integer) 1:
#line 62 "headvar_names.m"
        *hlds__headvar_names__STATE_VARIABLE_PredInfo_41 = hlds__headvar_names__STATE_VARIABLE_PredInfo_0_40;
#line 63 "headvar_names.m"
        break;
#line 63 "headvar_names.m"
    }
#line 53 "headvar_names.m"
  }
#line 29 "headvar_names.m"
}

void mercury__hlds__headvar_names__init(void)
{
}

void mercury__hlds__headvar_names__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_0);
	MR_register_type_ctor_info(&hlds__headvar_names__hlds__headvar_names__type_ctor_info_var_name_info_map_0);
}

void mercury__hlds__headvar_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.headvar_names. */
