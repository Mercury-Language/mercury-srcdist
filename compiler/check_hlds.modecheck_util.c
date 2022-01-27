/*
** Automatically generated from `modecheck_util.m'
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


/* :- module check_hlds.modecheck_util. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_util__init
ENDINIT
*/

#include "check_hlds.modecheck_util.mih"


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
#include "check_hlds.inst_match.mih"
#include "check_hlds.inst_test.mih"
#include "check_hlds.inst_util.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.modecheck_goal.mih"
#include "check_hlds.modecheck_unify.mih"
#include "check_hlds.polymorphism.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 151 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 154 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 157 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 160 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 163 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0;

#line 166 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0;

#line 169 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 172 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2];

#line 175 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2];

#line 178 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1;

#line 181 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1];

#line 184 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1];

#line 187 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2];

#line 190 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0[2];

#line 193 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0[2];

#line 196 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0;

#line 199 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2];

#line 202 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2];

#line 205 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1;

#line 208 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1];

#line 211 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1];

#line 214 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2];

#line 217 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0[2];

#line 220 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0[2];

#line 223 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 226 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
#line 229 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 231 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

#line 234 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
#line 237 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 239 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 241 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

#line 244 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
#line 247 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 249 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

#line 252 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
#line 255 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 257 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 259 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

#line 262 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
#line 265 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 267 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

#line 270 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
#line 273 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 275 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 277 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

#line 1025 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__IntroducedFrom__pred__build_call__1025__1_2_p_0(
#line 1025 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PolySpecs_45,
#line 1025 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_61);

#line 1079 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
#line 1079 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 1079 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 1079 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3);

#line 1079 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
#line 1079 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 1079 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2);

#line 1178 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
#line 1178 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__SubInst_5,
#line 1178 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstVar_6,
#line 1178 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9,
#line 1178 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_10);

#line 1175 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1(
#line 1175 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1175 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1175 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1175 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1175 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1175 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 1168 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(
#line 1168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PredInstInfo_8,
#line 1168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15,
#line 1168 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_16,
#line 1168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17,
#line 1168 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18);

#line 1165 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1(
#line 1165 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1165 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1165 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1165 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1165 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1165 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 1158 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(
#line 1158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__BoundInst_8,
#line 1158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
#line 1158 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
#line 1158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
#line 1158 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);

#line 1140 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
#line 1140 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1140 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1140 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1140 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3);

#line 1117 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2(
#line 1117 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1117 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1117 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1117 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1117 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1117 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 1122 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1(
#line 1122 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1122 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1122 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1122 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1122 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1122 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 1094 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
#line 1094 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1094 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_8,
#line 1094 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33,
#line 1094 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_34,
#line 1094 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35,
#line 1094 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);

#line 1085 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(
#line 1085 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1085 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Mode_8,
#line 1085 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
#line 1085 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
#line 1085 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
#line 1085 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);

#line 1025 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__build_call_11_p_0_1(
#line 1025 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg);

#line 972 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__build_call_11_p_0(
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__CalleeModuleName_12,
#line 972 "modecheck_util.m"
  MR_String check_hlds__modecheck_util__CalleePredName_13,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgVars_14,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgTypes_15,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NonLocals_16,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMapDelta_17,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_18,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_19,
#line 972 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_20,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_52,
#line 972 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_53);

#line 779 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_implied_mode_8_p_0(
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_9,
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarInst0_10,
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst0_11,
#line 779 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Var_12,
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36,
#line 779 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37,
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38,
#line 779 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);

#line 638 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 638 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum0_4,
#line 638 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__5_5,
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6,
#line 638 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7,
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 638 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);

#line 602 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(
#line 602 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadInstVars_6,
#line 602 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstVar_7,
#line 602 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Subst_8);

#line 501 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
#line 501 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 501 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 501 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 501 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 501 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 501 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 501 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7);

#line 484 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
#line 484 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 484 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 484 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 484 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 484 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 484 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 484 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7);

#line 370 "modecheck_util.m"
static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
#line 370 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_5,
#line 370 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_6,
#line 370 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_7);

#line 332 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
#line 332 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 332 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 332 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3);

#line 313 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
#line 313 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 313 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 313 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 313 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);

#line 1082 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
#line 1082 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1082 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1082 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1082 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1082 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1082 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 362 "modecheck_util.m"
static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
#line 362 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 362 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1);

#line 591 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1(
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
#line 591 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4);

#line 591 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1(
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
#line 591 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4);


static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[6][2];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_3[1][8];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_4[2][7];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_5[3][9];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_6[1][5];




static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[6][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&check_hlds__modecheck_util_scalar_common_1[0])),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_5[3][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0)),
    ((MR_Box) (&check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0))
  },
};

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&check_hlds__modecheck_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0)),
    ((MR_Box) (&check_hlds__modecheck_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 816 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 824 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 833 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 841 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 849 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__list__pti_list_1__plain_parse_tree__error_util__type_ctor_info_error_spec_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0
  }
};

#line 857 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0 = {
  (MR_String) "no_after_goals",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 872 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 880 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 886 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2] = {
  (MR_String) "after_instmap",
  (MR_String) "after_goals"
};

#line 892 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1 = {
  (MR_String) "after_goals",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1,
  NULL,
  NULL
};

#line 907 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

#line 912 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1
};

#line 917 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1
  }
};

#line 931 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0[2] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1,
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

#line 937 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 943 "check_hlds.modecheck_util.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_after_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____after_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____after_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "after_goals",
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0 },
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0
};

#line 960 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0 = {
  (MR_String) "no_extra_goals",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 975 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 981 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2] = {
  (MR_String) "extra_before_main",
  (MR_String) "extra_after_main"
};

#line 987 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1 = {
  (MR_String) "extra_goals",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1,
  check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1,
  NULL,
  NULL
};

#line 1002 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

#line 1007 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1
};

#line 1012 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1
  }
};

#line 1026 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0[2] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1,
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

#line 1032 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1038 "check_hlds.modecheck_util.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__modecheck_util____Unify____extra_goals_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____extra_goals_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "extra_goals",
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0 },
  {     check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0
};

#line 1055 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1063 "check_hlds.modecheck_util.c"
const MR_TypeCtorInfo_Struct check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_inst_expansions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001)),
  ((MR_Box) (check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001)),
  (MR_String) "check_hlds.modecheck_util",
  (MR_String) "inst_expansions",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1080 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
#line 1083 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1085 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
#line 1087 "check_hlds.modecheck_util.c"
{
#line 1089 "check_hlds.modecheck_util.c"
  {
#line 1091 "check_hlds.modecheck_util.c"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1094 "check_hlds.modecheck_util.c"
    {
#line 1096 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____after_goals_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 1099 "check_hlds.modecheck_util.c"
    return check_hlds__modecheck_util__succeeded;
#line 1101 "check_hlds.modecheck_util.c"
  }
#line 1103 "check_hlds.modecheck_util.c"
}

#line 1106 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
#line 1109 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 1111 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1113 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
#line 1115 "check_hlds.modecheck_util.c"
{
#line 1117 "check_hlds.modecheck_util.c"
  {
#line 1119 "check_hlds.modecheck_util.c"
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

#line 1122 "check_hlds.modecheck_util.c"
    {
#line 1124 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util____Compare____after_goals_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
#line 1127 "check_hlds.modecheck_util.c"
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
#line 1129 "check_hlds.modecheck_util.c"
  }
#line 1131 "check_hlds.modecheck_util.c"
}

#line 1134 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
#line 1137 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1139 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
#line 1141 "check_hlds.modecheck_util.c"
{
#line 1143 "check_hlds.modecheck_util.c"
  {
#line 1145 "check_hlds.modecheck_util.c"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1148 "check_hlds.modecheck_util.c"
    {
#line 1150 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 1153 "check_hlds.modecheck_util.c"
    return check_hlds__modecheck_util__succeeded;
#line 1155 "check_hlds.modecheck_util.c"
  }
#line 1157 "check_hlds.modecheck_util.c"
}

#line 1160 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
#line 1163 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 1165 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1167 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
#line 1169 "check_hlds.modecheck_util.c"
{
#line 1171 "check_hlds.modecheck_util.c"
  {
#line 1173 "check_hlds.modecheck_util.c"
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

#line 1176 "check_hlds.modecheck_util.c"
    {
#line 1178 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util____Compare____extra_goals_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
#line 1181 "check_hlds.modecheck_util.c"
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
#line 1183 "check_hlds.modecheck_util.c"
  }
#line 1185 "check_hlds.modecheck_util.c"
}

#line 1188 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
#line 1191 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1193 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
#line 1195 "check_hlds.modecheck_util.c"
{
#line 1197 "check_hlds.modecheck_util.c"
  {
#line 1199 "check_hlds.modecheck_util.c"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1202 "check_hlds.modecheck_util.c"
    {
#line 1204 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____inst_expansions_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 1207 "check_hlds.modecheck_util.c"
    return check_hlds__modecheck_util__succeeded;
#line 1209 "check_hlds.modecheck_util.c"
  }
#line 1211 "check_hlds.modecheck_util.c"
}

#line 1214 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
#line 1217 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 1219 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1221 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
#line 1223 "check_hlds.modecheck_util.c"
{
#line 1225 "check_hlds.modecheck_util.c"
  {
#line 1227 "check_hlds.modecheck_util.c"
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

#line 1230 "check_hlds.modecheck_util.c"
    {
#line 1232 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util____Compare____inst_expansions_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
#line 1235 "check_hlds.modecheck_util.c"
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
#line 1237 "check_hlds.modecheck_util.c"
  }
#line 1239 "check_hlds.modecheck_util.c"
}

#line 172 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(
#line 172 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModeContext_5,
#line 172 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__UnifyContext_6)
#line 172 "modecheck_util.m"
{
#line 1051 "modecheck_util.m"
  {
#line 1051 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1051 "modecheck_util.m"
#line 1051 "modecheck_util.m"
    switch (MR_tag((MR_Word) check_hlds__modecheck_util__ModeContext_5)) {
#line 1051 "modecheck_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1051 "modecheck_util.m"
      case (MR_Integer) 0:
#line 1056 "modecheck_util.m"
        {
#line 1057 "modecheck_util.m"
          {
#line 1057 "modecheck_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.mode_context_to_unify_context\'/3", (MR_String) "uninitialized context");
#line 1057 "modecheck_util.m"
            return;
          }
#line 1056 "modecheck_util.m"
        }
#line 1051 "modecheck_util.m"
        break;
#line 1051 "modecheck_util.m"
      case (MR_Integer) 1:
#line 1053 "modecheck_util.m"
        {
#line 1053 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__CallId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 0)));
#line 1053 "modecheck_util.m"
          MR_Integer check_hlds__modecheck_util__Arg_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 1)));
#line 1053 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_13_13;

#line 1054 "modecheck_util.m"
          {
#line 1054 "modecheck_util.m"
            check_hlds__modecheck_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1054 "modecheck_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__V_13_13, 0) = ((MR_Box) (check_hlds__modecheck_util__CallId_8));
#line 1054 "modecheck_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__V_13_13, 1) = ((MR_Box) (check_hlds__modecheck_util__Arg_9));
#line 1054 "modecheck_util.m"
          }
#line 1054 "modecheck_util.m"
          {
#line 1054 "modecheck_util.m"
            MR_Word base;
#line 1054 "modecheck_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1054 "modecheck_util.m"
            *check_hlds__modecheck_util__UnifyContext_6 = base;
#line 1054 "modecheck_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_util__V_13_13));
#line 1054 "modecheck_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1054 "modecheck_util.m"
          }
#line 1053 "modecheck_util.m"
        }
#line 1051 "modecheck_util.m"
        break;
#line 1051 "modecheck_util.m"
      case (MR_Integer) 2:
#line 1051 "modecheck_util.m"
        {
#line 1051 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_7_7;

#line 1051 "modecheck_util.m"
          *check_hlds__modecheck_util__UnifyContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 0)));
#line 1051 "modecheck_util.m"
          check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 1)));
#line 1051 "modecheck_util.m"
        }
#line 1051 "modecheck_util.m"
        break;
#line 1051 "modecheck_util.m"
    }
#line 1051 "modecheck_util.m"
  }
#line 172 "modecheck_util.m"
}

#line 1025 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__IntroducedFrom__pred__build_call__1025__1_2_p_0(
#line 1025 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PolySpecs_45,
#line 1025 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_61)
#line 1025 "modecheck_util.m"
{
#line 1025 "modecheck_util.m"
  {
#line 1025 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1025 "modecheck_util.m"
    {
#line 1025 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[2], ((MR_Box) (check_hlds__modecheck_util__PolySpecs_45)), ((MR_Box) (check_hlds__modecheck_util__HeadVar__2_61)));
    }
#line 1025 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 1025 "modecheck_util.m"
  }
#line 1025 "modecheck_util.m"
}

#line 1079 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
#line 1079 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 1079 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 1079 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
#line 1079 "modecheck_util.m"
{
#line 1079 "modecheck_util.m"
  {
#line 1079 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1079 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Cast_HeadVar1_4 = check_hlds__modecheck_util__HeadVar__2_2;
#line 1079 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Cast_HeadVar2_5 = check_hlds__modecheck_util__HeadVar__3_3;

#line 1079 "modecheck_util.m"
    {
#line 1079 "modecheck_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar2_5)));
    }
#line 1079 "modecheck_util.m"
  }
#line 1079 "modecheck_util.m"
}

#line 1079 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
#line 1079 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 1079 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
#line 1079 "modecheck_util.m"
{
#line 1079 "modecheck_util.m"
  {
#line 1079 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1079 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Cast_HeadVar1_3 = check_hlds__modecheck_util__HeadVar__1_1;
#line 1079 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Cast_HeadVar2_4 = check_hlds__modecheck_util__HeadVar__2_2;

#line 1079 "modecheck_util.m"
    {
#line 1079 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar2_4)));
    }
#line 1079 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 1079 "modecheck_util.m"
  }
#line 1079 "modecheck_util.m"
}

#line 31 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0(
#line 31 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 31 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 31 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
#line 31 "modecheck_util.m"
{
#line 31 "modecheck_util.m"
  {
#line 31 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 31 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_13 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;
#line 31 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_14 = (MR_Integer) check_hlds__modecheck_util__HeadVar__3_3;

#line 31 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_13 == check_hlds__modecheck_util__CastY_14);
#line 31 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1447 "check_hlds.modecheck_util.c"
      *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "modecheck_util.m"
    else
#line 31 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 31 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 31 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 31 "modecheck_util.m"
      else
#line 1459 "check_hlds.modecheck_util.c"
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 1;
#line 31 "modecheck_util.m"
    else
#line 31 "modecheck_util.m"
      {
#line 31 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 31 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));

#line 31 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1472 "check_hlds.modecheck_util.c"
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 2;
#line 31 "modecheck_util.m"
        else
#line 31 "modecheck_util.m"
          {
#line 31 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 31 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 31 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_12_12;

#line 31 "modecheck_util.m"
            {
#line 31 "modecheck_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[3], &check_hlds__modecheck_util__V_12_12, ((MR_Box) (check_hlds__modecheck_util__V_18_18)), ((MR_Box) (check_hlds__modecheck_util__V_10_10)));
            }
#line 1490 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_12_12 == (MR_Integer) 0);
#line 31 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 31 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 31 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__V_12_12;
#line 31 "modecheck_util.m"
            else
#line 31 "modecheck_util.m"
              {
#line 31 "modecheck_util.m"
                {
#line 31 "modecheck_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[3], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__V_17_17)), ((MR_Box) (check_hlds__modecheck_util__V_11_11)));
                }
#line 31 "modecheck_util.m"
              }
#line 31 "modecheck_util.m"
          }
#line 31 "modecheck_util.m"
      }
#line 31 "modecheck_util.m"
  }
#line 31 "modecheck_util.m"
}

#line 31 "modecheck_util.m"
MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0(
#line 31 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 31 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
#line 31 "modecheck_util.m"
{
#line 31 "modecheck_util.m"
  {
#line 31 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 31 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_9 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 31 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_10 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 31 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_9 == check_hlds__modecheck_util__CastY_10);
#line 31 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 31 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 31 "modecheck_util.m"
    else
#line 31 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 31 "modecheck_util.m"
      {
#line 31 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__CastX_3 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 31 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__CastY_4 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 31 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastY_4 == check_hlds__modecheck_util__CastX_3);
#line 31 "modecheck_util.m"
      }
#line 31 "modecheck_util.m"
    else
#line 31 "modecheck_util.m"
      {
#line 31 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__TypeInfo_11_11;
#line 31 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__TypeInfo_12_12;
#line 31 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 31 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 31 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_7_7;
#line 31 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_8_8;

#line 31 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 31 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 31 "modecheck_util.m"
          {
#line 31 "modecheck_util.m"
            check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 31 "modecheck_util.m"
            check_hlds__modecheck_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1584 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__TypeInfo_11_11 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[3];
#line 1586 "check_hlds.modecheck_util.c"
            {
#line 1588 "check_hlds.modecheck_util.c"
              check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_11_11, ((MR_Box) (check_hlds__modecheck_util__V_5_5)), ((MR_Box) (check_hlds__modecheck_util__V_7_7)));
            }
#line 31 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 31 "modecheck_util.m"
              {
#line 1595 "check_hlds.modecheck_util.c"
                check_hlds__modecheck_util__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[3];
#line 1597 "check_hlds.modecheck_util.c"
                {
#line 1599 "check_hlds.modecheck_util.c"
                  check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_util__V_6_6)), ((MR_Box) (check_hlds__modecheck_util__V_8_8)));
                }
#line 31 "modecheck_util.m"
              }
#line 31 "modecheck_util.m"
          }
#line 31 "modecheck_util.m"
      }
#line 31 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 31 "modecheck_util.m"
  }
#line 31 "modecheck_util.m"
}

#line 41 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0(
#line 41 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 41 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 41 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
#line 41 "modecheck_util.m"
{
#line 41 "modecheck_util.m"
  {
#line 41 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 41 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_13 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;
#line 41 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_14 = (MR_Integer) check_hlds__modecheck_util__HeadVar__3_3;

#line 41 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_13 == check_hlds__modecheck_util__CastY_14);
#line 41 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1639 "check_hlds.modecheck_util.c"
      *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "modecheck_util.m"
    else
#line 41 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 41 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 41 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 41 "modecheck_util.m"
      else
#line 1651 "check_hlds.modecheck_util.c"
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 1;
#line 41 "modecheck_util.m"
    else
#line 41 "modecheck_util.m"
      {
#line 41 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 41 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));

#line 41 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1664 "check_hlds.modecheck_util.c"
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 2;
#line 41 "modecheck_util.m"
        else
#line 41 "modecheck_util.m"
          {
#line 41 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 41 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 41 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_12_12;

#line 41 "modecheck_util.m"
            {
#line 41 "modecheck_util.m"
              hlds__instmap____Compare____instmap_0_0(&check_hlds__modecheck_util__V_12_12, check_hlds__modecheck_util__V_18_18, check_hlds__modecheck_util__V_10_10);
            }
#line 1682 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_12_12 == (MR_Integer) 0);
#line 41 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 41 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 41 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__V_12_12;
#line 41 "modecheck_util.m"
            else
#line 41 "modecheck_util.m"
              {
#line 41 "modecheck_util.m"
                {
#line 41 "modecheck_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[3], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__V_17_17)), ((MR_Box) (check_hlds__modecheck_util__V_11_11)));
                }
#line 41 "modecheck_util.m"
              }
#line 41 "modecheck_util.m"
          }
#line 41 "modecheck_util.m"
      }
#line 41 "modecheck_util.m"
  }
#line 41 "modecheck_util.m"
}

#line 41 "modecheck_util.m"
MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0(
#line 41 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 41 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
#line 41 "modecheck_util.m"
{
#line 41 "modecheck_util.m"
  {
#line 41 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 41 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_9 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 41 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_10 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 41 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_9 == check_hlds__modecheck_util__CastY_10);
#line 41 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 41 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 41 "modecheck_util.m"
    else
#line 41 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 41 "modecheck_util.m"
      {
#line 41 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__CastX_3 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 41 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__CastY_4 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 41 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastY_4 == check_hlds__modecheck_util__CastX_3);
#line 41 "modecheck_util.m"
      }
#line 41 "modecheck_util.m"
    else
#line 41 "modecheck_util.m"
      {
#line 41 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__TypeInfo_12_12;
#line 41 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 41 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 41 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_7_7;
#line 41 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_8_8;

#line 41 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 41 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 41 "modecheck_util.m"
          {
#line 41 "modecheck_util.m"
            check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 41 "modecheck_util.m"
            check_hlds__modecheck_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1774 "check_hlds.modecheck_util.c"
            {
#line 1776 "check_hlds.modecheck_util.c"
              check_hlds__modecheck_util__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__modecheck_util__V_5_5, check_hlds__modecheck_util__V_7_7);
            }
#line 41 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 41 "modecheck_util.m"
              {
#line 1783 "check_hlds.modecheck_util.c"
                check_hlds__modecheck_util__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[3];
#line 1785 "check_hlds.modecheck_util.c"
                {
#line 1787 "check_hlds.modecheck_util.c"
                  check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_util__V_6_6)), ((MR_Box) (check_hlds__modecheck_util__V_8_8)));
                }
#line 41 "modecheck_util.m"
              }
#line 41 "modecheck_util.m"
          }
#line 41 "modecheck_util.m"
      }
#line 41 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 41 "modecheck_util.m"
  }
#line 41 "modecheck_util.m"
}

#line 1178 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
#line 1178 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__SubInst_5,
#line 1178 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstVar_6,
#line 1178 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9,
#line 1178 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_10)
#line 1178 "modecheck_util.m"
{
#line 1182 "modecheck_util.m"
  {
#line 1182 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1182 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__SubInst0_8;
#line 1182 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv0_SubInst0_8;

#line 1182 "modecheck_util.m"
    {
#line 1182 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9, ((MR_Box) (check_hlds__modecheck_util__InstVar_6)), &check_hlds__modecheck_util__conv0_SubInst0_8);
    }
#line 1182 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1182 "modecheck_util.m"
      {
#line 1182 "modecheck_util.m"
        check_hlds__modecheck_util__SubInst0_8 = ((MR_Word) check_hlds__modecheck_util__conv0_SubInst0_8);
#line 1182 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 1182 "modecheck_util.m"
      }
#line 1182 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1183 "modecheck_util.m"
      {
#line 1183 "modecheck_util.m"
        {
#line 1183 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__SubInst0_8, check_hlds__modecheck_util__SubInst_5);
        }
#line 1183 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 1184 "modecheck_util.m"
          {
#line 1184 "modecheck_util.m"
          }
#line 1183 "modecheck_util.m"
        else
#line 1186 "modecheck_util.m"
          {
#line 1186 "modecheck_util.m"
            {
#line 1186 "modecheck_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.add_constrained_inst\'/4", (MR_String) "SubInst differs");
#line 1186 "modecheck_util.m"
              return;
            }
#line 1186 "modecheck_util.m"
          }
#line 1183 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_Map_10 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9;
#line 1183 "modecheck_util.m"
      }
#line 1182 "modecheck_util.m"
    else
#line 1189 "modecheck_util.m"
      {
#line 1189 "modecheck_util.m"
        {
#line 1189 "modecheck_util.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__modecheck_util__InstVar_6)), ((MR_Box) (check_hlds__modecheck_util__SubInst_5)), check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9, check_hlds__modecheck_util__STATE_VARIABLE_Map_10);
        }
#line 1189 "modecheck_util.m"
      }
#line 1182 "modecheck_util.m"
  }
#line 1178 "modecheck_util.m"
}

#line 1175 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1(
#line 1175 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1175 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1175 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1175 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1175 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1175 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1175 "modecheck_util.m"
{
#line 1175 "modecheck_util.m"
  {
#line 1175 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1175 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
#line 1175 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

#line 1175 "modecheck_util.m"
    {
#line 1175 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
#line 1175 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
#line 1175 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
#line 1175 "modecheck_util.m"
  }
#line 1175 "modecheck_util.m"
}

#line 1168 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(
#line 1168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PredInstInfo_8,
#line 1168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15,
#line 1168 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_16,
#line 1168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17,
#line 1168 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18)
#line 1168 "modecheck_util.m"
{
#line 1173 "modecheck_util.m"
  {
#line 1173 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1173 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 1)));
#line 1173 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_19_19;
#line 1174 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 0)));
#line 1174 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 2)));
#line 1174 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 3)));
#line 1175 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16;
#line 1175 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18;

#line 1175 "modecheck_util.m"
    {
#line 1175 "modecheck_util.m"
      check_hlds__modecheck_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1175 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
#line 1175 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1));
#line 1175 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1175 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
#line 1175 "modecheck_util.m"
    }
#line 1175 "modecheck_util.m"
    {
#line 1175 "modecheck_util.m"
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_19_19, check_hlds__modecheck_util__Modes_12, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18);
    }
#line 1175 "modecheck_util.m"
    *check_hlds__modecheck_util__STATE_VARIABLE_Map_16 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16);
#line 1175 "modecheck_util.m"
    *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18);
#line 1173 "modecheck_util.m"
  }
#line 1168 "modecheck_util.m"
}

#line 1165 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1(
#line 1165 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1165 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1165 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1165 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1165 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1165 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1165 "modecheck_util.m"
{
#line 1165 "modecheck_util.m"
  {
#line 1165 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1165 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34;
#line 1165 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36;

#line 1165 "modecheck_util.m"
    {
#line 1165 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36);
    }
#line 1165 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34));
#line 1165 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36));
#line 1165 "modecheck_util.m"
  }
#line 1165 "modecheck_util.m"
}

#line 1158 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(
#line 1158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__BoundInst_8,
#line 1158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
#line 1158 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
#line 1158 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
#line 1158 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16)
#line 1158 "modecheck_util.m"
{
#line 1163 "modecheck_util.m"
  {
#line 1163 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1163 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, (MR_Integer) 1)));
#line 1163 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_17_17;
#line 1164 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, (MR_Integer) 0)));
#line 1165 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14;
#line 1165 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16;

#line 1165 "modecheck_util.m"
    {
#line 1165 "modecheck_util.m"
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1165 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[2]));
#line 1165 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1));
#line 1165 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1165 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
#line 1165 "modecheck_util.m"
    }
#line 1165 "modecheck_util.m"
    {
#line 1165 "modecheck_util.m"
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_17_17, check_hlds__modecheck_util__Insts_12, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16);
    }
#line 1165 "modecheck_util.m"
    *check_hlds__modecheck_util__STATE_VARIABLE_Map_14 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14);
#line 1165 "modecheck_util.m"
    *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16);
#line 1163 "modecheck_util.m"
  }
#line 1158 "modecheck_util.m"
}

#line 1140 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
#line 1140 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1140 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1140 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1140 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3)
#line 1140 "modecheck_util.m"
{
#line 1140 "modecheck_util.m"
  {
#line 1140 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1140 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10;

#line 1140 "modecheck_util.m"
    {
#line 1140 "modecheck_util.m"
      check_hlds__modecheck_util__add_constrained_inst_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10);
    }
#line 1140 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10));
#line 1140 "modecheck_util.m"
  }
#line 1140 "modecheck_util.m"
}

#line 1117 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2(
#line 1117 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1117 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1117 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1117 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1117 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1117 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1117 "modecheck_util.m"
{
#line 1117 "modecheck_util.m"
  {
#line 1117 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1117 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14;
#line 1117 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16;

#line 1117 "modecheck_util.m"
    {
#line 1117 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16);
    }
#line 1117 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14));
#line 1117 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16));
#line 1117 "modecheck_util.m"
  }
#line 1117 "modecheck_util.m"
}

#line 1122 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1(
#line 1122 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1122 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1122 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1122 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1122 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1122 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1122 "modecheck_util.m"
{
#line 1122 "modecheck_util.m"
  {
#line 1122 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1122 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
#line 1122 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

#line 1122 "modecheck_util.m"
    {
#line 1122 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
#line 1122 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
#line 1122 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
#line 1122 "modecheck_util.m"
  }
#line 1122 "modecheck_util.m"
}

#line 1094 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
#line 1094 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1094 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_8,
#line 1094 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33,
#line 1094 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_34,
#line 1094 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35,
#line 1094 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36)
#line 1094 "modecheck_util.m"
{
#line 1100 "modecheck_util.m"
  while (MR_TRUE)
#line 1100 "modecheck_util.m"
    {
#line 1100 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 1100 "modecheck_util.m"
      {
#line 1100 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 1100 "modecheck_util.m"
#line 1100 "modecheck_util.m"
        switch (MR_tag((MR_Word) check_hlds__modecheck_util__Inst_8)) {
#line 1100 "modecheck_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1100 "modecheck_util.m"
          case (MR_Integer) 0:
#line 1100 "modecheck_util.m"
#line 1100 "modecheck_util.m"
            switch (MR_unmkbody(check_hlds__modecheck_util__Inst_8)) {
#line 1100 "modecheck_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1100 "modecheck_util.m"
              case (MR_Integer) 0:
#line 1100 "modecheck_util.m"
                {
#line 1100 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1100 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1100 "modecheck_util.m"
                }
#line 1100 "modecheck_util.m"
                break;
#line 1100 "modecheck_util.m"
              case (MR_Integer) 1:
#line 1102 "modecheck_util.m"
                {
#line 1102 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1102 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1102 "modecheck_util.m"
                }
#line 1100 "modecheck_util.m"
                break;
#line 1100 "modecheck_util.m"
            }
#line 1100 "modecheck_util.m"
            break;
#line 1100 "modecheck_util.m"
          case (MR_Integer) 1:
#line 1101 "modecheck_util.m"
            {
#line 1101 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1101 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1101 "modecheck_util.m"
            }
#line 1100 "modecheck_util.m"
            break;
#line 1100 "modecheck_util.m"
          case (MR_Integer) 2:
#line 1128 "modecheck_util.m"
            {
#line 1128 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__HOInstInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
#line 1126 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__Inst_8, (MR_Integer) 0)));

#line 1131 "modecheck_util.m"
              if ((check_hlds__modecheck_util__HOInstInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "modecheck_util.m"
                {
#line 1130 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1130 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1130 "modecheck_util.m"
                }
#line 1131 "modecheck_util.m"
              else
#line 1132 "modecheck_util.m"
                {
#line 1132 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__PredInstInfo_25 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_util__HOInstInfo_23), (MR_Integer) 1);

#line 1133 "modecheck_util.m"
                  {
#line 1133 "modecheck_util.m"
                    check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__PredInstInfo_25, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33, check_hlds__modecheck_util__STATE_VARIABLE_Map_34, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);
                  }
#line 1132 "modecheck_util.m"
                }
#line 1128 "modecheck_util.m"
            }
#line 1100 "modecheck_util.m"
            break;
#line 1100 "modecheck_util.m"
          case (MR_Integer) 3:
#line 1100 "modecheck_util.m"
#line 1100 "modecheck_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 0)))) {
#line 1100 "modecheck_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1100 "modecheck_util.m"
              case (MR_Integer) 0:
#line 1105 "modecheck_util.m"
                {
#line 1105 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
#line 1105 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 3)));
#line 1105 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));

#line 1108 "modecheck_util.m"
#line 1108 "modecheck_util.m"
                  switch (MR_tag((MR_Word) check_hlds__modecheck_util__InstResults_13)) {
#line 1108 "modecheck_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1108 "modecheck_util.m"
                    case (MR_Integer) 0:
#line 1108 "modecheck_util.m"
#line 1108 "modecheck_util.m"
                      switch (MR_unmkbody(check_hlds__modecheck_util__InstResults_13)) {
#line 1108 "modecheck_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1108 "modecheck_util.m"
                        case (MR_Integer) 0:
#line 1121 "modecheck_util.m"
                          {
#line 1121 "modecheck_util.m"
                            MR_Word check_hlds__modecheck_util__V_50_50;
#line 1122 "modecheck_util.m"
                            MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34;
#line 1122 "modecheck_util.m"
                            MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36;

#line 1122 "modecheck_util.m"
                            {
#line 1122 "modecheck_util.m"
                              check_hlds__modecheck_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
#line 1122 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1));
#line 1122 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1122 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
#line 1122 "modecheck_util.m"
                            }
#line 1122 "modecheck_util.m"
                            {
#line 1122 "modecheck_util.m"
                              mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_50_50, check_hlds__modecheck_util__BoundInsts_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36);
                            }
#line 1122 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34);
#line 1122 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36);
#line 1121 "modecheck_util.m"
                          }
#line 1108 "modecheck_util.m"
                          break;
#line 1108 "modecheck_util.m"
                        case (MR_Integer) 1:
#line 1107 "modecheck_util.m"
                          {
#line 1107 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1107 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1107 "modecheck_util.m"
                          }
#line 1108 "modecheck_util.m"
                          break;
#line 1108 "modecheck_util.m"
                      }
#line 1108 "modecheck_util.m"
                      break;
#line 1108 "modecheck_util.m"
                    case (MR_Integer) 1:
#line 1109 "modecheck_util.m"
                      {
#line 1109 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__InstVarsResult_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 3)));
#line 1109 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 0)));
#line 1109 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 1)));
#line 1109 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 2)));
#line 1109 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 4)));
#line 1109 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 5)));
#line 1112 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__TypeInfo_57_57;
#line 1112 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__InstVars_21;

#line 1111 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__InstVarsResult_18)) == (MR_mktag((MR_Integer) 1)));
#line 1111 "modecheck_util.m"
                        if (check_hlds__modecheck_util__succeeded)
#line 1111 "modecheck_util.m"
                          {
#line 1111 "modecheck_util.m"
                            check_hlds__modecheck_util__InstVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstVarsResult_18, (MR_Integer) 0)));
#line 2434 "check_hlds.modecheck_util.c"
                            check_hlds__modecheck_util__TypeInfo_57_57 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[0];
#line 1113 "modecheck_util.m"
                            {
#line 1113 "modecheck_util.m"
                              check_hlds__modecheck_util__succeeded = mercury__set__is_empty_1_p_0(check_hlds__modecheck_util__TypeInfo_57_57, check_hlds__modecheck_util__InstVars_21);
                            }
#line 1111 "modecheck_util.m"
                          }
#line 1110 "modecheck_util.m"
                        if (check_hlds__modecheck_util__succeeded)
#line 1115 "modecheck_util.m"
                          {
#line 1115 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1115 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1115 "modecheck_util.m"
                          }
#line 1110 "modecheck_util.m"
                        else
#line 1117 "modecheck_util.m"
                          {
#line 1117 "modecheck_util.m"
                            MR_Word check_hlds__modecheck_util__V_53_53;
#line 1117 "modecheck_util.m"
                            MR_Box check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34;
#line 1117 "modecheck_util.m"
                            MR_Box check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36;

#line 1117 "modecheck_util.m"
                            {
#line 1117 "modecheck_util.m"
                              check_hlds__modecheck_util__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
#line 1117 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2));
#line 1117 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1117 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
#line 1117 "modecheck_util.m"
                            }
#line 1117 "modecheck_util.m"
                            {
#line 1117 "modecheck_util.m"
                              mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_53_53, check_hlds__modecheck_util__BoundInsts_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35)), &check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36);
                            }
#line 1117 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34);
#line 1117 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = ((MR_Word) check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36);
#line 1117 "modecheck_util.m"
                          }
#line 1109 "modecheck_util.m"
                      }
#line 1108 "modecheck_util.m"
                      break;
#line 1108 "modecheck_util.m"
                  }
#line 1105 "modecheck_util.m"
                }
#line 1100 "modecheck_util.m"
                break;
#line 1100 "modecheck_util.m"
              case (MR_Integer) 1:
#line 1128 "modecheck_util.m"
                {
#line 1128 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HOInstInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
#line 1127 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));

#line 1131 "modecheck_util.m"
                  if ((check_hlds__modecheck_util__HOInstInfo_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1130 "modecheck_util.m"
                    {
#line 1130 "modecheck_util.m"
                      *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1130 "modecheck_util.m"
                      *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1130 "modecheck_util.m"
                    }
#line 1131 "modecheck_util.m"
                  else
#line 1132 "modecheck_util.m"
                    {
#line 1132 "modecheck_util.m"
                      MR_Word check_hlds__modecheck_util__PredInstInfo_80 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_util__HOInstInfo_82), (MR_Integer) 1);

#line 1133 "modecheck_util.m"
                      {
#line 1133 "modecheck_util.m"
                        check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__PredInstInfo_80, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33, check_hlds__modecheck_util__STATE_VARIABLE_Map_34, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);
                      }
#line 1132 "modecheck_util.m"
                    }
#line 1128 "modecheck_util.m"
                }
#line 1100 "modecheck_util.m"
                break;
#line 1100 "modecheck_util.m"
              case (MR_Integer) 2:
#line 1151 "modecheck_util.m"
                {
#line 1152 "modecheck_util.m"
                  {
#line 1152 "modecheck_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "inst_var");
#line 1152 "modecheck_util.m"
                    return;
                  }
#line 1151 "modecheck_util.m"
                }
#line 1100 "modecheck_util.m"
                break;
#line 1100 "modecheck_util.m"
              case (MR_Integer) 3:
#line 1137 "modecheck_util.m"
                {
#line 1137 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__SubInst_27;
#line 1137 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__V_46_46;
#line 1137 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__InstVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
#line 1137 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
#line 1140 "modecheck_util.m"
                  MR_Box check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34;

#line 1138 "modecheck_util.m"
                  {
#line 1138 "modecheck_util.m"
                    check_hlds__inst_util__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__Inst_8, &check_hlds__modecheck_util__SubInst_27);
                  }
#line 1140 "modecheck_util.m"
                  {
#line 1140 "modecheck_util.m"
                    check_hlds__modecheck_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1140 "modecheck_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[1]));
#line 1140 "modecheck_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3));
#line 1140 "modecheck_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1140 "modecheck_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 3) = ((MR_Box) (check_hlds__modecheck_util__SubInst_27));
#line 1140 "modecheck_util.m"
                  }
#line 1140 "modecheck_util.m"
                  {
#line 1140 "modecheck_util.m"
                    mercury__set__fold_4_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], check_hlds__modecheck_util__V_46_46, check_hlds__modecheck_util__InstVars_56, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34);
                  }
#line 1140 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34);
#line 1137 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1137 "modecheck_util.m"
                }
#line 1100 "modecheck_util.m"
                break;
#line 1100 "modecheck_util.m"
              case (MR_Integer) 4:
#line 1142 "modecheck_util.m"
                {
#line 1142 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__InstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
#line 1143 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43;

#line 1143 "modecheck_util.m"
                  {
#line 1143 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__modecheck_util__InstName_28)), check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, &check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43);
                  }
#line 1143 "modecheck_util.m"
                  if (check_hlds__modecheck_util__succeeded)
#line 1144 "modecheck_util.m"
                    {
#line 1144 "modecheck_util.m"
                      MR_Word check_hlds__modecheck_util__ExpandedInst_29;

#line 1144 "modecheck_util.m"
                      {
#line 1144 "modecheck_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__InstName_28, &check_hlds__modecheck_util__ExpandedInst_29);
                      }
#line 1145 "modecheck_util.m"
                      /* direct tailcall eliminated */
#line 1145 "modecheck_util.m"
                      {
#line 1145 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__Inst__tmp_copy_8 = check_hlds__modecheck_util__ExpandedInst_29;
#line 1145 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0__tmp_copy_35 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43;

#line 1145 "modecheck_util.m"
                        check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0__tmp_copy_35;
#line 1145 "modecheck_util.m"
                        check_hlds__modecheck_util__Inst_8 = check_hlds__modecheck_util__Inst__tmp_copy_8;
#line 1145 "modecheck_util.m"
                      }
#line 1145 "modecheck_util.m"
                      continue;
#line 1144 "modecheck_util.m"
                    }
#line 1143 "modecheck_util.m"
                  else
#line 1148 "modecheck_util.m"
                    {
#line 1148 "modecheck_util.m"
                      *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1148 "modecheck_util.m"
                      *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1148 "modecheck_util.m"
                    }
#line 1142 "modecheck_util.m"
                }
#line 1100 "modecheck_util.m"
                break;
#line 1100 "modecheck_util.m"
              case (MR_Integer) 5:
#line 1154 "modecheck_util.m"
                {
#line 1155 "modecheck_util.m"
                  {
#line 1155 "modecheck_util.m"
                    mercury__require__sorry_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "abstract_inst");
#line 1155 "modecheck_util.m"
                    return;
                  }
#line 1154 "modecheck_util.m"
                }
#line 1100 "modecheck_util.m"
                break;
#line 1100 "modecheck_util.m"
            }
#line 1100 "modecheck_util.m"
            break;
#line 1100 "modecheck_util.m"
        }
#line 1100 "modecheck_util.m"
      }
#line 1100 "modecheck_util.m"
      break;
#line 1100 "modecheck_util.m"
    }
#line 1094 "modecheck_util.m"
}

#line 1085 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(
#line 1085 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1085 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Mode_8,
#line 1085 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
#line 1085 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
#line 1085 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
#line 1085 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16)
#line 1085 "modecheck_util.m"
{
#line 1089 "modecheck_util.m"
  {
#line 1089 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1089 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InitialInst_11;
#line 1089 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__FinalInst_12;
#line 1089 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17;
#line 1089 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18;

#line 1090 "modecheck_util.m"
    {
#line 1090 "modecheck_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__Mode_8, &check_hlds__modecheck_util__InitialInst_11, &check_hlds__modecheck_util__FinalInst_12);
    }
#line 1091 "modecheck_util.m"
    {
#line 1091 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__InitialInst_11, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13, &check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15, &check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18);
    }
#line 1092 "modecheck_util.m"
    {
#line 1092 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__FinalInst_12, check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17, check_hlds__modecheck_util__STATE_VARIABLE_Map_14, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);
    }
#line 1089 "modecheck_util.m"
  }
#line 1085 "modecheck_util.m"
}

#line 1025 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__build_call_11_p_0_1(
#line 1025 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg)
#line 1025 "modecheck_util.m"
{
#line 1025 "modecheck_util.m"
  {
#line 1025 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1025 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;

#line 1025 "modecheck_util.m"
    {
#line 1025 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__IntroducedFrom__pred__build_call__1025__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 4))));
    }
#line 1025 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 1025 "modecheck_util.m"
  }
#line 1025 "modecheck_util.m"
}

#line 972 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__build_call_11_p_0(
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__CalleeModuleName_12,
#line 972 "modecheck_util.m"
  MR_String check_hlds__modecheck_util__CalleePredName_13,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgVars_14,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgTypes_15,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NonLocals_16,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMapDelta_17,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_18,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_19,
#line 972 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_20,
#line 972 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_52,
#line 972 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_53)
#line 972 "modecheck_util.m"
{
#line 978 "modecheck_util.m"
  {
#line 978 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_22;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredId_23;
#line 978 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ProcId_24;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredInfo0_25;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo0_26;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TVarSet_27;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ExistQTVars_28;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__HeadTypeParams_29;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__SymName_30;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleePredId_31;
#line 978 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CalleeProcId_32;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleePredInfo_33;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleeProcInfo_34;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarSet0_35;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes0_36;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo1_37;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo2_38;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PolyInfo0_39;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo0_40;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo1_41;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo2_42;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo_43;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PolyInfo_44;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PolySpecs_45;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredInfo_46;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo_47;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo1_48;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_49;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarSet_50;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_51;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_56_56;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_57_57;
#line 978 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__V_58_58;
#line 978 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__V_59_59;
#line 978 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__V_60_60;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_61_61;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_62_62;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_63_63;
#line 978 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_66_66;
#line 978 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__V_67_67;

#line 979 "modecheck_util.m"
    {
#line 979 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_52, &check_hlds__modecheck_util__ModuleInfo0_22);
    }
#line 983 "modecheck_util.m"
    {
#line 983 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_52, &check_hlds__modecheck_util__PredId_23);
    }
#line 984 "modecheck_util.m"
    {
#line 984 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_52, &check_hlds__modecheck_util__ProcId_24);
    }
#line 985 "modecheck_util.m"
    {
#line 985 "modecheck_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__PredId_23, check_hlds__modecheck_util__ProcId_24, &check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__ProcInfo0_26);
    }
#line 987 "modecheck_util.m"
    {
#line 987 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__TVarSet_27);
    }
#line 988 "modecheck_util.m"
    {
#line 988 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__ExistQTVars_28);
    }
#line 989 "modecheck_util.m"
    {
#line 989 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__HeadTypeParams_29);
    }
#line 992 "modecheck_util.m"
    {
#line 992 "modecheck_util.m"
      check_hlds__modecheck_util__SymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 992 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, 0) = ((MR_Box) (check_hlds__modecheck_util__CalleeModuleName_12));
#line 992 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, 1) = ((MR_Box) (check_hlds__modecheck_util__CalleePredName_13));
#line 992 "modecheck_util.m"
    }
#line 993 "modecheck_util.m"
    {
#line 993 "modecheck_util.m"
      hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0((MR_Integer) 0, check_hlds__modecheck_util__SymName_30, (MR_Integer) 0, check_hlds__modecheck_util__TVarSet_27, check_hlds__modecheck_util__ExistQTVars_28, check_hlds__modecheck_util__ArgTypes_15, check_hlds__modecheck_util__HeadTypeParams_29, check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__Context_18, &check_hlds__modecheck_util__CalleePredId_31, &check_hlds__modecheck_util__CalleeProcId_32);
    }
#line 996 "modecheck_util.m"
    {
#line 996 "modecheck_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__CalleePredId_31, check_hlds__modecheck_util__CalleeProcId_32, &check_hlds__modecheck_util__CalleePredInfo_33, &check_hlds__modecheck_util__CalleeProcInfo_34);
    }
#line 1003 "modecheck_util.m"
    {
#line 1003 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_52, &check_hlds__modecheck_util__VarSet0_35);
    }
#line 1004 "modecheck_util.m"
    {
#line 1004 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_52, &check_hlds__modecheck_util__VarTypes0_36);
    }
#line 1005 "modecheck_util.m"
    {
#line 1005 "modecheck_util.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet0_35, check_hlds__modecheck_util__ProcInfo0_26, &check_hlds__modecheck_util__ProcInfo1_37);
    }
#line 1006 "modecheck_util.m"
    {
#line 1006 "modecheck_util.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modecheck_util__VarTypes0_36, check_hlds__modecheck_util__ProcInfo1_37, &check_hlds__modecheck_util__ProcInfo2_38);
    }
#line 1007 "modecheck_util.m"
    {
#line 1007 "modecheck_util.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__PredInfo0_25, check_hlds__modecheck_util__ProcInfo2_38, &check_hlds__modecheck_util__PolyInfo0_39);
    }
#line 1011 "modecheck_util.m"
    {
#line 1011 "modecheck_util.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__modecheck_util__GoalInfo0_40);
    }
#line 1012 "modecheck_util.m"
    {
#line 1012 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_util__Context_18, check_hlds__modecheck_util__GoalInfo0_40, &check_hlds__modecheck_util__GoalInfo1_41);
    }
#line 1013 "modecheck_util.m"
    {
#line 1013 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_util__NonLocals_16, check_hlds__modecheck_util__GoalInfo1_41, &check_hlds__modecheck_util__GoalInfo2_42);
    }
#line 1014 "modecheck_util.m"
    {
#line 1014 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_util__InstMapDelta_17, check_hlds__modecheck_util__GoalInfo2_42, &check_hlds__modecheck_util__GoalInfo_43);
    }
#line 1017 "modecheck_util.m"
    check_hlds__modecheck_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, (MR_Integer) 0)));
#line 1017 "modecheck_util.m"
    check_hlds__modecheck_util__V_67_67 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, (MR_Integer) 1)));
#line 1017 "modecheck_util.m"
    {
#line 1017 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__modecheck_util__CalleeModuleName_12, check_hlds__modecheck_util__V_66_66);
    }
#line 978 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 978 "modecheck_util.m"
      {
#line 1017 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (strcmp(check_hlds__modecheck_util__CalleePredName_13, check_hlds__modecheck_util__V_67_67) == 0);
#line 978 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 978 "modecheck_util.m"
          {
#line 1019 "modecheck_util.m"
            check_hlds__modecheck_util__V_56_56 = (MR_Integer) 2;
#line 1018 "modecheck_util.m"
            {
#line 1018 "modecheck_util.m"
              check_hlds__polymorphism__polymorphism_process_new_call_12_p_0(check_hlds__modecheck_util__CalleePredInfo_33, check_hlds__modecheck_util__CalleeProcInfo_34, check_hlds__modecheck_util__CalleePredId_31, check_hlds__modecheck_util__CalleeProcId_32, check_hlds__modecheck_util__ArgVars_14, check_hlds__modecheck_util__V_56_56, check_hlds__modecheck_util__MaybeCallUnifyContext_19, check_hlds__modecheck_util__SymName_30, check_hlds__modecheck_util__GoalInfo_43, check_hlds__modecheck_util__Goal_20, check_hlds__modecheck_util__PolyInfo0_39, &check_hlds__modecheck_util__PolyInfo_44);
            }
#line 1023 "modecheck_util.m"
            {
#line 1023 "modecheck_util.m"
              check_hlds__polymorphism__poly_info_extract_7_p_0(check_hlds__modecheck_util__PolyInfo_44, &check_hlds__modecheck_util__PolySpecs_45, check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__PredInfo_46, check_hlds__modecheck_util__ProcInfo2_38, &check_hlds__modecheck_util__ProcInfo_47, &check_hlds__modecheck_util__ModuleInfo1_48);
            }
#line 1025 "modecheck_util.m"
            check_hlds__modecheck_util__V_61_61 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1025 "modecheck_util.m"
            check_hlds__modecheck_util__V_58_58 = (MR_String) "check_hlds.modecheck_util";
#line 1025 "modecheck_util.m"
            check_hlds__modecheck_util__V_59_59 = (MR_String) "predicate \140check_hlds.modecheck_util.build_call\'/11";
#line 1026 "modecheck_util.m"
            check_hlds__modecheck_util__V_60_60 = (MR_String) "got errors while making call";
#line 1025 "modecheck_util.m"
            {
#line 1025 "modecheck_util.m"
              check_hlds__modecheck_util__V_57_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1025 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_57_57, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_6[0]));
#line 1025 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_57_57, 1) = ((MR_Box) (check_hlds__modecheck_util__build_call_11_p_0_1));
#line 1025 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_57_57, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1025 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_57_57, 3) = ((MR_Box) (check_hlds__modecheck_util__PolySpecs_45));
#line 1025 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_57_57, 4) = ((MR_Box) (check_hlds__modecheck_util__V_61_61));
#line 1025 "modecheck_util.m"
            }
#line 1025 "modecheck_util.m"
            {
#line 1025 "modecheck_util.m"
              mercury__require__expect_4_p_0(check_hlds__modecheck_util__V_57_57, check_hlds__modecheck_util__V_58_58, check_hlds__modecheck_util__V_59_59, check_hlds__modecheck_util__V_60_60);
            }
#line 1027 "modecheck_util.m"
            {
#line 1027 "modecheck_util.m"
              hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__modecheck_util__PredId_23, check_hlds__modecheck_util__ProcId_24, check_hlds__modecheck_util__PredInfo_46, check_hlds__modecheck_util__ProcInfo_47, check_hlds__modecheck_util__ModuleInfo1_48, &check_hlds__modecheck_util__ModuleInfo_49);
            }
#line 1031 "modecheck_util.m"
            {
#line 1031 "modecheck_util.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__modecheck_util__ProcInfo_47, &check_hlds__modecheck_util__VarSet_50);
            }
#line 1032 "modecheck_util.m"
            {
#line 1032 "modecheck_util.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__modecheck_util__ProcInfo_47, &check_hlds__modecheck_util__VarTypes_51);
            }
#line 1033 "modecheck_util.m"
            {
#line 1033 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_62_62);
            }
#line 1034 "modecheck_util.m"
            {
#line 1034 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_util__VarTypes_51, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_62_62, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_63_63);
            }
#line 1035 "modecheck_util.m"
            {
#line 1035 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_49, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_63_63, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_53);
            }
#line 1035 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 978 "modecheck_util.m"
          }
#line 978 "modecheck_util.m"
      }
#line 978 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 978 "modecheck_util.m"
  }
#line 972 "modecheck_util.m"
}

#line 779 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_implied_mode_8_p_0(
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_9,
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarInst0_10,
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst0_11,
#line 779 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Var_12,
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36,
#line 779 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37,
#line 779 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38,
#line 779 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39)
#line 779 "modecheck_util.m"
{
#line 784 "modecheck_util.m"
  {
#line 784 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 784 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_15;
#line 784 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InitialInst_16;
#line 784 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarInst1_17;
#line 784 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes0_18;
#line 784 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarType_19;
#line 795 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_40_40;
#line 795 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___ModuleInfo_20;
#line 795 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___Sub_21;

#line 785 "modecheck_util.m"
    {
#line 785 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__ModuleInfo0_15);
    }
#line 786 "modecheck_util.m"
    {
#line 786 "modecheck_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__InitialInst0_11, &check_hlds__modecheck_util__InitialInst_16);
    }
#line 787 "modecheck_util.m"
    {
#line 787 "modecheck_util.m"
      check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarInst0_10, &check_hlds__modecheck_util__VarInst1_17);
    }
#line 789 "modecheck_util.m"
    {
#line 789 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__VarTypes0_18);
    }
#line 790 "modecheck_util.m"
    {
#line 790 "modecheck_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes0_18, check_hlds__modecheck_util__Var0_9, &check_hlds__modecheck_util__VarType_19);
    }
#line 796 "modecheck_util.m"
    {
#line 796 "modecheck_util.m"
      check_hlds__modecheck_util__V_40_40 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 795 "modecheck_util.m"
    {
#line 795 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(check_hlds__modecheck_util__VarInst1_17, check_hlds__modecheck_util__InitialInst_16, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__ModuleInfo0_15, &check_hlds__modecheck_util___ModuleInfo_20, check_hlds__modecheck_util__V_40_40, &check_hlds__modecheck_util___Sub_21);
    }
#line 791 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 798 "modecheck_util.m"
      {
#line 798 "modecheck_util.m"
        *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 798 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38;
#line 798 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36;
#line 798 "modecheck_util.m"
      }
#line 791 "modecheck_util.m"
    else
#line 799 "modecheck_util.m"
      {
#line 805 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_22_22;
#line 805 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_23_23;

#line 805 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__InitialInst_16)) == (MR_mktag((MR_Integer) 2)));
#line 805 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 805 "modecheck_util.m"
          {
#line 805 "modecheck_util.m"
            check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__InitialInst_16, (MR_Integer) 0)));
#line 805 "modecheck_util.m"
            check_hlds__modecheck_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__InitialInst_16, (MR_Integer) 1)));
#line 806 "modecheck_util.m"
            {
#line 806 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_test__inst_is_free_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarInst1_17);
            }
#line 805 "modecheck_util.m"
          }
#line 799 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 811 "modecheck_util.m"
          {
#line 811 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Context_24;
#line 811 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModeContext_25;
#line 811 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__UnifyContext_26;
#line 811 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__CallUnifyContext_27;
#line 811 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_41_41;
#line 811 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_42_42;
#line 828 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModeErrors_28;

#line 811 "modecheck_util.m"
            *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 822 "modecheck_util.m"
            {
#line 822 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__Context_24);
            }
#line 823 "modecheck_util.m"
            {
#line 823 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__ModeContext_25);
            }
#line 824 "modecheck_util.m"
            {
#line 824 "modecheck_util.m"
              check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(check_hlds__modecheck_util__ModeContext_25, &check_hlds__modecheck_util__UnifyContext_26);
            }
#line 825 "modecheck_util.m"
            {
#line 825 "modecheck_util.m"
              check_hlds__modecheck_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 825 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_42_42, 0) = ((MR_Box) (*check_hlds__modecheck_util__Var_12));
#line 825 "modecheck_util.m"
            }
#line 825 "modecheck_util.m"
            {
#line 825 "modecheck_util.m"
              check_hlds__modecheck_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 825 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_41_41, 0) = ((MR_Box) (*check_hlds__modecheck_util__Var_12));
#line 825 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_41_41, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
#line 825 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_41_41, 2) = ((MR_Box) (check_hlds__modecheck_util__UnifyContext_26));
#line 825 "modecheck_util.m"
            }
#line 825 "modecheck_util.m"
            {
#line 825 "modecheck_util.m"
              check_hlds__modecheck_util__CallUnifyContext_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 825 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__CallUnifyContext_27, 0) = ((MR_Box) (check_hlds__modecheck_util__V_41_41));
#line 825 "modecheck_util.m"
            }
#line 828 "modecheck_util.m"
            {
#line 828 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__ModeErrors_28);
            }
#line 829 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__ModeErrors_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 828 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 828 "modecheck_util.m"
              {
#line 830 "modecheck_util.m"
                {
#line 830 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38);
                }
#line 828 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 828 "modecheck_util.m"
                  {
#line 831 "modecheck_util.m"
                    {
#line 831 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38);
                    }
#line 828 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 832 "modecheck_util.m"
                      {
#line 832 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarType_19);
                      }
#line 828 "modecheck_util.m"
                  }
#line 828 "modecheck_util.m"
              }
#line 827 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 915 "modecheck_util.m"
              {
#line 915 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InitVarGoal_73;
#line 915 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NewExtraGoal_74;
#line 915 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__V_76_76;

#line 916 "modecheck_util.m"
                {
#line 916 "modecheck_util.m"
                  check_hlds__modecheck_util__construct_initialisation_call_8_p_0(*check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__InitialInst_16, check_hlds__modecheck_util__Context_24, check_hlds__modecheck_util__CallUnifyContext_27, &check_hlds__modecheck_util__InitVarGoal_73, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);
                }
#line 918 "modecheck_util.m"
                {
#line 918 "modecheck_util.m"
                  check_hlds__modecheck_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_76_76, 0) = ((MR_Box) (check_hlds__modecheck_util__InitVarGoal_73));
#line 918 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "modecheck_util.m"
                }
#line 918 "modecheck_util.m"
                {
#line 918 "modecheck_util.m"
                  check_hlds__modecheck_util__NewExtraGoal_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 918 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewExtraGoal_74, 0) = ((MR_Box) (check_hlds__modecheck_util__V_76_76));
#line 918 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewExtraGoal_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 918 "modecheck_util.m"
                }
#line 919 "modecheck_util.m"
                {
#line 919 "modecheck_util.m"
                  check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36, check_hlds__modecheck_util__NewExtraGoal_74, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37);
                }
#line 915 "modecheck_util.m"
              }
#line 827 "modecheck_util.m"
            else
#line 841 "modecheck_util.m"
              {
#line 841 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__WaitingVars_29;
#line 841 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModeError_30;

#line 841 "modecheck_util.m"
                {
#line 841 "modecheck_util.m"
                  check_hlds__modecheck_util__WaitingVars_29 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_9);
                }
#line 842 "modecheck_util.m"
                {
#line 842 "modecheck_util.m"
                  check_hlds__modecheck_util__ModeError_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 842 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 842 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_30, 1) = ((MR_Box) (check_hlds__modecheck_util__Var0_9));
#line 842 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_30, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst0_10));
#line 842 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_30, 3) = ((MR_Box) (check_hlds__modecheck_util__InitialInst_16));
#line 842 "modecheck_util.m"
                }
#line 843 "modecheck_util.m"
                {
#line 843 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_29, check_hlds__modecheck_util__ModeError_30, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);
                }
#line 841 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36;
#line 841 "modecheck_util.m"
              }
#line 811 "modecheck_util.m"
          }
#line 799 "modecheck_util.m"
        else
#line 845 "modecheck_util.m"
          {
#line 846 "modecheck_util.m"
            {
#line 846 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_test__inst_is_bound_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__InitialInst_16);
            }
#line 845 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 849 "modecheck_util.m"
              {
#line 849 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__WaitingVars_53;
#line 849 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModeError_54;

#line 849 "modecheck_util.m"
                *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 850 "modecheck_util.m"
                {
#line 850 "modecheck_util.m"
                  check_hlds__modecheck_util__WaitingVars_53 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_9);
                }
#line 851 "modecheck_util.m"
                {
#line 851 "modecheck_util.m"
                  check_hlds__modecheck_util__ModeError_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 851 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 851 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_54, 1) = ((MR_Box) (check_hlds__modecheck_util__Var0_9));
#line 851 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_54, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst0_10));
#line 851 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_54, 3) = ((MR_Box) (check_hlds__modecheck_util__InitialInst_16));
#line 851 "modecheck_util.m"
                }
#line 852 "modecheck_util.m"
                {
#line 852 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_53, check_hlds__modecheck_util__ModeError_54, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);
                }
#line 849 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36;
#line 849 "modecheck_util.m"
              }
#line 845 "modecheck_util.m"
            else
#line 858 "modecheck_util.m"
              {
#line 858 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarSet0_31;
#line 858 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarSet_32;
#line 858 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_33;
#line 858 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ExtraGoal_34;
#line 858 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NewUnifyExtraGoal_35;
#line 858 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_47_47;
#line 858 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__V_50_50;

#line 858 "modecheck_util.m"
                {
#line 858 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__VarSet0_31);
                }
#line 859 "modecheck_util.m"
                {
#line 859 "modecheck_util.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarSet0_31, &check_hlds__modecheck_util__VarSet_32);
                }
#line 860 "modecheck_util.m"
                {
#line 860 "modecheck_util.m"
                  hlds__vartypes__add_var_type_4_p_0(*check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__VarTypes0_18, &check_hlds__modecheck_util__VarTypes_33);
                }
#line 861 "modecheck_util.m"
                {
#line 861 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet_32, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_47_47);
                }
#line 862 "modecheck_util.m"
                {
#line 862 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_util__VarTypes_33, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_47_47, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);
                }
#line 865 "modecheck_util.m"
                {
#line 865 "modecheck_util.m"
                  check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_util__Var0_9, *check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39, &check_hlds__modecheck_util__ExtraGoal_34);
                }
#line 869 "modecheck_util.m"
                {
#line 869 "modecheck_util.m"
                  check_hlds__modecheck_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_50_50, 0) = ((MR_Box) (check_hlds__modecheck_util__ExtraGoal_34));
#line 869 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "modecheck_util.m"
                }
#line 869 "modecheck_util.m"
                {
#line 869 "modecheck_util.m"
                  check_hlds__modecheck_util__NewUnifyExtraGoal_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 869 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewUnifyExtraGoal_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 869 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewUnifyExtraGoal_35, 1) = ((MR_Box) (check_hlds__modecheck_util__V_50_50));
#line 869 "modecheck_util.m"
                }
#line 870 "modecheck_util.m"
                {
#line 870 "modecheck_util.m"
                  check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36, check_hlds__modecheck_util__NewUnifyExtraGoal_35, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37);
                }
#line 858 "modecheck_util.m"
              }
#line 845 "modecheck_util.m"
          }
#line 799 "modecheck_util.m"
      }
#line 784 "modecheck_util.m"
  }
#line 779 "modecheck_util.m"
}

#line 638 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 638 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum0_4,
#line 638 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__5_5,
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6,
#line 638 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7,
#line 638 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 638 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9)
#line 638 "modecheck_util.m"
{
#line 643 "modecheck_util.m"
  {
#line 643 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 643 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 643 "modecheck_util.m"
      {
#line 643 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 643 "modecheck_util.m"
          {
#line 643 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 643 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 643 "modecheck_util.m"
              {
#line 643 "modecheck_util.m"
                *check_hlds__modecheck_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 643 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6;
#line 643 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 643 "modecheck_util.m"
              }
#line 643 "modecheck_util.m"
          }
#line 643 "modecheck_util.m"
      }
#line 643 "modecheck_util.m"
    else
#line 646 "modecheck_util.m"
      {
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InitialInst_19;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InitialInsts_20;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__FinalInst_21;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__FinalInsts_22;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var_24;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars_25;
#line 646 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__ArgNum_28;
#line 646 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__V_33_33;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36;
#line 646 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap0_49;

#line 644 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 644 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 644 "modecheck_util.m"
          {
#line 644 "modecheck_util.m"
            check_hlds__modecheck_util__InitialInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 644 "modecheck_util.m"
            check_hlds__modecheck_util__InitialInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 645 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 645 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 645 "modecheck_util.m"
              {
#line 645 "modecheck_util.m"
                check_hlds__modecheck_util__FinalInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 645 "modecheck_util.m"
                check_hlds__modecheck_util__FinalInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 647 "modecheck_util.m"
                check_hlds__modecheck_util__V_33_33 = (MR_Integer) 1;
#line 647 "modecheck_util.m"
                check_hlds__modecheck_util__ArgNum_28 = (check_hlds__modecheck_util__ArgNum0_4 + check_hlds__modecheck_util__V_33_33);
#line 648 "modecheck_util.m"
                {
#line 648 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_28, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34);
                }
#line 660 "modecheck_util.m"
                {
#line 660 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_util__InstMap0_49);
                }
#line 661 "modecheck_util.m"
                {
#line 661 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__InstMap0_49);
                }
#line 661 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 664 "modecheck_util.m"
                  {
#line 664 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__VarInst0_50;
#line 664 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52;
#line 664 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54;

#line 664 "modecheck_util.m"
                    {
#line 664 "modecheck_util.m"
                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap0_49, check_hlds__modecheck_util__Var0_17, &check_hlds__modecheck_util__VarInst0_50);
                    }
#line 665 "modecheck_util.m"
                    {
#line 665 "modecheck_util.m"
                      check_hlds__modecheck_util__handle_implied_mode_8_p_0(check_hlds__modecheck_util__Var0_17, check_hlds__modecheck_util__VarInst0_50, check_hlds__modecheck_util__InitialInst_19, &check_hlds__modecheck_util__Var_24, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52);
                    }
#line 667 "modecheck_util.m"
                    {
#line 667 "modecheck_util.m"
                      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var0_17, check_hlds__modecheck_util__FinalInst_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54);
                    }
#line 668 "modecheck_util.m"
                    {
#line 668 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[5], ((MR_Box) (check_hlds__modecheck_util__Var_24)), ((MR_Box) (check_hlds__modecheck_util__Var0_17)));
                    }
#line 668 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 668 "modecheck_util.m"
                      check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54;
#line 668 "modecheck_util.m"
                    else
#line 671 "modecheck_util.m"
                      {
#line 671 "modecheck_util.m"
                        {
#line 671 "modecheck_util.m"
                          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_24, check_hlds__modecheck_util__FinalInst_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36);
                        }
#line 671 "modecheck_util.m"
                      }
#line 664 "modecheck_util.m"
                  }
#line 661 "modecheck_util.m"
                else
#line 674 "modecheck_util.m"
                  {
#line 674 "modecheck_util.m"
                    check_hlds__modecheck_util__Var_24 = check_hlds__modecheck_util__Var0_17;
#line 674 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34;
#line 674 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6;
#line 674 "modecheck_util.m"
                  }
#line 651 "modecheck_util.m"
                {
#line 651 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(check_hlds__modecheck_util__Vars0_18, check_hlds__modecheck_util__InitialInsts_20, check_hlds__modecheck_util__FinalInsts_22, check_hlds__modecheck_util__ArgNum_28, &check_hlds__modecheck_util__Vars_25, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);
                }
#line 646 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 646 "modecheck_util.m"
                  {
#line 645 "modecheck_util.m"
                    {
#line 645 "modecheck_util.m"
                      MR_Word base;
#line 645 "modecheck_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 645 "modecheck_util.m"
                      *check_hlds__modecheck_util__HeadVar__5_5 = base;
#line 645 "modecheck_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_24));
#line 645 "modecheck_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_25));
#line 645 "modecheck_util.m"
                    }
#line 645 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 646 "modecheck_util.m"
                  }
#line 645 "modecheck_util.m"
              }
#line 644 "modecheck_util.m"
          }
#line 646 "modecheck_util.m"
      }
#line 643 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 643 "modecheck_util.m"
  }
#line 638 "modecheck_util.m"
}

#line 602 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(
#line 602 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadInstVars_6,
#line 602 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstVar_7,
#line 602 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Subst_8)
#line 602 "modecheck_util.m"
{
#line 605 "modecheck_util.m"
  {
#line 605 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 606 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Inst_10;
#line 606 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv0_Inst_10;

#line 606 "modecheck_util.m"
    {
#line 606 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__HeadInstVars_6, ((MR_Box) (check_hlds__modecheck_util__InstVar_7)), &check_hlds__modecheck_util__conv0_Inst_10);
    }
#line 606 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 606 "modecheck_util.m"
      {
#line 606 "modecheck_util.m"
        check_hlds__modecheck_util__Inst_10 = ((MR_Word) check_hlds__modecheck_util__conv0_Inst_10);
#line 606 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 606 "modecheck_util.m"
      }
#line 606 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 609 "modecheck_util.m"
      {
#line 609 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__TypeInfo_23_23;
#line 609 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__SubstInstVars_11;
#line 609 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__SubstInst_12;
#line 611 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Uniq_13;
#line 611 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__BoundInsts_15;
#line 611 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__SubstUniq_16;
#line 611 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__SubstBoundInsts_18;
#line 612 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_14_14;
#line 613 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_17_17;

#line 609 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__Subst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 609 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 609 "modecheck_util.m"
          {
#line 609 "modecheck_util.m"
            check_hlds__modecheck_util__SubstInstVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 1)));
#line 609 "modecheck_util.m"
            check_hlds__modecheck_util__SubstInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 2)));
#line 3806 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__TypeInfo_23_23 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[0];
#line 610 "modecheck_util.m"
            {
#line 610 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = mercury__set__member_2_p_0(check_hlds__modecheck_util__TypeInfo_23_23, ((MR_Box) (check_hlds__modecheck_util__InstVar_7)), check_hlds__modecheck_util__SubstInstVars_11);
            }
#line 609 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 609 "modecheck_util.m"
              {
#line 612 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 612 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 612 "modecheck_util.m"
                  {
#line 612 "modecheck_util.m"
                    check_hlds__modecheck_util__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 1)));
#line 612 "modecheck_util.m"
                    check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 2)));
#line 612 "modecheck_util.m"
                    check_hlds__modecheck_util__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 3)));
#line 613 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__SubstInst_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 613 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 613 "modecheck_util.m"
                      {
#line 613 "modecheck_util.m"
                        check_hlds__modecheck_util__SubstUniq_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 1)));
#line 613 "modecheck_util.m"
                        check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 2)));
#line 613 "modecheck_util.m"
                        check_hlds__modecheck_util__SubstBoundInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 3)));
#line 613 "modecheck_util.m"
                      }
#line 612 "modecheck_util.m"
                  }
#line 611 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 615 "modecheck_util.m"
                  {
#line 615 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__TypeInfo_24_24;

#line 615 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__Uniq_13 == check_hlds__modecheck_util__SubstUniq_16);
#line 615 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 615 "modecheck_util.m"
                      {
#line 3858 "check_hlds.modecheck_util.c"
                        check_hlds__modecheck_util__TypeInfo_24_24 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[4];
#line 616 "modecheck_util.m"
                        {
#line 616 "modecheck_util.m"
                          check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_24_24, ((MR_Box) (check_hlds__modecheck_util__BoundInsts_15)), ((MR_Box) (check_hlds__modecheck_util__SubstBoundInsts_18)));
                        }
#line 615 "modecheck_util.m"
                      }
#line 615 "modecheck_util.m"
                  }
#line 611 "modecheck_util.m"
                else
#line 618 "modecheck_util.m"
                  {
#line 618 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__Inst_10, check_hlds__modecheck_util__SubstInst_12);
                  }
#line 609 "modecheck_util.m"
              }
#line 609 "modecheck_util.m"
          }
#line 609 "modecheck_util.m"
      }
#line 606 "modecheck_util.m"
    else
#line 621 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 605 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 605 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 605 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 605 "modecheck_util.m"
  }
#line 602 "modecheck_util.m"
}

#line 501 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
#line 501 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 501 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 501 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 501 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 501 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 501 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 501 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7)
#line 501 "modecheck_util.m"
{
#line 506 "modecheck_util.m"
  while (MR_TRUE)
#line 506 "modecheck_util.m"
    {
#line 506 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 506 "modecheck_util.m"
      {
#line 506 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 506 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 511 "modecheck_util.m"
            {
#line 512 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6;
#line 512 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Subst_5 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 511 "modecheck_util.m"
            }
#line 506 "modecheck_util.m"
          else
#line 509 "modecheck_util.m"
            {
#line 510 "modecheck_util.m"
              {
#line 510 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
#line 510 "modecheck_util.m"
                return;
              }
#line 509 "modecheck_util.m"
            }
#line 506 "modecheck_util.m"
        else
#line 506 "modecheck_util.m"
          {
#line 506 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 506 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 506 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "modecheck_util.m"
              {
#line 507 "modecheck_util.m"
                {
#line 507 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
#line 507 "modecheck_util.m"
                  return;
                }
#line 506 "modecheck_util.m"
              }
#line 506 "modecheck_util.m"
            else
#line 514 "modecheck_util.m"
              {
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Insts_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 514 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_46 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_67;
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_68;
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarInst_69;
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_70;
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Type_71;
#line 514 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo0_72;
#line 556 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo_73;
#line 556 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;

#line 516 "modecheck_util.m"
                {
#line 516 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_46, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
                }
#line 550 "modecheck_util.m"
                {
#line 550 "modecheck_util.m"
                  parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, check_hlds__modecheck_util__Inst_41, &check_hlds__modecheck_util__Inst_67);
                }
#line 551 "modecheck_util.m"
                {
#line 551 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__InstMap_68);
                }
#line 552 "modecheck_util.m"
                {
#line 552 "modecheck_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_68, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__VarInst_69);
                }
#line 553 "modecheck_util.m"
                {
#line 553 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__VarTypes_70);
                }
#line 554 "modecheck_util.m"
                {
#line 554 "modecheck_util.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_70, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__Type_71);
                }
#line 555 "modecheck_util.m"
                {
#line 555 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__ModuleInfo0_72);
                }
#line 557 "modecheck_util.m"
                {
#line 557 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__modecheck_util__VarInst_69, check_hlds__modecheck_util__Inst_67, check_hlds__modecheck_util__Type_71, check_hlds__modecheck_util__ModuleInfo0_72, &check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76);
                }
#line 556 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 560 "modecheck_util.m"
                  {
#line 560 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;
#line 560 "modecheck_util.m"
                    {
#line 560 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 560 "modecheck_util.m"
                  }
#line 556 "modecheck_util.m"
                else
#line 562 "modecheck_util.m"
                  {
#line 562 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_74;
#line 562 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_75;

#line 562 "modecheck_util.m"
                    {
#line 562 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_74 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_58_58);
                    }
#line 563 "modecheck_util.m"
                    {
#line 563 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 563 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 563 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 1) = ((MR_Box) (check_hlds__modecheck_util__V_58_58));
#line 563 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_69));
#line 563 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_67));
#line 563 "modecheck_util.m"
                    }
#line 564 "modecheck_util.m"
                    {
#line 564 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_74, check_hlds__modecheck_util__ModeError_75, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 562 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 562 "modecheck_util.m"
                  }
#line 518 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 518 "modecheck_util.m"
                {
#line 518 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_57_57;
#line 518 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__Insts_42;
#line 518 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_46;
#line 518 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 518 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;

#line 518 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6;
#line 518 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 518 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 518 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 518 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 518 "modecheck_util.m"
                }
#line 518 "modecheck_util.m"
                continue;
#line 514 "modecheck_util.m"
              }
#line 506 "modecheck_util.m"
          }
#line 506 "modecheck_util.m"
      }
#line 506 "modecheck_util.m"
      break;
#line 506 "modecheck_util.m"
    }
#line 501 "modecheck_util.m"
}

#line 484 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
#line 484 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 484 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 484 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 484 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 484 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 484 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 484 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7)
#line 484 "modecheck_util.m"
{
#line 488 "modecheck_util.m"
  while (MR_TRUE)
#line 488 "modecheck_util.m"
    {
#line 488 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 488 "modecheck_util.m"
      {
#line 488 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 488 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "modecheck_util.m"
            {
#line 492 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6;
#line 492 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Subst_5 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 492 "modecheck_util.m"
            }
#line 488 "modecheck_util.m"
          else
#line 490 "modecheck_util.m"
            {
#line 491 "modecheck_util.m"
              {
#line 491 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
#line 491 "modecheck_util.m"
                return;
              }
#line 490 "modecheck_util.m"
            }
#line 488 "modecheck_util.m"
        else
#line 488 "modecheck_util.m"
          {
#line 488 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 488 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 488 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "modecheck_util.m"
              {
#line 489 "modecheck_util.m"
                {
#line 489 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
#line 489 "modecheck_util.m"
                  return;
                }
#line 488 "modecheck_util.m"
              }
#line 488 "modecheck_util.m"
            else
#line 494 "modecheck_util.m"
              {
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Insts_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 494 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_46 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_67;
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_68;
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarInst_69;
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_70;
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Type_71;
#line 494 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo0_72;
#line 533 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo_73;
#line 533 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;

#line 496 "modecheck_util.m"
                {
#line 496 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_46, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
                }
#line 527 "modecheck_util.m"
                {
#line 527 "modecheck_util.m"
                  parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, check_hlds__modecheck_util__Inst_41, &check_hlds__modecheck_util__Inst_67);
                }
#line 528 "modecheck_util.m"
                {
#line 528 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__InstMap_68);
                }
#line 529 "modecheck_util.m"
                {
#line 529 "modecheck_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_68, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__VarInst_69);
                }
#line 530 "modecheck_util.m"
                {
#line 530 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__VarTypes_70);
                }
#line 531 "modecheck_util.m"
                {
#line 531 "modecheck_util.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_70, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__Type_71);
                }
#line 532 "modecheck_util.m"
                {
#line 532 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__ModuleInfo0_72);
                }
#line 534 "modecheck_util.m"
                {
#line 534 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(check_hlds__modecheck_util__VarInst_69, check_hlds__modecheck_util__Inst_67, check_hlds__modecheck_util__Type_71, check_hlds__modecheck_util__ModuleInfo0_72, &check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76);
                }
#line 533 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 537 "modecheck_util.m"
                  {
#line 537 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;
#line 537 "modecheck_util.m"
                    {
#line 537 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 537 "modecheck_util.m"
                  }
#line 533 "modecheck_util.m"
                else
#line 539 "modecheck_util.m"
                  {
#line 539 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_74;
#line 539 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_75;

#line 539 "modecheck_util.m"
                    {
#line 539 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_74 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_58_58);
                    }
#line 540 "modecheck_util.m"
                    {
#line 540 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 540 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 540 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 1) = ((MR_Box) (check_hlds__modecheck_util__V_58_58));
#line 540 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_69));
#line 540 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_67));
#line 540 "modecheck_util.m"
                    }
#line 541 "modecheck_util.m"
                    {
#line 541 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_74, check_hlds__modecheck_util__ModeError_75, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 539 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 539 "modecheck_util.m"
                  }
#line 498 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 498 "modecheck_util.m"
                {
#line 498 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_57_57;
#line 498 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__Insts_42;
#line 498 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_46;
#line 498 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 498 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;

#line 498 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6;
#line 498 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 498 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 498 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 498 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 498 "modecheck_util.m"
                }
#line 498 "modecheck_util.m"
                continue;
#line 494 "modecheck_util.m"
              }
#line 488 "modecheck_util.m"
          }
#line 488 "modecheck_util.m"
      }
#line 488 "modecheck_util.m"
      break;
#line 488 "modecheck_util.m"
    }
#line 484 "modecheck_util.m"
}

#line 370 "modecheck_util.m"
static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
#line 370 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_5,
#line 370 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_6,
#line 370 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_7)
#line 370 "modecheck_util.m"
{
#line 372 "modecheck_util.m"
  {
#line 372 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 372 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInst_8;
#line 372 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ConsIdAdjustedArity_9;
#line 372 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgInsts_10;

#line 373 "modecheck_util.m"
    {
#line 373 "modecheck_util.m"
      check_hlds__modecheck_util__ConsIdAdjustedArity_9 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(check_hlds__modecheck_util__ModuleInfo_5, check_hlds__modecheck_util__Type_6, check_hlds__modecheck_util__ConsId_7);
    }
#line 374 "modecheck_util.m"
    {
#line 374 "modecheck_util.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__ConsIdAdjustedArity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modecheck_util__ArgInsts_10);
    }
#line 375 "modecheck_util.m"
    {
#line 375 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, 0) = ((MR_Box) (check_hlds__modecheck_util__ConsId_7));
#line 375 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, 1) = ((MR_Box) (check_hlds__modecheck_util__ArgInsts_10));
#line 375 "modecheck_util.m"
    }
#line 372 "modecheck_util.m"
    return check_hlds__modecheck_util__BoundInst_8;
#line 372 "modecheck_util.m"
  }
#line 370 "modecheck_util.m"
}

#line 332 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
#line 332 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 332 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 332 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 332 "modecheck_util.m"
{
#line 335 "modecheck_util.m"
  {
#line 335 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 335 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "modecheck_util.m"
      *check_hlds__modecheck_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 335 "modecheck_util.m"
    else
#line 336 "modecheck_util.m"
      {
#line 336 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 336 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 336 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_8;
#line 336 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_9;
#line 336 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_5, (MR_Integer) 0)));
#line 336 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_5, (MR_Integer) 1)));
#line 336 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalInfo_12;

#line 338 "modecheck_util.m"
        {
#line 338 "modecheck_util.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_util__HeadVar__2_2, check_hlds__modecheck_util__GoalInfo0_11, &check_hlds__modecheck_util__GoalInfo_12);
        }
#line 339 "modecheck_util.m"
        {
#line 339 "modecheck_util.m"
          check_hlds__modecheck_util__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 339 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_8, 0) = ((MR_Box) (check_hlds__modecheck_util__GoalExpr_10));
#line 339 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_8, 1) = ((MR_Box) (check_hlds__modecheck_util__GoalInfo_12));
#line 339 "modecheck_util.m"
        }
#line 340 "modecheck_util.m"
        {
#line 340 "modecheck_util.m"
          check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__Goals0_6, check_hlds__modecheck_util__HeadVar__2_2, &check_hlds__modecheck_util__Goals_9);
        }
#line 336 "modecheck_util.m"
        {
#line 336 "modecheck_util.m"
          MR_Word base;
#line 336 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 336 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 336 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_8));
#line 336 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_9));
#line 336 "modecheck_util.m"
        }
#line 336 "modecheck_util.m"
      }
#line 335 "modecheck_util.m"
  }
#line 332 "modecheck_util.m"
}

#line 313 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
#line 313 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 313 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 313 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 313 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 313 "modecheck_util.m"
{
#line 316 "modecheck_util.m"
  {
#line 316 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 316 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 316 "modecheck_util.m"
      {
#line 316 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 316 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 316 "modecheck_util.m"
      }
#line 316 "modecheck_util.m"
    else
#line 317 "modecheck_util.m"
      {
#line 317 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 317 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 317 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_10;
#line 317 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_11;
#line 317 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_13;
#line 317 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_14;
#line 317 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;
#line 317 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;

#line 318 "modecheck_util.m"
        {
#line 318 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal0_8);
        }
#line 319 "modecheck_util.m"
        {
#line 319 "modecheck_util.m"
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
        }
#line 320 "modecheck_util.m"
        {
#line 320 "modecheck_util.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_util__Goal0_8, &check_hlds__modecheck_util__Goal_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18);
        }
#line 321 "modecheck_util.m"
        {
#line 321 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__modecheck_util__InstMap_14);
        }
#line 322 "modecheck_util.m"
        {
#line 322 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_util__InstMap_14);
        }
#line 322 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 326 "modecheck_util.m"
          {
#line 326 "modecheck_util.m"
            {
#line 326 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_util__Goals0_9, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
            }
#line 327 "modecheck_util.m"
            check_hlds__modecheck_util__Goals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 326 "modecheck_util.m"
          }
#line 322 "modecheck_util.m"
        else
#line 329 "modecheck_util.m"
          {
#line 329 "modecheck_util.m"
            check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(check_hlds__modecheck_util__Goals0_9, &check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
          }
#line 317 "modecheck_util.m"
        {
#line 317 "modecheck_util.m"
          MR_Word base;
#line 317 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 317 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__2_2 = base;
#line 317 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_10));
#line 317 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_11));
#line 317 "modecheck_util.m"
        }
#line 317 "modecheck_util.m"
      }
#line 316 "modecheck_util.m"
  }
#line 313 "modecheck_util.m"
}

#line 1082 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
#line 1082 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1082 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1082 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1082 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1082 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1082 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1082 "modecheck_util.m"
{
#line 1082 "modecheck_util.m"
  {
#line 1082 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1082 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
#line 1082 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

#line 1082 "modecheck_util.m"
    {
#line 1082 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
#line 1082 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
#line 1082 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
#line 1082 "modecheck_util.m"
  }
#line 1082 "modecheck_util.m"
}

#line 184 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(
#line 184 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_4,
#line 184 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Modes_5,
#line 184 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Map_6)
#line 184 "modecheck_util.m"
{
#line 1081 "modecheck_util.m"
  {
#line 1081 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1081 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_8_8;
#line 1081 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_9_9;
#line 1081 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_10_10;
#line 1082 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___Expansions_7;
#line 1082 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv3_Map_6;
#line 1082 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv2__Expansions_7;

#line 1082 "modecheck_util.m"
    {
#line 1082 "modecheck_util.m"
      check_hlds__modecheck_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1082 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
#line 1082 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1));
#line 1082 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1082 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_4));
#line 1082 "modecheck_util.m"
    }
#line 1083 "modecheck_util.m"
    {
#line 1083 "modecheck_util.m"
      check_hlds__modecheck_util__V_9_9 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 1083 "modecheck_util.m"
    {
#line 1083 "modecheck_util.m"
      check_hlds__modecheck_util__V_10_10 = mercury__set_tree234__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    }
#line 1082 "modecheck_util.m"
    {
#line 1082 "modecheck_util.m"
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_8_8, check_hlds__modecheck_util__Modes_5, ((MR_Box) (check_hlds__modecheck_util__V_9_9)), &check_hlds__modecheck_util__conv3_Map_6, ((MR_Box) (check_hlds__modecheck_util__V_10_10)), &check_hlds__modecheck_util__conv2__Expansions_7);
    }
#line 1082 "modecheck_util.m"
    *check_hlds__modecheck_util__Map_6 = ((MR_Word) check_hlds__modecheck_util__conv3_Map_6);
#line 1082 "modecheck_util.m"
    check_hlds__modecheck_util___Expansions_7 = ((MR_Word) check_hlds__modecheck_util__conv2__Expansions_7);
#line 1081 "modecheck_util.m"
  }
#line 184 "modecheck_util.m"
}

#line 178 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__get_live_vars_3_p_0(
#line 178 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 178 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 178 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 178 "modecheck_util.m"
{
#line 1062 "modecheck_util.m"
  {
#line 1062 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1062 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1062 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1062 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1062 "modecheck_util.m"
      else
#line 1065 "modecheck_util.m"
        {
#line 1066 "modecheck_util.m"
          {
#line 1066 "modecheck_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
#line 1066 "modecheck_util.m"
            return;
          }
#line 1065 "modecheck_util.m"
        }
#line 1062 "modecheck_util.m"
    else
#line 1062 "modecheck_util.m"
      {
#line 1062 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1062 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1062 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1063 "modecheck_util.m"
          {
#line 1064 "modecheck_util.m"
            {
#line 1064 "modecheck_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
#line 1064 "modecheck_util.m"
              return;
            }
#line 1063 "modecheck_util.m"
          }
#line 1062 "modecheck_util.m"
        else
#line 1067 "modecheck_util.m"
          {
#line 1067 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1067 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1067 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__LiveVars0_21;

#line 1075 "modecheck_util.m"
            {
#line 1075 "modecheck_util.m"
              check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modecheck_util__V_22_22, check_hlds__modecheck_util__IsLives_19, &check_hlds__modecheck_util__LiveVars0_21);
            }
#line 1071 "modecheck_util.m"
#line 1071 "modecheck_util.m"
            switch (check_hlds__modecheck_util__IsLive_18) {
#line 1071 "modecheck_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1071 "modecheck_util.m"
              case (MR_Integer) 1:
#line 1072 "modecheck_util.m"
                *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__LiveVars0_21;
#line 1071 "modecheck_util.m"
                break;
#line 1071 "modecheck_util.m"
              case (MR_Integer) 0:
#line 1069 "modecheck_util.m"
                {
#line 1069 "modecheck_util.m"
                  MR_Word base;
#line 1069 "modecheck_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "modecheck_util.m"
                  *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 1069 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__V_23_23));
#line 1069 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__LiveVars0_21));
#line 1069 "modecheck_util.m"
                }
#line 1071 "modecheck_util.m"
                break;
#line 1071 "modecheck_util.m"
            }
#line 1067 "modecheck_util.m"
          }
#line 1062 "modecheck_util.m"
      }
#line 1062 "modecheck_util.m"
  }
#line 178 "modecheck_util.m"
}

#line 172 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(
#line 172 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util___ModeInfo_4,
#line 172 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModeContext_5,
#line 172 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__UnifyContext_6)
#line 172 "modecheck_util.m"
{
#line 1051 "modecheck_util.m"
  {
#line 1051 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1051 "modecheck_util.m"
    {
#line 1051 "modecheck_util.m"
      check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(check_hlds__modecheck_util__ModeContext_5, check_hlds__modecheck_util__UnifyContext_6);
    }
#line 1051 "modecheck_util.m"
  }
#line 172 "modecheck_util.m"
}

#line 169 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(
#line 169 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_8,
#line 169 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarType_9,
#line 169 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst_10,
#line 169 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Goal0_11,
#line 169 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_12,
#line 169 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_20,
#line 169 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21)
#line 169 "modecheck_util.m"
{
#line 1038 "modecheck_util.m"
  {
#line 1038 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1038 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_11, (MR_Integer) 1)));
#line 1038 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Context_16;
#line 1038 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InitVarGoal_18;
#line 1038 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ConjList0_19;
#line 1038 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_23_23;
#line 1039 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_11, (MR_Integer) 0)));

#line 1040 "modecheck_util.m"
    {
#line 1040 "modecheck_util.m"
      check_hlds__modecheck_util__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_util__GoalInfo0_15);
    }
#line 1042 "modecheck_util.m"
    {
#line 1042 "modecheck_util.m"
      check_hlds__modecheck_util__construct_initialisation_call_8_p_0(check_hlds__modecheck_util__Var_8, check_hlds__modecheck_util__VarType_9, check_hlds__modecheck_util__InitialInst_10, check_hlds__modecheck_util__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__InitVarGoal_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_20, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21);
    }
#line 1044 "modecheck_util.m"
    {
#line 1044 "modecheck_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__modecheck_util__Goal0_11, &check_hlds__modecheck_util__ConjList0_19);
    }
#line 1045 "modecheck_util.m"
    {
#line 1045 "modecheck_util.m"
      check_hlds__modecheck_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_23_23, 0) = ((MR_Box) (check_hlds__modecheck_util__InitVarGoal_18));
#line 1045 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_23_23, 1) = ((MR_Box) (check_hlds__modecheck_util__ConjList0_19));
#line 1045 "modecheck_util.m"
    }
#line 1045 "modecheck_util.m"
    {
#line 1045 "modecheck_util.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__modecheck_util__V_23_23, check_hlds__modecheck_util__GoalInfo0_15, check_hlds__modecheck_util__Goal_12);
    }
#line 1038 "modecheck_util.m"
  }
#line 169 "modecheck_util.m"
}

#line 166 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(
#line 166 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 166 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 166 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 166 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 166 "modecheck_util.m"
{
#line 921 "modecheck_util.m"
  {
#line 921 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 921 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "modecheck_util.m"
      {
#line 921 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 921 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 921 "modecheck_util.m"
      }
#line 921 "modecheck_util.m"
    else
#line 922 "modecheck_util.m"
      {
#line 922 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 922 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 922 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_10;
#line 922 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_11;
#line 922 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarTypes_13;
#line 922 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarType_14;
#line 922 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Context_16;
#line 922 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20;

#line 923 "modecheck_util.m"
        {
#line 923 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__VarTypes_13);
        }
#line 924 "modecheck_util.m"
        {
#line 924 "modecheck_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_13, check_hlds__modecheck_util__Var_8, &check_hlds__modecheck_util__VarType_14);
        }
#line 926 "modecheck_util.m"
        {
#line 926 "modecheck_util.m"
          check_hlds__modecheck_util__Context_16 = mercury__term__context_init_0_f_0();
        }
#line 928 "modecheck_util.m"
        {
#line 928 "modecheck_util.m"
          check_hlds__modecheck_util__construct_initialisation_call_8_p_0(check_hlds__modecheck_util__Var_8, check_hlds__modecheck_util__VarType_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__Goal_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20);
        }
#line 930 "modecheck_util.m"
        {
#line 930 "modecheck_util.m"
          check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_util__Vars_9, &check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
        }
#line 922 "modecheck_util.m"
        {
#line 922 "modecheck_util.m"
          MR_Word base;
#line 922 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__2_2 = base;
#line 922 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_10));
#line 922 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_11));
#line 922 "modecheck_util.m"
        }
#line 922 "modecheck_util.m"
      }
#line 921 "modecheck_util.m"
  }
#line 166 "modecheck_util.m"
}

#line 160 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__construct_initialisation_call_8_p_0(
#line 160 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_9,
#line 160 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarType_10,
#line 160 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_11,
#line 160 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_12,
#line 160 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_13,
#line 160 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__InitVarGoal_14,
#line 160 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27,
#line 160 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_28)
#line 160 "modecheck_util.m"
{
#line 934 "modecheck_util.m"
  {
#line 934 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 934 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_36_36;
#line 934 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TypeCtorInfo_49_49;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TypeCtor_16;
#line 935 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__PredName_17;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleName_18;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__NonLocals_22;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMapDeltaAL_23;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMapDelta_24;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_29_29;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_32_32;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_33_33;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_34_34;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_35_35;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_38_38;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_39_39;
#line 935 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_51_51;
#line 938 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__V_50_50;

#line 935 "modecheck_util.m"
    {
#line 935 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__modecheck_util__VarType_10, &check_hlds__modecheck_util__TypeCtor_16);
    }
#line 935 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 935 "modecheck_util.m"
      {
#line 936 "modecheck_util.m"
        check_hlds__modecheck_util__V_29_29 = (MR_Integer) 3;
#line 936 "modecheck_util.m"
        {
#line 936 "modecheck_util.m"
          check_hlds__modecheck_util__PredName_17 = hlds__special_pred__special_pred_name_2_f_0(check_hlds__modecheck_util__V_29_29, check_hlds__modecheck_util__TypeCtor_16);
        }
#line 938 "modecheck_util.m"
        check_hlds__modecheck_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__TypeCtor_16, (MR_Integer) 0)));
#line 938 "modecheck_util.m"
        check_hlds__modecheck_util__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__TypeCtor_16, (MR_Integer) 1)));
#line 939 "modecheck_util.m"
        if (((MR_tag((MR_Word) check_hlds__modecheck_util__V_51_51)) == (MR_mktag((MR_Integer) 1))))
#line 938 "modecheck_util.m"
          {
#line 938 "modecheck_util.m"
            MR_String check_hlds__modecheck_util___TypeName_19;

#line 938 "modecheck_util.m"
            check_hlds__modecheck_util__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_51_51, (MR_Integer) 0)));
#line 938 "modecheck_util.m"
            check_hlds__modecheck_util___TypeName_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_51_51, (MR_Integer) 1)));
#line 938 "modecheck_util.m"
          }
#line 939 "modecheck_util.m"
        else
#line 940 "modecheck_util.m"
          {
#line 940 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModuleInfo_21;

#line 941 "modecheck_util.m"
            {
#line 941 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modecheck_util__ModuleInfo_21);
            }
#line 942 "modecheck_util.m"
            {
#line 942 "modecheck_util.m"
              hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__modecheck_util__ModuleInfo_21, &check_hlds__modecheck_util__ModuleName_18);
            }
#line 940 "modecheck_util.m"
          }
#line 5150 "check_hlds.modecheck_util.c"
        check_hlds__modecheck_util__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 944 "modecheck_util.m"
        {
#line 944 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_22 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__modecheck_util__TypeCtorInfo_49_49, check_hlds__modecheck_util__Var_9);
        }
#line 945 "modecheck_util.m"
        check_hlds__modecheck_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 945 "modecheck_util.m"
        {
#line 945 "modecheck_util.m"
          check_hlds__modecheck_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 945 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_32_32, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_9));
#line 945 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_32_32, 1) = ((MR_Box) (check_hlds__modecheck_util__Inst_11));
#line 945 "modecheck_util.m"
        }
#line 945 "modecheck_util.m"
        {
#line 945 "modecheck_util.m"
          check_hlds__modecheck_util__InstMapDeltaAL_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 945 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstMapDeltaAL_23, 0) = ((MR_Box) (check_hlds__modecheck_util__V_32_32));
#line 945 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstMapDeltaAL_23, 1) = ((MR_Box) (check_hlds__modecheck_util__V_33_33));
#line 945 "modecheck_util.m"
        }
#line 946 "modecheck_util.m"
        {
#line 946 "modecheck_util.m"
          check_hlds__modecheck_util__InstMapDelta_24 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_util__InstMapDeltaAL_23);
        }
#line 947 "modecheck_util.m"
        check_hlds__modecheck_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "modecheck_util.m"
        check_hlds__modecheck_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 947 "modecheck_util.m"
        {
#line 947 "modecheck_util.m"
          check_hlds__modecheck_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_34_34, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_9));
#line 947 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_34_34, 1) = ((MR_Box) (check_hlds__modecheck_util__V_38_38));
#line 947 "modecheck_util.m"
        }
#line 947 "modecheck_util.m"
        {
#line 947 "modecheck_util.m"
          check_hlds__modecheck_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 947 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_util__VarType_10));
#line 947 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_35_35, 1) = ((MR_Box) (check_hlds__modecheck_util__V_39_39));
#line 947 "modecheck_util.m"
        }
#line 947 "modecheck_util.m"
        {
#line 947 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__build_call_11_p_0(check_hlds__modecheck_util__ModuleName_18, check_hlds__modecheck_util__PredName_17, check_hlds__modecheck_util__V_34_34, check_hlds__modecheck_util__V_35_35, check_hlds__modecheck_util__NonLocals_22, check_hlds__modecheck_util__InstMapDelta_24, check_hlds__modecheck_util__Context_12, check_hlds__modecheck_util__MaybeCallUnifyContext_13, &check_hlds__modecheck_util__V_36_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37);
        }
#line 935 "modecheck_util.m"
      }
#line 934 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 951 "modecheck_util.m"
      {
#line 951 "modecheck_util.m"
        *check_hlds__modecheck_util__InitVarGoal_14 = check_hlds__modecheck_util__V_36_36;
#line 967 "modecheck_util.m"
        {
#line 967 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_28);
        }
#line 951 "modecheck_util.m"
      }
#line 934 "modecheck_util.m"
    else
#line 969 "modecheck_util.m"
      {
#line 969 "modecheck_util.m"
        {
#line 969 "modecheck_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.construct_initialisation_call\'/8", (MR_String) "condition failed");
#line 969 "modecheck_util.m"
          return;
        }
#line 969 "modecheck_util.m"
      }
#line 934 "modecheck_util.m"
  }
#line 160 "modecheck_util.m"
}

#line 152 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(
#line 152 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMap0_7,
#line 152 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__GoalExpr_8,
#line 152 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15,
#line 152 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_16,
#line 152 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17,
#line 152 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18)
#line 152 "modecheck_util.m"
{
#line 377 "modecheck_util.m"
  {
#line 377 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 377 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__DeltaInstMap_12;
#line 378 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_19_19;
#line 378 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_11_11;

#line 378 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 378 "modecheck_util.m"
      {
#line 378 "modecheck_util.m"
        check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 1)));
#line 378 "modecheck_util.m"
        check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 2)));
#line 378 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 378 "modecheck_util.m"
      }
#line 378 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 385 "modecheck_util.m"
      {
#line 385 "modecheck_util.m"
        {
#line 385 "modecheck_util.m"
          hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__modecheck_util__DeltaInstMap_12);
        }
#line 386 "modecheck_util.m"
        {
#line 386 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap0_7, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
        }
#line 385 "modecheck_util.m"
      }
#line 378 "modecheck_util.m"
    else
#line 388 "modecheck_util.m"
      {
#line 388 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_13;
#line 388 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_14;

#line 388 "modecheck_util.m"
        {
#line 388 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15);
        }
#line 389 "modecheck_util.m"
        {
#line 389 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__InstMap_14);
        }
#line 390 "modecheck_util.m"
        {
#line 390 "modecheck_util.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modecheck_util__InstMap0_7, check_hlds__modecheck_util__InstMap_14, check_hlds__modecheck_util__NonLocals_13, &check_hlds__modecheck_util__DeltaInstMap_12);
        }
#line 388 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17;
#line 388 "modecheck_util.m"
      }
#line 392 "modecheck_util.m"
    {
#line 392 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_util__DeltaInstMap_12, check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15, check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_16);
    }
#line 377 "modecheck_util.m"
  }
#line 152 "modecheck_util.m"
}

#line 362 "modecheck_util.m"
static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
#line 362 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 362 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1)
#line 362 "modecheck_util.m"
{
#line 362 "modecheck_util.m"
  {
#line 362 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__wrapper_arg_2;
#line 362 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 362 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_BoundInst_8;

#line 362 "modecheck_util.m"
    {
#line 362 "modecheck_util.m"
      check_hlds__modecheck_util__conv0_BoundInst_8 = check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1));
    }
#line 362 "modecheck_util.m"
    check_hlds__modecheck_util__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_util__conv0_BoundInst_8));
#line 362 "modecheck_util.m"
    return check_hlds__modecheck_util__wrapper_arg_2;
#line 362 "modecheck_util.m"
  }
#line 362 "modecheck_util.m"
}

#line 143 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0(
#line 143 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_6,
#line 143 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MainConsId_7,
#line 143 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__OtherConsIds_8,
#line 143 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15,
#line 143 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_16)
#line 143 "modecheck_util.m"
{
#line 356 "modecheck_util.m"
  {
#line 356 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 356 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_10;
#line 356 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_11;
#line 356 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Type_12;
#line 356 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInsts_13;
#line 356 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Inst_14;
#line 356 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_17_17;
#line 356 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_18_18;

#line 359 "modecheck_util.m"
    {
#line 359 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_util__ModuleInfo_10);
    }
#line 360 "modecheck_util.m"
    {
#line 360 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_util__VarTypes_11);
    }
#line 361 "modecheck_util.m"
    {
#line 361 "modecheck_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_11, check_hlds__modecheck_util__Var_6, &check_hlds__modecheck_util__Type_12);
    }
#line 362 "modecheck_util.m"
    {
#line 362 "modecheck_util.m"
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[0]));
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1));
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_10));
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 4) = ((MR_Box) (check_hlds__modecheck_util__Type_12));
#line 362 "modecheck_util.m"
    }
#line 363 "modecheck_util.m"
    {
#line 363 "modecheck_util.m"
      check_hlds__modecheck_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 363 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_18_18, 0) = ((MR_Box) (check_hlds__modecheck_util__MainConsId_7));
#line 363 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_18_18, 1) = ((MR_Box) (check_hlds__modecheck_util__OtherConsIds_8));
#line 363 "modecheck_util.m"
    }
#line 362 "modecheck_util.m"
    {
#line 362 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInsts_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__modecheck_util__V_17_17, check_hlds__modecheck_util__V_18_18);
    }
#line 367 "modecheck_util.m"
    {
#line 367 "modecheck_util.m"
      check_hlds__modecheck_util__Inst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 367 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 367 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 1) = ((MR_Box) ((MR_Integer) 1));
#line 367 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 3) = ((MR_Box) (check_hlds__modecheck_util__BoundInsts_13));
#line 367 "modecheck_util.m"
    }
#line 368 "modecheck_util.m"
    {
#line 368 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_6, check_hlds__modecheck_util__Inst_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_16);
    }
#line 356 "modecheck_util.m"
  }
#line 143 "modecheck_util.m"
}

#line 134 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_functor_test_4_p_0(
#line 134 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_5,
#line 134 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_6,
#line 134 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13,
#line 134 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_14)
#line 134 "modecheck_util.m"
{
#line 344 "modecheck_util.m"
  {
#line 344 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 344 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_8;
#line 344 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_9;
#line 344 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Type_10;
#line 344 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInst_11;
#line 344 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Inst_12;
#line 344 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_17_17;
#line 344 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ConsIdAdjustedArity_25;
#line 344 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgInsts_26;

#line 347 "modecheck_util.m"
    {
#line 347 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__modecheck_util__ModuleInfo_8);
    }
#line 348 "modecheck_util.m"
    {
#line 348 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__modecheck_util__VarTypes_9);
    }
#line 349 "modecheck_util.m"
    {
#line 349 "modecheck_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_9, check_hlds__modecheck_util__Var_5, &check_hlds__modecheck_util__Type_10);
    }
#line 373 "modecheck_util.m"
    {
#line 373 "modecheck_util.m"
      check_hlds__modecheck_util__ConsIdAdjustedArity_25 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(check_hlds__modecheck_util__ModuleInfo_8, check_hlds__modecheck_util__Type_10, check_hlds__modecheck_util__ConsId_6);
    }
#line 374 "modecheck_util.m"
    {
#line 374 "modecheck_util.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__ConsIdAdjustedArity_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modecheck_util__ArgInsts_26);
    }
#line 375 "modecheck_util.m"
    {
#line 375 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInst_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 375 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_11, 0) = ((MR_Box) (check_hlds__modecheck_util__ConsId_6));
#line 375 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_11, 1) = ((MR_Box) (check_hlds__modecheck_util__ArgInsts_26));
#line 375 "modecheck_util.m"
    }
#line 353 "modecheck_util.m"
    {
#line 353 "modecheck_util.m"
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 353 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (check_hlds__modecheck_util__BoundInst_11));
#line 353 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "modecheck_util.m"
    }
#line 353 "modecheck_util.m"
    {
#line 353 "modecheck_util.m"
      check_hlds__modecheck_util__Inst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 353 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 353 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 1) = ((MR_Box) ((MR_Integer) 1));
#line 353 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 353 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 3) = ((MR_Box) (check_hlds__modecheck_util__V_17_17));
#line 353 "modecheck_util.m"
    }
#line 354 "modecheck_util.m"
    {
#line 354 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_5, check_hlds__modecheck_util__Inst_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_14);
    }
#line 344 "modecheck_util.m"
  }
#line 134 "modecheck_util.m"
}

#line 126 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(
#line 126 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 126 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2,
#line 126 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_3)
#line 126 "modecheck_util.m"
{
#line 894 "modecheck_util.m"
  while (MR_TRUE)
#line 894 "modecheck_util.m"
    {
#line 894 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 894 "modecheck_util.m"
      {
#line 894 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 894 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "modecheck_util.m"
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2;
#line 894 "modecheck_util.m"
        else
#line 895 "modecheck_util.m"
          {
#line 895 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 895 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 895 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;
#line 896 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ConjGoals_10;
#line 899 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_7, (MR_Integer) 0)));
#line 899 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_16_16;
#line 899 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_7, (MR_Integer) 1)));

#line 899 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__V_15_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 899 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 899 "modecheck_util.m"
              {
#line 899 "modecheck_util.m"
                check_hlds__modecheck_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 1)));
#line 899 "modecheck_util.m"
                check_hlds__modecheck_util__ConjGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 2)));
#line 899 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_16_16 == (MR_Integer) 0);
#line 899 "modecheck_util.m"
              }
#line 896 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 901 "modecheck_util.m"
              {
#line 901 "modecheck_util.m"
                check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_util__ConjGoals_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
              }
#line 896 "modecheck_util.m"
            else
#line 903 "modecheck_util.m"
              {
#line 903 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NonLocals_12;

#line 903 "modecheck_util.m"
                {
#line 903 "modecheck_util.m"
                  check_hlds__modecheck_util__NonLocals_12 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal_7);
                }
#line 904 "modecheck_util.m"
                {
#line 904 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_12, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
                }
#line 903 "modecheck_util.m"
              }
#line 906 "modecheck_util.m"
            /* direct tailcall eliminated */
#line 906 "modecheck_util.m"
            {
#line 906 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__Goals_8;
#line 906 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_2 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;

#line 906 "modecheck_util.m"
              check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_2;
#line 906 "modecheck_util.m"
              check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 906 "modecheck_util.m"
            }
#line 906 "modecheck_util.m"
            continue;
#line 895 "modecheck_util.m"
          }
#line 894 "modecheck_util.m"
      }
#line 894 "modecheck_util.m"
      break;
#line 894 "modecheck_util.m"
    }
#line 126 "modecheck_util.m"
}

#line 123 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(
#line 123 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 123 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 123 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 123 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 123 "modecheck_util.m"
{
#line 875 "modecheck_util.m"
  while (MR_TRUE)
#line 875 "modecheck_util.m"
    {
#line 875 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 875 "modecheck_util.m"
      {
#line 875 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 875 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 875 "modecheck_util.m"
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 875 "modecheck_util.m"
        else
#line 876 "modecheck_util.m"
          {
#line 876 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 876 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 876 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;
#line 883 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ConjGoals_13;
#line 886 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_19_19;
#line 886 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_22_22;
#line 886 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_14_14;

#line 882 "modecheck_util.m"
            {
#line 882 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_util__HeadVar__1_1, check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18);
            }
#line 886 "modecheck_util.m"
            check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_10, (MR_Integer) 0)));
#line 886 "modecheck_util.m"
            check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_10, (MR_Integer) 1)));
#line 886 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 886 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 886 "modecheck_util.m"
              {
#line 886 "modecheck_util.m"
                check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 1)));
#line 886 "modecheck_util.m"
                check_hlds__modecheck_util__ConjGoals_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 2)));
#line 886 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__1_1 == check_hlds__modecheck_util__V_22_22);
#line 886 "modecheck_util.m"
              }
#line 883 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 888 "modecheck_util.m"
              {
#line 888 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 888 "modecheck_util.m"
                {
#line 888 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__ConjGoals_13;
#line 888 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;

#line 888 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_3;
#line 888 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 888 "modecheck_util.m"
                }
#line 888 "modecheck_util.m"
                continue;
#line 888 "modecheck_util.m"
              }
#line 883 "modecheck_util.m"
            else
#line 890 "modecheck_util.m"
              {
#line 890 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NonLocals_15;

#line 890 "modecheck_util.m"
                {
#line 890 "modecheck_util.m"
                  check_hlds__modecheck_util__NonLocals_15 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal_10);
                }
#line 891 "modecheck_util.m"
                {
#line 891 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
                }
#line 890 "modecheck_util.m"
              }
#line 876 "modecheck_util.m"
          }
#line 875 "modecheck_util.m"
      }
#line 875 "modecheck_util.m"
      break;
#line 875 "modecheck_util.m"
    }
#line 123 "modecheck_util.m"
}

#line 119 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(
#line 119 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars0_9,
#line 119 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInsts_10,
#line 119 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__FinalInsts_11,
#line 119 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgOffset_12,
#line 119 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Vars_13,
#line 119 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goals_14,
#line 119 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_18,
#line 119 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_19)
#line 119 "modecheck_util.m"
{
#line 628 "modecheck_util.m"
  {
#line 628 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 628 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Vars1_16;
#line 628 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Goals1_17;
#line 628 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21;

#line 629 "modecheck_util.m"
    {
#line 629 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(check_hlds__modecheck_util__Vars0_9, check_hlds__modecheck_util__InitialInsts_10, check_hlds__modecheck_util__FinalInsts_11, check_hlds__modecheck_util__ArgOffset_12, &check_hlds__modecheck_util__Vars1_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__Goals1_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 628 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 632 "modecheck_util.m"
      {
#line 632 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_19 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21;
#line 632 "modecheck_util.m"
        *check_hlds__modecheck_util__Vars_13 = check_hlds__modecheck_util__Vars1_16;
#line 633 "modecheck_util.m"
        *check_hlds__modecheck_util__Goals_14 = check_hlds__modecheck_util__Goals1_17;
#line 632 "modecheck_util.m"
      }
#line 628 "modecheck_util.m"
    else
#line 635 "modecheck_util.m"
      {
#line 635 "modecheck_util.m"
        {
#line 635 "modecheck_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst_list\'/8", (MR_String) "length mismatch");
#line 635 "modecheck_util.m"
          return;
        }
#line 635 "modecheck_util.m"
      }
#line 628 "modecheck_util.m"
  }
#line 119 "modecheck_util.m"
}

#line 116 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(
#line 116 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_6,
#line 116 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NewInst_7,
#line 116 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeUInst_8,
#line 116 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33,
#line 116 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34)
#line 116 "modecheck_util.m"
{
#line 677 "modecheck_util.m"
  {
#line 677 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 677 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PVars0_10;
#line 677 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMap0_11;
#line 677 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42;

#line 683 "modecheck_util.m"
    {
#line 683 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__PVars0_10);
    }
#line 684 "modecheck_util.m"
    {
#line 684 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__InstMap0_11);
    }
#line 685 "modecheck_util.m"
    {
#line 685 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__InstMap0_11);
    }
#line 685 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 686 "modecheck_util.m"
      {
#line 686 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__OldInst_12;
#line 686 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModuleInfo0_13;
#line 686 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModuleInfo_14;
#line 686 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Inst_15;
#line 686 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarTypes_19;
#line 686 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Type_20;
#line 686 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40;
#line 714 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_57_57;

#line 686 "modecheck_util.m"
        {
#line 686 "modecheck_util.m"
          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap0_11, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__OldInst_12);
        }
#line 687 "modecheck_util.m"
        {
#line 687 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__ModuleInfo0_13);
        }
#line 695 "modecheck_util.m"
        {
#line 695 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__NewInst_7);
        }
#line 694 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 697 "modecheck_util.m"
          {
#line 697 "modecheck_util.m"
            check_hlds__modecheck_util__ModuleInfo_14 = check_hlds__modecheck_util__ModuleInfo0_13;
#line 698 "modecheck_util.m"
            check_hlds__modecheck_util__Inst_15 = check_hlds__modecheck_util__OldInst_12;
#line 697 "modecheck_util.m"
          }
#line 694 "modecheck_util.m"
        else
#line 699 "modecheck_util.m"
          {
#line 699 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__UnifyInst_16;
#line 699 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModuleInfo1_18;
#line 700 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util___Det_17;

#line 700 "modecheck_util.m"
            {
#line 700 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__NewInst_7, (MR_Integer) 1, &check_hlds__modecheck_util__UnifyInst_16, &check_hlds__modecheck_util___Det_17, check_hlds__modecheck_util__ModuleInfo0_13, &check_hlds__modecheck_util__ModuleInfo1_18);
            }
#line 699 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 703 "modecheck_util.m"
              {
#line 703 "modecheck_util.m"
                check_hlds__modecheck_util__ModuleInfo_14 = check_hlds__modecheck_util__ModuleInfo1_18;
#line 704 "modecheck_util.m"
                check_hlds__modecheck_util__Inst_15 = check_hlds__modecheck_util__UnifyInst_16;
#line 703 "modecheck_util.m"
              }
#line 699 "modecheck_util.m"
            else
#line 706 "modecheck_util.m"
              {
#line 706 "modecheck_util.m"
                {
#line 706 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst\'/5", (MR_String) "unify_inst failed");
#line 706 "modecheck_util.m"
                  return;
                }
#line 706 "modecheck_util.m"
              }
#line 699 "modecheck_util.m"
          }
#line 708 "modecheck_util.m"
        {
#line 708 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_14, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40);
        }
#line 709 "modecheck_util.m"
        {
#line 709 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__VarTypes_19);
        }
#line 710 "modecheck_util.m"
        {
#line 710 "modecheck_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_19, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__Type_20);
        }
#line 714 "modecheck_util.m"
        {
#line 714 "modecheck_util.m"
          check_hlds__inst_util__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo_14, check_hlds__modecheck_util__Inst_15, &check_hlds__modecheck_util__V_57_57);
        }
#line 714 "modecheck_util.m"
        {
#line 714 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_util__V_57_57);
        }
#line 711 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 716 "modecheck_util.m"
          {
#line 716 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__InstMap_21;

#line 716 "modecheck_util.m"
            {
#line 716 "modecheck_util.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_util__InstMap_21);
            }
#line 717 "modecheck_util.m"
            {
#line 717 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_21, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
            }
#line 716 "modecheck_util.m"
          }
#line 711 "modecheck_util.m"
        else
#line 718 "modecheck_util.m"
          {
#line 722 "modecheck_util.m"
            {
#line 722 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
            }
#line 718 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 724 "modecheck_util.m"
              {
#line 724 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_50;

#line 724 "modecheck_util.m"
                {
#line 724 "modecheck_util.m"
                  hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__InstMap0_11, &check_hlds__modecheck_util__InstMap_50);
                }
#line 725 "modecheck_util.m"
                {
#line 725 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                }
#line 724 "modecheck_util.m"
              }
#line 718 "modecheck_util.m"
            else
#line 726 "modecheck_util.m"
              {
#line 726 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Reason0_22;
#line 743 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__UInst_23;

#line 731 "modecheck_util.m"
                {
#line 731 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                }
#line 731 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 731 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 731 "modecheck_util.m"
                  {
#line 735 "modecheck_util.m"
                    {
#line 735 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__Reason0_22);
                    }
#line 731 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 731 "modecheck_util.m"
                      {
#line 743 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__MaybeUInst_8)) == (MR_mktag((MR_Integer) 1)));
#line 743 "modecheck_util.m"
                        if (check_hlds__modecheck_util__succeeded)
#line 743 "modecheck_util.m"
                          {
#line 743 "modecheck_util.m"
                            check_hlds__modecheck_util__UInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__MaybeUInst_8, (MR_Integer) 0)));
#line 744 "modecheck_util.m"
                            {
#line 744 "modecheck_util.m"
                              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__UInst_23, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                            }
#line 743 "modecheck_util.m"
                            if (check_hlds__modecheck_util__succeeded)
#line 746 "modecheck_util.m"
                              {
#line 746 "modecheck_util.m"
                                check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                              }
#line 743 "modecheck_util.m"
                          }
#line 736 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 731 "modecheck_util.m"
                      }
#line 731 "modecheck_util.m"
                  }
#line 726 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 750 "modecheck_util.m"
                  {
#line 750 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_24;
#line 750 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_25;

#line 750 "modecheck_util.m"
                    {
#line 750 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_6);
                    }
#line 751 "modecheck_util.m"
                    {
#line 751 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 751 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 751 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 1) = ((MR_Box) (check_hlds__modecheck_util__Reason0_22));
#line 751 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 2) = ((MR_Box) (check_hlds__modecheck_util__Var0_6));
#line 751 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 3) = ((MR_Box) (check_hlds__modecheck_util__OldInst_12));
#line 751 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 4) = ((MR_Box) (check_hlds__modecheck_util__Inst_15));
#line 751 "modecheck_util.m"
                    }
#line 752 "modecheck_util.m"
                    {
#line 752 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_24, check_hlds__modecheck_util__ModeError_25, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                    }
#line 750 "modecheck_util.m"
                  }
#line 726 "modecheck_util.m"
                else
#line 754 "modecheck_util.m"
                  {
#line 754 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__DelayInfo0_26;
#line 754 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__DelayInfo_27;
#line 754 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45;
#line 754 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__InstMap_51;

#line 754 "modecheck_util.m"
                    {
#line 754 "modecheck_util.m"
                      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__InstMap0_11, &check_hlds__modecheck_util__InstMap_51);
                    }
#line 755 "modecheck_util.m"
                    {
#line 755 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_51, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45);
                    }
#line 756 "modecheck_util.m"
                    {
#line 756 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_util__DelayInfo0_26);
                    }
#line 757 "modecheck_util.m"
                    {
#line 757 "modecheck_util.m"
                      check_hlds__delay_info__delay_info_bind_var_3_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__DelayInfo0_26, &check_hlds__modecheck_util__DelayInfo_27);
                    }
#line 758 "modecheck_util.m"
                    {
#line 758 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_util__DelayInfo_27, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                    }
#line 754 "modecheck_util.m"
                  }
#line 726 "modecheck_util.m"
              }
#line 718 "modecheck_util.m"
          }
#line 686 "modecheck_util.m"
      }
#line 685 "modecheck_util.m"
    else
#line 685 "modecheck_util.m"
      check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33;
#line 765 "modecheck_util.m"
    if ((check_hlds__modecheck_util__PVars0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 764 "modecheck_util.m"
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42;
#line 765 "modecheck_util.m"
    else
#line 766 "modecheck_util.m"
      {
#line 766 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_28;
#line 766 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Bound0_29;
#line 766 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__PVars1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars0_10, (MR_Integer) 1)));
#line 766 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__PVars_32;
#line 766 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars0_10, (MR_Integer) 0)));

#line 766 "modecheck_util.m"
        check_hlds__modecheck_util__NonLocals_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_47_47, (MR_Integer) 0)));
#line 766 "modecheck_util.m"
        check_hlds__modecheck_util__Bound0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_47_47, (MR_Integer) 1)));
#line 767 "modecheck_util.m"
        {
#line 767 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__NonLocals_28, check_hlds__modecheck_util__Var0_6);
        }
#line 767 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 768 "modecheck_util.m"
          {
#line 768 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Bound_31;
#line 768 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_48_48;

#line 768 "modecheck_util.m"
            {
#line 768 "modecheck_util.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Bound0_29, &check_hlds__modecheck_util__Bound_31);
            }
#line 769 "modecheck_util.m"
            {
#line 769 "modecheck_util.m"
              check_hlds__modecheck_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 769 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_48_48, 0) = ((MR_Box) (check_hlds__modecheck_util__NonLocals_28));
#line 769 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_48_48, 1) = ((MR_Box) (check_hlds__modecheck_util__Bound_31));
#line 769 "modecheck_util.m"
            }
#line 769 "modecheck_util.m"
            {
#line 769 "modecheck_util.m"
              check_hlds__modecheck_util__PVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 769 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars_32, 0) = ((MR_Box) (check_hlds__modecheck_util__V_48_48));
#line 769 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars_32, 1) = ((MR_Box) (check_hlds__modecheck_util__PVars1_30));
#line 769 "modecheck_util.m"
            }
#line 768 "modecheck_util.m"
          }
#line 767 "modecheck_util.m"
        else
#line 771 "modecheck_util.m"
          check_hlds__modecheck_util__PVars_32 = check_hlds__modecheck_util__PVars0_10;
#line 773 "modecheck_util.m"
        {
#line 773 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(check_hlds__modecheck_util__PVars_32, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34);
        }
#line 766 "modecheck_util.m"
      }
#line 677 "modecheck_util.m"
  }
#line 116 "modecheck_util.m"
}

#line 101 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(
#line 101 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_6,
#line 101 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_7,
#line 101 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_8,
#line 101 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17,
#line 101 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18)
#line 101 "modecheck_util.m"
{
#line 568 "modecheck_util.m"
  {
#line 568 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 568 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMap_10;
#line 568 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarInst_11;
#line 568 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_12;
#line 572 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_13;
#line 573 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_19_19;
#line 573 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___Subst_14;

#line 569 "modecheck_util.m"
    {
#line 569 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__InstMap_10);
    }
#line 570 "modecheck_util.m"
    {
#line 570 "modecheck_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_10, check_hlds__modecheck_util__Var_6, &check_hlds__modecheck_util__VarInst_11);
    }
#line 571 "modecheck_util.m"
    {
#line 571 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__ModuleInfo0_12);
    }
#line 574 "modecheck_util.m"
    {
#line 574 "modecheck_util.m"
      check_hlds__modecheck_util__V_19_19 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 573 "modecheck_util.m"
    {
#line 573 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__modecheck_util__VarInst_11, check_hlds__modecheck_util__Inst_8, check_hlds__modecheck_util__Type_7, check_hlds__modecheck_util__ModuleInfo0_12, &check_hlds__modecheck_util__ModuleInfo_13, check_hlds__modecheck_util__V_19_19, &check_hlds__modecheck_util___Subst_14);
    }
#line 572 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 576 "modecheck_util.m"
      {
#line 576 "modecheck_util.m"
        check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
      }
#line 572 "modecheck_util.m"
    else
#line 578 "modecheck_util.m"
      {
#line 578 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__WaitingVars_15;
#line 578 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModeError_16;

#line 578 "modecheck_util.m"
        {
#line 578 "modecheck_util.m"
          check_hlds__modecheck_util__WaitingVars_15 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var_6);
        }
#line 579 "modecheck_util.m"
        {
#line 579 "modecheck_util.m"
          check_hlds__modecheck_util__ModeError_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 579 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 579 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 1) = ((MR_Box) (check_hlds__modecheck_util__Var_6));
#line 579 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_11));
#line 579 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_8));
#line 579 "modecheck_util.m"
        }
#line 580 "modecheck_util.m"
        {
#line 580 "modecheck_util.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_15, check_hlds__modecheck_util__ModeError_16, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
        }
#line 578 "modecheck_util.m"
      }
#line 568 "modecheck_util.m"
  }
#line 101 "modecheck_util.m"
}

#line 591 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1(
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
#line 591 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4)
#line 591 "modecheck_util.m"
{
#line 591 "modecheck_util.m"
  {
#line 591 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 591 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;

#line 591 "modecheck_util.m"
    {
#line 591 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 591 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 591 "modecheck_util.m"
  }
#line 591 "modecheck_util.m"
}

#line 93 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(
#line 93 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars_7,
#line 93 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Insts_8,
#line 93 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum_9,
#line 93 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Subst_10,
#line 93 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12,
#line 93 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13)
#line 93 "modecheck_util.m"
{
#line 479 "modecheck_util.m"
  {
#line 479 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 479 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_14_14;
#line 479 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
#line 479 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__HeadInstVars_24;
#line 591 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_30_30;
#line 591 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv0_V_25_25;

#line 481 "modecheck_util.m"
    {
#line 481 "modecheck_util.m"
      check_hlds__modecheck_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 480 "modecheck_util.m"
    {
#line 480 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(check_hlds__modecheck_util__Vars_7, check_hlds__modecheck_util__Insts_8, check_hlds__modecheck_util__ArgNum_9, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__Subst_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15);
    }
#line 589 "modecheck_util.m"
    {
#line 589 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__HeadInstVars_24);
    }
#line 591 "modecheck_util.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 591 "modecheck_util.m"
    {
#line 591 "modecheck_util.m"
      check_hlds__modecheck_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 591 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
#line 591 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1));
#line 591 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 591 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 3) = ((MR_Box) (check_hlds__modecheck_util__HeadInstVars_24));
#line 591 "modecheck_util.m"
    }
#line 591 "modecheck_util.m"
    {
#line 591 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__map__foldl_4_p_3((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, check_hlds__modecheck_util__V_30_30, *check_hlds__modecheck_util__Subst_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modecheck_util__conv0_V_25_25);
    }
#line 591 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 591 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 590 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 590 "modecheck_util.m"
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
#line 590 "modecheck_util.m"
    else
#line 595 "modecheck_util.m"
      {
#line 595 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_26;
#line 595 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarInsts_27;
#line 595 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__WaitingVars_28;
#line 595 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModeError_29;

#line 595 "modecheck_util.m"
        {
#line 595 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__InstMap_26);
        }
#line 596 "modecheck_util.m"
        {
#line 596 "modecheck_util.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_util__InstMap_26, check_hlds__modecheck_util__Vars_7, &check_hlds__modecheck_util__VarInsts_27);
        }
#line 597 "modecheck_util.m"
        {
#line 597 "modecheck_util.m"
          check_hlds__modecheck_util__WaitingVars_28 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Vars_7);
        }
#line 598 "modecheck_util.m"
        {
#line 598 "modecheck_util.m"
          check_hlds__modecheck_util__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 598 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 598 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_7));
#line 598 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInsts_27));
#line 598 "modecheck_util.m"
        }
#line 599 "modecheck_util.m"
        {
#line 599 "modecheck_util.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_28, check_hlds__modecheck_util__ModeError_29, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13);
        }
#line 595 "modecheck_util.m"
      }
#line 479 "modecheck_util.m"
  }
#line 93 "modecheck_util.m"
}

#line 591 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1(
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 591 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
#line 591 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4)
#line 591 "modecheck_util.m"
{
#line 591 "modecheck_util.m"
  {
#line 591 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 591 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;

#line 591 "modecheck_util.m"
    {
#line 591 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 591 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 591 "modecheck_util.m"
  }
#line 591 "modecheck_util.m"
}

#line 90 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(
#line 90 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars_7,
#line 90 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Insts_8,
#line 90 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum_9,
#line 90 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Subst_10,
#line 90 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12,
#line 90 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13)
#line 90 "modecheck_util.m"
{
#line 473 "modecheck_util.m"
  {
#line 473 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 473 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_14_14;
#line 473 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
#line 473 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__HeadInstVars_24;
#line 591 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_30_30;
#line 591 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv0_V_25_25;

#line 475 "modecheck_util.m"
    {
#line 475 "modecheck_util.m"
      check_hlds__modecheck_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 474 "modecheck_util.m"
    {
#line 474 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(check_hlds__modecheck_util__Vars_7, check_hlds__modecheck_util__Insts_8, check_hlds__modecheck_util__ArgNum_9, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__Subst_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15);
    }
#line 589 "modecheck_util.m"
    {
#line 589 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__HeadInstVars_24);
    }
#line 591 "modecheck_util.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 591 "modecheck_util.m"
    {
#line 591 "modecheck_util.m"
      check_hlds__modecheck_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 591 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
#line 591 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1));
#line 591 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 591 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 3) = ((MR_Box) (check_hlds__modecheck_util__HeadInstVars_24));
#line 591 "modecheck_util.m"
    }
#line 591 "modecheck_util.m"
    {
#line 591 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__map__foldl_4_p_3((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, check_hlds__modecheck_util__V_30_30, *check_hlds__modecheck_util__Subst_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modecheck_util__conv0_V_25_25);
    }
#line 591 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 591 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 590 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 590 "modecheck_util.m"
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
#line 590 "modecheck_util.m"
    else
#line 595 "modecheck_util.m"
      {
#line 595 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_26;
#line 595 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarInsts_27;
#line 595 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__WaitingVars_28;
#line 595 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModeError_29;

#line 595 "modecheck_util.m"
        {
#line 595 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__InstMap_26);
        }
#line 596 "modecheck_util.m"
        {
#line 596 "modecheck_util.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_util__InstMap_26, check_hlds__modecheck_util__Vars_7, &check_hlds__modecheck_util__VarInsts_27);
        }
#line 597 "modecheck_util.m"
        {
#line 597 "modecheck_util.m"
          check_hlds__modecheck_util__WaitingVars_28 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Vars_7);
        }
#line 598 "modecheck_util.m"
        {
#line 598 "modecheck_util.m"
          check_hlds__modecheck_util__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 598 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 598 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_7));
#line 598 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInsts_27));
#line 598 "modecheck_util.m"
        }
#line 599 "modecheck_util.m"
        {
#line 599 "modecheck_util.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_28, check_hlds__modecheck_util__ModeError_29, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13);
        }
#line 595 "modecheck_util.m"
      }
#line 473 "modecheck_util.m"
  }
#line 90 "modecheck_util.m"
}

#line 81 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(
#line 81 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 81 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 81 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 81 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4,
#line 81 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5)
#line 81 "modecheck_util.m"
{
#line 416 "modecheck_util.m"
  while (MR_TRUE)
#line 416 "modecheck_util.m"
    {
#line 416 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 416 "modecheck_util.m"
      {
#line 416 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 416 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 420 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4;
#line 416 "modecheck_util.m"
          else
#line 418 "modecheck_util.m"
            {
#line 419 "modecheck_util.m"
              {
#line 419 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
#line 419 "modecheck_util.m"
                return;
              }
#line 418 "modecheck_util.m"
            }
#line 416 "modecheck_util.m"
        else
#line 416 "modecheck_util.m"
          {
#line 416 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 416 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 416 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 416 "modecheck_util.m"
              {
#line 417 "modecheck_util.m"
                {
#line 417 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
#line 417 "modecheck_util.m"
                  return;
                }
#line 416 "modecheck_util.m"
              }
#line 416 "modecheck_util.m"
            else
#line 422 "modecheck_util.m"
              {
#line 422 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLive_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 422 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLives_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 422 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_34 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 422 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 422 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;
#line 422 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarIsLive_48;

#line 424 "modecheck_util.m"
                {
#line 424 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_34, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38);
                }
#line 443 "modecheck_util.m"
                {
#line 443 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_util__V_42_42, &check_hlds__modecheck_util__VarIsLive_48);
                }
#line 445 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__IsLive_30 == (MR_Integer) 1);
#line 445 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 446 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__VarIsLive_48 == (MR_Integer) 0);
#line 444 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 448 "modecheck_util.m"
                  {
#line 448 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_49;
#line 448 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_50;

#line 448 "modecheck_util.m"
                    {
#line 448 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_42_42);
                    }
#line 449 "modecheck_util.m"
                    {
#line 449 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 449 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
#line 449 "modecheck_util.m"
                    }
#line 450 "modecheck_util.m"
                    {
#line 450 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_49, check_hlds__modecheck_util__ModeError_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39);
                    }
#line 448 "modecheck_util.m"
                  }
#line 444 "modecheck_util.m"
                else
#line 444 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 426 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 426 "modecheck_util.m"
                {
#line 426 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_41_41;
#line 426 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__IsLives_31;
#line 426 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_34;
#line 426 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;

#line 426 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 426 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 426 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 426 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 426 "modecheck_util.m"
                }
#line 426 "modecheck_util.m"
                continue;
#line 422 "modecheck_util.m"
              }
#line 416 "modecheck_util.m"
          }
#line 416 "modecheck_util.m"
      }
#line 416 "modecheck_util.m"
      break;
#line 416 "modecheck_util.m"
    }
#line 81 "modecheck_util.m"
}

#line 79 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_p_0(
#line 79 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 79 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 79 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 79 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4,
#line 79 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5)
#line 79 "modecheck_util.m"
{
#line 404 "modecheck_util.m"
  while (MR_TRUE)
#line 404 "modecheck_util.m"
    {
#line 404 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 404 "modecheck_util.m"
      {
#line 404 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 404 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 408 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4;
#line 404 "modecheck_util.m"
          else
#line 406 "modecheck_util.m"
            {
#line 407 "modecheck_util.m"
              {
#line 407 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
#line 407 "modecheck_util.m"
                return;
              }
#line 406 "modecheck_util.m"
            }
#line 404 "modecheck_util.m"
        else
#line 404 "modecheck_util.m"
          {
#line 404 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 404 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 404 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "modecheck_util.m"
              {
#line 405 "modecheck_util.m"
                {
#line 405 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
#line 405 "modecheck_util.m"
                  return;
                }
#line 404 "modecheck_util.m"
              }
#line 404 "modecheck_util.m"
            else
#line 410 "modecheck_util.m"
              {
#line 410 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLive_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 410 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLives_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 410 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_34 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 410 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 410 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;
#line 410 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarIsLive_48;

#line 412 "modecheck_util.m"
                {
#line 412 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_34, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38);
                }
#line 461 "modecheck_util.m"
                {
#line 461 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_util__V_42_42, &check_hlds__modecheck_util__VarIsLive_48);
                }
#line 462 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__VarIsLive_48 == check_hlds__modecheck_util__IsLive_30);
#line 462 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 462 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 462 "modecheck_util.m"
                else
#line 465 "modecheck_util.m"
                  {
#line 465 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_49;
#line 465 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_50;

#line 465 "modecheck_util.m"
                    {
#line 465 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_42_42);
                    }
#line 466 "modecheck_util.m"
                    {
#line 466 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 466 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 466 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
#line 466 "modecheck_util.m"
                    }
#line 467 "modecheck_util.m"
                    {
#line 467 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_49, check_hlds__modecheck_util__ModeError_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39);
                    }
#line 465 "modecheck_util.m"
                  }
#line 414 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 414 "modecheck_util.m"
                {
#line 414 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_41_41;
#line 414 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__IsLives_31;
#line 414 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_34;
#line 414 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;

#line 414 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 414 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 414 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 414 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 414 "modecheck_util.m"
                }
#line 414 "modecheck_util.m"
                continue;
#line 410 "modecheck_util.m"
              }
#line 404 "modecheck_util.m"
          }
#line 404 "modecheck_util.m"
      }
#line 404 "modecheck_util.m"
      break;
#line 404 "modecheck_util.m"
    }
#line 79 "modecheck_util.m"
}

#line 73 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__compute_arg_offset_2_p_0(
#line 73 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PredInfo_3,
#line 73 "modecheck_util.m"
  MR_Integer * check_hlds__modecheck_util__ArgOffset_4)
#line 73 "modecheck_util.m"
{
#line 396 "modecheck_util.m"
  {
#line 396 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 396 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__OrigArity_5;
#line 396 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgTypes_6;
#line 396 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CurrentArity_7;

#line 397 "modecheck_util.m"
    {
#line 397 "modecheck_util.m"
      check_hlds__modecheck_util__OrigArity_5 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modecheck_util__PredInfo_3);
    }
#line 398 "modecheck_util.m"
    {
#line 398 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_util__PredInfo_3, &check_hlds__modecheck_util__ArgTypes_6);
    }
#line 399 "modecheck_util.m"
    {
#line 399 "modecheck_util.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__modecheck_util__ArgTypes_6, &check_hlds__modecheck_util__CurrentArity_7);
    }
#line 400 "modecheck_util.m"
    *check_hlds__modecheck_util__ArgOffset_4 = (check_hlds__modecheck_util__OrigArity_5 - check_hlds__modecheck_util__CurrentArity_7);
#line 396 "modecheck_util.m"
  }
#line 73 "modecheck_util.m"
}

#line 61 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_9_p_0(
#line 61 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MainGoal_1,
#line 61 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 61 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 61 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__4_4,
#line 61 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__5_5,
#line 61 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__6_6,
#line 61 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__7_7,
#line 61 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 61 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9)
#line 61 "modecheck_util.m"
{
#line 234 "modecheck_util.m"
  {
#line 234 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 234 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 234 "modecheck_util.m"
      {
#line 235 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__7_7 = check_hlds__modecheck_util__MainGoal_1;
#line 235 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 234 "modecheck_util.m"
      }
#line 234 "modecheck_util.m"
    else
#line 237 "modecheck_util.m"
      {
#line 237 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__BeforeGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__AfterGoals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Errors_27;

#line 238 "modecheck_util.m"
        {
#line 238 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__Errors_27);
        }
#line 242 "modecheck_util.m"
        {
#line 242 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__HeadVar__6_6);
        }
#line 242 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 246 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__Errors_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 239 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 261 "modecheck_util.m"
          {
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__TypeCtorInfo_57_57;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NonLocals0_28;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__OldArgVars_29;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NewArgVars_30;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IntroducedVars_31;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__OutsideVars_32;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NonLocals_33;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalInfo_34;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal0_35;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Context_36;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals_37;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals_38;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalList0_39;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__MayChangeCalledProc0_40;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalList_41;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_44_44;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 261 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55;

#line 261 "modecheck_util.m"
            {
#line 261 "modecheck_util.m"
              check_hlds__modecheck_util__NonLocals0_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_util__HeadVar__3_3);
            }
#line 7235 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 262 "modecheck_util.m"
            {
#line 262 "modecheck_util.m"
              parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__HeadVar__4_4, &check_hlds__modecheck_util__OldArgVars_29);
            }
#line 263 "modecheck_util.m"
            {
#line 263 "modecheck_util.m"
              parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__HeadVar__5_5, &check_hlds__modecheck_util__NewArgVars_30);
            }
#line 264 "modecheck_util.m"
            {
#line 264 "modecheck_util.m"
              parse_tree__set_of_var__difference_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__NewArgVars_30, check_hlds__modecheck_util__OldArgVars_29, &check_hlds__modecheck_util__IntroducedVars_31);
            }
#line 265 "modecheck_util.m"
            {
#line 265 "modecheck_util.m"
              parse_tree__set_of_var__union_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__NonLocals0_28, check_hlds__modecheck_util__IntroducedVars_31, &check_hlds__modecheck_util__OutsideVars_32);
            }
#line 266 "modecheck_util.m"
            {
#line 266 "modecheck_util.m"
              parse_tree__set_of_var__intersect_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__OutsideVars_32, check_hlds__modecheck_util__NewArgVars_30, &check_hlds__modecheck_util__NonLocals_33);
            }
#line 267 "modecheck_util.m"
            {
#line 267 "modecheck_util.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_util__NonLocals_33, check_hlds__modecheck_util__HeadVar__3_3, &check_hlds__modecheck_util__GoalInfo_34);
            }
#line 270 "modecheck_util.m"
            {
#line 270 "modecheck_util.m"
              check_hlds__modecheck_util__Goal0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 270 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_35, 0) = ((MR_Box) (check_hlds__modecheck_util__MainGoal_1));
#line 270 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_35, 1) = ((MR_Box) (check_hlds__modecheck_util__GoalInfo_34));
#line 270 "modecheck_util.m"
            }
#line 271 "modecheck_util.m"
            {
#line 271 "modecheck_util.m"
              check_hlds__modecheck_util__Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_util__HeadVar__3_3);
            }
#line 272 "modecheck_util.m"
            {
#line 272 "modecheck_util.m"
              check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__BeforeGoals0_19, check_hlds__modecheck_util__Context_36, &check_hlds__modecheck_util__BeforeGoals_37);
            }
#line 273 "modecheck_util.m"
            {
#line 273 "modecheck_util.m"
              check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__AfterGoals0_20, check_hlds__modecheck_util__Context_36, &check_hlds__modecheck_util__AfterGoals_38);
            }
#line 274 "modecheck_util.m"
            {
#line 274 "modecheck_util.m"
              check_hlds__modecheck_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_44_44, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal0_35));
#line 274 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_util__AfterGoals_38));
#line 274 "modecheck_util.m"
            }
#line 274 "modecheck_util.m"
            {
#line 274 "modecheck_util.m"
              check_hlds__modecheck_util__GoalList0_39 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_util__BeforeGoals_37, check_hlds__modecheck_util__V_44_44);
            }
#line 276 "modecheck_util.m"
            {
#line 276 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__MayChangeCalledProc0_40);
            }
#line 280 "modecheck_util.m"
            {
#line 280 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 1, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46);
            }
#line 284 "modecheck_util.m"
            {
#line 284 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0((MR_Integer) 1, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48);
            }
#line 287 "modecheck_util.m"
            {
#line 287 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__HeadVar__6_6, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49);
            }
#line 301 "modecheck_util.m"
            {
#line 301 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0((MR_Integer) 0, check_hlds__modecheck_util__GoalList0_39, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51);
            }
#line 302 "modecheck_util.m"
            {
#line 302 "modecheck_util.m"
              check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(check_hlds__modecheck_util__GoalList0_39, &check_hlds__modecheck_util__GoalList_41, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
            }
#line 303 "modecheck_util.m"
            {
#line 303 "modecheck_util.m"
              MR_Word base;
#line 303 "modecheck_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 303 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__7_7 = base;
#line 303 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 303 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 303 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_util__GoalList_41));
#line 303 "modecheck_util.m"
            }
#line 304 "modecheck_util.m"
            {
#line 304 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 0, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55);
            }
#line 305 "modecheck_util.m"
            {
#line 305 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(check_hlds__modecheck_util__MayChangeCalledProc0_40, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);
            }
#line 261 "modecheck_util.m"
          }
#line 239 "modecheck_util.m"
        else
#line 307 "modecheck_util.m"
          {
#line 307 "modecheck_util.m"
            *check_hlds__modecheck_util__HeadVar__7_7 = check_hlds__modecheck_util__MainGoal_1;
#line 307 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 307 "modecheck_util.m"
          }
#line 237 "modecheck_util.m"
      }
#line 234 "modecheck_util.m"
  }
#line 61 "modecheck_util.m"
}

#line 54 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__append_extra_goals_3_p_0(
#line 54 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 54 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 54 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 54 "modecheck_util.m"
{
#line 225 "modecheck_util.m"
  {
#line 225 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 225 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 225 "modecheck_util.m"
      *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__2_2;
#line 225 "modecheck_util.m"
    else
#line 225 "modecheck_util.m"
      {
#line 225 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 225 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 225 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__1_1;
#line 225 "modecheck_util.m"
        else
#line 230 "modecheck_util.m"
          {
#line 230 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 230 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 230 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 230 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals_11;
#line 230 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals_12;

#line 231 "modecheck_util.m"
            {
#line 231 "modecheck_util.m"
              check_hlds__modecheck_util__BeforeGoals_11 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_util__TypeCtorInfo_13_13, check_hlds__modecheck_util__V_15_15, check_hlds__modecheck_util__BeforeGoals1_9);
            }
#line 232 "modecheck_util.m"
            {
#line 232 "modecheck_util.m"
              check_hlds__modecheck_util__AfterGoals_12 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_util__TypeCtorInfo_13_13, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__AfterGoals1_10);
            }
#line 230 "modecheck_util.m"
            {
#line 230 "modecheck_util.m"
              MR_Word base;
#line 230 "modecheck_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 230 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 230 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__BeforeGoals_11));
#line 230 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__AfterGoals_12));
#line 230 "modecheck_util.m"
            }
#line 230 "modecheck_util.m"
          }
#line 225 "modecheck_util.m"
      }
#line 225 "modecheck_util.m"
  }
#line 54 "modecheck_util.m"
}

void mercury__check_hlds__modecheck_util__init(void)
{
}

void mercury__check_hlds__modecheck_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_after_goals_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_extra_goals_0);
	MR_register_type_ctor_info(&check_hlds__modecheck_util__check_hlds__modecheck_util__type_ctor_info_inst_expansions_0);
}

void mercury__check_hlds__modecheck_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.modecheck_util. */
