/*
** Automatically generated from `stratify.m'
** by the Mercury compiler,
** version rotd-2013-03-21, configured for x86_64-apple-darwin12.2.1.
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


/* :- module check_hlds.stratify. */
/* :- implementation. */

/*
INIT mercury__check_hlds__stratify__init
ENDINIT
*/

#include "check_hlds.stratify.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.mode_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_error_util.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 134 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 137 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 140 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0;

#line 143 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1;

#line 146 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0[2];

#line 149 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2];

#line 152 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2];

#line 155 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0;

#line 158 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1;

#line 161 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0[2];

#line 164 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0[2];

#line 167 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2];

#line 170 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0;

#line 173 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1;

#line 176 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2;

#line 179 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3;

#line 182 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0[4];

#line 185 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4];

#line 188 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4];

#line 191 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0;

#line 194 "check_hlds.stratify.c"
static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2];

#line 197 "check_hlds.stratify.c"
static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0;

#line 200 "check_hlds.stratify.c"
static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1];

#line 203 "check_hlds.stratify.c"
static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1];

#line 206 "check_hlds.stratify.c"
static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1];

#line 209 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1];

#line 212 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
#line 215 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 217 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 220 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
#line 223 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 225 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 227 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 230 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
#line 233 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 235 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 238 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
#line 241 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 243 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 245 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 248 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
#line 251 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 253 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 256 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
#line 259 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 261 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 263 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 266 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
#line 269 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 271 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 274 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
#line 277 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 279 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 281 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 284 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
#line 287 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 289 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 292 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
#line 295 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 297 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 299 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 302 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
#line 305 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 307 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 310 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
#line 313 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 315 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 317 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 469 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
#line 469 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 469 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 469 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 469 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
#line 469 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 469 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 480 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
#line 480 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 480 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 480 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 480 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
#line 480 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 480 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 461 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
#line 461 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 461 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 461 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 461 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
#line 461 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 461 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 1014 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
#line 1014 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 1014 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 1014 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 1014 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
#line 1014 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 1014 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 749 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
#line 749 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 749 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 749 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 749 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
#line 749 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 749 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 483 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
#line 483 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 483 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 1018 "stratify.m"
static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
#line 1018 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_7,
#line 1018 "stratify.m"
  MR_Word check_hlds__stratify__PPId_8,
#line 1018 "stratify.m"
  MR_Word check_hlds__stratify__Context_9,
#line 1018 "stratify.m"
  MR_String check_hlds__stratify__Message_10,
#line 1018 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_11);

#line 263 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__Negated_2,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_3,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_4,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_6,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
#line 263 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8);

#line 251 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__Negated_2,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_3,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_4,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_6,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
#line 251 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8);

#line 166 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__Goal_9,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__Negated_10,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_11,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_12,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_13,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_14,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_66,
#line 166 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_67);

#line 149 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_scc_2_6_p_0(
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_3,
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_4,
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
#line 149 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6);

#line 121 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__StratifiedPreds_2,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__Warn0_3,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_4,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
#line 121 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6);

#line 115 "stratify.m"
static void MR_CALL 
check_hlds__stratify__get_proc_id_2_p_0(
#line 115 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 115 "stratify.m"
  MR_Word * check_hlds__stratify__PredId_3);

#line 110 "stratify.m"
static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1(
#line 110 "stratify.m"
  MR_Box check_hlds__stratify__closure_arg,
#line 110 "stratify.m"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 110 "stratify.m"
  MR_Box * check_hlds__stratify__wrapper_arg_2);

#line 103 "stratify.m"
static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(
#line 103 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 103 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0_2,
#line 103 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepList_3);


static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[17][2];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[1][5];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_4[1][1];




static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "bottom-up evaluation of the predicate/function."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "itself negatively. This can cause problems for"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "of the given predicate/function that allows it to call"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "A non-stratified loop is a loop in the call graph"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__stratify_scalar_common_4[0]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_2[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__stratify_scalar_common_1[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&check_hlds__stratify_scalar_common_3[0])),
    ((MR_Box) (check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0))
  },
};

static /* final */ const MR_Box check_hlds__stratify_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[11])))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 718 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 726 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 735 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_call_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____call_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____call_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "call_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 756 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0 = {
  (MR_String) "does_not_calls_higher_order",
  (MR_Integer) 0
};

#line 762 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1 = {
  (MR_String) "calls_higher_order",
  (MR_Integer) 1
};

#line 768 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1
};

#line 774 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0
};

#line 780 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 786 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_calls_higher_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____calls_higher_order_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____calls_higher_order_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "calls_higher_order",
  {
    check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0
  },
  {
    check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0
};

#line 807 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0 = {
  (MR_String) "is_error",
  (MR_Integer) 0
};

#line 813 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1 = {
  (MR_String) "is_warning",
  (MR_Integer) 1
};

#line 819 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

#line 825 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

#line 831 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 837 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_error_or_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____error_or_warning_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____error_or_warning_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "error_or_warning",
  {
    check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0
  },
  {
    check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0
};

#line 858 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0 = {
  (MR_String) "ho_in",
  (MR_Integer) 0
};

#line 864 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1 = {
  (MR_String) "ho_out",
  (MR_Integer) 1
};

#line 870 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2 = {
  (MR_String) "ho_in_out",
  (MR_Integer) 2
};

#line 876 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3 = {
  (MR_String) "ho_none",
  (MR_Integer) 3
};

#line 882 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0[4] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3
};

#line 890 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1
};

#line 898 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 906 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____ho_in_out_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_in_out_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_in_out",
  {
    check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0
  },
  {
    check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0
};

#line 927 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0
  }
};

#line 936 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____ho_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 957 "check_hlds.stratify.c"
static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0
};

#line 963 "check_hlds.stratify.c"
static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0 = {
  (MR_String) "strat_ho_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 978 "check_hlds.stratify.c"
static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

#line 983 "check_hlds.stratify.c"
static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0
  }
};

#line 992 "check_hlds.stratify.c"
static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

#line 997 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1] = {
  (MR_Integer) 0
};

#line 1002 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__stratify____Unify____strat_ho_info_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____strat_ho_info_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "strat_ho_info",
  {
    check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0
  },
  {
    check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0
};

#line 1023 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
#line 1026 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1028 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1030 "check_hlds.stratify.c"
{
#line 1032 "check_hlds.stratify.c"
  {
#line 1034 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1037 "check_hlds.stratify.c"
    {
#line 1039 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____call_map_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1042 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1044 "check_hlds.stratify.c"
  }
#line 1046 "check_hlds.stratify.c"
}

#line 1049 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
#line 1052 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1054 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1056 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1058 "check_hlds.stratify.c"
{
#line 1060 "check_hlds.stratify.c"
  {
#line 1062 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1065 "check_hlds.stratify.c"
    {
#line 1067 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____call_map_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1070 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1072 "check_hlds.stratify.c"
  }
#line 1074 "check_hlds.stratify.c"
}

#line 1077 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
#line 1080 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1082 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1084 "check_hlds.stratify.c"
{
#line 1086 "check_hlds.stratify.c"
  {
#line 1088 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1091 "check_hlds.stratify.c"
    {
#line 1093 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____calls_higher_order_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1096 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1098 "check_hlds.stratify.c"
  }
#line 1100 "check_hlds.stratify.c"
}

#line 1103 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
#line 1106 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1108 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1110 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1112 "check_hlds.stratify.c"
{
#line 1114 "check_hlds.stratify.c"
  {
#line 1116 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1119 "check_hlds.stratify.c"
    {
#line 1121 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____calls_higher_order_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1124 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1126 "check_hlds.stratify.c"
  }
#line 1128 "check_hlds.stratify.c"
}

#line 1131 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
#line 1134 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1136 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1138 "check_hlds.stratify.c"
{
#line 1140 "check_hlds.stratify.c"
  {
#line 1142 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1145 "check_hlds.stratify.c"
    {
#line 1147 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____error_or_warning_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1150 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1152 "check_hlds.stratify.c"
  }
#line 1154 "check_hlds.stratify.c"
}

#line 1157 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
#line 1160 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1162 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1164 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1166 "check_hlds.stratify.c"
{
#line 1168 "check_hlds.stratify.c"
  {
#line 1170 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1173 "check_hlds.stratify.c"
    {
#line 1175 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____error_or_warning_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1178 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1180 "check_hlds.stratify.c"
  }
#line 1182 "check_hlds.stratify.c"
}

#line 1185 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
#line 1188 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1190 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1192 "check_hlds.stratify.c"
{
#line 1194 "check_hlds.stratify.c"
  {
#line 1196 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1199 "check_hlds.stratify.c"
    {
#line 1201 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____ho_in_out_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1204 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1206 "check_hlds.stratify.c"
  }
#line 1208 "check_hlds.stratify.c"
}

#line 1211 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
#line 1214 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1216 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1218 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1220 "check_hlds.stratify.c"
{
#line 1222 "check_hlds.stratify.c"
  {
#line 1224 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1227 "check_hlds.stratify.c"
    {
#line 1229 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____ho_in_out_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1232 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1234 "check_hlds.stratify.c"
  }
#line 1236 "check_hlds.stratify.c"
}

#line 1239 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
#line 1242 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1244 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1246 "check_hlds.stratify.c"
{
#line 1248 "check_hlds.stratify.c"
  {
#line 1250 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1253 "check_hlds.stratify.c"
    {
#line 1255 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____ho_map_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1258 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1260 "check_hlds.stratify.c"
  }
#line 1262 "check_hlds.stratify.c"
}

#line 1265 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
#line 1268 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1270 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1272 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1274 "check_hlds.stratify.c"
{
#line 1276 "check_hlds.stratify.c"
  {
#line 1278 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1281 "check_hlds.stratify.c"
    {
#line 1283 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____ho_map_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1286 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1288 "check_hlds.stratify.c"
  }
#line 1290 "check_hlds.stratify.c"
}

#line 1293 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
#line 1296 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1298 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1300 "check_hlds.stratify.c"
{
#line 1302 "check_hlds.stratify.c"
  {
#line 1304 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1307 "check_hlds.stratify.c"
    {
#line 1309 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____strat_ho_info_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1312 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1314 "check_hlds.stratify.c"
  }
#line 1316 "check_hlds.stratify.c"
}

#line 1319 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
#line 1322 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1324 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1326 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1328 "check_hlds.stratify.c"
{
#line 1330 "check_hlds.stratify.c"
  {
#line 1332 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1335 "check_hlds.stratify.c"
    {
#line 1337 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____strat_ho_info_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1340 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1342 "check_hlds.stratify.c"
  }
#line 1344 "check_hlds.stratify.c"
}

#line 469 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
#line 469 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 469 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 469 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 469 "stratify.m"
{
#line 469 "stratify.m"
  {
#line 469 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 469 "stratify.m"
    MR_Integer check_hlds__stratify__CastX_9 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
#line 469 "stratify.m"
    MR_Integer check_hlds__stratify__CastY_10 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

#line 469 "stratify.m"
    check_hlds__stratify__succeeded = (check_hlds__stratify__CastX_9 == check_hlds__stratify__CastY_10);
#line 469 "stratify.m"
    if (check_hlds__stratify__succeeded)
#line 1371 "check_hlds.stratify.c"
      *check_hlds__stratify__HeadVar__1_1 = (MR_Integer) 0;
#line 469 "stratify.m"
    else
#line 469 "stratify.m"
      {
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__3_3, (MR_Integer) 0)));
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__3_3, (MR_Integer) 1)));
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_8_8;

#line 469 "stratify.m"
        {
#line 469 "stratify.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], &check_hlds__stratify__V_8_8, ((MR_Box) (check_hlds__stratify__V_4_4)), ((MR_Box) (check_hlds__stratify__V_6_6)));
        }
#line 1393 "check_hlds.stratify.c"
        check_hlds__stratify__succeeded = (check_hlds__stratify__V_8_8 == (MR_Integer) 0);
#line 469 "stratify.m"
        check_hlds__stratify__succeeded = !(check_hlds__stratify__succeeded);
#line 469 "stratify.m"
        if (check_hlds__stratify__succeeded)
#line 469 "stratify.m"
          *check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__V_8_8;
#line 469 "stratify.m"
        else
#line 469 "stratify.m"
          {
#line 469 "stratify.m"
            MR_Integer check_hlds__stratify__V_13_13 = (MR_Integer) check_hlds__stratify__V_5_5;
#line 469 "stratify.m"
            MR_Integer check_hlds__stratify__V_14_14 = (MR_Integer) check_hlds__stratify__V_7_7;

#line 469 "stratify.m"
            {
#line 469 "stratify.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__V_13_13, check_hlds__stratify__V_14_14);
#line 469 "stratify.m"
              return;
            }
#line 469 "stratify.m"
          }
#line 469 "stratify.m"
      }
#line 469 "stratify.m"
  }
#line 469 "stratify.m"
}

#line 469 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
#line 469 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 469 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 469 "stratify.m"
{
#line 469 "stratify.m"
  {
#line 469 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 469 "stratify.m"
    MR_Integer check_hlds__stratify__CastX_7 = (MR_Integer) check_hlds__stratify__HeadVar__1_1;
#line 469 "stratify.m"
    MR_Integer check_hlds__stratify__CastY_8 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;

#line 469 "stratify.m"
    check_hlds__stratify__succeeded = (check_hlds__stratify__CastX_7 == check_hlds__stratify__CastY_8);
#line 469 "stratify.m"
    if (check_hlds__stratify__succeeded)
#line 469 "stratify.m"
      check_hlds__stratify__succeeded = MR_TRUE;
#line 469 "stratify.m"
    else
#line 469 "stratify.m"
      {
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
#line 469 "stratify.m"
        MR_Word check_hlds__stratify__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));

#line 1463 "check_hlds.stratify.c"
        {
#line 1465 "check_hlds.stratify.c"
          check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (check_hlds__stratify__V_3_3)), ((MR_Box) (check_hlds__stratify__V_5_5)));
        }
#line 469 "stratify.m"
        if (check_hlds__stratify__succeeded)
#line 1470 "check_hlds.stratify.c"
          check_hlds__stratify__succeeded = (check_hlds__stratify__V_4_4 == check_hlds__stratify__V_6_6);
#line 469 "stratify.m"
      }
#line 469 "stratify.m"
    return check_hlds__stratify__succeeded;
#line 469 "stratify.m"
  }
#line 469 "stratify.m"
}

#line 480 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
#line 480 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 480 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 480 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 480 "stratify.m"
{
#line 480 "stratify.m"
  {
#line 480 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 480 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar1_4 = check_hlds__stratify__HeadVar__2_2;
#line 480 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar2_5 = check_hlds__stratify__HeadVar__3_3;

#line 480 "stratify.m"
    {
#line 480 "stratify.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], check_hlds__stratify__HeadVar__1_1, ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_5)));
#line 480 "stratify.m"
      return;
    }
#line 480 "stratify.m"
  }
#line 480 "stratify.m"
}

#line 480 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
#line 480 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 480 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 480 "stratify.m"
{
#line 480 "stratify.m"
  {
#line 480 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 480 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar1_3 = check_hlds__stratify__HeadVar__1_1;
#line 480 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar2_4 = check_hlds__stratify__HeadVar__2_2;

#line 480 "stratify.m"
    {
#line 480 "stratify.m"
      return check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_4)));
    }
#line 480 "stratify.m"
    return check_hlds__stratify__succeeded;
#line 480 "stratify.m"
  }
#line 480 "stratify.m"
}

#line 461 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
#line 461 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 461 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 461 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 461 "stratify.m"
{
#line 461 "stratify.m"
  {
#line 461 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 461 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
#line 461 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

#line 461 "stratify.m"
    {
#line 461 "stratify.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
#line 461 "stratify.m"
      return;
    }
#line 461 "stratify.m"
  }
#line 461 "stratify.m"
}

#line 461 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
#line 461 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 461 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 461 "stratify.m"
{
#line 1584 "check_hlds.stratify.c"
  {
#line 1586 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

#line 1589 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1591 "check_hlds.stratify.c"
  }
#line 461 "stratify.m"
}

#line 1014 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
#line 1014 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 1014 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 1014 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 1014 "stratify.m"
{
#line 1014 "stratify.m"
  {
#line 1014 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 1014 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
#line 1014 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

#line 1014 "stratify.m"
    {
#line 1014 "stratify.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
#line 1014 "stratify.m"
      return;
    }
#line 1014 "stratify.m"
  }
#line 1014 "stratify.m"
}

#line 1014 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
#line 1014 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 1014 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 1014 "stratify.m"
{
#line 1637 "check_hlds.stratify.c"
  {
#line 1639 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

#line 1642 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1644 "check_hlds.stratify.c"
  }
#line 1014 "stratify.m"
}

#line 749 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
#line 749 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 749 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 749 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 749 "stratify.m"
{
#line 749 "stratify.m"
  {
#line 749 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 749 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
#line 749 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

#line 749 "stratify.m"
    {
#line 749 "stratify.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
#line 749 "stratify.m"
      return;
    }
#line 749 "stratify.m"
  }
#line 749 "stratify.m"
}

#line 749 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
#line 749 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 749 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 749 "stratify.m"
{
#line 1690 "check_hlds.stratify.c"
  {
#line 1692 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

#line 1695 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1697 "check_hlds.stratify.c"
  }
#line 749 "stratify.m"
}

#line 483 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
#line 483 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 483 "stratify.m"
{
#line 483 "stratify.m"
  {
#line 483 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 483 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar1_4 = check_hlds__stratify__HeadVar__2_2;
#line 483 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar2_5 = check_hlds__stratify__HeadVar__3_3;

#line 483 "stratify.m"
    {
#line 483 "stratify.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], check_hlds__stratify__HeadVar__1_1, ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_5)));
#line 483 "stratify.m"
      return;
    }
#line 483 "stratify.m"
  }
#line 483 "stratify.m"
}

#line 483 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 483 "stratify.m"
{
#line 483 "stratify.m"
  {
#line 483 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 483 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar1_3 = check_hlds__stratify__HeadVar__1_1;
#line 483 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar2_4 = check_hlds__stratify__HeadVar__2_2;

#line 483 "stratify.m"
    {
#line 483 "stratify.m"
      return check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_4)));
    }
#line 483 "stratify.m"
    return check_hlds__stratify__succeeded;
#line 483 "stratify.m"
  }
#line 483 "stratify.m"
}

#line 1018 "stratify.m"
static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
#line 1018 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_7,
#line 1018 "stratify.m"
  MR_Word check_hlds__stratify__PPId_8,
#line 1018 "stratify.m"
  MR_Word check_hlds__stratify__Context_9,
#line 1018 "stratify.m"
  MR_String check_hlds__stratify__Message_10,
#line 1018 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_11)
#line 1018 "stratify.m"
{
#line 1022 "stratify.m"
  {
#line 1022 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__Spec_12;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__TypeCtorInfo_62_62;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__PPIdDescription_13;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__Preamble_14;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__ErrOrWarnMsg_15;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__Severity_16;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__MainPieces_17;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__Msg_19;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__V_25_25;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__V_34_34;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__V_35_35;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__V_53_53;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__V_54_54;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__V_55_55;
#line 1022 "stratify.m"
    MR_Word check_hlds__stratify__V_60_60;

#line 1023 "stratify.m"
    {
#line 1023 "stratify.m"
      check_hlds__stratify__PPIdDescription_13 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__stratify__ModuleInfo_7, (MR_Integer) 1, check_hlds__stratify__PPId_8);
    }
#line 1819 "check_hlds.stratify.c"
    check_hlds__stratify__TypeCtorInfo_62_62 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1025 "stratify.m"
    {
#line 1025 "stratify.m"
      check_hlds__stratify__V_25_25 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_62_62, check_hlds__stratify__PPIdDescription_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[3]));
    }
#line 1025 "stratify.m"
    {
#line 1025 "stratify.m"
      check_hlds__stratify__Preamble_14 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_62_62, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[13]), check_hlds__stratify__V_25_25);
    }
#line 1030 "stratify.m"
    if ((check_hlds__stratify__ErrorOrWarning_11 == (MR_Integer) 0))
#line 1031 "stratify.m"
      {
#line 1032 "stratify.m"
        check_hlds__stratify__ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[14]);
#line 1033 "stratify.m"
        check_hlds__stratify__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1031 "stratify.m"
      }
#line 1030 "stratify.m"
    else
#line 1027 "stratify.m"
      {
#line 1028 "stratify.m"
        check_hlds__stratify__ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[15]);
#line 1029 "stratify.m"
        check_hlds__stratify__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1027 "stratify.m"
      }
#line 1035 "stratify.m"
    {
#line 1035 "stratify.m"
      check_hlds__stratify__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "stratify.m"
      MR_hl_field(MR_mktag(3), check_hlds__stratify__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1035 "stratify.m"
      MR_hl_field(MR_mktag(3), check_hlds__stratify__V_35_35, 1) = ((MR_Box) (check_hlds__stratify__Message_10));
#line 1035 "stratify.m"
    }
#line 1035 "stratify.m"
    {
#line 1035 "stratify.m"
      check_hlds__stratify__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_34_34, 0) = ((MR_Box) (check_hlds__stratify__V_35_35));
#line 1035 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])));
#line 1035 "stratify.m"
    }
#line 1035 "stratify.m"
    {
#line 1035 "stratify.m"
      check_hlds__stratify__MainPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1035 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__MainPieces_17, 0) = ((MR_Box) (check_hlds__stratify__ErrOrWarnMsg_15));
#line 1035 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__MainPieces_17, 1) = ((MR_Box) (check_hlds__stratify__V_34_34));
#line 1035 "stratify.m"
    }
#line 1042 "stratify.m"
    {
#line 1042 "stratify.m"
      check_hlds__stratify__V_55_55 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_62_62, check_hlds__stratify__Preamble_14, check_hlds__stratify__MainPieces_17);
    }
#line 1042 "stratify.m"
    {
#line 1042 "stratify.m"
      check_hlds__stratify__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1042 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__V_54_54, 0) = ((MR_Box) (check_hlds__stratify__V_55_55));
#line 1042 "stratify.m"
    }
#line 1041 "stratify.m"
    {
#line 1041 "stratify.m"
      check_hlds__stratify__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1041 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_53_53, 0) = ((MR_Box) (check_hlds__stratify__V_54_54));
#line 1041 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[16])));
#line 1041 "stratify.m"
    }
#line 1041 "stratify.m"
    {
#line 1041 "stratify.m"
      check_hlds__stratify__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1041 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Msg_19, 0) = ((MR_Box) (check_hlds__stratify__Context_9));
#line 1041 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Msg_19, 1) = ((MR_Box) (check_hlds__stratify__V_53_53));
#line 1041 "stratify.m"
    }
#line 1043 "stratify.m"
    {
#line 1043 "stratify.m"
      check_hlds__stratify__V_60_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_60_60, 0) = ((MR_Box) (check_hlds__stratify__Msg_19));
#line 1043 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_60_60, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1043 "stratify.m"
    }
#line 1043 "stratify.m"
    {
#line 1043 "stratify.m"
      check_hlds__stratify__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1043 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 0) = ((MR_Box) (check_hlds__stratify__Severity_16));
#line 1043 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14))));
#line 1043 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 2) = ((MR_Box) (check_hlds__stratify__V_60_60));
#line 1043 "stratify.m"
    }
#line 1022 "stratify.m"
    return check_hlds__stratify__Spec_12;
#line 1022 "stratify.m"
  }
#line 1018 "stratify.m"
}

#line 263 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__Negated_2,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_3,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_4,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_6,
#line 263 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
#line 263 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8)
#line 263 "stratify.m"
{
#line 267 "stratify.m"
  while (MR_TRUE)
#line 267 "stratify.m"
    {
#line 267 "stratify.m"
      /* tailcall optimized into a loop */
#line 267 "stratify.m"
      {
#line 267 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;

#line 267 "stratify.m"
        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 267 "stratify.m"
          *check_hlds__stratify__STATE_VARIABLE_Specs_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0_7;
#line 267 "stratify.m"
        else
#line 269 "stratify.m"
          {
#line 269 "stratify.m"
            MR_Word check_hlds__stratify__Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 269 "stratify.m"
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "stratify.m"
            MR_Word check_hlds__stratify__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 2)));
#line 269 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_30_30;
#line 270 "stratify.m"
            MR_Word check_hlds__stratify__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 0)));
#line 270 "stratify.m"
            MR_Word check_hlds__stratify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 1)));

#line 271 "stratify.m"
            {
#line 271 "stratify.m"
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_27, check_hlds__stratify__Negated_2, check_hlds__stratify__WholeScc_3, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__ErrorOrWarning_5, check_hlds__stratify__ModuleInfo_6, check_hlds__stratify__STATE_VARIABLE_Specs_0_7, &check_hlds__stratify__STATE_VARIABLE_Specs_30_30);
            }
#line 273 "stratify.m"
            /* direct tailcall eliminated */
#line 273 "stratify.m"
            {
#line 273 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
#line 273 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Specs_30_30;

#line 273 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_Specs_0_7 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 273 "stratify.m"
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
#line 273 "stratify.m"
            }
#line 273 "stratify.m"
            continue;
#line 269 "stratify.m"
          }
#line 267 "stratify.m"
      }
#line 267 "stratify.m"
      break;
#line 267 "stratify.m"
    }
#line 263 "stratify.m"
}

#line 251 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__Negated_2,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_3,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_4,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_6,
#line 251 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
#line 251 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8)
#line 251 "stratify.m"
{
#line 255 "stratify.m"
  while (MR_TRUE)
#line 255 "stratify.m"
    {
#line 255 "stratify.m"
      /* tailcall optimized into a loop */
#line 255 "stratify.m"
      {
#line 255 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;

#line 255 "stratify.m"
        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 255 "stratify.m"
          *check_hlds__stratify__STATE_VARIABLE_Specs_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0_7;
#line 255 "stratify.m"
        else
#line 257 "stratify.m"
          {
#line 257 "stratify.m"
            MR_Word check_hlds__stratify__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 257 "stratify.m"
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 257 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_27_27;

#line 258 "stratify.m"
            {
#line 258 "stratify.m"
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_17, check_hlds__stratify__Negated_2, check_hlds__stratify__WholeScc_3, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__ErrorOrWarning_5, check_hlds__stratify__ModuleInfo_6, check_hlds__stratify__STATE_VARIABLE_Specs_0_7, &check_hlds__stratify__STATE_VARIABLE_Specs_27_27);
            }
#line 260 "stratify.m"
            /* direct tailcall eliminated */
#line 260 "stratify.m"
            {
#line 260 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
#line 260 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Specs_27_27;

#line 260 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_Specs_0_7 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 260 "stratify.m"
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
#line 260 "stratify.m"
            }
#line 260 "stratify.m"
            continue;
#line 257 "stratify.m"
          }
#line 255 "stratify.m"
      }
#line 255 "stratify.m"
      break;
#line 255 "stratify.m"
    }
#line 251 "stratify.m"
}

#line 166 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__Goal_9,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__Negated_10,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_11,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_12,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_13,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_14,
#line 166 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_66,
#line 166 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_67)
#line 166 "stratify.m"
{
#line 171 "stratify.m"
  while (MR_TRUE)
#line 171 "stratify.m"
    {
#line 171 "stratify.m"
      /* tailcall optimized into a loop */
#line 171 "stratify.m"
      {
#line 171 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;
#line 171 "stratify.m"
        MR_Word check_hlds__stratify__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_9, (MR_Integer) 0)));
#line 171 "stratify.m"
        MR_Word check_hlds__stratify__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_9, (MR_Integer) 1)));

#line 179 "stratify.m"
        if (((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 0))))
#line 192 "stratify.m"
          {
#line 192 "stratify.m"
            MR_Word check_hlds__stratify__SubGoal_27 = (MR_Word) MR_body(((MR_Word) check_hlds__stratify__GoalExpr_16), (MR_Integer) 0);

#line 193 "stratify.m"
            /* direct tailcall eliminated */
#line 193 "stratify.m"
            {
#line 193 "stratify.m"
              MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_27;

#line 193 "stratify.m"
              check_hlds__stratify__Negated_10 = (MR_Integer) 1;
#line 193 "stratify.m"
              check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
#line 193 "stratify.m"
            }
#line 193 "stratify.m"
            continue;
#line 192 "stratify.m"
          }
#line 179 "stratify.m"
        else
#line 179 "stratify.m"
          if (((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 2))))
#line 212 "stratify.m"
            {
#line 212 "stratify.m"
              MR_Word check_hlds__stratify__CPred_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)));
#line 212 "stratify.m"
              MR_Integer check_hlds__stratify__CProc_103 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
#line 212 "stratify.m"
              MR_Word check_hlds__stratify__Callee_104;
#line 210 "stratify.m"
              MR_Word check_hlds__stratify___Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 210 "stratify.m"
              MR_Word check_hlds__stratify___BuiltinState_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
#line 210 "stratify.m"
              MR_Word check_hlds__stratify___UC_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
#line 210 "stratify.m"
              MR_Word check_hlds__stratify___Sym_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 5)));
#line 215 "stratify.m"
              MR_Word check_hlds__stratify__TypeCtorInfo_92_94;

#line 213 "stratify.m"
              {
#line 213 "stratify.m"
                check_hlds__stratify__Callee_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "stratify.m"
                MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_104, 0) = ((MR_Box) (check_hlds__stratify__CPred_102));
#line 213 "stratify.m"
                MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_104, 1) = ((MR_Box) (check_hlds__stratify__CProc_103));
#line 213 "stratify.m"
              }
#line 215 "stratify.m"
              check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_10 == (MR_Integer) 1);
#line 215 "stratify.m"
              if (check_hlds__stratify__succeeded)
#line 215 "stratify.m"
                {
#line 2208 "check_hlds.stratify.c"
                  check_hlds__stratify__TypeCtorInfo_92_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 216 "stratify.m"
                  {
#line 216 "stratify.m"
                    check_hlds__stratify__succeeded = mercury__list__member_2_p_0(check_hlds__stratify__TypeCtorInfo_92_94, ((MR_Box) (check_hlds__stratify__Callee_104)), check_hlds__stratify__WholeScc_11);
                  }
#line 215 "stratify.m"
                }
#line 223 "stratify.m"
              if (check_hlds__stratify__succeeded)
#line 218 "stratify.m"
                {
#line 218 "stratify.m"
                  MR_Word check_hlds__stratify__Context_95;
#line 218 "stratify.m"
                  MR_Word check_hlds__stratify__Spec_97;

#line 218 "stratify.m"
                  {
#line 218 "stratify.m"
                    check_hlds__stratify__Context_95 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_17);
                  }
#line 220 "stratify.m"
                  {
#line 220 "stratify.m"
                    check_hlds__stratify__Spec_97 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__Context_95, (MR_String) "call introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_13);
                  }
#line 222 "stratify.m"
                  {
#line 222 "stratify.m"
                    MR_Word base;
#line 222 "stratify.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "stratify.m"
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = base;
#line 222 "stratify.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_97));
#line 222 "stratify.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_66));
#line 222 "stratify.m"
                  }
#line 218 "stratify.m"
                }
#line 223 "stratify.m"
              else
#line 222 "stratify.m"
                *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 212 "stratify.m"
            }
#line 179 "stratify.m"
          else
#line 179 "stratify.m"
            if (((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 1))))
#line 230 "stratify.m"
              *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 179 "stratify.m"
            else
#line 179 "stratify.m"
              if (((((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 212 "stratify.m"
                {
#line 212 "stratify.m"
                  MR_Word check_hlds__stratify__CPred_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 212 "stratify.m"
                  MR_Integer check_hlds__stratify__CProc_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
#line 212 "stratify.m"
                  MR_Word check_hlds__stratify__Callee_42;
#line 211 "stratify.m"
                  MR_Word check_hlds__stratify___Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
#line 211 "stratify.m"
                  MR_Word check_hlds__stratify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
#line 211 "stratify.m"
                  MR_Word check_hlds__stratify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 5)));
#line 211 "stratify.m"
                  MR_Word check_hlds__stratify__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 6)));
#line 211 "stratify.m"
                  MR_Word check_hlds__stratify__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 7)));
#line 215 "stratify.m"
                  MR_Word check_hlds__stratify__TypeCtorInfo_92_92;

#line 213 "stratify.m"
                  {
#line 213 "stratify.m"
                    check_hlds__stratify__Callee_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 213 "stratify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_42, 0) = ((MR_Box) (check_hlds__stratify__CPred_31));
#line 213 "stratify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_42, 1) = ((MR_Box) (check_hlds__stratify__CProc_32));
#line 213 "stratify.m"
                  }
#line 215 "stratify.m"
                  check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_10 == (MR_Integer) 1);
#line 215 "stratify.m"
                  if (check_hlds__stratify__succeeded)
#line 215 "stratify.m"
                    {
#line 2305 "check_hlds.stratify.c"
                      check_hlds__stratify__TypeCtorInfo_92_92 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 216 "stratify.m"
                      {
#line 216 "stratify.m"
                        check_hlds__stratify__succeeded = mercury__list__member_2_p_0(check_hlds__stratify__TypeCtorInfo_92_92, ((MR_Box) (check_hlds__stratify__Callee_42)), check_hlds__stratify__WholeScc_11);
                      }
#line 215 "stratify.m"
                    }
#line 223 "stratify.m"
                  if (check_hlds__stratify__succeeded)
#line 218 "stratify.m"
                    {
#line 218 "stratify.m"
                      MR_Word check_hlds__stratify__Context_43;
#line 218 "stratify.m"
                      MR_Word check_hlds__stratify__Spec_45;

#line 218 "stratify.m"
                      {
#line 218 "stratify.m"
                        check_hlds__stratify__Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_17);
                      }
#line 220 "stratify.m"
                      {
#line 220 "stratify.m"
                        check_hlds__stratify__Spec_45 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__Context_43, (MR_String) "call introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_13);
                      }
#line 222 "stratify.m"
                      {
#line 222 "stratify.m"
                        MR_Word base;
#line 222 "stratify.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 222 "stratify.m"
                        *check_hlds__stratify__STATE_VARIABLE_Specs_67 = base;
#line 222 "stratify.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_45));
#line 222 "stratify.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_66));
#line 222 "stratify.m"
                      }
#line 218 "stratify.m"
                    }
#line 223 "stratify.m"
                  else
#line 222 "stratify.m"
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 212 "stratify.m"
                }
#line 179 "stratify.m"
              else
#line 179 "stratify.m"
                if (((((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 176 "stratify.m"
                  {
#line 176 "stratify.m"
                    MR_Word check_hlds__stratify__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 174 "stratify.m"
                    MR_Word check_hlds__stratify___ConjType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

#line 177 "stratify.m"
                    {
#line 177 "stratify.m"
                      check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__Goals_19, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
#line 177 "stratify.m"
                      return;
                    }
#line 176 "stratify.m"
                  }
#line 179 "stratify.m"
                else
#line 179 "stratify.m"
                  if (((((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 176 "stratify.m"
                    {
#line 176 "stratify.m"
                      MR_Word check_hlds__stratify__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

#line 177 "stratify.m"
                      {
#line 177 "stratify.m"
                        check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__Goals_93, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
#line 177 "stratify.m"
                        return;
                      }
#line 176 "stratify.m"
                    }
#line 179 "stratify.m"
                  else
#line 179 "stratify.m"
                    if (((((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 227 "stratify.m"
                      *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 179 "stratify.m"
                    else
#line 179 "stratify.m"
                      if (((((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 184 "stratify.m"
                        {
#line 184 "stratify.m"
                          MR_Word check_hlds__stratify__Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 184 "stratify.m"
                          MR_Word check_hlds__stratify__Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
#line 184 "stratify.m"
                          MR_Word check_hlds__stratify__Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
#line 184 "stratify.m"
                          MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_79_79;
#line 184 "stratify.m"
                          MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_80_80;
#line 184 "stratify.m"
                          MR_Word check_hlds__stratify___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

#line 185 "stratify.m"
                          {
#line 185 "stratify.m"
                            check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Cond_24, (MR_Integer) 1, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, &check_hlds__stratify__STATE_VARIABLE_Specs_79_79);
                          }
#line 187 "stratify.m"
                          {
#line 187 "stratify.m"
                            check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Then_25, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_79_79, &check_hlds__stratify__STATE_VARIABLE_Specs_80_80);
                          }
#line 189 "stratify.m"
                          /* direct tailcall eliminated */
#line 189 "stratify.m"
                          {
#line 189 "stratify.m"
                            MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__Else_26;
#line 189 "stratify.m"
                            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_66 = check_hlds__stratify__STATE_VARIABLE_Specs_80_80;

#line 189 "stratify.m"
                            check_hlds__stratify__STATE_VARIABLE_Specs_0_66 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_66;
#line 189 "stratify.m"
                            check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
#line 189 "stratify.m"
                          }
#line 189 "stratify.m"
                          continue;
#line 184 "stratify.m"
                        }
#line 179 "stratify.m"
                      else
#line 179 "stratify.m"
                        if (((((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 196 "stratify.m"
                          {
#line 196 "stratify.m"
                            MR_Word check_hlds__stratify__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
#line 196 "stratify.m"
                            MR_Word check_hlds__stratify__SubGoal_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 198 "stratify.m"
                            MR_Word check_hlds__stratify__FGT_30;
#line 198 "stratify.m"
                            MR_Word check_hlds__stratify__V_29_29;

#line 198 "stratify.m"
                            check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__Reason_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 198 "stratify.m"
                            if (check_hlds__stratify__succeeded)
#line 198 "stratify.m"
                              {
#line 198 "stratify.m"
                                check_hlds__stratify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 1)));
#line 198 "stratify.m"
                                check_hlds__stratify__FGT_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 2)));
#line 200 "stratify.m"
                                if ((check_hlds__stratify__FGT_30 == (MR_Integer) 1))
#line 199 "stratify.m"
                                  check_hlds__stratify__succeeded = MR_TRUE;
#line 200 "stratify.m"
                                else
#line 200 "stratify.m"
                                  if ((check_hlds__stratify__FGT_30 == (MR_Integer) 2))
#line 200 "stratify.m"
                                    check_hlds__stratify__succeeded = MR_TRUE;
#line 200 "stratify.m"
                                  else
#line 200 "stratify.m"
                                    check_hlds__stratify__succeeded = MR_FALSE;
#line 198 "stratify.m"
                              }
#line 205 "stratify.m"
                            if (check_hlds__stratify__succeeded)
#line 200 "stratify.m"
                              *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 205 "stratify.m"
                            else
#line 206 "stratify.m"
                              {
#line 206 "stratify.m"
                                /* direct tailcall eliminated */
#line 206 "stratify.m"
                                {
#line 206 "stratify.m"
                                  MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_84;

#line 206 "stratify.m"
                                  check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
#line 206 "stratify.m"
                                }
#line 206 "stratify.m"
                                continue;
#line 206 "stratify.m"
                              }
#line 196 "stratify.m"
                          }
#line 179 "stratify.m"
                        else
#line 179 "stratify.m"
                          if (((((MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 233 "stratify.m"
                            {
#line 233 "stratify.m"
                              MR_Word check_hlds__stratify__ShortHand_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

#line 240 "stratify.m"
                              if (((MR_tag((MR_Word) check_hlds__stratify__ShortHand_54)) == (MR_mktag((MR_Integer) 1))))
#line 235 "stratify.m"
                                {
#line 235 "stratify.m"
                                  MR_Word check_hlds__stratify__MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 4)));
#line 235 "stratify.m"
                                  MR_Word check_hlds__stratify__OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 5)));
#line 235 "stratify.m"
                                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_72_72;
#line 235 "stratify.m"
                                  MR_Word check_hlds__stratify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 0)));
#line 235 "stratify.m"
                                  MR_Word check_hlds__stratify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 1)));
#line 235 "stratify.m"
                                  MR_Word check_hlds__stratify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 2)));
#line 235 "stratify.m"
                                  MR_Word check_hlds__stratify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 3)));
#line 235 "stratify.m"
                                  MR_Word check_hlds__stratify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 6)));

#line 236 "stratify.m"
                                  {
#line 236 "stratify.m"
                                    check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__MainGoal_59, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, &check_hlds__stratify__STATE_VARIABLE_Specs_72_72);
                                  }
#line 238 "stratify.m"
                                  {
#line 238 "stratify.m"
                                    check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__OrElseGoals_60, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_72_72, check_hlds__stratify__STATE_VARIABLE_Specs_67);
#line 238 "stratify.m"
                                    return;
                                  }
#line 235 "stratify.m"
                                }
#line 240 "stratify.m"
                              else
#line 240 "stratify.m"
                                if (((MR_tag((MR_Word) check_hlds__stratify__ShortHand_54)) == (MR_mktag((MR_Integer) 0))))
#line 245 "stratify.m"
                                  {
#line 247 "stratify.m"
                                    {
#line 247 "stratify.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.first_order_check_goal\'/8", (MR_String) "bi_implication");
#line 247 "stratify.m"
                                      return;
                                    }
#line 245 "stratify.m"
                                  }
#line 240 "stratify.m"
                                else
#line 241 "stratify.m"
                                  {
#line 241 "stratify.m"
                                    MR_Word check_hlds__stratify__SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 2)));
#line 241 "stratify.m"
                                    MR_Word check_hlds__stratify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 0)));
#line 241 "stratify.m"
                                    MR_Word check_hlds__stratify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 1)));

#line 242 "stratify.m"
                                    /* direct tailcall eliminated */
#line 242 "stratify.m"
                                    {
#line 242 "stratify.m"
                                      MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_89;

#line 242 "stratify.m"
                                      check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
#line 242 "stratify.m"
                                    }
#line 242 "stratify.m"
                                    continue;
#line 241 "stratify.m"
                                  }
#line 233 "stratify.m"
                            }
#line 179 "stratify.m"
                          else
#line 180 "stratify.m"
                            {
#line 180 "stratify.m"
                              MR_Word check_hlds__stratify__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
#line 180 "stratify.m"
                              MR_Word check_hlds__stratify___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
#line 180 "stratify.m"
                              MR_Word check_hlds__stratify___Fail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));

#line 181 "stratify.m"
                              {
#line 181 "stratify.m"
                                check_hlds__stratify__first_order_check_cases_8_p_0(check_hlds__stratify__Cases_22, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
#line 181 "stratify.m"
                                return;
                              }
#line 180 "stratify.m"
                            }
#line 171 "stratify.m"
      }
#line 171 "stratify.m"
      break;
#line 171 "stratify.m"
    }
#line 166 "stratify.m"
}

#line 149 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_scc_2_6_p_0(
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_3,
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_4,
#line 149 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
#line 149 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6)
#line 149 "stratify.m"
{
#line 153 "stratify.m"
  while (MR_TRUE)
#line 153 "stratify.m"
    {
#line 153 "stratify.m"
      /* tailcall optimized into a loop */
#line 153 "stratify.m"
      {
#line 153 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;

#line 153 "stratify.m"
        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 153 "stratify.m"
          *check_hlds__stratify__STATE_VARIABLE_Specs_6 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
#line 153 "stratify.m"
        else
#line 155 "stratify.m"
          {
#line 155 "stratify.m"
            MR_Word check_hlds__stratify__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 155 "stratify.m"
            MR_Word check_hlds__stratify__Remaining_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "stratify.m"
            MR_Word check_hlds__stratify__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 0)));
#line 155 "stratify.m"
            MR_Integer check_hlds__stratify__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 1)));
#line 155 "stratify.m"
            MR_Word check_hlds__stratify__PredInfo_21;
#line 155 "stratify.m"
            MR_Word check_hlds__stratify__ProcTable_22;
#line 155 "stratify.m"
            MR_Word check_hlds__stratify__Proc_23;
#line 155 "stratify.m"
            MR_Word check_hlds__stratify__Goal_24;
#line 155 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_28_28;
#line 159 "stratify.m"
            MR_Box check_hlds__stratify__conv0_Proc_23;

#line 157 "stratify.m"
            {
#line 157 "stratify.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__PredId_19, &check_hlds__stratify__PredInfo_21);
            }
#line 158 "stratify.m"
            {
#line 158 "stratify.m"
              hlds__hlds_pred__pred_info_get_procedures_2_p_0(check_hlds__stratify__PredInfo_21, &check_hlds__stratify__ProcTable_22);
            }
#line 159 "stratify.m"
            {
#line 159 "stratify.m"
              mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_id_0, (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__stratify__ProcTable_22, ((MR_Box) (check_hlds__stratify__ProcId_20)), &check_hlds__stratify__conv0_Proc_23);
            }
#line 159 "stratify.m"
            check_hlds__stratify__Proc_23 = ((MR_Word) check_hlds__stratify__conv0_Proc_23);
#line 160 "stratify.m"
            {
#line 160 "stratify.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__stratify__Proc_23, &check_hlds__stratify__Goal_24);
            }
#line 161 "stratify.m"
            {
#line 161 "stratify.m"
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_24, (MR_Integer) 0, check_hlds__stratify__HeadVar__2_2, check_hlds__stratify__PredProcId_13, check_hlds__stratify__ErrorOrWarning_3, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_28_28);
            }
#line 163 "stratify.m"
            /* direct tailcall eliminated */
#line 163 "stratify.m"
            {
#line 163 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Remaining_14;
#line 163 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_28_28;

#line 163 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_Specs_0_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 163 "stratify.m"
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
#line 163 "stratify.m"
            }
#line 163 "stratify.m"
            continue;
#line 155 "stratify.m"
          }
#line 153 "stratify.m"
      }
#line 153 "stratify.m"
      break;
#line 153 "stratify.m"
    }
#line 149 "stratify.m"
}

#line 121 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__StratifiedPreds_2,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__Warn0_3,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_4,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
#line 121 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6)
#line 121 "stratify.m"
{
#line 126 "stratify.m"
  while (MR_TRUE)
#line 126 "stratify.m"
    {
#line 126 "stratify.m"
      /* tailcall optimized into a loop */
#line 126 "stratify.m"
      {
#line 126 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;

#line 126 "stratify.m"
        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 126 "stratify.m"
          *check_hlds__stratify__STATE_VARIABLE_Specs_6 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
#line 126 "stratify.m"
        else
#line 128 "stratify.m"
          {
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__TypeCtorInfo_28_28;
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__SCCl_13;
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__SCCs_14;
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__Rest_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__Intersection_20;
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_26_26;

#line 127 "stratify.m"
            check_hlds__stratify__SCCl_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__V_24_24, (MR_Integer) 0)));
#line 127 "stratify.m"
            check_hlds__stratify__SCCs_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__V_24_24, (MR_Integer) 1)));
#line 2796 "check_hlds.stratify.c"
            check_hlds__stratify__TypeCtorInfo_28_28 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 129 "stratify.m"
            {
#line 129 "stratify.m"
              mercury__set__intersect_3_p_0(check_hlds__stratify__TypeCtorInfo_28_28, check_hlds__stratify__SCCs_14, check_hlds__stratify__StratifiedPreds_2, &check_hlds__stratify__Intersection_20);
            }
#line 130 "stratify.m"
            {
#line 130 "stratify.m"
              check_hlds__stratify__succeeded = mercury__set__is_empty_1_p_0(check_hlds__stratify__TypeCtorInfo_28_28, check_hlds__stratify__Intersection_20);
            }
#line 2808 "check_hlds.stratify.c"
            if (check_hlds__stratify__succeeded)
#line 138 "stratify.m"
              if ((check_hlds__stratify__Warn0_3 == (MR_Integer) 0))
#line 139 "stratify.m"
                check_hlds__stratify__STATE_VARIABLE_Specs_26_26 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
#line 138 "stratify.m"
              else
#line 136 "stratify.m"
                {
#line 147 "stratify.m"
                  {
#line 147 "stratify.m"
                    check_hlds__stratify__first_order_check_scc_2_6_p_0(check_hlds__stratify__SCCl_13, check_hlds__stratify__SCCl_13, (MR_Integer) 1, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_26_26);
                  }
#line 136 "stratify.m"
                }
#line 2825 "check_hlds.stratify.c"
            else
#line 2827 "check_hlds.stratify.c"
              {
#line 147 "stratify.m"
                {
#line 147 "stratify.m"
                  check_hlds__stratify__first_order_check_scc_2_6_p_0(check_hlds__stratify__SCCl_13, check_hlds__stratify__SCCl_13, (MR_Integer) 1, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_26_26);
                }
#line 2834 "check_hlds.stratify.c"
              }
#line 141 "stratify.m"
            /* direct tailcall eliminated */
#line 141 "stratify.m"
            {
#line 141 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Rest_15;
#line 141 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_26_26;

#line 141 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_Specs_0_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 141 "stratify.m"
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
#line 141 "stratify.m"
            }
#line 141 "stratify.m"
            continue;
#line 128 "stratify.m"
          }
#line 126 "stratify.m"
      }
#line 126 "stratify.m"
      break;
#line 126 "stratify.m"
    }
#line 121 "stratify.m"
}

#line 115 "stratify.m"
static void MR_CALL 
check_hlds__stratify__get_proc_id_2_p_0(
#line 115 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 115 "stratify.m"
  MR_Word * check_hlds__stratify__PredId_3)
#line 115 "stratify.m"
{
#line 117 "stratify.m"
  {
#line 117 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 117 "stratify.m"
    MR_Integer check_hlds__stratify__V_4_4;

#line 117 "stratify.m"
    *check_hlds__stratify__PredId_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 117 "stratify.m"
    check_hlds__stratify__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 117 "stratify.m"
  }
#line 115 "stratify.m"
}

#line 110 "stratify.m"
static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0_1(
#line 110 "stratify.m"
  MR_Box check_hlds__stratify__closure_arg,
#line 110 "stratify.m"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 110 "stratify.m"
  MR_Box * check_hlds__stratify__wrapper_arg_2)
#line 110 "stratify.m"
{
#line 110 "stratify.m"
  {
#line 110 "stratify.m"
    MR_Box check_hlds__stratify__closure = check_hlds__stratify__closure_arg;
#line 110 "stratify.m"
    MR_Word check_hlds__stratify__conv0_PredId_3;

#line 110 "stratify.m"
    {
#line 110 "stratify.m"
      check_hlds__stratify__get_proc_id_2_p_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), &check_hlds__stratify__conv0_PredId_3);
    }
#line 110 "stratify.m"
    *check_hlds__stratify__wrapper_arg_2 = ((MR_Box) (check_hlds__stratify__conv0_PredId_3));
#line 110 "stratify.m"
  }
#line 110 "stratify.m"
}

#line 103 "stratify.m"
static void MR_CALL 
check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(
#line 103 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 103 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0_2,
#line 103 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_DepList_3)
#line 103 "stratify.m"
{
#line 107 "stratify.m"
  while (MR_TRUE)
#line 107 "stratify.m"
    {
#line 107 "stratify.m"
      /* tailcall optimized into a loop */
#line 107 "stratify.m"
      {
#line 107 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;

#line 107 "stratify.m"
        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 107 "stratify.m"
          *check_hlds__stratify__STATE_VARIABLE_DepList_3 = check_hlds__stratify__STATE_VARIABLE_DepList_0_2;
#line 107 "stratify.m"
        else
#line 108 "stratify.m"
          {
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__TypeCtorInfo_22_22;
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__PredProcSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__PredProcSets_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__PredProcList_10;
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__ProcList_11;
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__ProcSet_12;
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_16_16;
#line 108 "stratify.m"
            MR_Word check_hlds__stratify__V_17_17;

#line 109 "stratify.m"
            {
#line 109 "stratify.m"
              mercury__set__to_sorted_list_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__PredProcSet_7, &check_hlds__stratify__PredProcList_10);
            }
#line 2973 "check_hlds.stratify.c"
            check_hlds__stratify__TypeCtorInfo_22_22 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 110 "stratify.m"
            {
#line 110 "stratify.m"
              mercury__list__map_3_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__TypeCtorInfo_22_22, (MR_Word) &check_hlds__stratify_scalar_common_2[2], check_hlds__stratify__PredProcList_10, &check_hlds__stratify__ProcList_11);
            }
#line 111 "stratify.m"
            {
#line 111 "stratify.m"
              mercury__set__list_to_set_2_p_0(check_hlds__stratify__TypeCtorInfo_22_22, check_hlds__stratify__ProcList_11, &check_hlds__stratify__ProcSet_12);
            }
#line 112 "stratify.m"
            {
#line 112 "stratify.m"
              check_hlds__stratify__V_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 112 "stratify.m"
              MR_hl_field(MR_mktag(0), check_hlds__stratify__V_17_17, 0) = ((MR_Box) (check_hlds__stratify__PredProcList_10));
#line 112 "stratify.m"
              MR_hl_field(MR_mktag(0), check_hlds__stratify__V_17_17, 1) = ((MR_Box) (check_hlds__stratify__ProcSet_12));
#line 112 "stratify.m"
            }
#line 112 "stratify.m"
            {
#line 112 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_DepList_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "stratify.m"
              MR_hl_field(MR_mktag(1), check_hlds__stratify__STATE_VARIABLE_DepList_16_16, 0) = ((MR_Box) (check_hlds__stratify__V_17_17));
#line 112 "stratify.m"
              MR_hl_field(MR_mktag(1), check_hlds__stratify__STATE_VARIABLE_DepList_16_16, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_DepList_0_2));
#line 112 "stratify.m"
            }
#line 113 "stratify.m"
            /* direct tailcall eliminated */
#line 113 "stratify.m"
            {
#line 113 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__PredProcSets_8;
#line 113 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_DepList_0__tmp_copy_2 = check_hlds__stratify__STATE_VARIABLE_DepList_16_16;

#line 113 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_DepList_0_2 = check_hlds__stratify__STATE_VARIABLE_DepList_0__tmp_copy_2;
#line 113 "stratify.m"
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
#line 113 "stratify.m"
            }
#line 113 "stratify.m"
            continue;
#line 108 "stratify.m"
          }
#line 107 "stratify.m"
      }
#line 107 "stratify.m"
      break;
#line 107 "stratify.m"
    }
#line 103 "stratify.m"
}

#line 46 "stratify.m"
void MR_CALL 
check_hlds__stratify__check_module_for_stratification_3_p_0(
#line 46 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_ModuleInfo_0_13,
#line 46 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14,
#line 46 "stratify.m"
  MR_Word * check_hlds__stratify__Specs_5)
#line 46 "stratify.m"
{
#line 78 "stratify.m"
  {
#line 78 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 78 "stratify.m"
    MR_Word check_hlds__stratify__TypeCtorInfo_19_19;
#line 78 "stratify.m"
    MR_Word check_hlds__stratify__DepInfo_6;
#line 78 "stratify.m"
    MR_Word check_hlds__stratify__DepGraph0_7;
#line 78 "stratify.m"
    MR_Word check_hlds__stratify__FOSCCs1_8;
#line 78 "stratify.m"
    MR_Word check_hlds__stratify__FOSCCs_9;
#line 78 "stratify.m"
    MR_Word check_hlds__stratify__Globals_10;
#line 78 "stratify.m"
    MR_Word check_hlds__stratify__Warn_11;
#line 78 "stratify.m"
    MR_Word check_hlds__stratify__StratifiedPreds_12;

#line 79 "stratify.m"
    {
#line 79 "stratify.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(check_hlds__stratify__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14);
    }
#line 80 "stratify.m"
    {
#line 80 "stratify.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__DepInfo_6);
    }
#line 3075 "check_hlds.stratify.c"
    check_hlds__stratify__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 82 "stratify.m"
    {
#line 82 "stratify.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__DepInfo_6, &check_hlds__stratify__DepGraph0_7);
    }
#line 83 "stratify.m"
    {
#line 83 "stratify.m"
      mercury__digraph__atsort_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__DepGraph0_7, &check_hlds__stratify__FOSCCs1_8);
    }
#line 84 "stratify.m"
    {
#line 84 "stratify.m"
      check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(check_hlds__stratify__FOSCCs1_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__stratify__FOSCCs_9);
    }
#line 85 "stratify.m"
    {
#line 85 "stratify.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__Globals_10);
    }
#line 86 "stratify.m"
    {
#line 86 "stratify.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__stratify__Globals_10, (MR_Integer) 17, &check_hlds__stratify__Warn_11);
    }
#line 87 "stratify.m"
    {
#line 87 "stratify.m"
      hlds__hlds_module__module_info_get_stratified_preds_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__StratifiedPreds_12);
    }
#line 88 "stratify.m"
    {
#line 88 "stratify.m"
      check_hlds__stratify__first_order_check_sccs_6_p_0(check_hlds__stratify__FOSCCs_9, check_hlds__stratify__StratifiedPreds_12, check_hlds__stratify__Warn_11, *check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__stratify__Specs_5);
#line 88 "stratify.m"
      return;
    }
#line 78 "stratify.m"
  }
#line 46 "stratify.m"
}

void mercury__check_hlds__stratify__init(void)
{
}

void mercury__check_hlds__stratify__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_call_map_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_calls_higher_order_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_error_or_warning_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_map_0);
	MR_register_type_ctor_info(&check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0);
}

void mercury__check_hlds__stratify__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module check_hlds.stratify. */
