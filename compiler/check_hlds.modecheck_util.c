/*
** Automatically generated from `modecheck_util.m'
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


/* :- module check_hlds.modecheck_util. */
/* :- implementation. */

/*
INIT mercury__check_hlds__modecheck_util__init
ENDINIT
*/

#include "check_hlds.modecheck_util.mih"


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
#include "check_hlds.inst_match.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_mode.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 150 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0;

#line 153 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0;

#line 156 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 159 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0;

#line 162 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0;

#line 165 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2];

#line 168 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2];

#line 171 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1;

#line 174 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1];

#line 177 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1];

#line 180 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_after_goals_0[2];

#line 183 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0[2];

#line 186 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0[2];

#line 189 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0;

#line 192 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2];

#line 195 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2];

#line 198 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDesc check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1;

#line 201 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1];

#line 204 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1];

#line 207 "check_hlds.modecheck_util.c"
static const MR_DuPtagLayout check_hlds__modecheck_util__check_hlds__modecheck_util__du_ptag_ordered_extra_goals_0[2];

#line 210 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0[2];

#line 213 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0[2];

#line 216 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0;

#line 219 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
#line 222 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 224 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

#line 227 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
#line 230 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 232 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 234 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

#line 237 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
#line 240 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 242 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

#line 245 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
#line 248 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 250 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 252 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

#line 255 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
#line 258 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 260 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2);

#line 263 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
#line 266 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 268 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 270 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3);

#line 1074 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
#line 1074 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 1074 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 1074 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3);

#line 1074 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
#line 1074 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 1074 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2);

#line 1173 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
#line 1173 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__SubInst_5,
#line 1173 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstVar_6,
#line 1173 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9,
#line 1173 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_10);

#line 1170 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1(
#line 1170 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1170 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1170 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1170 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1170 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1170 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 1163 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(
#line 1163 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1163 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PredInstInfo_8,
#line 1163 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15,
#line 1163 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_16,
#line 1163 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17,
#line 1163 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18);

#line 1160 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1(
#line 1160 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1160 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1160 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1160 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1160 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1160 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 1153 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(
#line 1153 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1153 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__BoundInst_8,
#line 1153 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
#line 1153 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
#line 1153 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
#line 1153 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);

#line 1135 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
#line 1135 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1135 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1135 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1135 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3);

#line 1112 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2(
#line 1112 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1112 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1112 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1112 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1112 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1112 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 1117 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1(
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

#line 1089 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
#line 1089 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1089 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_8,
#line 1089 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33,
#line 1089 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_34,
#line 1089 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35,
#line 1089 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);

#line 1080 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(
#line 1080 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1080 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Mode_8,
#line 1080 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
#line 1080 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
#line 1080 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
#line 1080 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);

#line 969 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__build_call_11_p_0(
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__CalleeModuleName_12,
#line 969 "modecheck_util.m"
  MR_String check_hlds__modecheck_util__CalleePredName_13,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgVars_14,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgTypes_15,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NonLocals_16,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMapDelta_17,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_18,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_19,
#line 969 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_20,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51,
#line 969 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52);

#line 776 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_implied_mode_8_p_0(
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_9,
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarInst0_10,
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst0_11,
#line 776 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Var_12,
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36,
#line 776 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37,
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38,
#line 776 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);

#line 635 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 635 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum0_4,
#line 635 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__5_5,
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6,
#line 635 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7,
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 635 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);

#line 599 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(
#line 599 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadInstVars_6,
#line 599 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstVar_7,
#line 599 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Subst_8);

#line 500 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
#line 500 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 500 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 500 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 500 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 500 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 500 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 500 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7);

#line 483 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
#line 483 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 483 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 483 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 483 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 483 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 483 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 483 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7);

#line 369 "modecheck_util.m"
static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
#line 369 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_5,
#line 369 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_6,
#line 369 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_7);

#line 331 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
#line 331 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 331 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 331 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3);

#line 312 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
#line 312 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 312 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 312 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 312 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);

#line 1077 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
#line 1077 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1077 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1077 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1077 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1077 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1077 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5);

#line 361 "modecheck_util.m"
static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
#line 361 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 361 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1);

#line 589 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1(
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
#line 589 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4);

#line 589 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1(
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
#line 589 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4);


static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[5][2];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_2[1][3];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_3[1][8];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_4[2][7];

static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_5[3][9];




static /* final */ const MR_Box check_hlds__modecheck_util_scalar_common_1[5][2] = {
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
    ((MR_Box) (&hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0))
  },
  /* row 4 */
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 777 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 785 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct2 check_hlds__modecheck_util__tree234__pti_tree234_2__plain_term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0__plain_parse_tree__prog_data__type_ctor_info_mer_inst_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &check_hlds__modecheck_util__term__ti_var_1parse_tree__prog_data__type_ctor_info_inst_var_type_0,
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0
  }
};

#line 794 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__term__pti_var_1__plain_parse_tree__prog_data__type_ctor_info_inst_var_type_0 = {
  &mercury__term__term__type_ctor_info_var_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0
  }
};

#line 802 "check_hlds.modecheck_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__pti_set_tree234_1__plain_parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 810 "check_hlds.modecheck_util.c"
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

#line 825 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0
  }
};

#line 833 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_after_goals_0_1[2] = {
  (MR_PseudoTypeInfo) &hlds__instmap__hlds__instmap__type_ctor_info_instmap_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 839 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_after_goals_0_1[2] = {
  (MR_String) "after_instmap",
  (MR_String) "after_goals"
};

#line 845 "check_hlds.modecheck_util.c"
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

#line 860 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

#line 865 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_after_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1
};

#line 870 "check_hlds.modecheck_util.c"
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

#line 884 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_after_goals_0[2] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_1,
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_after_goals_0_0
};

#line 890 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_after_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 896 "check_hlds.modecheck_util.c"
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

#line 913 "check_hlds.modecheck_util.c"
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

#line 928 "check_hlds.modecheck_util.c"
static const MR_PseudoTypeInfo check_hlds__modecheck_util__check_hlds__modecheck_util__field_types_extra_goals_0_1[2] = {
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0,
  (MR_PseudoTypeInfo) &check_hlds__modecheck_util__list__ti_list_1hlds__hlds_goal__type_ctor_info_hlds_goal_0
};

#line 934 "check_hlds.modecheck_util.c"
static const MR_ConstString check_hlds__modecheck_util__check_hlds__modecheck_util__field_names_extra_goals_0_1[2] = {
  (MR_String) "extra_before_main",
  (MR_String) "extra_after_main"
};

#line 940 "check_hlds.modecheck_util.c"
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

#line 955 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_0[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

#line 960 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_stag_ordered_extra_goals_0_1[1] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1
};

#line 965 "check_hlds.modecheck_util.c"
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

#line 979 "check_hlds.modecheck_util.c"
static const MR_DuFunctorDescPtr check_hlds__modecheck_util__check_hlds__modecheck_util__du_name_ordered_extra_goals_0[2] = {
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_1,
  &check_hlds__modecheck_util__check_hlds__modecheck_util__du_functor_desc_extra_goals_0_0
};

#line 985 "check_hlds.modecheck_util.c"
static const MR_Integer check_hlds__modecheck_util__check_hlds__modecheck_util__functor_number_map_extra_goals_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 991 "check_hlds.modecheck_util.c"
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

#line 1008 "check_hlds.modecheck_util.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__modecheck_util__set_tree234__ti_set_tree234_1parse_tree__prog_data__type_ctor_info_inst_name_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0
  }
};

#line 1016 "check_hlds.modecheck_util.c"
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

#line 1033 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0_10001(
#line 1036 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1038 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
#line 1040 "check_hlds.modecheck_util.c"
{
#line 1042 "check_hlds.modecheck_util.c"
  {
#line 1044 "check_hlds.modecheck_util.c"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1047 "check_hlds.modecheck_util.c"
    {
#line 1049 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____after_goals_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 1052 "check_hlds.modecheck_util.c"
    return check_hlds__modecheck_util__succeeded;
#line 1054 "check_hlds.modecheck_util.c"
  }
#line 1056 "check_hlds.modecheck_util.c"
}

#line 1059 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0_10001(
#line 1062 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 1064 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1066 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
#line 1068 "check_hlds.modecheck_util.c"
{
#line 1070 "check_hlds.modecheck_util.c"
  {
#line 1072 "check_hlds.modecheck_util.c"
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

#line 1075 "check_hlds.modecheck_util.c"
    {
#line 1077 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util____Compare____after_goals_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
#line 1080 "check_hlds.modecheck_util.c"
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
#line 1082 "check_hlds.modecheck_util.c"
  }
#line 1084 "check_hlds.modecheck_util.c"
}

#line 1087 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0_10001(
#line 1090 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1092 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
#line 1094 "check_hlds.modecheck_util.c"
{
#line 1096 "check_hlds.modecheck_util.c"
  {
#line 1098 "check_hlds.modecheck_util.c"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1101 "check_hlds.modecheck_util.c"
    {
#line 1103 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____extra_goals_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 1106 "check_hlds.modecheck_util.c"
    return check_hlds__modecheck_util__succeeded;
#line 1108 "check_hlds.modecheck_util.c"
  }
#line 1110 "check_hlds.modecheck_util.c"
}

#line 1113 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0_10001(
#line 1116 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 1118 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1120 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
#line 1122 "check_hlds.modecheck_util.c"
{
#line 1124 "check_hlds.modecheck_util.c"
  {
#line 1126 "check_hlds.modecheck_util.c"
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

#line 1129 "check_hlds.modecheck_util.c"
    {
#line 1131 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util____Compare____extra_goals_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
#line 1134 "check_hlds.modecheck_util.c"
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
#line 1136 "check_hlds.modecheck_util.c"
  }
#line 1138 "check_hlds.modecheck_util.c"
}

#line 1141 "check_hlds.modecheck_util.c"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0_10001(
#line 1144 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1146 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2)
#line 1148 "check_hlds.modecheck_util.c"
{
#line 1150 "check_hlds.modecheck_util.c"
  {
#line 1152 "check_hlds.modecheck_util.c"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1155 "check_hlds.modecheck_util.c"
    {
#line 1157 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util____Unify____inst_expansions_0_0(((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 1160 "check_hlds.modecheck_util.c"
    return check_hlds__modecheck_util__succeeded;
#line 1162 "check_hlds.modecheck_util.c"
  }
#line 1164 "check_hlds.modecheck_util.c"
}

#line 1167 "check_hlds.modecheck_util.c"
static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0_10001(
#line 1170 "check_hlds.modecheck_util.c"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_1,
#line 1172 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1174 "check_hlds.modecheck_util.c"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3)
#line 1176 "check_hlds.modecheck_util.c"
{
#line 1178 "check_hlds.modecheck_util.c"
  {
#line 1180 "check_hlds.modecheck_util.c"
    MR_Word check_hlds__modecheck_util__conv0_HeadVar__1_1;

#line 1183 "check_hlds.modecheck_util.c"
    {
#line 1185 "check_hlds.modecheck_util.c"
      check_hlds__modecheck_util____Compare____inst_expansions_0_0(&check_hlds__modecheck_util__conv0_HeadVar__1_1, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_3));
    }
#line 1188 "check_hlds.modecheck_util.c"
    *check_hlds__modecheck_util__wrapper_arg_1 = ((MR_Box) (check_hlds__modecheck_util__conv0_HeadVar__1_1));
#line 1190 "check_hlds.modecheck_util.c"
  }
#line 1192 "check_hlds.modecheck_util.c"
}

#line 171 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(
#line 171 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModeContext_5,
#line 171 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__UnifyContext_6)
#line 171 "modecheck_util.m"
{
#line 1046 "modecheck_util.m"
  {
#line 1046 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1046 "modecheck_util.m"
#line 1046 "modecheck_util.m"
    switch (MR_tag((MR_Word) check_hlds__modecheck_util__ModeContext_5)) {
#line 1046 "modecheck_util.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1046 "modecheck_util.m"
      case (MR_Integer) 0:
#line 1051 "modecheck_util.m"
        {
#line 1052 "modecheck_util.m"
          {
#line 1052 "modecheck_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.mode_context_to_unify_context\'/3", (MR_String) "uninitialized context");
#line 1052 "modecheck_util.m"
            return;
          }
#line 1051 "modecheck_util.m"
        }
#line 1046 "modecheck_util.m"
        break;
#line 1046 "modecheck_util.m"
      case (MR_Integer) 1:
#line 1048 "modecheck_util.m"
        {
#line 1048 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__CallId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 0)));
#line 1048 "modecheck_util.m"
          MR_Integer check_hlds__modecheck_util__Arg_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 1)));
#line 1048 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_13_13;

#line 1049 "modecheck_util.m"
          {
#line 1049 "modecheck_util.m"
            check_hlds__modecheck_util__V_13_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "modecheck_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__V_13_13, 0) = ((MR_Box) (check_hlds__modecheck_util__CallId_8));
#line 1049 "modecheck_util.m"
            MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__V_13_13, 1) = ((MR_Box) (check_hlds__modecheck_util__Arg_9));
#line 1049 "modecheck_util.m"
          }
#line 1049 "modecheck_util.m"
          {
#line 1049 "modecheck_util.m"
            MR_Word base;
#line 1049 "modecheck_util.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1049 "modecheck_util.m"
            *check_hlds__modecheck_util__UnifyContext_6 = base;
#line 1049 "modecheck_util.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (check_hlds__modecheck_util__V_13_13));
#line 1049 "modecheck_util.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1049 "modecheck_util.m"
          }
#line 1048 "modecheck_util.m"
        }
#line 1046 "modecheck_util.m"
        break;
#line 1046 "modecheck_util.m"
      case (MR_Integer) 2:
#line 1046 "modecheck_util.m"
        {
#line 1046 "modecheck_util.m"
          MR_Word check_hlds__modecheck_util__V_7_7;

#line 1046 "modecheck_util.m"
          *check_hlds__modecheck_util__UnifyContext_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 0)));
#line 1046 "modecheck_util.m"
          check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__ModeContext_5, (MR_Integer) 1)));
#line 1046 "modecheck_util.m"
        }
#line 1046 "modecheck_util.m"
        break;
#line 1046 "modecheck_util.m"
    }
#line 1046 "modecheck_util.m"
  }
#line 171 "modecheck_util.m"
}

#line 1074 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util____Compare____inst_expansions_0_0(
#line 1074 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 1074 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 1074 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
#line 1074 "modecheck_util.m"
{
#line 1074 "modecheck_util.m"
  {
#line 1074 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1074 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Cast_HeadVar1_4 = check_hlds__modecheck_util__HeadVar__2_2;
#line 1074 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Cast_HeadVar2_5 = check_hlds__modecheck_util__HeadVar__3_3;

#line 1074 "modecheck_util.m"
    {
#line 1074 "modecheck_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar2_5)));
#line 1074 "modecheck_util.m"
      return;
    }
#line 1074 "modecheck_util.m"
  }
#line 1074 "modecheck_util.m"
}

#line 1074 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____inst_expansions_0_0(
#line 1074 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 1074 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
#line 1074 "modecheck_util.m"
{
#line 1074 "modecheck_util.m"
  {
#line 1074 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1074 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Cast_HeadVar1_3 = check_hlds__modecheck_util__HeadVar__1_1;
#line 1074 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Cast_HeadVar2_4 = check_hlds__modecheck_util__HeadVar__2_2;

#line 1074 "modecheck_util.m"
    {
#line 1074 "modecheck_util.m"
      return check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__modecheck_util__Cast_HeadVar2_4)));
    }
#line 1074 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 1074 "modecheck_util.m"
  }
#line 1074 "modecheck_util.m"
}

#line 30 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util____Compare____extra_goals_0_0(
#line 30 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 30 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 30 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
#line 30 "modecheck_util.m"
{
#line 30 "modecheck_util.m"
  {
#line 30 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 30 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_13 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;
#line 30 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_14 = (MR_Integer) check_hlds__modecheck_util__HeadVar__3_3;

#line 30 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_13 == check_hlds__modecheck_util__CastY_14);
#line 30 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1376 "check_hlds.modecheck_util.c"
      *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "modecheck_util.m"
    else
#line 30 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 30 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 30 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 30 "modecheck_util.m"
      else
#line 1388 "check_hlds.modecheck_util.c"
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 1;
#line 30 "modecheck_util.m"
    else
#line 30 "modecheck_util.m"
      {
#line 30 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 30 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));

#line 30 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1401 "check_hlds.modecheck_util.c"
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 2;
#line 30 "modecheck_util.m"
        else
#line 30 "modecheck_util.m"
          {
#line 30 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 30 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 30 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_12_12;

#line 30 "modecheck_util.m"
            {
#line 30 "modecheck_util.m"
              mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[2], &check_hlds__modecheck_util__V_12_12, ((MR_Box) (check_hlds__modecheck_util__V_18_18)), ((MR_Box) (check_hlds__modecheck_util__V_10_10)));
            }
#line 1419 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_12_12 == (MR_Integer) 0);
#line 30 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 30 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 30 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__V_12_12;
#line 30 "modecheck_util.m"
            else
#line 30 "modecheck_util.m"
              {
#line 30 "modecheck_util.m"
                {
#line 30 "modecheck_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[2], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__V_17_17)), ((MR_Box) (check_hlds__modecheck_util__V_11_11)));
#line 30 "modecheck_util.m"
                  return;
                }
#line 30 "modecheck_util.m"
              }
#line 30 "modecheck_util.m"
          }
#line 30 "modecheck_util.m"
      }
#line 30 "modecheck_util.m"
  }
#line 30 "modecheck_util.m"
}

#line 30 "modecheck_util.m"
MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____extra_goals_0_0(
#line 30 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 30 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
#line 30 "modecheck_util.m"
{
#line 30 "modecheck_util.m"
  {
#line 30 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 30 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_9 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 30 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_10 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 30 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_9 == check_hlds__modecheck_util__CastY_10);
#line 30 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 30 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 30 "modecheck_util.m"
    else
#line 30 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 30 "modecheck_util.m"
      {
#line 30 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__CastX_3 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 30 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__CastY_4 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 30 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastY_4 == check_hlds__modecheck_util__CastX_3);
#line 30 "modecheck_util.m"
      }
#line 30 "modecheck_util.m"
    else
#line 30 "modecheck_util.m"
      {
#line 30 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__TypeInfo_11_11;
#line 30 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__TypeInfo_12_12;
#line 30 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 30 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 30 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_7_7;
#line 30 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_8_8;

#line 30 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 30 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 30 "modecheck_util.m"
          {
#line 30 "modecheck_util.m"
            check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 30 "modecheck_util.m"
            check_hlds__modecheck_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1515 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__TypeInfo_11_11 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[2];
#line 1517 "check_hlds.modecheck_util.c"
            {
#line 1519 "check_hlds.modecheck_util.c"
              check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_11_11, ((MR_Box) (check_hlds__modecheck_util__V_5_5)), ((MR_Box) (check_hlds__modecheck_util__V_7_7)));
            }
#line 30 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 30 "modecheck_util.m"
              {
#line 1526 "check_hlds.modecheck_util.c"
                check_hlds__modecheck_util__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[2];
#line 1528 "check_hlds.modecheck_util.c"
                {
#line 1530 "check_hlds.modecheck_util.c"
                  return check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_util__V_6_6)), ((MR_Box) (check_hlds__modecheck_util__V_8_8)));
                }
#line 30 "modecheck_util.m"
              }
#line 30 "modecheck_util.m"
          }
#line 30 "modecheck_util.m"
      }
#line 30 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 30 "modecheck_util.m"
  }
#line 30 "modecheck_util.m"
}

#line 40 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util____Compare____after_goals_0_0(
#line 40 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__1_1,
#line 40 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 40 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3)
#line 40 "modecheck_util.m"
{
#line 40 "modecheck_util.m"
  {
#line 40 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 40 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_13 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;
#line 40 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_14 = (MR_Integer) check_hlds__modecheck_util__HeadVar__3_3;

#line 40 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_13 == check_hlds__modecheck_util__CastY_14);
#line 40 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1570 "check_hlds.modecheck_util.c"
      *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "modecheck_util.m"
    else
#line 40 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "modecheck_util.m"
      else
#line 1582 "check_hlds.modecheck_util.c"
        *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 1;
#line 40 "modecheck_util.m"
    else
#line 40 "modecheck_util.m"
      {
#line 40 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 40 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));

#line 40 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1595 "check_hlds.modecheck_util.c"
          *check_hlds__modecheck_util__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "modecheck_util.m"
        else
#line 40 "modecheck_util.m"
          {
#line 40 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 40 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 40 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_12_12;

#line 40 "modecheck_util.m"
            {
#line 40 "modecheck_util.m"
              hlds__instmap____Compare____instmap_0_0(&check_hlds__modecheck_util__V_12_12, check_hlds__modecheck_util__V_18_18, check_hlds__modecheck_util__V_10_10);
            }
#line 1613 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_12_12 == (MR_Integer) 0);
#line 40 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 40 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 40 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__V_12_12;
#line 40 "modecheck_util.m"
            else
#line 40 "modecheck_util.m"
              {
#line 40 "modecheck_util.m"
                {
#line 40 "modecheck_util.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[2], check_hlds__modecheck_util__HeadVar__1_1, ((MR_Box) (check_hlds__modecheck_util__V_17_17)), ((MR_Box) (check_hlds__modecheck_util__V_11_11)));
#line 40 "modecheck_util.m"
                  return;
                }
#line 40 "modecheck_util.m"
              }
#line 40 "modecheck_util.m"
          }
#line 40 "modecheck_util.m"
      }
#line 40 "modecheck_util.m"
  }
#line 40 "modecheck_util.m"
}

#line 40 "modecheck_util.m"
MR_bool MR_CALL 
check_hlds__modecheck_util____Unify____after_goals_0_0(
#line 40 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 40 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2)
#line 40 "modecheck_util.m"
{
#line 40 "modecheck_util.m"
  {
#line 40 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 40 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastX_9 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 40 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CastY_10 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 40 "modecheck_util.m"
    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastX_9 == check_hlds__modecheck_util__CastY_10);
#line 40 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 40 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 40 "modecheck_util.m"
    else
#line 40 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 40 "modecheck_util.m"
      {
#line 40 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__CastX_3 = (MR_Integer) check_hlds__modecheck_util__HeadVar__1_1;
#line 40 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__CastY_4 = (MR_Integer) check_hlds__modecheck_util__HeadVar__2_2;

#line 40 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__CastY_4 == check_hlds__modecheck_util__CastX_3);
#line 40 "modecheck_util.m"
      }
#line 40 "modecheck_util.m"
    else
#line 40 "modecheck_util.m"
      {
#line 40 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__TypeInfo_12_12;
#line 40 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 40 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 40 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_7_7;
#line 40 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_8_8;

#line 40 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 40 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 40 "modecheck_util.m"
          {
#line 40 "modecheck_util.m"
            check_hlds__modecheck_util__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 40 "modecheck_util.m"
            check_hlds__modecheck_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1707 "check_hlds.modecheck_util.c"
            {
#line 1709 "check_hlds.modecheck_util.c"
              check_hlds__modecheck_util__succeeded = hlds__instmap____Unify____instmap_0_0(check_hlds__modecheck_util__V_5_5, check_hlds__modecheck_util__V_7_7);
            }
#line 40 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 40 "modecheck_util.m"
              {
#line 1716 "check_hlds.modecheck_util.c"
                check_hlds__modecheck_util__TypeInfo_12_12 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[2];
#line 1718 "check_hlds.modecheck_util.c"
                {
#line 1720 "check_hlds.modecheck_util.c"
                  return check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_12_12, ((MR_Box) (check_hlds__modecheck_util__V_6_6)), ((MR_Box) (check_hlds__modecheck_util__V_8_8)));
                }
#line 40 "modecheck_util.m"
              }
#line 40 "modecheck_util.m"
          }
#line 40 "modecheck_util.m"
      }
#line 40 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 40 "modecheck_util.m"
  }
#line 40 "modecheck_util.m"
}

#line 1173 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__add_constrained_inst_4_p_0(
#line 1173 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__SubInst_5,
#line 1173 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstVar_6,
#line 1173 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9,
#line 1173 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_10)
#line 1173 "modecheck_util.m"
{
#line 1183 "modecheck_util.m"
  {
#line 1183 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1183 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__SubInst0_8;
#line 1177 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv0_SubInst0_8;

#line 1177 "modecheck_util.m"
    {
#line 1177 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9, ((MR_Box) (check_hlds__modecheck_util__InstVar_6)), &check_hlds__modecheck_util__conv0_SubInst0_8);
    }
#line 1177 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1177 "modecheck_util.m"
      {
#line 1177 "modecheck_util.m"
        check_hlds__modecheck_util__SubInst0_8 = ((MR_Word) check_hlds__modecheck_util__conv0_SubInst0_8);
#line 1177 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 1177 "modecheck_util.m"
      }
#line 1183 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 1180 "modecheck_util.m"
      {
#line 1178 "modecheck_util.m"
        {
#line 1178 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__SubInst0_8, check_hlds__modecheck_util__SubInst_5);
        }
#line 1180 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 1179 "modecheck_util.m"
          {
#line 1179 "modecheck_util.m"
          }
#line 1180 "modecheck_util.m"
        else
#line 1181 "modecheck_util.m"
          {
#line 1181 "modecheck_util.m"
            {
#line 1181 "modecheck_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.add_constrained_inst\'/4", (MR_String) "SubInst differs");
#line 1181 "modecheck_util.m"
              return;
            }
#line 1181 "modecheck_util.m"
          }
#line 1180 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_Map_10 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9;
#line 1180 "modecheck_util.m"
      }
#line 1183 "modecheck_util.m"
    else
#line 1184 "modecheck_util.m"
      {
#line 1184 "modecheck_util.m"
        {
#line 1184 "modecheck_util.m"
          mercury__map__det_insert_4_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, ((MR_Box) (check_hlds__modecheck_util__InstVar_6)), ((MR_Box) (check_hlds__modecheck_util__SubInst_5)), check_hlds__modecheck_util__STATE_VARIABLE_Map_0_9, check_hlds__modecheck_util__STATE_VARIABLE_Map_10);
#line 1184 "modecheck_util.m"
          return;
        }
#line 1184 "modecheck_util.m"
      }
#line 1183 "modecheck_util.m"
  }
#line 1173 "modecheck_util.m"
}

#line 1170 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1(
#line 1170 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1170 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1170 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1170 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1170 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1170 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1170 "modecheck_util.m"
{
#line 1170 "modecheck_util.m"
  {
#line 1170 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1170 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
#line 1170 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

#line 1170 "modecheck_util.m"
    {
#line 1170 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
#line 1170 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
#line 1170 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
#line 1170 "modecheck_util.m"
  }
#line 1170 "modecheck_util.m"
}

#line 1163 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(
#line 1163 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1163 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PredInstInfo_8,
#line 1163 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15,
#line 1163 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_16,
#line 1163 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17,
#line 1163 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18)
#line 1163 "modecheck_util.m"
{
#line 1168 "modecheck_util.m"
  {
#line 1168 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1168 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Modes_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 1)));
#line 1168 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_19_19;
#line 1169 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 0)));
#line 1169 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 2)));
#line 1169 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__PredInstInfo_8, (MR_Integer) 3)));
#line 1170 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16;
#line 1170 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18;

#line 1170 "modecheck_util.m"
    {
#line 1170 "modecheck_util.m"
      check_hlds__modecheck_util__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1170 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
#line 1170 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0_1));
#line 1170 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1170 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_19_19, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
#line 1170 "modecheck_util.m"
    }
#line 1170 "modecheck_util.m"
    {
#line 1170 "modecheck_util.m"
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_19_19, check_hlds__modecheck_util__Modes_12, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_15)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_17)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18);
    }
#line 1170 "modecheck_util.m"
    *check_hlds__modecheck_util__STATE_VARIABLE_Map_16 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_16);
#line 1170 "modecheck_util.m"
    *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_18);
#line 1168 "modecheck_util.m"
  }
#line 1163 "modecheck_util.m"
}

#line 1160 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1(
#line 1160 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1160 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1160 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1160 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1160 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1160 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1160 "modecheck_util.m"
{
#line 1160 "modecheck_util.m"
  {
#line 1160 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1160 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34;
#line 1160 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36;

#line 1160 "modecheck_util.m"
    {
#line 1160 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36);
    }
#line 1160 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_34));
#line 1160 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_36));
#line 1160 "modecheck_util.m"
  }
#line 1160 "modecheck_util.m"
}

#line 1153 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(
#line 1153 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1153 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__BoundInst_8,
#line 1153 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
#line 1153 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
#line 1153 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
#line 1153 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16)
#line 1153 "modecheck_util.m"
{
#line 1158 "modecheck_util.m"
  {
#line 1158 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1158 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Insts_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, (MR_Integer) 1)));
#line 1158 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_17_17;
#line 1159 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___ConsId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, (MR_Integer) 0)));
#line 1160 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14;
#line 1160 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16;

#line 1160 "modecheck_util.m"
    {
#line 1160 "modecheck_util.m"
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1160 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[2]));
#line 1160 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0_1));
#line 1160 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1160 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
#line 1160 "modecheck_util.m"
    }
#line 1160 "modecheck_util.m"
    {
#line 1160 "modecheck_util.m"
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_17_17, check_hlds__modecheck_util__Insts_12, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16);
    }
#line 1160 "modecheck_util.m"
    *check_hlds__modecheck_util__STATE_VARIABLE_Map_14 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_14);
#line 1160 "modecheck_util.m"
    *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_16);
#line 1158 "modecheck_util.m"
  }
#line 1153 "modecheck_util.m"
}

#line 1135 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3(
#line 1135 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1135 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1135 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1135 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3)
#line 1135 "modecheck_util.m"
{
#line 1135 "modecheck_util.m"
  {
#line 1135 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1135 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10;

#line 1135 "modecheck_util.m"
    {
#line 1135 "modecheck_util.m"
      check_hlds__modecheck_util__add_constrained_inst_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10);
    }
#line 1135 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv8_STATE_VARIABLE_Map_10));
#line 1135 "modecheck_util.m"
  }
#line 1135 "modecheck_util.m"
}

#line 1112 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2(
#line 1112 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1112 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1112 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1112 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1112 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1112 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1112 "modecheck_util.m"
{
#line 1112 "modecheck_util.m"
  {
#line 1112 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1112 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14;
#line 1112 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16;

#line 1112 "modecheck_util.m"
    {
#line 1112 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16);
    }
#line 1112 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv5_STATE_VARIABLE_Map_14));
#line 1112 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv4_STATE_VARIABLE_Expansions_16));
#line 1112 "modecheck_util.m"
  }
#line 1112 "modecheck_util.m"
}

#line 1117 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1(
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
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
#line 1117 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

#line 1117 "modecheck_util.m"
    {
#line 1117 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_bound_inst_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
#line 1117 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
#line 1117 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
#line 1117 "modecheck_util.m"
  }
#line 1117 "modecheck_util.m"
}

#line 1089 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(
#line 1089 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1089 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_8,
#line 1089 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33,
#line 1089 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_34,
#line 1089 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35,
#line 1089 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36)
#line 1089 "modecheck_util.m"
{
#line 1095 "modecheck_util.m"
  while (MR_TRUE)
#line 1095 "modecheck_util.m"
    {
#line 1095 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 1095 "modecheck_util.m"
      {
#line 1095 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 1095 "modecheck_util.m"
#line 1095 "modecheck_util.m"
        switch (MR_tag((MR_Word) check_hlds__modecheck_util__Inst_8)) {
#line 1095 "modecheck_util.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1095 "modecheck_util.m"
          case (MR_Integer) 0:
#line 1095 "modecheck_util.m"
#line 1095 "modecheck_util.m"
            switch (MR_unmkbody(check_hlds__modecheck_util__Inst_8)) {
#line 1095 "modecheck_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1095 "modecheck_util.m"
              case (MR_Integer) 0:
#line 1095 "modecheck_util.m"
                {
#line 1095 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1095 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1095 "modecheck_util.m"
                }
#line 1095 "modecheck_util.m"
                break;
#line 1095 "modecheck_util.m"
              case (MR_Integer) 1:
#line 1097 "modecheck_util.m"
                {
#line 1097 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1097 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1097 "modecheck_util.m"
                }
#line 1095 "modecheck_util.m"
                break;
#line 1095 "modecheck_util.m"
            }
#line 1095 "modecheck_util.m"
            break;
#line 1095 "modecheck_util.m"
          case (MR_Integer) 1:
#line 1096 "modecheck_util.m"
            {
#line 1096 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1096 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1096 "modecheck_util.m"
            }
#line 1095 "modecheck_util.m"
            break;
#line 1095 "modecheck_util.m"
          case (MR_Integer) 2:
#line 1123 "modecheck_util.m"
            {
#line 1123 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__HOInstInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
#line 1121 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__Inst_8, (MR_Integer) 0)));

#line 1126 "modecheck_util.m"
              if ((check_hlds__modecheck_util__HOInstInfo_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "modecheck_util.m"
                {
#line 1125 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1125 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1125 "modecheck_util.m"
                }
#line 1126 "modecheck_util.m"
              else
#line 1127 "modecheck_util.m"
                {
#line 1127 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__PredInstInfo_25 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_util__HOInstInfo_23), (MR_Integer) 1);

#line 1128 "modecheck_util.m"
                  {
#line 1128 "modecheck_util.m"
                    check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__PredInstInfo_25, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33, check_hlds__modecheck_util__STATE_VARIABLE_Map_34, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);
#line 1128 "modecheck_util.m"
                    return;
                  }
#line 1127 "modecheck_util.m"
                }
#line 1123 "modecheck_util.m"
            }
#line 1095 "modecheck_util.m"
            break;
#line 1095 "modecheck_util.m"
          case (MR_Integer) 3:
#line 1095 "modecheck_util.m"
#line 1095 "modecheck_util.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 0)))) {
#line 1095 "modecheck_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1095 "modecheck_util.m"
              case (MR_Integer) 0:
#line 1100 "modecheck_util.m"
                {
#line 1100 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__InstResults_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
#line 1100 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__BoundInsts_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 3)));
#line 1100 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));

#line 1103 "modecheck_util.m"
#line 1103 "modecheck_util.m"
                  switch (MR_tag((MR_Word) check_hlds__modecheck_util__InstResults_13)) {
#line 1103 "modecheck_util.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "modecheck_util.m"
                    case (MR_Integer) 0:
#line 1103 "modecheck_util.m"
#line 1103 "modecheck_util.m"
                      switch (MR_unmkbody(check_hlds__modecheck_util__InstResults_13)) {
#line 1103 "modecheck_util.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "modecheck_util.m"
                        case (MR_Integer) 0:
#line 1116 "modecheck_util.m"
                          {
#line 1116 "modecheck_util.m"
                            MR_Word check_hlds__modecheck_util__V_50_50;
#line 1117 "modecheck_util.m"
                            MR_Box check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34;
#line 1117 "modecheck_util.m"
                            MR_Box check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36;

#line 1117 "modecheck_util.m"
                            {
#line 1117 "modecheck_util.m"
                              check_hlds__modecheck_util__V_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1117 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
#line 1117 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_1));
#line 1117 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1117 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_50_50, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
#line 1117 "modecheck_util.m"
                            }
#line 1117 "modecheck_util.m"
                            {
#line 1117 "modecheck_util.m"
                              mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_50_50, check_hlds__modecheck_util__BoundInsts_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35)), &check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36);
                            }
#line 1117 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv3_STATE_VARIABLE_Map_34);
#line 1117 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = ((MR_Word) check_hlds__modecheck_util__conv2_STATE_VARIABLE_Expansions_36);
#line 1116 "modecheck_util.m"
                          }
#line 1103 "modecheck_util.m"
                          break;
#line 1103 "modecheck_util.m"
                        case (MR_Integer) 1:
#line 1102 "modecheck_util.m"
                          {
#line 1102 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1102 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1102 "modecheck_util.m"
                          }
#line 1103 "modecheck_util.m"
                          break;
#line 1103 "modecheck_util.m"
                      }
#line 1103 "modecheck_util.m"
                      break;
#line 1103 "modecheck_util.m"
                    case (MR_Integer) 1:
#line 1104 "modecheck_util.m"
                      {
#line 1104 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__InstVarsResult_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 3)));
#line 1104 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 0)));
#line 1104 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 1)));
#line 1104 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 2)));
#line 1104 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 4)));
#line 1104 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstResults_13, (MR_Integer) 5)));
#line 1107 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__TypeInfo_57_57;
#line 1107 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__InstVars_21;

#line 1106 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__InstVarsResult_18)) == (MR_mktag((MR_Integer) 1)));
#line 1106 "modecheck_util.m"
                        if (check_hlds__modecheck_util__succeeded)
#line 1106 "modecheck_util.m"
                          {
#line 1106 "modecheck_util.m"
                            check_hlds__modecheck_util__InstVars_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstVarsResult_18, (MR_Integer) 0)));
#line 2371 "check_hlds.modecheck_util.c"
                            check_hlds__modecheck_util__TypeInfo_57_57 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[0];
#line 1108 "modecheck_util.m"
                            {
#line 1108 "modecheck_util.m"
                              check_hlds__modecheck_util__succeeded = mercury__set__is_empty_1_p_0(check_hlds__modecheck_util__TypeInfo_57_57, check_hlds__modecheck_util__InstVars_21);
                            }
#line 1106 "modecheck_util.m"
                          }
#line 1111 "modecheck_util.m"
                        if (check_hlds__modecheck_util__succeeded)
#line 1110 "modecheck_util.m"
                          {
#line 1110 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1110 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1110 "modecheck_util.m"
                          }
#line 1111 "modecheck_util.m"
                        else
#line 1112 "modecheck_util.m"
                          {
#line 1112 "modecheck_util.m"
                            MR_Word check_hlds__modecheck_util__V_53_53;
#line 1112 "modecheck_util.m"
                            MR_Box check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34;
#line 1112 "modecheck_util.m"
                            MR_Box check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36;

#line 1112 "modecheck_util.m"
                            {
#line 1112 "modecheck_util.m"
                              check_hlds__modecheck_util__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1112 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[1]));
#line 1112 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_2));
#line 1112 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1112 "modecheck_util.m"
                              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_53_53, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_7));
#line 1112 "modecheck_util.m"
                            }
#line 1112 "modecheck_util.m"
                            {
#line 1112 "modecheck_util.m"
                              mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_53_53, check_hlds__modecheck_util__BoundInsts_14, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35)), &check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36);
                            }
#line 1112 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv7_STATE_VARIABLE_Map_34);
#line 1112 "modecheck_util.m"
                            *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = ((MR_Word) check_hlds__modecheck_util__conv6_STATE_VARIABLE_Expansions_36);
#line 1112 "modecheck_util.m"
                          }
#line 1104 "modecheck_util.m"
                      }
#line 1103 "modecheck_util.m"
                      break;
#line 1103 "modecheck_util.m"
                  }
#line 1100 "modecheck_util.m"
                }
#line 1095 "modecheck_util.m"
                break;
#line 1095 "modecheck_util.m"
              case (MR_Integer) 1:
#line 1123 "modecheck_util.m"
                {
#line 1123 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HOInstInfo_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
#line 1122 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));

#line 1126 "modecheck_util.m"
                  if ((check_hlds__modecheck_util__HOInstInfo_82 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1125 "modecheck_util.m"
                    {
#line 1125 "modecheck_util.m"
                      *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1125 "modecheck_util.m"
                      *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1125 "modecheck_util.m"
                    }
#line 1126 "modecheck_util.m"
                  else
#line 1127 "modecheck_util.m"
                    {
#line 1127 "modecheck_util.m"
                      MR_Word check_hlds__modecheck_util__PredInstInfo_80 = (MR_Word) MR_body(((MR_Word) check_hlds__modecheck_util__HOInstInfo_82), (MR_Integer) 1);

#line 1128 "modecheck_util.m"
                      {
#line 1128 "modecheck_util.m"
                        check_hlds__modecheck_util__get_constrained_insts_in_ho_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__PredInstInfo_80, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33, check_hlds__modecheck_util__STATE_VARIABLE_Map_34, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36);
#line 1128 "modecheck_util.m"
                        return;
                      }
#line 1127 "modecheck_util.m"
                    }
#line 1123 "modecheck_util.m"
                }
#line 1095 "modecheck_util.m"
                break;
#line 1095 "modecheck_util.m"
              case (MR_Integer) 2:
#line 1146 "modecheck_util.m"
                {
#line 1147 "modecheck_util.m"
                  {
#line 1147 "modecheck_util.m"
                    mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "inst_var");
#line 1147 "modecheck_util.m"
                    return;
                  }
#line 1146 "modecheck_util.m"
                }
#line 1095 "modecheck_util.m"
                break;
#line 1095 "modecheck_util.m"
              case (MR_Integer) 3:
#line 1132 "modecheck_util.m"
                {
#line 1132 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__SubInst_27;
#line 1132 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__V_46_46;
#line 1132 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__InstVars_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
#line 1132 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 2)));
#line 1135 "modecheck_util.m"
                  MR_Box check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34;

#line 1133 "modecheck_util.m"
                  {
#line 1133 "modecheck_util.m"
                    check_hlds__inst_match__inst_expand_and_remove_constrained_inst_vars_3_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__Inst_8, &check_hlds__modecheck_util__SubInst_27);
                  }
#line 1135 "modecheck_util.m"
                  {
#line 1135 "modecheck_util.m"
                    check_hlds__modecheck_util__V_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1135 "modecheck_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[1]));
#line 1135 "modecheck_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0_3));
#line 1135 "modecheck_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1135 "modecheck_util.m"
                    MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_46_46, 3) = ((MR_Box) (check_hlds__modecheck_util__SubInst_27));
#line 1135 "modecheck_util.m"
                  }
#line 1135 "modecheck_util.m"
                  {
#line 1135 "modecheck_util.m"
                    mercury__set__fold_4_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], check_hlds__modecheck_util__V_46_46, check_hlds__modecheck_util__InstVars_56, ((MR_Box) (check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33)), &check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34);
                  }
#line 1135 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = ((MR_Word) check_hlds__modecheck_util__conv9_STATE_VARIABLE_Map_34);
#line 1132 "modecheck_util.m"
                  *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1132 "modecheck_util.m"
                }
#line 1095 "modecheck_util.m"
                break;
#line 1095 "modecheck_util.m"
              case (MR_Integer) 4:
#line 1137 "modecheck_util.m"
                {
#line 1137 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__InstName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_8, (MR_Integer) 1)));
#line 1142 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43;

#line 1138 "modecheck_util.m"
                  {
#line 1138 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = mercury__set_tree234__insert_new_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0, ((MR_Box) (check_hlds__modecheck_util__InstName_28)), check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35, &check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43);
                  }
#line 1142 "modecheck_util.m"
                  if (check_hlds__modecheck_util__succeeded)
#line 1139 "modecheck_util.m"
                    {
#line 1139 "modecheck_util.m"
                      MR_Word check_hlds__modecheck_util__ExpandedInst_29;

#line 1139 "modecheck_util.m"
                      {
#line 1139 "modecheck_util.m"
                        check_hlds__mode_util__inst_lookup_3_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__InstName_28, &check_hlds__modecheck_util__ExpandedInst_29);
                      }
#line 1140 "modecheck_util.m"
                      /* direct tailcall eliminated */
#line 1140 "modecheck_util.m"
                      {
#line 1140 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__Inst__tmp_copy_8 = check_hlds__modecheck_util__ExpandedInst_29;
#line 1140 "modecheck_util.m"
                        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0__tmp_copy_35 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_43_43;

#line 1140 "modecheck_util.m"
                        check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0__tmp_copy_35;
#line 1140 "modecheck_util.m"
                        check_hlds__modecheck_util__Inst_8 = check_hlds__modecheck_util__Inst__tmp_copy_8;
#line 1140 "modecheck_util.m"
                      }
#line 1140 "modecheck_util.m"
                      continue;
#line 1139 "modecheck_util.m"
                    }
#line 1142 "modecheck_util.m"
                  else
#line 1143 "modecheck_util.m"
                    {
#line 1143 "modecheck_util.m"
                      *check_hlds__modecheck_util__STATE_VARIABLE_Expansions_36 = check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_35;
#line 1143 "modecheck_util.m"
                      *check_hlds__modecheck_util__STATE_VARIABLE_Map_34 = check_hlds__modecheck_util__STATE_VARIABLE_Map_0_33;
#line 1143 "modecheck_util.m"
                    }
#line 1137 "modecheck_util.m"
                }
#line 1095 "modecheck_util.m"
                break;
#line 1095 "modecheck_util.m"
              case (MR_Integer) 5:
#line 1149 "modecheck_util.m"
                {
#line 1150 "modecheck_util.m"
                  {
#line 1150 "modecheck_util.m"
                    mercury__require__sorry_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_constrained_insts_in_inst\'/6", (MR_String) "abstract_inst");
#line 1150 "modecheck_util.m"
                    return;
                  }
#line 1149 "modecheck_util.m"
                }
#line 1095 "modecheck_util.m"
                break;
#line 1095 "modecheck_util.m"
            }
#line 1095 "modecheck_util.m"
            break;
#line 1095 "modecheck_util.m"
        }
#line 1095 "modecheck_util.m"
      }
#line 1095 "modecheck_util.m"
      break;
#line 1095 "modecheck_util.m"
    }
#line 1089 "modecheck_util.m"
}

#line 1080 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(
#line 1080 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_7,
#line 1080 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Mode_8,
#line 1080 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13,
#line 1080 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Map_14,
#line 1080 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15,
#line 1080 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16)
#line 1080 "modecheck_util.m"
{
#line 1084 "modecheck_util.m"
  {
#line 1084 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1084 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InitialInst_11;
#line 1084 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__FinalInst_12;
#line 1084 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17;
#line 1084 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18;

#line 1085 "modecheck_util.m"
    {
#line 1085 "modecheck_util.m"
      check_hlds__mode_util__mode_get_insts_4_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__Mode_8, &check_hlds__modecheck_util__InitialInst_11, &check_hlds__modecheck_util__FinalInst_12);
    }
#line 1086 "modecheck_util.m"
    {
#line 1086 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__InitialInst_11, check_hlds__modecheck_util__STATE_VARIABLE_Map_0_13, &check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_0_15, &check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18);
    }
#line 1087 "modecheck_util.m"
    {
#line 1087 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_inst_6_p_0(check_hlds__modecheck_util__ModuleInfo_7, check_hlds__modecheck_util__FinalInst_12, check_hlds__modecheck_util__STATE_VARIABLE_Map_17_17, check_hlds__modecheck_util__STATE_VARIABLE_Map_14, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_18_18, check_hlds__modecheck_util__STATE_VARIABLE_Expansions_16);
#line 1087 "modecheck_util.m"
      return;
    }
#line 1084 "modecheck_util.m"
  }
#line 1080 "modecheck_util.m"
}

#line 969 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__build_call_11_p_0(
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__CalleeModuleName_12,
#line 969 "modecheck_util.m"
  MR_String check_hlds__modecheck_util__CalleePredName_13,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgVars_14,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ArgTypes_15,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NonLocals_16,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMapDelta_17,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_18,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_19,
#line 969 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_20,
#line 969 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51,
#line 969 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52)
#line 969 "modecheck_util.m"
{
#line 975 "modecheck_util.m"
  {
#line 975 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_22;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredId_23;
#line 975 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ProcId_24;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredInfo0_25;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo0_26;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TVarSet_27;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ExistQTVars_28;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__HeadTypeParams_29;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__SymName_30;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleePredId_31;
#line 975 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CalleeProcId_32;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleePredInfo_33;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__CalleeProcInfo_34;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarSet0_35;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes0_36;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo1_37;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo2_38;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PolyInfo0_39;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo0_40;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo1_41;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo2_42;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo_43;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PolyInfo_44;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PredInfo_45;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ProcInfo_46;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo1_47;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_48;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarSet_49;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_50;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_55_55;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_56_56;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_57_57;
#line 975 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_59_59;
#line 975 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__V_60_60;

#line 976 "modecheck_util.m"
    {
#line 976 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__ModuleInfo0_22);
    }
#line 980 "modecheck_util.m"
    {
#line 980 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_pred_id_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__PredId_23);
    }
#line 981 "modecheck_util.m"
    {
#line 981 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_proc_id_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__ProcId_24);
    }
#line 982 "modecheck_util.m"
    {
#line 982 "modecheck_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__PredId_23, check_hlds__modecheck_util__ProcId_24, &check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__ProcInfo0_26);
    }
#line 984 "modecheck_util.m"
    {
#line 984 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_typevarset_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__TVarSet_27);
    }
#line 985 "modecheck_util.m"
    {
#line 985 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_exist_quant_tvars_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__ExistQTVars_28);
    }
#line 986 "modecheck_util.m"
    {
#line 986 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_head_type_params_2_p_0(check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__HeadTypeParams_29);
    }
#line 989 "modecheck_util.m"
    {
#line 989 "modecheck_util.m"
      check_hlds__modecheck_util__SymName_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 989 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, 0) = ((MR_Box) (check_hlds__modecheck_util__CalleeModuleName_12));
#line 989 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, 1) = ((MR_Box) (check_hlds__modecheck_util__CalleePredName_13));
#line 989 "modecheck_util.m"
    }
#line 990 "modecheck_util.m"
    {
#line 990 "modecheck_util.m"
      hlds__pred_table__get_pred_id_and_proc_id_by_types_11_p_0((MR_Integer) 0, check_hlds__modecheck_util__SymName_30, (MR_Integer) 0, check_hlds__modecheck_util__TVarSet_27, check_hlds__modecheck_util__ExistQTVars_28, check_hlds__modecheck_util__ArgTypes_15, check_hlds__modecheck_util__HeadTypeParams_29, check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__Context_18, &check_hlds__modecheck_util__CalleePredId_31, &check_hlds__modecheck_util__CalleeProcId_32);
    }
#line 993 "modecheck_util.m"
    {
#line 993 "modecheck_util.m"
      hlds__hlds_module__module_info_pred_proc_info_5_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__CalleePredId_31, check_hlds__modecheck_util__CalleeProcId_32, &check_hlds__modecheck_util__CalleePredInfo_33, &check_hlds__modecheck_util__CalleeProcInfo_34);
    }
#line 1000 "modecheck_util.m"
    {
#line 1000 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__VarSet0_35);
    }
#line 1001 "modecheck_util.m"
    {
#line 1001 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__VarTypes0_36);
    }
#line 1002 "modecheck_util.m"
    {
#line 1002 "modecheck_util.m"
      hlds__hlds_pred__proc_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet0_35, check_hlds__modecheck_util__ProcInfo0_26, &check_hlds__modecheck_util__ProcInfo1_37);
    }
#line 1003 "modecheck_util.m"
    {
#line 1003 "modecheck_util.m"
      hlds__hlds_pred__proc_info_set_vartypes_3_p_0(check_hlds__modecheck_util__VarTypes0_36, check_hlds__modecheck_util__ProcInfo1_37, &check_hlds__modecheck_util__ProcInfo2_38);
    }
#line 1004 "modecheck_util.m"
    {
#line 1004 "modecheck_util.m"
      check_hlds__polymorphism__create_poly_info_4_p_0(check_hlds__modecheck_util__ModuleInfo0_22, check_hlds__modecheck_util__PredInfo0_25, check_hlds__modecheck_util__ProcInfo2_38, &check_hlds__modecheck_util__PolyInfo0_39);
    }
#line 1008 "modecheck_util.m"
    {
#line 1008 "modecheck_util.m"
      hlds__hlds_goal__goal_info_init_1_p_0(&check_hlds__modecheck_util__GoalInfo0_40);
    }
#line 1009 "modecheck_util.m"
    {
#line 1009 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_util__Context_18, check_hlds__modecheck_util__GoalInfo0_40, &check_hlds__modecheck_util__GoalInfo1_41);
    }
#line 1010 "modecheck_util.m"
    {
#line 1010 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_util__NonLocals_16, check_hlds__modecheck_util__GoalInfo1_41, &check_hlds__modecheck_util__GoalInfo2_42);
    }
#line 1011 "modecheck_util.m"
    {
#line 1011 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_util__InstMapDelta_17, check_hlds__modecheck_util__GoalInfo2_42, &check_hlds__modecheck_util__GoalInfo_43);
    }
#line 1014 "modecheck_util.m"
    check_hlds__modecheck_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, (MR_Integer) 0)));
#line 1014 "modecheck_util.m"
    check_hlds__modecheck_util__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__SymName_30, (MR_Integer) 1)));
#line 1014 "modecheck_util.m"
    {
#line 1014 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(check_hlds__modecheck_util__CalleeModuleName_12, check_hlds__modecheck_util__V_59_59);
    }
#line 975 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 975 "modecheck_util.m"
      {
#line 1014 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (strcmp(check_hlds__modecheck_util__CalleePredName_13, check_hlds__modecheck_util__V_60_60) == 0);
#line 975 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 975 "modecheck_util.m"
          {
#line 1016 "modecheck_util.m"
            check_hlds__modecheck_util__V_55_55 = (MR_Integer) 2;
#line 1015 "modecheck_util.m"
            {
#line 1015 "modecheck_util.m"
              check_hlds__polymorphism__polymorphism_process_new_call_12_p_0(check_hlds__modecheck_util__CalleePredInfo_33, check_hlds__modecheck_util__CalleeProcInfo_34, check_hlds__modecheck_util__CalleePredId_31, check_hlds__modecheck_util__CalleeProcId_32, check_hlds__modecheck_util__ArgVars_14, check_hlds__modecheck_util__V_55_55, check_hlds__modecheck_util__MaybeCallUnifyContext_19, check_hlds__modecheck_util__SymName_30, check_hlds__modecheck_util__GoalInfo_43, check_hlds__modecheck_util__Goal_20, check_hlds__modecheck_util__PolyInfo0_39, &check_hlds__modecheck_util__PolyInfo_44);
            }
#line 1020 "modecheck_util.m"
            {
#line 1020 "modecheck_util.m"
              check_hlds__polymorphism__poly_info_extract_6_p_0(check_hlds__modecheck_util__PolyInfo_44, check_hlds__modecheck_util__PredInfo0_25, &check_hlds__modecheck_util__PredInfo_45, check_hlds__modecheck_util__ProcInfo2_38, &check_hlds__modecheck_util__ProcInfo_46, &check_hlds__modecheck_util__ModuleInfo1_47);
            }
#line 1022 "modecheck_util.m"
            {
#line 1022 "modecheck_util.m"
              hlds__hlds_module__module_info_set_pred_proc_info_6_p_0(check_hlds__modecheck_util__PredId_23, check_hlds__modecheck_util__ProcId_24, check_hlds__modecheck_util__PredInfo_45, check_hlds__modecheck_util__ProcInfo_46, check_hlds__modecheck_util__ModuleInfo1_47, &check_hlds__modecheck_util__ModuleInfo_48);
            }
#line 1026 "modecheck_util.m"
            {
#line 1026 "modecheck_util.m"
              hlds__hlds_pred__proc_info_get_varset_2_p_0(check_hlds__modecheck_util__ProcInfo_46, &check_hlds__modecheck_util__VarSet_49);
            }
#line 1027 "modecheck_util.m"
            {
#line 1027 "modecheck_util.m"
              hlds__hlds_pred__proc_info_get_vartypes_2_p_0(check_hlds__modecheck_util__ProcInfo_46, &check_hlds__modecheck_util__VarTypes_50);
            }
#line 1028 "modecheck_util.m"
            {
#line 1028 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet_49, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_51, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_56_56);
            }
#line 1029 "modecheck_util.m"
            {
#line 1029 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_util__VarTypes_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_56_56, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_57_57);
            }
#line 1030 "modecheck_util.m"
            {
#line 1030 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_48, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_57_57, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52);
            }
#line 1030 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 975 "modecheck_util.m"
          }
#line 975 "modecheck_util.m"
      }
#line 975 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 975 "modecheck_util.m"
  }
#line 969 "modecheck_util.m"
}

#line 776 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_implied_mode_8_p_0(
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_9,
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarInst0_10,
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst0_11,
#line 776 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Var_12,
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36,
#line 776 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37,
#line 776 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38,
#line 776 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39)
#line 776 "modecheck_util.m"
{
#line 781 "modecheck_util.m"
  {
#line 781 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 781 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_15;
#line 781 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InitialInst_16;
#line 781 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarInst1_17;
#line 781 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes0_18;
#line 781 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarType_19;
#line 792 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_40_40;
#line 792 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___ModuleInfo_20;
#line 792 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___Sub_21;

#line 782 "modecheck_util.m"
    {
#line 782 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__ModuleInfo0_15);
    }
#line 783 "modecheck_util.m"
    {
#line 783 "modecheck_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__InitialInst0_11, &check_hlds__modecheck_util__InitialInst_16);
    }
#line 784 "modecheck_util.m"
    {
#line 784 "modecheck_util.m"
      check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarInst0_10, &check_hlds__modecheck_util__VarInst1_17);
    }
#line 786 "modecheck_util.m"
    {
#line 786 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__VarTypes0_18);
    }
#line 787 "modecheck_util.m"
    {
#line 787 "modecheck_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes0_18, check_hlds__modecheck_util__Var0_9, &check_hlds__modecheck_util__VarType_19);
    }
#line 793 "modecheck_util.m"
    {
#line 793 "modecheck_util.m"
      check_hlds__modecheck_util__V_40_40 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 792 "modecheck_util.m"
    {
#line 792 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(check_hlds__modecheck_util__VarInst1_17, check_hlds__modecheck_util__InitialInst_16, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__ModuleInfo0_15, &check_hlds__modecheck_util___ModuleInfo_20, check_hlds__modecheck_util__V_40_40, &check_hlds__modecheck_util___Sub_21);
    }
#line 796 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 795 "modecheck_util.m"
      {
#line 795 "modecheck_util.m"
        *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 795 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38;
#line 795 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36;
#line 795 "modecheck_util.m"
      }
#line 796 "modecheck_util.m"
    else
#line 842 "modecheck_util.m"
      {
#line 802 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_22_22;
#line 802 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_23_23;

#line 802 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__InitialInst_16)) == (MR_mktag((MR_Integer) 2)));
#line 802 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 802 "modecheck_util.m"
          {
#line 802 "modecheck_util.m"
            check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__InitialInst_16, (MR_Integer) 0)));
#line 802 "modecheck_util.m"
            check_hlds__modecheck_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__modecheck_util__InitialInst_16, (MR_Integer) 1)));
#line 803 "modecheck_util.m"
            {
#line 803 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_is_free_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarInst1_17);
            }
#line 802 "modecheck_util.m"
          }
#line 842 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 808 "modecheck_util.m"
          {
#line 808 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Context_24;
#line 808 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModeContext_25;
#line 808 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__UnifyContext_26;
#line 808 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__CallUnifyContext_27;
#line 808 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_41_41;
#line 808 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_42_42;
#line 825 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModeErrors_28;

#line 808 "modecheck_util.m"
            *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 819 "modecheck_util.m"
            {
#line 819 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_context_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__Context_24);
            }
#line 820 "modecheck_util.m"
            {
#line 820 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_mode_context_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__ModeContext_25);
            }
#line 821 "modecheck_util.m"
            {
#line 821 "modecheck_util.m"
              check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(check_hlds__modecheck_util__ModeContext_25, &check_hlds__modecheck_util__UnifyContext_26);
            }
#line 822 "modecheck_util.m"
            {
#line 822 "modecheck_util.m"
              check_hlds__modecheck_util__V_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 822 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_42_42, 0) = ((MR_Box) (*check_hlds__modecheck_util__Var_12));
#line 822 "modecheck_util.m"
            }
#line 822 "modecheck_util.m"
            {
#line 822 "modecheck_util.m"
              check_hlds__modecheck_util__V_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 822 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_41_41, 0) = ((MR_Box) (*check_hlds__modecheck_util__Var_12));
#line 822 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_41_41, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
#line 822 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_41_41, 2) = ((MR_Box) (check_hlds__modecheck_util__UnifyContext_26));
#line 822 "modecheck_util.m"
            }
#line 822 "modecheck_util.m"
            {
#line 822 "modecheck_util.m"
              check_hlds__modecheck_util__CallUnifyContext_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 822 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__CallUnifyContext_27, 0) = ((MR_Box) (check_hlds__modecheck_util__V_41_41));
#line 822 "modecheck_util.m"
            }
#line 825 "modecheck_util.m"
            {
#line 825 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__ModeErrors_28);
            }
#line 826 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__ModeErrors_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 825 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 825 "modecheck_util.m"
              {
#line 827 "modecheck_util.m"
                {
#line 827 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_may_init_solver_vars_1_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38);
                }
#line 825 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 825 "modecheck_util.m"
                  {
#line 828 "modecheck_util.m"
                    {
#line 828 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_solver_init_is_supported_1_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38);
                    }
#line 825 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 829 "modecheck_util.m"
                      {
#line 829 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = check_hlds__type_util__type_is_solver_type_with_auto_init_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__VarType_19);
                      }
#line 825 "modecheck_util.m"
                  }
#line 825 "modecheck_util.m"
              }
#line 835 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 912 "modecheck_util.m"
              {
#line 912 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InitVarGoal_73;
#line 912 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NewExtraGoal_74;
#line 912 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__V_76_76;

#line 913 "modecheck_util.m"
                {
#line 913 "modecheck_util.m"
                  check_hlds__modecheck_util__construct_initialisation_call_8_p_0(*check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__InitialInst_16, check_hlds__modecheck_util__Context_24, check_hlds__modecheck_util__CallUnifyContext_27, &check_hlds__modecheck_util__InitVarGoal_73, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);
                }
#line 915 "modecheck_util.m"
                {
#line 915 "modecheck_util.m"
                  check_hlds__modecheck_util__V_76_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_76_76, 0) = ((MR_Box) (check_hlds__modecheck_util__InitVarGoal_73));
#line 915 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_76_76, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "modecheck_util.m"
                }
#line 915 "modecheck_util.m"
                {
#line 915 "modecheck_util.m"
                  check_hlds__modecheck_util__NewExtraGoal_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 915 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewExtraGoal_74, 0) = ((MR_Box) (check_hlds__modecheck_util__V_76_76));
#line 915 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewExtraGoal_74, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 915 "modecheck_util.m"
                }
#line 916 "modecheck_util.m"
                {
#line 916 "modecheck_util.m"
                  check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36, check_hlds__modecheck_util__NewExtraGoal_74, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37);
#line 916 "modecheck_util.m"
                  return;
                }
#line 912 "modecheck_util.m"
              }
#line 835 "modecheck_util.m"
            else
#line 838 "modecheck_util.m"
              {
#line 838 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__WaitingVars_29;
#line 838 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModeError_30;

#line 838 "modecheck_util.m"
                {
#line 838 "modecheck_util.m"
                  check_hlds__modecheck_util__WaitingVars_29 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_9);
                }
#line 839 "modecheck_util.m"
                {
#line 839 "modecheck_util.m"
                  check_hlds__modecheck_util__ModeError_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 839 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 839 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_30, 1) = ((MR_Box) (check_hlds__modecheck_util__Var0_9));
#line 839 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_30, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst0_10));
#line 839 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_30, 3) = ((MR_Box) (check_hlds__modecheck_util__InitialInst_16));
#line 839 "modecheck_util.m"
                }
#line 840 "modecheck_util.m"
                {
#line 840 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_29, check_hlds__modecheck_util__ModeError_30, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);
                }
#line 838 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36;
#line 838 "modecheck_util.m"
              }
#line 808 "modecheck_util.m"
          }
#line 842 "modecheck_util.m"
        else
#line 850 "modecheck_util.m"
          {
#line 843 "modecheck_util.m"
            {
#line 843 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_is_bound_2_p_0(check_hlds__modecheck_util__ModuleInfo0_15, check_hlds__modecheck_util__InitialInst_16);
            }
#line 850 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 846 "modecheck_util.m"
              {
#line 846 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__WaitingVars_53;
#line 846 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModeError_54;

#line 846 "modecheck_util.m"
                *check_hlds__modecheck_util__Var_12 = check_hlds__modecheck_util__Var0_9;
#line 847 "modecheck_util.m"
                {
#line 847 "modecheck_util.m"
                  check_hlds__modecheck_util__WaitingVars_53 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_9);
                }
#line 848 "modecheck_util.m"
                {
#line 848 "modecheck_util.m"
                  check_hlds__modecheck_util__ModeError_54 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 848 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_54, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 848 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_54, 1) = ((MR_Box) (check_hlds__modecheck_util__Var0_9));
#line 848 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_54, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst0_10));
#line 848 "modecheck_util.m"
                  MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_54, 3) = ((MR_Box) (check_hlds__modecheck_util__InitialInst_16));
#line 848 "modecheck_util.m"
                }
#line 849 "modecheck_util.m"
                {
#line 849 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_53, check_hlds__modecheck_util__ModeError_54, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);
                }
#line 846 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36;
#line 846 "modecheck_util.m"
              }
#line 850 "modecheck_util.m"
            else
#line 855 "modecheck_util.m"
              {
#line 855 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarSet0_31;
#line 855 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarSet_32;
#line 855 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_33;
#line 855 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ExtraGoal_34;
#line 855 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NewUnifyExtraGoal_35;
#line 855 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_47_47;
#line 855 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__V_50_50;

#line 855 "modecheck_util.m"
                {
#line 855 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_varset_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__VarSet0_31);
                }
#line 856 "modecheck_util.m"
                {
#line 856 "modecheck_util.m"
                  mercury__varset__new_var_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarSet0_31, &check_hlds__modecheck_util__VarSet_32);
                }
#line 857 "modecheck_util.m"
                {
#line 857 "modecheck_util.m"
                  hlds__vartypes__add_var_type_4_p_0(*check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, check_hlds__modecheck_util__VarTypes0_18, &check_hlds__modecheck_util__VarTypes_33);
                }
#line 858 "modecheck_util.m"
                {
#line 858 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_varset_3_p_0(check_hlds__modecheck_util__VarSet_32, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_47_47);
                }
#line 859 "modecheck_util.m"
                {
#line 859 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_var_types_3_p_0(check_hlds__modecheck_util__VarTypes_33, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_47_47, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39);
                }
#line 862 "modecheck_util.m"
                {
#line 862 "modecheck_util.m"
                  check_hlds__modecheck_unify__create_var_var_unification_5_p_0(check_hlds__modecheck_util__Var0_9, *check_hlds__modecheck_util__Var_12, check_hlds__modecheck_util__VarType_19, *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39, &check_hlds__modecheck_util__ExtraGoal_34);
                }
#line 866 "modecheck_util.m"
                {
#line 866 "modecheck_util.m"
                  check_hlds__modecheck_util__V_50_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_50_50, 0) = ((MR_Box) (check_hlds__modecheck_util__ExtraGoal_34));
#line 866 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_50_50, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "modecheck_util.m"
                }
#line 866 "modecheck_util.m"
                {
#line 866 "modecheck_util.m"
                  check_hlds__modecheck_util__NewUnifyExtraGoal_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 866 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewUnifyExtraGoal_35, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 866 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__NewUnifyExtraGoal_35, 1) = ((MR_Box) (check_hlds__modecheck_util__V_50_50));
#line 866 "modecheck_util.m"
                }
#line 867 "modecheck_util.m"
                {
#line 867 "modecheck_util.m"
                  check_hlds__modecheck_util__append_extra_goals_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_36, check_hlds__modecheck_util__NewUnifyExtraGoal_35, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_37);
#line 867 "modecheck_util.m"
                  return;
                }
#line 855 "modecheck_util.m"
              }
#line 850 "modecheck_util.m"
          }
#line 842 "modecheck_util.m"
      }
#line 781 "modecheck_util.m"
  }
#line 776 "modecheck_util.m"
}

#line 635 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 635 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum0_4,
#line 635 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__5_5,
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6,
#line 635 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7,
#line 635 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 635 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9)
#line 635 "modecheck_util.m"
{
#line 640 "modecheck_util.m"
  {
#line 640 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 640 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 640 "modecheck_util.m"
      {
#line 640 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 640 "modecheck_util.m"
          {
#line 640 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 640 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 640 "modecheck_util.m"
              {
#line 640 "modecheck_util.m"
                *check_hlds__modecheck_util__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 640 "modecheck_util.m"
                *check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6;
#line 640 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 640 "modecheck_util.m"
              }
#line 640 "modecheck_util.m"
          }
#line 640 "modecheck_util.m"
      }
#line 640 "modecheck_util.m"
    else
#line 643 "modecheck_util.m"
      {
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars0_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InitialInst_19;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InitialInsts_20;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__FinalInst_21;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__FinalInsts_22;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var_24;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars_25;
#line 643 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__ArgNum_28;
#line 643 "modecheck_util.m"
        MR_Integer check_hlds__modecheck_util__V_33_33;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36;
#line 643 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap0_49;

#line 641 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 641 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 641 "modecheck_util.m"
          {
#line 641 "modecheck_util.m"
            check_hlds__modecheck_util__InitialInst_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 641 "modecheck_util.m"
            check_hlds__modecheck_util__InitialInsts_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 642 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 642 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 642 "modecheck_util.m"
              {
#line 642 "modecheck_util.m"
                check_hlds__modecheck_util__FinalInst_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 0)));
#line 642 "modecheck_util.m"
                check_hlds__modecheck_util__FinalInsts_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__3_3, (MR_Integer) 1)));
#line 644 "modecheck_util.m"
                check_hlds__modecheck_util__V_33_33 = (MR_Integer) 1;
#line 644 "modecheck_util.m"
                check_hlds__modecheck_util__ArgNum_28 = (check_hlds__modecheck_util__ArgNum0_4 + check_hlds__modecheck_util__V_33_33);
#line 645 "modecheck_util.m"
                {
#line 645 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_28, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34);
                }
#line 657 "modecheck_util.m"
                {
#line 657 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_util__InstMap0_49);
                }
#line 658 "modecheck_util.m"
                {
#line 658 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__InstMap0_49);
                }
#line 670 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 661 "modecheck_util.m"
                  {
#line 661 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__VarInst0_50;
#line 661 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52;
#line 661 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54;

#line 661 "modecheck_util.m"
                    {
#line 661 "modecheck_util.m"
                      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap0_49, check_hlds__modecheck_util__Var0_17, &check_hlds__modecheck_util__VarInst0_50);
                    }
#line 662 "modecheck_util.m"
                    {
#line 662 "modecheck_util.m"
                      check_hlds__modecheck_util__handle_implied_mode_8_p_0(check_hlds__modecheck_util__Var0_17, check_hlds__modecheck_util__VarInst0_50, check_hlds__modecheck_util__InitialInst_19, &check_hlds__modecheck_util__Var_24, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52);
                    }
#line 664 "modecheck_util.m"
                    {
#line 664 "modecheck_util.m"
                      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var0_17, check_hlds__modecheck_util__FinalInst_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_22_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54);
                    }
#line 665 "modecheck_util.m"
                    {
#line 665 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[4], ((MR_Box) (check_hlds__modecheck_util__Var_24)), ((MR_Box) (check_hlds__modecheck_util__Var0_17)));
                    }
#line 667 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 667 "modecheck_util.m"
                      check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54;
#line 667 "modecheck_util.m"
                    else
#line 668 "modecheck_util.m"
                      {
#line 668 "modecheck_util.m"
                        {
#line 668 "modecheck_util.m"
                          check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_24, check_hlds__modecheck_util__FinalInst_21, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_24_54, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36);
                        }
#line 668 "modecheck_util.m"
                      }
#line 661 "modecheck_util.m"
                  }
#line 670 "modecheck_util.m"
                else
#line 671 "modecheck_util.m"
                  {
#line 671 "modecheck_util.m"
                    check_hlds__modecheck_util__Var_24 = check_hlds__modecheck_util__Var0_17;
#line 671 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34_34;
#line 671 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35 = check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_0_6;
#line 671 "modecheck_util.m"
                  }
#line 648 "modecheck_util.m"
                {
#line 648 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(check_hlds__modecheck_util__Vars0_18, check_hlds__modecheck_util__InitialInsts_20, check_hlds__modecheck_util__FinalInsts_22, check_hlds__modecheck_util__ArgNum_28, &check_hlds__modecheck_util__Vars_25, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_35_35, check_hlds__modecheck_util__STATE_VARIABLE_ExtraGoals_7, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_36_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);
                }
#line 643 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 643 "modecheck_util.m"
                  {
#line 642 "modecheck_util.m"
                    {
#line 642 "modecheck_util.m"
                      MR_Word base;
#line 642 "modecheck_util.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 642 "modecheck_util.m"
                      *check_hlds__modecheck_util__HeadVar__5_5 = base;
#line 642 "modecheck_util.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_24));
#line 642 "modecheck_util.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_25));
#line 642 "modecheck_util.m"
                    }
#line 642 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 643 "modecheck_util.m"
                  }
#line 642 "modecheck_util.m"
              }
#line 641 "modecheck_util.m"
          }
#line 643 "modecheck_util.m"
      }
#line 640 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 640 "modecheck_util.m"
  }
#line 635 "modecheck_util.m"
}

#line 599 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(
#line 599 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadInstVars_6,
#line 599 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstVar_7,
#line 599 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Subst_8)
#line 599 "modecheck_util.m"
{
#line 602 "modecheck_util.m"
  {
#line 602 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 617 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Inst_10;
#line 603 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv0_Inst_10;

#line 603 "modecheck_util.m"
    {
#line 603 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__map__search_3_p_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__HeadInstVars_6, ((MR_Box) (check_hlds__modecheck_util__InstVar_7)), &check_hlds__modecheck_util__conv0_Inst_10);
    }
#line 603 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 603 "modecheck_util.m"
      {
#line 603 "modecheck_util.m"
        check_hlds__modecheck_util__Inst_10 = ((MR_Word) check_hlds__modecheck_util__conv0_Inst_10);
#line 603 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 603 "modecheck_util.m"
      }
#line 617 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 606 "modecheck_util.m"
      {
#line 606 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__TypeInfo_23_23;
#line 606 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__SubstInstVars_11;
#line 606 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__SubstInst_12;
#line 614 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Uniq_13;
#line 614 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__BoundInsts_15;
#line 614 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__SubstUniq_16;
#line 614 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__SubstBoundInsts_18;
#line 609 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_14_14;
#line 610 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_17_17;

#line 606 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__Subst_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 606 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 606 "modecheck_util.m"
          {
#line 606 "modecheck_util.m"
            check_hlds__modecheck_util__SubstInstVars_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 1)));
#line 606 "modecheck_util.m"
            check_hlds__modecheck_util__SubstInst_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Subst_8, (MR_Integer) 2)));
#line 3684 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__TypeInfo_23_23 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[0];
#line 607 "modecheck_util.m"
            {
#line 607 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = mercury__set__member_2_p_0(check_hlds__modecheck_util__TypeInfo_23_23, ((MR_Box) (check_hlds__modecheck_util__InstVar_7)), check_hlds__modecheck_util__SubstInstVars_11);
            }
#line 606 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 606 "modecheck_util.m"
              {
#line 609 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__Inst_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 609 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 609 "modecheck_util.m"
                  {
#line 609 "modecheck_util.m"
                    check_hlds__modecheck_util__Uniq_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 1)));
#line 609 "modecheck_util.m"
                    check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 2)));
#line 609 "modecheck_util.m"
                    check_hlds__modecheck_util__BoundInsts_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_10, (MR_Integer) 3)));
#line 610 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__SubstInst_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 610 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 610 "modecheck_util.m"
                      {
#line 610 "modecheck_util.m"
                        check_hlds__modecheck_util__SubstUniq_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 1)));
#line 610 "modecheck_util.m"
                        check_hlds__modecheck_util__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 2)));
#line 610 "modecheck_util.m"
                        check_hlds__modecheck_util__SubstBoundInsts_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__SubstInst_12, (MR_Integer) 3)));
#line 610 "modecheck_util.m"
                      }
#line 609 "modecheck_util.m"
                  }
#line 614 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 612 "modecheck_util.m"
                  {
#line 612 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__TypeInfo_24_24;

#line 612 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__Uniq_13 == check_hlds__modecheck_util__SubstUniq_16);
#line 612 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 612 "modecheck_util.m"
                      {
#line 3736 "check_hlds.modecheck_util.c"
                        check_hlds__modecheck_util__TypeInfo_24_24 = (MR_Word) &check_hlds__modecheck_util_scalar_common_1[3];
#line 613 "modecheck_util.m"
                        {
#line 613 "modecheck_util.m"
                          check_hlds__modecheck_util__succeeded = mercury__builtin__unify_2_p_0(check_hlds__modecheck_util__TypeInfo_24_24, ((MR_Box) (check_hlds__modecheck_util__BoundInsts_15)), ((MR_Box) (check_hlds__modecheck_util__SubstBoundInsts_18)));
                        }
#line 612 "modecheck_util.m"
                      }
#line 612 "modecheck_util.m"
                  }
#line 614 "modecheck_util.m"
                else
#line 615 "modecheck_util.m"
                  {
#line 615 "modecheck_util.m"
                    check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__Inst_10, check_hlds__modecheck_util__SubstInst_12);
                  }
#line 606 "modecheck_util.m"
              }
#line 606 "modecheck_util.m"
          }
#line 606 "modecheck_util.m"
      }
#line 617 "modecheck_util.m"
    else
#line 618 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 602 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 602 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 602 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 602 "modecheck_util.m"
  }
#line 599 "modecheck_util.m"
}

#line 500 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(
#line 500 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 500 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 500 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 500 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 500 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 500 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 500 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7)
#line 500 "modecheck_util.m"
{
#line 505 "modecheck_util.m"
  while (MR_TRUE)
#line 505 "modecheck_util.m"
    {
#line 505 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 505 "modecheck_util.m"
      {
#line 505 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 505 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 510 "modecheck_util.m"
            {
#line 511 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6;
#line 511 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Subst_5 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 510 "modecheck_util.m"
            }
#line 505 "modecheck_util.m"
          else
#line 508 "modecheck_util.m"
            {
#line 509 "modecheck_util.m"
              {
#line 509 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
#line 509 "modecheck_util.m"
                return;
              }
#line 508 "modecheck_util.m"
            }
#line 505 "modecheck_util.m"
        else
#line 505 "modecheck_util.m"
          {
#line 505 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 505 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "modecheck_util.m"
              {
#line 506 "modecheck_util.m"
                {
#line 506 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_no_exact_match_2\'/7", (MR_String) "length mismatch");
#line 506 "modecheck_util.m"
                  return;
                }
#line 505 "modecheck_util.m"
              }
#line 505 "modecheck_util.m"
            else
#line 513 "modecheck_util.m"
              {
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Insts_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 513 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_46 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_67;
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_68;
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarInst_69;
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_70;
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Type_71;
#line 513 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo0_72;
#line 560 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo_73;
#line 560 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;

#line 515 "modecheck_util.m"
                {
#line 515 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_46, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
                }
#line 549 "modecheck_util.m"
                {
#line 549 "modecheck_util.m"
                  parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, check_hlds__modecheck_util__Inst_41, &check_hlds__modecheck_util__Inst_67);
                }
#line 550 "modecheck_util.m"
                {
#line 550 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__InstMap_68);
                }
#line 551 "modecheck_util.m"
                {
#line 551 "modecheck_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_68, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__VarInst_69);
                }
#line 552 "modecheck_util.m"
                {
#line 552 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__VarTypes_70);
                }
#line 553 "modecheck_util.m"
                {
#line 553 "modecheck_util.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_70, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__Type_71);
                }
#line 554 "modecheck_util.m"
                {
#line 554 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__ModuleInfo0_72);
                }
#line 556 "modecheck_util.m"
                {
#line 556 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__modecheck_util__VarInst_69, check_hlds__modecheck_util__Inst_67, check_hlds__modecheck_util__Type_71, check_hlds__modecheck_util__ModuleInfo0_72, &check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76);
                }
#line 560 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 559 "modecheck_util.m"
                  {
#line 559 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;
#line 559 "modecheck_util.m"
                    {
#line 559 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 559 "modecheck_util.m"
                  }
#line 560 "modecheck_util.m"
                else
#line 561 "modecheck_util.m"
                  {
#line 561 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_74;
#line 561 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_75;

#line 561 "modecheck_util.m"
                    {
#line 561 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_74 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_58_58);
                    }
#line 562 "modecheck_util.m"
                    {
#line 562 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 562 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 562 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 1) = ((MR_Box) (check_hlds__modecheck_util__V_58_58));
#line 562 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_69));
#line 562 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_67));
#line 562 "modecheck_util.m"
                    }
#line 563 "modecheck_util.m"
                    {
#line 563 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_74, check_hlds__modecheck_util__ModeError_75, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 561 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 561 "modecheck_util.m"
                  }
#line 517 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 517 "modecheck_util.m"
                {
#line 517 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_57_57;
#line 517 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__Insts_42;
#line 517 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_46;
#line 517 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 517 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;

#line 517 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6;
#line 517 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 517 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 517 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 517 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 517 "modecheck_util.m"
                }
#line 517 "modecheck_util.m"
                continue;
#line 513 "modecheck_util.m"
              }
#line 505 "modecheck_util.m"
          }
#line 505 "modecheck_util.m"
      }
#line 505 "modecheck_util.m"
      break;
#line 505 "modecheck_util.m"
    }
#line 500 "modecheck_util.m"
}

#line 483 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(
#line 483 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 483 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 483 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 483 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4,
#line 483 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_Subst_5,
#line 483 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6,
#line 483 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7)
#line 483 "modecheck_util.m"
{
#line 487 "modecheck_util.m"
  while (MR_TRUE)
#line 487 "modecheck_util.m"
    {
#line 487 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 487 "modecheck_util.m"
      {
#line 487 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 487 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "modecheck_util.m"
            {
#line 491 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_7 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6;
#line 491 "modecheck_util.m"
              *check_hlds__modecheck_util__STATE_VARIABLE_Subst_5 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 491 "modecheck_util.m"
            }
#line 487 "modecheck_util.m"
          else
#line 489 "modecheck_util.m"
            {
#line 490 "modecheck_util.m"
              {
#line 490 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
#line 490 "modecheck_util.m"
                return;
              }
#line 489 "modecheck_util.m"
            }
#line 487 "modecheck_util.m"
        else
#line 487 "modecheck_util.m"
          {
#line 487 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 487 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 487 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 487 "modecheck_util.m"
              {
#line 488 "modecheck_util.m"
                {
#line 488 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_has_inst_list_exact_match_2\'/7", (MR_String) "length mismatch");
#line 488 "modecheck_util.m"
                  return;
                }
#line 487 "modecheck_util.m"
              }
#line 487 "modecheck_util.m"
            else
#line 493 "modecheck_util.m"
              {
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Insts_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 493 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_46 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Inst_67;
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_68;
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarInst_69;
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarTypes_70;
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Type_71;
#line 493 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo0_72;
#line 537 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__ModuleInfo_73;
#line 537 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;

#line 495 "modecheck_util.m"
                {
#line 495 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_46, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
                }
#line 526 "modecheck_util.m"
                {
#line 526 "modecheck_util.m"
                  parse_tree__prog_mode__inst_apply_substitution_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, check_hlds__modecheck_util__Inst_41, &check_hlds__modecheck_util__Inst_67);
                }
#line 527 "modecheck_util.m"
                {
#line 527 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__InstMap_68);
                }
#line 528 "modecheck_util.m"
                {
#line 528 "modecheck_util.m"
                  hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_68, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__VarInst_69);
                }
#line 529 "modecheck_util.m"
                {
#line 529 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__VarTypes_70);
                }
#line 530 "modecheck_util.m"
                {
#line 530 "modecheck_util.m"
                  hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_70, check_hlds__modecheck_util__V_58_58, &check_hlds__modecheck_util__Type_71);
                }
#line 531 "modecheck_util.m"
                {
#line 531 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__ModuleInfo0_72);
                }
#line 533 "modecheck_util.m"
                {
#line 533 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_no_implied_modes_sub_7_p_0(check_hlds__modecheck_util__VarInst_69, check_hlds__modecheck_util__Inst_67, check_hlds__modecheck_util__Type_71, check_hlds__modecheck_util__ModuleInfo0_72, &check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76);
                }
#line 537 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 536 "modecheck_util.m"
                  {
#line 536 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_24_76;
#line 536 "modecheck_util.m"
                    {
#line 536 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_73, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 536 "modecheck_util.m"
                  }
#line 537 "modecheck_util.m"
                else
#line 538 "modecheck_util.m"
                  {
#line 538 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_74;
#line 538 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_75;

#line 538 "modecheck_util.m"
                    {
#line 538 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_74 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_58_58);
                    }
#line 539 "modecheck_util.m"
                    {
#line 539 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 539 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 539 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 1) = ((MR_Box) (check_hlds__modecheck_util__V_58_58));
#line 539 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_69));
#line 539 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_75, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_67));
#line 539 "modecheck_util.m"
                    }
#line 540 "modecheck_util.m"
                    {
#line 540 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_74, check_hlds__modecheck_util__ModeError_75, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54);
                    }
#line 538 "modecheck_util.m"
                    check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4;
#line 538 "modecheck_util.m"
                  }
#line 497 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 497 "modecheck_util.m"
                {
#line 497 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_57_57;
#line 497 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__Insts_42;
#line 497 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_46;
#line 497 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_53_53;
#line 497 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_54_54;

#line 497 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_6 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_6;
#line 497 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_Subst_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_Subst_0__tmp_copy_4;
#line 497 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 497 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 497 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 497 "modecheck_util.m"
                }
#line 497 "modecheck_util.m"
                continue;
#line 493 "modecheck_util.m"
              }
#line 487 "modecheck_util.m"
          }
#line 487 "modecheck_util.m"
      }
#line 487 "modecheck_util.m"
      break;
#line 487 "modecheck_util.m"
    }
#line 483 "modecheck_util.m"
}

#line 369 "modecheck_util.m"
static MR_Word MR_CALL 
check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(
#line 369 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_5,
#line 369 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_6,
#line 369 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_7)
#line 369 "modecheck_util.m"
{
#line 371 "modecheck_util.m"
  {
#line 371 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 371 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInst_8;
#line 371 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ConsIdAdjustedArity_9;
#line 371 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgInsts_10;

#line 372 "modecheck_util.m"
    {
#line 372 "modecheck_util.m"
      check_hlds__modecheck_util__ConsIdAdjustedArity_9 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(check_hlds__modecheck_util__ModuleInfo_5, check_hlds__modecheck_util__Type_6, check_hlds__modecheck_util__ConsId_7);
    }
#line 373 "modecheck_util.m"
    {
#line 373 "modecheck_util.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__ConsIdAdjustedArity_9, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modecheck_util__ArgInsts_10);
    }
#line 374 "modecheck_util.m"
    {
#line 374 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInst_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, 0) = ((MR_Box) (check_hlds__modecheck_util__ConsId_7));
#line 374 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_8, 1) = ((MR_Box) (check_hlds__modecheck_util__ArgInsts_10));
#line 374 "modecheck_util.m"
    }
#line 371 "modecheck_util.m"
    return check_hlds__modecheck_util__BoundInst_8;
#line 371 "modecheck_util.m"
  }
#line 369 "modecheck_util.m"
}

#line 331 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(
#line 331 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 331 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 331 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 331 "modecheck_util.m"
{
#line 334 "modecheck_util.m"
  {
#line 334 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 334 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "modecheck_util.m"
      *check_hlds__modecheck_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 334 "modecheck_util.m"
    else
#line 335 "modecheck_util.m"
      {
#line 335 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 335 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_8;
#line 335 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_9;
#line 335 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalExpr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_5, (MR_Integer) 0)));
#line 335 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalInfo0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_5, (MR_Integer) 1)));
#line 335 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__GoalInfo_12;

#line 337 "modecheck_util.m"
        {
#line 337 "modecheck_util.m"
          hlds__hlds_goal__goal_info_set_context_3_p_0(check_hlds__modecheck_util__HeadVar__2_2, check_hlds__modecheck_util__GoalInfo0_11, &check_hlds__modecheck_util__GoalInfo_12);
        }
#line 338 "modecheck_util.m"
        {
#line 338 "modecheck_util.m"
          check_hlds__modecheck_util__Goal_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 338 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_8, 0) = ((MR_Box) (check_hlds__modecheck_util__GoalExpr_10));
#line 338 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_8, 1) = ((MR_Box) (check_hlds__modecheck_util__GoalInfo_12));
#line 338 "modecheck_util.m"
        }
#line 339 "modecheck_util.m"
        {
#line 339 "modecheck_util.m"
          check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__Goals0_6, check_hlds__modecheck_util__HeadVar__2_2, &check_hlds__modecheck_util__Goals_9);
        }
#line 335 "modecheck_util.m"
        {
#line 335 "modecheck_util.m"
          MR_Word base;
#line 335 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 335 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 335 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_8));
#line 335 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_9));
#line 335 "modecheck_util.m"
        }
#line 335 "modecheck_util.m"
      }
#line 334 "modecheck_util.m"
  }
#line 331 "modecheck_util.m"
}

#line 312 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(
#line 312 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 312 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 312 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 312 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 312 "modecheck_util.m"
{
#line 315 "modecheck_util.m"
  {
#line 315 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 315 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 315 "modecheck_util.m"
      {
#line 315 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 315 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 315 "modecheck_util.m"
      }
#line 315 "modecheck_util.m"
    else
#line 316 "modecheck_util.m"
      {
#line 316 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 316 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 316 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_10;
#line 316 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_11;
#line 316 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_13;
#line 316 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_14;
#line 316 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;
#line 316 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;

#line 317 "modecheck_util.m"
        {
#line 317 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_13 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal0_8);
        }
#line 318 "modecheck_util.m"
        {
#line 318 "modecheck_util.m"
          check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
        }
#line 319 "modecheck_util.m"
        {
#line 319 "modecheck_util.m"
          check_hlds__modecheck_goal__modecheck_goal_4_p_0(check_hlds__modecheck_util__Goal0_8, &check_hlds__modecheck_util__Goal_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18);
        }
#line 320 "modecheck_util.m"
        {
#line 320 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, &check_hlds__modecheck_util__InstMap_14);
        }
#line 321 "modecheck_util.m"
        {
#line 321 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_unreachable_1_p_0(check_hlds__modecheck_util__InstMap_14);
        }
#line 327 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 325 "modecheck_util.m"
          {
#line 325 "modecheck_util.m"
            {
#line 325 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_util__Goals0_9, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
            }
#line 326 "modecheck_util.m"
            check_hlds__modecheck_util__Goals_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 325 "modecheck_util.m"
          }
#line 327 "modecheck_util.m"
        else
#line 328 "modecheck_util.m"
          {
#line 328 "modecheck_util.m"
            check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(check_hlds__modecheck_util__Goals0_9, &check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
          }
#line 316 "modecheck_util.m"
        {
#line 316 "modecheck_util.m"
          MR_Word base;
#line 316 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__2_2 = base;
#line 316 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_10));
#line 316 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_11));
#line 316 "modecheck_util.m"
        }
#line 316 "modecheck_util.m"
      }
#line 315 "modecheck_util.m"
  }
#line 312 "modecheck_util.m"
}

#line 1077 "modecheck_util.m"
static void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1(
#line 1077 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 1077 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 1077 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 1077 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_3,
#line 1077 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_4,
#line 1077 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_5)
#line 1077 "modecheck_util.m"
{
#line 1077 "modecheck_util.m"
  {
#line 1077 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 1077 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14;
#line 1077 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16;

#line 1077 "modecheck_util.m"
    {
#line 1077 "modecheck_util.m"
      check_hlds__modecheck_util__get_constrained_insts_in_mode_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2), &check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14, ((MR_Word) check_hlds__modecheck_util__wrapper_arg_4), &check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16);
    }
#line 1077 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_3 = ((MR_Box) (check_hlds__modecheck_util__conv1_STATE_VARIABLE_Map_14));
#line 1077 "modecheck_util.m"
    *check_hlds__modecheck_util__wrapper_arg_5 = ((MR_Box) (check_hlds__modecheck_util__conv0_STATE_VARIABLE_Expansions_16));
#line 1077 "modecheck_util.m"
  }
#line 1077 "modecheck_util.m"
}

#line 183 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0(
#line 183 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModuleInfo_4,
#line 183 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Modes_5,
#line 183 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Map_6)
#line 183 "modecheck_util.m"
{
#line 1076 "modecheck_util.m"
  {
#line 1076 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1076 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_8_8;
#line 1076 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_9_9;
#line 1076 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_10_10;
#line 1077 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___Expansions_7;
#line 1077 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv3_Map_6;
#line 1077 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv2__Expansions_7;

#line 1077 "modecheck_util.m"
    {
#line 1077 "modecheck_util.m"
      check_hlds__modecheck_util__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1077 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_5[0]));
#line 1077 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 1) = ((MR_Box) (check_hlds__modecheck_util__get_constrained_inst_vars_3_p_0_1));
#line 1077 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1077 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_8_8, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_4));
#line 1077 "modecheck_util.m"
    }
#line 1078 "modecheck_util.m"
    {
#line 1078 "modecheck_util.m"
      check_hlds__modecheck_util__V_9_9 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 1078 "modecheck_util.m"
    {
#line 1078 "modecheck_util.m"
      check_hlds__modecheck_util__V_10_10 = mercury__set_tree234__init_0_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_name_0);
    }
#line 1077 "modecheck_util.m"
    {
#line 1077 "modecheck_util.m"
      mercury__list__foldl2_6_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_mode_0, (MR_Word) &check_hlds__modecheck_util_scalar_common_2[0], (MR_Word) &check_hlds__modecheck_util_scalar_common_1[1], check_hlds__modecheck_util__V_8_8, check_hlds__modecheck_util__Modes_5, ((MR_Box) (check_hlds__modecheck_util__V_9_9)), &check_hlds__modecheck_util__conv3_Map_6, ((MR_Box) (check_hlds__modecheck_util__V_10_10)), &check_hlds__modecheck_util__conv2__Expansions_7);
    }
#line 1077 "modecheck_util.m"
    *check_hlds__modecheck_util__Map_6 = ((MR_Word) check_hlds__modecheck_util__conv3_Map_6);
#line 1077 "modecheck_util.m"
    check_hlds__modecheck_util___Expansions_7 = ((MR_Word) check_hlds__modecheck_util__conv2__Expansions_7);
#line 1076 "modecheck_util.m"
  }
#line 183 "modecheck_util.m"
}

#line 177 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__get_live_vars_3_p_0(
#line 177 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 177 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 177 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 177 "modecheck_util.m"
{
#line 1057 "modecheck_util.m"
  {
#line 1057 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1057 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "modecheck_util.m"
      if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1057 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1057 "modecheck_util.m"
      else
#line 1060 "modecheck_util.m"
        {
#line 1061 "modecheck_util.m"
          {
#line 1061 "modecheck_util.m"
            mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
#line 1061 "modecheck_util.m"
            return;
          }
#line 1060 "modecheck_util.m"
        }
#line 1057 "modecheck_util.m"
    else
#line 1057 "modecheck_util.m"
      {
#line 1057 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 1057 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 1057 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1058 "modecheck_util.m"
          {
#line 1059 "modecheck_util.m"
            {
#line 1059 "modecheck_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.get_live_vars\'/3", (MR_String) "length mismatch");
#line 1059 "modecheck_util.m"
              return;
            }
#line 1058 "modecheck_util.m"
          }
#line 1057 "modecheck_util.m"
        else
#line 1062 "modecheck_util.m"
          {
#line 1062 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IsLive_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 1062 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IsLives_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 1062 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__LiveVars0_21;

#line 1070 "modecheck_util.m"
            {
#line 1070 "modecheck_util.m"
              check_hlds__modecheck_util__get_live_vars_3_p_0(check_hlds__modecheck_util__V_22_22, check_hlds__modecheck_util__IsLives_19, &check_hlds__modecheck_util__LiveVars0_21);
            }
#line 1066 "modecheck_util.m"
#line 1066 "modecheck_util.m"
            switch (check_hlds__modecheck_util__IsLive_18) {
#line 1066 "modecheck_util.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1066 "modecheck_util.m"
              case (MR_Integer) 1:
#line 1067 "modecheck_util.m"
                *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__LiveVars0_21;
#line 1066 "modecheck_util.m"
                break;
#line 1066 "modecheck_util.m"
              case (MR_Integer) 0:
#line 1064 "modecheck_util.m"
                {
#line 1064 "modecheck_util.m"
                  MR_Word base;
#line 1064 "modecheck_util.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1064 "modecheck_util.m"
                  *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 1064 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__V_23_23));
#line 1064 "modecheck_util.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__LiveVars0_21));
#line 1064 "modecheck_util.m"
                }
#line 1066 "modecheck_util.m"
                break;
#line 1066 "modecheck_util.m"
            }
#line 1062 "modecheck_util.m"
          }
#line 1057 "modecheck_util.m"
      }
#line 1057 "modecheck_util.m"
  }
#line 177 "modecheck_util.m"
}

#line 171 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_context_to_unify_context_3_p_0(
#line 171 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util___ModeInfo_4,
#line 171 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ModeContext_5,
#line 171 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__UnifyContext_6)
#line 171 "modecheck_util.m"
{
#line 1046 "modecheck_util.m"
  {
#line 1046 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 1046 "modecheck_util.m"
    {
#line 1046 "modecheck_util.m"
      check_hlds__modecheck_util__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_101_95_99_111_110_116_101_120_116_95_116_111_95_117_110_105_102_121_95_99_111_110_116_101_120_116_95_95_91_49_93_95_48_3_p_0(check_hlds__modecheck_util__ModeContext_5, check_hlds__modecheck_util__UnifyContext_6);
#line 1046 "modecheck_util.m"
      return;
    }
#line 1046 "modecheck_util.m"
  }
#line 171 "modecheck_util.m"
}

#line 168 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__prepend_initialisation_call_7_p_0(
#line 168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_8,
#line 168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarType_9,
#line 168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInst_10,
#line 168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Goal0_11,
#line 168 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goal_12,
#line 168 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_20,
#line 168 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21)
#line 168 "modecheck_util.m"
{
#line 1033 "modecheck_util.m"
  {
#line 1033 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 1033 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__GoalInfo0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_11, (MR_Integer) 1)));
#line 1033 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Context_16;
#line 1033 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InitVarGoal_18;
#line 1033 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ConjList0_19;
#line 1033 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_23_23;
#line 1034 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___GoalExpr0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_11, (MR_Integer) 0)));

#line 1035 "modecheck_util.m"
    {
#line 1035 "modecheck_util.m"
      check_hlds__modecheck_util__Context_16 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_util__GoalInfo0_15);
    }
#line 1037 "modecheck_util.m"
    {
#line 1037 "modecheck_util.m"
      check_hlds__modecheck_util__construct_initialisation_call_8_p_0(check_hlds__modecheck_util__Var_8, check_hlds__modecheck_util__VarType_9, check_hlds__modecheck_util__InitialInst_10, check_hlds__modecheck_util__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__InitVarGoal_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_20, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21);
    }
#line 1039 "modecheck_util.m"
    {
#line 1039 "modecheck_util.m"
      hlds__hlds_goal__goal_to_conj_list_2_p_0(check_hlds__modecheck_util__Goal0_11, &check_hlds__modecheck_util__ConjList0_19);
    }
#line 1040 "modecheck_util.m"
    {
#line 1040 "modecheck_util.m"
      check_hlds__modecheck_util__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_23_23, 0) = ((MR_Box) (check_hlds__modecheck_util__InitVarGoal_18));
#line 1040 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_23_23, 1) = ((MR_Box) (check_hlds__modecheck_util__ConjList0_19));
#line 1040 "modecheck_util.m"
    }
#line 1040 "modecheck_util.m"
    {
#line 1040 "modecheck_util.m"
      hlds__hlds_goal__conj_list_to_goal_3_p_0(check_hlds__modecheck_util__V_23_23, check_hlds__modecheck_util__GoalInfo0_15, check_hlds__modecheck_util__Goal_12);
#line 1040 "modecheck_util.m"
      return;
    }
#line 1033 "modecheck_util.m"
  }
#line 168 "modecheck_util.m"
}

#line 165 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(
#line 165 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 165 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__2_2,
#line 165 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 165 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 165 "modecheck_util.m"
{
#line 918 "modecheck_util.m"
  {
#line 918 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 918 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 918 "modecheck_util.m"
      {
#line 918 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 918 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 918 "modecheck_util.m"
      }
#line 918 "modecheck_util.m"
    else
#line 919 "modecheck_util.m"
      {
#line 919 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 919 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Vars_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 919 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goal_10;
#line 919 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Goals_11;
#line 919 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarTypes_13;
#line 919 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarType_14;
#line 919 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Context_16;
#line 919 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20;

#line 920 "modecheck_util.m"
        {
#line 920 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__VarTypes_13);
        }
#line 921 "modecheck_util.m"
        {
#line 921 "modecheck_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_13, check_hlds__modecheck_util__Var_8, &check_hlds__modecheck_util__VarType_14);
        }
#line 923 "modecheck_util.m"
        {
#line 923 "modecheck_util.m"
          check_hlds__modecheck_util__Context_16 = mercury__term__context_init_0_f_0();
        }
#line 925 "modecheck_util.m"
        {
#line 925 "modecheck_util.m"
          check_hlds__modecheck_util__construct_initialisation_call_8_p_0(check_hlds__modecheck_util__Var_8, check_hlds__modecheck_util__VarType_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__Context_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__Goal_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20);
        }
#line 927 "modecheck_util.m"
        {
#line 927 "modecheck_util.m"
          check_hlds__modecheck_util__construct_initialisation_calls_4_p_0(check_hlds__modecheck_util__Vars_9, &check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_20_20, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
        }
#line 919 "modecheck_util.m"
        {
#line 919 "modecheck_util.m"
          MR_Word base;
#line 919 "modecheck_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 919 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__2_2 = base;
#line 919 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal_10));
#line 919 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__Goals_11));
#line 919 "modecheck_util.m"
        }
#line 919 "modecheck_util.m"
      }
#line 918 "modecheck_util.m"
  }
#line 165 "modecheck_util.m"
}

#line 159 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__construct_initialisation_call_8_p_0(
#line 159 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_9,
#line 159 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__VarType_10,
#line 159 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_11,
#line 159 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Context_12,
#line 159 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeCallUnifyContext_13,
#line 159 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__InitVarGoal_14,
#line 159 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27,
#line 159 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_28)
#line 159 "modecheck_util.m"
{
#line 965 "modecheck_util.m"
  {
#line 965 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 965 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_36_36;
#line 965 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TypeCtorInfo_49_49;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__TypeCtor_16;
#line 932 "modecheck_util.m"
    MR_String check_hlds__modecheck_util__PredName_17;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleName_18;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__NonLocals_22;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMapDeltaAL_23;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMapDelta_24;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_29_29;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_32_32;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_33_33;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_34_34;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_35_35;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_38_38;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_39_39;
#line 932 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_51_51;
#line 935 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__V_50_50;

#line 932 "modecheck_util.m"
    {
#line 932 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = parse_tree__prog_type__type_to_ctor_2_p_0(check_hlds__modecheck_util__VarType_10, &check_hlds__modecheck_util__TypeCtor_16);
    }
#line 932 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 932 "modecheck_util.m"
      {
#line 933 "modecheck_util.m"
        check_hlds__modecheck_util__V_29_29 = (MR_Integer) 3;
#line 933 "modecheck_util.m"
        {
#line 933 "modecheck_util.m"
          check_hlds__modecheck_util__PredName_17 = hlds__special_pred__special_pred_name_2_f_0(check_hlds__modecheck_util__V_29_29, check_hlds__modecheck_util__TypeCtor_16);
        }
#line 935 "modecheck_util.m"
        check_hlds__modecheck_util__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__TypeCtor_16, (MR_Integer) 0)));
#line 935 "modecheck_util.m"
        check_hlds__modecheck_util__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__TypeCtor_16, (MR_Integer) 1)));
#line 936 "modecheck_util.m"
        if (((MR_tag((MR_Word) check_hlds__modecheck_util__V_51_51)) == (MR_mktag((MR_Integer) 1))))
#line 935 "modecheck_util.m"
          {
#line 935 "modecheck_util.m"
            MR_String check_hlds__modecheck_util___TypeName_19;

#line 935 "modecheck_util.m"
            check_hlds__modecheck_util__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_51_51, (MR_Integer) 0)));
#line 935 "modecheck_util.m"
            check_hlds__modecheck_util___TypeName_19 = ((MR_String) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_51_51, (MR_Integer) 1)));
#line 935 "modecheck_util.m"
          }
#line 936 "modecheck_util.m"
        else
#line 937 "modecheck_util.m"
          {
#line 937 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModuleInfo_21;

#line 938 "modecheck_util.m"
            {
#line 938 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modecheck_util__ModuleInfo_21);
            }
#line 939 "modecheck_util.m"
            {
#line 939 "modecheck_util.m"
              hlds__hlds_module__module_info_get_name_2_p_0(check_hlds__modecheck_util__ModuleInfo_21, &check_hlds__modecheck_util__ModuleName_18);
            }
#line 937 "modecheck_util.m"
          }
#line 5032 "check_hlds.modecheck_util.c"
        check_hlds__modecheck_util__TypeCtorInfo_49_49 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 941 "modecheck_util.m"
        {
#line 941 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_22 = parse_tree__set_of_var__make_singleton_1_f_0(check_hlds__modecheck_util__TypeCtorInfo_49_49, check_hlds__modecheck_util__Var_9);
        }
#line 942 "modecheck_util.m"
        check_hlds__modecheck_util__V_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 942 "modecheck_util.m"
        {
#line 942 "modecheck_util.m"
          check_hlds__modecheck_util__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 942 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_32_32, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_9));
#line 942 "modecheck_util.m"
          MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_32_32, 1) = ((MR_Box) (check_hlds__modecheck_util__Inst_11));
#line 942 "modecheck_util.m"
        }
#line 942 "modecheck_util.m"
        {
#line 942 "modecheck_util.m"
          check_hlds__modecheck_util__InstMapDeltaAL_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 942 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstMapDeltaAL_23, 0) = ((MR_Box) (check_hlds__modecheck_util__V_32_32));
#line 942 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__InstMapDeltaAL_23, 1) = ((MR_Box) (check_hlds__modecheck_util__V_33_33));
#line 942 "modecheck_util.m"
        }
#line 943 "modecheck_util.m"
        {
#line 943 "modecheck_util.m"
          check_hlds__modecheck_util__InstMapDelta_24 = hlds__instmap__instmap_delta_from_assoc_list_1_f_0(check_hlds__modecheck_util__InstMapDeltaAL_23);
        }
#line 944 "modecheck_util.m"
        check_hlds__modecheck_util__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 944 "modecheck_util.m"
        check_hlds__modecheck_util__V_39_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 944 "modecheck_util.m"
        {
#line 944 "modecheck_util.m"
          check_hlds__modecheck_util__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_34_34, 0) = ((MR_Box) (check_hlds__modecheck_util__Var_9));
#line 944 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_34_34, 1) = ((MR_Box) (check_hlds__modecheck_util__V_38_38));
#line 944 "modecheck_util.m"
        }
#line 944 "modecheck_util.m"
        {
#line 944 "modecheck_util.m"
          check_hlds__modecheck_util__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 944 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_35_35, 0) = ((MR_Box) (check_hlds__modecheck_util__VarType_10));
#line 944 "modecheck_util.m"
          MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_35_35, 1) = ((MR_Box) (check_hlds__modecheck_util__V_39_39));
#line 944 "modecheck_util.m"
        }
#line 944 "modecheck_util.m"
        {
#line 944 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__build_call_11_p_0(check_hlds__modecheck_util__ModuleName_18, check_hlds__modecheck_util__PredName_17, check_hlds__modecheck_util__V_34_34, check_hlds__modecheck_util__V_35_35, check_hlds__modecheck_util__NonLocals_22, check_hlds__modecheck_util__InstMapDelta_24, check_hlds__modecheck_util__Context_12, check_hlds__modecheck_util__MaybeCallUnifyContext_13, &check_hlds__modecheck_util__V_36_36, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_27, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37);
        }
#line 932 "modecheck_util.m"
      }
#line 965 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 948 "modecheck_util.m"
      {
#line 948 "modecheck_util.m"
        *check_hlds__modecheck_util__InitVarGoal_14 = check_hlds__modecheck_util__V_36_36;
#line 964 "modecheck_util.m"
        {
#line 964 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_need_to_requantify_3_p_0((MR_Integer) 0, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_37_37, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_28);
#line 964 "modecheck_util.m"
          return;
        }
#line 948 "modecheck_util.m"
      }
#line 965 "modecheck_util.m"
    else
#line 966 "modecheck_util.m"
      {
#line 966 "modecheck_util.m"
        {
#line 966 "modecheck_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.construct_initialisation_call\'/8", (MR_String) "condition failed");
#line 966 "modecheck_util.m"
          return;
        }
#line 966 "modecheck_util.m"
      }
#line 965 "modecheck_util.m"
  }
#line 159 "modecheck_util.m"
}

#line 151 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__compute_goal_instmap_delta_6_p_0(
#line 151 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InstMap0_7,
#line 151 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__GoalExpr_8,
#line 151 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15,
#line 151 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_16,
#line 151 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17,
#line 151 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18)
#line 151 "modecheck_util.m"
{
#line 376 "modecheck_util.m"
  {
#line 376 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__GoalExpr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 376 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__DeltaInstMap_12;
#line 377 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_19_19;
#line 377 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_11_11;

#line 377 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 377 "modecheck_util.m"
      {
#line 377 "modecheck_util.m"
        check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 1)));
#line 377 "modecheck_util.m"
        check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__GoalExpr_8, (MR_Integer) 2)));
#line 377 "modecheck_util.m"
        check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 377 "modecheck_util.m"
      }
#line 386 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 384 "modecheck_util.m"
      {
#line 384 "modecheck_util.m"
        {
#line 384 "modecheck_util.m"
          hlds__instmap__instmap_delta_init_reachable_1_p_0(&check_hlds__modecheck_util__DeltaInstMap_12);
        }
#line 385 "modecheck_util.m"
        {
#line 385 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap0_7, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
        }
#line 384 "modecheck_util.m"
      }
#line 386 "modecheck_util.m"
    else
#line 387 "modecheck_util.m"
      {
#line 387 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_13;
#line 387 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_14;

#line 387 "modecheck_util.m"
        {
#line 387 "modecheck_util.m"
          check_hlds__modecheck_util__NonLocals_13 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15);
        }
#line 388 "modecheck_util.m"
        {
#line 388 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__InstMap_14);
        }
#line 389 "modecheck_util.m"
        {
#line 389 "modecheck_util.m"
          hlds__instmap__compute_instmap_delta_4_p_0(check_hlds__modecheck_util__InstMap0_7, check_hlds__modecheck_util__InstMap_14, check_hlds__modecheck_util__NonLocals_13, &check_hlds__modecheck_util__DeltaInstMap_12);
        }
#line 387 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17;
#line 387 "modecheck_util.m"
      }
#line 391 "modecheck_util.m"
    {
#line 391 "modecheck_util.m"
      hlds__hlds_goal__goal_info_set_instmap_delta_3_p_0(check_hlds__modecheck_util__DeltaInstMap_12, check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_0_15, check_hlds__modecheck_util__STATE_VARIABLE_GoalInfo_16);
#line 391 "modecheck_util.m"
      return;
    }
#line 376 "modecheck_util.m"
  }
#line 151 "modecheck_util.m"
}

#line 361 "modecheck_util.m"
static MR_Box MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1(
#line 361 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 361 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1)
#line 361 "modecheck_util.m"
{
#line 361 "modecheck_util.m"
  {
#line 361 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__wrapper_arg_2;
#line 361 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;
#line 361 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__conv0_BoundInst_8;

#line 361 "modecheck_util.m"
    {
#line 361 "modecheck_util.m"
      check_hlds__modecheck_util__conv0_BoundInst_8 = check_hlds__modecheck_util__cons_id_to_bound_inst_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 4))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1));
    }
#line 361 "modecheck_util.m"
    check_hlds__modecheck_util__wrapper_arg_2 = ((MR_Box) (check_hlds__modecheck_util__conv0_BoundInst_8));
#line 361 "modecheck_util.m"
    return check_hlds__modecheck_util__wrapper_arg_2;
#line 361 "modecheck_util.m"
  }
#line 361 "modecheck_util.m"
}

#line 142 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_functors_test_5_p_0(
#line 142 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_6,
#line 142 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MainConsId_7,
#line 142 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__OtherConsIds_8,
#line 142 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15,
#line 142 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_16)
#line 142 "modecheck_util.m"
{
#line 355 "modecheck_util.m"
  {
#line 355 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 355 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_10;
#line 355 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_11;
#line 355 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Type_12;
#line 355 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInsts_13;
#line 355 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Inst_14;
#line 355 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_17_17;
#line 355 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_18_18;

#line 358 "modecheck_util.m"
    {
#line 358 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_util__ModuleInfo_10);
    }
#line 359 "modecheck_util.m"
    {
#line 359 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, &check_hlds__modecheck_util__VarTypes_11);
    }
#line 360 "modecheck_util.m"
    {
#line 360 "modecheck_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_11, check_hlds__modecheck_util__Var_6, &check_hlds__modecheck_util__Type_12);
    }
#line 361 "modecheck_util.m"
    {
#line 361 "modecheck_util.m"
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 361 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_4[0]));
#line 361 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_functors_test_5_p_0_1));
#line 361 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 361 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 3) = ((MR_Box) (check_hlds__modecheck_util__ModuleInfo_10));
#line 361 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_17_17, 4) = ((MR_Box) (check_hlds__modecheck_util__Type_12));
#line 361 "modecheck_util.m"
    }
#line 362 "modecheck_util.m"
    {
#line 362 "modecheck_util.m"
      check_hlds__modecheck_util__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_18_18, 0) = ((MR_Box) (check_hlds__modecheck_util__MainConsId_7));
#line 362 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_18_18, 1) = ((MR_Box) (check_hlds__modecheck_util__OtherConsIds_8));
#line 362 "modecheck_util.m"
    }
#line 361 "modecheck_util.m"
    {
#line 361 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInsts_13 = mercury__list__map_2_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_cons_id_0, (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_bound_inst_0, check_hlds__modecheck_util__V_17_17, check_hlds__modecheck_util__V_18_18);
    }
#line 366 "modecheck_util.m"
    {
#line 366 "modecheck_util.m"
      check_hlds__modecheck_util__Inst_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 366 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 366 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 1) = ((MR_Box) ((MR_Integer) 1));
#line 366 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_14, 3) = ((MR_Box) (check_hlds__modecheck_util__BoundInsts_13));
#line 366 "modecheck_util.m"
    }
#line 367 "modecheck_util.m"
    {
#line 367 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_6, check_hlds__modecheck_util__Inst_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_16);
#line 367 "modecheck_util.m"
      return;
    }
#line 355 "modecheck_util.m"
  }
#line 142 "modecheck_util.m"
}

#line 133 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_functor_test_4_p_0(
#line 133 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_5,
#line 133 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__ConsId_6,
#line 133 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13,
#line 133 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_14)
#line 133 "modecheck_util.m"
{
#line 343 "modecheck_util.m"
  {
#line 343 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_8;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarTypes_9;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Type_10;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__BoundInst_11;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Inst_12;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_17_17;
#line 343 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__ConsIdAdjustedArity_25;
#line 343 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgInsts_26;

#line 346 "modecheck_util.m"
    {
#line 346 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__modecheck_util__ModuleInfo_8);
    }
#line 347 "modecheck_util.m"
    {
#line 347 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, &check_hlds__modecheck_util__VarTypes_9);
    }
#line 348 "modecheck_util.m"
    {
#line 348 "modecheck_util.m"
      hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_9, check_hlds__modecheck_util__Var_5, &check_hlds__modecheck_util__Type_10);
    }
#line 372 "modecheck_util.m"
    {
#line 372 "modecheck_util.m"
      check_hlds__modecheck_util__ConsIdAdjustedArity_25 = check_hlds__type_util__cons_id_adjusted_arity_3_f_0(check_hlds__modecheck_util__ModuleInfo_8, check_hlds__modecheck_util__Type_10, check_hlds__modecheck_util__ConsId_6);
    }
#line 373 "modecheck_util.m"
    {
#line 373 "modecheck_util.m"
      mercury__list__duplicate_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, check_hlds__modecheck_util__ConsIdAdjustedArity_25, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &check_hlds__modecheck_util__ArgInsts_26);
    }
#line 374 "modecheck_util.m"
    {
#line 374 "modecheck_util.m"
      check_hlds__modecheck_util__BoundInst_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 374 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_11, 0) = ((MR_Box) (check_hlds__modecheck_util__ConsId_6));
#line 374 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__BoundInst_11, 1) = ((MR_Box) (check_hlds__modecheck_util__ArgInsts_26));
#line 374 "modecheck_util.m"
    }
#line 352 "modecheck_util.m"
    {
#line 352 "modecheck_util.m"
      check_hlds__modecheck_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_17_17, 0) = ((MR_Box) (check_hlds__modecheck_util__BoundInst_11));
#line 352 "modecheck_util.m"
      MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_17_17, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "modecheck_util.m"
    }
#line 352 "modecheck_util.m"
    {
#line 352 "modecheck_util.m"
      check_hlds__modecheck_util__Inst_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 352 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 352 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 1) = ((MR_Box) ((MR_Integer) 1));
#line 352 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "modecheck_util.m"
      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__Inst_12, 3) = ((MR_Box) (check_hlds__modecheck_util__V_17_17));
#line 352 "modecheck_util.m"
    }
#line 353 "modecheck_util.m"
    {
#line 353 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(check_hlds__modecheck_util__Var_5, check_hlds__modecheck_util__Inst_12, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_14);
#line 353 "modecheck_util.m"
      return;
    }
#line 343 "modecheck_util.m"
  }
#line 133 "modecheck_util.m"
}

#line 125 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(
#line 125 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 125 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2,
#line 125 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_3)
#line 125 "modecheck_util.m"
{
#line 891 "modecheck_util.m"
  while (MR_TRUE)
#line 891 "modecheck_util.m"
    {
#line 891 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 891 "modecheck_util.m"
      {
#line 891 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 891 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 891 "modecheck_util.m"
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2;
#line 891 "modecheck_util.m"
        else
#line 892 "modecheck_util.m"
          {
#line 892 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));
#line 892 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goals_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 892 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;
#line 899 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ConjGoals_10;
#line 896 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_7, (MR_Integer) 0)));
#line 896 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_16_16;
#line 896 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_7, (MR_Integer) 1)));

#line 896 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__V_15_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 896 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 896 "modecheck_util.m"
              {
#line 896 "modecheck_util.m"
                check_hlds__modecheck_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 1)));
#line 896 "modecheck_util.m"
                check_hlds__modecheck_util__ConjGoals_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_15_15, (MR_Integer) 2)));
#line 896 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__V_16_16 == (MR_Integer) 0);
#line 896 "modecheck_util.m"
              }
#line 899 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 898 "modecheck_util.m"
              {
#line 898 "modecheck_util.m"
                check_hlds__modecheck_util__mode_info_remove_goals_live_vars_3_p_0(check_hlds__modecheck_util__ConjGoals_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
              }
#line 899 "modecheck_util.m"
            else
#line 900 "modecheck_util.m"
              {
#line 900 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NonLocals_12;

#line 900 "modecheck_util.m"
                {
#line 900 "modecheck_util.m"
                  check_hlds__modecheck_util__NonLocals_12 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal_7);
                }
#line 901 "modecheck_util.m"
                {
#line 901 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_remove_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_12, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17);
                }
#line 900 "modecheck_util.m"
              }
#line 903 "modecheck_util.m"
            /* direct tailcall eliminated */
#line 903 "modecheck_util.m"
            {
#line 903 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__Goals_8;
#line 903 "modecheck_util.m"
              MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_2 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_17_17;

#line 903 "modecheck_util.m"
              check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_2 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_2;
#line 903 "modecheck_util.m"
              check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 903 "modecheck_util.m"
            }
#line 903 "modecheck_util.m"
            continue;
#line 892 "modecheck_util.m"
          }
#line 891 "modecheck_util.m"
      }
#line 891 "modecheck_util.m"
      break;
#line 891 "modecheck_util.m"
    }
#line 125 "modecheck_util.m"
}

#line 122 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(
#line 122 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 122 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 122 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3,
#line 122 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4)
#line 122 "modecheck_util.m"
{
#line 872 "modecheck_util.m"
  while (MR_TRUE)
#line 872 "modecheck_util.m"
    {
#line 872 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 872 "modecheck_util.m"
      {
#line 872 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 872 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 872 "modecheck_util.m"
          *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3;
#line 872 "modecheck_util.m"
        else
#line 873 "modecheck_util.m"
          {
#line 873 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 873 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 873 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;
#line 886 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ConjGoals_13;
#line 883 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_19_19;
#line 883 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_22_22;
#line 883 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_14_14;

#line 879 "modecheck_util.m"
            {
#line 879 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0(check_hlds__modecheck_util__HeadVar__1_1, check_hlds__modecheck_util__Goals_11, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18);
            }
#line 883 "modecheck_util.m"
            check_hlds__modecheck_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_10, (MR_Integer) 0)));
#line 883 "modecheck_util.m"
            check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal_10, (MR_Integer) 1)));
#line 883 "modecheck_util.m"
            check_hlds__modecheck_util__succeeded = ((((MR_tag((MR_Word) check_hlds__modecheck_util__V_19_19)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 883 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 883 "modecheck_util.m"
              {
#line 883 "modecheck_util.m"
                check_hlds__modecheck_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 1)));
#line 883 "modecheck_util.m"
                check_hlds__modecheck_util__ConjGoals_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__V_19_19, (MR_Integer) 2)));
#line 883 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__HeadVar__1_1 == check_hlds__modecheck_util__V_22_22);
#line 883 "modecheck_util.m"
              }
#line 886 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 885 "modecheck_util.m"
              {
#line 885 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 885 "modecheck_util.m"
                {
#line 885 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__ConjGoals_13;
#line 885 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18;

#line 885 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_3 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_3;
#line 885 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 885 "modecheck_util.m"
                }
#line 885 "modecheck_util.m"
                continue;
#line 885 "modecheck_util.m"
              }
#line 886 "modecheck_util.m"
            else
#line 887 "modecheck_util.m"
              {
#line 887 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__NonLocals_15;

#line 887 "modecheck_util.m"
                {
#line 887 "modecheck_util.m"
                  check_hlds__modecheck_util__NonLocals_15 = hlds__hlds_goal__goal_get_nonlocals_1_f_0(check_hlds__modecheck_util__Goal_10);
                }
#line 888 "modecheck_util.m"
                {
#line 888 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_add_live_vars_3_p_0(check_hlds__modecheck_util__NonLocals_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18_18, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_4);
#line 888 "modecheck_util.m"
                  return;
                }
#line 887 "modecheck_util.m"
              }
#line 873 "modecheck_util.m"
          }
#line 872 "modecheck_util.m"
      }
#line 872 "modecheck_util.m"
      break;
#line 872 "modecheck_util.m"
    }
#line 122 "modecheck_util.m"
}

#line 118 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_list_8_p_0(
#line 118 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars0_9,
#line 118 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__InitialInsts_10,
#line 118 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__FinalInsts_11,
#line 118 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgOffset_12,
#line 118 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Vars_13,
#line 118 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Goals_14,
#line 118 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_18,
#line 118 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_19)
#line 118 "modecheck_util.m"
{
#line 631 "modecheck_util.m"
  {
#line 631 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 631 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Vars1_16;
#line 631 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__Goals1_17;
#line 631 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21;

#line 626 "modecheck_util.m"
    {
#line 626 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_set_var_inst_list_2_9_p_0(check_hlds__modecheck_util__Vars0_9, check_hlds__modecheck_util__InitialInsts_10, check_hlds__modecheck_util__FinalInsts_11, check_hlds__modecheck_util__ArgOffset_12, &check_hlds__modecheck_util__Vars1_16, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__modecheck_util__Goals1_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_18, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21);
    }
#line 631 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 629 "modecheck_util.m"
      {
#line 629 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_19 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_21_21;
#line 629 "modecheck_util.m"
        *check_hlds__modecheck_util__Vars_13 = check_hlds__modecheck_util__Vars1_16;
#line 630 "modecheck_util.m"
        *check_hlds__modecheck_util__Goals_14 = check_hlds__modecheck_util__Goals1_17;
#line 629 "modecheck_util.m"
      }
#line 631 "modecheck_util.m"
    else
#line 632 "modecheck_util.m"
      {
#line 632 "modecheck_util.m"
        {
#line 632 "modecheck_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst_list\'/8", (MR_String) "length mismatch");
#line 632 "modecheck_util.m"
          return;
        }
#line 632 "modecheck_util.m"
      }
#line 631 "modecheck_util.m"
  }
#line 118 "modecheck_util.m"
}

#line 115 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_set_var_inst_5_p_0(
#line 115 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var0_6,
#line 115 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__NewInst_7,
#line 115 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MaybeUInst_8,
#line 115 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33,
#line 115 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34)
#line 115 "modecheck_util.m"
{
#line 674 "modecheck_util.m"
  {
#line 674 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 674 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__PVars0_10;
#line 674 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMap0_11;
#line 674 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42;

#line 680 "modecheck_util.m"
    {
#line 680 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_parallel_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__PVars0_10);
    }
#line 681 "modecheck_util.m"
    {
#line 681 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__InstMap0_11);
    }
#line 682 "modecheck_util.m"
    {
#line 682 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__InstMap0_11);
    }
#line 757 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 683 "modecheck_util.m"
      {
#line 683 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__OldInst_12;
#line 683 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModuleInfo0_13;
#line 683 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModuleInfo_14;
#line 683 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Inst_15;
#line 683 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarTypes_19;
#line 683 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Type_20;
#line 683 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40;
#line 711 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_57_57;

#line 683 "modecheck_util.m"
        {
#line 683 "modecheck_util.m"
          hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap0_11, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__OldInst_12);
        }
#line 684 "modecheck_util.m"
        {
#line 684 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__ModuleInfo0_13);
        }
#line 692 "modecheck_util.m"
        {
#line 692 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0(check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__NewInst_7);
        }
#line 696 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 694 "modecheck_util.m"
          {
#line 694 "modecheck_util.m"
            check_hlds__modecheck_util__ModuleInfo_14 = check_hlds__modecheck_util__ModuleInfo0_13;
#line 695 "modecheck_util.m"
            check_hlds__modecheck_util__Inst_15 = check_hlds__modecheck_util__OldInst_12;
#line 694 "modecheck_util.m"
          }
#line 696 "modecheck_util.m"
        else
#line 702 "modecheck_util.m"
          {
#line 702 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__UnifyInst_16;
#line 702 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__ModuleInfo1_18;
#line 697 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util___Det_17;

#line 697 "modecheck_util.m"
            {
#line 697 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_util__abstractly_unify_inst_8_p_0((MR_Integer) 1, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__NewInst_7, (MR_Integer) 1, &check_hlds__modecheck_util__UnifyInst_16, &check_hlds__modecheck_util___Det_17, check_hlds__modecheck_util__ModuleInfo0_13, &check_hlds__modecheck_util__ModuleInfo1_18);
            }
#line 702 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 700 "modecheck_util.m"
              {
#line 700 "modecheck_util.m"
                check_hlds__modecheck_util__ModuleInfo_14 = check_hlds__modecheck_util__ModuleInfo1_18;
#line 701 "modecheck_util.m"
                check_hlds__modecheck_util__Inst_15 = check_hlds__modecheck_util__UnifyInst_16;
#line 700 "modecheck_util.m"
              }
#line 702 "modecheck_util.m"
            else
#line 703 "modecheck_util.m"
              {
#line 703 "modecheck_util.m"
                {
#line 703 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_set_var_inst\'/5", (MR_String) "unify_inst failed");
#line 703 "modecheck_util.m"
                  return;
                }
#line 703 "modecheck_util.m"
              }
#line 702 "modecheck_util.m"
          }
#line 705 "modecheck_util.m"
        {
#line 705 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_14, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40);
        }
#line 706 "modecheck_util.m"
        {
#line 706 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_var_types_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__VarTypes_19);
        }
#line 707 "modecheck_util.m"
        {
#line 707 "modecheck_util.m"
          hlds__vartypes__lookup_var_type_3_p_0(check_hlds__modecheck_util__VarTypes_19, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__Type_20);
        }
#line 711 "modecheck_util.m"
        {
#line 711 "modecheck_util.m"
          check_hlds__inst_match__inst_expand_3_p_0(check_hlds__modecheck_util__ModuleInfo_14, check_hlds__modecheck_util__Inst_15, &check_hlds__modecheck_util__V_57_57);
        }
#line 711 "modecheck_util.m"
        {
#line 711 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__prog_data____Unify____mer_inst_0_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), check_hlds__modecheck_util__V_57_57);
        }
#line 715 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 713 "modecheck_util.m"
          {
#line 713 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__InstMap_21;

#line 713 "modecheck_util.m"
            {
#line 713 "modecheck_util.m"
              hlds__instmap__init_unreachable_1_p_0(&check_hlds__modecheck_util__InstMap_21);
            }
#line 714 "modecheck_util.m"
            {
#line 714 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_21, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
            }
#line 713 "modecheck_util.m"
          }
#line 715 "modecheck_util.m"
        else
#line 723 "modecheck_util.m"
          {
#line 719 "modecheck_util.m"
            {
#line 719 "modecheck_util.m"
              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_4_p_0(check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
            }
#line 723 "modecheck_util.m"
            if (check_hlds__modecheck_util__succeeded)
#line 721 "modecheck_util.m"
              {
#line 721 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__InstMap_50;

#line 721 "modecheck_util.m"
                {
#line 721 "modecheck_util.m"
                  hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__InstMap0_11, &check_hlds__modecheck_util__InstMap_50);
                }
#line 722 "modecheck_util.m"
                {
#line 722 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                }
#line 721 "modecheck_util.m"
              }
#line 723 "modecheck_util.m"
            else
#line 750 "modecheck_util.m"
              {
#line 750 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__Reason0_22;
#line 740 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__UInst_23;

#line 728 "modecheck_util.m"
                {
#line 728 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_binding_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                }
#line 728 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 728 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 728 "modecheck_util.m"
                  {
#line 732 "modecheck_util.m"
                    {
#line 732 "modecheck_util.m"
                      check_hlds__modecheck_util__succeeded = check_hlds__mode_info__mode_info_var_is_locked_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, check_hlds__modecheck_util__Var0_6, &check_hlds__modecheck_util__Reason0_22);
                    }
#line 728 "modecheck_util.m"
                    if (check_hlds__modecheck_util__succeeded)
#line 728 "modecheck_util.m"
                      {
#line 740 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = ((MR_tag((MR_Word) check_hlds__modecheck_util__MaybeUInst_8)) == (MR_mktag((MR_Integer) 1)));
#line 740 "modecheck_util.m"
                        if (check_hlds__modecheck_util__succeeded)
#line 740 "modecheck_util.m"
                          {
#line 740 "modecheck_util.m"
                            check_hlds__modecheck_util__UInst_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__MaybeUInst_8, (MR_Integer) 0)));
#line 741 "modecheck_util.m"
                            {
#line 741 "modecheck_util.m"
                              check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_is_at_least_as_instantiated_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__UInst_23, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                            }
#line 740 "modecheck_util.m"
                            if (check_hlds__modecheck_util__succeeded)
#line 743 "modecheck_util.m"
                              {
#line 743 "modecheck_util.m"
                                check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_binding_allow_any_any_4_p_0(check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__OldInst_12, check_hlds__modecheck_util__Type_20, check_hlds__modecheck_util__ModuleInfo_14);
                              }
#line 740 "modecheck_util.m"
                          }
#line 733 "modecheck_util.m"
                        check_hlds__modecheck_util__succeeded = !(check_hlds__modecheck_util__succeeded);
#line 728 "modecheck_util.m"
                      }
#line 728 "modecheck_util.m"
                  }
#line 750 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 747 "modecheck_util.m"
                  {
#line 747 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_24;
#line 747 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_25;

#line 747 "modecheck_util.m"
                    {
#line 747 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_24 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_6);
                    }
#line 748 "modecheck_util.m"
                    {
#line 748 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_25 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 748 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 748 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 1) = ((MR_Box) (check_hlds__modecheck_util__Reason0_22));
#line 748 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 2) = ((MR_Box) (check_hlds__modecheck_util__Var0_6));
#line 748 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 3) = ((MR_Box) (check_hlds__modecheck_util__OldInst_12));
#line 748 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_25, 4) = ((MR_Box) (check_hlds__modecheck_util__Inst_15));
#line 748 "modecheck_util.m"
                    }
#line 749 "modecheck_util.m"
                    {
#line 749 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_24, check_hlds__modecheck_util__ModeError_25, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                    }
#line 747 "modecheck_util.m"
                  }
#line 750 "modecheck_util.m"
                else
#line 751 "modecheck_util.m"
                  {
#line 751 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__DelayInfo0_26;
#line 751 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__DelayInfo_27;
#line 751 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45;
#line 751 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__InstMap_51;

#line 751 "modecheck_util.m"
                    {
#line 751 "modecheck_util.m"
                      hlds__instmap__instmap_set_var_4_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Inst_15, check_hlds__modecheck_util__InstMap0_11, &check_hlds__modecheck_util__InstMap_51);
                    }
#line 752 "modecheck_util.m"
                    {
#line 752 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__InstMap_51, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_40_40, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45);
                    }
#line 753 "modecheck_util.m"
                    {
#line 753 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_get_delay_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_util__DelayInfo0_26);
                    }
#line 754 "modecheck_util.m"
                    {
#line 754 "modecheck_util.m"
                      check_hlds__delay_info__delay_info_bind_var_3_p_0(check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__DelayInfo0_26, &check_hlds__modecheck_util__DelayInfo_27);
                    }
#line 755 "modecheck_util.m"
                    {
#line 755 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_set_delay_info_3_p_0(check_hlds__modecheck_util__DelayInfo_27, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_45_45, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42);
                    }
#line 751 "modecheck_util.m"
                  }
#line 750 "modecheck_util.m"
              }
#line 723 "modecheck_util.m"
          }
#line 683 "modecheck_util.m"
      }
#line 757 "modecheck_util.m"
    else
#line 757 "modecheck_util.m"
      check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_33;
#line 762 "modecheck_util.m"
    if ((check_hlds__modecheck_util__PVars0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 761 "modecheck_util.m"
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42;
#line 762 "modecheck_util.m"
    else
#line 763 "modecheck_util.m"
      {
#line 763 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__NonLocals_28;
#line 763 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Bound0_29;
#line 763 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__PVars1_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars0_10, (MR_Integer) 1)));
#line 763 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__PVars_32;
#line 763 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars0_10, (MR_Integer) 0)));

#line 763 "modecheck_util.m"
        check_hlds__modecheck_util__NonLocals_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_47_47, (MR_Integer) 0)));
#line 763 "modecheck_util.m"
        check_hlds__modecheck_util__Bound0_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_47_47, (MR_Integer) 1)));
#line 764 "modecheck_util.m"
        {
#line 764 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = parse_tree__set_of_var__member_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__NonLocals_28, check_hlds__modecheck_util__Var0_6);
        }
#line 767 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 765 "modecheck_util.m"
          {
#line 765 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Bound_31;
#line 765 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_48_48;

#line 765 "modecheck_util.m"
            {
#line 765 "modecheck_util.m"
              parse_tree__set_of_var__insert_3_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var0_6, check_hlds__modecheck_util__Bound0_29, &check_hlds__modecheck_util__Bound_31);
            }
#line 766 "modecheck_util.m"
            {
#line 766 "modecheck_util.m"
              check_hlds__modecheck_util__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 766 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_48_48, 0) = ((MR_Box) (check_hlds__modecheck_util__NonLocals_28));
#line 766 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_48_48, 1) = ((MR_Box) (check_hlds__modecheck_util__Bound_31));
#line 766 "modecheck_util.m"
            }
#line 766 "modecheck_util.m"
            {
#line 766 "modecheck_util.m"
              check_hlds__modecheck_util__PVars_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 766 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars_32, 0) = ((MR_Box) (check_hlds__modecheck_util__V_48_48));
#line 766 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__PVars_32, 1) = ((MR_Box) (check_hlds__modecheck_util__PVars1_30));
#line 766 "modecheck_util.m"
            }
#line 765 "modecheck_util.m"
          }
#line 767 "modecheck_util.m"
        else
#line 768 "modecheck_util.m"
          check_hlds__modecheck_util__PVars_32 = check_hlds__modecheck_util__PVars0_10;
#line 770 "modecheck_util.m"
        {
#line 770 "modecheck_util.m"
          check_hlds__mode_info__mode_info_set_parallel_vars_3_p_0(check_hlds__modecheck_util__PVars_32, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_42_42, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_34);
#line 770 "modecheck_util.m"
          return;
        }
#line 763 "modecheck_util.m"
      }
#line 674 "modecheck_util.m"
  }
#line 115 "modecheck_util.m"
}

#line 100 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_introduced_type_info_var_has_inst_no_exact_match_5_p_0(
#line 100 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Var_6,
#line 100 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Type_7,
#line 100 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Inst_8,
#line 100 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17,
#line 100 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18)
#line 100 "modecheck_util.m"
{
#line 567 "modecheck_util.m"
  {
#line 567 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 567 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__InstMap_10;
#line 567 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__VarInst_11;
#line 567 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo0_12;
#line 576 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ModuleInfo_13;
#line 572 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_19_19;
#line 572 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util___Subst_14;

#line 568 "modecheck_util.m"
    {
#line 568 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__InstMap_10);
    }
#line 569 "modecheck_util.m"
    {
#line 569 "modecheck_util.m"
      hlds__instmap__instmap_lookup_var_3_p_0(check_hlds__modecheck_util__InstMap_10, check_hlds__modecheck_util__Var_6, &check_hlds__modecheck_util__VarInst_11);
    }
#line 570 "modecheck_util.m"
    {
#line 570 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_module_info_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, &check_hlds__modecheck_util__ModuleInfo0_12);
    }
#line 573 "modecheck_util.m"
    {
#line 573 "modecheck_util.m"
      check_hlds__modecheck_util__V_19_19 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 572 "modecheck_util.m"
    {
#line 572 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = check_hlds__inst_match__inst_matches_initial_sub_7_p_0(check_hlds__modecheck_util__VarInst_11, check_hlds__modecheck_util__Inst_8, check_hlds__modecheck_util__Type_7, check_hlds__modecheck_util__ModuleInfo0_12, &check_hlds__modecheck_util__ModuleInfo_13, check_hlds__modecheck_util__V_19_19, &check_hlds__modecheck_util___Subst_14);
    }
#line 576 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 575 "modecheck_util.m"
      {
#line 575 "modecheck_util.m"
        check_hlds__mode_info__mode_info_set_module_info_3_p_0(check_hlds__modecheck_util__ModuleInfo_13, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
#line 575 "modecheck_util.m"
        return;
      }
#line 576 "modecheck_util.m"
    else
#line 577 "modecheck_util.m"
      {
#line 577 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__WaitingVars_15;
#line 577 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModeError_16;

#line 577 "modecheck_util.m"
        {
#line 577 "modecheck_util.m"
          check_hlds__modecheck_util__WaitingVars_15 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Var_6);
        }
#line 578 "modecheck_util.m"
        {
#line 578 "modecheck_util.m"
          check_hlds__modecheck_util__ModeError_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 578 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 578 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 1) = ((MR_Box) (check_hlds__modecheck_util__Var_6));
#line 578 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInst_11));
#line 578 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_16, 3) = ((MR_Box) (check_hlds__modecheck_util__Inst_8));
#line 578 "modecheck_util.m"
        }
#line 579 "modecheck_util.m"
        {
#line 579 "modecheck_util.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_15, check_hlds__modecheck_util__ModeError_16, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_17, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_18);
#line 579 "modecheck_util.m"
          return;
        }
#line 577 "modecheck_util.m"
      }
#line 567 "modecheck_util.m"
  }
#line 100 "modecheck_util.m"
}

#line 589 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1(
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
#line 589 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4)
#line 589 "modecheck_util.m"
{
#line 589 "modecheck_util.m"
  {
#line 589 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 589 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;

#line 589 "modecheck_util.m"
    {
#line 589 "modecheck_util.m"
      return check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 589 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 589 "modecheck_util.m"
  }
#line 589 "modecheck_util.m"
}

#line 92 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0(
#line 92 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars_7,
#line 92 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Insts_8,
#line 92 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum_9,
#line 92 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Subst_10,
#line 92 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12,
#line 92 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13)
#line 92 "modecheck_util.m"
{
#line 478 "modecheck_util.m"
  {
#line 478 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 478 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_14_14;
#line 478 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
#line 478 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__HeadInstVars_24;
#line 589 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_30_30;
#line 589 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv0_V_25_25;

#line 480 "modecheck_util.m"
    {
#line 480 "modecheck_util.m"
      check_hlds__modecheck_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 479 "modecheck_util.m"
    {
#line 479 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_2_7_p_0(check_hlds__modecheck_util__Vars_7, check_hlds__modecheck_util__Insts_8, check_hlds__modecheck_util__ArgNum_9, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__Subst_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15);
    }
#line 588 "modecheck_util.m"
    {
#line 588 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__HeadInstVars_24);
    }
#line 589 "modecheck_util.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 589 "modecheck_util.m"
    {
#line 589 "modecheck_util.m"
      check_hlds__modecheck_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 589 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
#line 589 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_var_has_inst_list_no_exact_match_6_p_0_1));
#line 589 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 589 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 3) = ((MR_Box) (check_hlds__modecheck_util__HeadInstVars_24));
#line 589 "modecheck_util.m"
    }
#line 589 "modecheck_util.m"
    {
#line 589 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__map__foldl_4_p_3((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, check_hlds__modecheck_util__V_30_30, *check_hlds__modecheck_util__Subst_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modecheck_util__conv0_V_25_25);
    }
#line 589 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 589 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 591 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 591 "modecheck_util.m"
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
#line 591 "modecheck_util.m"
    else
#line 592 "modecheck_util.m"
      {
#line 592 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_26;
#line 592 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarInsts_27;
#line 592 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__WaitingVars_28;
#line 592 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModeError_29;

#line 592 "modecheck_util.m"
        {
#line 592 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__InstMap_26);
        }
#line 593 "modecheck_util.m"
        {
#line 593 "modecheck_util.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_util__InstMap_26, check_hlds__modecheck_util__Vars_7, &check_hlds__modecheck_util__VarInsts_27);
        }
#line 594 "modecheck_util.m"
        {
#line 594 "modecheck_util.m"
          check_hlds__modecheck_util__WaitingVars_28 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Vars_7);
        }
#line 595 "modecheck_util.m"
        {
#line 595 "modecheck_util.m"
          check_hlds__modecheck_util__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 595 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 595 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_7));
#line 595 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInsts_27));
#line 595 "modecheck_util.m"
        }
#line 596 "modecheck_util.m"
        {
#line 596 "modecheck_util.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_28, check_hlds__modecheck_util__ModeError_29, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13);
#line 596 "modecheck_util.m"
          return;
        }
#line 592 "modecheck_util.m"
      }
#line 478 "modecheck_util.m"
  }
#line 92 "modecheck_util.m"
}

#line 589 "modecheck_util.m"
static MR_bool MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1(
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__closure_arg,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_1,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_2,
#line 589 "modecheck_util.m"
  MR_Box check_hlds__modecheck_util__wrapper_arg_3,
#line 589 "modecheck_util.m"
  MR_Box * check_hlds__modecheck_util__wrapper_arg_4)
#line 589 "modecheck_util.m"
{
#line 589 "modecheck_util.m"
  {
#line 589 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 589 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__closure = check_hlds__modecheck_util__closure_arg;

#line 589 "modecheck_util.m"
    {
#line 589 "modecheck_util.m"
      return check_hlds__modecheck_util__succeeded = check_hlds__modecheck_util__modecheck_head_inst_var_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__closure, (MR_Integer) 3))), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_1), ((MR_Word) check_hlds__modecheck_util__wrapper_arg_2));
    }
#line 589 "modecheck_util.m"
    return check_hlds__modecheck_util__succeeded;
#line 589 "modecheck_util.m"
  }
#line 589 "modecheck_util.m"
}

#line 89 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0(
#line 89 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Vars_7,
#line 89 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__Insts_8,
#line 89 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__ArgNum_9,
#line 89 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__Subst_10,
#line 89 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12,
#line 89 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13)
#line 89 "modecheck_util.m"
{
#line 472 "modecheck_util.m"
  {
#line 472 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 472 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_14_14;
#line 472 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
#line 472 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__HeadInstVars_24;
#line 589 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__V_30_30;
#line 589 "modecheck_util.m"
    MR_Box check_hlds__modecheck_util__conv0_V_25_25;

#line 474 "modecheck_util.m"
    {
#line 474 "modecheck_util.m"
      check_hlds__modecheck_util__V_14_14 = mercury__map__init_0_f_0((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0);
    }
#line 473 "modecheck_util.m"
    {
#line 473 "modecheck_util.m"
      check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_2_7_p_0(check_hlds__modecheck_util__Vars_7, check_hlds__modecheck_util__Insts_8, check_hlds__modecheck_util__ArgNum_9, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__Subst_10, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_12, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15);
    }
#line 588 "modecheck_util.m"
    {
#line 588 "modecheck_util.m"
      check_hlds__mode_info__mode_info_get_head_inst_vars_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__HeadInstVars_24);
    }
#line 589 "modecheck_util.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 589 "modecheck_util.m"
    {
#line 589 "modecheck_util.m"
      check_hlds__modecheck_util__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 589 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 0) = ((MR_Box) (&check_hlds__modecheck_util_scalar_common_3[0]));
#line 589 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 1) = ((MR_Box) (check_hlds__modecheck_util__modecheck_var_has_inst_list_exact_match_6_p_0_1));
#line 589 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 589 "modecheck_util.m"
      MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__V_30_30, 3) = ((MR_Box) (check_hlds__modecheck_util__HeadInstVars_24));
#line 589 "modecheck_util.m"
    }
#line 589 "modecheck_util.m"
    {
#line 589 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = mercury__map__foldl_4_p_3((MR_Word) &check_hlds__modecheck_util_scalar_common_1[0], (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_inst_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, check_hlds__modecheck_util__V_30_30, *check_hlds__modecheck_util__Subst_10, ((MR_Box) ((MR_Integer) 0)), &check_hlds__modecheck_util__conv0_V_25_25);
    }
#line 589 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 589 "modecheck_util.m"
      check_hlds__modecheck_util__succeeded = MR_TRUE;
#line 591 "modecheck_util.m"
    if (check_hlds__modecheck_util__succeeded)
#line 591 "modecheck_util.m"
      *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15;
#line 591 "modecheck_util.m"
    else
#line 592 "modecheck_util.m"
      {
#line 592 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__InstMap_26;
#line 592 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__VarInsts_27;
#line 592 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__WaitingVars_28;
#line 592 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__ModeError_29;

#line 592 "modecheck_util.m"
        {
#line 592 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_instmap_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, &check_hlds__modecheck_util__InstMap_26);
        }
#line 593 "modecheck_util.m"
        {
#line 593 "modecheck_util.m"
          hlds__instmap__instmap_lookup_vars_3_p_0(check_hlds__modecheck_util__InstMap_26, check_hlds__modecheck_util__Vars_7, &check_hlds__modecheck_util__VarInsts_27);
        }
#line 594 "modecheck_util.m"
        {
#line 594 "modecheck_util.m"
          check_hlds__modecheck_util__WaitingVars_28 = parse_tree__set_of_var__list_to_set_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__Vars_7);
        }
#line 595 "modecheck_util.m"
        {
#line 595 "modecheck_util.m"
          check_hlds__modecheck_util__ModeError_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 595 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 595 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 1) = ((MR_Box) (check_hlds__modecheck_util__Vars_7));
#line 595 "modecheck_util.m"
          MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_29, 2) = ((MR_Box) (check_hlds__modecheck_util__VarInsts_27));
#line 595 "modecheck_util.m"
        }
#line 596 "modecheck_util.m"
        {
#line 596 "modecheck_util.m"
          check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_28, check_hlds__modecheck_util__ModeError_29, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_15_15, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_13);
#line 596 "modecheck_util.m"
          return;
        }
#line 592 "modecheck_util.m"
      }
#line 472 "modecheck_util.m"
  }
#line 89 "modecheck_util.m"
}

#line 80 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_no_exact_match_5_p_0(
#line 80 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 80 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 80 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 80 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4,
#line 80 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5)
#line 80 "modecheck_util.m"
{
#line 415 "modecheck_util.m"
  while (MR_TRUE)
#line 415 "modecheck_util.m"
    {
#line 415 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 415 "modecheck_util.m"
      {
#line 415 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 415 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 419 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4;
#line 415 "modecheck_util.m"
          else
#line 417 "modecheck_util.m"
            {
#line 418 "modecheck_util.m"
              {
#line 418 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
#line 418 "modecheck_util.m"
                return;
              }
#line 417 "modecheck_util.m"
            }
#line 415 "modecheck_util.m"
        else
#line 415 "modecheck_util.m"
          {
#line 415 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 415 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 415 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 415 "modecheck_util.m"
              {
#line 416 "modecheck_util.m"
                {
#line 416 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_no_exact_match\'/5", (MR_String) "length mismatch");
#line 416 "modecheck_util.m"
                  return;
                }
#line 415 "modecheck_util.m"
              }
#line 415 "modecheck_util.m"
            else
#line 421 "modecheck_util.m"
              {
#line 421 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLive_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 421 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLives_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 421 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_34 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 421 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 421 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;
#line 421 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarIsLive_48;

#line 423 "modecheck_util.m"
                {
#line 423 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_34, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38);
                }
#line 442 "modecheck_util.m"
                {
#line 442 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_util__V_42_42, &check_hlds__modecheck_util__VarIsLive_48);
                }
#line 444 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__IsLive_30 == (MR_Integer) 1);
#line 444 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 445 "modecheck_util.m"
                  check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__VarIsLive_48 == (MR_Integer) 0);
#line 450 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 447 "modecheck_util.m"
                  {
#line 447 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_49;
#line 447 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_50;

#line 447 "modecheck_util.m"
                    {
#line 447 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_42_42);
                    }
#line 448 "modecheck_util.m"
                    {
#line 448 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 448 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 448 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
#line 448 "modecheck_util.m"
                    }
#line 449 "modecheck_util.m"
                    {
#line 449 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_49, check_hlds__modecheck_util__ModeError_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39);
                    }
#line 447 "modecheck_util.m"
                  }
#line 450 "modecheck_util.m"
                else
#line 450 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 425 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 425 "modecheck_util.m"
                {
#line 425 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_41_41;
#line 425 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__IsLives_31;
#line 425 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_34;
#line 425 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;

#line 425 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 425 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 425 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 425 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 425 "modecheck_util.m"
                }
#line 425 "modecheck_util.m"
                continue;
#line 421 "modecheck_util.m"
              }
#line 415 "modecheck_util.m"
          }
#line 415 "modecheck_util.m"
      }
#line 415 "modecheck_util.m"
      break;
#line 415 "modecheck_util.m"
    }
#line 80 "modecheck_util.m"
}

#line 78 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__modecheck_var_list_is_live_exact_match_5_p_0(
#line 78 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 78 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 78 "modecheck_util.m"
  MR_Integer check_hlds__modecheck_util__HeadVar__3_3,
#line 78 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4,
#line 78 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5)
#line 78 "modecheck_util.m"
{
#line 403 "modecheck_util.m"
  while (MR_TRUE)
#line 403 "modecheck_util.m"
    {
#line 403 "modecheck_util.m"
      /* tailcall optimized into a loop */
#line 403 "modecheck_util.m"
      {
#line 403 "modecheck_util.m"
        MR_bool check_hlds__modecheck_util__succeeded;

#line 403 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "modecheck_util.m"
          if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_5 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4;
#line 403 "modecheck_util.m"
          else
#line 405 "modecheck_util.m"
            {
#line 406 "modecheck_util.m"
              {
#line 406 "modecheck_util.m"
                mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
#line 406 "modecheck_util.m"
                return;
              }
#line 405 "modecheck_util.m"
            }
#line 403 "modecheck_util.m"
        else
#line 403 "modecheck_util.m"
          {
#line 403 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 403 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 403 "modecheck_util.m"
            if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 403 "modecheck_util.m"
              {
#line 404 "modecheck_util.m"
                {
#line 404 "modecheck_util.m"
                  mercury__require__unexpected_3_p_0((MR_String) "check_hlds.modecheck_util", (MR_String) "predicate \140check_hlds.modecheck_util.modecheck_var_list_is_live_exact_match\'/5", (MR_String) "length mismatch");
#line 404 "modecheck_util.m"
                  return;
                }
#line 403 "modecheck_util.m"
              }
#line 403 "modecheck_util.m"
            else
#line 409 "modecheck_util.m"
              {
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLive_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__IsLives_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 409 "modecheck_util.m"
                MR_Integer check_hlds__modecheck_util__ArgNum_34 = (check_hlds__modecheck_util__HeadVar__3_3 + (MR_Integer) 1);
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;
#line 409 "modecheck_util.m"
                MR_Word check_hlds__modecheck_util__VarIsLive_48;

#line 411 "modecheck_util.m"
                {
#line 411 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_set_call_arg_context_3_p_0(check_hlds__modecheck_util__ArgNum_34, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38);
                }
#line 460 "modecheck_util.m"
                {
#line 460 "modecheck_util.m"
                  check_hlds__mode_info__mode_info_var_is_live_3_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, check_hlds__modecheck_util__V_42_42, &check_hlds__modecheck_util__VarIsLive_48);
                }
#line 461 "modecheck_util.m"
                check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__VarIsLive_48 == check_hlds__modecheck_util__IsLive_30);
#line 463 "modecheck_util.m"
                if (check_hlds__modecheck_util__succeeded)
#line 463 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38;
#line 463 "modecheck_util.m"
                else
#line 464 "modecheck_util.m"
                  {
#line 464 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__WaitingVars_49;
#line 464 "modecheck_util.m"
                    MR_Word check_hlds__modecheck_util__ModeError_50;

#line 464 "modecheck_util.m"
                    {
#line 464 "modecheck_util.m"
                      check_hlds__modecheck_util__WaitingVars_49 = parse_tree__set_of_var__make_singleton_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, check_hlds__modecheck_util__V_42_42);
                    }
#line 465 "modecheck_util.m"
                    {
#line 465 "modecheck_util.m"
                      check_hlds__modecheck_util__ModeError_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 465 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 465 "modecheck_util.m"
                      MR_hl_field(MR_mktag(3), check_hlds__modecheck_util__ModeError_50, 1) = ((MR_Box) (check_hlds__modecheck_util__V_42_42));
#line 465 "modecheck_util.m"
                    }
#line 466 "modecheck_util.m"
                    {
#line 466 "modecheck_util.m"
                      check_hlds__mode_info__mode_info_error_4_p_0(check_hlds__modecheck_util__WaitingVars_49, check_hlds__modecheck_util__ModeError_50, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_38_38, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39);
                    }
#line 464 "modecheck_util.m"
                  }
#line 413 "modecheck_util.m"
                /* direct tailcall eliminated */
#line 413 "modecheck_util.m"
                {
#line 413 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__1__tmp_copy_1 = check_hlds__modecheck_util__V_41_41;
#line 413 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__HeadVar__2__tmp_copy_2 = check_hlds__modecheck_util__IsLives_31;
#line 413 "modecheck_util.m"
                  MR_Integer check_hlds__modecheck_util__HeadVar__3__tmp_copy_3 = check_hlds__modecheck_util__ArgNum_34;
#line 413 "modecheck_util.m"
                  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_39_39;

#line 413 "modecheck_util.m"
                  check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_4 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0__tmp_copy_4;
#line 413 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__3__tmp_copy_3;
#line 413 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__2_2 = check_hlds__modecheck_util__HeadVar__2__tmp_copy_2;
#line 413 "modecheck_util.m"
                  check_hlds__modecheck_util__HeadVar__1_1 = check_hlds__modecheck_util__HeadVar__1__tmp_copy_1;
#line 413 "modecheck_util.m"
                }
#line 413 "modecheck_util.m"
                continue;
#line 409 "modecheck_util.m"
              }
#line 403 "modecheck_util.m"
          }
#line 403 "modecheck_util.m"
      }
#line 403 "modecheck_util.m"
      break;
#line 403 "modecheck_util.m"
    }
#line 78 "modecheck_util.m"
}

#line 72 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__compute_arg_offset_2_p_0(
#line 72 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__PredInfo_3,
#line 72 "modecheck_util.m"
  MR_Integer * check_hlds__modecheck_util__ArgOffset_4)
#line 72 "modecheck_util.m"
{
#line 395 "modecheck_util.m"
  {
#line 395 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;
#line 395 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__OrigArity_5;
#line 395 "modecheck_util.m"
    MR_Word check_hlds__modecheck_util__ArgTypes_6;
#line 395 "modecheck_util.m"
    MR_Integer check_hlds__modecheck_util__CurrentArity_7;

#line 396 "modecheck_util.m"
    {
#line 396 "modecheck_util.m"
      check_hlds__modecheck_util__OrigArity_5 = hlds__hlds_pred__pred_info_orig_arity_1_f_0(check_hlds__modecheck_util__PredInfo_3);
    }
#line 397 "modecheck_util.m"
    {
#line 397 "modecheck_util.m"
      hlds__hlds_pred__pred_info_get_arg_types_2_p_0(check_hlds__modecheck_util__PredInfo_3, &check_hlds__modecheck_util__ArgTypes_6);
    }
#line 398 "modecheck_util.m"
    {
#line 398 "modecheck_util.m"
      mercury__list__length_2_p_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_mer_type_0, check_hlds__modecheck_util__ArgTypes_6, &check_hlds__modecheck_util__CurrentArity_7);
    }
#line 399 "modecheck_util.m"
    *check_hlds__modecheck_util__ArgOffset_4 = (check_hlds__modecheck_util__OrigArity_5 - check_hlds__modecheck_util__CurrentArity_7);
#line 395 "modecheck_util.m"
  }
#line 72 "modecheck_util.m"
}

#line 60 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__handle_extra_goals_9_p_0(
#line 60 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__MainGoal_1,
#line 60 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 60 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__3_3,
#line 60 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__4_4,
#line 60 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__5_5,
#line 60 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__6_6,
#line 60 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__7_7,
#line 60 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8,
#line 60 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9)
#line 60 "modecheck_util.m"
{
#line 233 "modecheck_util.m"
  {
#line 233 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 233 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 233 "modecheck_util.m"
      {
#line 234 "modecheck_util.m"
        *check_hlds__modecheck_util__HeadVar__7_7 = check_hlds__modecheck_util__MainGoal_1;
#line 234 "modecheck_util.m"
        *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 233 "modecheck_util.m"
      }
#line 233 "modecheck_util.m"
    else
#line 236 "modecheck_util.m"
      {
#line 236 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__BeforeGoals0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__AfterGoals0_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__Errors_27;

#line 237 "modecheck_util.m"
        {
#line 237 "modecheck_util.m"
          check_hlds__mode_info__mode_info_get_errors_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__Errors_27);
        }
#line 241 "modecheck_util.m"
        {
#line 241 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = hlds__instmap__instmap_is_reachable_1_p_0(check_hlds__modecheck_util__HeadVar__6_6);
        }
#line 241 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 245 "modecheck_util.m"
          check_hlds__modecheck_util__succeeded = (check_hlds__modecheck_util__Errors_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 305 "modecheck_util.m"
        if (check_hlds__modecheck_util__succeeded)
#line 260 "modecheck_util.m"
          {
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__TypeCtorInfo_57_57;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NonLocals0_28;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__OldArgVars_29;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NewArgVars_30;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__IntroducedVars_31;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__OutsideVars_32;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__NonLocals_33;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalInfo_34;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Goal0_35;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__Context_36;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals_37;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals_38;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalList0_39;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__MayChangeCalledProc0_40;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__GoalList_41;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__V_44_44;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52;
#line 260 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55;

#line 260 "modecheck_util.m"
            {
#line 260 "modecheck_util.m"
              check_hlds__modecheck_util__NonLocals0_28 = hlds__hlds_goal__goal_info_get_nonlocals_1_f_0(check_hlds__modecheck_util__HeadVar__3_3);
            }
#line 7137 "check_hlds.modecheck_util.c"
            check_hlds__modecheck_util__TypeCtorInfo_57_57 = (MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0;
#line 261 "modecheck_util.m"
            {
#line 261 "modecheck_util.m"
              parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__HeadVar__4_4, &check_hlds__modecheck_util__OldArgVars_29);
            }
#line 262 "modecheck_util.m"
            {
#line 262 "modecheck_util.m"
              parse_tree__set_of_var__list_to_set_2_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__HeadVar__5_5, &check_hlds__modecheck_util__NewArgVars_30);
            }
#line 263 "modecheck_util.m"
            {
#line 263 "modecheck_util.m"
              parse_tree__set_of_var__difference_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__NewArgVars_30, check_hlds__modecheck_util__OldArgVars_29, &check_hlds__modecheck_util__IntroducedVars_31);
            }
#line 264 "modecheck_util.m"
            {
#line 264 "modecheck_util.m"
              parse_tree__set_of_var__union_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__NonLocals0_28, check_hlds__modecheck_util__IntroducedVars_31, &check_hlds__modecheck_util__OutsideVars_32);
            }
#line 265 "modecheck_util.m"
            {
#line 265 "modecheck_util.m"
              parse_tree__set_of_var__intersect_3_p_0(check_hlds__modecheck_util__TypeCtorInfo_57_57, check_hlds__modecheck_util__OutsideVars_32, check_hlds__modecheck_util__NewArgVars_30, &check_hlds__modecheck_util__NonLocals_33);
            }
#line 266 "modecheck_util.m"
            {
#line 266 "modecheck_util.m"
              hlds__hlds_goal__goal_info_set_nonlocals_3_p_0(check_hlds__modecheck_util__NonLocals_33, check_hlds__modecheck_util__HeadVar__3_3, &check_hlds__modecheck_util__GoalInfo_34);
            }
#line 269 "modecheck_util.m"
            {
#line 269 "modecheck_util.m"
              check_hlds__modecheck_util__Goal0_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 269 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_35, 0) = ((MR_Box) (check_hlds__modecheck_util__MainGoal_1));
#line 269 "modecheck_util.m"
              MR_hl_field(MR_mktag(0), check_hlds__modecheck_util__Goal0_35, 1) = ((MR_Box) (check_hlds__modecheck_util__GoalInfo_34));
#line 269 "modecheck_util.m"
            }
#line 270 "modecheck_util.m"
            {
#line 270 "modecheck_util.m"
              check_hlds__modecheck_util__Context_36 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__modecheck_util__HeadVar__3_3);
            }
#line 271 "modecheck_util.m"
            {
#line 271 "modecheck_util.m"
              check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__BeforeGoals0_19, check_hlds__modecheck_util__Context_36, &check_hlds__modecheck_util__BeforeGoals_37);
            }
#line 272 "modecheck_util.m"
            {
#line 272 "modecheck_util.m"
              check_hlds__modecheck_util__handle_extra_goals_contexts_3_p_0(check_hlds__modecheck_util__AfterGoals0_20, check_hlds__modecheck_util__Context_36, &check_hlds__modecheck_util__AfterGoals_38);
            }
#line 273 "modecheck_util.m"
            {
#line 273 "modecheck_util.m"
              check_hlds__modecheck_util__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 273 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_44_44, 0) = ((MR_Box) (check_hlds__modecheck_util__Goal0_35));
#line 273 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__V_44_44, 1) = ((MR_Box) (check_hlds__modecheck_util__AfterGoals_38));
#line 273 "modecheck_util.m"
            }
#line 273 "modecheck_util.m"
            {
#line 273 "modecheck_util.m"
              check_hlds__modecheck_util__GoalList0_39 = mercury__list__f_43_43_2_f_0((MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0, check_hlds__modecheck_util__BeforeGoals_37, check_hlds__modecheck_util__V_44_44);
            }
#line 275 "modecheck_util.m"
            {
#line 275 "modecheck_util.m"
              check_hlds__mode_info__mode_info_get_may_change_called_proc_2_p_0(check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__MayChangeCalledProc0_40);
            }
#line 279 "modecheck_util.m"
            {
#line 279 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 1, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46);
            }
#line 283 "modecheck_util.m"
            {
#line 283 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0((MR_Integer) 1, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_46_46, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48);
            }
#line 286 "modecheck_util.m"
            {
#line 286 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_instmap_3_p_0(check_hlds__modecheck_util__HeadVar__6_6, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_48_48, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49);
            }
#line 300 "modecheck_util.m"
            {
#line 300 "modecheck_util.m"
              check_hlds__modecheck_util__mode_info_add_goals_live_vars_4_p_0((MR_Integer) 0, check_hlds__modecheck_util__GoalList0_39, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_49_49, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51);
            }
#line 301 "modecheck_util.m"
            {
#line 301 "modecheck_util.m"
              check_hlds__modecheck_util__modecheck_conj_list_no_delay_4_p_0(check_hlds__modecheck_util__GoalList0_39, &check_hlds__modecheck_util__GoalList_41, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_51_51, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52);
            }
#line 302 "modecheck_util.m"
            {
#line 302 "modecheck_util.m"
              MR_Word base;
#line 302 "modecheck_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 302 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__7_7 = base;
#line 302 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 302 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 302 "modecheck_util.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (check_hlds__modecheck_util__GoalList_41));
#line 302 "modecheck_util.m"
            }
#line 303 "modecheck_util.m"
            {
#line 303 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_checking_extra_goals_3_p_0((MR_Integer) 0, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_52_52, &check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55);
            }
#line 304 "modecheck_util.m"
            {
#line 304 "modecheck_util.m"
              check_hlds__mode_info__mode_info_set_may_change_called_proc_3_p_0(check_hlds__modecheck_util__MayChangeCalledProc0_40, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_55_55, check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9);
#line 304 "modecheck_util.m"
              return;
            }
#line 260 "modecheck_util.m"
          }
#line 305 "modecheck_util.m"
        else
#line 306 "modecheck_util.m"
          {
#line 306 "modecheck_util.m"
            *check_hlds__modecheck_util__HeadVar__7_7 = check_hlds__modecheck_util__MainGoal_1;
#line 306 "modecheck_util.m"
            *check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_9 = check_hlds__modecheck_util__STATE_VARIABLE_ModeInfo_0_8;
#line 306 "modecheck_util.m"
          }
#line 236 "modecheck_util.m"
      }
#line 233 "modecheck_util.m"
  }
#line 60 "modecheck_util.m"
}

#line 53 "modecheck_util.m"
void MR_CALL 
check_hlds__modecheck_util__append_extra_goals_3_p_0(
#line 53 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__1_1,
#line 53 "modecheck_util.m"
  MR_Word check_hlds__modecheck_util__HeadVar__2_2,
#line 53 "modecheck_util.m"
  MR_Word * check_hlds__modecheck_util__HeadVar__3_3)
#line 53 "modecheck_util.m"
{
#line 224 "modecheck_util.m"
  {
#line 224 "modecheck_util.m"
    MR_bool check_hlds__modecheck_util__succeeded;

#line 224 "modecheck_util.m"
    if ((check_hlds__modecheck_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 224 "modecheck_util.m"
      *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__2_2;
#line 224 "modecheck_util.m"
    else
#line 224 "modecheck_util.m"
      {
#line 224 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 1)));
#line 224 "modecheck_util.m"
        MR_Word check_hlds__modecheck_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__1_1, (MR_Integer) 0)));

#line 224 "modecheck_util.m"
        if ((check_hlds__modecheck_util__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 226 "modecheck_util.m"
          *check_hlds__modecheck_util__HeadVar__3_3 = check_hlds__modecheck_util__HeadVar__1_1;
#line 224 "modecheck_util.m"
        else
#line 229 "modecheck_util.m"
          {
#line 229 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_goal__hlds__hlds_goal__type_ctor_info_hlds_goal_0;
#line 229 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__modecheck_util__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__BeforeGoals_11;
#line 229 "modecheck_util.m"
            MR_Word check_hlds__modecheck_util__AfterGoals_12;

#line 230 "modecheck_util.m"
            {
#line 230 "modecheck_util.m"
              check_hlds__modecheck_util__BeforeGoals_11 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_util__TypeCtorInfo_13_13, check_hlds__modecheck_util__V_15_15, check_hlds__modecheck_util__BeforeGoals1_9);
            }
#line 231 "modecheck_util.m"
            {
#line 231 "modecheck_util.m"
              check_hlds__modecheck_util__AfterGoals_12 = mercury__list__f_43_43_2_f_0(check_hlds__modecheck_util__TypeCtorInfo_13_13, check_hlds__modecheck_util__V_14_14, check_hlds__modecheck_util__AfterGoals1_10);
            }
#line 229 "modecheck_util.m"
            {
#line 229 "modecheck_util.m"
              MR_Word base;
#line 229 "modecheck_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "modecheck_util.m"
              *check_hlds__modecheck_util__HeadVar__3_3 = base;
#line 229 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__modecheck_util__BeforeGoals_11));
#line 229 "modecheck_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__modecheck_util__AfterGoals_12));
#line 229 "modecheck_util.m"
            }
#line 229 "modecheck_util.m"
          }
#line 224 "modecheck_util.m"
      }
#line 224 "modecheck_util.m"
  }
#line 53 "modecheck_util.m"
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
