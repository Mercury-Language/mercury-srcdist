/*
** Automatically generated from `stratify.m'
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


/* :- module check_hlds.stratify. */
/* :- implementation. */

/*
INIT mercury__check_hlds__stratify__init
ENDINIT
*/

#include "check_hlds.stratify.mih"


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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.dependency_graph.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 143 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 146 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 149 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0;

#line 152 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1;

#line 155 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0[2];

#line 158 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2];

#line 161 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2];

#line 164 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0;

#line 167 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1;

#line 170 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0[2];

#line 173 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0[2];

#line 176 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2];

#line 179 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0;

#line 182 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1;

#line 185 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2;

#line 188 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3;

#line 191 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0[4];

#line 194 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4];

#line 197 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4];

#line 200 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0;

#line 203 "check_hlds.stratify.c"
static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2];

#line 206 "check_hlds.stratify.c"
static const MR_DuFunctorDesc check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0;

#line 209 "check_hlds.stratify.c"
static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1];

#line 212 "check_hlds.stratify.c"
static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1];

#line 215 "check_hlds.stratify.c"
static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1];

#line 218 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1];

#line 221 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
#line 224 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 226 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 229 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
#line 232 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 234 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 236 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 239 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
#line 242 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 244 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 247 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
#line 250 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 252 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 254 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 257 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
#line 260 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 262 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 265 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
#line 268 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 270 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 272 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 275 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
#line 278 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 280 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 283 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
#line 286 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 288 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 290 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 293 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
#line 296 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 298 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 301 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
#line 304 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 306 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 308 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 311 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
#line 314 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 316 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2);

#line 319 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
#line 322 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 324 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 326 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3);

#line 472 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
#line 472 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 472 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 472 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 472 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
#line 472 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 472 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 483 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
#line 483 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 483 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 483 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 464 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
#line 464 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 464 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 464 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 464 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
#line 464 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 464 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 1017 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
#line 1017 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 1017 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 1017 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 1017 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
#line 1017 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 1017 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 752 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
#line 752 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 752 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 752 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 752 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
#line 752 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 752 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 486 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
#line 486 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 486 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 486 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3);

#line 486 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
#line 486 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 486 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2);

#line 1021 "stratify.m"
static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
#line 1021 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_7,
#line 1021 "stratify.m"
  MR_Word check_hlds__stratify__PPId_8,
#line 1021 "stratify.m"
  MR_Word check_hlds__stratify__Context_9,
#line 1021 "stratify.m"
  MR_String check_hlds__stratify__Message_10,
#line 1021 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_11);

#line 264 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__Negated_2,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_3,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_4,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_6,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
#line 264 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8);

#line 252 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__Negated_2,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_3,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_4,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_6,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
#line 252 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8);

#line 167 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__Goal_9,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__Negated_10,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_11,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_12,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_13,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_14,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_66,
#line 167 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_67);

#line 150 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_scc_2_6_p_0(
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_3,
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_4,
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
#line 150 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6);

#line 121 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__MustBeStratifiedPreds_2,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__Warn_3,
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


static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[18][2];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_2[3][3];

static /* final */ const MR_Box check_hlds__stratify_scalar_common_3[1][5];




static /* final */ const MR_Box check_hlds__stratify_scalar_common_1[18][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) ((MR_String) ":"))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[2]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "bottom-up evaluation of the predicate/function."))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[4]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "itself in a negated context. This can cause problems for"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[6]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[5])))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "of the given predicate/function that allows it to call"))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[8]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[7])))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "A non-stratified loop is a loop in the call graph"))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[10]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[9])))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "In"))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[12]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "error:"))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "warning:"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[11])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &check_hlds__stratify_scalar_common_1[16]))),
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 715 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct1 check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 723 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 732 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_call_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____call_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____call_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "call_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 749 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0 = {
  (MR_String) "does_not_calls_higher_order",
  (MR_Integer) 0
};

#line 755 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1 = {
  (MR_String) "calls_higher_order",
  (MR_Integer) 1
};

#line 761 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1
};

#line 767 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_1,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_calls_higher_order_0_0
};

#line 773 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 779 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_calls_higher_order_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____calls_higher_order_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____calls_higher_order_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "calls_higher_order",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_calls_higher_order_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_calls_higher_order_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_calls_higher_order_0
};

#line 796 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0 = {
  (MR_String) "is_error",
  (MR_Integer) 0
};

#line 802 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1 = {
  (MR_String) "is_warning",
  (MR_Integer) 1
};

#line 808 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

#line 814 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0[2] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_error_or_warning_0_1
};

#line 820 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 826 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_error_or_warning_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____error_or_warning_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____error_or_warning_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "error_or_warning",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_error_or_warning_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_error_or_warning_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_error_or_warning_0
};

#line 843 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0 = {
  (MR_String) "ho_in",
  (MR_Integer) 0
};

#line 849 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1 = {
  (MR_String) "ho_out",
  (MR_Integer) 1
};

#line 855 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2 = {
  (MR_String) "ho_in_out",
  (MR_Integer) 2
};

#line 861 "check_hlds.stratify.c"
static const MR_EnumFunctorDesc check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3 = {
  (MR_String) "ho_none",
  (MR_Integer) 3
};

#line 867 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0[4] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3
};

#line 875 "check_hlds.stratify.c"
static const MR_EnumFunctorDescPtr check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0[4] = {
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_0,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_2,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_3,
  &check_hlds__stratify__check_hlds__stratify__enum_functor_desc_ho_in_out_0_1
};

#line 883 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0[4] = {
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 891 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (check_hlds__stratify____Unify____ho_in_out_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_in_out_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_in_out",
  {     check_hlds__stratify__check_hlds__stratify__enum_name_ordered_ho_in_out_0 },
  {     check_hlds__stratify__check_hlds__stratify__enum_value_ordered_ho_in_out_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_ho_in_out_0
};

#line 908 "check_hlds.stratify.c"
static const MR_FA_TypeInfo_Struct2 check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0
  }
};

#line 917 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (check_hlds__stratify____Unify____ho_map_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____ho_map_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "ho_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &check_hlds__stratify__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0check_hlds__stratify__type_ctor_info_strat_ho_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 934 "check_hlds.stratify.c"
static const MR_PseudoTypeInfo check_hlds__stratify__check_hlds__stratify__field_types_strat_ho_info_0_0[2] = {
  (MR_PseudoTypeInfo) &check_hlds__stratify__set_ordlist__ti_set_ordlist_1hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
  (MR_PseudoTypeInfo) &check_hlds__stratify__check_hlds__stratify__type_ctor_info_ho_in_out_0
};

#line 940 "check_hlds.stratify.c"
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

#line 955 "check_hlds.stratify.c"
static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

#line 960 "check_hlds.stratify.c"
static const MR_DuPtagLayout check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    check_hlds__stratify__check_hlds__stratify__du_stag_ordered_strat_ho_info_0_0
  }
};

#line 969 "check_hlds.stratify.c"
static const MR_DuFunctorDescPtr check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0[1] = {
  &check_hlds__stratify__check_hlds__stratify__du_functor_desc_strat_ho_info_0_0
};

#line 974 "check_hlds.stratify.c"
static const MR_Integer check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0[1] = {
  (MR_Integer) 0
};

#line 979 "check_hlds.stratify.c"
const MR_TypeCtorInfo_Struct check_hlds__stratify__check_hlds__stratify__type_ctor_info_strat_ho_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (check_hlds__stratify____Unify____strat_ho_info_0_0_10001)),
  ((MR_Box) (check_hlds__stratify____Compare____strat_ho_info_0_0_10001)),
  (MR_String) "check_hlds.stratify",
  (MR_String) "strat_ho_info",
  {     check_hlds__stratify__check_hlds__stratify__du_name_ordered_strat_ho_info_0 },
  {     check_hlds__stratify__check_hlds__stratify__du_ptag_ordered_strat_ho_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  check_hlds__stratify__check_hlds__stratify__functor_number_map_strat_ho_info_0
};

#line 996 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0_10001(
#line 999 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1001 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1003 "check_hlds.stratify.c"
{
#line 1005 "check_hlds.stratify.c"
  {
#line 1007 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1010 "check_hlds.stratify.c"
    {
#line 1012 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____call_map_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1015 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1017 "check_hlds.stratify.c"
  }
#line 1019 "check_hlds.stratify.c"
}

#line 1022 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0_10001(
#line 1025 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1027 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1029 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1031 "check_hlds.stratify.c"
{
#line 1033 "check_hlds.stratify.c"
  {
#line 1035 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1038 "check_hlds.stratify.c"
    {
#line 1040 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____call_map_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1043 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1045 "check_hlds.stratify.c"
  }
#line 1047 "check_hlds.stratify.c"
}

#line 1050 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0_10001(
#line 1053 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1055 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1057 "check_hlds.stratify.c"
{
#line 1059 "check_hlds.stratify.c"
  {
#line 1061 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1064 "check_hlds.stratify.c"
    {
#line 1066 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____calls_higher_order_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1069 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1071 "check_hlds.stratify.c"
  }
#line 1073 "check_hlds.stratify.c"
}

#line 1076 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0_10001(
#line 1079 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1081 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1083 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1085 "check_hlds.stratify.c"
{
#line 1087 "check_hlds.stratify.c"
  {
#line 1089 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1092 "check_hlds.stratify.c"
    {
#line 1094 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____calls_higher_order_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1097 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1099 "check_hlds.stratify.c"
  }
#line 1101 "check_hlds.stratify.c"
}

#line 1104 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0_10001(
#line 1107 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1109 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1111 "check_hlds.stratify.c"
{
#line 1113 "check_hlds.stratify.c"
  {
#line 1115 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1118 "check_hlds.stratify.c"
    {
#line 1120 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____error_or_warning_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1123 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1125 "check_hlds.stratify.c"
  }
#line 1127 "check_hlds.stratify.c"
}

#line 1130 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0_10001(
#line 1133 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1135 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1137 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1139 "check_hlds.stratify.c"
{
#line 1141 "check_hlds.stratify.c"
  {
#line 1143 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1146 "check_hlds.stratify.c"
    {
#line 1148 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____error_or_warning_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1151 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1153 "check_hlds.stratify.c"
  }
#line 1155 "check_hlds.stratify.c"
}

#line 1158 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0_10001(
#line 1161 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1163 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1165 "check_hlds.stratify.c"
{
#line 1167 "check_hlds.stratify.c"
  {
#line 1169 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1172 "check_hlds.stratify.c"
    {
#line 1174 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____ho_in_out_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1177 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1179 "check_hlds.stratify.c"
  }
#line 1181 "check_hlds.stratify.c"
}

#line 1184 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0_10001(
#line 1187 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1189 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1191 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1193 "check_hlds.stratify.c"
{
#line 1195 "check_hlds.stratify.c"
  {
#line 1197 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1200 "check_hlds.stratify.c"
    {
#line 1202 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____ho_in_out_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1205 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1207 "check_hlds.stratify.c"
  }
#line 1209 "check_hlds.stratify.c"
}

#line 1212 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0_10001(
#line 1215 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1217 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1219 "check_hlds.stratify.c"
{
#line 1221 "check_hlds.stratify.c"
  {
#line 1223 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1226 "check_hlds.stratify.c"
    {
#line 1228 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____ho_map_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1231 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1233 "check_hlds.stratify.c"
  }
#line 1235 "check_hlds.stratify.c"
}

#line 1238 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0_10001(
#line 1241 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1243 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1245 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1247 "check_hlds.stratify.c"
{
#line 1249 "check_hlds.stratify.c"
  {
#line 1251 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1254 "check_hlds.stratify.c"
    {
#line 1256 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____ho_map_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1259 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1261 "check_hlds.stratify.c"
  }
#line 1263 "check_hlds.stratify.c"
}

#line 1266 "check_hlds.stratify.c"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0_10001(
#line 1269 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_1,
#line 1271 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2)
#line 1273 "check_hlds.stratify.c"
{
#line 1275 "check_hlds.stratify.c"
  {
#line 1277 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded;

#line 1280 "check_hlds.stratify.c"
    {
#line 1282 "check_hlds.stratify.c"
      check_hlds__stratify__succeeded = check_hlds__stratify____Unify____strat_ho_info_0_0(((MR_Word) check_hlds__stratify__wrapper_arg_1), ((MR_Word) check_hlds__stratify__wrapper_arg_2));
    }
#line 1285 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1287 "check_hlds.stratify.c"
  }
#line 1289 "check_hlds.stratify.c"
}

#line 1292 "check_hlds.stratify.c"
static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0_10001(
#line 1295 "check_hlds.stratify.c"
  MR_Box * check_hlds__stratify__wrapper_arg_1,
#line 1297 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_2,
#line 1299 "check_hlds.stratify.c"
  MR_Box check_hlds__stratify__wrapper_arg_3)
#line 1301 "check_hlds.stratify.c"
{
#line 1303 "check_hlds.stratify.c"
  {
#line 1305 "check_hlds.stratify.c"
    MR_Word check_hlds__stratify__conv0_HeadVar__1_1;

#line 1308 "check_hlds.stratify.c"
    {
#line 1310 "check_hlds.stratify.c"
      check_hlds__stratify____Compare____strat_ho_info_0_0(&check_hlds__stratify__conv0_HeadVar__1_1, ((MR_Word) check_hlds__stratify__wrapper_arg_2), ((MR_Word) check_hlds__stratify__wrapper_arg_3));
    }
#line 1313 "check_hlds.stratify.c"
    *check_hlds__stratify__wrapper_arg_1 = ((MR_Box) (check_hlds__stratify__conv0_HeadVar__1_1));
#line 1315 "check_hlds.stratify.c"
  }
#line 1317 "check_hlds.stratify.c"
}

#line 472 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____strat_ho_info_0_0(
#line 472 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 472 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 472 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 472 "stratify.m"
{
#line 472 "stratify.m"
  {
#line 472 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 472 "stratify.m"
    MR_Integer check_hlds__stratify__CastX_9 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
#line 472 "stratify.m"
    MR_Integer check_hlds__stratify__CastY_10 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

#line 472 "stratify.m"
    check_hlds__stratify__succeeded = (check_hlds__stratify__CastX_9 == check_hlds__stratify__CastY_10);
#line 472 "stratify.m"
    if (check_hlds__stratify__succeeded)
#line 1344 "check_hlds.stratify.c"
      *check_hlds__stratify__HeadVar__1_1 = (MR_Integer) 0;
#line 472 "stratify.m"
    else
#line 472 "stratify.m"
      {
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__3_3, (MR_Integer) 0)));
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__3_3, (MR_Integer) 1)));
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_8_8;

#line 472 "stratify.m"
        {
#line 472 "stratify.m"
          mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], &check_hlds__stratify__V_8_8, ((MR_Box) (check_hlds__stratify__V_4_4)), ((MR_Box) (check_hlds__stratify__V_6_6)));
        }
#line 1366 "check_hlds.stratify.c"
        check_hlds__stratify__succeeded = (check_hlds__stratify__V_8_8 == (MR_Integer) 0);
#line 472 "stratify.m"
        check_hlds__stratify__succeeded = !(check_hlds__stratify__succeeded);
#line 472 "stratify.m"
        if (check_hlds__stratify__succeeded)
#line 472 "stratify.m"
          *check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__V_8_8;
#line 472 "stratify.m"
        else
#line 472 "stratify.m"
          {
#line 472 "stratify.m"
            MR_Integer check_hlds__stratify__V_13_13 = (MR_Integer) check_hlds__stratify__V_5_5;
#line 472 "stratify.m"
            MR_Integer check_hlds__stratify__V_14_14 = (MR_Integer) check_hlds__stratify__V_7_7;

#line 472 "stratify.m"
            {
#line 472 "stratify.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__V_13_13, check_hlds__stratify__V_14_14);
            }
#line 472 "stratify.m"
          }
#line 472 "stratify.m"
      }
#line 472 "stratify.m"
  }
#line 472 "stratify.m"
}

#line 472 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____strat_ho_info_0_0(
#line 472 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 472 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 472 "stratify.m"
{
#line 472 "stratify.m"
  {
#line 472 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 472 "stratify.m"
    MR_Integer check_hlds__stratify__CastX_7 = (MR_Integer) check_hlds__stratify__HeadVar__1_1;
#line 472 "stratify.m"
    MR_Integer check_hlds__stratify__CastY_8 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;

#line 472 "stratify.m"
    check_hlds__stratify__succeeded = (check_hlds__stratify__CastX_7 == check_hlds__stratify__CastY_8);
#line 472 "stratify.m"
    if (check_hlds__stratify__succeeded)
#line 472 "stratify.m"
      check_hlds__stratify__succeeded = MR_TRUE;
#line 472 "stratify.m"
    else
#line 472 "stratify.m"
      {
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 0)));
#line 472 "stratify.m"
        MR_Word check_hlds__stratify__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadVar__2_2, (MR_Integer) 1)));

#line 1434 "check_hlds.stratify.c"
        {
#line 1436 "check_hlds.stratify.c"
          check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_1[0], ((MR_Box) (check_hlds__stratify__V_3_3)), ((MR_Box) (check_hlds__stratify__V_5_5)));
        }
#line 472 "stratify.m"
        if (check_hlds__stratify__succeeded)
#line 1441 "check_hlds.stratify.c"
          check_hlds__stratify__succeeded = (check_hlds__stratify__V_4_4 == check_hlds__stratify__V_6_6);
#line 472 "stratify.m"
      }
#line 472 "stratify.m"
    return check_hlds__stratify__succeeded;
#line 472 "stratify.m"
  }
#line 472 "stratify.m"
}

#line 483 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____ho_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], check_hlds__stratify__HeadVar__1_1, ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_5)));
    }
#line 483 "stratify.m"
  }
#line 483 "stratify.m"
}

#line 483 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_map_0_0(
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
      check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[1], ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_4)));
    }
#line 483 "stratify.m"
    return check_hlds__stratify__succeeded;
#line 483 "stratify.m"
  }
#line 483 "stratify.m"
}

#line 464 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____ho_in_out_0_0(
#line 464 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 464 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 464 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 464 "stratify.m"
{
#line 464 "stratify.m"
  {
#line 464 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 464 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
#line 464 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

#line 464 "stratify.m"
    {
#line 464 "stratify.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
#line 464 "stratify.m"
  }
#line 464 "stratify.m"
}

#line 464 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____ho_in_out_0_0(
#line 464 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 464 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 464 "stratify.m"
{
#line 1551 "check_hlds.stratify.c"
  {
#line 1553 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

#line 1556 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1558 "check_hlds.stratify.c"
  }
#line 464 "stratify.m"
}

#line 1017 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____error_or_warning_0_0(
#line 1017 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 1017 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 1017 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 1017 "stratify.m"
{
#line 1017 "stratify.m"
  {
#line 1017 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 1017 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
#line 1017 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

#line 1017 "stratify.m"
    {
#line 1017 "stratify.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
#line 1017 "stratify.m"
  }
#line 1017 "stratify.m"
}

#line 1017 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____error_or_warning_0_0(
#line 1017 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 1017 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 1017 "stratify.m"
{
#line 1602 "check_hlds.stratify.c"
  {
#line 1604 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

#line 1607 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1609 "check_hlds.stratify.c"
  }
#line 1017 "stratify.m"
}

#line 752 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____calls_higher_order_0_0(
#line 752 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 752 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 752 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 752 "stratify.m"
{
#line 752 "stratify.m"
  {
#line 752 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 752 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar1_4 = (MR_Integer) check_hlds__stratify__HeadVar__2_2;
#line 752 "stratify.m"
    MR_Integer check_hlds__stratify__Cast_HeadVar2_5 = (MR_Integer) check_hlds__stratify__HeadVar__3_3;

#line 752 "stratify.m"
    {
#line 752 "stratify.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(check_hlds__stratify__HeadVar__1_1, check_hlds__stratify__Cast_HeadVar1_4, check_hlds__stratify__Cast_HeadVar2_5);
    }
#line 752 "stratify.m"
  }
#line 752 "stratify.m"
}

#line 752 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____calls_higher_order_0_0(
#line 752 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_1,
#line 752 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 752 "stratify.m"
{
#line 1653 "check_hlds.stratify.c"
  {
#line 1655 "check_hlds.stratify.c"
    MR_bool check_hlds__stratify__succeeded = (check_hlds__stratify__HeadVar__2_1 == check_hlds__stratify__HeadVar__2_2);

#line 1658 "check_hlds.stratify.c"
    return check_hlds__stratify__succeeded;
#line 1660 "check_hlds.stratify.c"
  }
#line 752 "stratify.m"
}

#line 486 "stratify.m"
static void MR_CALL 
check_hlds__stratify____Compare____call_map_0_0(
#line 486 "stratify.m"
  MR_Word * check_hlds__stratify__HeadVar__1_1,
#line 486 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 486 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__3_3)
#line 486 "stratify.m"
{
#line 486 "stratify.m"
  {
#line 486 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 486 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar1_4 = check_hlds__stratify__HeadVar__2_2;
#line 486 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar2_5 = check_hlds__stratify__HeadVar__3_3;

#line 486 "stratify.m"
    {
#line 486 "stratify.m"
      mercury__builtin__compare_3_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], check_hlds__stratify__HeadVar__1_1, ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_4)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_5)));
    }
#line 486 "stratify.m"
  }
#line 486 "stratify.m"
}

#line 486 "stratify.m"
static MR_bool MR_CALL 
check_hlds__stratify____Unify____call_map_0_0(
#line 486 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 486 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2)
#line 486 "stratify.m"
{
#line 486 "stratify.m"
  {
#line 486 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 486 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar1_3 = check_hlds__stratify__HeadVar__1_1;
#line 486 "stratify.m"
    MR_Word check_hlds__stratify__Cast_HeadVar2_4 = check_hlds__stratify__HeadVar__2_2;

#line 486 "stratify.m"
    {
#line 486 "stratify.m"
      check_hlds__stratify__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &check_hlds__stratify_scalar_common_2[0], ((MR_Box) (check_hlds__stratify__Cast_HeadVar1_3)), ((MR_Box) (check_hlds__stratify__Cast_HeadVar2_4)));
    }
#line 486 "stratify.m"
    return check_hlds__stratify__succeeded;
#line 486 "stratify.m"
  }
#line 486 "stratify.m"
}

#line 1021 "stratify.m"
static MR_Word MR_CALL 
check_hlds__stratify__generate_stratify_error_5_f_0(
#line 1021 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_7,
#line 1021 "stratify.m"
  MR_Word check_hlds__stratify__PPId_8,
#line 1021 "stratify.m"
  MR_Word check_hlds__stratify__Context_9,
#line 1021 "stratify.m"
  MR_String check_hlds__stratify__Message_10,
#line 1021 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_11)
#line 1021 "stratify.m"
{
#line 1025 "stratify.m"
  {
#line 1025 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__Spec_12;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__TypeCtorInfo_63_63;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__PPIdDescription_13;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__Preamble_14;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__ErrOrWarnMsg_15;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__Severity_16;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__MainPieces_17;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__Msg_19;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__V_25_25;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__V_34_34;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__V_35_35;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__V_53_53;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__V_54_54;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__V_55_55;
#line 1025 "stratify.m"
    MR_Word check_hlds__stratify__V_61_61;

#line 1026 "stratify.m"
    {
#line 1026 "stratify.m"
      check_hlds__stratify__PPIdDescription_13 = hlds__hlds_error_util__describe_one_proc_name_mode_3_f_0(check_hlds__stratify__ModuleInfo_7, (MR_Integer) 1, check_hlds__stratify__PPId_8);
    }
#line 1780 "check_hlds.stratify.c"
    check_hlds__stratify__TypeCtorInfo_63_63 = (MR_Word) &parse_tree__error_util__parse_tree__error_util__type_ctor_info_format_component_0;
#line 1028 "stratify.m"
    {
#line 1028 "stratify.m"
      check_hlds__stratify__V_25_25 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, check_hlds__stratify__PPIdDescription_13, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[3]));
    }
#line 1028 "stratify.m"
    {
#line 1028 "stratify.m"
      check_hlds__stratify__Preamble_14 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, (MR_Word) MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[13]), check_hlds__stratify__V_25_25);
    }
#line 1033 "stratify.m"
#line 1033 "stratify.m"
    switch (check_hlds__stratify__ErrorOrWarning_11) {
#line 1033 "stratify.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "stratify.m"
      case (MR_Integer) 0:
#line 1034 "stratify.m"
        {
#line 1035 "stratify.m"
          check_hlds__stratify__ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[14]);
#line 1036 "stratify.m"
          check_hlds__stratify__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1034 "stratify.m"
        }
#line 1033 "stratify.m"
        break;
#line 1033 "stratify.m"
      case (MR_Integer) 1:
#line 1030 "stratify.m"
        {
#line 1031 "stratify.m"
          check_hlds__stratify__ErrOrWarnMsg_15 = (MR_Word) MR_mkword(MR_mktag(3), &check_hlds__stratify_scalar_common_1[15]);
#line 1032 "stratify.m"
          check_hlds__stratify__Severity_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1030 "stratify.m"
        }
#line 1033 "stratify.m"
        break;
#line 1033 "stratify.m"
    }
#line 1038 "stratify.m"
    {
#line 1038 "stratify.m"
      check_hlds__stratify__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "stratify.m"
      MR_hl_field(MR_mktag(3), check_hlds__stratify__V_35_35, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1038 "stratify.m"
      MR_hl_field(MR_mktag(3), check_hlds__stratify__V_35_35, 1) = ((MR_Box) (check_hlds__stratify__Message_10));
#line 1038 "stratify.m"
    }
#line 1038 "stratify.m"
    {
#line 1038 "stratify.m"
      check_hlds__stratify__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_34_34, 0) = ((MR_Box) (check_hlds__stratify__V_35_35));
#line 1038 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[1])));
#line 1038 "stratify.m"
    }
#line 1038 "stratify.m"
    {
#line 1038 "stratify.m"
      check_hlds__stratify__MainPieces_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1038 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__MainPieces_17, 0) = ((MR_Box) (check_hlds__stratify__ErrOrWarnMsg_15));
#line 1038 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__MainPieces_17, 1) = ((MR_Box) (check_hlds__stratify__V_34_34));
#line 1038 "stratify.m"
    }
#line 1045 "stratify.m"
    {
#line 1045 "stratify.m"
      check_hlds__stratify__V_55_55 = mercury__list__f_43_43_2_f_0(check_hlds__stratify__TypeCtorInfo_63_63, check_hlds__stratify__Preamble_14, check_hlds__stratify__MainPieces_17);
    }
#line 1045 "stratify.m"
    {
#line 1045 "stratify.m"
      check_hlds__stratify__V_54_54 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1045 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__V_54_54, 0) = ((MR_Box) (check_hlds__stratify__V_55_55));
#line 1045 "stratify.m"
    }
#line 1045 "stratify.m"
    {
#line 1045 "stratify.m"
      check_hlds__stratify__V_53_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_53_53, 0) = ((MR_Box) (check_hlds__stratify__V_54_54));
#line 1045 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_53_53, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &check_hlds__stratify_scalar_common_1[17])));
#line 1045 "stratify.m"
    }
#line 1044 "stratify.m"
    {
#line 1044 "stratify.m"
      check_hlds__stratify__Msg_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Msg_19, 0) = ((MR_Box) (check_hlds__stratify__Context_9));
#line 1044 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Msg_19, 1) = ((MR_Box) (check_hlds__stratify__V_53_53));
#line 1044 "stratify.m"
    }
#line 1047 "stratify.m"
    {
#line 1047 "stratify.m"
      check_hlds__stratify__V_61_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_61_61, 0) = ((MR_Box) (check_hlds__stratify__Msg_19));
#line 1047 "stratify.m"
      MR_hl_field(MR_mktag(1), check_hlds__stratify__V_61_61, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1047 "stratify.m"
    }
#line 1047 "stratify.m"
    {
#line 1047 "stratify.m"
      check_hlds__stratify__Spec_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1047 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 0) = ((MR_Box) (check_hlds__stratify__Severity_16));
#line 1047 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 1047 "stratify.m"
      MR_hl_field(MR_mktag(0), check_hlds__stratify__Spec_12, 2) = ((MR_Box) (check_hlds__stratify__V_61_61));
#line 1047 "stratify.m"
    }
#line 1025 "stratify.m"
    return check_hlds__stratify__Spec_12;
#line 1025 "stratify.m"
  }
#line 1021 "stratify.m"
}

#line 264 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_cases_8_p_0(
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__Negated_2,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_3,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_4,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_6,
#line 264 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
#line 264 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8)
#line 264 "stratify.m"
{
#line 268 "stratify.m"
  while (MR_TRUE)
#line 268 "stratify.m"
    {
#line 268 "stratify.m"
      /* tailcall optimized into a loop */
#line 268 "stratify.m"
      {
#line 268 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;

#line 268 "stratify.m"
        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 268 "stratify.m"
          *check_hlds__stratify__STATE_VARIABLE_Specs_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0_7;
#line 268 "stratify.m"
        else
#line 270 "stratify.m"
          {
#line 270 "stratify.m"
            MR_Word check_hlds__stratify__Case_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 270 "stratify.m"
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 270 "stratify.m"
            MR_Word check_hlds__stratify__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 2)));
#line 270 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_30_30;
#line 271 "stratify.m"
            MR_Word check_hlds__stratify__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 0)));
#line 271 "stratify.m"
            MR_Word check_hlds__stratify__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Case_17, (MR_Integer) 1)));

#line 272 "stratify.m"
            {
#line 272 "stratify.m"
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_27, check_hlds__stratify__Negated_2, check_hlds__stratify__WholeScc_3, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__ErrorOrWarning_5, check_hlds__stratify__ModuleInfo_6, check_hlds__stratify__STATE_VARIABLE_Specs_0_7, &check_hlds__stratify__STATE_VARIABLE_Specs_30_30);
            }
#line 274 "stratify.m"
            /* direct tailcall eliminated */
#line 274 "stratify.m"
            {
#line 274 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
#line 274 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Specs_30_30;

#line 274 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_Specs_0_7 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 274 "stratify.m"
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
#line 274 "stratify.m"
            }
#line 274 "stratify.m"
            continue;
#line 270 "stratify.m"
          }
#line 268 "stratify.m"
      }
#line 268 "stratify.m"
      break;
#line 268 "stratify.m"
    }
#line 264 "stratify.m"
}

#line 252 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_goals_8_p_0(
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__Negated_2,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_3,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_4,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_5,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_6,
#line 252 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_7,
#line 252 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_8)
#line 252 "stratify.m"
{
#line 256 "stratify.m"
  while (MR_TRUE)
#line 256 "stratify.m"
    {
#line 256 "stratify.m"
      /* tailcall optimized into a loop */
#line 256 "stratify.m"
      {
#line 256 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;

#line 256 "stratify.m"
        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "stratify.m"
          *check_hlds__stratify__STATE_VARIABLE_Specs_8 = check_hlds__stratify__STATE_VARIABLE_Specs_0_7;
#line 256 "stratify.m"
        else
#line 258 "stratify.m"
          {
#line 258 "stratify.m"
            MR_Word check_hlds__stratify__Goal_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 258 "stratify.m"
            MR_Word check_hlds__stratify__Goals_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 258 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_27_27;

#line 259 "stratify.m"
            {
#line 259 "stratify.m"
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_17, check_hlds__stratify__Negated_2, check_hlds__stratify__WholeScc_3, check_hlds__stratify__ThisPredProcId_4, check_hlds__stratify__ErrorOrWarning_5, check_hlds__stratify__ModuleInfo_6, check_hlds__stratify__STATE_VARIABLE_Specs_0_7, &check_hlds__stratify__STATE_VARIABLE_Specs_27_27);
            }
#line 261 "stratify.m"
            /* direct tailcall eliminated */
#line 261 "stratify.m"
            {
#line 261 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Goals_18;
#line 261 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7 = check_hlds__stratify__STATE_VARIABLE_Specs_27_27;

#line 261 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_Specs_0_7 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_7;
#line 261 "stratify.m"
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
#line 261 "stratify.m"
            }
#line 261 "stratify.m"
            continue;
#line 258 "stratify.m"
          }
#line 256 "stratify.m"
      }
#line 256 "stratify.m"
      break;
#line 256 "stratify.m"
    }
#line 252 "stratify.m"
}

#line 167 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_goal_8_p_0(
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__Goal_9,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__Negated_10,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__WholeScc_11,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__ThisPredProcId_12,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_13,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_14,
#line 167 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_66,
#line 167 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_67)
#line 167 "stratify.m"
{
#line 172 "stratify.m"
  while (MR_TRUE)
#line 172 "stratify.m"
    {
#line 172 "stratify.m"
      /* tailcall optimized into a loop */
#line 172 "stratify.m"
      {
#line 172 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;
#line 172 "stratify.m"
        MR_Word check_hlds__stratify__GoalExpr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_9, (MR_Integer) 0)));
#line 172 "stratify.m"
        MR_Word check_hlds__stratify__GoalInfo_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__Goal_9, (MR_Integer) 1)));

#line 180 "stratify.m"
#line 180 "stratify.m"
        switch (MR_tag((MR_Word) check_hlds__stratify__GoalExpr_16)) {
#line 180 "stratify.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 180 "stratify.m"
          case (MR_Integer) 0:
#line 193 "stratify.m"
            {
#line 193 "stratify.m"
              MR_Word check_hlds__stratify__SubGoal_27 = (MR_Word) MR_body(((MR_Word) check_hlds__stratify__GoalExpr_16), (MR_Integer) 0);

#line 194 "stratify.m"
              /* direct tailcall eliminated */
#line 194 "stratify.m"
              {
#line 194 "stratify.m"
                MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_27;

#line 194 "stratify.m"
                check_hlds__stratify__Negated_10 = (MR_Integer) 1;
#line 194 "stratify.m"
                check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
#line 194 "stratify.m"
              }
#line 194 "stratify.m"
              continue;
#line 193 "stratify.m"
            }
#line 180 "stratify.m"
            break;
#line 180 "stratify.m"
          case (MR_Integer) 1:
#line 231 "stratify.m"
            *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 180 "stratify.m"
            break;
#line 180 "stratify.m"
          case (MR_Integer) 2:
#line 213 "stratify.m"
            {
#line 213 "stratify.m"
              MR_Word check_hlds__stratify__CPred_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)));
#line 213 "stratify.m"
              MR_Integer check_hlds__stratify__CProc_103 = ((MR_Integer) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
#line 213 "stratify.m"
              MR_Word check_hlds__stratify__Callee_104;
#line 211 "stratify.m"
              MR_Word check_hlds__stratify___Args_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 211 "stratify.m"
              MR_Word check_hlds__stratify___BuiltinState_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
#line 211 "stratify.m"
              MR_Word check_hlds__stratify___UC_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
#line 211 "stratify.m"
              MR_Word check_hlds__stratify___Sym_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__GoalExpr_16, (MR_Integer) 5)));
#line 216 "stratify.m"
              MR_Word check_hlds__stratify__TypeCtorInfo_92_94;

#line 214 "stratify.m"
              {
#line 214 "stratify.m"
                check_hlds__stratify__Callee_104 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 214 "stratify.m"
                MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_104, 0) = ((MR_Box) (check_hlds__stratify__CPred_102));
#line 214 "stratify.m"
                MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_104, 1) = ((MR_Box) (check_hlds__stratify__CProc_103));
#line 214 "stratify.m"
              }
#line 216 "stratify.m"
              check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_10 == (MR_Integer) 1);
#line 216 "stratify.m"
              if (check_hlds__stratify__succeeded)
#line 216 "stratify.m"
                {
#line 2191 "check_hlds.stratify.c"
                  check_hlds__stratify__TypeCtorInfo_92_94 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 217 "stratify.m"
                  {
#line 217 "stratify.m"
                    check_hlds__stratify__succeeded = mercury__list__member_2_p_0(check_hlds__stratify__TypeCtorInfo_92_94, ((MR_Box) (check_hlds__stratify__Callee_104)), check_hlds__stratify__WholeScc_11);
                  }
#line 216 "stratify.m"
                }
#line 224 "stratify.m"
              if (check_hlds__stratify__succeeded)
#line 219 "stratify.m"
                {
#line 219 "stratify.m"
                  MR_Word check_hlds__stratify__Context_95;
#line 219 "stratify.m"
                  MR_Word check_hlds__stratify__Spec_97;

#line 219 "stratify.m"
                  {
#line 219 "stratify.m"
                    check_hlds__stratify__Context_95 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_17);
                  }
#line 221 "stratify.m"
                  {
#line 221 "stratify.m"
                    check_hlds__stratify__Spec_97 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__Context_95, (MR_String) "call introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_13);
                  }
#line 223 "stratify.m"
                  {
#line 223 "stratify.m"
                    MR_Word base;
#line 223 "stratify.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "stratify.m"
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = base;
#line 223 "stratify.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_97));
#line 223 "stratify.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_66));
#line 223 "stratify.m"
                  }
#line 219 "stratify.m"
                }
#line 224 "stratify.m"
              else
#line 224 "stratify.m"
                *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 213 "stratify.m"
            }
#line 180 "stratify.m"
            break;
#line 180 "stratify.m"
          case (MR_Integer) 3:
#line 180 "stratify.m"
#line 180 "stratify.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 0)))) {
#line 180 "stratify.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 180 "stratify.m"
              case (MR_Integer) 0:
#line 228 "stratify.m"
                *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 180 "stratify.m"
                break;
#line 180 "stratify.m"
              case (MR_Integer) 1:
#line 213 "stratify.m"
                {
#line 213 "stratify.m"
                  MR_Word check_hlds__stratify__CPred_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 213 "stratify.m"
                  MR_Integer check_hlds__stratify__CProc_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
#line 213 "stratify.m"
                  MR_Word check_hlds__stratify__Callee_42;
#line 212 "stratify.m"
                  MR_Word check_hlds__stratify___Attributes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
#line 212 "stratify.m"
                  MR_Word check_hlds__stratify__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
#line 212 "stratify.m"
                  MR_Word check_hlds__stratify__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 5)));
#line 212 "stratify.m"
                  MR_Word check_hlds__stratify__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 6)));
#line 212 "stratify.m"
                  MR_Word check_hlds__stratify__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 7)));
#line 216 "stratify.m"
                  MR_Word check_hlds__stratify__TypeCtorInfo_92_92;

#line 214 "stratify.m"
                  {
#line 214 "stratify.m"
                    check_hlds__stratify__Callee_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 214 "stratify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_42, 0) = ((MR_Box) (check_hlds__stratify__CPred_31));
#line 214 "stratify.m"
                    MR_hl_field(MR_mktag(0), check_hlds__stratify__Callee_42, 1) = ((MR_Box) (check_hlds__stratify__CProc_32));
#line 214 "stratify.m"
                  }
#line 216 "stratify.m"
                  check_hlds__stratify__succeeded = (check_hlds__stratify__Negated_10 == (MR_Integer) 1);
#line 216 "stratify.m"
                  if (check_hlds__stratify__succeeded)
#line 216 "stratify.m"
                    {
#line 2295 "check_hlds.stratify.c"
                      check_hlds__stratify__TypeCtorInfo_92_92 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 217 "stratify.m"
                      {
#line 217 "stratify.m"
                        check_hlds__stratify__succeeded = mercury__list__member_2_p_0(check_hlds__stratify__TypeCtorInfo_92_92, ((MR_Box) (check_hlds__stratify__Callee_42)), check_hlds__stratify__WholeScc_11);
                      }
#line 216 "stratify.m"
                    }
#line 224 "stratify.m"
                  if (check_hlds__stratify__succeeded)
#line 219 "stratify.m"
                    {
#line 219 "stratify.m"
                      MR_Word check_hlds__stratify__Context_43;
#line 219 "stratify.m"
                      MR_Word check_hlds__stratify__Spec_45;

#line 219 "stratify.m"
                      {
#line 219 "stratify.m"
                        check_hlds__stratify__Context_43 = hlds__hlds_goal__goal_info_get_context_1_f_0(check_hlds__stratify__GoalInfo_17);
                      }
#line 221 "stratify.m"
                      {
#line 221 "stratify.m"
                        check_hlds__stratify__Spec_45 = check_hlds__stratify__generate_stratify_error_5_f_0(check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__Context_43, (MR_String) "call introduces a non-stratified loop.", check_hlds__stratify__ErrorOrWarning_13);
                      }
#line 223 "stratify.m"
                      {
#line 223 "stratify.m"
                        MR_Word base;
#line 223 "stratify.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 223 "stratify.m"
                        *check_hlds__stratify__STATE_VARIABLE_Specs_67 = base;
#line 223 "stratify.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (check_hlds__stratify__Spec_45));
#line 223 "stratify.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (check_hlds__stratify__STATE_VARIABLE_Specs_0_66));
#line 223 "stratify.m"
                      }
#line 219 "stratify.m"
                    }
#line 224 "stratify.m"
                  else
#line 224 "stratify.m"
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 213 "stratify.m"
                }
#line 180 "stratify.m"
                break;
#line 180 "stratify.m"
              case (MR_Integer) 2:
#line 177 "stratify.m"
                {
#line 177 "stratify.m"
                  MR_Word check_hlds__stratify__Goals_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 175 "stratify.m"
                  MR_Word check_hlds__stratify___ConjType_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

#line 178 "stratify.m"
                  {
#line 178 "stratify.m"
                    check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__Goals_19, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
#line 177 "stratify.m"
                }
#line 180 "stratify.m"
                break;
#line 180 "stratify.m"
              case (MR_Integer) 3:
#line 177 "stratify.m"
                {
#line 177 "stratify.m"
                  MR_Word check_hlds__stratify__Goals_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

#line 178 "stratify.m"
                  {
#line 178 "stratify.m"
                    check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__Goals_93, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
#line 177 "stratify.m"
                }
#line 180 "stratify.m"
                break;
#line 180 "stratify.m"
              case (MR_Integer) 4:
#line 181 "stratify.m"
                {
#line 181 "stratify.m"
                  MR_Word check_hlds__stratify__Cases_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
#line 181 "stratify.m"
                  MR_Word check_hlds__stratify___Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
#line 181 "stratify.m"
                  MR_Word check_hlds__stratify___Fail_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));

#line 182 "stratify.m"
                  {
#line 182 "stratify.m"
                    check_hlds__stratify__first_order_check_cases_8_p_0(check_hlds__stratify__Cases_22, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                  }
#line 181 "stratify.m"
                }
#line 180 "stratify.m"
                break;
#line 180 "stratify.m"
              case (MR_Integer) 5:
#line 197 "stratify.m"
                {
#line 197 "stratify.m"
                  MR_Word check_hlds__stratify__Reason_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));
#line 197 "stratify.m"
                  MR_Word check_hlds__stratify__SubGoal_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 199 "stratify.m"
                  MR_Word check_hlds__stratify__FGT_30;
#line 199 "stratify.m"
                  MR_Word check_hlds__stratify__V_29_29;

#line 199 "stratify.m"
                  check_hlds__stratify__succeeded = ((((MR_tag((MR_Word) check_hlds__stratify__Reason_28)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 199 "stratify.m"
                  if (check_hlds__stratify__succeeded)
#line 199 "stratify.m"
                    {
#line 199 "stratify.m"
                      check_hlds__stratify__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 1)));
#line 199 "stratify.m"
                      check_hlds__stratify__FGT_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__Reason_28, (MR_Integer) 2)));
#line 201 "stratify.m"
#line 201 "stratify.m"
                      switch (check_hlds__stratify__FGT_30) {
#line 201 "stratify.m"
                        default:
#line 201 "stratify.m"
                          check_hlds__stratify__succeeded = MR_FALSE;
#line 201 "stratify.m"
                          break;
#line 201 "stratify.m"
                        case (MR_Integer) 1:
#line 200 "stratify.m"
                          check_hlds__stratify__succeeded = MR_TRUE;
#line 201 "stratify.m"
                          break;
#line 201 "stratify.m"
                        case (MR_Integer) 2:
#line 201 "stratify.m"
                          check_hlds__stratify__succeeded = MR_TRUE;
#line 201 "stratify.m"
                          break;
#line 201 "stratify.m"
                      }
#line 199 "stratify.m"
                    }
#line 206 "stratify.m"
                  if (check_hlds__stratify__succeeded)
#line 206 "stratify.m"
                    *check_hlds__stratify__STATE_VARIABLE_Specs_67 = check_hlds__stratify__STATE_VARIABLE_Specs_0_66;
#line 206 "stratify.m"
                  else
#line 207 "stratify.m"
                    {
#line 207 "stratify.m"
                      /* direct tailcall eliminated */
#line 207 "stratify.m"
                      {
#line 207 "stratify.m"
                        MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_84;

#line 207 "stratify.m"
                        check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
#line 207 "stratify.m"
                      }
#line 207 "stratify.m"
                      continue;
#line 207 "stratify.m"
                    }
#line 197 "stratify.m"
                }
#line 180 "stratify.m"
                break;
#line 180 "stratify.m"
              case (MR_Integer) 6:
#line 185 "stratify.m"
                {
#line 185 "stratify.m"
                  MR_Word check_hlds__stratify__Cond_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 2)));
#line 185 "stratify.m"
                  MR_Word check_hlds__stratify__Then_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 3)));
#line 185 "stratify.m"
                  MR_Word check_hlds__stratify__Else_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 4)));
#line 185 "stratify.m"
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_79_79;
#line 185 "stratify.m"
                  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_80_80;
#line 185 "stratify.m"
                  MR_Word check_hlds__stratify___Vars_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

#line 186 "stratify.m"
                  {
#line 186 "stratify.m"
                    check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Cond_24, (MR_Integer) 1, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, &check_hlds__stratify__STATE_VARIABLE_Specs_79_79);
                  }
#line 188 "stratify.m"
                  {
#line 188 "stratify.m"
                    check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Then_25, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_79_79, &check_hlds__stratify__STATE_VARIABLE_Specs_80_80);
                  }
#line 190 "stratify.m"
                  /* direct tailcall eliminated */
#line 190 "stratify.m"
                  {
#line 190 "stratify.m"
                    MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__Else_26;
#line 190 "stratify.m"
                    MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_66 = check_hlds__stratify__STATE_VARIABLE_Specs_80_80;

#line 190 "stratify.m"
                    check_hlds__stratify__STATE_VARIABLE_Specs_0_66 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_66;
#line 190 "stratify.m"
                    check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
#line 190 "stratify.m"
                  }
#line 190 "stratify.m"
                  continue;
#line 185 "stratify.m"
                }
#line 180 "stratify.m"
                break;
#line 180 "stratify.m"
              case (MR_Integer) 7:
#line 234 "stratify.m"
                {
#line 234 "stratify.m"
                  MR_Word check_hlds__stratify__ShortHand_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), check_hlds__stratify__GoalExpr_16, (MR_Integer) 1)));

#line 241 "stratify.m"
#line 241 "stratify.m"
                  switch (MR_tag((MR_Word) check_hlds__stratify__ShortHand_54)) {
#line 241 "stratify.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 241 "stratify.m"
                    case (MR_Integer) 0:
#line 246 "stratify.m"
                      {
#line 248 "stratify.m"
                        {
#line 248 "stratify.m"
                          mercury__require__unexpected_3_p_0((MR_String) "check_hlds.stratify", (MR_String) "predicate \140check_hlds.stratify.first_order_check_goal\'/8", (MR_String) "bi_implication");
#line 248 "stratify.m"
                          return;
                        }
#line 246 "stratify.m"
                      }
#line 241 "stratify.m"
                      break;
#line 241 "stratify.m"
                    case (MR_Integer) 1:
#line 236 "stratify.m"
                      {
#line 236 "stratify.m"
                        MR_Word check_hlds__stratify__MainGoal_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 4)));
#line 236 "stratify.m"
                        MR_Word check_hlds__stratify__OrElseGoals_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 5)));
#line 236 "stratify.m"
                        MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_72_72;
#line 236 "stratify.m"
                        MR_Word check_hlds__stratify__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 0)));
#line 236 "stratify.m"
                        MR_Word check_hlds__stratify__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 1)));
#line 236 "stratify.m"
                        MR_Word check_hlds__stratify__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 2)));
#line 236 "stratify.m"
                        MR_Word check_hlds__stratify__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 3)));
#line 236 "stratify.m"
                        MR_Word check_hlds__stratify__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__ShortHand_54, (MR_Integer) 6)));

#line 237 "stratify.m"
                        {
#line 237 "stratify.m"
                          check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__MainGoal_59, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_0_66, &check_hlds__stratify__STATE_VARIABLE_Specs_72_72);
                        }
#line 239 "stratify.m"
                        {
#line 239 "stratify.m"
                          check_hlds__stratify__first_order_check_goals_8_p_0(check_hlds__stratify__OrElseGoals_60, check_hlds__stratify__Negated_10, check_hlds__stratify__WholeScc_11, check_hlds__stratify__ThisPredProcId_12, check_hlds__stratify__ErrorOrWarning_13, check_hlds__stratify__ModuleInfo_14, check_hlds__stratify__STATE_VARIABLE_Specs_72_72, check_hlds__stratify__STATE_VARIABLE_Specs_67);
                        }
#line 236 "stratify.m"
                      }
#line 241 "stratify.m"
                      break;
#line 241 "stratify.m"
                    case (MR_Integer) 2:
#line 242 "stratify.m"
                      {
#line 242 "stratify.m"
                        MR_Word check_hlds__stratify__SubGoal_89 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 2)));
#line 242 "stratify.m"
                        MR_Word check_hlds__stratify__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 0)));
#line 242 "stratify.m"
                        MR_Word check_hlds__stratify__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(2), check_hlds__stratify__ShortHand_54, (MR_Integer) 1)));

#line 243 "stratify.m"
                        /* direct tailcall eliminated */
#line 243 "stratify.m"
                        {
#line 243 "stratify.m"
                          MR_Word check_hlds__stratify__Goal__tmp_copy_9 = check_hlds__stratify__SubGoal_89;

#line 243 "stratify.m"
                          check_hlds__stratify__Goal_9 = check_hlds__stratify__Goal__tmp_copy_9;
#line 243 "stratify.m"
                        }
#line 243 "stratify.m"
                        continue;
#line 242 "stratify.m"
                      }
#line 241 "stratify.m"
                      break;
#line 241 "stratify.m"
                  }
#line 234 "stratify.m"
                }
#line 180 "stratify.m"
                break;
#line 180 "stratify.m"
            }
#line 180 "stratify.m"
            break;
#line 180 "stratify.m"
        }
#line 172 "stratify.m"
      }
#line 172 "stratify.m"
      break;
#line 172 "stratify.m"
    }
#line 167 "stratify.m"
}

#line 150 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_scc_2_6_p_0(
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__2_2,
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__ErrorOrWarning_3,
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__ModuleInfo_4,
#line 150 "stratify.m"
  MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0_5,
#line 150 "stratify.m"
  MR_Word * check_hlds__stratify__STATE_VARIABLE_Specs_6)
#line 150 "stratify.m"
{
#line 154 "stratify.m"
  while (MR_TRUE)
#line 154 "stratify.m"
    {
#line 154 "stratify.m"
      /* tailcall optimized into a loop */
#line 154 "stratify.m"
      {
#line 154 "stratify.m"
        MR_bool check_hlds__stratify__succeeded;

#line 154 "stratify.m"
        if ((check_hlds__stratify__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 154 "stratify.m"
          *check_hlds__stratify__STATE_VARIABLE_Specs_6 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
#line 154 "stratify.m"
        else
#line 156 "stratify.m"
          {
#line 156 "stratify.m"
            MR_Word check_hlds__stratify__PredProcId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 156 "stratify.m"
            MR_Word check_hlds__stratify__Remaining_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 156 "stratify.m"
            MR_Word check_hlds__stratify__PredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 0)));
#line 156 "stratify.m"
            MR_Integer check_hlds__stratify__ProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), check_hlds__stratify__PredProcId_13, (MR_Integer) 1)));
#line 156 "stratify.m"
            MR_Word check_hlds__stratify__PredInfo_21;
#line 156 "stratify.m"
            MR_Word check_hlds__stratify__ProcTable_22;
#line 156 "stratify.m"
            MR_Word check_hlds__stratify__Proc_23;
#line 156 "stratify.m"
            MR_Word check_hlds__stratify__Goal_24;
#line 156 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_28_28;
#line 160 "stratify.m"
            MR_Box check_hlds__stratify__conv0_Proc_23;

#line 158 "stratify.m"
            {
#line 158 "stratify.m"
              hlds__hlds_module__module_info_pred_info_3_p_0(check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__PredId_19, &check_hlds__stratify__PredInfo_21);
            }
#line 159 "stratify.m"
            {
#line 159 "stratify.m"
              hlds__hlds_pred__pred_info_get_proc_table_2_p_0(check_hlds__stratify__PredInfo_21, &check_hlds__stratify__ProcTable_22);
            }
#line 160 "stratify.m"
            {
#line 160 "stratify.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_111_111_107_117_112_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0, check_hlds__stratify__ProcTable_22, check_hlds__stratify__ProcId_20, &check_hlds__stratify__conv0_Proc_23);
            }
#line 160 "stratify.m"
            check_hlds__stratify__Proc_23 = ((MR_Word) check_hlds__stratify__conv0_Proc_23);
#line 161 "stratify.m"
            {
#line 161 "stratify.m"
              hlds__hlds_pred__proc_info_get_goal_2_p_0(check_hlds__stratify__Proc_23, &check_hlds__stratify__Goal_24);
            }
#line 162 "stratify.m"
            {
#line 162 "stratify.m"
              check_hlds__stratify__first_order_check_goal_8_p_0(check_hlds__stratify__Goal_24, (MR_Integer) 0, check_hlds__stratify__HeadVar__2_2, check_hlds__stratify__PredProcId_13, check_hlds__stratify__ErrorOrWarning_3, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_28_28);
            }
#line 164 "stratify.m"
            /* direct tailcall eliminated */
#line 164 "stratify.m"
            {
#line 164 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__Remaining_14;
#line 164 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_28_28;

#line 164 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_Specs_0_5 = check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5;
#line 164 "stratify.m"
              check_hlds__stratify__HeadVar__1_1 = check_hlds__stratify__HeadVar__1__tmp_copy_1;
#line 164 "stratify.m"
            }
#line 164 "stratify.m"
            continue;
#line 156 "stratify.m"
          }
#line 154 "stratify.m"
      }
#line 154 "stratify.m"
      break;
#line 154 "stratify.m"
    }
#line 150 "stratify.m"
}

#line 121 "stratify.m"
static void MR_CALL 
check_hlds__stratify__first_order_check_sccs_6_p_0(
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__HeadVar__1_1,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__MustBeStratifiedPreds_2,
#line 121 "stratify.m"
  MR_Word check_hlds__stratify__Warn_3,
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
            MR_Word check_hlds__stratify__TypeCtorInfo_27_27 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0;
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__HeadSCC_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 0)));
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__TailSCCs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), check_hlds__stratify__HeadVar__1_1, (MR_Integer) 1)));
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__HeadSCCProcs_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadSCC_13, (MR_Integer) 0)));
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__HeadSCCPreds_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), check_hlds__stratify__HeadSCC_13, (MR_Integer) 1)));
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__MustBeStratifiedPredsInScc_21;
#line 128 "stratify.m"
            MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_25_25;

#line 130 "stratify.m"
            {
#line 130 "stratify.m"
              mercury__set__intersect_3_p_0(check_hlds__stratify__TypeCtorInfo_27_27, check_hlds__stratify__HeadSCCPreds_20, check_hlds__stratify__MustBeStratifiedPreds_2, &check_hlds__stratify__MustBeStratifiedPredsInScc_21);
            }
#line 133 "stratify.m"
            check_hlds__stratify__succeeded = (check_hlds__stratify__Warn_3 == (MR_Integer) 1);
#line 134 "stratify.m"
            if (!(check_hlds__stratify__succeeded))
#line 134 "stratify.m"
              {
#line 134 "stratify.m"
                check_hlds__stratify__succeeded = mercury__set__is_non_empty_1_p_0(check_hlds__stratify__TypeCtorInfo_27_27, check_hlds__stratify__MustBeStratifiedPredsInScc_21);
              }
#line 138 "stratify.m"
            if (check_hlds__stratify__succeeded)
#line 137 "stratify.m"
              {
#line 148 "stratify.m"
                {
#line 148 "stratify.m"
                  check_hlds__stratify__first_order_check_scc_2_6_p_0(check_hlds__stratify__HeadSCCProcs_19, check_hlds__stratify__HeadSCCProcs_19, (MR_Integer) 1, check_hlds__stratify__ModuleInfo_4, check_hlds__stratify__STATE_VARIABLE_Specs_0_5, &check_hlds__stratify__STATE_VARIABLE_Specs_25_25);
                }
#line 137 "stratify.m"
              }
#line 138 "stratify.m"
            else
#line 138 "stratify.m"
              check_hlds__stratify__STATE_VARIABLE_Specs_25_25 = check_hlds__stratify__STATE_VARIABLE_Specs_0_5;
#line 141 "stratify.m"
            /* direct tailcall eliminated */
#line 141 "stratify.m"
            {
#line 141 "stratify.m"
              MR_Word check_hlds__stratify__HeadVar__1__tmp_copy_1 = check_hlds__stratify__TailSCCs_14;
#line 141 "stratify.m"
              MR_Word check_hlds__stratify__STATE_VARIABLE_Specs_0__tmp_copy_5 = check_hlds__stratify__STATE_VARIABLE_Specs_25_25;

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
#line 2964 "check_hlds.stratify.c"
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
#line 77 "stratify.m"
  {
#line 77 "stratify.m"
    MR_bool check_hlds__stratify__succeeded;
#line 77 "stratify.m"
    MR_Word check_hlds__stratify__TypeCtorInfo_19_19;
#line 77 "stratify.m"
    MR_Word check_hlds__stratify__DepInfo_6;
#line 77 "stratify.m"
    MR_Word check_hlds__stratify__DepGraph0_7;
#line 77 "stratify.m"
    MR_Word check_hlds__stratify__FOSCCs1_8;
#line 77 "stratify.m"
    MR_Word check_hlds__stratify__FOSCCs_9;
#line 77 "stratify.m"
    MR_Word check_hlds__stratify__Globals_10;
#line 77 "stratify.m"
    MR_Word check_hlds__stratify__Warn_11;
#line 77 "stratify.m"
    MR_Word check_hlds__stratify__MustBeStratifiedPreds_12;

#line 78 "stratify.m"
    {
#line 78 "stratify.m"
      transform_hlds__dependency_graph__module_info_ensure_dependency_info_2_p_0(check_hlds__stratify__STATE_VARIABLE_ModuleInfo_0_13, check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14);
    }
#line 79 "stratify.m"
    {
#line 79 "stratify.m"
      hlds__hlds_module__module_info_dependency_info_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__DepInfo_6);
    }
#line 3066 "check_hlds.stratify.c"
    check_hlds__stratify__TypeCtorInfo_19_19 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 81 "stratify.m"
    {
#line 81 "stratify.m"
      hlds__hlds_module__hlds_dependency_info_get_dependency_graph_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__DepInfo_6, &check_hlds__stratify__DepGraph0_7);
    }
#line 82 "stratify.m"
    {
#line 82 "stratify.m"
      mercury__digraph__atsort_2_p_0(check_hlds__stratify__TypeCtorInfo_19_19, check_hlds__stratify__DepGraph0_7, &check_hlds__stratify__FOSCCs1_8);
    }
#line 83 "stratify.m"
    {
#line 83 "stratify.m"
      check_hlds__stratify__dep_sets_to_lists_and_sets_3_p_0(check_hlds__stratify__FOSCCs1_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &check_hlds__stratify__FOSCCs_9);
    }
#line 84 "stratify.m"
    {
#line 84 "stratify.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__Globals_10);
    }
#line 85 "stratify.m"
    {
#line 85 "stratify.m"
      libs__globals__lookup_bool_option_3_p_0(check_hlds__stratify__Globals_10, (MR_Integer) 17, &check_hlds__stratify__Warn_11);
    }
#line 86 "stratify.m"
    {
#line 86 "stratify.m"
      hlds__hlds_module__module_info_get_must_be_stratified_preds_2_p_0(*check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, &check_hlds__stratify__MustBeStratifiedPreds_12);
    }
#line 88 "stratify.m"
    {
#line 88 "stratify.m"
      check_hlds__stratify__first_order_check_sccs_6_p_0(check_hlds__stratify__FOSCCs_9, check_hlds__stratify__MustBeStratifiedPreds_12, check_hlds__stratify__Warn_11, *check_hlds__stratify__STATE_VARIABLE_ModuleInfo_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), check_hlds__stratify__Specs_5);
    }
#line 77 "stratify.m"
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
